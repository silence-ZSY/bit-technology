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
	//Usart_SendString( DEBUG_USART, "Ұ��STM32F429����ͨ������");
	//printf("\r\n ����ͨ��printf�������� \r\n");
	Show_Message();
	while(1)
	{
	ch=getchar();
	printf("\r\n ���յ��ַ���%c \r\n",ch);
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
  printf("\r\n����һ��ͨ������ͨ��ָ�����LEDʵ�� \r\n");
  printf("ʹ��  USART1  ����Ϊ��%d 8-N-1 \r\n",DEBUG_USART_BAUDRATE);
  printf("������ӵ�ָ�����ƵƵ�����ָ�����£�\r\n");
  printf(" \r\n    0    ------    LED0���� \r\n");
  printf(" \r\n    1    ------    LED1���� \r\n");
}
