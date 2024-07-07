#pragma once

#define PIEZO_A A2
#define PIEZO_B A3

#define AUDIO_PIN PIEZO_A
#define AUDIO_PIN_ALT PIEZO_B
#define AUDIO_PIN_ALT_AS_NEGATIVE 1 // Two pins, one speaker

// The ChibiOS driver to use
#define AUDIO_PWM_DRIVER PWMD5
//#define AUDIO_PWM_DRIVER PWMD9

// Specifies timer channel. What about alt?
#define AUDIO_PWM_CHANNEL 3
//#define AUDIO_PWM_CHANNEL 1

// Sets the pin alternative function number. What about alt?
#define AUDIO_PWM_PAL_MODE 2
//#define AUDIO_PWM_PAL_MODE 3

#define AUDIO_ENABLE_TONE_MULTIPLEXING
#define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10

#define AUDIO_CLICKY
#define AUDIO_CLICKY_DELAY_DURATION 0
//#define AUDIO_CLICKY_FREQ_RANDOMNESS 0.0f
//#define AUDIO_CLICKY_FREQ_DEFAULT 440.0f


#define AUDIO_INIT_DELAY 2000

#define AUDIO_STATE_TIMER GPTD4
