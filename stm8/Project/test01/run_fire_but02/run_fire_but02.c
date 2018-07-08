#include "stm8s_delay.h"

uint8_t n; //инициализация переменной
uint32_t s=5000;
uint8_t b=4;

extern void pin_int(void) __interrupt(6)
{
    n=5;
    GPIOC->ODR |= 0xf8;
    if (b >= 4)
    {
        b=0;
    }
    else
    {
        b++;
    }
}

void Pin()  // настройка портов
{
    GPIOC->DDR |= 0xf8;
    GPIOC->CR1 |= 0xf8;
    GPIOC->ODR |= 0xf8;
  
    GPIOD->DDR |= 0b00000000;
    GPIOD->CR1 |= 0b00110000;
    GPIOD->CR2 |= 0b00110000;
    
    EXTI->CR1  |= 0b10000000;
}

void RunningUp()    //функция направление бегущиго огня с л->п
{
      GPIOC->ODR ^= 0x08 << n;
      delay_ms(s);
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
    delay_ms(s);
    GPIOC->ODR |= 0x80 >> n;
    n++;
    if ( n>=5 )
            {
                n=0;
            }
}

void runLdUp()    //функция переполняющийся бегущий огонь п->л
{
    GPIOC->ODR ^= 0x08 << n;;
        delay_ms(s);
        n++;
            if ( n>=5 )
            {
                n = 0;
            } 
}

void runLdDn()    //функция переполняющийся бегущий огонь п->л
{
  GPIOC->ODR ^= 0x80 >> n;;
        delay_ms(s);
        n++;
            if (n>=5)
            {
                n = 0;
            }   
}

int main( void )    //основная программа
{
    Pin();
    rim();
    
    while(1)    //бесконечный цикл
    {
       switch(b)
       {
           case 0:
               RunningUp();
               break;
           case 1:
               RunningDn();
               break;
           case 2:
               runLdUp();
               break;
           case 3:
               runLdDn();
               break;
           default:
               GPIOC->ODR |= 0xf8;
    }
        
    }
    
}
        
