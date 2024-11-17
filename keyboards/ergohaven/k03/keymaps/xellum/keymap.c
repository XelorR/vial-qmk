#include QMK_KEYBOARD_H
#include "ergohaven.h"
#include "oneshot.h"
#include "swapper.h"
#include "ergohaven_ruen.h"

#define RESET QK_BOOT

#define XXXX KC_NONE

#define LA_SYM MO(_SYM)
#define LA_NAV MO(_NAV)
#define LA_GFN MO(_GFN)

#define QUOT S(KC_GRV)
#define PIPE S(KC_BSLS)
#define DPIPE S(RALT(KC_BSLS))
#define SCLN S(KC_LBRC)
#define CLN S(KC_RBRC)
#define GRV RALT(KC_GRV)
#define BSL RALT(KC_BSLS)

#define SPACE_L C(G(KC_LEFT))
#define SPACE_R C(G(KC_RGHT))

#define TAB_L C(S(KC_TAB))
#define TAB_R C(KC_TAB)

enum layers {
    _DEF,
    _RUS,
    _RFN,
    _SHT,
    _NAV,
    _SYM,
    _GAM,
    _GFN,
    _NUM,
};

enum keycodes {
    // Custom oneshot mod implementation with no timers.
    OS_SHFT = SAFE_RANGE,
    OS_CTRL,
    OS_ALT,
    OS_CMD,

    SW_WIN,  // Switch to next window         (alt-tab)
    SW_TAB,  // Switch to next browser tab    (ctrl-tab)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEF] = LAYOUT(
        _______, _______, _______, _______, _______,   _______,                                         _______, _______, _______, _______, _______, _______,
        _______, KC_Q,    KC_W,    KC_F,    KC_P,      KC_B,                                            KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,    _______,
        _______, KC_A,    KC_R,    KC_S,    KC_T,      KC_G,                                            KC_M,    KC_N,    KC_E,    KC_I,    KC_O, _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_D,      KC_V,                                            KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                          _______, _______, LG_TOGGLE, KC_SPC,  LA_NAV, _______,      _______, LA_SYM,  KC_LSFT, KC_RALT, _______, _______
    ),

    [_RUS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_RFN] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_SHT] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, C(KC_Q), C(KC_W), C(KC_F), C(KC_P), C(KC_B),                                         C(KC_J), C(KC_L), C(KC_U), C(KC_Y), C(KC_QUOT), _______,
        _______, C(KC_A), C(KC_R), C(KC_S), C(KC_T), C(KC_G),                                         C(KC_M), C(KC_N), C(KC_E), C(KC_I), C(KC_O), _______,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_D), C(KC_V),                                         C(KC_K), C(KC_H), C(KC_COMM), C(KC_DOT), C(KC_SLSH), _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, SW_TAB,  SW_WIN,  TAB_L,   TAB_R,   KC_ESC,                                          KC_ESC,  KC_HOME, KC_END,  KC_BSPC,  KC_DEL,  _______,
        _______, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, KC_ENT,                                          KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,    KC_RGHT, _______,
        _______, SPACE_L, SPACE_R, DF(_GAM), KC_PSCR, KC_TAB,                                         KC_TAB,  KC_PGUP, KC_PGDN, KC_QUOT,  KC_NUM,  _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_SYM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                                         S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______,
        _______, KC_SCLN, KC_QUOT, KC_GRV,  KC_QUOT, KC_MINS,                                         KC_PLUS, OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  _______,
        _______, BSL,     DPIPE,   SCLN,    KC_LBRC, KC_UNDS,                                         KC_EQL,  KC_RBRC, CLN,     PIPE,    KC_BSLS, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_GAM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______,  _______, _______, _______,  _______, _______,
        _______, KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,                                            _______,  _______, KC_UP,   _______,  KC_TAB,  _______,
        _______, KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,                                            _______,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_RSFT, _______,
        _______, KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,                                            _______,  _______, _______, _______,  KC_RCTL, _______,
                           _______, _______, KC_LALT, KC_SPC,  LA_GFN, _______,    _______, DF(_DEF), KC_SPC,  KC_PSCR, _______,  _______
    ),

    [_GFN] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______,  _______, _______, _______,  _______, _______,
        _______, KC_5,    KC_1,    KC_2,    KC_3,    KC_4,                                            _______,  _______, KC_UP,   _______,  KC_TAB,  _______,
        _______, KC_0,    KC_6,    KC_7,    KC_8,    KC_9,                                            _______,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_RSFT, _______,
        _______, KC_G,    KC_J,    KC_I,    KC_M,    KC_T,                                            _______,  _______, _______, _______,  KC_RCTL, _______,
                          _______, _______, KC_ESC,  KC_ENT,  _______, _______,     _______, _______, _______,  _______, _______,  _______
    ),

    [_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,                                           KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,   _______,
        _______, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, KC_F11,                                          KC_F12,  OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  _______,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, KC_LSFT, _______, _______, _______
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGDN, KC_PGUP)},
  [1] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______)},
  [2] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______)},
  [3] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______)},
};
#endif

bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
    case KC_LSFT:
    case OS_SHFT:
    case OS_CTRL:
    case OS_ALT:
    case OS_CMD:
        return true;
    default:
        return false;
    }
}

bool sw_win_active = false;
bool sw_tab_active = false;

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    update_swapper(
        &sw_win_active, KC_LALT, KC_TAB, SW_WIN, OS_SHFT,
        keycode, record
    );
    update_swapper(
        &sw_tab_active, KC_LCTL, KC_TAB, SW_TAB, OS_SHFT,
        keycode, record
    );

    update_oneshot(
        &os_shft_state, KC_LSFT, OS_SHFT,
        keycode, record
    );
    update_oneshot(
        &os_ctrl_state, KC_LCTL, OS_CTRL,
        keycode, record
    );
    update_oneshot(
        &os_alt_state, KC_LALT, OS_ALT,
        keycode, record
    );
    update_oneshot(
        &os_cmd_state, KC_LCMD, OS_CMD,
        keycode, record
    );

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SYM, _NAV, _NUM);
}
