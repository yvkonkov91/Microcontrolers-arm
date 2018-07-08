#include "stm8s.h"
#include "stm8s_gpio.h"

static void delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
{
  while(t--);
}

int i=0, n=2; //объявление переменной	
int P[]={GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6}; //объявление массива


int main( void )    //установка портов и пинов
{
  GPIOC->DDR |= GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6;	//направление данных порта out-0; input-1
  GPIOC->CR1 |= GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6;	//установка подтягивающего резистора open-drain=0; push-pull=1
  //GPIOC->ODR |= GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6;	//установка значения бита 0/1
  
 

for(;;)            
  {
	for(i=0; i<n; i++)           //цикл for, перебока массива PIN
	{
	  delay(50000);
	  GPIOC->ODR |= P[i];
        }
        delay(50000);               //задержка цикла for
        GPIOC->ODR |=GPIO_PIN_6;    //установка PIN_6=0
  }
  }
 