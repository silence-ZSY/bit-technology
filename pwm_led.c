/**
  ******************************************************************************
  * @file    bsp_breath_led.c
  * @author  STMicroelectronics
  * @version V1.0
  * @date    2015-xx-xx
  * @brief   ȫ��LED������
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Ұ��  STM32 F429 ������  
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "./padres/pwm_led.h"


 /**
  * @brief  ����TIM1�������PWMʱ�õ���I/O
  * @param  ��
  * @retval ��
  */
static void TIMx_GPIO_Config(void) 
{
		/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*����LED��ص�GPIO����ʱ��*/
		RCC_AHB1PeriphClockCmd ( PWM_TIM_GPIO_CLK, ENABLE); 

        //���˿����ø���ΪTIM1
		GPIO_PinAFConfig(PWM_LED0_GPIO_PORT,PWM_LED0_PINSOURCE,PWM_LED0_AF); 
		GPIO_PinAFConfig(PWM_LED1_GPIO_PORT,PWM_LED1_PINSOURCE,PWM_LED1_AF); 	
		/*PWM_LED0*/															   
		GPIO_InitStructure.GPIO_Pin = PWM_LED0_PIN;	
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;    
        GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  	    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz; 
		GPIO_Init(PWM_LED0_GPIO_PORT, &GPIO_InitStructure);	
    
     	/*PWM_LED1*/															   
		GPIO_InitStructure.GPIO_Pin = PWM_LED1_PIN;	
    	GPIO_Init(PWM_LED1_GPIO_PORT, &GPIO_InitStructure);	
    					
}


/**
  * @brief  ����PWM_TIMx�����PWM�źŵ�ģʽ�������ڡ�����
  * @param  ��
  * @retval ��
  */
static void TIM_Mode_Config(void)
{
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	TIM_OCInitTypeDef  TIM_OCInitStructure;


	// ����TIMx_CLK,x[2,3,4,5] 
    PWM_TIM_APBxClock_FUN(PWM_TIM_CLK, ENABLE); 
	
    /* �ۼ� TIM_Period�������һ�����»����ж�*/		 
    TIM_TimeBaseStructure.TIM_Period = 256-1;       //����ʱ����0������255����Ϊ256�Σ�Ϊһ����ʱ����
	
	//��ʱ��ʱ��ԴTIMxCLK = 2 * PCLK1  
    //				PCLK1 = HCLK / 4 
    //				=> TIMxCLK = HCLK / 2 = SystemCoreClock /2
	// ��ʱ��Ƶ��Ϊ = TIMxCLK/(TIM_Prescaler+1) = (SystemCoreClock /2)/((SystemCoreClock/2)/1000000)*30 = 1000000/30 = 1/30MHz
  
	/*������ʱ������TIM_Prescaler����Ч�������ü��ɣ��ж�����С ����˸�죬������˸����*/
	TIM_TimeBaseStructure.TIM_Prescaler = ((SystemCoreClock/2)/1000000)*30-1;	    
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1 ;	 //����ʱ�ӷ�Ƶϵ��������Ƶ(�����ò���)
    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //���ϼ���ģʽ
  	
	// ��ʼ����ʱ��TIMx, x[2,3,4,5]
	TIM_TimeBaseInit(PWM_TIM, &TIM_TimeBaseStructure);	
	
	
	/*PWMģʽ����*/
	/* PWM1 Mode configuration: Channel1 */
    TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1;	    		//����ΪPWMģʽ1
    TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;	//ʹ�����
    TIM_OCInitStructure.TIM_Pulse = 0;	  														//���ó�ʼPWM������Ϊ0	
    TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low;  	    //����ʱ������ֵС��CCR_ValʱΪ�͵�ƽ LED����
 
    //ʹ��ͨ��  
    PWM_LED0_TIM_OCxInit(PWM_TIM, &TIM_OCInitStructure);	 							
	/*ʹ��ͨ������*/
	PWM_LED0_TIM_OCxPreloadConfig(PWM_TIM, TIM_OCPreload_Enable);
	
	//ʹ��ͨ��  
	PWM_LED1_TIM_OCxInit(PWM_TIM, &TIM_OCInitStructure);	 
	/*ʹ��ͨ������*/
	PWM_LED1_TIM_OCxPreloadConfig(PWM_TIM, TIM_OCPreload_Enable);



	TIM_ARRPreloadConfig(PWM_TIM, ENABLE);			//ʹ��TIM���ؼĴ���ARR
	
	// ʹ�ܼ�����
	TIM_Cmd(PWM_TIM, ENABLE);																		


}


 /**
  * @brief  ����RGB LED����ɫ
	* @param  rgb:Ҫ����LED��ʾ����ɫֵ��ʽRGB888
  * @retval ��
  */
void SetRGBPWM(uint32_t rgb)
{
	//������ɫֵ�޸Ķ�ʱ���ıȽϼĴ���ֵ
	PWM_TIM->PWM_LED0_CCRx = (uint8_t)(rgb>>16);			//R
	PWM_TIM->PWM_LED1_CCRx = (uint8_t)(rgb>>8);	  //G     
	PWM_TIM->PWM_BLUE_CCRx = (uint8_t)rgb;						//B
}

 /**
  * @brief  ����RGB LED����ɫ
	* @param  r\g\b:Ҫ����LED��ʾ����ɫֵ
  * @retval ��
  */
void SetPWMValue(uint8_t r,uint8_t g,uint8_t b)
{
	//������ɫֵ�޸Ķ�ʱ���ıȽϼĴ���ֵ
	PWM_TIM->PWM_LED0_CCRx = r;	
	PWM_TIM->PWM_LED1_CCRx = g;	  
	PWM_TIM->PWM_BLUE_CCRx = b;	
}


/**
  * @brief  ��ʼ��������
  * @param  ��
  * @retval ��
  */
void PWMLED_Config(void)
{

	TIMx_GPIO_Config();
	
	TIM_Mode_Config();
	
	//�ϵ��Ĭ����ʾ
	SetPWMValue(0xff,0xff,0xff);

}

/*********************************************END OF FILE**********************/
