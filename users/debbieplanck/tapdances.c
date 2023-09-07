#include QMK_KEYBOARD_H
#include "debbieplanck.h"
#include "tapdances.h"
#include "keycodes.h"

td_state_t cur_dance(tap_dance_state_t *state) {
    if(state -> count == 1) {
        if(state -> interrupted || !state -> pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    } else if (state -> count == 2) {
        if(state -> interrupted) return TD_DOUBLE_TAP;
        else if (state -> pressed) return TD_DOUBLE_HOLD;
        else return TD_DOUBLE_TAP;
    }

    if(state -> count == 3) {
        if(state -> interrupted || !state -> pressed) return TD_TRIPLE_TAP;
        else return TD_TRIPLE_HOLD;
    } else return TD_UNKNOWN;
}

// create ENTER_NAV tap dance instance
static td_tap_t en_state = {
    .is_press_action = true,
    .state = TD_NONE
};

__attribute__((weak)) void en_finished(tap_dance_state_t *state, void *user_data) {
    en_state.state = cur_dance(state);
    switch (en_state.state) {
        case TD_SINGLE_TAP: register_code(KC_ENT); break;
        case TD_SINGLE_HOLD: layer_on(_NAV); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_ENT); register_code(KC_ENT); break;
        default: break;
    }
}

__attribute__((weak)) void en_reset(tap_dance_state_t *state, void *user_data) {
    switch (en_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_ENT); break;
        case TD_SINGLE_HOLD: layer_off(_NAV); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_ENT); break;
        default: break;
    }
    en_state.state = TD_NONE;
}
