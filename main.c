#include<regx52.h>

sbit LED_PIN = P1^2;
int i=0;



void Delay_ms(unsigned int t)     
{
    unsigned int x,y;             
    for (x=0; x<t; x++) 
    {   
         for (y=0; y<123; y++);   
    }
}

void main()
{ 
	
     while(1) 
     {
			  LED_PIN = ~LED_PIN;
			  Delay_ms(500);
     }
}