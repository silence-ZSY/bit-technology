#include "stm32f4xx.h"
#include "./led/led.h"
#include "./key/key.h"
#include "./exti/exti.h"

int main(void)
{
	LED_GPIO_Config();
	
	//KEY1为什么不好用？
	EXTI_Key_Config();
	
	//等待中断的到来
	while(1)
	{
		;
	}
}
