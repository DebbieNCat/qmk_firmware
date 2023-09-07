/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "debbieplanck.h"

#define LAYOUT_wrapper(...) LAYOUT_planck_grid(__VA_ARGS__)

/* KEYMAP */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_wrapper(
     __QWERTY_L1,      __QWERTY_R1,
     __QWERTY_L2,      __QWERTY_R2,
     __QWERTY_L3,      __QWERTY_R3,
     __QWERTY_L4,      __QWERTY_R4
),
[_NUM] = LAYOUT_wrapper(
     __NUM_L1,         __NUM_R1,
     __NUM_L2,         __NUM_R2,
     __NUM_L3,         __NUM_R3,
     __NUM_L4,         __NUM_R4
),
[_NAV] = LAYOUT_wrapper(
     __NAV_L1,         __NAV_R1,
     __NAV_L2,         __NAV_R2,
     __NAV_L3,         __NAV_R3,
     __NAV_L4,         __NAV_R4
),
[_SYM] = LAYOUT_wrapper(
     __SYM_L1,         __SYM_R1,
     __SYM_L2,         __SYM_R2,
     __SYM_L3,         __SYM_R3,
     __SYM_L4,         __SYM_R4
),
[_ADJ] = LAYOUT_wrapper(
     __ADJ_L1,         __ADJ_R1,
     __ADJ_L2,         __ADJ_R2,
     __ADJ_L3,         __ADJ_R3,
     __ADJ_L4,         __ADJ_R4
)
};

// LED physical location index
//     6 5 4 3
//        0
//     7 8 1 2

// RGB RED when capslock is active
const rgblight_segment_t PROGMEM rgb_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 1, HSV_RED},
    {8, 1, HSV_RED}
);
const rgblight_segment_t PROGMEM rgb_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 9, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM rgb_num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 9, HSV_TEAL}
);
const rgblight_segment_t PROGMEM rgb_nav_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 9, HSV_GOLDENROD}
);
const rgblight_segment_t PROGMEM rgb_sym_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 9, HSV_ORANGE}
);
const rgblight_segment_t PROGMEM rgb_adj_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 5, HSV_YELLOW},
    {5, 4, HSV_GREEN}
);

// Define the array of RGB layers.
const rgblight_segment_t* const PROGMEM planck_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_base_layer,
    rgb_num_layer,
    rgb_nav_layer,
    rgb_sym_layer,
    rgb_adj_layer,
    rgb_capslock_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = planck_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(5, led_state.caps_lock);
    return true;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _NUM));
    rgblight_set_layer_state(2, layer_state_cmp(state, _NAV));
    rgblight_set_layer_state(3, layer_state_cmp(state, _SYM));
    rgblight_set_layer_state(4, layer_state_cmp(state, _ADJ));
    return state;
}
