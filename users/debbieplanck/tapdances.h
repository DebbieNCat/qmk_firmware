#pragma once
#include QMK_KEYBOARD_H

typedef enum {
    TD_NONE = 0,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD,
    TD_DOUBLE_SINGLE_TAP,
    TD_TRIPLE_TAP,
    TD_TRIPLE_HOLD
} td_state_t;

// TAP DANCE enum
enum {
    QUOT_GRV = 0,
    ENT_NAV
};

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

// Function associated with all tap dances
td_state_t cur_dance(tap_dance_state_t *state);

// SINGLE TAP: ENTER // SINGLE HOLD: NAV LAYER
void en_finished(tap_dance_state_t *state, void *user_data);
void en_reset(tap_dance_state_t *state, void *user_data);

/* Define Tap dance actions.
*/
__attribute__((weak))
tap_dance_action_t tap_dance_actions[2] = {
    [QUOT_GRV] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRV),
    [ENT_NAV] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, en_finished, en_reset)
};
