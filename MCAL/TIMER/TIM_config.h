/******************************************/
/* Author : Hager 						*/
/* Date :28/2/2018						*/
/* version :v01							*/
/*****************************************/
#ifdef	_TIM_INT_H
#ifndef _TIM_PUB_CONFIG_H
#define _TIM_PUB_CONFIG_H

/*************************************************Public config *****************************************************/

/*Description: Prescaler */
/* Range     : TIM_u8_NO_DIVISION   */
/*             TIM_u8_DIV_BY_8      */
/*             TIM_u8_DIV_BY_64      */
/*             TIM_u8_DIV_BY_256      */
/*             TIM_u8_DIV_BY_1024      */

#define Tim_u8_PRESCALER		TIM_u8_DIV_BY_1024

#endif
#endif

/********************************************* Private config *********************************************************/

#ifdef _TIM_PRIV_H
#ifndef _TIM_PRIV_CONFIG_H
#define _TIM_PRIV_CONFIG_H
/* Description: Timer initial value    */

#define TIM_u8_INIT_VALUE		45

/*Description */

#endif

#endif