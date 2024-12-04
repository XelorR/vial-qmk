#include QMK_KEYBOARD_H
#include "ergohaven_ruen.h"
#include "ergohaven.h"
#include "oneshot.h"
#include "swapper.h"

#undef QUICK_TAP_TERM
#undef IGNORE_MOD_TAP_INTERRUPT
#undef PERMISSIVE_HOLD
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0
#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD

#define LA_GFN MO(_GFN)
#define LA_NAV LT(_NAV,KC_SPC)
#define LA_MED LT(_MEDIA,KC_ESC)
#define LA_MOS LT(_MOUSE,KC_TAB)
#define LA_SYM LT(_SYM,KC_ENT)
#define LA_NUM LT(_NUM,KC_BSPC)
#define LA_FUN LT(_FN,KC_DEL)
#define LA_GAM DF(_GAM)
#define LA_GFN MO(_GFN)
#define LA_MAC OSL(_MACRO)

#define SPACE_L C(G(KC_LEFT))
#define SPACE_R C(G(KC_RGHT))
#define TAB_L C(S(KC_TAB))
#define TAB_R C(KC_TAB)

#define BU_Z LT(_BUTTON, KC_Z)
#define BU_SLSH LT(_BUTTON, KC_SLSH)
#define BU_QUOTE LT(_BUTTON, KC_QUOTE)
#define BU_PIPE LT(_BUTTON, LG_PIPE)

#define HG_A LGUI_T(KC_A)
#define HA_R LALT_T(KC_R)
#define HC_S LCTL_T(KC_S)
#define HS_T LSFT_T(KC_T)
#define HS_N RSFT_T(KC_N)
#define HC_E RCTL_T(KC_E)
#define HA_I LALT_T(KC_I)
#define HG_O RGUI_T(KC_O)

#define HA_S LALT_T(KC_S)
#define HC_D LCTL_T(KC_D)
#define HS_F LSFT_T(KC_F)
#define HS_J RSFT_T(KC_J)
#define HC_K RCTL_T(KC_K)
#define HA_L LALT_T(KC_L)
#define HG_SCLN RGUI_T(KC_SCLN)

enum layers {
    _EN,
    _RU,
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
    [_EN] = LAYOUT(
        KC_GRV,   KC_1, KC_2,  KC_3,  KC_4,   KC_5,                                          KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS,
        MC_4,     KC_Q, KC_W,  KC_F,  KC_P,   KC_B,                                          KC_J,   KC_L,   KC_U,    KC_Y,   KC_QUOT, MC_5,
        MC_6,     KC_A, KC_R,  KC_S,  HS_T,   KC_G,                                          KC_M,   HS_N,   KC_E,    KC_I,   KC_O,    MC_7,
        LG_COLON, KC_Z, KC_X,  KC_C,  KC_D,   KC_V,                                          KC_K,   KC_H,   KC_COMM, KC_DOT, BU_PIPE, LG_SLASH,
                        LG_LT, LG_GT, LA_MED, LA_NAV, LA_MOS, _______,      _______, LA_SYM, LA_NUM, LA_FUN, KC_MINS, KC_EQL
    ),

