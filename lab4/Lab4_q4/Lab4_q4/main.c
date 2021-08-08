/*
 * Lab4_q4.c
 *
 * Created: 8/8/2021 1:05:17 PM
 * Author : admin
 */ 

#include<avr/io.h>
#define F_CPU 1000000UL
#include<util/delay.h>
int main(void)
{
	DDRA=0b00000000; // set port A as input
	DDRB=0b00000000; //set port B as input
	DDRC=0b11111111; //set port C as output
	char P,Q,R;
	while(1)
	{
		P=PINA; //Read input from port A
		Q=PINB; //Read input from port B
		if (Q==0b00000000)
		{
			R=P+P;
			PORTC=R;
		
		}
		if (Q==0b00000001)
		{
			R=P-P;
			PORTC=R;
			
		}
		if (Q==0b00000010)
		{
			R=P&P;
			PORTC=R;
			
		}
		if (Q==0b00000011)
		{
			R=P|P;
			PORTC=R;
			
		}
		else{
			PORTC=0b00000000;
		}
		
			}// while ends
} //main ends

