#include "stm32f4xx.h"
#include "./led/led.h"
#include "./padres/key.h"
#include "./systick/systick.h"
#include "./padres/debug_usart.h"
#include "string.h"


int main(void)
{
	char str1[20];
	char str2[20]="LED";
	LED_GPIO_Config();
	Key_GPIO_Config();
	SysTick_Init();
	Debug_USART_Config();
	while(1)
	{
		//printf("\r\n begin \r\n");
		
		//gets(str1);
		//getchar();
		//printf("\r\n  接收到数据:%s  \r\n",str1);
		if( Key_Scan(KEY0_GPIO_PORT,KEY0_GPIO_PIN) == KEY_ON  )
		{
			printf("/r/n 测试开始  请输入指令 /r/n");
			scanf("%s",str1);
			if(strcmp(str1,str2)==0)
			{
				printf("\r\n接收到指令：%s  r\n",str1);
				LED1_TOGGLE;
			}
		}

        else if( Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON  )
		{
			printf("\r\n测试结束\r\n");
			LED0_OFF;
			LED1_OFF;
		}
		else if( Key_Scan(KEY2_GPIO_PORT,KEY2_GPIO_PIN) == KEY_ON  )
		{
			LED0_ON;
			LED1_ON;
		}
		else if( KeyUp_Scan(KEY_UP_GPIO_PORT,KEY_UP_GPIO_PIN)==KEY_ON )
		{
			int count=5;
			while(count)
			{
			LED0_ON;
			LED1_OFF;       //??2?А?￡?
			Delay_us(1000000);
			LED0_OFF;
			LED1_ON;
			Delay_us(1000000);
			count--;
			}
			LED0_OFF;
			LED1_OFF;
		}
		else
		{
			;
		}
	}
}
