/* Copyright 2020 melonbred
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

// Defines names for use in layer keycodes and the keymap


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7
#define _LAYER8 8
#define _LAYER9 9
#define _LAYER10 10
#define _LAYER11 11
#define _LAYER12 12
#define _LAYER13 13
#define _LAYER14 14
#define _LAYER15 15

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
    LAYER7,
    LAYER8,
    LAYER9,
    LAYER10,
    LAYER11,
    LAYER12,
    LAYER13,
    LAYER14,
    LAYER15,

    // Custom Codes
    CC_PRNT_WIN,
    CC_PRNT_SEL,
    CC_PRNT_SCRN,
    CC_QUIT,
    CC_DSKTP_R,
    CC_DSKTP_L,
    CC_TAB_NEXT,
    CC_TAB_PREV,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT_2u_space(KC_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_HOME,
                            LT(2,KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, LT(15,KC_ENT),
                            KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_SLSH,
                            KC_RCPC, KC_LALT, KC_LGUI, KC_SPC, LT(1,KC_END), KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER1] = LAYOUT_2u_space(KC_BSPC, KC_7, KC_8, KC_9, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_MINS, KC_EQL, KC_BSLS,
                            KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_LBRC, KC_RBRC, KC_QUOT,
                            KC_TRNS, KC_1, KC_2, KC_3, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_TRNS, KC_DEL, KC_NO, KC_NO, KC_NO),

[_LAYER2] = LAYOUT_2u_space(KC_MPRV, KC_MNXT, KC_VOLU, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLEP,
                            KC_TRNS, KC_MPLY, KC_VOLD, KC_BRID, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WAKE,
                            KC_APP, KC_PGUP, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, CC_TAB_PREV, CC_TAB_NEXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

[_LAYER3] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER4] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER5] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER6] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER7] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER8] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER9] = LAYOUT_2u_space(KC_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_HOME,
                            KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, LT(15,KC_ENT),
                            KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_SLSH,
                            KC_RCPC, KC_LALT, KC_LGUI, KC_SPC, KC_END, KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER10] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER11] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER12] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER13] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER14] = LAYOUT_2u_space(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER15] = LAYOUT_2u_space(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, CC_QUIT,
                            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
                            TG(_LAYER0), TG(_LAYER9), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_NO, KC_NO, KC_NO, CC_PRNT_SCRN, CC_PRNT_SEL, CC_PRNT_WIN, CC_DSKTP_L, KC_NO, CC_DSKTP_R) 

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) { 
    switch (keycode) {
        case CC_QUIT:
            if (record->event.pressed) { 
                register_code(KC_LALT);

                register_code(KC_F4);
                unregister_code(KC_F4);

                unregister_code(KC_LALT);  
            } 
            break;
        case CC_PRNT_SCRN: 
            if (record->event.pressed) { 
                register_code(KC_LGUI);

                register_code(KC_PSCR);
                unregister_code(KC_PSCR);

                unregister_code(KC_LGUI);  
            } 
            break; 
    
        case CC_PRNT_WIN: 
            if (record->event.pressed) { 
                register_code(KC_LGUI);
                register_code(KC_LALT);

                register_code(KC_PSCR);
                unregister_code(KC_PSCR);

                unregister_code(KC_LALT);
                unregister_code(KC_LGUI);
            } 
            break;
        case CC_PRNT_SEL: 
            if (record->event.pressed) { 
                register_code(KC_LGUI);
                register_code(KC_LSFT);

                register_code(KC_S);
                unregister_code(KC_S);

                unregister_code(KC_LSFT);
                unregister_code(KC_LGUI);
            } 
            break;
        case CC_DSKTP_R:
            if (record->event.pressed) { 
                register_code(KC_LGUI);
                register_code(KC_LCTL);

                register_code(KC_RGHT);
                unregister_code(KC_RGHT);

                unregister_code(KC_LCTL);
                unregister_code(KC_LGUI);
            } 
            break;
        case CC_DSKTP_L:
            if (record->event.pressed) { 
                register_code(KC_LGUI);
                register_code(KC_LCTL);

                register_code(KC_LEFT);
                unregister_code(KC_LEFT);

                unregister_code(KC_LCTL);
                unregister_code(KC_LGUI);
            } 
            break;
        case CC_TAB_NEXT:
            if (record->event.pressed) { 
                register_code(KC_LCTL);

                register_code(KC_TAB);
                unregister_code(KC_TAB);

                unregister_code(KC_LCTL);
            } 
            break;
        case CC_TAB_PREV:
            if (record->event.pressed) { 
                register_code(KC_LCTL);
                register_code(KC_LSFT);

                register_code(KC_TAB);
                unregister_code(KC_TAB);

                unregister_code(KC_LSFT);
                unregister_code(KC_LCTL);
            } 
            break;

        }
    return true; 
}; 

// Rotary Encoder Functions
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    return true;
}
