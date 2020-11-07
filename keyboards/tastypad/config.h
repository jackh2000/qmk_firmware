#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID = 0x1234
#define PRODUCT_ID = 0x5678
#define DEVICE_VER = 0x0001
#define MANUFACTURER = tastytictac
#define PRODUCT = tastypad
#define DESCRIPTION = num/macropad

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/* pcb default pin-out */
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { C6, B6, B5, B4, D7  }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DEFINITION = COL2ROW

/* rotary encoder pins */
#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B2 }
#define ENCODER_RESOLUTION 1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* force NKRO */
#define FORCE_NKRO
