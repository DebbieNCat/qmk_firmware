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

enum layers {
    _BASE = 0,
    _NUM,
    _FUN,
    _NAV,
    _ADJ,
};

enum custom_keycodes {
  KC_00 = SAFE_RANGE,
  KC_000,
};

