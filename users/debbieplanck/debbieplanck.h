#pragma once
#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "wrappers.h"

#ifdef TAP_DANCE_ENABLE
#   include "tapdances.h"
#endif

#ifdef COMBO_ENABLE
#   include "key_combos.h"
#endif

enum planck_layers {
    _QWERTY = 0,
    _NUM,
    _NAV,
    _SYM,
    _ADJ,
    _MIRYOKU,
    _M_NAV,
    _M_MOUSE,
    _M_NUM,
    _M_SYM,
    _M_FUN,
    _M_ADJ
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  MIRYOKU
};
