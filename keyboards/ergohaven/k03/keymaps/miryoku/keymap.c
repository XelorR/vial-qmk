#include QMK_KEYBOARD_H
#include "oled/bongocat.c"
/* #include "oled/luna.c" */
// #include "font_block.h"
// #include "game/game.h"
// #include "layers.c"
#include "ergohaven_ruen.h"
#include "ergohaven.h"

#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0
// #define IGNORE_MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD

#define LA_GFN MO(_GFN)
#define LA_NAV LT(_NAV,KC_SPC)
#define LA_MED LT(_MEDIA,KC_ESC)
#define LA_MOS LT(_MOUSE,KC_TAB)
#define LA_SYM LT(_SYM,KC_ENT)
#define LA_NUM LT(_NUM,KC_BSPC)
#define LA_FUN LT(_FN,KC_DEL)
#define LA_GFN MO(_GFN)

#define SPACE_L C(G(KC_LEFT))
#define SPACE_R C(G(KC_RGHT))
#define TAB_L C(S(KC_TAB))
#define TAB_R C(KC_TAB)

#define BU_Z LT(_BUTTON, KC_Z)
#define BU_SLSH LT(_BUTTON, KC_SLSH)
#define BU_QUOTE LT(_BUTTON, KC_QUOTE)

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
    _NUM,
    _SYM,
    _FN,
    _MACRO,
    _MEDIA,
    _MOUSE,
    _BUTTON,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_EN] = LAYOUT(
        _______,   _______, _______, _______, _______, _______,                                      _______, _______, _______,  _______, _______, _______,
        _______,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                         KC_J,    KC_L,    KC_U,     KC_Y,    KC_QUOT, TG(_NAV),
        LG_TOGGLE, HG_A,    HA_R,    HC_S,    HS_T,    KC_G,                                         KC_M,    HS_N,    HC_E,     HA_I,    HG_O,    OSM(MOD_RSFT),
        _______,   BU_Z,    KC_X,    KC_C,    KC_D,    KC_V,                                         KC_K,    KC_H,    KC_COMM,  KC_DOT,  BU_SLSH, _______,
                            _______, _______, LA_MED,  LA_NAV,  LA_MOS, _______,   _______, LA_SYM,  LA_NUM,  LA_FUN,  LG_COMMA, LG_DOT
    ),

    [_RU] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,  _______,
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,  _______,
        _______, HG_A,    HA_S,    HC_D,    HS_F,    KC_G,                                            KC_H,    HS_J,    HC_K,    HA_L,    HG_SCLN,  _______,
        _______, BU_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  BU_QUOTE, _______,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),

    [_GAM] = LAYOUT(
        _______, _______, _______, _______,  _______, _______,                                               _______, _______, _______, _______,  _______, _______,
        KC_I,    KC_TAB,   KC_Q,   KC_W,     KC_E,    KC_R,                                                  _______, _______, KC_UP,   _______,  KC_TAB,  DM_REC2,
        KC_CAPS, KC_LSFT,  KC_A,   KC_S,     KC_D,    KC_F,                                                  _______, KC_LEFT, KC_DOWN, KC_RGHT,  KC_RSFT, DM_RSTP,
        KC_M,    KC_LCTL,  KC_Z,   KC_X,     KC_C,    KC_V,                                                  _______, _______, KC_VOLD, KC_VOLU,  KC_RCTL, DM_PLY2,
                           _______, _______, KC_LALT, KC_SPC,  LA_GFN, _______,    _______, DF(_EN), KC_SPC, KC_PSCR, _______, _______
    ),

    [_GFN] = LAYOUT(
        _______,         _______, _______, _______, _______, _______,                                         _______,  _______, _______, _______,  _______, _______,
        DM_REC1, KC_5,    KC_1,    KC_2,    KC_3,    KC_4,                                                    _______,  KC_F8,   KC_F9,   _______,  _______, DM_REC2,
        DM_RSTP, KC_0,    KC_6,    KC_7,    KC_8,    KC_9,                                                    KC_F1,    KC_F5,   KC_F6,   KC_F7,    _______, DM_RSTP,
        DM_PLY1, KC_T,    KC_J,    KC_O,    KC_P,    KC_G,                                                    _______,  _______, _______, _______,  _______, DM_PLY2,
                                  _______, _______, KC_ESC,  KC_ENT,  _______, _______,     _______, _______, _______,  _______, _______,  _______
    ),

    [_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______,    _______, _______, _______, _______, _______,
        _______, SPACE_L, SPACE_R, TAB_L,   TAB_R,   _______,                                         S(C(KC_Z)), C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                         CW_TOGG,    KC_LEFT, KC_DOWN, KC_UP,   KC_PGDN, _______,
        KC_CAPS, _______, KC_ALGR, _______, _______, _______,                                         KC_INS,     KC_HOME, KC_PGDN, KC_PGUP, KC_END, CW_TOGG,
                          _______, _______, _______, _______, _______, _______,     _______, KC_ENT,  KC_BSPC,    KC_DEL,  _______, _______
    ),

    [_MOUSE] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______,    _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                         S(C(KC_Z)), C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                         _______,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
        _______, _______, KC_ALGR, _______, _______, _______,                                         _______,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                          _______, _______, _______, _______, _______, _______,     _______, KC_BTN2, KC_BTN1,    KC_BTN3,  _______, _______
    ),

    [_NUM] = LAYOUT(
        _______, _______,  _______, _______, _______, _______,                                           _______,  _______,  _______,  _______, _______, _______,
        DM_REC1, LG_LBR,   KC_7,    KC_8,    KC_9,    LG_RBR,                                            _______,  _______,  _______,  LG_LBR,  LG_RBR,   DM_REC2,
        DM_RSTP, LG_SCLN,  KC_4,    KC_5,    KC_6,    KC_EQL,                                            _______,  KC_RSFT,  KC_RCTL,  KC_LALT, KC_RGUI,  DM_RSTP,
        DM_PLY1, LG_GRAVE, KC_1,    KC_2,    KC_3,    KC_BSLS,                                           _______,  _______,  LG_COMMA, LG_DOT,  LG_SLASH, DM_PLY2,
                           _______, _______, LG_DOT,  KC_0,    KC_MINS, _______,       _______, _______, _______,  _______,  _______,  _______
    ),

    [_SYM] = LAYOUT(
        _______, _______,  _______, _______, _______, _______,                                                  _______, _______, _______, _______, _______, _______,
        DM_REC1, LG_LCBR,  LG_AMPR, S(KC_8), S(KC_9), LG_RCBR,                                                  _______, _______, _______, LG_LCBR, LG_RCBR, DM_REC2,
        DM_RSTP, LG_COLON, LG_DLR,  S(KC_5), LG_CIRC, S(KC_EQL),                                                _______, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, DM_RSTP,
        DM_PLY1, LG_TILD,  S(KC_1), LG_AT,   LG_HASH, S(KC_BSLS),                                               _______, _______, LG_LT,   LG_GT,   LG_QUES, DM_PLY2,
                           _______, _______, S(KC_9), S(KC_0),    S(KC_MINS), MC_9,     MC_8, _______, _______, _______, _______, _______
    ),

    [_FN] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                       _______, _______,     _______,  _______, _______, _______,
        _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                                       _______, _______,     _______,  _______, _______, _______,
        _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                                       _______, KC_RSFT,     KC_RCTL,  KC_LALT, KC_RGUI, _______,
        _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,                                       _______, OSL(_MACRO), DF(_GAM), KC_ALGR, CG_TOGG, _______,
                          _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______,     _______,  _______
    ),

    [_MACRO] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        DM_REC1, MC_20,   MC_22,   MC_22,   MC_23,   MC_24,                                           MC_25,   MC_26,   MC_27,   MC_28,   MC_29,   DM_REC2,
        DM_RSTP, MC_10,   MC_11,   MC_12,   MC_13,   MC_14,                                           MC_15,   MC_16,   MC_17,   MC_18,   MC_19,   DM_RSTP,
        DM_PLY1, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, DM_PLY2,
                          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    ),
    
    [_MEDIA] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                         _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
        _______, _______, KC_ALGR, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______,     _______, KC_MSTP, KC_MPLY, KC_MUTE, _______, _______
    ),

    [_BUTTON] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                                            _______,    _______, _______, _______, _______, _______,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), S(C(KC_Z)),                                         S(C(KC_Z)), C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
        _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                            _______,    KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, _______,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), S(C(KC_Z)),                                         S(C(KC_Z)), C(KC_V), C(KC_C), C(KC_X), C(KC_Z), _______,
                          _______, _______, KC_BTN3, KC_BTN1,    KC_BTN2, _______,     _______, KC_BTN2, KC_BTN1,    KC_BTN3, _______, _______
    ),

    // [_EXAMPLE] = LAYOUT(
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______, _______,
    //                       _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
    // ),
};