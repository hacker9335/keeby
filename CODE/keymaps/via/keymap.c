#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO, // SW1  row 0 col 0
        KC_NO, // SW2  row 1 col 0
        KC_NO, // SW3  row 2 col 0
        KC_NO, // SW4  row 3 col 0
        KC_NO, // SW5  row 4 col 0
        KC_NO, // SW6  row 5 col 0
        KC_NO, // SW7  row 0 col 1
        KC_NO, // SW8  row 1 col 1
        KC_NO, // SW9  row 2 col 1
        KC_NO, // SW10  row 3 col 1
        KC_NO, // SW11  row 5 col 1
        KC_NO, // SW12  row 0 col 2
        KC_NO, // SW13  row 1 col 2
        KC_NO, // SW14  row 2 col 2
        KC_NO, // SW15  row 3 col 2
        KC_NO, // SW16  row 4 col 2
        KC_NO, // SW17  row 5 col 2
        KC_NO, // SW18  row 0 col 3
        KC_NO, // SW19  row 1 col 3
        KC_NO, // SW20  row 2 col 3
        KC_NO, // SW21  row 3 col 3
        KC_NO, // SW22  row 4 col 3
        KC_NO, // SW23  row 0 col 4
        KC_NO, // SW24  row 1 col 4
        KC_NO, // SW25  row 2 col 4
        KC_NO, // SW26  row 3 col 4
        KC_NO, // SW27  row 4 col 4
        KC_NO, // SW28  row 0 col 5
        KC_NO, // SW29  row 1 col 5
        KC_NO, // SW30  row 2 col 5
        KC_NO, // SW31  row 3 col 5
        KC_NO, // SW32  row 4 col 5
        KC_NO, // SW33  row 0 col 6
        KC_NO, // SW34  row 1 col 6
        KC_NO, // SW35  row 2 col 6
        KC_NO, // SW36  row 3 col 6
        KC_NO, // SW37  row 4 col 6
        KC_NO, // SW38  row 5 col 6
        KC_NO, // SW39  row 0 col 7
        KC_NO, // SW40  row 1 col 7
        KC_NO, // SW41  row 2 col 7
        KC_NO, // SW42  row 3 col 7
        KC_NO, // SW43  row 4 col 7
        KC_NO, // SW44  row 0 col 8
        KC_NO, // SW45  row 1 col 8
        KC_NO, // SW46  row 2 col 8
        KC_NO, // SW47  row 3 col 8
        KC_NO, // SW48  row 4 col 8
        KC_NO, // SW49  row 0 col 9
        KC_NO, // SW50  row 1 col 9
        KC_NO, // SW51  row 2 col 9
        KC_NO, // SW52  row 3 col 9
        KC_NO, // SW53  row 4 col 9
        KC_NO, // SW54  row 0 col 10
        KC_NO, // SW55  row 1 col 10
        KC_NO, // SW56  row 2 col 10
        KC_NO, // SW57  row 3 col 10
        KC_NO, // SW58  row 4 col 10
        KC_NO, // SW59  row 5 col 10
        KC_NO, // SW60  row 0 col 11
        KC_NO, // SW61  row 1 col 11
        KC_NO, // SW62  row 2 col 11
        KC_NO, // SW63  row 3 col 11
        KC_NO, // SW64  row 4 col 11
        KC_NO, // SW65  row 5 col 11
        KC_NO, // SW66  row 0 col 12
        KC_NO, // SW67  row 1 col 12
        KC_NO, // SW68  row 2 col 12
        KC_NO, // SW69  row 4 col 12
        KC_NO, // SW70  row 5 col 12
        KC_NO, // SW71  row 1 col 13
        KC_NO, // SW72  row 2 col 13
        KC_NO, // SW73  row 3 col 13
        KC_NO, // SW74  row 5 col 13
        KC_NO, // SW75  row 0 col 14
        KC_NO, // SW76  row 4 col 14
        KC_NO, // SW77  row 5 col 14
        KC_NO, // SW78  row 1 col 15
        KC_NO, // SW79  row 2 col 15
        KC_NO, // SW80  row 3 col 15
        KC_NO, // SW81  row 5 col 15
        KC_NO, // SW82  row 1 col 16
        KC_NO, // SW83  row 2 col 16
        KC_NO, // SW84  row 3 col 16
        KC_NO, // SW85  row 4 col 16
        KC_NO, // SW86  row 1 col 17
        KC_NO, // SW87  row 2 col 17
        KC_NO, // SW88  row 3 col 17
        KC_NO, // SW89  row 4 col 17
        KC_NO, // SW90  row 5 col 17
        KC_NO, // SW91  row 1 col 18
        KC_NO, // SW92  row 2 col 18
        KC_NO, // SW93  row 3 col 18
        KC_NO, // SW94  row 4 col 18
        KC_NO, // SW95  row 5 col 18
        KC_NO, // SW96  row 1 col 19
        KC_NO, // SW97  row 2 col 19
        KC_NO, // SW98  row 4 col 19
        KC_NO  // ENC_PRESS  row 6 col 0
    ),
    [1] = LAYOUT(
        KC_TRNS, // SW1
        KC_TRNS, // SW2
        KC_TRNS, // SW3
        KC_TRNS, // SW4
        KC_TRNS, // SW5
        KC_TRNS, // SW6
        KC_TRNS, // SW7
        KC_TRNS, // SW8
        KC_TRNS, // SW9
        KC_TRNS, // SW10
        KC_TRNS, // SW11
        KC_TRNS, // SW12
        KC_TRNS, // SW13
        KC_TRNS, // SW14
        KC_TRNS, // SW15
        KC_TRNS, // SW16
        KC_TRNS, // SW17
        KC_TRNS, // SW18
        KC_TRNS, // SW19
        KC_TRNS, // SW20
        KC_TRNS, // SW21
        KC_TRNS, // SW22
        KC_TRNS, // SW23
        KC_TRNS, // SW24
        KC_TRNS, // SW25
        KC_TRNS, // SW26
        KC_TRNS, // SW27
        KC_TRNS, // SW28
        KC_TRNS, // SW29
        KC_TRNS, // SW30
        KC_TRNS, // SW31
        KC_TRNS, // SW32
        KC_TRNS, // SW33
        KC_TRNS, // SW34
        KC_TRNS, // SW35
        KC_TRNS, // SW36
        KC_TRNS, // SW37
        KC_TRNS, // SW38
        KC_TRNS, // SW39
        KC_TRNS, // SW40
        KC_TRNS, // SW41
        KC_TRNS, // SW42
        KC_TRNS, // SW43
        KC_TRNS, // SW44
        KC_TRNS, // SW45
        KC_TRNS, // SW46
        KC_TRNS, // SW47
        KC_TRNS, // SW48
        KC_TRNS, // SW49
        KC_TRNS, // SW50
        KC_TRNS, // SW51
        KC_TRNS, // SW52
        KC_TRNS, // SW53
        KC_TRNS, // SW54
        KC_TRNS, // SW55
        KC_TRNS, // SW56
        KC_TRNS, // SW57
        KC_TRNS, // SW58
        KC_TRNS, // SW59
        KC_TRNS, // SW60
        KC_TRNS, // SW61
        KC_TRNS, // SW62
        KC_TRNS, // SW63
        KC_TRNS, // SW64
        KC_TRNS, // SW65
        KC_TRNS, // SW66
        KC_TRNS, // SW67
        KC_TRNS, // SW68
        KC_TRNS, // SW69
        KC_TRNS, // SW70
        KC_TRNS, // SW71
        KC_TRNS, // SW72
        KC_TRNS, // SW73
        KC_TRNS, // SW74
        KC_TRNS, // SW75
        KC_TRNS, // SW76
        KC_TRNS, // SW77
        KC_TRNS, // SW78
        KC_TRNS, // SW79
        KC_TRNS, // SW80
        KC_TRNS, // SW81
        KC_TRNS, // SW82
        KC_TRNS, // SW83
        KC_TRNS, // SW84
        KC_TRNS, // SW85
        KC_TRNS, // SW86
        KC_TRNS, // SW87
        KC_TRNS, // SW88
        KC_TRNS, // SW89
        KC_TRNS, // SW90
        KC_TRNS, // SW91
        KC_TRNS, // SW92
        KC_TRNS, // SW93
        KC_TRNS, // SW94
        KC_TRNS, // SW95
        KC_TRNS, // SW96
        KC_TRNS, // SW97
        KC_TRNS, // SW98
        KC_TRNS  // ENC_PRESS
    ),
    [2] = LAYOUT(
        KC_TRNS, // SW1
        KC_TRNS, // SW2
        KC_TRNS, // SW3
        KC_TRNS, // SW4
        KC_TRNS, // SW5
        KC_TRNS, // SW6
        KC_TRNS, // SW7
        KC_TRNS, // SW8
        KC_TRNS, // SW9
        KC_TRNS, // SW10
        KC_TRNS, // SW11
        KC_TRNS, // SW12
        KC_TRNS, // SW13
        KC_TRNS, // SW14
        KC_TRNS, // SW15
        KC_TRNS, // SW16
        KC_TRNS, // SW17
        KC_TRNS, // SW18
        KC_TRNS, // SW19
        KC_TRNS, // SW20
        KC_TRNS, // SW21
        KC_TRNS, // SW22
        KC_TRNS, // SW23
        KC_TRNS, // SW24
        KC_TRNS, // SW25
        KC_TRNS, // SW26
        KC_TRNS, // SW27
        KC_TRNS, // SW28
        KC_TRNS, // SW29
        KC_TRNS, // SW30
        KC_TRNS, // SW31
        KC_TRNS, // SW32
        KC_TRNS, // SW33
        KC_TRNS, // SW34
        KC_TRNS, // SW35
        KC_TRNS, // SW36
        KC_TRNS, // SW37
        KC_TRNS, // SW38
        KC_TRNS, // SW39
        KC_TRNS, // SW40
        KC_TRNS, // SW41
        KC_TRNS, // SW42
        KC_TRNS, // SW43
        KC_TRNS, // SW44
        KC_TRNS, // SW45
        KC_TRNS, // SW46
        KC_TRNS, // SW47
        KC_TRNS, // SW48
        KC_TRNS, // SW49
        KC_TRNS, // SW50
        KC_TRNS, // SW51
        KC_TRNS, // SW52
        KC_TRNS, // SW53
        KC_TRNS, // SW54
        KC_TRNS, // SW55
        KC_TRNS, // SW56
        KC_TRNS, // SW57
        KC_TRNS, // SW58
        KC_TRNS, // SW59
        KC_TRNS, // SW60
        KC_TRNS, // SW61
        KC_TRNS, // SW62
        KC_TRNS, // SW63
        KC_TRNS, // SW64
        KC_TRNS, // SW65
        KC_TRNS, // SW66
        KC_TRNS, // SW67
        KC_TRNS, // SW68
        KC_TRNS, // SW69
        KC_TRNS, // SW70
        KC_TRNS, // SW71
        KC_TRNS, // SW72
        KC_TRNS, // SW73
        KC_TRNS, // SW74
        KC_TRNS, // SW75
        KC_TRNS, // SW76
        KC_TRNS, // SW77
        KC_TRNS, // SW78
        KC_TRNS, // SW79
        KC_TRNS, // SW80
        KC_TRNS, // SW81
        KC_TRNS, // SW82
        KC_TRNS, // SW83
        KC_TRNS, // SW84
        KC_TRNS, // SW85
        KC_TRNS, // SW86
        KC_TRNS, // SW87
        KC_TRNS, // SW88
        KC_TRNS, // SW89
        KC_TRNS, // SW90
        KC_TRNS, // SW91
        KC_TRNS, // SW92
        KC_TRNS, // SW93
        KC_TRNS, // SW94
        KC_TRNS, // SW95
        KC_TRNS, // SW96
        KC_TRNS, // SW97
        KC_TRNS, // SW98
        KC_TRNS  // ENC_PRESS
    ),
    [3] = LAYOUT(
        KC_TRNS, // SW1
        KC_TRNS, // SW2
        KC_TRNS, // SW3
        KC_TRNS, // SW4
        KC_TRNS, // SW5
        KC_TRNS, // SW6
        KC_TRNS, // SW7
        KC_TRNS, // SW8
        KC_TRNS, // SW9
        KC_TRNS, // SW10
        KC_TRNS, // SW11
        KC_TRNS, // SW12
        KC_TRNS, // SW13
        KC_TRNS, // SW14
        KC_TRNS, // SW15
        KC_TRNS, // SW16
        KC_TRNS, // SW17
        KC_TRNS, // SW18
        KC_TRNS, // SW19
        KC_TRNS, // SW20
        KC_TRNS, // SW21
        KC_TRNS, // SW22
        KC_TRNS, // SW23
        KC_TRNS, // SW24
        KC_TRNS, // SW25
        KC_TRNS, // SW26
        KC_TRNS, // SW27
        KC_TRNS, // SW28
        KC_TRNS, // SW29
        KC_TRNS, // SW30
        KC_TRNS, // SW31
        KC_TRNS, // SW32
        KC_TRNS, // SW33
        KC_TRNS, // SW34
        KC_TRNS, // SW35
        KC_TRNS, // SW36
        KC_TRNS, // SW37
        KC_TRNS, // SW38
        KC_TRNS, // SW39
        KC_TRNS, // SW40
        KC_TRNS, // SW41
        KC_TRNS, // SW42
        KC_TRNS, // SW43
        KC_TRNS, // SW44
        KC_TRNS, // SW45
        KC_TRNS, // SW46
        KC_TRNS, // SW47
        KC_TRNS, // SW48
        KC_TRNS, // SW49
        KC_TRNS, // SW50
        KC_TRNS, // SW51
        KC_TRNS, // SW52
        KC_TRNS, // SW53
        KC_TRNS, // SW54
        KC_TRNS, // SW55
        KC_TRNS, // SW56
        KC_TRNS, // SW57
        KC_TRNS, // SW58
        KC_TRNS, // SW59
        KC_TRNS, // SW60
        KC_TRNS, // SW61
        KC_TRNS, // SW62
        KC_TRNS, // SW63
        KC_TRNS, // SW64
        KC_TRNS, // SW65
        KC_TRNS, // SW66
        KC_TRNS, // SW67
        KC_TRNS, // SW68
        KC_TRNS, // SW69
        KC_TRNS, // SW70
        KC_TRNS, // SW71
        KC_TRNS, // SW72
        KC_TRNS, // SW73
        KC_TRNS, // SW74
        KC_TRNS, // SW75
        KC_TRNS, // SW76
        KC_TRNS, // SW77
        KC_TRNS, // SW78
        KC_TRNS, // SW79
        KC_TRNS, // SW80
        KC_TRNS, // SW81
        KC_TRNS, // SW82
        KC_TRNS, // SW83
        KC_TRNS, // SW84
        KC_TRNS, // SW85
        KC_TRNS, // SW86
        KC_TRNS, // SW87
        KC_TRNS, // SW88
        KC_TRNS, // SW89
        KC_TRNS, // SW90
        KC_TRNS, // SW91
        KC_TRNS, // SW92
        KC_TRNS, // SW93
        KC_TRNS, // SW94
        KC_TRNS, // SW95
        KC_TRNS, // SW96
        KC_TRNS, // SW97
        KC_TRNS, // SW98
        KC_TRNS  // ENC_PRESS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif
