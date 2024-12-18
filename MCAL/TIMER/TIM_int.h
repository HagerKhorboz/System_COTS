/******************************************/
/* Author : Hager 						*/
/* Date :28/2/2018						*/
/* version :v01							*/
/*****************************************/

#ifndef _TIM_INT_H
#define _TIM_INT_H

#define TIM_u8_NO_DIVISION  	1
#define TIM_u8_DIV_BY_8     	2
#define TIM_u8_DIV_BY_64      	3
#define TIM_u8_DIV_BY_256      	4
#define TIM_u8_DIV_BY_1024      5

#include "TIM_config.h"

/*  */
/*  */

void TIM_voidInitialize(void);

/*Description: Enable Timer interrupt */
void TIM_voidEnableInt(void);

/*Description : Disable Timer interrupt */

void TIM_voidDisableInt(void);


/* Description: Set timer callback function */
void TIM_voidSetCallBack(void(*ptrCpy)(void));


/* Description : Initialize timer register*/
void TIM_voidInitRegister(u8 u8ValueCpy);


#endif