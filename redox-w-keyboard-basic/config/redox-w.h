#ifndef __REDOX_W_FIRMWARE_CONFIG_REDOX_W_H__
#define __REDOX_W_FIRMWARE_CONFIG_REDOX_W_H__

#if defined(COMPILE_LEFT) && defined(COMPILE_RIGHT) || defined(COMPILE_FINGER_LEFT) && defined(COMPILE_FINGER_RIGHT) || defined(COMPILE_ACC_LEFT) && defined(COMPILE_ACC_RIGHT) || defined(COMPILE_KNEE_LEFT) && defined(COMPILE_KNEE_RIGHT)
#error "Only one of COMPILE_LEFT and COMPILE_RIGHT can be defined at once."
#endif

#if defined(COMPILE_LEFT)

#define PIPE_NUMBER 0

#define C01 3
#define C02 4
#define C03 5
#define C04 6
#define C05 7
#define C06 9
#define C07 10

#define R01 19
#define R02 18
#define R03 17
#define R04 14
#define R05 13

#endif

#if defined(COMPILE_RIGHT)

#define PIPE_NUMBER 1

#define C01 30
#define C02 0
#define C03 2
#define C04 3
#define C05 4
#define C06 5
#define C07 6

#define R01 21
#define R02 22
#define R03 23
#define R04 28
#define R05 29

#endif

#if defined(COMPILE_LEFT) || defined(COMPILE_RIGHT)
#define COLUMNS 7
#define ROWS 5
#endif

#if defined(COMPILE_FINGER_LEFT) || defined(COMPILE_FINGER_RIGHT) || defined(COMPILE_ACC_LEFT) || defined(COMPILE_ACC_RIGHT)
#define COLUMNS 7
#define ROWS 1
#endif

#if defined(COMPILE_KNEE_LEFT) || defined(COMPILE_KNEE_RIGHT)
#define COLUMNS 6
#define ROWS 5
#endif

#ifdef COMPILE_FINGER_LEFT
#define PIPE_NUMBER 2
#endif
#ifdef COMPILE_FINGER_RIGHT
#define PIPE_NUMBER 3
#endif

#ifdef COMPILE_ACC_LEFT
#define PIPE_NUMBER 4
#endif
#ifdef COMPILE_ACC_RIGHT
#define PIPE_NUMBER 5
#endif

#ifdef COMPILE_KNEE_LEFT
#define PIPE_NUMBER 6
#endif
#ifdef COMPILE_KNEE_RIGHT
#define PIPE_NUMBER 7
#endif

#if defined(COMPILE_FINGER_LEFT) || defined(COMPILE_FINGER_RIGHT)
#define R01 11
#define R02 19
#define R03 20
#define R04 21
#define R05 10
#define R06 30
#endif

#if defined(COMPILE_ACC_LEFT) || defined(COMPILE_ACC_RIGHT)
#define R01 22
#define R02 28
#define R03 30
#define R04 3
#define R05 2
#define R06 20
#define R07 21
#endif

#if defined(COMPILE_KNEE_LEFT) || defined(COMPILE_KNEE_RIGHT)
#define R01 25
#define R02 24
#define R03 23
#define R04 22
#define R05 21

#define C01 28
#define C02 29
#define C03 30
#define C04 0
#define C05 1
#define C06 2
#endif

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}

#endif /* __REDOX_W_FIRMWARE_CONFIG_REDOX_W_H__ */
