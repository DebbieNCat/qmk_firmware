#pragma once
#include QMK_KEYBOARD_H

// MOVE TO LAYER
#define MO_SYM           MO(_SYM)
#define MO_NUM           MO(_NUM)
#define MO_NAV           MO(_NAV)
#define MO_ADJ           MO(_ADJ)

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
#define TD_EN            TD(ENT_NAV)          // SINGLE TAP : ENTER     // SINGLE HOLD: NAV LAYER

// INTELLI_J KEYS
#define DV_RUN           LSFT(KC_F10)         // APPLICATION RUN
#define DV_DRUN          LSFT(KC_F9)          // APPLICATION DEBUG RUN
#define DV_APUP          LCTL(KC_F10)         // APPLICATION UPDATE
#define DV_TBCL          LCTL(KC_F4)          // TAB CLOSE
#define DV_CODE          LCA(KC_L)            // CODE STYLE SET
