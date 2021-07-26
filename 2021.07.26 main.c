#include "stm32f4xx.h"
#include "./led/led.h"
#include "./usart/debug_usart.h"

static void Show_Message(void);

int main(void)
{
	char ch;
	LED_GPIO_Config();
	Debug_USART_Config();
	//Usart_SendByte( DEBUG_USART, 'A');
	//Usart_SendHalfWord( DEBUG_USART, 65535);
	//Usart_SendString( DEBUG_USART, "野火STM32F429串口通信例程");
	//printf("\r\n 串口通信printf函数测试 \r\n");
	Show_Message();
	while(1)
	{
	ch=getchar();
	printf("\r\n 接收到字符：%c \r\n",ch);
	switch(ch)
	{
		case '1':
		LED1_ON;LED0_OFF;
		break;
		case '0':
		LED0_ON;LED1_OFF;
		break;
		default:
		Show_Message();
		break;
	}
	}
}

static void Show_Message(void)
{
  printf("\r\n这是一个通过串口通信指令控制LED实验 \r\n");
  printf("使用  USART1  参数为：%d 8-N-1 \r\n",DEBUG_USART_BAUDRATE);
  printf("开发板接到指令后控制灯的亮灭，指令如下：\r\n");
  printf(" \r\n    0    ------    LED0点亮 \r\n");
  printf(" \r\n    1    ------    LED1点亮 \r\n");
}
