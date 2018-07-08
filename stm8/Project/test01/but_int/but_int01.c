#include "stm8s.h"
//#include "stm8s_delay.h"

static void delay(unsigned int t)
{
    while(t--);
}

extern void pin_int(void) __interrupt(4)
{
  if(GPIOD->IDR & 0b00010000)
  {
      GPIOB->ODR ^= 0b00100000;
  }
else  {
    GPIOB->ODR |= 0b00100000;
    
}
  
}

void pin_cfg()  //функция настройки GPIO
    {
        GPIOB->DDR |= 0b00100000;
        GPIOB->CR1 |= 0b00100000;
        GPIOD->CR1 |= 0b00010000;
        GPIOD->CR2 |= 0b00010000;
        GPIOB->ODR |= 0b00100000;
        EXTI->CR1 |= 0b11000000;
    }
    
int main( void )    //установка портов и пинов
{ 
    
    CLK->CKDIVR |= 4; // коэффициент деления частоты HSI-генератора (16MHz)
    
    pin_cfg();  //функция настройки GPIO
    
    rim(); // разрешение прерывания!
    

  while(1)  //бесконечный цикл        
  {
      delay(5000);
      GPIOB->ODR ^= 0b00100000;
  }
}