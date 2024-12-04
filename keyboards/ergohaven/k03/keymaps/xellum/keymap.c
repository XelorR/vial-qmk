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
#define TAB_L S(C(KC_TAB))
#define TAB_R C(KC_TAB)
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
        LG_TILD,  LG_GRAVE, LG_DQUO, LG_HASH,  LG_DLR,    LG_PERC,                                       LG_CIRC, LG_AMPR, S(KC_8), S(KC_9), S(KC_0), LG_AT,
        MC_4,     KC_Q,     KC_W,    KC_F,     KC_P,      KC_B,                                          KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, MC_5,
        MC_6,     KC_A,     KC_R,    KC_S,     KC_T,      KC_G,                                          KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    MC_7,
        LG_COLON, KC_Z,     KC_X,    KC_C,     KC_D,      KC_V,                                          KC_K,    KC_H,    KC_COMM, KC_DOT,  LG_PIPE, LG_SLASH,
                            LG_LT,   LG_GT,    LG_TOGGLE, KC_SPC, LA_NAV, MC_10,          MC_13, LA_SYM, OSM_SFT, CW_TOGG, KC_MINS, KC_EQL
    ),

    [_RUS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,  _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,  _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOTE, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_GAM] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,     KC_4,    KC_5,                                            _______, _______, _______, _______, _______, _______,
        KC_I,    KC_TAB,  KC_Q,    KC_W,     KC_E,    KC_R,                                            _______, _______, KC_UP,   _______, KC_TAB,  KC_MUTE,
        KC_CAPS, KC_LSFT, KC_A,    KC_S,     KC_D,    KC_F,                                            _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_RSFT, KC_VOLD,
        KC_M,    KC_LCTL, KC_Z,    KC_X,     KC_C,    KC_V,                                            _______, _______, _______, _______, KC_RCTL, KC_VOLU,
                          _______, _______,  KC_LALT, KC_SPC,  LA_GFN, _______,     _______, DF(_ENG), KC_SPC,  KC_PSCR, _______, _______
    ),

    [_GFN] = LAYOUT(
        _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                                            _______,  _______, _______, _______, _______, _______,
        DM_REC1, KC_U,    KC_I,    KC_O,    KC_P,    KC_T,                                            _______,  KC_F8,   KC_F9,   _______, _______, DM_REC2,
        DM_RSTP, KC_J,    KC_K,    KC_L,    KC_BTN1, KC_G,                                            KC_F1,    KC_F5,   KC_F6,   KC_F7,   _______, DM_RSTP,
        DM_PLY1, KC_M,    KC_Y,    KC_H,    KC_N,    KC_B,                                            _______,  _______, _______, _______, _______, DM_PLY2,
                          _______, _______, KC_ESC,  KC_ENT,  _______, _______,     _______, _______, _______,  _______, _______,  _______
    ),

    [_SYM] = LAYOUT(
        LG_NUM,   G(KC_1),   G(KC_2), G(KC_3), G(KC_4), G(KC_5),                                         G(KC_6), G(KC_7), G(KC_8), G(KC_9), G(KC_0), KC_NUM,
        S(KC_1),  KC_MINS,   KC_7,    KC_8,    KC_9,    LG_SLASH,                                        KC_ESC,  MC_0,    MC_1,    MC_2,    MC_3,    LG_QUES,
        LG_COMMA, S(KC_EQL), KC_4,    KC_5,    KC_6,    S(KC_8),                                         KC_ENT,  OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  LG_DOT,
        LG_SCLN,  KC_0,      KC_1,    KC_2,    KC_3,    KC_EQL,                                          KC_TAB,  C(KC_V), C(KC_C), C(KC_X), C(KC_Z), KC_BSLS,
                             LG_LBR,  LG_RBR,  KC_ALGR, MC_9,   _______, MC_26,         MC_25, _______,  _______, _______, LG_LCBR, LG_RCBR
    ),

    [_NUM] = LAYOUT(
        LG_NUM,  G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5),                                          G(KC_6), G(KC_7), G(KC_8), G(KC_9), G(KC_0), KC_NUM,
        S(KC_1), KC_PMNS, KC_P7,   KC_P8,   KC_P9,   KC_PSLS,                                          KC_ESC,  KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, LG_QUES,
        KC_PCMM, KC_PPLS, KC_P4,   KC_P5,   KC_P6,   KC_PAST,                                          KC_PENT, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_PDOT,
        LG_SCLN, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_EQL,                                           KC_TAB,  KC_BTN1, KC_BTN2, KC_BTN3, KC_APP,  KC_BSLS,
                          LG_LBR,  LG_RBR,  KC_ALGR, MC_9,    _______, MC_20,         MC_21, _______,  _______, _______, LG_LCBR, LG_RCBR
    ),

    [_NAV] = LAYOUT(
        KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                             KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F12,
        KC_VOLU, SW_TAB,  SW_WIN,  TAB_L,   TAB_R,   KC_ESC,                                            KC_ESC,  KC_HOME, KC_UP,   KC_END,  KC_DEL,   KC_PSCR,
        KC_VOLD, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, KC_ENT,                                            KC_ENT,  KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,  A(KC_PSCR),
        KC_MUTE, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), KC_TAB,                                            KC_TAB,  KC_PGUP, KC_PGDN, KC_APP,  DF(_GAM), G(S(KC_S)),
                          _______, _______, _______, _______, _______, _______,       _______, _______, KC_BTN1, KC_LGUI, _______, _______
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

// void led_set_keymap(uint8_t usb_led) {
//   if (!(usb_led & (1<<USB_LED_NUM_LOCK))) {
//     register_code(KC_NUMLOCK);
//     unregister_code(KC_NUMLOCK);
//   }
// }
