#include "stm8s.h"
#include "stm8s_gpio.h"

static void delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
{
  while(t--);
}

/*
 * GPIO_PIN_3 = 0x10 = 0b00001000 = 008 = 2^3
 * GPIO_PIN_4 = 0x10 = 0b00010000 = 016 = 2^4
 * GPIO_PIN_5 = 0x20 = 0b00100000 = 032 = 2^5
 * GPIO_PIN_6 = 0x40 = 0b01000000 = 064 = 2^6
 * GPIO_PIN_6 = 0x80 = 0b10000000 = 128 = 2^7
 */

char n; 
//int a=0xf8;   //0b11111000;
//int b=0x08;   //0b00001000;

int main( void )    //установка портов и пинов
{
  GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
  GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
  GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
  
  GPIOD->DDR |= 0x00;
  GPIOD->CR1 |= 0x10;
  GPIOD->CR2 |= 0x00;
  
 while(1){
    if (GPIOD->IDR & 0x10) // проверяем нажатие кнопки
    
    {
        GPIOC->ODR ^= 0x08 << n;
        delay(10000);
        
        GPIOC->ODR |= 0x08 << n;
      
        
        n++;
        
        
            if ( n>=5 )
            {
             
                n=0;
            }
    }           
    
    
            else
            
            {
        GPIOC->ODR ^= 0x80 >> n;
        delay(10000);
        
        GPIOC->ODR |= 0x80 >> n;

        
        n++;
        
        
            if ( n>=5 )
            {
             
                n=0;
            }
            }
            
    
         }
}
        
