#include<avr/io.h>
#define F_CPU 1000000UL
#include<util/delay.h>
int main(void)
{
	DDRA=0b11111111; // set port A as output
	DDRB=0b00000000; //set port B as input
	char y;
	char x=0b00000000;
	while(1)
	{
		y=PINB; //Read input from port A
		if (y==0b00000001){
			x++;
			_delay_ms(3000);
		}
		PORTA=x;
	}// while ends
} //main ends