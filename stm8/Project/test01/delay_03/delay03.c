//#include "stm8s.h"
#include "stm8s_delay.h"

void pin_cfg()  //функция настройки GPIO
    {
        GPIOC->DDR |= (1<<3);
        GPIOC->CR1 |= (1<<3);
        GPIOC->ODR |= (1<<3);
    }

int main( void )    //установка портов и пинов
{ 
    CLK->CKDIVR |= (0<<4)|(0<<3)|(0<<2)|(0<<1)|(0<<0); // коэффициент деления частоты HSI-генератора (16MHz)
    
    pin_cfg();  //функция настройки GPIO
    
    rim(); // разрешение прерывания!
    

  while(1)  //бесконечный цикл        
  {
      GPIOC->ODR ^=(1<<3);  //зажигаем светодиод
      delay_ms(10000);   //временная задержка
  }
  
  
}