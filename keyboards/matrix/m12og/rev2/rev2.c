/**
 * rev2.c
 */

#include "rev2.h"

void matrix_init_user(void) {
	setPinOutput(C6);
	setPinOutput(B2);
	setPinOutput(B1);
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
        writePin(B1, !led_state.num_lock);
        writePin(C6, !led_state.caps_lock);
        writePin(B2, !led_state.scroll_lock);
    }
    return res;
}

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    { \
        {      0,      1,      2,      3, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED  }, \
        {      4,      5,      6,      7,      8,      9,     10,     11,     12,     13,     14,     15, NO_LED, NO_LED  }, \
        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED  }, \
        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED  }, \
        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED  }, \
        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }, \
        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }  \
    },
    { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 38}, {18, 38}, {36, 38}, {54, 38}, {72, 38}, {90, 38}, {108, 38}, {126, 38}, {144, 38}, {162, 38}, {180, 38}, {198, 38}},
    { 2 , 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 }
};

void keyboard_post_init_user(void) {
    for (uint8_t i = 0; i < 16; ++i) {
        if (g_led_config.flags[i] & LED_FLAG_UNDERGLOW) {
            g_led_config.flags[i] &= ~LED_FLAG_UNDERGLOW;
        }
    }
}
#endif
