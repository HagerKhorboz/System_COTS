#ifndef _DIO_REGISTER_
#define _DIO_REGISTER_

/*Group A Registers */
#define PORTA *((u8*)0x3B)
#define DDRA *((u8*)0x3A)
#define PINA *((u8*)0x39)

/*Group B Registers */
#define PORTB *((u8*)0x38)
#define DDRB *((u8*)0x37)
#define PINB *((u8*)0x36)

/*Group C Registers */
#define PORTC *((u8*)0x35)
#define DDRC *((u8*)0x34)
#define PINC *((u8*)0x33)

/*Group D Registers */
#define PORTD *((u8*)0x32)
#define DDRD *((u8*)0x31)
#define PIND *((u8*)0x30)




#endif