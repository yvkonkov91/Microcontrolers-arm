#include "stm8s.h"


volatile uint16_t count;    //объявление переменной
    
extern void delay(void) __interrupt((uint8_t)23) //обработчик прерывания функции delay_ms
{
    if(count == 0)
     CFG->GCR   = 0x01;    //сброс флага AL
    else
        count--;    //дикримент переменной count
      TIM4->SR1   = 0x0; ////событие обновления не происходило
}


void TIM4_cfg() //настройка таймера
{
    TIM4->SR1   = 0x0;   //событие обновления не происходило
    TIM4->CR1  |= 0b00000101; // разрешение работы счётчика
    TIM4->IER  |= 1;    // прерывания по обновлению включены
    TIM4->PSCR |= 128; // установка предделителя 128
    TIM4->ARR  |= 128;    // значение автоперезагрузки
}

void delay_ms(uint16_t ms) //функция выдержки времени
{
    count = ms; //присвоить значение ms переменной count
    
    CFG->GCR   = 0x02; //установка флага AL
    TIM4_cfg(); //вызов функции настройки таймера
    wfi();  //уход в спящий режим
    //TIM4->CR1  = 0x0;   //остановка таймера
}


void pin_cfg()  //функция настройки GPIO
    {
        GPIOB->DDR |= 0b00100000;
        GPIOB->CR1 |= 0b00100000;
        //GPIOB->ODR |= 0b00100000;
    }

int main( void )    //установка портов и пинов
{ 
    
    CLK->CKDIVR |= 0; // коэффициент деления частоты HSI-генератора (16MHz)
    
    pin_cfg();  //функция настройки GPIO
    
    //rim(); // разрешение прерывания
    

  while(1)  //бесконечный цикл        
  {
      GPIOB->ODR ^=0b00100000;  //зажигаем светодиод
      delay_ms(5000);   //временная задержка
  }
  
  
}