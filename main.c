#include "stm32f4xx.h"
#include "string.h"
#include "stdio.h"
#include "./padres/led.h"
#include "./padres/key.h"
#include "./padres/debug_usart.h"
#include "./padres/systick.h"
#include "./padres/basic_tim.h"
#include "./padres/exti.h"
#include "./padres/my_pwm.h"
#include "./padres/my_adc.h"

//---------------------------------------------------//
//用于保存输入的字符串
char str1[20];

// ADC转换的电压值通过MDA方式传到SRAM
extern __IO uint16_t ADC_ConvertedValue[RHEOSTAT_NOFCHANEL];

// 局部变量，用于保存转换计算后的电压值 	 
float ADC_ConvertedValueLocal[RHEOSTAT_NOFCHANEL]={0}; 

int main(void)
{
	char str2[20]="LED";
	char str3[20]="STICK";
	LED_GPIO_Config();
	Key_GPIO_Config();
	SysTick_Init();
	Debug_USART_Config();
	Rheostat_Init();	
	//EXTI_Key_Config();    //设置用KEY1触发中断函数时候使用
	printf("\r\n welcome 按下KEY0开始测试 \r\n");
	while(1)
	{
		if( Key_Scan(KEY0_GPIO_PORT,KEY0_GPIO_PIN) == KEY_ON  )//检测按键是否按下
		{
			printf("\r\n 测试开始  请输入\"LED \"或者\"STICK \"开始对应的测试项目 \r\n");
			scanf("%s",str1);//微软商店的串口调试助手输入的发送格式是什么？
			                 //scanf需要以空格或者是换行结束
							 //所以微软商店的串口调试助手是原格式发送
			                 //XCOM串口调试助手发送时自带一个换行？
			if(strcmp(str1,str2)==0)
			{
				printf("\r\n 接收到指令:%s 开始%s测试 按下KEY1结束测试 \r\n",str1,str1);
				BreathLed();
				return 0;
			}
			else if(strcmp(str1,str3)==0)
			{
				printf("\r\n 接收到指令:%s 开始%s测试 按下KEY1结束测试 \r\n",str1,str1);
				Adc();
			}
		}

//        else if( Key_Scan(KEY2_GPIO_PORT,KEY2_GPIO_PIN) == KEY_ON  )
//		{
//			printf("\r\n %s测试结束 按下KEY0开始测试 \r\n",str1);
//			LED0_OFF;
//			LED1_OFF;
//			//break;
//		}
//		else if( Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON  )
//		{   //KEY1 按键没坏，作用失灵，为什么?因为分配了中断？
//		    //破案了。来自于EXTI_Key_Config();这个函数的作用
//			//这个函数连接EXTI中断源到KEY1，但是仅仅注释掉中断函数
//			/*  会变成KEY1被EXTI占用  按下KEY1去寻找中断函数  
//			  注释掉的中断函数又无法执行，结果就变成无动作  */
//			LED0_TOGGLE;
//			LED1_TOGGLE;
//		}
		else
		{
			;
		}
	}
}



