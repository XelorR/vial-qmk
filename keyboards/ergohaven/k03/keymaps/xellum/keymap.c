#include QMK_KEYBOARD_H
#include "ergohaven.h"
#include "ergohaven_ruen.h"
#include "oneshot.h"
#include "swapper.h"

#define LA_NAV LT(_NAV,KC_SPC)
#define LA_MED LT(_MEDIA,KC_ESC)
#define LA_MOS LT(_MOUSE,KC_TAB)
#define LA_SYM LT(_SYM,KC_ENT)
#define LA_SYMRU LT(_SYMRU,KC_ENT)
#define LA_NUM LT(_NUM,KC_BSPC)
#define LA_FUN LT(_FN,KC_DEL)
#define AL_J LT(_ALT,KC_J)
#define AL_N LT(_ALT,KC_N)
#define AL_T LT(_ALT,KC_T)
#define AL_F LT(_ALT,KC_F)
#define SY_A LT(_SYM,KC_A)
#define SY_O LT(_SYM,KC_O)
#define SY_SCLN LT(_SYM,KC_SCLN)
#define MO_Z LT(_MOUSE,KC_Z)
#define LA_GFN MO(_GFN)
#define LA_MAC OSL(_MACRO)
// #define LA_LAUNCH OSL(_MACRO)
// #define LA_MAC MO(_MACRO)

#define SPACE_L C(G(KC_LEFT))
#define SPACE_R C(G(KC_RGHT))
#define TAB_L S(C(KC_TAB))
#define TAB_R C(KC_TAB)
#define CL_WIN A(KC_F4)
#define CL_TAB C(KC_F4)

#define SH_ESC LSFT_T(KC_ESC)
#define CTL_ESC LCTL_T(KC_ESC)
#define VI_Z LT(_VIM, KC_Z)
#define MS_SLSH LT(_MOUSE, KC_SLSH)
#define MS_QUOTE LT(_MOUSE, KC_QUOTE)

#define OSM_SFT OSM(MOD_LSFT)
#define OSM_ALT OSM(MOD_LALT)
#define OSM_AGR OSM(MOD_RALT)
#define OSM_CTL OSM(MOD_LCTL)
#define OSM_GUI OSM(MOD_LGUI)

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

#undef UNICODE_TYPE_DELAY
#define UNICODE_TYPE_DELAY 5

