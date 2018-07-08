#include "stm8s.h"
#include "stm8s_gpio.h"


uint32_t delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
{
    t=500;
  while(t--);
  return t;
}


/*
 * GPIO_PIN_3 = 0x08 = 0b00001000 = 008 = 2^3
 * GPIO_PIN_4 = 0x10 = 0b00010000 = 016 = 2^4
 * GPIO_PIN_5 = 0x20 = 0b00100000 = 032 = 2^5
 * GPIO_PIN_6 = 0x40 = 0b01000000 = 064 = 2^6
 * GPIO_PIN_7 = 0x80 = 0b10000000 = 128 = 2^7
 */



uint32_t ms=0;
_Bool bs = 0;
_Bool bls = 0;
uint32_t msb = 0;

int main( void )    //установка портов и пинов
{
  GPIOC->DDR |= 0x10;   	//направление данных порта out-0; input-1
  GPIOC->CR1 |= 0x10;   	//установка подтягивающего резистора open-drain=0; push-pull=1
  GPIOC->ODR |= 0x10;   	//установка значения бита 0/1
   
  GPIOD->DDR |= 0x00;
  GPIOD->CR1 |= 0x10;
  GPIOD->CR2 |= 0x00;

  void button (uint32_t but)
    {
      
            if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>50) // фиксируем нажатие кнопки
            {
                bs=1;
                msb=ms;
                GPIOC->ODR ^= 0x00;
       
        
            }
    
            if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>50) // фиксируем отпускание  нажатие кнопки
            {
                bs=0;
                msb=ms;
                GPIOC->ODR ^= 0x10;
        
            }
     return but;       
     }
     
while(1)
{
     button(bls);
}    
         }
    
    
