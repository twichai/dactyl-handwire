// Copyright 2022 mjohns
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    BASE,
    NAV
};

#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_CAP LCTL_T(KC_CAPS)
#define ALT_BSP LALT_T(KC_BSPC)
#define LT_SCLN LT(NAV, KC_SCLN)

enum combos {
    SDF_LAYER,
    JKL_LAYER,
  };

  const uint16_t PROGMEM sdf_combo[] = {KC_S, KC_D, KC_F, COMBO_END};
  const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};


  combo_t key_combos[] = {
    [SDF_LAYER] = COMBO(sdf_combo, MO(1)),
    [JKL_LAYER] = COMBO(jkl_combo, MO(1)),
  };

  const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        QK_BOOT,  KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                                         KC_6, KC_7,    KC_8,    KC_9,   KC_0,    KC_HOME,
        KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,                                         KC_Y, KC_U,    KC_I,    KC_O,   KC_P,    KC_BSLS,
        KC_CAPS, KC_A,    KC_S,   KC_D,    KC_F,    KC_G,                                         KC_H, KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,                                         KC_N, KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                 KC_MINS, KC_EQL, KC_LBRC, KC_RBRC,                                                     KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT,
                                                          TT(NAV),  KC_DEL,     KC_PGUP, KC_RCTL,
                                                 KC_BSPC, CTL_ESC, KC_LGUI,     KC_PGDN, KC_ENT,  KC_SPC,
                                                                   KC_LALT,     KC_RALT
    ),
    [1] = LAYOUT(
        QK_BOOT,  KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                                         KC_6, KC_7,    KC_8,    KC_9,   KC_0,    KC_HOME,
        KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,                                         KC_Y, KC_U,    KC_I,    KC_O,   KC_P,    KC_BSLS,
        KC_CAPS, KC_A,    KC_S,   KC_D,    KC_F,    KC_G,                                         KC_H, KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,                                         KC_N, KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                 KC_MINS, KC_EQL, KC_LBRC, KC_RBRC,                                                     KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT,
                                                          TT(NAV),  KC_DEL,     KC_PGUP, KC_RCTL,
                                                 KC_BSPC, CTL_ESC, KC_LGUI,     KC_PGDN, KC_ENT,  KC_SPC,
                                                                   KC_LALT,     KC_RALT
          )
};
