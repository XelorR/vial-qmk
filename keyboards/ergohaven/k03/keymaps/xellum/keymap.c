#include QMK_KEYBOARD_H
// #include "quantum.h"
#include "ergohaven.h"
#include "oneshot.h"
#include "swapper.h"
#include "ergohaven_ruen.h"

#define RESET QK_BOOT

#define XXXX KC_NONE

#define LA_SYM MO(_SYM)
#define LA_FN MO(_FN)
// #define LA_NUM MO(_NUM)
// #define LA_MACRO MO(_MACRO)

#define LA_NAV_PC MO(_NAV_PC)
#define LA_GFN_PC MO(_GFN_PC)
#define LA_NAV_MAC MO(_NAV_MAC)
#define LA_GFN_MAC MO(_GFN_MAC)

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
    _EN_PC,
    _RU_PC,
    _NAV_PC,
    _GAM_PC,
    _GFN_PC,
    _EN_MAC,
    _RU_MAC,
    _NAV_MAC,
    _GAM_MAC,
    _GFN_MAC,
    _SYM,
    _NUM,
    _FN,
    _MACRO,
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
    [_EN_PC] = LAYOUT(
        _______, _______, _______, _______, _______,   _______,                                         _______,   _______, _______, _______, _______, _______,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,      KC_B,                                            KC_J,      KC_L,    KC_U,    KC_Y,    KC_QUOT, TG(_NAV_PC),
        QK_GESC, KC_A,    KC_R,    KC_S,    KC_T,      KC_G,                                            KC_M,      KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,      KC_V,                                            KC_K,      KC_H,    KC_COMM, KC_DOT,  KC_SLSH, OSM(MOD_RSFT),
                          _______, _______, LG_TOGGLE, KC_SPC,  LA_NAV_PC, _______,   _______, LA_SYM,  OSL(_NUM), LG_WORD, _______, _______
    ),

    [_RU_PC] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,  _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,  _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOTE, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_NAV_PC] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                       _______,     _______, _______, _______,  _______,     _______,
        _______, SPACE_L, SPACE_R, TAB_L,   TAB_R,   SW_TAB,                                        KC_PGUP,     KC_HOME, KC_UP,   KC_END,   KC_DEL,      _______,
        _______, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, SW_WIN,                                        KC_PGDN,     KC_LEFT, KC_DOWN, KC_RGHT,  KC_BSPC,     _______,
        KC_CAPS, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), DF(_GAM_PC),                                   OSL(_MACRO), KC_BTN1, KC_APP,  KC_F2,    DF(_EN_MAC), CW_TOGG,
                          _______, _______, _______, _______, _______, _______,     _______, LA_FN, _______, _______, _______, _______
    ),

    [_GAM_PC] = LAYOUT(
        _______, _______, _______, _______,  _______, _______,                                             _______,  _______, _______, _______,  _______, _______,
        KC_I,    KC_TAB,   KC_Q,   KC_W,     KC_E,    KC_R,                                                _______,  _______, KC_UP,   _______,  KC_TAB,  DM_REC2,
        KC_CAPS, KC_LSFT,  KC_A,   KC_S,     KC_D,    KC_F,                                                _______,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_RSFT, DM_RSTP,
        KC_M,    KC_LCTL,  KC_Z,   KC_X,     KC_C,    KC_V,                                                _______,  _______, KC_VOLD, KC_VOLU,  KC_RCTL, DM_PLY2,
                           _______, _______, KC_LALT, KC_SPC,  LA_GFN_PC, _______,    _______, DF(_EN_PC), KC_SPC,   KC_PSCR, _______,  _______
    ),

    [_GFN_PC] = LAYOUT(
        _______,         _______, _______, _______, _______, _______,                                         _______,  _______, _______, _______,  _______, _______,
        DM_REC1, KC_5,    KC_1,    KC_2,    KC_3,    KC_4,                                                    _______,  KC_F8,   KC_F9,   _______,  _______, DM_REC2,
        DM_RSTP, KC_0,    KC_6,    KC_7,    KC_8,    KC_9,                                                    KC_F1,    KC_F5,   KC_F6,   KC_F7,    _______, DM_RSTP,
        DM_PLY1, KC_T,    KC_J,    KC_O,    KC_P,    KC_G,                                                    _______,  _______, _______, _______,  _______, DM_PLY2,
                                  _______, _______, KC_ESC,  KC_ENT,  _______, _______,     _______, _______, _______,  _______, _______,  _______
    ),

    [_EN_MAC] = LAYOUT(
        _______, _______, _______, _______, _______,   _______,                                         _______, _______, _______, _______, _______, _______,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,      KC_B,                                            KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, TG(_NAV_MAC),
        QK_GESC, KC_A,    KC_R,    KC_S,    KC_T,      KC_G,                                            KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,      KC_V,                                            KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, OSM(MOD_RSFT),
                          _______, _______, LG_TOGGLE, KC_SPC,  LA_NAV_MAC, _______,      _______, LA_SYM,  OSL(_NUM), LG_WORD, _______, _______
    ),

    [_RU_MAC] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,    _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOTE, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_NAV_MAC] = LAYOUT(
        _______, _______,    _______,     _______, _______, _______,                                       _______,     _______,    _______, _______,     _______,    _______,
        _______, C(KC_LEFT), C(KC_RIGHT), TAB_L,   TAB_R,   SW_TAB,                                        KC_PGUP,     C(KC_LEFT), KC_UP,   C(KC_RIGHT), S(KC_BSPC), _______,
        _______, OS_CMD,     OS_ALT,      OS_CTRL, OS_SHFT, SW_WIN,                                        KC_PGDN,     KC_LEFT,    KC_DOWN, KC_RGHT,     KC_BSPC,    _______,
        KC_CAPS, G(KC_Z),    G(KC_X),     G(KC_C), G(KC_V), DF(_GAM_MAC),                                  OSL(_MACRO), KC_BTN1,    KC_APP,  KC_ENT,      DF(_EN_PC), CW_TOGG,
                             _______,     _______, _______, _______, _______, _______,     _______, LA_FN, _______, _______,    _______, _______
    ),

    [_GAM_MAC] = LAYOUT(
        _______, _______, _______, _______,  _______, _______,                                             _______,  _______, _______, _______,  _______, _______,
        KC_I,    KC_TAB,   KC_Q,   KC_W,     KC_E,    KC_R,                                                _______,  _______, KC_UP,   _______,  KC_TAB,  DM_REC2,
        KC_CAPS, KC_LSFT,  KC_A,   KC_S,     KC_D,    KC_F,                                                _______,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_RSFT, DM_RSTP,
        KC_M,    KC_LCTL,  KC_Z,   KC_X,     KC_C,    KC_V,                                                _______,  _______, KC_VOLD, KC_VOLU,  KC_RCTL, DM_PLY2,
                           _______, _______, KC_LALT, KC_SPC,  LA_GFN_MAC, _______,    _______, DF(_EN_MAC), KC_SPC,   KC_PSCR, _______,  _______
    ),

    [_GFN_MAC] = LAYOUT(
        _______,         _______, _______, _______, _______, _______,                                         _______,  _______, _______, _______,  _______, _______,
        DM_REC1, KC_5,    KC_1,    KC_2,    KC_3,    KC_4,                                                    _______,  KC_F8,   KC_F9,   _______,  _______, DM_REC2,
        DM_RSTP, KC_0,    KC_6,    KC_7,    KC_8,    KC_9,                                                    KC_F1,    KC_F5,   KC_F6,   KC_F7,    _______, DM_RSTP,
        DM_PLY1, KC_T,    KC_J,    KC_O,    KC_P,    KC_G,                                                    _______,  _______, _______, _______,  _______, DM_PLY2,
                                  _______, _______, KC_ESC,  KC_ENT,  _______, _______,     _______, _______, _______,  _______, _______,  _______
    ),

    [_SYM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                       _______,   _______,    _______, _______, _______, _______,
        DM_REC1, LG_TILD, LG_AMPR, S(KC_8), S(KC_9), KC_GRV,                                        LG_DQUO,   S(KC_BSLS), KC_O,    LG_LCBR, LG_RCBR, DM_REC2,
        DM_RSTP, LG_COLON, LG_DLR, S(KC_5), LG_CIRC, S(KC_MINS),                                    S(KC_EQL), OS_SHFT,    OS_CTRL, OS_ALT,  OS_CMD,  DM_RSTP,
        DM_PLY1, KC_INS,  S(KC_1), LG_AT,   LG_HASH, S(KC_9),                                       S(KC_0),   KC_RBRC,    LG_LT,   LG_GT,   LG_QUES, DM_PLY2,
                          _______, _______, _______, _______, LA_FN, _______,     _______, _______, _______,   _______,    _______, _______
    ),

    [_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                       _______,  _______,  _______,  _______, _______, _______,
        DM_REC1, LG_GRAVE, KC_7,   KC_8,    KC_9,    KC_GRV,                                        LG_QUOTE, S(KC_BSLS),  KC_O,  LG_LBR,  LG_RBR,   DM_REC2,
        DM_RSTP, LG_SCLN, KC_4,    KC_5,    KC_6,    KC_MINS,                                       KC_EQL,   OS_SHFT,  OS_CTRL,  OS_ALT,  OS_CMD,   DM_RSTP,
        DM_PLY1, KC_0,    KC_1,    KC_2,    KC_3,    S(KC_9),                                       S(KC_0),  KC_RBRC,  LG_COMMA, LG_DOT,  LG_SLASH, DM_PLY2,
                          _______, _______, _______, _______, _______, _______,   _______, _______, _______,  _______,  _______,  _______
    ),

    [_FN] = LAYOUT(
        _______, _______, _______, _______, _______,     _______,                                         _______,     _______, _______, _______, _______, _______,
        _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,       KC_PSCR,                                         _______,     KC_MSTP, KC_MPRV, KC_MNXT, KC_MPLY, _______,
        _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,       KC_SCRL,                                         _______,     OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  _______,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,       KC_PAUS,                                         _______,     KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,
                          _______, _______, LG_SET_DFLT, LG_SET_M0, _______, _______,   _______, _______, LG_SET_M1M2, _______, _______, _______
    ),

    [_MACRO] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        DM_REC1, MC_20,   MC_22,   MC_22,   MC_23,   MC_24,                                           MC_25,   MC_26,   MC_27,   MC_28,   MC_29,   DM_REC2,
        DM_RSTP, MC_10,   MC_11,   MC_12,   MC_13,   MC_14,                                           MC_15,   MC_16,   MC_17,   MC_18,   MC_19,   DM_RSTP,
        DM_PLY1, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, DM_PLY2,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    // [_EXAMPLE] = LAYOUT(
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //                       _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    // ),
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
    case LA_NAV_PC:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV_PC:
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
//     return update_tri_layer_state(state, _SYM, _NAV_PC, _NUM);
// }
