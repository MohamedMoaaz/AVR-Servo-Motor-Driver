/**
 * @file    Timer_private.h
 * @author  Mohamed Moaaz
 * @brief   Timer private file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __TIMER_PRIVATE_H__
#define __TIMER_PRIVATE_H__

//==============================================================================
// Macros & Defines
//==============================================================================
/**
 * @brief Timer0 modes
 * 
 */
#define TIMER0_NORMAL_MODE                                     0
#define TIMER0_PWM_PHASE_CORRECT_MODE                          1
#define TIMER0_CTC_MODE                                        2
#define TIMER0_FAST_PWM_MODE                                   3

/**
 * @brief Timer0 CTC mode
 * 
 */
#define TIMER0_NORMAL_PORT_OPERATION                           0
#define TIMER0_TOGGLE_OC0_ON_COMPARE_MATCH                     1
#define TIMER0_CLEAR_OC0_ON_COMPARE_MATCH                      2
#define TIMER0_SET_OC0_ON_COMPARE_MATCH                        3

/**
 * @brief Timer0 fast PWM modes
 * 
 */
#define TIMER0_NON_INVERTING_MODE                              2
#define TIMER0_INVERTING_MODE                                  3

/**
 * @brief Timer0 phase correct pwm modes
 * 
 */
#define TIMER0_CLEAR_OC0_UP_COUNTING_SET_OC0_DOWN_COUNTING     2
#define TIMER0_SET_OC0_UP_COUNTING_CLEAR_OC0_DOWN_COUNTING     3

/**
 * @brief Timer prescaler
 * 
 */
#define TIMER_STOPPED                                          0
#define NO_PRESCALER                                           1
#define DIV_BY_8                                               2
#define DIV_BY_64                                              3
#define DIV_BY_256                                             4
#define DIV_BY_1024                                            5
#define EXTERNAL_CLOCK_SOURCE_FALLING_EDGE                     6
#define EXTERNAL_CLOCK_SOURCE_RISING_EDGE                      7

/**
 * @brief Timer1 modes
 * 
 */
#define TIMER1_NORMAL_MODE                                     1
#define TIMER1_PWM_PHASE_CORRECT_8_BITS_MODE                   2
#define TIMER1_PWM_PHASE_CORRECT_9_BITS_MODE                   3
#define TIMER1_PWM_PHASE_CORRECT_10_BITS_MODE                  4
#define TIMER1_CTC_MODE                                        5
#define TIMER1_FAST_PWM_8_BITS_MODE                            6
#define TIMER1_FAST_PWM_9_BITS_MODE                            7
#define TIMER1_FAST_PWM_10_BITS_MODE                           8
#define TIMER1_PWM_PHASE_AND_FREQUENCY_CORRECT_TOP_ICR1_MODE   9
#define TIMER1_PWM_PHASE_AND_FREQUENCY_CORRECT_TOP_OCR1A_MODE  10
#define TIMER1_PWM_PHASE_CORRECT_TOP_ICR1_MODE                 11
#define TIMER1_PWM_PHASE_CORRECT_TOP_OCR1A_MODE                12
#define TIMER1_CTC_TOP_ICR1_MODE                               13
#define TIMER1_FAST_PWM_TOP_ICR1_MODE                          14
#define TIMER1_FAST_PWM_TOP_OCR1A_MODE                         15

/**
 * @brief Timer1 OC1A CTC modes
 * 
 */

#define TIMER1_NORMAL_PORT_OPERATION                            0
#define TIMER1_TOGGLE_OC1A_ON_COMPARE_MATCH                     1
#define TIMER1_CLEAR_OC1A_ON_COMPARE_MATCH                      2
#define TIMER1_SET_OC1A_ON_COMPARE_MATCH                        3

/**
 * @brief Timer1 OC1A fast PWM modes
 * 
 */
#define TIMER1_TOGGLE_OC1A_ON_COMPARE_MATCH_AT_WGM_15           1
#define TIMER1_NON_INVERTING_MODE                               2
#define TIMER1_INVERTING_MODE                                   3

/**
 * @brief Timer1 OC1A frequency and phase correct modes
 * 
 */
#define TIMER1_TOGGLE_OC1A_ON_COMPARE_MATCH_AT_WGM_9_14         1
#define TIMER1_CLEAR_OC1A_UP_COUNTING_SET_OC1A_DOWN_COUNTING    2
#define TIMER1_SET_OC1A_UP_COUNTING_CLEAR_OC1A_DOWN_COUNTING    3

/**
 * @brief Timer1 OC1B CTC modes
 * 
 */
#define TIMER1_TOGGLE_OC1B_ON_COMPARE_MATCH                     1
#define TIMER1_CLEAR_OC1B_ON_COMPARE_MATCH                      2
#define TIMER1_SET_OC1B_ON_COMPARE_MATCH                        3

/**
 * @brief Timer1 OC1B frequency and phase correct modes
 * 
 */
#define TIMER1_OC1B_DISCONNECTED                                1
#define TIMER1_CLEAR_OC1B_UP_COUNTING_SET_OC1B_DOWN_COUNTING    2
#define TIMER1_SET_OC1B_UP_COUNTING_CLEAR_OC1B_DOWN_COUNTING    3
                          
//==============================================================================
// Typedefs
//==============================================================================


//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================


#endif /* __TIMER_PRIVATE_H__ */