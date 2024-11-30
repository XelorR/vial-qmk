#include QMK_KEYBOARD_H
#include "ergohaven.h"
#include "ergohaven_ruen.h"
#include "oneshot.h"
#include "swapper.h"

#define LA_SYM MO(_SYM)
#define LA_NAV MO(_NAV)
#define LA_NUM MO(_NUM)
#define LA_GFN MO(_GFN)
#define LA_LAUNCH OSL(_MACRO)

#define SPACE_L C(G(KC_LEFT))
#define SPACE_R C(G(KC_RGHT))
#define TAB_L C(KC_PGUP)
#define TAB_R C(KC_PGDN)
#define CL_WIN A(KC_F4)
#define CL_TAB C(KC_F4)

#define SH_ESC LSFT_T(KC_ESC)
#define BU_Z LT(_MOUSE, KC_Z)
#define BU_SLSH LT(_BUTTON, KC_SLSH)
#define BU_QUOTE LT(_BUTTON, KC_QUOTE)
#define OSM_SFT OSM(MOD_LSFT)

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
    _BUTTON,
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
        _______,  _______, _______, _______, _______,   _______,                                       _______, _______,   _______, _______, _______, _______,
        MC_4,     KC_Q,    KC_W,    KC_F,    KC_P,      KC_B,                                          KC_J,    KC_L,      KC_U,    KC_Y,    KC_QUOT, MC_5,
        MC_7,     KC_A,    KC_R,    KC_S,    KC_T,      KC_G,                                          KC_M,    KC_N,      KC_E,    KC_I,    KC_O,    MC_6,
        LG_COLON, BU_Z,    KC_X,    KC_C,    KC_D,      KC_V,                                          KC_K,    KC_H,      KC_COMM, KC_DOT,  BU_SLSH, LG_SCLN,
                           _______, _______, LG_TOGGLE, KC_SPC, LA_NAV, _______,      _______, LA_SYM, OSM_SFT, LA_LAUNCH, _______, _______
    ),

    [_RUS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,  _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,  _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  _______,
        _______, BU_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  BU_QUOTE, _______,
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
        _______, KC_G,    KC_J,    KC_O,    KC_P,    KC_T,                                            _______,  DM_REC2, DM_RSTP, DM_PLY2,  _______, _______,
                          _______, _______, KC_ESC,  KC_ENT,  _______, _______,     _______, _______, _______,  _______, _______,  _______
    ),

    [_SYM] = LAYOUT(
        _______,  _______,  _______,  _______, _______, _______,                                           _______, _______, _______, _______, _______,  _______,
        S(KC_1),  LG_GRAVE, LG_AT,    LG_HASH, LG_DLR,  S(KC_5),                                           LG_CIRC, LG_AMPR, S(KC_8), LG_DQUO, LG_QUOTE, LG_QUES,
        LG_DOT,   LG_TILD,  LG_SLASH, S(KC_9), S(KC_0), S(KC_MINS),                                        LG_PIPE, OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,   LG_COMMA,
        LG_COLON, LG_LT,    LG_GT,    KC_MINS, KC_EQL,  S(KC_EQL),                                         KC_BSLS, LG_RBR,  LG_LBR,  LG_RCBR, LG_LCBR,  LG_SCLN,
                            _______,  _______, CW_TOGG, KC_BTN1,   _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_NAV] = LAYOUT(
        _______,   _______, _______, _______,  _______, _______,                                         _______, _______,  _______,    _______, _______, _______,
        C(KC_SPC), SW_TAB,  SW_WIN,  TAB_L,    TAB_R,   KC_ESC,                                          KC_ESC,  DF(_GAM), C(KC_BSPC), KC_BSPC, KC_DEL,  KC_PSCR,
        A(KC_SPC), OS_CMD,  OS_ALT,  OS_CTRL,  OS_SHFT, KC_ENT,                                          KC_ENT,  KC_LEFT,  KC_DOWN,    KC_UP,   KC_RGHT, A(KC_PSCR),
        G(KC_SPC), SPACE_L, SPACE_R, WRD_PRV,  WRD_NXT, KC_TAB,                                          KC_TAB,  KC_HOME,  KC_PGUP,    KC_PGDN, KC_END,  G(S(KC_S)),
                            _______, _______,  _______, _______, _______, _______,     _______, _______, KC_BTN1, CW_TOGG,  _______,    _______
    ),

    [_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        DM_REC1, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DM_REC2,
        DM_RSTP, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, KC_F11,                                          KC_F12,  OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  DM_RSTP,
        DM_PLY1, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  DM_PLY2,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_MACRO] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, MC_10,   MC_11,   MC_12,   MC_13,   MC_14,                                           MC_15,   MC_16,   MC_17,   MC_18,   MC_19,   KC_VOLU,
        _______, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5),                                         G(KC_6), G(KC_7), G(KC_8), G(KC_9), G(KC_0), KC_VOLD,
        _______, MC_20,   MC_22,   MC_22,   MC_23,   MC_24,                                           MC_25,   MC_26,   MC_27,   MC_28,   MC_29,   KC_MUTE,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_BUTTON] = LAYOUT(
        _______,  _______, _______, _______, _______, _______,                                         _______, _______, _______,    _______,   _______,    _______,
        A(KC_F4), C(KC_Q), C(KC_W), C(KC_F), C(KC_P), C(KC_B),                                         C(KC_J), C(KC_L), C(KC_U),    C(KC_Y),   C(KC_QUOT), _______,
        _______,  C(KC_A), C(KC_R), C(KC_S), C(KC_T), C(KC_G),                                         C(KC_M), C(KC_N), C(KC_E),    C(KC_I),   C(KC_O),    _______,
        _______,  C(KC_Z), C(KC_X), C(KC_C), C(KC_D), C(KC_V),                                         C(KC_K), C(KC_H), C(KC_COMM), C(KC_DOT), C(BU_SLSH), _______,
                           _______, _______, KC_BTN3, KC_BTN1, KC_BTN2, _______,     _______, KC_BTN2, KC_BTN1, KC_BTN3, _______,    _______
    ),

    [_MOUSE] = LAYOUT(
        _______,  _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,    _______,
        A(KC_F4), C(KC_Q), C(KC_W), C(KC_F), C(KC_P), C(KC_B),                                         C(KC_J), C(KC_L), C(KC_U), C(KC_Y), C(KC_QUOT), _______,
        _______,  C(KC_A), C(KC_R), C(KC_S), C(KC_T), C(KC_G),                                         C(KC_M), KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,    _______,
        _______,  C(KC_Z), C(KC_X), C(KC_C), C(KC_D), C(KC_V),                                         C(KC_K), KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,    _______,
                           _______, _______, KC_BTN3, KC_BTN1, KC_BTN2, _______,     _______, KC_BTN2, KC_BTN1, KC_BTN3, _______, _______
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
