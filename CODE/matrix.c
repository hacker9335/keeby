
#include "matrix.h"
#include "quantum.h"
#include "i2c_master.h"

#define MATRIX_ROWS_REAL 6

// ---- Row pins (Pico direct inputs) ----
static const pin_t row_pins[MATRIX_ROWS_REAL] = {
    GP0, GP1, GP2, GP3, GP4, GP5
};


static const bool col_is_mcp[MATRIX_COLS] = {
    false, false, false, false, false, false, false, false, false, false, // COL0-9
    true,  true,  true,  true,  true,                                     // COL10-14
    false, false, false, false, false                                     // COL15-19
};

static const pin_t col_pin[MATRIX_COLS] = {
    GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, // COL0-9
    NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN,                  // COL10-14 (MCP, unused here)
    GP18, GP19, GP20, GP21, GP22                             // COL15-19
};

static const uint8_t col_mcp_bit[MATRIX_COLS] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // COL0-9 (unused here)
    4, 3, 2, 0, 1,                // COL10-14
    0, 0, 0, 0, 0                 // COL15-19 (unused here)
};

#define MCP_IODIRA 0x00
#define MCP_GPPUA  0x0C
#define MCP_GPIOA  0x12

#define MCP_ADDR (MCP23017_I2C_ADDRESS << 1)
#define I2C_TIMEOUT_MS 20
#define MCP_IODIRA_VAL 0xC0 
#define MCP_GPPUA_VAL  0xC0 
#define MCP_DESELECT_BYTE 0xDF 

static uint8_t mcp_gpioa_shadow = MCP_DESELECT_BYTE;

static void mcp_write_reg(uint8_t reg, uint8_t val) {
    i2c_writeReg(MCP_ADDR, reg, &val, 1, I2C_TIMEOUT_MS);
}

static uint8_t mcp_read_reg(uint8_t reg) {
    uint8_t val = 0xFF;
    i2c_readReg(MCP_ADDR, reg, &val, 1, I2C_TIMEOUT_MS);
    return val;
}

void matrix_init_custom(void) {
    for (uint8_t r = 0; r < MATRIX_ROWS_REAL; r++) {
        setPinInputHigh(row_pins[r]);
    }
    for (uint8_t c = 0; c < MATRIX_COLS; c++) {
        if (!col_is_mcp[c]) {
            setPinInputHigh(col_pin[c]); 
        }
    }

    i2c_init();
    mcp_write_reg(MCP_IODIRA, MCP_IODIRA_VAL);
    mcp_write_reg(MCP_GPPUA, MCP_GPPUA_VAL);
    mcp_gpioa_shadow = MCP_DESELECT_BYTE;
    mcp_write_reg(MCP_GPIOA, mcp_gpioa_shadow);
}

static void select_col(uint8_t c) {
    if (col_is_mcp[c]) {
        mcp_gpioa_shadow &= ~(1 << col_mcp_bit[c]);
        mcp_write_reg(MCP_GPIOA, mcp_gpioa_shadow);
    } else {
        setPinOutput(col_pin[c]);
        writePinLow(col_pin[c]);
    }
}

static void deselect_col(uint8_t c) {
    if (col_is_mcp[c]) {
        mcp_gpioa_shadow |= (1 << col_mcp_bit[c]);
        mcp_write_reg(MCP_GPIOA, mcp_gpioa_shadow);
    } else {
        setPinInputHigh(col_pin[c]);
    }
}

static matrix_row_t read_rows(void) {
    matrix_row_t rows = 0;
    for (uint8_t r = 0; r < MATRIX_ROWS_REAL; r++) {
        if (!readPin(row_pins[r])) {
            rows |= ((matrix_row_t)1 << r);
        }
    }
    return rows;
}

bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool changed = false;

    for (uint8_t col = 0; col < MATRIX_COLS; col++) {
        select_col(col);
        matrix_output_select_delay();

        matrix_row_t pressed_rows = read_rows();

        for (uint8_t row = 0; row < MATRIX_ROWS_REAL; row++) {
            bool pressed = pressed_rows & ((matrix_row_t)1 << row);
            matrix_row_t last = current_matrix[row];
            matrix_row_t next = pressed
                ? (last | ((matrix_row_t)1 << col))
                : (last & ~((matrix_row_t)1 << col));

            if (next != last) {
                current_matrix[row] = next;
                changed = true;
            }
        }

        deselect_col(col);
        matrix_output_unselect_delay(col, false);
    }

    uint8_t gpioa = mcp_read_reg(MCP_GPIOA);
    bool enc_pressed = !(gpioa & (1 << 6));
    matrix_row_t last_enc = current_matrix[6];
    matrix_row_t next_enc = enc_pressed ? (last_enc | 1) : (last_enc & ~1);
    if (next_enc != last_enc) {
        current_matrix[6] = next_enc;
        changed = true;
    }

    return changed;
}