    [_RU] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,  _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,  _______,
        _______, KC_A,    KC_S,    KC_D,    HS_F,    KC_G,                                            KC_H,    HS_J,    KC_K,    KC_L,    KC_SCLN,  _______,
        _______, BU_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  BU_QUOTE, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_GAM] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                            _______, _______, _______, _______, _______, _______,
        KC_I,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                                            _______, _______, KC_UP,   _______, KC_TAB,  KC_MUTE,
        KC_CAPS, KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                                            _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_RSFT, KC_VOLD,
        KC_M,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,                                            _______, _______, _______, _______, KC_RCTL, KC_VOLU,
                          _______, _______, KC_LALT, KC_SPC,  LA_GFN, _______,      _______, DF(_EN), KC_SPC,  KC_PSCR, _______, _______
    ),

    [_GFN] = LAYOUT(
        _______, KC_6, KC_7,    KC_8,    KC_9,    KC_0,                                            _______,  _______, _______, _______, _______, _______,
        DM_REC1, KC_U, KC_I,    KC_O,    KC_P,    KC_T,                                            _______,  KC_F8,   KC_F9,   _______, _______, DM_REC2,
        DM_RSTP, KC_J, KC_K,    KC_L,    KC_BTN1, KC_G,                                            KC_F1,    KC_F5,   KC_F6,   KC_F7,   _______, DM_RSTP,
        DM_PLY1, KC_M, KC_Y,    KC_H,    KC_N,    KC_B,                                            _______,  _______, _______, _______, _______, DM_PLY2,
                       _______, _______, KC_ESC,  KC_ENT,  _______, _______,     _______, _______, _______,  _______, _______,  _______
    ),

    [_NAV] = LAYOUT(
        KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F12,
        _______, SW_TAB,  SW_WIN,  TAB_L,   TAB_R,   _______,                                        _______, KC_HOME, KC_UP,   KC_END,  KC_PGUP,  _______,
        _______, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, LG_WORD,                                        CW_TOGG, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,  _______,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,                                        _______, KC_SPC,  KC_APP,  LA_MAC,  DF(_GAM), _______,
                          _______, _______, _______, _______, _______, _______,     _______, KC_ENT, KC_BSPC, KC_DEL,  _______, _______
    ),

    [_MOUSE] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                         _______, KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, _______,
        _______, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, _______,                                         _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,                                         _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______,     _______, KC_BTN2, KC_BTN1, KC_BTN3,  _______, _______
    ),

    [_NUM] = LAYOUT(
        _______, _______,   _______, _______, _______, _______,                                           _______, _______, _______, _______, _______, _______,
        _______, KC_MINS,   KC_7,    KC_8,    KC_9,    LG_SLASH,                                          _______, _______, _______, _______, _______, _______,
        _______, S(KC_EQL), KC_4,    KC_5,    KC_6,    S(KC_8),                                           _______, OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  _______,
        _______, KC_0,      KC_1,    KC_2,    KC_3,    KC_EQL,                                            _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
                            _______, _______, LG_DOT,  KC_0,    KC_MINS, _______,       _______, _______, _______, _______, _______, _______
    ),

    [_SYM] = LAYOUT(
        LG_NUM,   S(KC_1), LG_AT,    LG_HASH,  LG_DLR,  LG_PERC,                                       LG_CIRC, LG_AMPR, S(KC_8), S(KC_9), S(KC_0), S(KC_MINS),
        S(KC_1),  LG_AMPR, S(KC_8),  LG_HASH,  LG_DLR,  LG_PERC,                                       LG_CIRC, MC_0,    MC_1,    MC_2,    MC_3,    LG_QUES,
        LG_COMMA, LG_TILD, LG_GRAVE, LG_QUOTE, LG_DQUO, MC_9,                                          LG_AT,   OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  LG_DOT,
        LG_SCLN,  LG_LBR,  LG_RBR,   S(KC_9),  S(KC_0), _______,                                       _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z), KC_BSLS,
                           LG_LCBR,  LG_RCBR,  _______, _______, S(KC_MINS), MC_26,    MC_25, _______, _______, _______, _______, _______
    ),

    [_FN] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                       _______, _______, _______, _______, _______, _______,
        _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                                       _______, _______, _______, _______, _______, DM_REC2,
        _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                                       _______, OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  DM_RSTP,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,                                       _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z), DM_PLY2,
                          _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______
    ),

    [_MACRO] = LAYOUT(
        _______, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5),                                         G(KC_6), G(KC_7), G(KC_8), G(KC_9), G(KC_0), _______,
        _______, MC_10,   MC_11,   MC_12,   MC_13,   MC_14,                                           MC_15,   MC_16,   MC_17,   MC_18,   MC_19,   _______,
        _______, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5),                                         G(KC_6), G(KC_7), G(KC_8), G(KC_9), G(KC_0), _______,
        _______, MC_20,   MC_22,   MC_22,   MC_23,   MC_24,                                           MC_25,   MC_26,   MC_27,   MC_28,   MC_29,   _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_MEDIA] = LAYOUT(
        KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,
        KC_VOLU, _______, _______, _______, _______, _______,                                         _______, _______, KC_VOLU, _______, _______, _______,
        KC_VOLD, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, _______,                                         _______, KC_MPRV, KC_VOLD, KC_MNXT, _______, _______,
        KC_MUTE, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,                                         _______, _______, KC_MUTE, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______,     _______, KC_MSTP, KC_MPLY, KC_MUTE, _______, _______
    ),

    [_BUTTON] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,                                         _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
        _______, KC_RGUI, KC_ALGR, KC_RCTL, KC_RSFT, _______,                                         _______, KC_RSFT, KC_RCTL, KC_ALGR, KC_RGUI, _______,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______,                                         _______, C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
                          _______, _______, KC_BTN3, KC_BTN1, KC_BTN2, _______,     _______, KC_BTN2, KC_BTN1, KC_BTN3, _______, _______
    ),

    // [_EXAMPLE] = LAYOUT(
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //                       _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    // ),
};

bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
    case LA_NUM:
    case LA_MOS:
    case LA_MED:
    case LA_FUN:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
    case LA_NUM:
    case LA_MOS:
    case LA_MED:
    case LA_FUN:
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

