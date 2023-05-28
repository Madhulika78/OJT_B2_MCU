/*
 Application: GPIO 
 Problem Statement: Turn ON LED (register code)

 Author: Madhulika Nayak*/



#include"main.h"

int main(){
	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0x400;
	while(1){
#if(0)
		// Using ODR
	 GPIO->ODR|=0X20;
	 delay(1000);
	 GPIO->ODR&=~(0X20);
	 delay(1000);*/
#endif
	 //Using BSRR
	GPIOA->BSRR |=(1<<5);
	delay(1000);
	GPIOA->BSRR |=(1<<21);
	delay(1000);
	}
}
void delay(int seconds){
	unsigned long int count=4000,i,j;

	for(i=0;i<seconds;i++){
	    for(j=0;j<count;j++);}
}


