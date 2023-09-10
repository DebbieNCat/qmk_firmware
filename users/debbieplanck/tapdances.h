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
    NAV_MOUSE,
    SPC_NUM_SYM,
    TAB_FUN
};

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

// Function associated with all tap dances
td_state_t cur_dance(tap_dance_state_t *state);

// SINGLE HOLD: NAV LAYER  // DOUBLE HOLD: MOUSE LAYER
void nm_finished(tap_dance_state_t *state, void *user_data);
void nm_reset(tap_dance_state_t *state, void *user_data);

// SINGLE TAP: SPACE   // SINGLE HOLD: NUM LAYER    // DOUBLE HOLD: SYM LAYER
void sns_finished(tap_dance_state_t *state, void *user_data);
void sns_reset(tap_dance_state_t *state, void *user_data);

// SINGLE TAP: TAB    // SINGLE HOLD: FUN LAYER
void tf_finished(tap_dance_state_t *state, void *user_data);
void tf_reset(tap_dance_state_t *state, void *user_data);

/* Define Tap dance actions. */
__attribute__((weak))
tap_dance_action_t tap_dance_actions[4] = {
    [QUOT_GRV] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRV),
    [NAV_MOUSE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, nm_finished, nm_reset),
    [SPC_NUM_SYM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, sns_finished, sns_reset),
    [TAB_FUN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, tf_finished, tf_reset)
};
