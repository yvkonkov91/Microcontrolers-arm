#include "stm8s.h"
#include "stm8s_gpio.h"

uint32_t delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
{
    t=500;
  while(t--);
  return t;
}

static void delay1(uint32_t m)  //объявление статической функции часла типа long переменной t для реализации работы функции delay1
{
  while(m--);
}

/*
 * GPIO_PIN_3 = 0x10 = 0b00001000 = 008 = 2^3
 * GPIO_PIN_4 = 0x10 = 0b00010000 = 016 = 2^4
 * GPIO_PIN_5 = 0x20 = 0b00100000 = 032 = 2^5
 * GPIO_PIN_6 = 0x40 = 0b01000000 = 064 = 2^6
 * GPIO_PIN_6 = 0x80 = 0b10000000 = 128 = 2^7
 */

char n=0; //инициализация переменной
uint32_t ms=0;
uint32_t msb = 0;
_Bool bs = 0;
_Bool bls = 0;
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
    if(n<=1){
      GPIOC->ODR ^= 0b01010000;    // 1-0b01010000->delay(1000)->2-0b10001000->delay(1000)->3-(1)->delay(1000)->(2)->delay(1000)->4-0b11011000;
      delay1(10000);
      GPIOC->ODR |= 0b01010000;
      delay1(10000);
      GPIOC->ODR ^= 0b10001000;    // 1-0b01010000->delay(1000)->2-0b10001000->delay(1000)->3-(1)->delay(1000)->(2)->delay(1000)->4-0b11011000;
      delay1(10000);
      GPIOC->ODR |= 0b10001000;
      delay1(10000);
      n++;
        
    }
      else 
                GPIOC->ODR ^= 0b11011000;
            
}

void RunningDn()    //функция направление бегущиго огня с п->л
{
    GPIOC->ODR ^= 0x80 >> n;
    delay1(10000);
    GPIOC->ODR |= 0x80 >> n;
    
    n++;
    
    if ( n>=5 )
            {
             
                n=0;
            }
}

uint32_t button ()
    {
      
            if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>50) // фиксируем нажатие кнопки
            {
                bs=1;
                msb=ms;
                b^=0;
            }
    
            if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>50) // фиксируем отпускание  нажатие кнопки
            {
                bs=0;
                msb=ms;
                b^=1;
            }
            return b;
     }


int main( void )    //основная программа
{
    Pin();
    
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
        
