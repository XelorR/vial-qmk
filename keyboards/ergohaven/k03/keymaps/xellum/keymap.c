#include QMK_KEYBOARD_H
#include "ergohaven.h"
#include "ergohaven_ruen.h"
#include "oneshot.h"
#include "swapper.h"

#define RESET QK_BOOT

#define XXXX KC_NONE

#define LA_SYM MO(_SYM)
#define LA_NAV MO(_NAV)
#define LA_MOUSE MO(_MOUSE)
#define LA_GFN MO(_GFN)
#define LA_ALT MO(_ALT)

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
    _ENG,
    _RUS,
    _GAM,
    _GFN,
    _NAV,
    _SYM,
    _NUM,
    _MEDIA,
    _MOUSE,
    _FN,
    _MACRO,
    _BUTTO,
    _12,
    _13,
    _14,
    _ALT,
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
    [_ENG] = LAYOUT(
        _______, _______, _______, _______, _______,   _______,                                         _______, _______, _______, _______, _______, _______,
        _______, KC_Q,    KC_W,    KC_F,    KC_P,      KC_B,                                            KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, _______,
        KC_TAB,  KC_A,    KC_R,    KC_S,    KC_T,      KC_G,                                            KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    TG(_NAV),
        _______, KC_Z,    KC_X,    KC_C,    KC_D,      KC_V,                                            KC_K,    KC_H,    LG_AMPR, LG_LBR,  LG_RBR,  _______,
                          _______, _______, LG_TOGGLE, KC_SPC,  LA_NAV, _______,      _______, LA_SYM,  KC_LSFT, LA_ALT,  _______, _______
    ),

    [_RUS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,  _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,  _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOTE, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_ALT] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_VOLU, _______, KC_GRV,                                          _______, _______, KC_O,    LG_LT,   LG_GT,   _______,
        _______, _______, KC_MPRV, KC_VOLD, KC_MNXT, _______,                                         _______, _______, _______, LG_LCBR, LG_RCBR, _______,
        _______, _______, DM_REC1, DM_RSTP, DM_PLY1, _______,                                         _______, LG_RCBR, LG_AMPR, LG_LBR,  LG_RBR,  _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_GAM] = LAYOUT(
        _______, _______, _______, _______,  _______, _______,                                         _______, _______, _______, _______,  _______, _______,
        _______, KC_TAB,  KC_Q,    KC_W,     KC_E,    KC_R,                                            _______, _______, KC_UP,   _______,  KC_TAB,  _______,
        KC_CAPS, KC_LSFT, KC_A,    KC_S,     KC_D,    KC_F,                                            _______, KC_LEFT, KC_DOWN, KC_RGHT,  KC_RSFT, _______,
        _______, KC_LCTL, KC_Z,    KC_X,     KC_C,    KC_V,                                            _______, _______, KC_VOLD, KC_VOLU,  KC_RCTL, _______,
                          _______, _______,  KC_LALT, KC_SPC,  LA_GFN, _______,     _______, DF(_ENG), KC_SPC,  KC_PSCR, _______, _______
    ),

    [_GFN] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______,  _______, _______, _______,  _______, _______,
        _______, KC_5,    KC_1,    KC_2,    KC_3,    KC_4,                                            _______,  KC_F8,   KC_F9,   _______,  _______, _______,
        _______, KC_0,    KC_6,    KC_7,    KC_8,    KC_9,                                            KC_F1,    KC_F5,   KC_F6,   KC_F7,    _______, _______,
        _______, KC_G,    KC_J,    KC_I,    KC_M,    KC_T,                                            _______,  DM_REC2, DM_RSTP, DM_PLY2,  _______, _______,
                          _______, _______, KC_ESC,  KC_ENT,  _______, _______,     _______, _______, _______,  _______, _______,  _______
    ),

    [_NAV] = LAYOUT(
        _______,   _______, _______, _______,  _______,  _______,                                         _______,  _______, _______, _______,     _______,  _______,
        _______,   SPACE_L, SPACE_R, TAB_L,    TAB_R,    SW_TAB,                                          KC_ESC,   KC_HOME, KC_UP,   KC_END,      KC_PGUP,  _______,
        S(KC_TAB), OS_CMD,  OS_ALT,  OS_CTRL,  OS_SHFT,  SW_WIN,                                          KC_ENT,   KC_LEFT, KC_DOWN, KC_RGHT,     KC_PGDN,  _______,
        _______,   C(KC_Z), C(KC_X), C(KC_C),  C(KC_V),  KC_APP,                                          KC_NO,    KC_BSPC, KC_DEL,  OSL(_MACRO), DF(_GAM), _______,
                            _______, _______,  _______,  _______, _______, _______,     _______, _______, _______,  _______, _______, _______
    ),

    [_MOUSE] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______,    _______, _______, _______, _______, _______,
        _______, SPACE_L, SPACE_R, TAB_L,   TAB_R,   _______,                                         _______,    KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                         _______,    KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), S(C(KC_Z)),                                      S(C(KC_Z)), C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
                          _______, _______, _______, _______, _______, _______,     _______, KC_BTN2, KC_BTN1,    KC_BTN3,  _______, _______
    ),

    [_SYM] = LAYOUT(
        _______, _______, _______,  _______,  _______,  _______,                                     _______,   _______, _______,  _______, _______,  _______,
        _______, S(KC_1), LG_AT,    LG_HASH,  LG_DLR,   S(KC_5),                                     LG_CIRC,   LG_QUES, S(KC_8),  S(KC_9), S(KC_0),  _______,
        CW_TOGG, LG_TILD, LG_GRAVE, LG_QUOTE, LG_DQUO,  KC_MINS,                                     S(KC_EQL), OS_SHFT, OS_CTRL,  OS_ALT,  OS_CMD,   CW_TOGG,
        _______, KC_BSLS, LG_PIPE,  LG_SCLN,  LG_COMMA, S(KC_MINS),                                  KC_EQL,    LG_DOT,  LG_COLON, LG_PIPE, LG_SLASH, _______,
                          _______,  _______,  _______,  _______, _______, MC_9,       MC_8, _______, _______,   _______, _______,  _______
    ),

    [_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, KC_F11,                                          KC_F12,  OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  _______,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_MACRO] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, MC_20,   MC_22,   MC_22,   MC_23,   MC_24,                                           MC_25,   MC_26,   MC_27,   MC_28,   MC_29,   _______,
        _______, MC_10,   MC_11,   MC_12,   MC_13,   MC_14,                                           MC_15,   MC_16,   MC_17,   MC_18,   MC_19,   _______,
        _______, MC_0,    MC_1,    MC_2,    MC_3,    MC_4,                                            MC_5,    MC_6,    MC_7,    MC_8,    MC_9,    _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),
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
