/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define SFT_A   LSFT_T(KC_A)
#define MY_D   LALT_T(KC_D)
#define MY_S   LCTL_T(KC_S)
#define GUI_F   LGUI_T(KC_F)
#define GUI_J   RGUI_T(KC_J)
#define MY_L   RCTL_T(KC_L)
#define MY_K   RALT_T(KC_K)
#define SFT_SC  RSFT_T(KC_SCLN)
#define SFT_GRV LSFT_T(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------.                         ,---------------------------------------------------------------------------.
    KC_TAB,          KC_Q,          KC_W,         KC_E,         KC_R,         KC_T,                         KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_EQL,
  //|-----------------------------------------------------------------------------                          |---------------------------------------------------------------------------|
    KC_ESC,         SFT_A,          MY_S,         MY_D,        GUI_F,         KC_G,                         KC_H,        GUI_J,         MY_K,         MY_L,       SFT_SC,        KC_QUOT,
  //|-----------------------------------------------------------------------------                          |---------------------------------------------------------------------------|
    SFT_GRV,         KC_Z,          KC_X,         KC_C,         KC_V,         KC_B,                         KC_N,         KC_M,      KC_COMM,       KC_DOT,      KC_SLSH,         KC_GRV,
  //|-----------------------------------------------------------------------------|                         |---------------------------------------------------------------------------|
                                                QK_CAPS_WORD_TOGGLE, MO(1), KC_SPC,                         KC_BSPC, MO(2), XXXXXXX

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_EQL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_VOLD, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  _______, _______,       _______, MO(3), _______
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3), _______,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  _______, _______,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

const uint16_t PROGMEM enter_combo[] = {KC_SPC, KC_BSPC, COMBO_END};
combo_t key_combos[] = {
    COMBO(enter_combo, KC_ENT)
};
