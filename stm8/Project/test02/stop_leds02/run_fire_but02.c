#include "stm8s_delay.h"


/*
 * GPIO_PIN_3 = 0x10 = 0b00001000 = 008 = 2^3
 * GPIO_PIN_4 = 0x10 = 0b00010000 = 016 = 2^4
 * GPIO_PIN_5 = 0x20 = 0b00100000 = 032 = 2^5
 * GPIO_PIN_6 = 0x40 = 0b01000000 = 064 = 2^6
 * GPIO_PIN_6 = 0x80 = 0b10000000 = 128 = 2^7
 */

uint8_t n=0; //инициализация переменной
uint16_t adc;

void Pin()  // настройка портов
{
  
    GPIOC->DDR |= 0b11111000;
    GPIOC->CR1 |= 0b11111000;
    GPIOC->ODR |= 0b11111000;
    
    GPIOD->DDR |= (0<<2);   //устанавливаем на выход пин 5 порта D
    GPIOD->CR1 |= (0<<2);   //устанавливаем подтяжку пин 5 порта D
    GPIOD->CR2 |= (0<<2);   //минимальная скорость на выход / без прерывания на вход
    //GPIOD->ODR |= (1<<2);
    
    GPIOB->DDR |= 0b00000000;
    GPIOB->CR1 |= 0b00100000;
    GPIOB->CR2 |= 0b00000000;
    
}

void clearPin()
{
  GPIOC->ODR = 0b11111000;
}

uint16_t adc1_r_cfg(uint8_t channel) 
{
     uint16_t val=0;
     //использование АЦП в режиме одиночного преобразования
     CLK->PCKENR2 |= 0b00001000; //тактирование модуля ADC1
     ADC1->CSR |= ((0x0F)&channel); //выбор канала
     ADC1->CR2 |= (1<<3);   // номер канала преобразования АЦП
     ADC1->CR1 |= (1<<0);   //включение АЦП 
     ADC1->CR1 |= (0<<1);   // одиночное преобразование
     while(((ADC1->CSR)&(1<<7))== 0);   // пока не завершено преобразование
     val |= (uint8_t)ADC1->DRL;    //запись результата в переменную val из нижнего регистра
     val |= (uint8_t)ADC1->DRH<<8;    //запись результата в переменную val из верхнего регистра
     ADC1->CR1 &= ~(1<<0); // ADC Stop Conversion
     val &= 0x03ff;
     return val;
}

void RunningUp()
{
    if(n<12)
    {
       GPIOC->ODR |= 0b01110111;
       GPIOC->ODR ^= 0b10101111;
       delay_ms(adc);
       GPIOC->ODR |= 0b10101111;
       GPIOC->ODR ^= 0b01110111;
       delay_ms(adc-n*64);
       n++;
    }
    else GPIOC->ODR =0b11011000;
}

void RunningDn()
{
    if(n<12)
    {
       GPIOC->ODR ^= 0b11011000;
       delay_ms(adc-n*64);
       //clearPin();
       n++;
    }
}


int main( void )    //основная программа
{
    Pin();
    tim4_cfg();
    rim();
    clearPin();
    adc=(adc1_r_cfg(3))*10;
    
    while(1)    //бесконечный цикл
    {
        
        if(GPIOB->IDR==0)
        {
                RunningUp();
        }
        else
                RunningDn();
    }
    
}