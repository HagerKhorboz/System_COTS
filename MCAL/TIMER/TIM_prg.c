/******************************************/
/* Author : Hager 						*/
/* Date :28/2/2018						*/
/* version :v01							*/
/*****************************************/
/*  */
static void (*TIM_CallBack)(void);
#define

void TIM_voidInitialize(void){

	/* Clear Flag */
	Set_BIT(TIFR,0);
	
	/* Disable Interrupt */
	CLR_BIT(TIMSK,0);	
	/* Initialize timer register */
	TCNT0 = Initial_value;

	/*Set Prescaler */
	#if TIM_u16_PRESCALER == TIM_u16_NO_DIV
	TCCR0 = 1;
	#elif TIM_u16_PRESCALER == TIM_u16_DIV_By_1024
	
}

/*Description: Enable Timer interrupt */
void TIM_voidEnableInt(void){
	SET_BIT(TIMSK,0);
}

/*Description : Disable Timer interrupt */

void TIM_voidDisableInt(void){
	CLR_BIT(TIMSK,0);
}


/* Description: Set timer callback function */
void TIM_voidSetCallBack(void(*ptrCpy)(void)){
	TIM_CallBack = ptrCpy;
}


/* Description : Initialize timer register*/
void TIM_voidInitRegister(u8 u8ValueCpy){
	TCNT0 = u8ValueCpy;
}


/* Timer interrupt */
void __vector_11 (void) __attribute__((signal,used));
void __vector_11 (void){
	TIM_CallBack();
}

