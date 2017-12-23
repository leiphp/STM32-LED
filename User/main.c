#include "stm32f10x.h"
#include "led.h"

void delay(u32 i)
{
	while(i--);
}

int main()
{
	LED_Init();
	while(1)
	{
		//GPIO_ResetBits(GPIOC,GPIO_Pin_0);//奇数灯位一直亮
		GPIO_ResetBits(GPIOC,GPIO_Pin_0);
		delay(0xFFFFF);
		GPIO_SetBits(GPIOC,GPIO_Pin_0);
		delay(0xFFFFF);
		
		GPIO_ResetBits(GPIOC,GPIO_Pin_1);//偶数灯位闪烁
		delay(0xFFFFF);
		GPIO_SetBits(GPIOC,GPIO_Pin_1);
		delay(0xFFFFF);
		
		//GPIO_ResetBits(GPIOC,GPIO_Pin_2);
		GPIO_ResetBits(GPIOC,GPIO_Pin_2);
		delay(0xFFFFF);
		GPIO_SetBits(GPIOC,GPIO_Pin_2);
		delay(0xFFFFF);
		
		GPIO_ResetBits(GPIOC,GPIO_Pin_3);
		delay(0xFFFFF);
		GPIO_SetBits(GPIOC,GPIO_Pin_3);
		delay(0xFFFFF);
		
		//GPIO_ResetBits(GPIOC,GPIO_Pin_4);
		GPIO_ResetBits(GPIOC,GPIO_Pin_4);
		delay(0xFFFFF);
		GPIO_SetBits(GPIOC,GPIO_Pin_4);
		delay(0xFFFFF);
		
		GPIO_ResetBits(GPIOC,GPIO_Pin_5);
		delay(0xFFFFF);
		GPIO_SetBits(GPIOC,GPIO_Pin_5);
		delay(0xFFFFF);
		
		//GPIO_ResetBits(GPIOC,GPIO_Pin_6);
		GPIO_ResetBits(GPIOC,GPIO_Pin_6);
		delay(0xFFFFF);
		GPIO_SetBits(GPIOC,GPIO_Pin_6);
		delay(0xFFFFF);
		
		GPIO_ResetBits(GPIOC,GPIO_Pin_7);
		delay(0xFFFFF);
		GPIO_SetBits(GPIOC,GPIO_Pin_7);
		delay(0xFFFFF);
		
		
	}
}