enum layers {
    _ENG,
    _RUS,
    _GAM,
    _GFN,
    _NAV,
    _SYM,
    _SYMRU,
    _NUM,
    _MEDIA,
    _MOUSE,
    _FN,
    _MACRO,
    _BUTTON,
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
       KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,
       KC_NO,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                            KC_J,    KC_L,    KC_U,    KC_Y,   KC_QUOT, KC_NO,
       KC_NO,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                            KC_M,    KC_N,    KC_E,    KC_I,   KC_O,    KC_NO,
       KC_NO,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                                            KC_K,    KC_H,    KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                          KC_NO,   KC_NO,   LA_MED,  LA_NAV, LA_MOS, KC_NO,            KC_NO, LA_SYM, LA_NUM,  LA_FUN,  KC_NO,   KC_NO
    ),

    [_RUS] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
        KC_NO,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_NO,
        KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT, KC_NO,
                          KC_NO,   KC_NO,   _______, _______, _______, KC_NO,        KC_NO, LA_SYMRU, _______, _______, KC_NO,   KC_NO
    ),

    [_GAM] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,                                      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_TAB,  KC_Q,  KC_W,  KC_E,    KC_R,                                       _______, _______, KC_UP,   _______, KC_TAB,  KC_NO,
        KC_NO, KC_LSFT, KC_A,  KC_S,  KC_D,    KC_F,                                       _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_RSFT, KC_NO,
        KC_NO, KC_LCTL, KC_Z,  KC_X,  KC_C,    KC_V,                                       _______, _______, _______, _______, KC_RCTL, KC_NO,
                        KC_NO, KC_NO, KC_LALT, KC_SPC, LA_GFN, KC_NO,     KC_NO, DF(_ENG), LA_NUM,  LA_FUN,  KC_NO,   KC_NO
    ),

    [_GFN] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_ESC,  KC_5,  KC_6,  KC_7,    KC_8,                                      DM_REC2, _______, _______, _______, _______, KC_NO,
        KC_NO, KC_CAPS, KC_1,  KC_2,  KC_3,    KC_4,                                      DM_RSTP, _______, _______, _______, _______, KC_NO,
        KC_NO, KC_G,    KC_J,  KC_I,  KC_M,    KC_T,                                      DM_PLY2, _______, _______, _______, _______, KC_NO,
                        KC_NO, KC_NO, _______, KC_ENT, _______, KC_NO,    KC_NO, _______, KC_PSCR, _______, KC_NO,   KC_NO
    ),

    [_SYM] = LAYOUT(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                         KC_NO,   KC_NO,      KC_NO,     KC_NO,         KC_NO,   KC_NO,  
        KC_NO,  KC_LBRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RBRC,                                       KC_NO,   LG_RU_KHA,  LG_RU_YO,  LG_RU_HRD_SGN, KC_NO,   KC_NO,
        KC_NO,  KC_COLN,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_PLUS,                                       KC_NO,   OS_SHFT,    OS_CTRL,   OS_ALT,        OS_CMD,  KC_NO,
        KC_NO,  KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,                                       KC_NO,   LG_DQUO,    LG_COMMA,  LG_DOT,        LG_QUES, KC_NO,
                          KC_NO,    KC_NO,    KC_LPRN,  KC_RPRN, KC_UNDS, KC_NO,       KC_NO, _______, _______, _______,    KC_NO,     KC_NO
    ),

    [_SYMRU] = LAYOUT(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                         KC_NO,   KC_NO,      KC_NO,     KC_NO,         KC_NO,   KC_NO,  
        KC_NO,  LG_LCBR,  LG_AMPR,  KC_ASTR,  KC_LPRN,  LG_RCBR,                                       KC_NO,   LG_RU_KHA,  LG_RU_YO,  LG_RU_HRD_SGN, KC_NO,   KC_NO,
        KC_NO,  LG_COLON, LG_DLR,   KC_PERC,  LG_CIRC,  KC_PLUS,                                       KC_NO,   OS_SHFT,    OS_CTRL,   OS_ALT,        OS_CMD,  KC_NO,
        KC_NO,  LG_TILD,  KC_EXLM,  LG_AT,    LG_HASH,  LG_PIPE,                                       KC_NO,   LG_DQUO,    LG_COMMA,  LG_DOT,        LG_QUES, KC_NO,
                          KC_NO,    KC_NO,    KC_LPRN,  KC_RPRN, KC_UNDS, KC_NO,       KC_NO, _______, _______, _______,    KC_NO,     KC_NO
    ),

    [_NUM] = LAYOUT(
        KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,                                             KC_NO,   KC_NO,     KC_NO,    KC_NO,         KC_NO,   KC_NO,  
        KC_NO,   LG_LBR,    KC_7,    KC_8,    KC_9,    LG_RBR,                                            KC_NO,   LG_RU_KHA, LG_RU_YO, LG_RU_HRD_SGN, KC_NO,   KC_NO,  
        KC_NO,   LG_SCLN,   KC_4,    KC_5,    KC_6,    KC_EQL,                                            KC_NO,   OS_SHFT,   OS_CTRL,  OS_ALT,        OS_CMD,  KC_NO,  
        KC_NO,   LG_GRAVE,  KC_1,    KC_2,    KC_3,    KC_BSLS,                                           KC_NO,   LG_DQUO,   LG_COMMA, LG_DOT,        LG_QUES, KC_NO,  
                            KC_NO,   KC_NO,   LG_DOT,  KC_0,    KC_MINS, KC_NO,           KC_NO, _______, _______, _______,   KC_NO,    KC_NO
    ),

    [_NAV] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                             KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,
        KC_NO,   CL_WIN,  SW_WIN,  TAB_L,   TAB_R,   KC_NO,                                             KC_NO,   KC_HOME, KC_UP,   KC_END,    KC_PGUP, KC_NO,
        KC_NO,   OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT, KC_NO,                                             KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT,   KC_PGDN, KC_NO,
        KC_NO,   UNDO,    CUT,     COPY,    PASTE,   KC_NO,                                             KC_NO,   CW_TOGG, LG_WORD, G(KC_SPC), KC_LALT, KC_NO,
                          KC_NO,   KC_NO,   _______, _______, _______, KC_NO,           KC_NO, KC_ENT,  KC_BSPC,  KC_DEL,  KC_NO,   KC_NO
    ),

    [_FN] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_F12,  KC_F7, KC_F8, KC_F9,   KC_PSCR,                                   DM_REC1, _______, _______, _______, QK_BOOT, KC_NO,
        KC_NO, KC_F11,  KC_F4, KC_F5, KC_F6,   KC_SCRL,                                   DM_RSTP, OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD, KC_NO,
        KC_NO, KC_F10,  KC_F1, KC_F2, KC_F3,   KC_CAPS,                                   DM_PLY1, PASTE,   COPY,    CUT,     UNDO,    KC_NO,
                        KC_NO, KC_NO, _______, _______, _______, KC_NO,   KC_NO, _______, _______, _______, KC_NO, KC_NO
    ),

    [_MOUSE] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_DEL,  KC_NO,   KC_NO,   KC_NO,    KC_NO,                                        KC_NO,   KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, KC_NO,
        KC_NO,   OS_CMD,  OS_ALT,  OS_CTRL, OS_SHFT,  KC_NO,                                        KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_NO,
        KC_NO,   UNDO,    CUT,     COPY,    PASTE,    KC_NO,                                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                          KC_NO,   KC_NO,   DF(_GAM), _______, _______, KC_NO,     KC_NO,  KC_BTN2, KC_BTN1, KC_BTN3, KC_NO,   KC_NO
    ),

    [_MEDIA] = LAYOUT(
        KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  UC_WIN,  UC_WINC, UC_MAC,  UC_LINX, UC_BSD,                                          KC_NO,   _______, KC_VOLU, _______, _______, KC_NO,
        KC_NO,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                                           KC_NO,   KC_MPRV, KC_VOLD, KC_MNXT, CG_TOGG, KC_NO,
        KC_NO,  UNDO,    CUT,     COPY,    PASTE,   KC_NO,                                           KC_NO,   _______, KC_MUTE, _______, _______, KC_NO,
                         KC_NO,   KC_NO,   _______, _______, _______, KC_NO,         KC_NO, KC_MSTP, KC_MPLY, KC_MUTE, KC_NO,   KC_NO
    ),

    [_MACRO] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   MC_0,    MC_1,    MC_2,    MC_3,    MC_4,                                            MC_5,    MC_6,    MC_7,    MC_8,    MC_9,    KC_NO,
        KC_NO,   MC_10,   MC_11,   MC_12,   MC_13,   MC_14,                                           MC_15,   MC_16,   MC_17,   MC_18,   MC_19,   KC_NO,
        KC_NO,   MC_20,   MC_21,   MC_22,   MC_23,   MC_24,                                           MC_25,   MC_26,   MC_27,   MC_28,   MC_29,   KC_NO,
                          KC_NO,   KC_NO,   _______, _______, _______, KC_NO,       KC_NO,   _______, _______, _______, KC_NO,   KC_NO
    ),

    [_ALT] = LAYOUT(
        KC_NO, KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                                      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO, UC(0x03A8), UC(0x03A9), UC(0x03C6), UC(0x262E), UC(0x20BF),                                 UC(0x2248), UC(0x03BB), UC(0x221E), UC(0x00A5), UC(0x2318), KC_NO,
        KC_NO, UC(0x03B1), UC(0x20BD), UC(0x03A3), UC(0x00B1), UC(0x00B0),                                 UC(0x03BC), UC(0x2610), UC(0x20AC), UC(0x2611), UC(0x2325), KC_NO,
        KC_NO, UC(0x00A7), UC(0x00D7), UC(0x00A9), UC(0x0394), UC(0x2713),                                 UC(0x2328), UC(0x00AB), UC(0x2022), UC(0x00BB), UC(0x21E7), KC_NO,
                           KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO,      KC_NO,      KC_NO,      KC_NO
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
    case LA_NAV:
    case LA_MOS:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_MOS:
    case LA_NAV:
    case LA_SYM:
    case LA_SYMRU:
    case LA_NUM:
    case KC_LSFT:
    case OS_SHFT:
    case OSM_SFT:
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
//     if (layer_state_cmp(state, _SYM) && layer_state_cmp(state, _NUM)) {
//         state = update_tri_layer_state(state, _SYM, _NUM, _FN);
//     }
//     else if (layer_state_cmp(state, _SYMRU) && layer_state_cmp(state, _NUM)) {
//         state = update_tri_layer_state(state, _SYMRU, _NUM, _FN);
//     }
//     else {
//         state = update_tri_layer_state(state, _SYM, _NUM, _FN);
//         state = update_tri_layer_state(state, _SYMRU, _NUM, _FN);
//     }
//     return state;
// }

