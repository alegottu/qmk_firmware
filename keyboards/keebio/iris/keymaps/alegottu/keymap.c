#include QMK_KEYBOARD_H

#define XXXX KC_NO
#define ____ KC_TRNS

#define DEFAULT_LAYER 0
#define NUM_LAYER 1
#define SYM_LAYER 2
#define NAV_LAYER 3
#define GAME_LAYER 4

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// 12 keys per row, 4 main rows; 5th row is thumb clusters (4 keys each, causes 2 extra keys on second to last row)
[DEFAULT_LAYER] = LAYOUT(
TO(GAME_LAYER), RGB_RMOD, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, RGB_SPD, RGB_SPI, RGB_TOG,
KC_CALC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, XXXX,
KC_MSEL, MT(MOD_LGUI,KC_A), MT(MOD_LCTL,KC_S), MT(MOD_LALT,KC_D), MT(MOD_LSFT,KC_F), KC_G, KC_H, MT(MOD_RSFT,KC_J), MT(MOD_LALT,KC_K), MT(MOD_LCTL,KC_L), MT(MOD_LGUI,KC_SCLN), XXXX,
KC_MYCM, KC_Z, KC_X, KC_C, KC_V, KC_B, XXXX, XXXX, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXX,
        XXXX, LT(NAV_LAYER,KC_TAB), MT(MOD_LSFT,KC_ENT),   LT(NUM_LAYER,KC_SPC), LT(SYM_LAYER,KC_BSPC), XXXX),

// Numpad layer
[NUM_LAYER] = LAYOUT(
KC_ESC, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
____, KC_LPRN, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_PSLS, KC_F9, KC_F10, KC_F11, KC_F12, ____,
____, KC_RPRN, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_PAST, KC_F5, KC_F6, KC_F7, KC_F8, ____,
____, ____, KC_P1, KC_P2, KC_P3, KC_PDOT,       ____, ____,      KC_PCMM, KC_F1, KC_F2, KC_F3, KC_F4, ____,
            ____, KC_PEQL, KC_P0,           ____, KC_NUM, ____),

// Symbol layer
[SYM_LAYER] = LAYOUT(
____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
____, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, ____,
____, KC_TILD, ____, ____, ____, ____, KC_PIPE, KC_PLUS, KC_EQL, KC_LCBR, KC_RCBR, ____,
____, KC_GRV, ____, ____, ____, ____,       ____, ____,        KC_BSLS, KC_MINS, KC_UNDS, KC_LBRC, KC_RBRC, ____,
            ____, KC_DQUO, KC_QUOT,             ____, ____, ____),

// Navigation layer
[NAV_LAYER] = LAYOUT(
KC_ESC, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
____, KC_ESC, ____, ____, ____, ____, ____, KC_MPLY, KC_MPRV, KC_MNXT, TO(GAME_LAYER), ____,
____, ____, ____, ____, ____, ____, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, ____, ____,
____, ____, ____, ____, ____, ____,         ____, ____,         ____, KC_HOME, KC_PGDN, KC_PGUP, KC_END, ____,
            ____, ____, ____,           ____, KC_DEL, ____),

// Gaming layer
[GAME_LAYER] = LAYOUT(
KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, TO(0), KC_QUOT,
KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RBRC,
KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,      ____, ____,         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_EQL,
            ____, KC_ENT, KC_SPC,      KC_LALT, KC_ESC, ____)

};
