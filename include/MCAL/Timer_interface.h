/**
 * @file    Timer_Interface.h
 * @author  Mohamed Moaaz
 * @brief   Timer interfacing file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __TIMER_INTERFACE_H__
#define __TIMER_INTERFACE_H__

//==============================================================================
// Macros & Defines
//==============================================================================


//==============================================================================
// Typedefs
//==============================================================================


//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================

void Timer0_Init(void);
void Timer0_NormalModeSetTime(uint16_t copy_u16MilliSeconds);
void Timer0_CTCModeSetTime(uint16_t copy_u16MilliSeconds, uint8_t copy_u8CompareMatchValue);
E_Status Timer0_StartFastPWM(uint8_t copy_u8DutyCycle);
E_Status Timer0_SetCallBack(void (*Copy_pvCallBackFunc)(void));
void Timer1_Init(void);
/**
 * @brief this function is mainly used to control servo motor 
 * and it is only work properly on selecting prescaler 8 and fast pwm non inverting mode
 * @param copy_u16OnTime 
 * @param copy_u16PeriodTimeInMicroSec 
 */
void Timer1_StartCustomFastPWM(uint16_t copy_u16OnTime, uint16_t copy_u16PeriodTimeInMicroSec);


#endif /* __TIMER_INTERFACE_H__ */