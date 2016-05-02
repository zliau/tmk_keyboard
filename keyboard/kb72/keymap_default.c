// Generated by Online_Complier
#include "keymap_common.h"

#define KEYMAP_KB72( \
    K00, K01, K02, K03, K04, K05, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3E, \
    K40,      K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C,      K4E, \
    K50, K51, K52,           K55,                     K5A, K5B, K5C, K5D, K5E  \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05}, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17, KC_##K18, KC_##K19, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E }, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27, KC_##K28, KC_##K29, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37, KC_##K38, KC_##K39, KC_##K3A, KC_##K3B, KC_NO   , KC_##K3D, KC_##K3E }, \
    { KC_##K40, KC_NO,    KC_##K42, KC_##K43, KC_##K44, KC_##K45, KC_##K46, KC_##K47, KC_##K48, KC_##K49, KC_##K4A, KC_##K4B, KC_##K4C, KC_NO,    KC_##K4E }, \
    { KC_##K50, KC_##K51, KC_##K52, KC_NO,    KC_NO,    KC_##K55, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##K5A, KC_##K5B, KC_##K5C, KC_##K5D, KC_##K5E }  \
}


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer:0 */
    KEYMAP_KB72(
        ESC,  F1,   F2,   F3,   F4,   F5,  \
        GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC,  INS,   \
        TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, BSLS,  DEL,   \ 
        CAPS, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT,       ENT,   RGHT,  \
        LSFT,       Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, RSFT,        UP,    \
        LCTRL,LGUI, LALT,             SPC,                          RALT, FN0,  RCTRL,LEFT,  DOWN   \
        ),
    /* Layer:1 */
    KEYMAP_KB72(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, END,        TRNS, TRNS, \
        TRNS,       TRNS, APP,   FN1,  FN2,  FN3, VOLD, VOLU, MUTE, TRNS, TRNS, TRNS,       TRNS, \
        TRNS, TRNS, TRNS,             TRNS,                         TRNS, TRNS, TRNS, TRNS, TRNS  \
        ),
};


const uint16_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_BACKLIGHT_DECREASE(),
    [2] = ACTION_BACKLIGHT_TOGGLE(),
    [3] = ACTION_BACKLIGHT_INCREASE(),
};