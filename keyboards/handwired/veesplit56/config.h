// Copyright 2023 Krzysztof Kościuszkiewicz (@kkosciusz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

// Configure the global tapping term (default: 200ms)
// #define TAPPING_TERM 200

// Define tapping term on a per key basis
// #define TAPPING_TERM_PER_KEY

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define QUICK_TAP_TERM 0

// Allow for per-key tap term settings.
// #define QUICK_TAP_TERM_PER_KEY

// Enable caps words
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
