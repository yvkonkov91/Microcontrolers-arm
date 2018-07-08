#include "stm8s_delay.h"
#include "stm8s_uart.h"

unsigned char rx;

void pin_cfg()  //функция настройки GPIO
    {
        GPIOB->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта B
        GPIOB->CR1 |= 0b00100000;   //устанавливаем подтяжку пин 5 порта B
        GPIOB->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
        
        GPIOD->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта D TX
        GPIOD->CR1 |= 0b00000000;   //без подтяжки
        GPIOD->CR2 |= 0b00000000;   //без прерывания на вход / минимальная скорость на выход
        
    }
    
extern void uart1_interrupt(void) __interrupt(18)   // Обработчик прерываний по приему UART
{
   /* unsigned char tmp;
  //если причина прерывания окончание приема
  if((UART1->SR & (1<<5))!=0)
  {
    tmp = UART1->DR;                   //прочитать принятый байт
                              //что-то делаем
  }*/
 
  //если причина прерывания  окончание передачи
  if((UART1->SR & (1<<6))!=0)
  {
    //uart_tx_data("Hello!\r\n");
    UART1->SR ^= (1<<6);  
    //UART1->CR2 |= (1<<6);
    //uart_tx_data("Hello!\r\n");
  }
    
}
    
int main( void )
{
    pin_cfg();
    
    clk_cfg();
    
    tim4_cfg();
    
    uart1_cfg();

    rim();  //разрешаем глобальное прерывание
    
    //uart_tx_data("Hello!\r\n");
    
    for(;;)
    {
        GPIOB->ODR ^= 0b00100000;
        delay_ms(5000);
        
        //rx=uart_rx_byte();
        //uart_tx_byte(rx);
        //uart_tx_data("\r\n");
    }
}