#include QMK_KEYBOARD_H
#include "ergohaven_ruen.h"
#include "ergohaven.h"

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
#define LA_SYMRU LT(_SYMRU,KC_ENT)
#define LA_NUM LT(_NUM,KC_BSPC)
#define LA_FUN LT(_FN,KC_DEL)
#define LA_GAM DF(_GAM)
#define LA_GFN MO(_GFN)
#define LA_MAC OSL(_MACRO)
#define LA_ALT OSL(_ALT)

#define BU_Z LT(_BUTTON, KC_Z)
#define BU_SLSH LT(_BUTTON, KC_SLSH)
#define BU_QUOTE LT(_BUTTON, KC_QUOTE)

#define HG_A LGUI_T(KC_A)
#define HA_R LALT_T(KC_R)
#define HC_S LCTL_T(KC_S)
#define HS_T LSFT_T(KC_T)
#define HS_N RSFT_T(KC_N)
#define HC_E LCTL_T(KC_E)
#define HA_I LALT_T(KC_I)
#define HG_O LGUI_T(KC_O)

#define HG_C LGUI_T(KC_C)
#define HA_I LALT_T(KC_I)
#define HC_E LCTL_T(KC_E)
#define HS_A LSFT_T(KC_A)
#define HS_H RSFT_T(KC_H)
#define HC_T LCTL_T(KC_T)
#define HA_S LALT_T(KC_S)
#define HG_N LGUI_T(KC_N)

#define HA_S LALT_T(KC_S)
#define HC_D LCTL_T(KC_D)
#define HS_F LSFT_T(KC_F)
#define HS_J RSFT_T(KC_J)
#define HC_K LCTL_T(KC_K)
#define HA_L LALT_T(KC_L)
#define HG_SCLN LGUI_T(KC_SCLN)

#define UNDO C(KC_Z)
#define CUT  C(KC_X)
#define COPY C(KC_C)
#define PASTE C(KC_V)
#define REDO C(KC_Y)

#undef UNICODE_TYPE_DELAY
#define UNICODE_TYPE_DELAY 5

