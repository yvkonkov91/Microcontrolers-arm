//#include "stm8s.h"
#include "stm8s_delay.h"

/*uint8_t delay(uint8_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
{
    t=32;
  while(t--);
  return t;
}*/

/*
 * GPIO_PIN_3 = 0x10 = 0b00001000 = 008 = 2^3
 * GPIO_PIN_4 = 0x10 = 0b00010000 = 016 = 2^4
 * GPIO_PIN_5 = 0x20 = 0b00100000 = 032 = 2^5
 * GPIO_PIN_6 = 0x40 = 0b01000000 = 064 = 2^6
 * GPIO_PIN_6 = 0x80 = 0b10000000 = 128 = 2^7
 */

char n; //инициализация переменной
uint8_t ms1=0;
uint8_t msb = 0;
_Bool bs = 0;
_Bool b;


void Pin()  // настройка портов
{
    GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
    GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
    GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
  
    GPIOD->DDR |= 0x00;
    GPIOD->CR1 |= 0x10;
    GPIOD->CR2 |= 0x00;
}

void RunningUp()    //функция направление бегущиго огня с л->п
{
      GPIOC->ODR ^= 0x08 << n;
      delay_ms(50000);
      GPIOC->ODR |= 0x08 << n;
      
      n++;
      
      if ( n>=5 )
            {
             
                n=0;
            }
}

void RunningDn()    //функция направление бегущиго огня с п->л
{
    GPIOC->ODR ^= 0x80 >> n;
    delay_ms(500);
    GPIOC->ODR |= 0x80 >> n;
    
    n++;
    
    if ( n>=5 )
            {
             
                n=0;
            }
}

uint8_t button ()
    {
    sim();
            if ((GPIOD->IDR & 0x10) ==0x00 && !bs /*&& (delay(ms1)-msb)>16*/) // фиксируем нажатие кнопки
            {
                bs=1;
                msb=ms1;
                b^=0;
            }
    
            if ((GPIOD->IDR & 0x10) ==0x10 && bs /*&& (delay(ms1)-msb)>16*/) // фиксируем отпускание  нажатие кнопки
            {
                bs=0;
                msb=ms1;
                b^=1;
            }
    rim();
            return b;
     }


int main( void )    //основная программа
{
    CLK->CKDIVR |= 0; // коэффициент деления частоты HSI-генератора (16MHz)
    Pin();
    rim(); // разрешение прерывания!
    
    while(1)    //бесконечный цикл
    {
       button(); 
        
        if (b==0) // проверяем нажатие кнопки
        {
            RunningUp();
        }
        
        else
        {
            RunningDn();
        }
        
    }
    
}
        
