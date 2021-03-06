/*
Copyright 2014 Kai Ryu <kai1103@gmail.com>

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

#ifndef CONFIG_H
#define CONFIG_H


/* USB Device descriptor parameter */
#define VENDOR_ID       0x1209
#define PRODUCT_ID      0x2328
#define DEVICE_VER      0x0101
#define MANUFACTURER    K.T.E.C.
#define PRODUCT         Kimera
#define DESCRIPTION     t.m.k. keyboard firmware for Kimera

/* key matrix size */
#define MATRIX_ROWS 32
#define MATRIX_COLS 32

/* keymap in eeprom */
#define MATRIX_SIZE 16 * 16
#define FN_ACTIONS_COUNT 32
#define KEYMAPS_COUNT 3
#define EECONFIG_KEYMAP_IN_EEPROM 84

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* number of backlight levels */
#ifdef BREATHING_LED_ENABLE
#ifdef FADING_LED_ENABLE
#define BACKLIGHT_LEVELS 8
#else
#define BACKLIGHT_LEVELS 6
#endif
#else
#define BACKLIGHT_LEVELS 3
#endif

/* enable customized backlight logic */
#define BACKLIGHT_CUSTOM
#define CUSTOM_LED_ENABLE

/* number of leds */
#define LED_COUNT 4
#define LEDMAP_V2
#define LED1_PORT   B
#define LED1_BIT    5
#define LED2_PORT   B
#define LED2_BIT    6
#define LED3_PORT   C
#define LED3_BIT    6
#define LED4_PORT   C
#define LED4_BIT    7

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

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
#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

//#define NO_SUSPEND_POWER_DOWN

#endif
