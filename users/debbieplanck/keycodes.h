#pragma once
#include QMK_KEYBOARD_H

// MOVE TO LAYER
#define MO_SYM           MO(_SYM)
#define MO_NUM           MO(_NUM)
#define MO_NAV           MO(_NAV)
#define MO_ADJ           MO(_ADJ)

#define MO_MSYM          MO(_M_SYM)
#define MO_MFUN          MO(_M_FUN)
#define MO_MADJ          MO(_M_ADJ)

#define LT_SYMT          LT(_M_SYM, KC_TAB)
#define LT_NUMD          LT(_M_NUM, KC_DEL)
#define LT_FUNS          LT(_M_FUN, KC_SPC)
#define LT_NAVB          LT(_M_NAV, KC_BSPC)
#define LT_MOUA          LT(_M_MOUSE, KC_RALT)

// MOD_TAP KEYS
#define MT_ALTB          LALT_T(KC_TAB)
#define MT_GUIE          LGUI_T(KC_ENT)
#define MT_SFTA          LSFT_T(KC_A)

// COMBINE KEYS
#define CB_ALTB          LALT(KC_TAB)

// ONE_SHOT_MODE KEYS
#define OSM_GUI          OSM(MOD_LGUI)

// TAP DANCE KEYS
#define TD_QG            TD(QUOT_GRV)

// INTELLI_J KEYS
#define DV_RUN           LSFT(KC_F10)         // APPLICATION RUN
#define DV_DRUN          LSFT(KC_F9)          // APPLICATION DEBUG RUN
#define DV_APUP          LCTL(KC_F10)         // APPLICATION UPDATE
#define DV_TBCL          LCTL(KC_F4)          // TAB CLOSE
#define DV_CODE          LCA(KC_L)            // CODE STYLE SET

// MIRYOKU HOME ROWS
#define M_GUIA           GUI_T(KC_A)
#define M_ALTS           ALT_T(KC_S)
#define M_CTLD           CTL_T(KC_D)
#define M_SFTF           SFT_T(KC_F)
#define M_SFTJ           SFT_T(KC_J)
#define M_CTLK           CTL_T(KC_K)
#define M_ALTL           ALT_T(KC_L)
#define M_GCLN           GUI_T(KC_SCLN)

// MIRYOKU SHORT CUTS
#define M_REDO          C(S(KC_Z))
#define M_PASTE         C(KC_V)
#define M_COPY          C(KC_C)
#define M_CUT           C(KC_X)
#define M_UNDO          C(KC_Z)
