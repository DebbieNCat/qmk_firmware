#include QMK_KEYBOARD_H
#include "debbie.h"
#include "keycodes.h"


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case M_GUIA:
    case M_GCLN:
      return TAPPING_TERM + 100;
    default: return TAPPING_TERM;
  }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case LT_NUMS:
    case LT_FUNE:
    case LT_NAVB:
    case LT_MOUD:
      return TAPPING_TERM;
    default:
      return QUICK_TAP_TERM;
  }
}
