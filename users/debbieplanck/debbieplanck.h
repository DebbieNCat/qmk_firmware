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
    _BASE = 0,
    _NUM,
    _FUN,
    _NAV,
    _MOUSE,
    _ADJ,
};
