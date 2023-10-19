#pragma once
#include QMK_KEYBOARD_H

/* MOVE TO LAYER */
#define MO_ADJ           MO(_ADJ)

#define LT_FUNE          LT(_FUN, KC_ENT)
#define LT_NUMS          LT(_NUM, KC_SPC)
#define LT_NAVB          LT(_NAV, KC_BSPC)
#define LT_MOUD          LT(_MOUSE, KC_DEL)

/* MIRYOKU HOME ROWS */
#define M_GUIA           GUI_T(KC_A)
#define M_ALTS           ALT_T(KC_S)
#define M_SFTD           SFT_T(KC_D)
#define M_CTLF           CTL_T(KC_F)

#define M_CTLJ           CTL_T(KC_J)
#define M_SFTK           SFT_T(KC_K)
#define M_ALTL           ALT_T(KC_L)
#define M_GCLN           GUI_T(KC_SCLN)

// MIRYOKU SHORT CUTS
#define M_REDO          C(S(KC_Z))
#define M_PASTE         C(KC_V)
#define M_COPY          C(KC_C)
#define M_CUT           C(KC_X)
#define M_UNDO          C(KC_Z)

/* INTELLI_J KEYS */
#define DV_RUN           LSFT(KC_F10)    /* APPLICATION RUN */
#define DV_DRUN          LSFT(KC_F9)     /* APPLICATION DEBUG RUN */
#define DV_APUP          LCTL(KC_F10)    /* APPLICATION UPDATE */
#define DV_TBCL          LCTL(KC_F4)     /* TAB CLOSE */
#define DV_CODE          LCA(KC_L)       /* CODE STYLE SET */




