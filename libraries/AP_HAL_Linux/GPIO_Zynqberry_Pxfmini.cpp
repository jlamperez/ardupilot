#include <AP_Common/AP_Common.h>

#if CONFIG_HAL_BOARD_SUBTYPE == HAL_BOARD_SUBTYPE_LINUX_ZYNQBERRY_PXFMINI

#include "GPIO_Zynqberry_Pxfmini.h"

const unsigned Linux::GPIO_Sysfs::pin_table[] = {
    [ZYNQBERRY_PXFMINI_GPIO_MPU_9250_DRDY] = 969 ,
    [ZYNQBERRY_PXFMINI_GPIO_LED_AMBER] = 970,
    [ZYNQBERRY_PXFMINI_GPIO_LED_BLUE] = 971,
    [ZYNQBERRY_PXFMINI_GPIO_LED_YELLOW] = 964,
    [ZYNQBERRY_PXFMINI_GPIO_PWM_EN] = 973,
};

const uint8_t Linux::GPIO_Sysfs::n_pins = _ZYNQBERRY_PXFMINI_GPIO_MAX;

static_assert(ARRAY_SIZE(Linux::GPIO_Sysfs::pin_table) == _ZYNQBERRY_PXFMINI_GPIO_MAX,
              "GPIO pin_table must have the same size of entries in enum gpio_disco");

#endif
