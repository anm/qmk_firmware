#pragma once

#define KEYPAD_LED B2

#define PIEZO_A A2
#define PIEZO_B A3

#define AUDIO_PIN PIEZO_A
#define AUDIO_PIN_ALT PIEZO_B
#define AUDIO_PIN_ALT_AS_NEGATIVE 1 // Two pins, one speaker

// The ChibiOS driver / STM32 timer number to use
#define AUDIO_PWM_DRIVER PWMD5
//#define AUDIO_PWM_DRIVER PWMD9

// Software pwm driver seems to need this.
#define AUDIO_PWM_CHANNEL 1

// Specifies timer channel for hardware pwm driver. What about alt?
//#define AUDIO_PWM_CHANNEL 3
//#define AUDIO_PWM_CHANNEL 1

// Sets the pin alternative function number for hardware PWM driver. What about alt?
#define AUDIO_PWM_PAL_MODE 2
//#define AUDIO_PWM_PAL_MODE 3

#define AUDIO_ENABLE_TONE_MULTIPLEXING
#define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10

#define AUDIO_CLICKY
#define AUDIO_CLICKY_DELAY_DURATION 0
#define AUDIO_CLICKY_FREQ_RANDOMNESS 0.0f
#define AUDIO_CLICKY_FREQ_DEFAULT 800.0f
#define AUDIO_INIT_DELAY 100
#define AUDIO_STATE_TIMER GPTD4
