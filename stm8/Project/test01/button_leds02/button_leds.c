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



uint32_t ms=0, msb = 0, i;
_Bool bs = 0;
char n;

void PIN()
{
  GPIOC->DDR |= 0xf8;   	//направление данных порта out-0; input-1
  GPIOC->CR1 |= 0xf8;   	//установка подтягивающего резистора open-drain=0; push-pull=1
  GPIOC->ODR |= 0xf8;   	//установка значения бита 0/1
   
  GPIOD->DDR |= 0x00;
  GPIOD->CR1 |= 0x10;
  GPIOD->CR2 |= 0x00;
   
}


 void running()
 {
     if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>50) // проверяем нажатие кнопки
     {
         bs=1;
         msb=ms;
         
         GPIOC->ODR ^= 0x08 << n;
         
for (i=0;i<=5000;i++);{}

         
         GPIOC->ODR |= 0x08 << n;
        
         n++;
         if ( n>=5 )
         {
             n=0;
             
        }
    }
    
    if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>50) // фиксируем отпускание  нажатие кнопки
    {
        bs=0;
        msb=ms;
        
        GPIOC->ODR ^= 0x80 >> n;

for (i=0;i<=5000;i++);{}
        
        GPIOC->ODR |= 0x80 >> n;
       
        
        n++;
        
        if ( n>=5 )
        {
            n=0;
            
        }
        
    }
 }

int main(void)
{
    PIN();
    
    while(1)
    {
        running();
        
    }
}
    
    
