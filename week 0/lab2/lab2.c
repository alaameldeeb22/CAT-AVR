/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: SkYTop
 */
#include <util/delay.h>
typedef unsigned char u8;
#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)
int main (void)
{char i;
	DDRA |= (1<<4);

while(1){
	for(i=0;i<8;i++){
		DDRA |= (1<<i);
		_delay_ms(500);
	    PORTA |= (1<<i);
	}
	for(i=0;i<8;i++){
		DDRA |= (1<<i);
		_delay_ms(500);
	    PORTA &= ~(1<<i);
	}
	}
	return 0;
}

