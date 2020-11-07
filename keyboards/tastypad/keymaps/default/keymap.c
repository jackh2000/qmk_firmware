#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT(
		        KC_ESC, KC_PSLS, KC_PAST, KC_PMNS,
		        KC_P7, KC_P8, KC_P9, KC_PPLS,
		        KC_P4, KC_P5, KC_P6, KC_PPLS,
		        KC_P1, KC_P2, KC_P3, KC_PENT, 
		KC_DEL, KC_P0, KC_P0, KC_PDOT, KC_PENT)
};

void encoder_update_user(uint8_t index, index, bool clockwise) {
	if (index == 0) {
		if (clockwise) {
			tap_code(KC_VOLU);
		} else {
			tap_code(KC_VOLD);
		}
	}
}
