#include "stm8s_delay.h"

uint8_t n; //инициализация переменной
uint32_t s=2000;
uint8_t b=4;

void pin_int(void) __interrupt(6)   //обработчик прерывания по порту D
{
    //if (GPIOD->IDR & (1<<1))
   // {
        n=5;
        GPIOC->ODR |= 0xf8;
        if (b>=4)
        {
        b=0;
        }
        else
            b++;
    //}
}

void if_0(void)  //функция условия
{
  n++;
      if ( n>=5 )
            {
             n=0;
            }  
}

/*
 * GPIO_PIN_3 = 0x08 = 0b00001000 = 008 = 2^3
 * GPIO_PIN_4 = 0x10 = 0b00010000 = 016 = 2^4
 * GPIO_PIN_5 = 0x20 = 0b00100000 = 032 = 2^5
 * GPIO_PIN_6 = 0x40 = 0b01000000 = 064 = 2^6
 * GPIO_PIN_7 = 0x80 = 0b10000000 = 128 = 2^7
 */

void Pin()  // настройка портов
{
    GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
    GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
    //GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
  
    GPIOD->DDR |= 0b00000000;
    GPIOD->CR1 |= 0b01000010;
    GPIOD->CR2 |= 0b01000010;
    
    EXTI->CR1  |= 0b01000000;
}

void RunningUp()    //функция направление бегущиго огня с л->п
{
      GPIOC->ODR ^= 0x08 << n;
      delay_ms(s);
      GPIOC->ODR |= 0x08 << n;
      if_0();
}

void RunningDn()    //функция направление бегущиго огня с п->л
{
    GPIOC->ODR ^= 0x80 >> n;
    delay_ms(s);
    GPIOC->ODR |= 0x80 >> n;
    if_0();
}

void runLdUp()    //функция переполняющийся бегущий огонь п->л
{
    GPIOC->ODR ^= 0x08 << n;;
        delay_ms(s);
        if_0();
}

void runLdDn()    //функция переполняющийся бегущий огонь п->л
{
  GPIOC->ODR ^= 0x80 >> n;;
        delay_ms(s);
        if_0();
}

int main( void )    //основная программа
{
    Pin();
    //CLK->CKDIVR |= 0; // коэффициент деления частоты HSI-генератора (16MHz)
    rim();
    
    for(;;)    //бесконечный цикл
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
/*
./buttest.c: 9: if ((GPIOD->IDR & (1<<1))==(0<<1))
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x02
	jrne	00106$
	


./buttest.c: 9: if (GPIOD->IDR & (1<<1))
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x02
	jreq	00106$
	
	*/
