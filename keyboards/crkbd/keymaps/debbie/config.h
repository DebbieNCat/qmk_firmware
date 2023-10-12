/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2
/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KEY
#define QUICK_TAP_TERM 0
#define QUICK_TAP_TERM_PER_KEY

#define COMBO_COUNT 3
#define COMBO_TERM 100


#ifdef OLED_ENABLE
#   define SPLIT_WPM_ENABLE
#   define SPLIT_OLED_ENABLE
#   define OLED_FONT_H "keyboards/crkbd/keymaps/debbie/oledfont.c"
#endif

/* Mouse key speed and acceleration. */
#ifdef MOUSEKEY_ENABLE
    #undef MOUSEKEY_DELAY
    #define MOUSEKEY_DELAY          0
    #undef MOUSEKEY_INTERVAL
    #define MOUSEKEY_INTERVAL       16
    #undef MOUSEKEY_WHEEL_DELAY
    #define MOUSEKEY_WHEEL_DELAY    100
    #undef MOUSEKEY_MAX_SPEED
    #define MOUSEKEY_MAX_SPEED      6
    #undef MOUSEKEY_TIME_TO_MAX
    #define MOUSEKEY_TIME_TO_MAX    64
#endif


/* RGB  animation Undefine */
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_TWINKLE
