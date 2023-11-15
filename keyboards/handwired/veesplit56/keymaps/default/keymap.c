// Copyright 2023 kosciusz
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define UC_REDO     C(KC_Y)
#define UC_PASTE    C(KC_V)
#define UC_COPY     C(KC_C)
#define UC_CUT      C(KC_X)
#define UC_UNDO     C(KC_Z)

enum {
    _BASE,
    _NAV,
    _SYM,
    _EXT
};

#define LT_TAB      LT(_SYM, KC_TAB)
#define LT_ENT      LT(_NAV, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_4x6_4(
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       /**/     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
        KC_ESC,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       /**/     KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_LCTL,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       /**/     KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       /**/     KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                                KC_RGUI,    KC_LALT,    KC_BSPC,    LT_TAB,     /**/     LT_ENT,     KC_SPC,     KC_DEL,     KC_RALT
    ),
    [_NAV] = LAYOUT_split_4x6_4(
        _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      /**/     KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     UC_REDO,    UC_PASTE,   UC_COPY,    UC_CUT,     UC_UNDO,    _______,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   _______,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     KC_INS,     KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     _______,
                                _______,    _______,    _______,    MO(_EXT),   /**/     _______,    _______,    _______,    _______
    ),
    [_SYM] = LAYOUT_split_4x6_4(
        _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      /**/     KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
        KC_GRV ,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       /**/     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_F12,
        _______,    S(KC_1),    S(KC_2),    S(KC_3),    S(KC_4),    S(KC_5),    /**/     S(KC_6),    S(KC_7),    S(KC_8),    S(KC_9),    S(KC_0),    S(KC_BSLS),
        _______,    KC_EQL ,    KC_MINS,    S(KC_EQL),  S(KC_LBRC), S(KC_RBRC), /**/     KC_LBRC,    KC_RBRC,    KC_SCLN,    S(KC_SCLN), KC_BSLS,    _______,
                                _______,    _______,    _______,    _______,    /**/     MO(_EXT),  _______,    _______,    _______
    ),
    [_EXT] = LAYOUT_split_4x6_4(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______
    ),
//  [_NUM] = LAYOUT_split_4x6_4(
//      _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    _______,    KC_PSLS,    KC_PAST,    KC_PMNS,    _______,
//      _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    KC_7   ,    KC_8   ,    KC_9   ,    KC_PPLS,    _______,
//      _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    KC_4   ,    KC_5   ,    KC_6   ,    KC_PPLS,    _______,
//      _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    KC_1   ,    KC_2   ,    KC_3   ,    KC_PENT,    _______,
//                              _______,    _______,    _______,    _______,    /**/     _______,    _______,    KC_0   ,    KC_DOT ,
//  ),

//  [_LAYER] = LAYOUT_split_4x6_4(
//      _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______,    _______,    _______,
//      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
//                              _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______,
//  )
};
