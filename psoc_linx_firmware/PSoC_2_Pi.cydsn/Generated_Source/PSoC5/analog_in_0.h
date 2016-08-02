/*******************************************************************************
* File Name: analog_in_0.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_analog_in_0_H) /* Pins analog_in_0_H */
#define CY_PINS_analog_in_0_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "analog_in_0_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 analog_in_0__PORT == 15 && ((analog_in_0__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    analog_in_0_Write(uint8 value) ;
void    analog_in_0_SetDriveMode(uint8 mode) ;
uint8   analog_in_0_ReadDataReg(void) ;
uint8   analog_in_0_Read(void) ;
uint8   analog_in_0_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define analog_in_0_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define analog_in_0_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define analog_in_0_DM_RES_UP          PIN_DM_RES_UP
#define analog_in_0_DM_RES_DWN         PIN_DM_RES_DWN
#define analog_in_0_DM_OD_LO           PIN_DM_OD_LO
#define analog_in_0_DM_OD_HI           PIN_DM_OD_HI
#define analog_in_0_DM_STRONG          PIN_DM_STRONG
#define analog_in_0_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define analog_in_0_MASK               analog_in_0__MASK
#define analog_in_0_SHIFT              analog_in_0__SHIFT
#define analog_in_0_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define analog_in_0_PS                     (* (reg8 *) analog_in_0__PS)
/* Data Register */
#define analog_in_0_DR                     (* (reg8 *) analog_in_0__DR)
/* Port Number */
#define analog_in_0_PRT_NUM                (* (reg8 *) analog_in_0__PRT) 
/* Connect to Analog Globals */                                                  
#define analog_in_0_AG                     (* (reg8 *) analog_in_0__AG)                       
/* Analog MUX bux enable */
#define analog_in_0_AMUX                   (* (reg8 *) analog_in_0__AMUX) 
/* Bidirectional Enable */                                                        
#define analog_in_0_BIE                    (* (reg8 *) analog_in_0__BIE)
/* Bit-mask for Aliased Register Access */
#define analog_in_0_BIT_MASK               (* (reg8 *) analog_in_0__BIT_MASK)
/* Bypass Enable */
#define analog_in_0_BYP                    (* (reg8 *) analog_in_0__BYP)
/* Port wide control signals */                                                   
#define analog_in_0_CTL                    (* (reg8 *) analog_in_0__CTL)
/* Drive Modes */
#define analog_in_0_DM0                    (* (reg8 *) analog_in_0__DM0) 
#define analog_in_0_DM1                    (* (reg8 *) analog_in_0__DM1)
#define analog_in_0_DM2                    (* (reg8 *) analog_in_0__DM2) 
/* Input Buffer Disable Override */
#define analog_in_0_INP_DIS                (* (reg8 *) analog_in_0__INP_DIS)
/* LCD Common or Segment Drive */
#define analog_in_0_LCD_COM_SEG            (* (reg8 *) analog_in_0__LCD_COM_SEG)
/* Enable Segment LCD */
#define analog_in_0_LCD_EN                 (* (reg8 *) analog_in_0__LCD_EN)
/* Slew Rate Control */
#define analog_in_0_SLW                    (* (reg8 *) analog_in_0__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define analog_in_0_PRTDSI__CAPS_SEL       (* (reg8 *) analog_in_0__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define analog_in_0_PRTDSI__DBL_SYNC_IN    (* (reg8 *) analog_in_0__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define analog_in_0_PRTDSI__OE_SEL0        (* (reg8 *) analog_in_0__PRTDSI__OE_SEL0) 
#define analog_in_0_PRTDSI__OE_SEL1        (* (reg8 *) analog_in_0__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define analog_in_0_PRTDSI__OUT_SEL0       (* (reg8 *) analog_in_0__PRTDSI__OUT_SEL0) 
#define analog_in_0_PRTDSI__OUT_SEL1       (* (reg8 *) analog_in_0__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define analog_in_0_PRTDSI__SYNC_OUT       (* (reg8 *) analog_in_0__PRTDSI__SYNC_OUT) 


#if defined(analog_in_0__INTSTAT)  /* Interrupt Registers */

    #define analog_in_0_INTSTAT                (* (reg8 *) analog_in_0__INTSTAT)
    #define analog_in_0_SNAP                   (* (reg8 *) analog_in_0__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_analog_in_0_H */


/* [] END OF FILE */