enum layers {
    _EN,
    _RU,
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_EN] = LAYOUT(
       KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,                                         KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
       KC_NO,    KC_Q,  KC_W,  KC_F,  KC_P,   KC_B,                                          KC_J,   KC_L,   KC_U,    KC_Y,    KC_QUOT, KC_NO,
       KC_NO,    HG_A,  HA_R,  HC_S,  HS_T,   KC_G,                                          KC_M,   HS_N,   HC_E,    HA_I,    HG_O,    KC_NO,
       KC_NO,    BU_Z,  KC_X,  KC_C,  KC_D,   KC_V,                                          KC_K,   KC_H,   KC_COMM, KC_DOT,  BU_SLSH, KC_NO,
                        KC_NO, KC_NO, LA_MED, LA_NAV, LA_MOS, KC_NO,          KC_NO, LA_SYM, LA_NUM, LA_FUN, KC_NO,   KC_NO
    ),

    [_RU] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,
        KC_NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_NO,
        KC_NO,   HG_A,    HA_S,    HC_D,    HS_F,    KC_G,                                            KC_H,    HS_J,    HC_K,    HA_L,    HG_SCLN,  KC_NO,
        KC_NO,   BU_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  BU_QUOTE, KC_NO,
                          KC_NO,   KC_NO,   _______, _______, _______, KC_NO,        KC_NO, LA_SYMRU, _______, _______, KC_NO,   KC_NO
    ),

    [_GAM] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,                                      KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_TAB,  KC_Q,  KC_W,  KC_E,    KC_R,                                       _______, _______,          KC_UP,   _______, KC_TAB,  KC_NO,
        KC_NO, KC_LSFT, KC_A,  KC_S,  KC_D,    KC_F,                                       _______, KC_LEFT,          KC_DOWN, KC_RGHT, KC_RSFT, KC_NO,
        KC_NO, KC_LCTL, KC_Z,  KC_X,  KC_C,    KC_V,                                       _______, _______,          _______, _______, KC_RCTL, KC_NO,
                        KC_NO, KC_NO, KC_LALT, KC_SPC, LA_GFN, KC_NO,      KC_NO, DF(_EN), KC_SPC,  LT(_FN,KC_PSCR),  KC_NO,   KC_NO
    ),

    [_GFN] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,      KC_NO,                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_ESC,  KC_7,  KC_8,  KC_9,       KC_J,                                      DM_REC2, _______, _______, _______, _______, KC_NO,
        KC_NO, KC_CAPS, KC_4,  KC_5,  KC_6,       KC_I,                                      DM_RSTP, _______, _______, _______, _______, KC_NO,
        KC_NO, KC_G,    KC_1,  KC_2,  KC_3,       KC_M,                                      DM_PLY2, _______, _______, _______, _______, KC_NO,
                        KC_NO, KC_NO, MO(_MEDIA), KC_ENT, _______, KC_NO,    KC_NO, _______, LA_NUM,  _______, KC_NO,   KC_NO
    ),

    [_NAV] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                             KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,
        KC_NO,   QK_BOOT, LA_ALT,  KC_NO,   KC_NO,   KC_NO,                                             KC_INS,   KC_HOME, KC_UP,   KC_END,    KC_PGUP, KC_NO,
        KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                                             KC_CAPS,  KC_LEFT, KC_DOWN, KC_RGHT,   KC_PGDN, KC_NO,
        KC_NO,   DF(_13), KC_ALGR, LA_GAM,  LA_MAC,  KC_NO,                                             KC_NO,    CW_TOGG, LG_WORD, G(KC_SPC), KC_NO,   KC_NO,
                          KC_NO,   KC_NO,   _______, _______, _______, KC_NO,           KC_NO, KC_ENT,  KC_BSPC,  KC_DEL,  KC_NO,   KC_NO
    ),

    [_MOUSE] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   QK_BOOT, LA_ALT,  KC_NO,   KC_NO,   KC_NO,                                        KC_NO,   KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, KC_NO,
        KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                                        KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_NO,
        KC_NO,   KC_NO,   KC_ALGR, LA_GAM,  LA_MAC,  KC_NO,                                        REDO,    PASTE,   COPY,    CUT,     UNDO,    KC_NO,
                          KC_NO,   KC_NO,   _______, _______, _______, KC_NO,     KC_NO,  KC_BTN2, KC_BTN1, KC_BTN3, KC_NO,   KC_NO
    ),

    [_SYM] = LAYOUT(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_LCBR,  KC_AMPR,  KC_ASTR,  KC_QUES,  KC_RCBR,                                       KC_NO,   KC_NO,   KC_NO,   LA_ALT,  QK_BOOT, KC_NO,
        KC_NO,  KC_COLN,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_PLUS,                                       KC_NO,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO,  KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,                                       KC_NO,   LA_MAC,  LA_GAM,  KC_ALGR, KC_NO,   KC_NO,
                          KC_NO,    KC_NO,    KC_LPRN,  KC_RPRN, KC_UNDS, KC_NO,       KC_NO, _______, _______, _______, KC_NO,   KC_NO
    ),

    [_SYMRU] = LAYOUT(
        KC_NO,  KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,                                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_LCBR,  LG_DOT,  KC_ASTR, LG_QUES,  KC_RCBR,                                       KC_NO,   KC_NO,   KC_NO,   LA_ALT,  QK_BOOT, KC_NO,
        KC_NO,  LG_COLON, LG_DLR,  LG_PERC, LG_COMMA, KC_PLUS,                                       KC_NO,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO,  KC_TILD,  KC_EXLM, LG_DQUO, LG_HASH,  LG_PIPE,                                       KC_NO,   LA_MAC,  LA_GAM,  KC_ALGR, KC_NO,   KC_NO,
                          KC_NO,   KC_NO,   KC_LPRN,  KC_RPRN, KC_UNDS, KC_NO,       KC_NO, _______, _______, _______, KC_NO,   KC_NO
    ),

    [_NUM] = LAYOUT(
        KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,                                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_LBRC,   KC_7,    KC_8,    KC_9,    KC_RBRC,                                           KC_NO,   KC_NO,   KC_NO,   LA_ALT,  QK_BOOT, KC_NO,
        KC_NO,   LG_SCLN,   KC_4,    KC_5,    KC_6,    KC_EQL,                                            KC_NO,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO,   KC_GRV,    KC_1,    KC_2,    KC_3,    KC_BSLS,                                           KC_NO,   LA_MAC,  LA_GAM,  KC_ALGR, KC_NO,   KC_NO,
                            KC_NO,   KC_NO,   LG_DOT,  KC_0,    KC_MINS, KC_NO,           KC_NO, _______, _______, _______, KC_NO,   KC_NO
    ),

    [_FN] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                                       DM_REC1, KC_NO,   KC_NO,   LA_ALT,  QK_BOOT, KC_NO,
        KC_NO,   KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                                       DM_RSTP, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO,   KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,                                       DM_PLY1, LA_MAC,  LA_GAM,  KC_ALGR, KC_NO,   KC_NO,
                          KC_NO,   KC_NO,   KC_APP,  KC_SPC, KC_TAB, KC_NO,         KC_NO, _______, _______, _______, KC_NO,   KC_NO
    ),

    [_MACRO] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   MC_0,    MC_1,    MC_2,    MC_3,    MC_4,                                            MC_5,    MC_6,    MC_7,    MC_8,    MC_9,    KC_NO,
        KC_NO,   MC_10,   MC_11,   MC_12,   MC_13,   MC_14,                                           MC_15,   MC_16,   MC_17,   MC_18,   MC_19,   KC_NO,
        KC_NO,   MC_20,   MC_21,   MC_22,   MC_23,   MC_24,                                           MC_25,   MC_26,   MC_27,   MC_28,   MC_29,   KC_NO,
                          KC_NO,   KC_NO,   _______, _______, _______, KC_NO,       KC_NO,   _______, _______, _______, KC_NO,   KC_NO
    ),

    [_MEDIA] = LAYOUT(
        KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,
        KC_NO,  QK_BOOT, LA_ALT,  KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   _______, KC_VOLU, _______, LG_TG_MAC, KC_NO,
        KC_NO,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                                           KC_NO,   KC_MPRV, KC_VOLD, KC_MNXT, CG_TOGG,   KC_NO,
        KC_NO,  KC_NO,   KC_ALGR, LA_GAM,  LA_MAC,  KC_NO,                                           UC_BSD,  UC_LINX, UC_MAC,  UC_WIN,  UC_WINC,   KC_NO,
                         KC_NO,   KC_NO,   _______, _______, _______, KC_NO,         KC_NO, KC_MSTP, KC_MPLY, KC_MUTE, KC_NO,   KC_NO
    ),

    [_BUTTON] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  
        KC_NO,   UNDO,    CUT,     COPY,    PASTE,   REDO,                                            REDO,    PASTE,   COPY,    CUT,     UNDO,    KC_NO,  
        KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                                           KC_NO,   KC_RSFT, KC_RCTL, KC_ALGR, KC_RGUI, KC_NO,  
        KC_NO,   UNDO,    CUT,     COPY,    PASTE,   REDO,                                            REDO,    PASTE,   COPY,    CUT,     UNDO,    KC_NO,  
                          KC_NO,   KC_NO,   KC_BTN3, KC_BTN1, KC_BTN2, KC_NO,         KC_NO, KC_BTN2, KC_BTN1, KC_BTN3, KC_NO,   KC_NO
    ),

    [_ALT] = LAYOUT(
        KC_NO, KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                                      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO, UC(0x238B), UC(0x20B9), UC(0x03C6), UC(0x00A7), UC(0x20BF),                                 UC(0x2248), UC(0x03BB), UC(0x221E), UC(0x00A5), UC(0x2318), KC_NO,
        KC_NO, UC(0x03B1), UC(0x20BD), UC(0x03A3), UC(0x00B1), UC(0x2756),                                 UC(0x03BC), UC(0x2116), UC(0x20AC), UC(0x2794), UC(0x2325), KC_NO,
        KC_NO, UC(0x2022), UC(0x00D7), UC(0x00A9), UC(0x00B0), UC(0x2713),                                 UC(0x2328), UC(0x2317), UC(0x00AB), UC(0x00BB), UC(0x21E7), KC_NO,
                           KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO,      KC_NO,      KC_NO,      KC_NO
    ),

    [_13] = LAYOUT(
       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO,                                                           KC_NO,           KC_NO,          KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO, KC_B,  KC_Y,  KC_O,  KC_U,           KC_QUOT,                                                         KC_SCLN,         KC_L,           KC_D,  KC_W,  KC_V,  KC_NO,
       KC_NO, HG_C,  HA_I,  HC_E,  HS_A,           KC_COMM,                                                         KC_DOT,          HS_H,           HC_T,  HA_S,  HG_N,  KC_NO,
       KC_NO, KC_G,  KC_X,  KC_J,  KC_K,           KC_MINS,                                                         KC_SLSH,         KC_R,           KC_M,  KC_F,  KC_P,  KC_NO,
                     KC_NO, KC_NO, LT(_14,KC_ESC), LT(_14,KC_SPC), LT(_14,KC_TAB), KC_NO,    KC_NO, LT(_14,KC_ENT), LT(_14,KC_BSPC), LT(_14,KC_DEL), KC_NO, KC_NO
    ),

    [_14] = LAYOUT(
        KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  QK_BOOT, LA_ALT,  KC_NO,   KC_NO,   KC_Q,                                            KC_Q,    KC_NO,   KC_NO,   LA_ALT,  QK_BOOT, KC_NO,
        KC_NO,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_Z,                                            KC_Z,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO,  DF(_EN), KC_ALGR, LA_GAM,  KC_NO,   KC_NO,                                           KC_NO,   KC_NO,   LA_GAM,  KC_ALGR, KC_NO,   KC_NO,
                         KC_NO,   KC_NO,   _______, _______, _______, KC_NO,         KC_NO, _______, _______, _______, KC_NO,   KC_NO
    ),

    // [_EXAMPLE] = LAYOUT(
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //                       _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    // ),
};

