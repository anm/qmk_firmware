#pragma once


#define HAL_USE_PWM TRUE
#define HAL_USE_GPT TRUE

// ChibiOS Ports (GPIO) abstraction layer
#define HAL_USE_PAL TRUE

#include_next <halconf.h>
