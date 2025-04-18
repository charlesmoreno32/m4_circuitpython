// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2018 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#define MICROPY_HW_BOARD_NAME "Adafruit Grand Central M4 Express"
#define MICROPY_HW_MCU_NAME "samd51p20"

#define CIRCUITPY_MCU_FAMILY samd51

// This is for Rev B which is green and has the SD card slot at the edge of the board.

#define MICROPY_HW_LED_STATUS   (&pin_PB01)

#define MICROPY_HW_LED_TX   &(pin_PC30)
#define MICROPY_HW_LED_RX   &(pin_PC31)

#define MICROPY_HW_NEOPIXEL (&pin_PC24)

#define BOARD_HAS_CRYSTAL 1

#define DEFAULT_I2C_BUS_SCL (&pin_PB21)
#define DEFAULT_I2C_BUS_SDA (&pin_PB20)

#define DEFAULT_SPI_BUS_SCK (&pin_PD09)
#define DEFAULT_SPI_BUS_MOSI (&pin_PD08)
#define DEFAULT_SPI_BUS_MISO (&pin_PD11)

#define DEFAULT_UART_BUS_RX (&pin_PB25)
#define DEFAULT_UART_BUS_TX (&pin_PB24)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1

// Enable debugging support
#define MICROPY_DEBUG_VERBOSE 1        // Enable verbose debugging (optional, useful for more output)
#define MICROPY_ENABLE_DEBUGGING 1     // Enable debugging features (GDB, OpenOCD)

// Enable debugging interface for JTAG/SWD
#define BOARD_HAS_JTAG 1              // Enable JTAG debugging interface (this may be handled automatically for SWD, but you can explicitly define this)

// SAMD51 DMA Configuration
#define NUM_DMA_CHANNELS 16
#define DMAC_DESCRIPTOR_SECTION __attribute__((section(".ram4")))

// Enable OpenOCD support for GDB and J-Link
#define CIRCUITPY_ENABLE_GDB 1         // Enable GDB support for debugging
// #define CIRCUITPY_ENABLE_OPENOCD 1     // Enable OpenOCD support for J-Link debugging

