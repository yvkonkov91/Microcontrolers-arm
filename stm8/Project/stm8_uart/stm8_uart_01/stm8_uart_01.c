#include "stm8s_delay.h"
#include "stm8s_uart.h"

void pin_cfg()  //функция настройки GPIO
    {
        GPIOB->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта B
        GPIOB->CR1 |= 0b00100000;   //устанавливаем подтяжку пин 5 порта B
        GPIOB->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
        
        GPIOD->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта D TX
        GPIOD->CR1 |= 0b00000000;   //без подтяжки
        GPIOD->CR2 |= 0b00000000;   //без прерывания на вход / минимальная скорость на выход
        
    }
    
int main( void )
{
    pin_cfg();
    
    clk_cfg();
    
    tim4_cfg();
    
    uart1_cfg();

    rim();  //разрешаем глобальное прерывание
    
    
    
    for(;;)
    {
    
        GPIOB->ODR ^=0b00100000;  //зажигаем светодиод
        delay_ms(5000);   //временная задержка
        
        if (GPIOB->ODR ==0b00100000)
        {
        //uart_tx_data("value: %u\n",data);
        uart_tx_data("on, ");
        }
        
        else uart_tx_data("off\r\n");//printf("value: %u\n",adc2);
    }
}