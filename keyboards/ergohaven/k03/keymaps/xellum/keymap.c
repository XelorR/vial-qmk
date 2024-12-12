#include QMK_KEYBOARD_H
#include "ergohaven.h"
#include "ergohaven_ruen.h"
#include "oneshot.h"
#include "swapper.h"

#define LA_SYM MO(_SYM)
#define LA_NUM MO(_NUM)
#define LA_NAV MO(_NAV)
#define AL_J LT(_ALT,KC_J)
#define AL_N LT(_ALT,KC_N)
#define AL_T LT(_ALT,KC_T)
#define AL_F LT(_ALT,KC_F)
#define SY_A LT(_SYM,KC_A)
#define SY_O LT(_SYM,KC_O)
#define SY_SCLN LT(_SYM,KC_SCLN)
#define MO_Z LT(_MOUSE,KC_Z)
#define LA_GFN MO(_GFN)
#define LA_FUN MO(_FN)
// #define LA_LAUNCH OSL(_MACRO)
// #define LA_MAC MO(_MACRO)

#define SPACE_L C(G(KC_LEFT))
#define SPACE_R C(G(KC_RGHT))
#define TAB_L S(C(KC_TAB))
#define TAB_R C(KC_TAB)
#define CL_WIN A(KC_F4)
#define CL_TAB C(KC_F4)

#define SH_ESC LSFT_T(KC_ESC)
#define VI_Z LT(_VIM, KC_Z)
#define MS_SLSH LT(_MOUSE, KC_SLSH)
#define MS_QUOTE LT(_MOUSE, KC_QUOTE)
#define OSM_SFT OSM(MOD_LSFT)

#define UNDO C(KC_Z)
#define CUT  C(KC_X)
#define COPY C(KC_C)
#define PASTE C(KC_V)

