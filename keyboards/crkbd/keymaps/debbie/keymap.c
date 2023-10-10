/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include "debbie.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_wrapper(
    _________CKRBD_QWERTY_L1_________,  _________CKRBD_QWERTY_R1_________,
    _________CKRBD_QWERTY_L2_________,  _________CKRBD_QWERTY_R2_________,
    _________CKRBD_QWERTY_L3_________,  _________CKRBD_QWERTY_R3_________,
    _________CKRBD_QWERTY_L4_________,  _________CKRBD_QWERTY_R4_________
  ),

    [_NUM] = LAYOUT_wrapper(
    _________CKRBD_NUMBER_L1_________,  _________CKRBD_NUMBER_R1_________,
    _________CKRBD_NUMBER_L2_________,  _________CKRBD_NUMBER_R2_________,
    _________CKRBD_NUMBER_L3_________,  _________CKRBD_NUMBER_R3_________,
    _________CKRBD_NUMBER_L4_________,  _________CKRBD_NUMBER_R4_________
  ),

    [_FUN] = LAYOUT_wrapper(
    _________CKRBD_FUNCTION_L1_________,  _________CKRBD_FUNCTION_R1_________,
    _________CKRBD_FUNCTION_L2_________,  _________CKRBD_FUNCTION_R2_________,
    _________CKRBD_FUNCTION_L3_________,  _________CKRBD_FUNCTION_R3_________,
    _________CKRBD_FUNCTION_L4_________,  _________CKRBD_FUNCTION_R4_________
  ),

    [_NAV] = LAYOUT_wrapper(
    _________CKRBD_NAVIGATE_L1_________,  _________CKRBD_NAVIGATE_R1_________,
    _________CKRBD_NAVIGATE_L2_________,  _________CKRBD_NAVIGATE_R2_________,
    _________CKRBD_NAVIGATE_L3_________,  _________CKRBD_NAVIGATE_R3_________,
    _________CKRBD_NAVIGATE_L4_________,  _________CKRBD_NAVIGATE_R4_________
  ),

  [_MOUSE] = LAYOUT_wrapper(
  _________CKRBD_MOUSE_L1_________,  _________CKRBD_MOUSE_R1_________,
  _________CKRBD_MOUSE_L2_________,  _________CKRBD_MOUSE_R2_________,
  _________CKRBD_MOUSE_L3_________,  _________CKRBD_MOUSE_R3_________,
  _________CKRBD_MOUSE_L4_________,  _________CKRBD_MOUSE_R4_________
  ),

  [_ADJ] = LAYOUT_wrapper(
  _________CKRBD_ADJUST_L1_________,  _________CKRBD_ADJUST_R1_________,
  _________CKRBD_ADJUST_L2_________,  _________CKRBD_ADJUST_R2_________,
  _________CKRBD_ADJUST_L3_________,  _________CKRBD_ADJUST_R3_________,
  _________CKRBD_ADJUST_L4_________,  _________CKRBD_ADJUST_R4_________
  ),
};
