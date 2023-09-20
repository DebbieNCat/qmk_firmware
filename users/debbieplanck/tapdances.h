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

/* TAP DANCE enum */
enum {
    SPC_NUM = 0,
};

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

/* Function associated with all tap dances */
td_state_t cur_dance(tap_dance_state_t *state);

/* SINGLE TAP: SPACE   // SINGLE HOLD: NUM LAYER */
void sn_finished(tap_dance_state_t *state, void *user_data);
void sn_reset(tap_dance_state_t *state, void *user_data);

/* Define Tap dance actions. */
__attribute__((weak))
tap_dance_action_t tap_dance_actions[1] = {
    [SPC_NUM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, sn_finished, sn_reset)
};
