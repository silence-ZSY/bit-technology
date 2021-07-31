#include "stm32f4xx.h"
#include "./led/led.h"
#include "./systick/systick.h"
#include "./tim/basic_tim.h"


int main(void)
{
	LED_GPIO_Config();
	TIMx_Configuration();
	
	while(1)
	{;}
}
