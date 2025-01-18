/**
 * @file    PORT_register.h
 * @author  Mohamed Moaaz
 * @brief   @todo
 * @version PORT register file
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __PORT_REGISTER_H__
#define __PORT_REGISTER_H__

//==============================================================================
// Macros & Defines
//==============================================================================
#define DDRA  *((volatile uint8_t*)0x3a)
#define PORTA *((volatile uint8_t*)0x3b)

#define DDRB  *((volatile uint8_t*)0x37)
#define PORTB *((volatile uint8_t*)0x38)

#define DDRC  *((volatile uint8_t*)0x34)
#define PORTC *((volatile uint8_t*)0x35)

#define DDRD  *((volatile uint8_t*)0x31)
#define PORTD *((volatile uint8_t*)0x32)

//==============================================================================
// Typedefs
//==============================================================================


//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================


#endif /* __PORT_REGISTER_H__ */