/**
 * @file    Std_Types.h
 * @author  Mohamed Moaaz
 * @brief   Standard data types
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __STD_TYPES_H__
#define __STD_TYPES_H__

//==============================================================================
// Includes
//==============================================================================

/**
 * @brief Boolean standard library.
 */
#include <stdbool.h>

/**
 * @brief Integers standard library.
 */
#include <stdint.h>

//==============================================================================
// Macros & Defines
//==============================================================================
#define NULL 0
/**
 * @brief       Hardware register.
 * @param [in]  reg: Register address.
 */
#define REG(reg)            (*(volatile Reg_t *)(reg))

/**
 * @brief       Set bit in a register.
 * @param [in]  reg: Selected register.
 * @param [in]  bit: Selected bit.
 * @retval      None.
 */
#define SET_BIT(reg, bit)    (reg |= (1 << bit))

/**
 * @brief       Clear bit in a register.
 * @param [in]  reg: Selected register.
 * @param [in]  bit: Selected bit.
 * @retval      None.
 */
#define CLEAR_BIT(reg, bit)  (reg &= ~(1 << bit))

/**
 * @brief       Toggle bit in a register.
 * @param [in]  reg: Selected register.
 * @param [in]  bit: Selected bit.
 * @retval      None.
 */
#define TOGGLE_BIT(reg, bit) (reg ^= (1 << bit))

/**
 * @brief       Get bit from a register.
 * @param [in]  reg: Selected register.
 * @param [in]  bit: Selected bit.
 * @retval      Bit value--either 0 or 1.
 */
#define GET_BIT(reg, bit)    ((reg >> bit) & 1)

/**
 * @brief       Get array size.
 * @param [in]  array: Array to calculate its size.
 * @retval      Array size.
 */
#define ARRAY_SIZE(array)    (sizeof(array) / sizeof(array[0]))

//==============================================================================
// Typedefs
//==============================================================================

/**
 * @brief Register datatype.
 */
typedef uint16_t Reg_t;

/**
 * @enum    E_Status
 * @brief   Error status code.
 */
typedef enum
{
    E_NOK        = 0,
    E_OK         = 1,
    NULL_POINTER = 2,
    BUSY_FUNC    = 3
} E_Status;

//==============================================================================
// Exported Values
//==============================================================================

//==============================================================================
// Global Functions Prototypes
//==============================================================================

#endif /* __STD_TYPES_H__ */