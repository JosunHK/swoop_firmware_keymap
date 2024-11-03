/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xFD, 0x91, 0xD2, 0xB9, 0xFA, 0xD5, 0x59, 0xAB}

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
#define NO_ACTION_ONESHOT
