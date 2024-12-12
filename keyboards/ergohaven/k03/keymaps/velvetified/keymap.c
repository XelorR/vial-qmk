#include QMK_KEYBOARD_H
#include "ergohaven.h"
#include "ergohaven_ruen.h"
#include "oneshot.h"
#include "swapper.h"

#define LA_SYM MO(_SYM)
#define LA_NAV MO(_NAV)
#define LA_MED MO(_MED)
#define LA_GFN MO(_GFN)

#define SPACE_L C(G(KC_LEFT))
#define SPACE_R C(G(KC_RGHT))
#define TAB_L S(C(KC_TAB))
#define TAB_R C(KC_TAB)
#define CL_WIN A(KC_F4)
#define CL_TAB C(KC_F4)

enum layers {
    _ENG,
    _RUS,
    _GAM,
    _GFN,
    _NAV,
    _SYM,
    _NUM,
    _MED,
    _MOU,
    _FUN,
    _MAC,
    _BUT,
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
        [_ENG] = LAYOUT( \
          KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                          KC_6,   KC_7,    KC_8,    KC_9,   KC_0,    KC_DEL, \
          KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                          KC_J,   KC_L,    KC_U,    KC_Y,   KC_SCLN, KC_BSLS, \
          KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                          KC_M,   KC_N,    KC_E,    KC_I,   KC_O,    KC_QUOT, \
          OS_SHFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                                          KC_K,   KC_H,    KC_COMM, KC_DOT, KC_SLSH, CW_TOGG, \
                            KC_LBRC, KC_RBRC, OS_CTRL, LA_NAV, KC_SPC, KC_MUTE,      KC_HOME, KC_ENT, LA_SYM, KC_LALT, LG_COMMA, LG_DOT \
        ),

        [_RUS] = LAYOUT(
            _______, _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,  _______,
            _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_P,    KC_LBRC,  _______,
            _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  _______,
            _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOTE, _______,
                              _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______
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
                            KC_NO, KC_NO, KC_NO, KC_ENT, _______, KC_NO,     KC_NO, LA_MED, _______, KC_NO,   KC_NO,   KC_NO
        ),

        [_NAV] = LAYOUT( \
         KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,                                            KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F12,
         SW_WIN,  CL_WIN,  KC_HOME, KC_UP,   KC_END,   KC_INS,                                           KC_PGUP, KC_7,    KC_8,    KC_9,   _______, _______,
         _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT,                                           KC_PGDN, KC_4,    KC_5,    KC_6,   _______, _______,
         _______, _______, PREVWRD, CW_TOGG, NEXTWRD,  KC_DEL,                                           KC_PSCR, KC_1,    KC_2,    KC_3,   _______, _______,
                           SPACE_L, SPACE_R, _______, _______, _______, _______,       _______, _______, LA_MED,  _______, KC_0, _______\
        ),

        [_SYM] = LAYOUT( \
         _______, _______, KC_AT,   KC_DLR,  KC_HASH, _______,                                           _______, _______, KC_CIRC, _______, _______,  _______,
         _______, _______, KC_LT,   KC_EQL,  KC_GT,   KC_GRV,                                            _______, KC_LBRC, KC_UNDS, KC_RBRC, _______,  _______,
         _______, KC_BSLS, KC_LPRN, KC_MINS, KC_RPRN, KC_PLUS,                                           KC_PERC, KC_LCBR, KC_SCLN, KC_RCBR, KC_EXLM,  _______,
         _______, _______, KC_ASTR, KC_COLN, KC_SLSH, _______,                                           _______, KC_PIPE, KC_TILD, KC_AMPR, _______,  _______,
                           _______, _______, _______, LA_MED,  _______, _______,        _______, _______, _______, _______, TAB_L, TAB_R \
        ),

      [_MED] = LAYOUT(
        QK_BOOT, _______, _______, _______, _______, _______,                                            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                                            _______, _______, _______, _______, DM_PLY1, DM_REC1,
        _______, _______, _______, _______, _______, _______,                                            _______, KC_VOLD, KC_MUTE, KC_VOLU, DM_PLY2, DM_REC2,
        _______, _______, _______, DF(_GAM), _______, CG_TOGG,                                           _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, DM_RSTP,
                          _______, _______, _______, _______, _______, _______,        _______, _______, _______,  _______, _______, _______

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

