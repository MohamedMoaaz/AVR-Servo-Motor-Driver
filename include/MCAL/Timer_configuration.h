/**
 * @file    Timer_configuration.h
 * @author  Mohamed Moaaz
 * @brief   Timer configuration file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __TIMER_CONFIGURATION_H__
#define __TIMER_CONFIGURATION_H__

//==============================================================================
// Macros & Defines
//==============================================================================
/*Timer0 Configurations*/

/* choose timer0 wave generation mode
                            options
                            1-TIMER0_NORMAL_MODE
                            2-TIMER0_PWM_PHASE_CORRECT_MODE
                            3-TIMER0_CTC_MODE
                            4-TIMER0_FAST_PWM_MODE
*/
#define TIMER0_WAVE_GENERATION_MODE              TIMER0_FAST_PWM_MODE

/* choose timer0 CTC output mode
                            options
                            1-TIMER0_NORMAL_PORT_OPERATION
                            2-TIMER0_TOGGLE_OC0_ON_COMPARE_MATCH
                            3-TIMER0_CLEAR_OC0_ON_COMPARE_MATCH
                            4-TIMER0_SET_OC0_ON_COMPARE_MATCH
*/
#if(TIMER0_WAVE_GENERATION_MODE == TIMER0_CTC_MODE)
#define TIMER0_CTC_OUTPUT_MODE                    TIMER0_NORMAL_PORT_OPERATION
#endif

/* choose timer0 PWM output mode
                            options
                            1-TIMER0_NORMAL_PORT_OPERATION
                            2-TIMER0_NON_INVERTING_MODE
                            3-TIMER0_INVERTING_MODE
*/
#if(TIMER0_WAVE_GENERATION_MODE == TIMER0_FAST_PWM_MODE)
#define TIMER0_PWM_OUTPUT_MODE                    TIMER0_NON_INVERTING_MODE
#endif

/* choose timer0 phase correct output mode
                            options
                            1-TIMER0_NORMAL_PORT_OPERATION
                            2-TIMER0_CLEAR_OC0_UP_COUNTING_SET_OC0_DOWN_COUNTING
                            3-TIMER0_SET_OC0_UP_COUNTING_CLEAR_OC0_DOWN_COUNTING
*/
#if(TIMER0_WAVE_GENERATION_MODE == TIMER0_PWM_PHASE_CORRECT_MODE)
#define TIMER0_PHASE_CORRECT_PWM_OUTPUT_MODE      TIMER0_NORMAL_PORT_OPERATION
#endif

/* choose timer0 prescaler
                            options
                            1-TIMER_STOPPED
                            2-NO_PRESCALER
                            3-DIV_BY_8
                            4-DIV_BY_64
                            5-DIV_BY_256
                            6-DIV_BY_1024
                            7-EXTERNAL_CLOCK_SOURCE_ON_T0_PIN_FALLING_EDGE
                            8-EXTERNAL_CLOCK_SOURCE_ON_T0_PIN_RISING_EDGE
*/
#define TIMER0_PRESCALER                          DIV_BY_64

////////////////////////////////////////////////////////////////////////////////
/*Timer1 Configurations*/

/* choose timer1 wave generation mode
                            options
                            1-TIMER1_NORMAL_MODE
                            2-TIMER1_PWM_PHASE_CORRECT_8-BITS_MODE
                            3-TIMER1_PWM_PHASE_CORRECT_9-BITS_MODE
                            4-TIMER1_PWM_PHASE_CORRECT_10-BITS_MODE
                            5-TIMER1_CTC_MODE
                            6-TIMER1_FAST_PWM_8_BITS_MODE
                            7-TIMER1_FAST_PWM_9_BITS_MODE
                            8-TIMER1_FAST_PWM_10_BITS_MODE
                            9-TIMER1_PWM_PHASE_AND_FREQUENCY_CORRECT_TOP_ICR1_MODE
                            10-TIMER1_PWM_PHASE_AND_FREQUENCY_CORRECT_TOP_OCR1A_MODE
                            11-TIMER1_PWM_PHASE_CORRECT_TOP_ICR1_MODE
                            12-TIMER1_PWM_PHASE_CORRECT_TOP_OCR1A_MODE
                            13-TIMER1_CTC_TOP_ICR1_MODE
                            14-TIMER1_FAST_PWM_TOP_ICR1_MODE
                            15-TIMER1_FAST_PWM_TOP_OCR1A_MODE
*/
#define TIMER1_WAVE_GENERATION_MODE              TIMER1_FAST_PWM_TOP_ICR1_MODE

