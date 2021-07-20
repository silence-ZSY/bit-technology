#include "stm32f4xx.h"
#include "./led/led.h"
#include "./key/key.h"
#include "./exti/exti.h"

int main(void)
{
	LED_GPIO_Config();
	
	EXTI_Key_Config();
	
	//�ȴ��жϵĵ���
	while(1)
	{
		;
	}
}
