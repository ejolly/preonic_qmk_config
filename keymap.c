/* THIS FILE WAS GENERATED!
 *
 * Originally made using https://config.qmk.fm
 * Edited directly to enable music mode and start up sounds
 * Also adjusted layer tap timing
 */

#include QMK_KEYBOARD_H
#include "muse.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x12(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, 
        LT(1,KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
        KC_LSFT, LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LSFT_T(KC_ENT), 
        TG(2), KC_LCTL, KC_TAB, LALT_T(KC_GRV), KC_LGUI, KC_SPC, KC_BSPC, TG(1), KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU
        ),
	[1] = LAYOUT_ortho_5x12(
        KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_PERC, KC_UNDS, 
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_ASTR, KC_LBRC, KC_RBRC, KC_EQL, KC_PIPE, 
        KC_TRNS, KC_LSFT, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_COLN, KC_DQUO, 
        KC_TRNS, KC_TRNS, LSFT(KC_TAB), KC_TAB, KC_NO, KC_NO, KC_BSPC, KC_AMPR, KC_LT, KC_GT, KC_QUES, LSFT(KC_ENT), 
        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, TG(3), KC_TRNS, KC_TRNS, KC_TRNS
        ),
	[2] = LAYOUT_ortho_5x12(
        RGB_TOG, OSM(MOD_LCTL|MOD_LSFT|MOD_LGUI), OSM(MOD_LSFT|MOD_LGUI), KC_NO, KC_4, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, 
        KC_TAB, LCA(KC_F), HYPR(KC_LEFT), LCA(KC_N), HYPR(KC_RGHT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_ESC, LCAG(KC_LEFT), MEH(KC_LEFT), LCAG(KC_N), MEH(KC_RGHT), LCAG(KC_RGHT), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, 
        KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_NO, 
        TG(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, LCA(KC_BSPC), KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU
        ),
	[3] = LAYOUT_ortho_5x12(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, 
        KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, 
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), MU_TOG, MU_MOD, KC_NO, KC_NO
        ),
};

// Define music key mask (doesn't really work)
// But not an issue with mapping setup above (numbers refer to array index not layer number!):
// On Layer 1 tap play/pause to go to Layer 3 which has no keys
// On Layer 3 tap play/pause to turn music mode on and off
// On Layer 3 tap Layer 1 toggle to go back to Layer 0

// Turn on from Layer 0:
// TG(1), play/pause, play/pause
// Turn off from Layer 3 with music enabled:
// play/pause, TG(1)

// Switch music modes using mute button while on Layer 3
bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case TO(0):
    case MU_TOG:
    case MU_MOD:
        return false;
    default:
        return true;
  }
}