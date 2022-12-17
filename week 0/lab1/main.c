/*
 * main.c
 *
 *  Created on: 12.12.2022
 *      Author: alaa eldeeb
 */
#include <util/delay.h>
typedef unsigned char u8;
#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)
int main (void)
{
	DDRA |= (1<<4);

while(1){
	PORTA |= (1<<0);
		_delay_ms(1000);
		PORTA &= ~(1<<0);
		_delay_ms(1000);
}
	return 0;
}

