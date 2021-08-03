#include <avr/io.h>
#define F_CPU 1000000UL
#include<util/delay.h>
//cs-18118 Misha Akram

int GetKeyPressed(void);
int main(void)
{
	char digit[20]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','\0'};
	DDRD=0xF0;
	DDRA=0xFF;
	DDRC=0x00;
	DDRB=(1<<PINB1);
	int key;
	PORTA=digit[16];
	while(1)
	{
		//TODO:: Please write your application code
		key= GetKeyPressed();
		if(key!=16)
		{
			PORTA=digit[key];
		}
	}
}
int GetKeyPressed(void)
{
	char x;
	PORTB=0x00;
	int data;
	x=PINC;
	if(x==0x01)
	{
		data=(PIND&0x0F);
		return data;
	}
	return 16;
}

