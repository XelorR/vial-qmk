#include QMK_KEYBOARD_H
#include "ergohaven.h"
#include "ergohaven_ruen.h"
#include "oneshot.h"
#include "swapper.h"

#define LA_SYM LT(_SYM,KC_ENT)
#define LA_NAV LT(_NAV,KC_SPC)
#define LA_NUM LT(_NUM,KC_BSPC)
#define LA_MOUSE LT(_MOUSE,KC_TAB)
#define LA_FN LT(_FN,KC_DEL)
#define LA_GFN MO(_GFN)
// #define SH_SPC LSFT_T(KC_SPC)

#define SPACE_L C(G(KC_LEFT))
#define SPACE_R C(G(KC_RGHT))

#define TAB_L C(S(KC_TAB))
#define TAB_R C(KC_TAB)

#define SH_ESC LSFT_T(KC_ESC)

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
    OS_SHFT = QK_KB_0,
    OS_CTRL,
    OS_ALT,
    OS_CMD,

    SW_WIN,  // Switch to next window         (alt-tab)
    SW_TAB,  // Switch to next browser tab    (ctrl-tab)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ENG] = LAYOUT(
        _______,       _______, _______, _______, _______,   _______,                                         _______, _______, _______, _______, _______, _______,
        MC_4,          KC_Q,    KC_W,    KC_F,    KC_P,      KC_B,                                            KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, MC_5,
        OSM(MOD_LSFT), KC_A,    KC_R,    KC_S,    KC_T,      KC_G,                                            KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    MC_6,
        LG_TOGGLE,     KC_Z,    KC_X,    KC_C,    KC_D,      KC_V,                                            KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, MC_7,
                       _______, _______, SH_ESC,  LA_NAV,    LA_MOUSE, _______,    _______, LA_SYM,  LA_NUM,  LA_FN,   _______, _______
    ),

    [_RUS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,  _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,  _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOTE, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_GAM] = LAYOUT(
        _______, _______, _______, _______,  _______, _______,                                         _______, _______, _______, _______,  _______, _______,
        KC_I,    KC_TAB,  KC_Q,    KC_W,     KC_E,    KC_R,                                            _______, _______, KC_UP,   _______,  KC_TAB,  _______,
        KC_CAPS, KC_LSFT, KC_A,    KC_S,     KC_D,    KC_F,                                            _______, KC_LEFT, KC_DOWN, KC_RGHT,  KC_RSFT, _______,
        KC_M,    KC_LCTL, KC_Z,    KC_X,     KC_C,    KC_V,                                            _______, KC_MUTE, KC_VOLD, KC_VOLU,  KC_RCTL, _______,
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
        _______,       _______, _______, _______,  _______,  _______,                                         _______, _______,   _______,  _______,  _______, _______,
        S(KC_1),       SPACE_L, SPACE_R, TAB_L,    TAB_R,    SW_TAB,                                          KC_INS,  KC_HOME,   KC_UP,    KC_END,   KC_PGUP, LG_QUES,
        OSM(MOD_LSFT), OS_CMD,  OS_ALT,  OS_CTRL,  OS_SHFT,  SW_WIN,                                          KC_APP,  KC_LEFT,   KC_DOWN,  KC_RGHT,  KC_PGDN, LG_COMMA,
        LG_TOGGLE,     C(KC_Z), C(KC_X), C(KC_C),  C(KC_V),  DF(_GAM),                                        CW_TOGG, S(KC_TAB), KC_TAB,   S(KC_F6), KC_F6,   LG_DOT,
                                _______, _______,  KC_ESC,   KC_SPC, KC_TAB, _______,        _______, KC_ENT, KC_BSPC, KC_DEL,    _______,  _______
    ),

    [_MOUSE] = LAYOUT(
        _______,       _______, _______, _______, _______, _______,                                       _______, _______,   _______,  _______,  _______, _______,
        S(KC_1),       SPACE_L, SPACE_R, TAB_L,   TAB_R,   SW_TAB,                                        KC_INS,  KC_WH_L,   KC_MS_U,  KC_WH_R,  KC_WH_U, LG_QUES,
        OSM(MOD_LSFT), OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, SW_WIN,                                        KC_APP,  KC_MS_L,   KC_MS_D,  KC_MS_R,  KC_WH_D, LG_COMMA,
        LG_TOGGLE,     C(KC_Z), C(KC_X), C(KC_C), C(KC_V), DF(_GAM),                                      CW_TOGG, S(KC_TAB), KC_TAB,   S(KC_F6), KC_F6,   LG_DOT,
                                _______, _______, KC_ESC,  KC_SPC, KC_TAB, _______,     _______, KC_BTN2, KC_BTN1, KC_BTN3,   _______,  _______
    ),

    [_NUM] = LAYOUT(
        _______, _______,  _______, _______, _______, _______,                                  _______, _______,  _______,  _______, _______,  _______,
        DM_REC2, LG_LBR,   KC_7,    KC_8,    KC_9,    LG_RBR,                                   _______, KC_GRV,   KC_O,     LG_LBR,  LG_RBR,   _______,
        DM_RSTP, LG_SCLN,  KC_4,    KC_5,    KC_6,    KC_EQL,                                   _______, OS_SHFT,  OS_CTRL,  OS_ALT,  OS_CMD,   _______,
        DM_PLY2, LG_GRAVE, KC_1,    KC_2,    KC_3,    KC_BSLS,                              OSL(_MACRO), KC_RBRC,  LG_COMMA, LG_DOT,  LG_SLASH, _______,
                           _______, _______, LG_DOT,  KC_0,    KC_MINS, _______,       _______, _______, _______,  _______,  _______, _______
    ),

    [_SYM] = LAYOUT(
        _______, _______,  _______, _______, _______, _______,                                         _______, _______,    _______, _______, _______, _______,
        DM_REC1, LG_LCBR,  LG_AMPR, S(KC_8), S(KC_9), LG_RCBR,                                         _______, S(KC_GRV),  S(KC_O), LG_LCBR, LG_RCBR, _______,
        DM_RSTP, LG_COLON, LG_DLR,  S(KC_5), LG_CIRC, S(KC_EQL),                                       _______, OS_SHFT,    OS_CTRL, OS_ALT,  OS_CMD,  _______,
        DM_PLY1, LG_TILD,  S(KC_1), LG_AT,   LG_HASH, S(KC_BSLS),                                  OSL(_MACRO), S(KC_RBRC), LG_LT,   LG_GT,   LG_QUES, _______,
                           _______, _______, S(KC_9), S(KC_0),    S(KC_MINS), MC_9,     MC_8, _______, _______, _______,    _______, _______
    ),

    [_FN] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                       _______, _______,    _______,   _______, _______, _______,
        _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                                       _______, KC_MPRV,    KC_MSTP,   KC_MPLY, KC_MNXT, _______,
        _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                                       _______, OS_SHFT,    OS_CTRL,   OS_ALT,  OS_CMD,  _______,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,                                       _______, C(KC_MINS), C(KC_EQL), KC_ALGR, _______, _______,
                          _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,   _______, _______, _______, _______,    _______,   _______
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
    case LA_NUM:
    case LA_NAV:
    case LA_FN:
    case LA_MOUSE:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NUM:
    case LA_NAV:
    case LA_MOUSE:
    case LA_FN:
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

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _SYM, _NAV, _FN);
// }
