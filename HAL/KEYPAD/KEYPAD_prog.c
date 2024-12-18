/******************************************/
/* Author : Hager 						*/
/* Date :31/1/2018						*/
/* version :v01							*/
/*****************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"

#include "KEYPAD_config.h"
#include "KEYPAD_priv.h"
#include "KEYPAD_int.h"

static u16 u16ResultLoc=0;


/* Description: this function shall return */
/*				the status of the keypad	*/
/*				switches each switch has a 	*/
/*				dedicated bit				*/
/****************************************/

u16 KEYPAD_u16GetStatus(void){
	/* Clear Privious Status */
	u16ResultLoc = 0;
	
	/* Phase 1*/
	DIO_voidSetPinValue(KEYPAD_u8_OUT_1, DIO_u8_LOW);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_2, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_3, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_4, DIO_u8_HIGH);
	voidSetSwResult(0);
	
	
	/* Phase 2 */
	DIO_voidSetPinValue(KEYPAD_u8_OUT_1, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_2, DIO_u8_LOW);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_3, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_4, DIO_u8_HIGH);
	voidSetSwResult(0);
	
	/* Phase 3 */
	DIO_voidSetPinValue(KEYPAD_u8_OUT_1, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_2, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_3, DIO_u8_LOW);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_4, DIO_u8_HIGH);
	voidSetSwResult(1);
	
	/* Phase 4 */
	DIO_voidSetPinValue(KEYPAD_u8_OUT_1, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_2, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_3, DIO_u8_HIGH);
	DIO_voidSetPinValue(KEYPAD_u8_OUT_4, DIO_u8_LOW);
	voidSetSwResult(1);
	
	
	static void voidSetSwResult(u8 u8columnCpy){
		if(DIO_voidGetPinValue(KEYPAD_u8_INP_1) == DIO_u8_LOW){
			SETBIT(u16ResultLoc, u8columnCpy);
		}
		if(DIO_voidGetPinValue(KEYPAD_u8_INP_2) == DIO_u8_LOW){
			SETBIT(u16ResultLoc, u8columnCpy+4);
		}
		if(DIO_voidGetPinValue(KEYPAD_u8_INP_3) == DIO_u8_LOW){
			SETBIT(u16ResultLoc, u8columnCpy+8);
		}
		if(DIO_voidGetPinValue(KEYPAD_u8_INP_4) == DIO_u8_LOW){
			SETBIT(u16ResultLoc, u8columnCpy+12);
		}		
		
	}
}