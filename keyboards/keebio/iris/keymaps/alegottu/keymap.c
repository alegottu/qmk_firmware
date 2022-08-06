#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(TO(3), RGB_RMOD, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, RGB_SPD, RGB_SPI, RGB_TOG, KC_CALC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, XXXXXXX, KC_MSEL, MT(MOD_LGUI,KC_A), MT(MOD_LCTL,KC_S), MT(MOD_LALT,KC_D), KC_F, KC_G, KC_H, KC_J, MT(MOD_LALT,KC_K), MT(MOD_LCTL,KC_L), MT(MOD_LGUI,KC_SCLN), XXXXXXX, KC_MYCM, KC_Z, KC_X, KC_C, KC_V, KC_B, XXXXXXX, LT(1,KC_SPC), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXXXXX, KC_ENT, LT(1,KC_TAB), MT(MOD_LSFT,KC_ENT), LT(1,KC_SPC), LT(2,KC_BSPC), XXXXXXX),

[_LAYER1] = LAYOUT(KC_ESC, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______, _______, KC_PAST, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______, _______, KC_P1, KC_P2, KC_P3, KC_PDOT, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______, _______, KC_PEQL, KC_P0, _______, KC_DEL, _______),

[_LAYER2] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, _______, KC_TILD, _______, _______, _______, _______, KC_PIPE, KC_PLUS, KC_EQL, KC_LCBR, KC_RCBR, _______, _______, KC_GRV, _______, _______, _______, _______, _______, _______, KC_BSLS, KC_MINS, KC_UNDS, KC_LBRC, KC_RBRC, _______, _______, KC_DQUO, KC_QUOT, _______, _______, _______),

[_LAYER3] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, _______, _______, _______, _______, _______, _______, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_F9, KC_F10, KC_F11, KC_F12, TO(0), _______, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_F5, KC_F6, KC_F7, KC_F8, _______, _______, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, LT(1,KC_ENT), _______, KC_F1, KC_F2, KC_F3, KC_F4, _______, _______, KC_LGUI, KC_LALT, KC_SPC, _______, _______, _______) 

};
