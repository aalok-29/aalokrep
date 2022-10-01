#include<lpc214x.h>  //import LPC libraries
#include<stdint.h>    

void delay_ms(uint16_t j)   // function to provide delay
{
	uint16_t x,i;
	for(i=0;i<j;++i)
	{
		for(x=0;x<60000;x++);
	}
	
}

int main(void)      
{
	IO0DIR=0x000000FF;  
	while(1)              //never ending loop
	{
		IO0PIN=IO0PIN | 0x00000001;   //sets the value of pin 0.0 to HIGH
		delay_ms(300);                //300 milliseconds delay
		IO0PIN=IO0PIN & 0xFFFFFF00;   //sets the value of pin 0.0 to  LOW
		delay_ms(300);                //300 milliseconds delay
	
	}
}
