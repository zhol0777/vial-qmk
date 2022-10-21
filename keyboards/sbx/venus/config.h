/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCAAD
#define PRODUCT_ID      0xB0B0
#define DEVICE_VER      0x0001
#define MANUFACTURER    sbx
#define PRODUCT         venus


/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS {GP20, GP21, GP23, GP19, GP17, GP18}
#define MATRIX_COL_PINS {GP29, GP28, GP27, GP26, GP25, GP24, GP7, GP6, GP5, GP4, GP3, GP2, GP1, GP0, GP10, GP9, GP8}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
