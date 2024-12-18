#ifdef _BIT_MATH_H
#define _BIT_MATH_H

#define SetBit(value,bitno) value|=(1<<bitno) // sets the value of the given bit to 1
#define ClrBit(value,bitno) value&=~(1<<bitno)// Clears the value of the given bit and reset it to 0 
#define TogBit(value,bitno) value^=(1<<bitno) // Flips the given bit value if it's 0 it will be 1
#define GetBit(value,bitno) (value&((1<<bitno)))!=0 // returns the value of given bit, NOTE: YOU MUST SAVE IT INSIDE ANOTHER VALUE

#define BIT_CONC(B7,B6,B5,B4,B3,B2,B1,B0) CONC_HELP(B7,B6,B5,B4,B3,B2,B1,B0)
#define CONC_HELP(B7,B6,B5,B4,B3,B2,B1,B0) 0b##B7##B6##B5##B4##B3##B2##B1##B0


#endif