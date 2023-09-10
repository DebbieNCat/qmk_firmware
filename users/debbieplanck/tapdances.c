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

// create NAV_MOUSE tap dance instance
static td_tap_t nm_state = {
    .is_press_action = true,
    .state = TD_NONE
};

__attribute__((weak)) void nm_finished(tap_dance_state_t *state, void *user_data) {
    nm_state.state = cur_dance(state);
    switch (nm_state.state) {
        case TD_SINGLE_HOLD: layer_on(_M_NAV); break;
        case TD_DOUBLE_HOLD: layer_on(_M_MOUSE); break;
        default: break;
    }
}

__attribute__((weak)) void nm_reset(tap_dance_state_t *state, void *user_data) {
    switch (nm_state.state) {
        case TD_SINGLE_HOLD: layer_off(_M_NAV); break;
        case TD_DOUBLE_HOLD: layer_off(_M_MOUSE); break;
        default: break;
    }
    nm_state.state = TD_NONE;
}

// create SPACE_NUM_SYM tap dance instance
static td_tap_t sns_state = {
  .is_press_action = true,
  .state = TD_NONE
};

__attribute__((weak)) void sns_finished(tap_dance_state_t *state, void *user_data) {
    sns_state.state = cur_dance(state);
    switch (sns_state.state) {
        case TD_SINGLE_TAP: register_code(KC_SPC); break;
        case TD_SINGLE_HOLD: layer_on(_M_NUM); break;
        case TD_DOUBLE_HOLD: layer_on(_M_SYM); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_SPC); register_code(KC_SPC); break;
        default: break;
    }
}

__attribute__((weak)) void sns_reset(tap_dance_state_t *state, void *user_data) {
    switch (sns_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_SPC); break;
        case TD_SINGLE_HOLD: layer_off(_M_NUM); break;
        case TD_DOUBLE_HOLD: layer_off(_M_SYM); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_SPC); break;
        default: break;
    }
    sns_state.state = TD_NONE;
}

// create TAB_FUN tap dance instance
static td_tap_t tf_state = {
    .is_press_action = true,
    .state = TD_NONE
};

__attribute__((weak)) void tf_finished(tap_dance_state_t *state, void *user_data) {
    tf_state.state = cur_dance(state);
    switch (tf_state.state) {
        case TD_SINGLE_TAP: register_code(KC_TAB); break;
        case TD_SINGLE_HOLD: layer_on(_M_FUN); break;
        default: break;
    }
}

__attribute__((weak)) void tf_reset(tap_dance_state_t *state, void *user_data) {
    switch (tf_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_TAB); break;
        case TD_SINGLE_HOLD: layer_off(_M_FUN); break;
        default: break;
    }
    tf_state.state = TD_NONE;
}
