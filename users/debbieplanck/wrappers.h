#pragma once
#include "debbieplanck.h"
#include "keycodes.h"

#define __BLANK       _______, _______, _______, _______, _______, _______
#define __BLANK_NOOP  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define _M_COMMON_13  __BLANK_NOOP
#define _M_COMMON_L2   KC_LGUI,   KC_LALT,   KC_LSFT,   KC_LCTL,   XXXXXXX,   XXXXXXX
#define _M_COMMON_R2   XXXXXXX,   XXXXXXX,   KC_LCTL,   KC_LSFT,   KC_LALT,   KC_LGUI

/* QWERTY */
#define __QWERTY_L1   KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      XXXXXXX
#define __QWERTY_L2   M_GUIA,    M_ALTS,    M_SFTD,    M_CTLF,    KC_G,      XXXXXXX
#define __QWERTY_L3   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      XXXXXXX
#define __QWERTY_L4   XXXXXXX,   XXXXXXX,   XXXXXXX,   LT_FUNE,   LT_NUMS,   KC_TAB

#define __QWERTY_R1   XXXXXXX,   KC_Y,      KC_U,      KC_I,      KC_O,      KC_P
#define __QWERTY_R2   XXXXXXX,   KC_H,      M_CTLJ,    M_SFTK,    M_ALTL,    M_GCLN
#define __QWERTY_R3   XXXXXXX,   KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_RALT
#define __QWERTY_R4   XXXXXXX,   LT_NAVB,   LT_MOUD,   XXXXXXX,   XXXXXXX,   XXXXXXX

/* NUM */
#define __NUM_L1      _M_COMMON_13
#define __NUM_L2      _M_COMMON_L2
#define __NUM_L3      _M_COMMON_13
#define __NUM_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   _______,   XXXXXXX

#define __NUM_R1      XXXXXXX,   KC_LBRC,   KC_7,      KC_8,      KC_9,      KC_RBRC
#define __NUM_R2      XXXXXXX,   KC_QUOT,   KC_4,      KC_5,      KC_6,      KC_GRV
#define __NUM_R3      XXXXXXX,   KC_SLSH,   KC_1,      KC_2,      KC_3,      KC_BSLS
#define __NUM_R4      KC_EQL,    KC_0,      KC_MINS,   XXXXXXX,   XXXXXXX,   XXXXXXX

/* FUN */
#define __FUN_L1      _M_COMMON_13
#define __FUN_L2      KC_LGUI,   KC_LALT,   KC_LSFT,   KC_LCTL,   DV_TBCL,   XXXXXXX
#define __FUN_L3      XXXXXXX,   DV_CODE,   DV_RUN,    DV_DRUN,   DV_APUP,   XXXXXXX
#define __FUN_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   _______,   XXXXXXX,   XXXXXXX

#define __FUN_R1      XXXXXXX,   KC_PSCR,   KC_F7,     KC_F8,     KC_F9,     KC_F12
#define __FUN_R2      XXXXXXX,   XXXXXXX,   KC_F4,     KC_F5,     KC_F6,     KC_F11
#define __FUN_R3      XXXXXXX,   XXXXXXX,   KC_F1,     KC_F2,     KC_F3,     KC_F10
#define __FUN_R4      XXXXXXX,   KC_APP,    KC_DEL,    XXXXXXX,   XXXXXXX,   XXXXXXX

/* NAV */
#define __NAV_L1      KC_HOME,   KC_PGDN,   KC_PGUP,   KC_END,    KC_INS,    XXXXXXX
#define __NAV_L2      KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_CAPS,   XXXXXXX
#define __NAV_L3      M_UNDO,    M_CUT,     M_COPY,    M_PASTE,   M_REDO,    XXXXXXX
#define __NAV_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_ENT,    MO_ADJ,    KC_TAB

#define __NAV_R1      _M_COMMON_13
#define __NAV_R2      _M_COMMON_R2
#define __NAV_R3      _M_COMMON_13
#define __NAV_R4      XXXXXXX,   _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX

/* MOUSE */
#define __MOU_L1      KC_WH_L,   KC_WH_D,   KC_WH_U,   KC_WH_R,   XXXXXXX,   XXXXXXX
#define __MOU_L2      KC_MS_L,   KC_MS_D,   KC_MS_U,   KC_MS_R,   XXXXXXX,   XXXXXXX
#define __MOU_L3      _______,   _______,   _______,   _______,   _______,   XXXXXXX
#define __MOU_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_BTN2,   KC_BTN1,   KC_BTN3

#define __MOU_R1      _M_COMMON_13
#define __MOU_R2      _M_COMMON_R2
#define __MOU_R3      _M_COMMON_13
#define __MOU_R4      XXXXXXX,   XXXXXXX,   _______,   XXXXXXX,   XXXXXXX,   XXXXXXX

/* ADJ */
#define __ADJ_L1      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   QK_BOOT,   XXXXXXX
#define __ADJ_L2      __BLANK_NOOP
#define __ADJ_L3      __BLANK_NOOP
#define __ADJ_L4      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   _______,   XXXXXXX

#define __ADJ_R1      XXXXXXX,   XXXXXXX,   RGB_TOG,   RGB_MOD,   RGB_HUI,   RGB_HUD
#define __ADJ_R2      XXXXXXX,   XXXXXXX,   RGB_SPI,   RGB_SPD,   RGB_SAI,   RGB_SAD
#define __ADJ_R3      XXXXXXX,   KC_NUM,    XXXXXXX,   XXXXXXX,   RGB_VAI,   RGB_VAD
#define __ADJ_R4      XXXXXXX,   _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX
