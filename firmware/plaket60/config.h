/*
Copyright 2022 ojthetiny

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

#pragma once

#include "config_common.h"


/* USB Device descriptor parameter */
#define VENDOR_ID       0x6F6A
#define PRODUCT_ID      0x5336
#define DEVICE_VER      0x0001
#define MANUFACTURER    FlatBrains!
#define PRODUCT         Plaket60


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_ACTION

/* key matrix pins */
#define MATRIX_ROW_PINS { GP28, GP27, GP20, GP6, GP7 }
#define MATRIX_COL_PINS { GP21, GP5, GP4, GP3, GP2, GP1, GP0, GP15, GP14, GP13, GP12, GP11, GP10, GP8, GP9 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
