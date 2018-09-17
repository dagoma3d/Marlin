/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

/**
 * MKS DAGOMA 1.0 – Arduino Mega2560 with MKS BASE pin assignments
 */

#include "pins_MKS_BASE.h"

#undef BOARD_NAME
#define BOARD_NAME "MKS DAGOMA 1.0"

#undef HEATER_1_PIN
#define HEATER_1_PIN -1

#undef X_MAX_PIN
#define X_MAX_PIN -1

#undef X_MIN_PIN
#define X_MIN_PIN 2

#undef Y_MAX_PIN
#define Y_MAX_PIN 3

#undef Y_MIN_MIN
#define Y_MIN_MIN -1

#undef Z_MAX_PIN
#define Z_MAX_PIN -1

#undef Z_MIN_PIN
#define Z_MIN_PIN 15

#undef FILRUNOUT_PIN
#define FILRUNOUT_PIN 19

#undef SUMMON_PRINT_PAUSE_PIN
#define SUMMON_PRINT_PAUSE_PIN 18

#undef ONE_BUTTON_PIN
#define ONE_BUTTON_PIN SUMMON_PRINT_PAUSE_PIN
