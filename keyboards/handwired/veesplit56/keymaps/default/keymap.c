// Copyright 2023 kosciusz
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define UC_REDO     C(KC_Y)
#define UC_PASTE    C(KC_V)
#define UC_COPY     C(KC_C)
#define UC_CUT      C(KC_X)
#define UC_UNDO     C(KC_Z)
#define UC_NWORD    C(KC_RIGHT)
#define UC_PWORD    C(KC_LEFT)

#define LT_ESC      LT(_SYM1, KC_ESC)
#define LT_ENT      LT(_NAV, KC_ENT)
#define LT_BSPC     LT(_NUM, KC_BSPC)
#define LT_SPC      LT(_SYM2, KC_SPC)

enum 
    { _BASE
    , _NAV
    , _NUM
    , _SYM2
    , _SYM1
    };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  { [_BASE] = LAYOUT_split_4x6_4(
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       /**/     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       /**/     KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
        KC_LCTL,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       /**/     KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       /**/     KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                                KC_LGUI,    LT_BSPC,    LT_ESC,     KC_LALT,    /**/     KC_DEL,     LT_ENT,     LT_SPC,     KC_RALT
    )

  , [_NAV] = LAYOUT_split_4x6_4(
        KC_F12 ,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      /**/     KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     KC_PGUP,    UC_PWORD,   KC_UP  ,    UC_NWORD,   XXXXXXX,    _______,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   XXXXXXX,    KC_BSPC,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     KC_INS,     KC_HOME,    KC_PGDN,    KC_END,     XXXXXXX,    _______,
                                _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______
    )

  , [_NUM] = LAYOUT_split_4x6_4(
        _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______,    _______,    _______,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     KC_PLUS,    KC_7   ,    KC_8   ,    KC_9   ,    KC_SLSH,    _______,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     KC_MINS,    KC_4   ,    KC_5   ,    KC_6   ,    KC_ASTR,    _______,
        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     KC_EQL ,    KC_1   ,    KC_2   ,    KC_3   ,    KC_COLN,    _______,
                                _______,    _______,    _______,    _______,    /**/     KC_COMM,    KC_DOT ,    KC_0   ,    _______
    )

  , [_SYM2] = LAYOUT_split_4x6_4(
        _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______,    _______,    _______,
        KC_GRV ,    KC_LBRC,    KC_AMPR,    KC_ASTR,    KC_TILD,    KC_RBRC,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        _______,    KC_LCBR,    KC_DLR ,    KC_PERC,    KC_CIRC,    KC_RCBR,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        _______,    KC_BSLS,    KC_EXLM,    KC_AT  ,    KC_HASH,    KC_PIPE,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                _______,    KC_LPRN,    KC_RPRN,    KC_UNDS,    /**/     _______,    _______,    _______,    _______
    )

  , [_SYM1] = LAYOUT_split_4x6_4(
        _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______,    _______,    _______,
        KC_GRV ,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       /**/     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_F12,
        KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    /**/     KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_PIPE,
        _______,    KC_EQL ,    KC_MINS,    KC_PLUS,    KC_LCBR,    KC_RCBR,    /**/     KC_LBRC,    KC_RBRC,    KC_SCLN,    KC_COLON,   KC_BSLS,    _______,
                                _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______
    )

//, [_SYM2] = LAYOUT_split_4x6_4(
//      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
//      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
//      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
//      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
//                              _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______
//  )

//, [_LAYER] = LAYOUT_split_4x6_4(
//      _______,    _______,    _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______,    _______,    _______,
//      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    /**/     XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
//                              _______,    _______,    _______,    _______,    /**/     _______,    _______,    _______,    _______,
//  )
};
