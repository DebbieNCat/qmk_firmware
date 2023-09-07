#pragma once
#include "debbieplanck.h"
#include "keycodes.h"

#define __BLANK       _______, _______, _______, _______, _______, _______
#define __BLANK_NOOP  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX


// QWERTY
#define __QWERTY_L1   MT_GUIE,   KC_Q,      KC_W,      KC_E,      KC_R,      KC_T
#define __QWERTY_L2   MT_ALTB,   MT_SFTA,   KC_S,      KC_D,      KC_F,      KC_G
#define __QWERTY_L3   KC_LCTL,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B
#define __QWERTY_L4   XXXXXXX,   XXXXXXX,   XXXXXXX,   MO_NAV,    MO_NUM,    KC_SPC

#define __QWERTY_R1   KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSPC
#define __QWERTY_R2   KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   TD_QG
#define __QWERTY_R3   KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_LSFT
#define __QWERTY_R4   KC_ENT,    MO_SYM,    KC_RALT,   XXXXXXX,   XXXXXXX,   XXXXXXX

// NUM
#define __NUM_L1      XXXXXXX,   KC_F1,     KC_F2,     KC_F3,     KC_F4,     XXXXXXX
#define __NUM_L2      KC_LALT,   KC_F5,     KC_F6,     KC_F7,     KC_F8,     XXXXXXX
#define __NUM_L3      KC_LCTL,   KC_F9,     KC_F10,    KC_F11,    KC_F12,    XXXXXXX
#define __NUM_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_LSFT,   _______,   KC_SPC

#define __NUM_R1      KC_SLSH,   KC_7,      KC_8,      KC_9,      KC_MINS,   KC_BSPC
#define __NUM_R2      KC_ASTR,   KC_4,      KC_5,      KC_6,      KC_PLUS,   KC_EQL
#define __NUM_R3      KC_COMM,   KC_1,      KC_2,      KC_3,      KC_DOT,    KC_RSFT
#define __NUM_R4      KC_ENT,    KC_0,      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX

// NAV
#define __NAV_L1      KC_LGUI,   KC_HOME,   KC_END,    KC_PGUP,   KC_PGDN,   KC_INS
#define __NAV_L2      KC_LALT,   KC_LSFT,   XXXXXXX,   CB_ALTB,   KC_APP,    KC_PSCR
#define __NAV_L3      KC_LCTL,   DV_RUN,    DV_DRUN,   DV_APUP,   DV_TBCL,   DV_CODE
#define __NAV_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   _______,   XXXXXXX,   KC_SPC

#define __NAV_R1      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_BSPC
#define __NAV_R2      XXXXXXX,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,  XXXXXXX
#define __NAV_R3      __BLANK_NOOP
#define __NAV_R4      KC_ENT,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX

// SYM
#define __SYM_L1      KC_TILD,   KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,   KC_PERC
#define __SYM_L2      KC_LALT,   KC_EQL,    KC_MINS,   KC_SLSH,   XXXXXXX,  XXXXXXX
#define __SYM_L3      KC_LCTL,   KC_PLUS,   KC_UNDS,   KC_QUES,   XXXXXXX,  XXXXXXX
#define __SYM_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_LSFT,   MO_ADJ,   KC_SPC

#define __SYM_R1      KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_BSPC
#define __SYM_R2      XXXXXXX,   XXXXXXX,   KC_BSLS,   KC_LBRC,   KC_RBRC,   KC_DEL
#define __SYM_R3      XXXXXXX,   XXXXXXX,   KC_PIPE,   KC_LCBR,   KC_RCBR,   KC_RSFT
#define __SYM_R4      KC_ENT,    _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX

// ADJ
#define __ADJ_L1      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   QK_BOOT,   XXXXXXX
#define __ADJ_L2      __BLANK_NOOP
#define __ADJ_L3      __BLANK_NOOP
#define __ADJ_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   _______,   XXXXXXX

#define __ADJ_R1      XXXXXXX,   RGB_TOG,   RGB_MOD,   RGB_HUI,   RGB_HUD,   XXXXXXX
#define __ADJ_R2      XXXXXXX,   RGB_SPI,   RGB_SPD,   RGB_SAI,   RGB_SAD,   XXXXXXX
#define __ADJ_R3      KC_NUM,    XXXXXXX,   XXXXXXX,   RGB_VAI,   RGB_VAD,   XXXXXXX
#define __ADJ_R4      XXXXXXX,   _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX
