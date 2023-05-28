/*
Application: Debugging
Problem Statement: Display a string on STM console

Aurthor:Madhulika Nayak*/

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
#include<stdio.h>
int main(void)
{
    /* Loop forever */
	//for(;;);
	printf("Hello welcome to embedded world\n");
}
