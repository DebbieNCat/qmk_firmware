#pragma once
#include QMK_KEYBOARD_H

/* MOVE TO LAYER */
#define MO_SYM           MO(_SYM)
#define MO_NUM           MO(_NUM)
#define MO_NAV           MO(_NAV)
#define MO_ADJ           MO(_ADJ)

#define MO_MSYM          MO(_M_SYM)
#define MO_MFUN          MO(_M_FUN)
#define MO_MMOU          MO(_M_MOUSE)
#define MO_MADJ          MO(_M_ADJ)

#define LT_SYME          LT(_M_SYM, KC_ENT)
#define LT_NUMS          LT(_M_NUM, KC_SPC)
#define LT_FUNT          LT(_M_FUN, KC_TAB)
#define LT_MOUD          LT(_M_MOUSE, KC_DEL)
#define LT_NAVB          LT(_M_NAV, KC_BSPC)

/* MOD_TAP KEYS */
#define MT_ALTB          LALT_T(KC_TAB)
#define MT_GUIE          LGUI_T(KC_ENT)
#define MT_SFTA          LSFT_T(KC_A)

/* COMBINE KEYS */
#define CB_ALTB          LALT(KC_TAB)

/* ONE_SHOT_MODE KEYS */
#define OSM_GUI          OSM(MOD_LGUI)

/* TAP DANCE KEYS */
#define TD_QG            TD(QUOT_GRV)
#define TD_PRN           TD(PRN_OC)      /* SINGLE TAP: ( DOUBLE TAP: ) */

/* INTELLI_J KEYS */
#define DV_RUN           LSFT(KC_F10)    /* APPLICATION RUN */
#define DV_DRUN          LSFT(KC_F9)     /* APPLICATION DEBUG RUN */
#define DV_APUP          LCTL(KC_F10)    /* APPLICATION UPDATE */
#define DV_TBCL          LCTL(KC_F4)     /* TAB CLOSE */
#define DV_CODE          LCA(KC_L)       /* CODE STYLE SET */

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
