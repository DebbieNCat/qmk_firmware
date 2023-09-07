#include QMK_KEYBOARD_H
#include "debbieplanck.h"
#include "key_combos.h"

enum combos {
    SF_ESC,
    ZSH_CAPSLOCK
};

const uint16_t PROGMEM sf_combo[]   = {KC_S, KC_F, COMBO_END};
const uint16_t PROGMEM zsh_combo[]   = {KC_Z, KC_SLSH, COMBO_END};

combo_t key_combos[] = {
    [SF_ESC]      = COMBO_ACTION(sf_combo),
    [ZSH_CAPSLOCK] = COMBO_ACTION(zsh_combo)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case SF_ESC:
            if(pressed) tap_code16(KC_ESC);
            break;
        case ZSH_CAPSLOCK:
            if(pressed) tap_code16(KC_CAPS);
            break;
    }
}
