#include QMK_KEYBOARD_H
#include "debbie.h"
#include "key_combos.h"

enum combos {
    XV_ESC,
    WR_TAB,
};

const uint16_t PROGMEM xv_combo[]   = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM wr_combo[]   = {KC_W, KC_R, COMBO_END};

combo_t key_combos[] = {
    [XV_ESC]       = COMBO_ACTION(xv_combo),
    [WR_TAB]       = COMBO_ACTION(wr_combo)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case XV_ESC:
            if(pressed) tap_code16(KC_ESC);
            break;
        case WR_TAB:
            if(pressed) tap_code16(KC_TAB);
            break;
    }
}
