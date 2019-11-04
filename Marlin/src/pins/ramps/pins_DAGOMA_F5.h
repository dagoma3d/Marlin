/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "Dagoma3D F5 supports only 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_INFO_NAME "Dagoma3D F5"

#define X_STOP_PIN          2
#define Y_STOP_PIN          3
#define Z_STOP_PIN         15
#define FIL_RUNOUT_PIN     39

#define ORIG_E0_AUTO_FAN_PIN 7

// Enable control of stepper motor currents with the I2C based MCP4728 DAC
#define DAC_STEPPER_CURRENT

// Set default drive strength percents if not already defined - X, Y, Z, E axis
#ifndef DAC_MOTOR_CURRENT_DEFAULT
  #define DAC_MOTOR_CURRENT_DEFAULT { 30, 30, 20, 30 }
#endif

// Number of channels available for DAC
#define DAC_STEPPER_ORDER { 0, 1, 2, 3 }

#define DAC_STEPPER_SENSE    0.11
#define DAC_STEPPER_ADDRESS  0
#define DAC_STEPPER_MAX   4096
#define DAC_STEPPER_VREF     1   // internal Vref, gain 1x = 2.048V
#define DAC_STEPPER_GAIN     0
#define DAC_OR_ADDRESS    0x00

//
// Import RAMPS 1.4 pins
//
#include "pins_RAMPS.h"
