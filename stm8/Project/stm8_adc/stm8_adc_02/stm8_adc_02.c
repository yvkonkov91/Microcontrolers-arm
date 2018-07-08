#include "stm8s.h"
#include "stm8s_delay.h"
#include "stm8s_uart.h"

//char buffer[32];
uint16_t adc;
//volatile unsigned char value;
//volatile unsigned char done;
/*static void delay(unsigned int t)
{
    while(t--);
}*/

/*extern void uart1_interrupt(void) __interrupt(18)   // Обработчик прерываний по приему UART
{
    char bf = UART1->DR;
    buffer[value]=bf;
    value++;
    
    if (bf == ':' || value >= 32)
    {
        value=0;
        done=1;
    }
}*/

void pin_cfg()  //функция настройки GPIO
    {
        GPIOB->DDR |= (1<<5);   //устанавливаем на выход пин 5 порта B
        GPIOB->CR1 |= (1<<5);   //устанавливаем подтяжку пин 5 порта B
        GPIOB->CR2 |= (0<<5);   //минимальная скорость на выход / без прерывания на вход
        GPIOB->ODR |= (1<<5);
        
        GPIOD->DDR |= (1<<5);   //устанавливаем на выход пин 5 порта D TX
        GPIOD->CR1 |= (0<<5);   //
        GPIOD->CR2 |= (0<<5);   //без прерывания на вход / минимальная скорость на выход
        GPIOD->ODR |= (1<<5);
        
        GPIOC->DDR |= (0<<4);   //устанавливаем на выход пин 5 порта C
        GPIOC->CR1 |= (0<<4);   //устанавливаем подтяжку пин 5 порта C
        GPIOC->CR2 |= (0<<4);   //минимальная скорость на выход / без прерывания на вход
        GPIOC->ODR |= (1<<4);
        //ADC1->TDR |=0b00001000; //отключение триггера Шмидта 
    }
    
void mode()
{
    pin_cfg();

    uart1_cfg();

    clk_cfg();

    tim4_cfg();

    rim();
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

int main(void)
{
    mode();
    uart_tx_data("\n\r");
    uart_tx_data("stm8s -> ok!\n\r");
    //adc=adc1_r_cfg(2);
    //done=0;
    
    for(;;)
      {
          /*GPIOB->ODR ^= (1<<5);
          //writeSerial(adc);
          //clearStr(buffer);
          GPIOB->ODR |= (1<<5);
          done=0;*/
          adc=adc1_r_cfg(2);
          uart_tx_data("Volum: ");
          uart_tx_int(adc);
          uart_tx_data("\n\r");
          clearStr("");
          GPIOB->ODR ^= (1<<5);
          delay_ms(adc*10+100);
       }
}