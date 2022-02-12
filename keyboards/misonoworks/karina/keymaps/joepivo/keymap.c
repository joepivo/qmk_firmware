/*
Copyright 2020 MisonoWorks

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


enum custom_keycodes {
    JP_KAPP = SAFE_RANGE, // Kill App (alt+F4)
    JP_PWIN,             // Print Active window
    JP_PSEL,            // Activate Screen Print Selection Area
    JP_ALTT,            // Alt tab equivalent for using with Windows Key/Layer Change Combo
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
            KC_GESC, 
                        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, 
            LT(3,KC_TAB),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT, 
            KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_GRV, 
            KC_LCTL,    LT(1,KC_LGUI),      KC_SPC,      KC_BSPC,    LT(2,KC_SLSH),      KC_LALT),
        [1] = LAYOUT(
            JP_KAPP, 
                KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0, 
            JP_ALTT, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_SCLN,    KC_QUOT, 
            KC_TRNS,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_LEFT, KC_DOWN, KC_RGHT, KC_UP, KC_END, 
            KC_LCTL,        KC_TRNS,       KC_LGUI,    KC_TRNS,      KC_TRNS,        KC_TRNS),
        [2] = LAYOUT(
            KC_NO, 
                KC_7,   KC_8,   KC_9,   KC_NO,   KC_NO, KC_NO,  KC_NO,  KC_NO,  KC_MINS,    KC_EQL, 
            KC_NO,  KC_4,   KC_5,   KC_6,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_LBRC,    KC_RBRC, 
            KC_TRNS,    KC_1,   KC_2,   KC_3,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_BSLS,    KC_SLSH,    KC_NO, 
            KC_NO,      KC_NO,      KC_0,       KC_DEL,     KC_TRNS,        KC_NO),
        [3] = LAYOUT(
            RGB_TOG, 
                KC_MPLY,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  RGB_SPI, RGB_SAI, RGB_VAI, RGB_HUI, RGB_MOD,
            KC_TRNS, KC_MPRV, KC_MNXT, KC_MUTE, KC_NO, KC_NO, RGB_SPD, RGB_SAD, RGB_VAD, RGB_HUD, RGB_RMOD,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_TRNS, JP_PWIN, JP_PSEL, KC_PSCR, KC_TRNS, KC_TRNS),
        [4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [6] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [7] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [8] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [9] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [10] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [11] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [12] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [13] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [14] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [15] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // Left knob
        switch(biton32(layer_state)){
            case 3:
                tap_code(((clockwise) ? KC_VOLU : KC_VOLD));
                break;
            default:
                tap_code(((clockwise) ? KC_PGDN : KC_PGUP));
                break;
            
        }
    }
    else if (index == 1) { // Right knob
        switch(biton32(layer_state)){
            case 1:
                tap_code(((clockwise) ? KC_END : KC_HOME));
                break;
            case 3: // Rotate through Desktops
                if (clockwise) {
                    register_code(KC_LCTL);
                    register_code(KC_LGUI);
                    tap_code(KC_RGHT);
                    unregister_code(KC_LCTL);
                    unregister_code(KC_LGUI);
                } else {
                    register_code(KC_LCTL);
                    register_code(KC_LGUI);
                    tap_code(KC_LEFT);
                    unregister_code(KC_LCTL);
                    unregister_code(KC_LGUI);
                }
                break;
            default: // Move through line of text one word at a time
                if (clockwise) {
                    register_code(KC_LCTL);
                    tap_code(KC_RGHT);
                    unregister_code(KC_LCTL);
                } else {
                    register_code(KC_LCTL);
                    tap_code(KC_LEFT);
                    unregister_code(KC_LCTL);
                }
                break;
        }
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case JP_KAPP: // Kill App
            if (record->event.pressed) {
                // when keycode JP_KAPP is pressed
                register_code(KC_LALT);
                tap_code(KC_F4);
                unregister_code(KC_LALT);
            } else {}
            break;
        case JP_PWIN: // Print Window
            if (record->event.pressed) {
                // when keycode is pressed
                register_code(KC_LALT);
                tap_code(KC_PSCR);
                unregister_code(KC_LALT);
            } else {}
            break;
        case JP_PSEL: // Print Selected Area of Screen
            if (record->event.pressed) {
                // when keycode is pressed
                register_code(KC_LGUI);
                register_code(KC_LSFT);
                tap_code(KC_S);
                unregister_code(KC_LSFT);
                unregister_code(KC_LGUI);
            } else {}
            break;
        case JP_ALTT: // WIP: Crappy Alt Tab
            if (record->event.pressed) {
                // when keycode is pressed
                register_code(KC_LALT);
                tap_code(KC_TAB);
                
            } else {unregister_code(KC_LALT);}
            break;
    }
    return true;
};