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

/* create SPACE_NUM tap dance instance */
static td_tap_t sn_state = {
  .is_press_action = true,
  .state = TD_NONE
};

__attribute__((weak)) void sn_finished(tap_dance_state_t *state, void *user_data) {
    sn_state.state = cur_dance(state);
    switch (sn_state.state) {
        case TD_SINGLE_TAP: register_code(KC_SPC); break;
        case TD_SINGLE_HOLD: layer_on(_M_NUM); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_SPC); register_code(KC_SPC); break;
        default: break;
    }
}

__attribute__((weak)) void sn_reset(tap_dance_state_t *state, void *user_data) {
    switch (sn_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_SPC); break;
        case TD_SINGLE_HOLD: layer_off(_M_NUM); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_SPC); break;
        default: break;
    }
    sn_state.state = TD_NONE;
}