/* choose timer1 CTC output mode on OC1A pin
                            options
                            1-TIMER1_NORMAL_PORT_OPERATION
                            2-TIMER1_TOGGLE_OC1A_ON_COMPARE_MATCH
                            3-TIMER1_CLEAR_OC1A_ON_COMPARE_MATCH
                            4-TIMER1_SET_OC1A_ON_COMPARE_MATCH
*/
#define TIMER1_CTC_OC1A_OUTPUT_MODE                TIMER1_NORMAL_PORT_OPERATION

/* choose timer1 CTC output mode on OC1B pin
                            options
                            1-TIMER1_NORMAL_PORT_OPERATION
                            2-TIMER1_TOGGLE_OC1B_ON_COMPARE_MATCH
                            3-TIMER1_CLEAR_OC1B_ON_COMPARE_MATCH
                            4-TIMER1_SET_OC1B_ON_COMPARE_MATCH
*/
#define TIMER1_CTC_OC1B_OUTPUT_MODE                 TIMER1_NORMAL_PORT_OPERATION

/* choose  timer1 PWM output mode on OC1A pin
                            options
                            1-TIMER1_NORMAL_PORT_OPERATION
                            2-TIMER1_TOGGLE_OC1A_ON_COMPARE_MATCH_AT_WGM_15
                            3-TIMER1_NON_INVERTING_MODE
                            4-TIMER1_INVERTING_MODE
*/
#define TIMER1_PWM_OC1A_OUTPUT_MODE                  TIMER1_NON_INVERTING_MODE

/* choose  timer1 PWM output mode on OC1B pin
                            options
                            1-TIMER1_NORMAL_PORT_OPERATION
                            2-TIMER1_OC1B_DISCONNECTED
                            3-TIMER1_NON_INVERTING_MODE
                            4-TIMER1_INVERTING_MODE
*/
#define TIMER1_PWM_OC1B_OUTPUT_MODE                    TIMER1_NON_INVERTING_MODE

/* choose  timer1 PWM phase correct output mode on OC1A pin
                            options
                            1-TIMER1_NORMAL_PORT_OPERATION
                            2-TIMER1_TOGGLE_OC1A_ON_COMPARE_MATCH_AT_WGM_9_14
                            3-TIMER1_CLEAR_OC1A_UP_COUNTING_SET_OC1A_DOWN_COUNTING
                            4-TIMER1_SET_OC1A_UP_COUNTING_CLEAR_OC1A_DOWN_COUNTING
*/
#define TIMER1_FREQUENCY_AND_PHASE_CORRECT_PWM_OC1A_OUTPUT_MODE      TIMER1_NORMAL_PORT_OPERATION

/* choose  timer1 PWM phase correct output mode on OC1B pin
                            options
                            1-TIMER1_NORMAL_PORT_OPERATION
                            2-TIMER1_OC1B_DISCONNECTED
                            3-TIMER1_CLEAR_OC1B_UP_COUNTING_SET_OC1B_DOWN_COUNTING
                            4-TIMER1_SET_OC1B_UP_COUNTING_CLEAR_OC1B_DOWN_COUNTING
*/
#define TIMER1_FREQUENCY_AND_PHASE_CORRECT_PWM_OC1B_OUTPUT_MODE      TIMER1_NORMAL_PORT_OPERATION

/* choose timer1 prescaler
                            options
                            1-TIMER_STOPPED
                            2-NO_PRESCALER
                            3-DIV_BY_8
                            4-DIV_BY_64
                            5-DIV_BY_256
                            6-DIV_BY_1024
                            7-EXTERNAL_CLOCK_SOURCE_ON_T1_PIN_FALLING_EDGE
                            8-EXTERNAL_CLOCK_SOURCE_ON_T1_PIN_RISING_EDGE
*/
#define TIMER1_PRESCALER                          DIV_BY_64


//==============================================================================
// Typedefs
//==============================================================================

//==============================================================================
// Exported Values
//==============================================================================

//==============================================================================
// Global Functions Prototypes
//==============================================================================

#endif /* __TIMER_CONFIGURATION_H__ */