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
 * Leapfrog Motor Controller board pin assignments redefined for Mayr
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "LMC redefined for Mayr"
#endif

#ifndef DEFAULT_MACHINE_NAME
  #define DEFAULT_MACHINE_NAME "M1"
#endif

#ifndef DEFAULT_SOURCE_CODE_URL
  #define DEFAULT_SOURCE_CODE_URL "https://github.com/mayrstefan/Marlin"
#endif

//
// Limit Switches
//
#define X_MIN_PIN          -1
#define X_MAX_PIN          45
#define X1_MIN_PIN         47
#define X1_MAX_PIN         -1
#define Y_MIN_PIN          -1
#define Y_MAX_PIN          48
#define Z_MIN_PIN          49
#define Z_MAX_PIN          -1

//
// Steppers
//
#define X_STEP_PIN         28
#define X_DIR_PIN          63
#define X_ENABLE_PIN       29

// also controls AUX1 ?
#define Y_STEP_PIN         14
#define Y_DIR_PIN          15
#define Y_ENABLE_PIN       39

#define Z_STEP_PIN         31
#define Z_DIR_PIN          32
#define Z_ENABLE_PIN       30

// Label EMOT
#define E0_STEP_PIN        34
#define E0_DIR_PIN         35
#define E0_ENABLE_PIN      33

// Z2 = Label EMOT2
#define Z2_STEP_PIN        37
#define Z2_DIR_PIN         40
#define Z2_ENABLE_PIN      36

// Z3 = Label AUX2
#define Z3_STEP_PIN        65
#define Z3_DIR_PIN         64
#define Z3_ENABLE_PIN      66

//
// Temperature Sensors
//
#define TEMP_0_PIN         13
#define TEMP_1_PIN         15
#define TEMP_BED_PIN       14

//
// Heaters / Fans
//
#define HEATER_0_PIN        9
#define HEATER_1_PIN        8
#define HEATER_BED_PIN     10

#define FAN_PIN             5

//
// Misc. Functions
//
#define LED_PIN            13
#define FIL_RUNOUT_PIN     44
#define FIL_RUNOUT2_PIN    42
