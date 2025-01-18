/**
 * @file    Timer_register.h
 * @author  Mohamed Moaaz
 * @brief   Timer register file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __TIMER_REGISTER_H__
#define __TIMER_REGISTER_H__

//==============================================================================
// Macros & Defines
//==============================================================================

/**
 * @brief Timer0 Registers
 * 
 */
#define TCCR0             *((volatile uint8_t*)0x53)      /*Timer0 control register*/

// TCCR0 Pins
#define TCCR0_FOC0        7
#define TCCR0_WGM00       6                             /*Waveform generation mode bit0*/
#define TCCR0_COM01       5                             /*Compare Match Output Mode bit0*/
#define TCCR0_COM00       4                             /*Compare Match Output Mode bit1*/
#define TCCR0_WGM01       3                             /*Waveform generation mode bit1*/
#define TCCR0_CS02        2                             /*Prescaler bit2*/
#define TCCR0_CS01        1                             /*Prescaler bit1*/
#define TCCR0_CS00        0                             /*Prescaler bit0*/

#define TCNT0             *((volatile uint8_t*)0x52)    /*Timer/counter register*/
#define OCR0              *((volatile uint8_t*)0x5c)    /*Output compare register 0*/

#define TIMSK             *((volatile uint8_t*)0x59)    /*Timer mask register*/
//TIMSK Pins
#define TIMSK_OCIE0       1                             /*Output compare match interrupt enable*/
#define TIMSK_TOIE0       0                             /*Overflow interrupt enable*/

#define TIFR              *((volatile uint8_t*)0x58)    /*Interrupt Flag Register*/
//TIFR Pins
#define TIFR_OCF0         1                             /*Output compare match interrupt flag*/
#define TIFR_TOV0         0                             /*Overflow interrupt flag*/

/**
 * @brief Timer1 Registers
 * 
 */

#define TCCR1A             *((volatile uint8_t*)0x4F)   /*Timer1 control register A*/
// TCCR0 Pins
#define TCCR1A_COM1A1      7                            /*compare output mode for compare unit A bit0*/
#define TCCR1A_COM1A0      6                            /*compare output mode for compare unit A bit1*/
#define TCCR1A_COM1B1      5                            /*compare output mode for compare unit B bit0*/
#define TCCR1A_COM1B0      4                            /*compare output mode for compare unit B bit1*/
#define TCCR1A_FOC1A       3                            /*force output compare for compare unit A*/
#define TCCR1A_FOC1B       2                            /*force output compare for compare unit B*/
#define TCCR1A_WGM11       1                            /*Waveform generation mode bit0*/
#define TCCR1A_WGM10       0                            /*Waveform generation mode bit1*/

#define TCCR1B             *((volatile uint8_t*)0x4E)   /*Timer1 control register A*/
#define TCCR1B_ICNC1       7                            /*Input Capture Noise Canceler*/
#define TCCR1B_ICES1       6                            /*Input Capture Edge Select*/
#define TCCR1B_WGM13       4                            /*Waveform generation mode bit2*/
#define TCCR1B_WGM12       3                            /*Waveform generation mode bit3*/
#define TCCR1B_CS12        2                            /*Prescaler bit2*/
#define TCCR1B_CS11        1                            /*Prescaler bit1*/
#define TCCR1B_CS10        0                            /*Prescaler bit0*/

#define TCNT1              *((volatile uint16_t*)0x4C)  /*Timer/counter register*/
#define OCR1A              *((volatile uint16_t*)0x4A)  /*Output compare register A*/
#define OCR1B              *((volatile uint16_t*)0x48)  /*Output compare register B*/
#define ICR1               *((volatile uint16_t*)0x46)  /*Input Capture Register*/

#define TIMSK              *((volatile uint8_t*)0x59)   /*Timer mask register*/
//TIMSK Pins
#define TIMSK_TICIE1       5                            /*Input Capture interrupt enable*/
#define TIMSK_OCIE1A       4                            /*Timer/Counter1, Output Compare A Match Interrupt Enable*/
#define TIMSK_OCIE1B       3                            /*Timer/Counter1, Output Compare B Match Interrupt Enable*/
#define TIMSK_TOIE1        2                            /*Timer/Counter1, Overflow Interrupt Enable*/
                            
#define TIFR               *((volatile uint8_t*)0x58)   /*Interrupt Flag Register*/
//TIFR Pins
#define TIFR_ICF1          5                            /*Timer/Counter1, Input Capture Flag*/
#define TIFR_OCF1A         4                            /*Timer/Counter1, Output Compare A Match Flag*/
#define TIFR_OCF1B         3                            /*Timer/Counter1, Output Compare B Match Flag*/
#define TIFR_TOV1          2                            /*Timer/Counter1, Overflow Flag*/

//==============================================================================
// Typedefs
//==============================================================================


//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================


#endif /* __TIMER_REGISTER_H__ */