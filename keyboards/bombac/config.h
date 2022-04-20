// Copyright 2022 Candie Bombac (@manimtired1312)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "config_common.h"
// metadata
#define VENDOR_ID 0xFACE
#define PRODUCT_ID 0x0413
#define MANUFACTURER Candie
#define PRODUCT Bombac
// matri><
#define MATRIX_COLS 6
#define MATRIX_ROWS 10
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS_RIGHT { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW
// behavior
#define FORCE_NKRO
#define DEBOUNCE 5
#define TAPPING_TOGGLE 2
#define TAPPING_TERM 200
// splits
#define SPLIT_HAND_PIN F4
#define SPLIT_USB_DETECT //THIS OPTION MAKES THE BOARD WAIT UNTIL IT HAS A USB CONNECTION TO DECIDE WHICH SIDE IS THE MASTER. SIMILAR PROBLEMS ONLINE WERE SOLVED BY SETTING THIS.
//#define EE_HANDS //YOU DONT NEED TO DEFINE BOTH EE_HANDS AND MASTER_<RIGHT/LEFT>
//#define MASTER_RIGHT //WAS THIS ALREADY SET WHEN YOU WERE HAVING ISSUES WITH THE RIGHT SIDE NOT WORKING OR DID YOU ENABLE IT AFTER?
#define SOFT_SERIAL_PIN D0
#define SELECT_SOFT_SERIAL_SPEED 1
#define SPLIT_LAYER_STATE_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
