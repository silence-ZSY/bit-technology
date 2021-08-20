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
//���ڱ���������ַ���
char str1[20];

// ADCת���ĵ�ѹֵͨ��MDA��ʽ����SRAM
extern __IO uint16_t ADC_ConvertedValue[RHEOSTAT_NOFCHANEL];

// �ֲ����������ڱ���ת�������ĵ�ѹֵ 	 
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
	//EXTI_Key_Config();    //������KEY1�����жϺ���ʱ��ʹ��
	printf("\r\n welcome ����KEY0��ʼ���� \r\n");
	while(1)
	{
		if( Key_Scan(KEY0_GPIO_PORT,KEY0_GPIO_PIN) == KEY_ON  )//��ⰴ���Ƿ���
		{
			printf("\r\n ���Կ�ʼ  ������\"LED \"����\"STICK \"��ʼ��Ӧ�Ĳ�����Ŀ \r\n");
			scanf("%s",str1);//΢���̵�Ĵ��ڵ�����������ķ��͸�ʽ��ʲô��
			                 //scanf��Ҫ�Կո�����ǻ��н���
							 //����΢���̵�Ĵ��ڵ���������ԭ��ʽ����
			                 //XCOM���ڵ������ַ���ʱ�Դ�һ�����У�
			if(strcmp(str1,str2)==0)
			{
				printf("\r\n ���յ�ָ��:%s ��ʼ%s���� ����KEY1�������� \r\n",str1,str1);
				BreathLed();
				return 0;
			}
			else if(strcmp(str1,str3)==0)
			{
				printf("\r\n ���յ�ָ��:%s ��ʼ%s���� ����KEY1�������� \r\n",str1,str1);
				Adc();
			}
		}

//        else if( Key_Scan(KEY2_GPIO_PORT,KEY2_GPIO_PIN) == KEY_ON  )
//		{
//			printf("\r\n %s���Խ��� ����KEY0��ʼ���� \r\n",str1);
//			LED0_OFF;
//			LED1_OFF;
//			//break;
//		}
//		else if( Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON  )
//		{   //KEY1 ����û��������ʧ�飬Ϊʲô?��Ϊ�������жϣ�
//		    //�ư��ˡ�������EXTI_Key_Config();�������������
//			//�����������EXTI�ж�Դ��KEY1�����ǽ���ע�͵��жϺ���
//			/*  ����KEY1��EXTIռ��  ����KEY1ȥѰ���жϺ���  
//			  ע�͵����жϺ������޷�ִ�У�����ͱ���޶���  */
//			LED0_TOGGLE;
//			LED1_TOGGLE;
//		}
		else
		{
			;
		}
	}
}



