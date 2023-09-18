#include QMK_KEYBOARD_H
#include "debbieplanck.h"
#include "key_combos.h"

enum combos {
    XV_ESC,
    ZSH_CAPSLOCK,
    QR_TAB,
};

const uint16_t PROGMEM xv_combo[]   = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM zsh_combo[]  = {KC_Z, KC_SLSH, COMBO_END};
const uint16_t PROGMEM qr_combo[]   = {KC_Q, KC_R, COMBO_END};

combo_t key_combos[] = {
    [XV_ESC]       = COMBO_ACTION(xv_combo),
    [ZSH_CAPSLOCK] = COMBO_ACTION(zsh_combo),
    [QR_TAB]       = COMBO_ACTION(qr_combo)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case XV_ESC:
            if(pressed) tap_code16(KC_ESC);
            break;
        case ZSH_CAPSLOCK:
            if(pressed) tap_code16(KC_CAPS);
            break;
        case QR_TAB:
            if(pressed) tap_code16(KC_TAB);
            break;
    }
}