#define HG_1 LGUI_T(KC_1)
#define HA_2 LALT_T(KC_2)
#define HC_3 LCTL_T(KC_3)
#define HS_4 LSFT_T(KC_4)
#define HS_7 LSFT_T(KC_7)
#define HC_8 LCTL_T(KC_8)
#define HA_9 LALT_T(KC_9)
#define HG_0 LGUI_T(KC_0)
#define HG_F1 LGUI_T(KC_F1)
#define HA_F2 LALT_T(KC_F2)
#define HC_F3 LCTL_T(KC_F3)
#define HC_F4 LSFT_T(KC_F4)
#define HC_F7 LSFT_T(KC_F7)
#define HC_F8 LCTL_T(KC_F8)
#define HA_F9 LALT_T(KC_F9)
#define HG_F10 LGUI_T(KC_F10)

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
    _VIM,
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
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                    KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,   KC_NO,
        KC_NO, KC_Q,  KC_W,  KC_F,  KC_P,  KC_B,                                     KC_J,    KC_L,  KC_U,    KC_Y,   KC_QUOT, KC_NO,
        KC_NO, SY_A,  KC_R,  KC_S,  AL_T,  KC_G,                                     KC_M,    AL_N,  KC_E,    KC_I,   SY_O,    KC_NO,
        KC_NO, MO_Z,  KC_X,  KC_C,  KC_D,  KC_V,                                     KC_K,    KC_H,  KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                      KC_NO, KC_NO, KC_NO, KC_SPC, LA_NAV, KC_NO,     KC_NO, LA_NUM, OSM_SFT, KC_NO, KC_NO,   KC_NO
    ),

    [_RUS] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,    KC_NO,
        KC_NO, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                                        KC_Y,    KC_U,  KC_I,    KC_P,   KC_LBRC,  KC_NO,
        KC_NO, SY_A,  KC_S,  KC_D,  AL_F,  KC_G,                                        KC_H,    AL_J,  KC_K,    KC_L,   SY_SCLN,  KC_NO,
        KC_NO, MO_Z,  KC_X,  KC_C,  KC_V,  KC_B,                                        KC_N,    KC_M,  KC_COMM, KC_DOT, KC_QUOTE, KC_NO,
                      KC_NO, KC_NO, KC_NO, _______, _______, KC_NO,     KC_NO, _______, _______, KC_NO, KC_NO,   KC_NO
    ),

    [_GAM] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,                                      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,                                       _______, _______, KC_UP,   _______, KC_TAB,  KC_NO,
        KC_NO, KC_LSFT, KC_A,  KC_S,  KC_D,  KC_F,                                       _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_RSFT, KC_NO,
        KC_NO, KC_LCTL, KC_Z,  KC_X,  KC_C,  KC_V,                                       _______, _______, _______, _______, KC_RCTL, KC_NO,
                        KC_NO, KC_NO, KC_NO, KC_SPC, LA_GFN, KC_NO,     KC_NO, DF(_ENG), KC_PSCR, KC_NO,   KC_NO,   KC_NO
    ),

    [_GFN] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_ESC,  KC_5,  KC_6,  KC_7,  KC_8,                                      DM_REC2, _______, _______, _______, _______, KC_NO,
        KC_NO, KC_LALT, KC_1,  KC_2,  KC_3,  KC_4,                                      DM_RSTP, _______, _______, _______, _______, KC_NO,
        KC_NO, KC_G,    KC_J,  KC_I,  KC_M,  KC_T,                                      DM_PLY2, _______, _______, _______, _______, KC_NO,
                        KC_NO, KC_NO, KC_NO, KC_ENT, _______, KC_NO,     KC_NO, LA_FUN, _______, KC_NO,   KC_NO,   KC_NO
    ),

    [_NAV] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                         KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,
        KC_NO, CL_WIN,  SW_WIN,  TAB_L,   TAB_R,   KC_ESC,                                        KC_ESC,   KC_HOME, KC_UP,   KC_END,  KC_DEL,   KC_NO,
        KC_NO, OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, KC_ENT,                                        KC_ENT,   KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,  KC_NO,
        KC_NO, SPACE_L, SPACE_R, LG_WORD, CW_TOGG, KC_TAB,                                        KC_TAB,   KC_PGUP, KC_PGDN, KC_PSCR, DF(_GAM), KC_NO,
                        KC_NO,   KC_NO,   KC_NO,   _______,  _______, KC_NO,       KC_NO, LA_FUN, KC_BTN1,  KC_NO,   KC_NO,   KC_NO
    ),

    // [_VIM] = LAYOUT(
    //     KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,                                      KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //     KC_NO, KC_NO,   C(KC_A), KC_K,  C(KC_E), KC_NO,                                      KC_NO,   KC_NO, MC_3,  KC_NO, KC_NO, KC_NO,
    //     KC_NO, KC_NO,   KC_H,    KC_J,  KC_L,    KC_NO,                                      MC_4,    MC_0,  MC_1,  MC_2,  MC_5,  KC_NO,
    //     KC_NO, _______, CUT,     COPY,  PASTE,   KC_NO,                                      KC_NO,   MC_6,  MC_7,  MC_8,  KC_NO, KC_NO,
    //                     KC_NO,   KC_NO, KC_NO,   _______, _______, KC_NO,    KC_NO, _______, _______, KC_NO, KC_NO, KC_NO
    // ),

    [_MOUSE] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,                                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,                                        KC_NO,   KC_WH_L, KC_MS_U, KC_WH_R, KC_DEL,  KC_NO,
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,                                        KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_BSPC, KC_NO,
        KC_NO, _______, CUT,   COPY,  PASTE, KC_NO,                                        KC_NO,   KC_WH_U, KC_WH_D, KC_NO,   KC_NO,   KC_NO,
                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO,  KC_BTN2, KC_BTN1, KC_NO,   KC_NO,   KC_NO
    ),

    [_SYM] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,                                             KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO,   LG_LT,   KC_EQL,   LG_GT,    KC_NO,                                             LG_CIRC, LG_LBR,  S(KC_MINS), LG_RBR,  KC_NO,   KC_NO,
        KC_NO, KC_BSLS, S(KC_9), KC_MINS,  S(KC_0),  S(KC_EQL),                                         LG_PERC, LG_LCBR, LG_SCLN,    LG_RCBR, LG_HASH, KC_NO,
        KC_NO, KC_NO,   S(KC_8), LG_COLON, LG_SLASH, LG_DLR,                                            LG_AT,   LG_PIPE, LG_TILD,    LG_AMPR, KC_NO,   KC_NO,
                        KC_NO,   KC_NO,    KC_NO,    KC_SPC,    OS_CMD, MC_26,           MC_25, OS_ALT, OS_CTRL, KC_NO,   KC_NO,      KC_NO
    ),

    [_NUM] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                      KC_NO,     KC_NO,    KC_NO,    KC_NO,  KC_NO,   KC_NO, 
        KC_NO, KC_NO, KC_7,  KC_8,  KC_9,  KC_EQL,                                     KC_NO,     LG_SLASH, S(KC_8),  LG_NUM, KC_NO,   KC_NO, 
        KC_NO, KC_NO, KC_1,  KC_2,  KC_3,  KC_MINS,                                    S(KC_EQL), OS_SHFT,  OS_CTRL,  OS_ALT, KC_CMD,  KC_NO,
        KC_NO, KC_NO, KC_4,  KC_5,  KC_6,  KC_NO,                                      KC_NO,     S(KC_1),  LG_COMMA, LG_DOT, LG_QUES, KC_NO, 
                      KC_NO, KC_NO, KC_NO, _______,   LA_FUN, KC_NO,   KC_NO, _______, _______,   KC_NO,    KC_NO,    KC_NO
    ),

    [_ALT] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO,                                    KC_NO, KC_NO,   KC_NO,    KC_NO,      KC_NO,   KC_NO, 
        KC_NO, KC_NO,   KC_NO,    LG_QUOTE, KC_NO,   KC_NO,                                    KC_NO, KC_NO,   KC_GRV,   KC_O,       KC_RBRC, KC_NO, 
        KC_NO, S(KC_1), LG_GRAVE, LG_DQUO,  _______, KC_NO,                                    KC_NO, _______, LG_COMMA, LG_DOT,     LG_QUES, KC_NO,
        KC_NO, KC_NO,   S(KC_8),  LG_HASH,  KC_NO,   KC_NO,                                    KC_NO, KC_NO,   KC_MINS,  S(KC_MINS), KC_NO,   KC_NO, 
                        KC_NO,    KC_NO,    KC_NO,   KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,    KC_NO
    ),

    [_FN] = LAYOUT(
        KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,                                     KC_NO, KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,
        KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_VOLU,                                   KC_NO, MC_10,   MC_11,   MC_12,  MC_13,  KC_NO,
        KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_VOLD,                                   KC_NO, OS_SHFT, OS_CTRL, OS_ALT, OS_CMD, KC_NO,
        KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_MUTE,                                   KC_NO, MC_14,   MC_15,   MC_16,  MC_17,  KC_NO,
                       KC_NO, KC_NO, KC_NO, KC_NO,   _______, KC_NO,   KC_NO, _______, KC_NO, KC_NO,   KC_NO,   KC_NO
    ),

    // [_MACRO] = LAYOUT(
    //     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                      KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //     KC_NO, MC_0,  MC_1,  MC_2,  MC_3,  MC_4,                                       MC_5,    MC_6,  MC_7,  MC_8,  MC_9,  KC_NO, 
    //     KC_NO, MC_10, MC_11, MC_12, MC_13, MC_14,                                      MC_15,   MC_16, MC_17, MC_18, MC_19, KC_NO, 
    //     KC_NO, MC_20, MC_21, MC_22, MC_23, MC_24,                                      MC_25,   MC_26, MC_27, MC_28, MC_29, KC_NO, 
    //                   KC_NO, KC_NO, KC_NO, _______, _______, KC_NO,    KC_NO, _______, _______, KC_NO, KC_NO, KC_NO
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
    case LA_NUM:
    case LA_NAV:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_NUM:
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

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _SYM, _NAV, _NUM);
// }

// void led_set_keymap(uint8_t usb_led) {
//   if (!(usb_led & (1<<USB_LED_NUM_LOCK))) {
//     register_code(KC_NUMLOCK);
//     unregister_code(KC_NUMLOCK);
//   }
// }
