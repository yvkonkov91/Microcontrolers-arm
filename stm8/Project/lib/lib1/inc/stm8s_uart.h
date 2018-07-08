#include "stm8s.h"

volatile unsigned char IT;

void clk_cfg()
{
    CLK->SWR     |= 0xE1;    //выбран основной источник тактиования HSI
    CLK->CKDIVR  |= 0x0; // коэффициент деления частоты HSI-генератора (2MHz)
    CLK->PCKENR1 |= 0b00010100; //включение модуля тактиования UART1 & TIM4
}

void uart1_cfg()
{
     UART1->CR1  |= 0b00000000;   //установка колличества бит передачи 8/9
     UART1->CR2  |= 0b00001100;   //разрешение работы RX & TX
     UART1->CR3  |= 0b00000000;   //STOP bits 00 - 1 stop bit
     
     UART1->BRR2 |= 0x0;  //сначало записываем скорость передачи в BRR2! / 
     UART1->BRR1 |= 0x0d;  //записываеться значение только после записи значения в BRR2! /9600
}


void clearStr(unsigned char* s)
{
	for(IT=0;IT<32;IT++)
        {
        s[IT]=0;
        }
}
/*
void writeSerial(char* str)
{
	IT=0; while (str[IT] != 0 && IT < 32)
	{
                while(UART1->SR ==(0<<7)){};
                UART1->DR = str[IT];
		IT++;
        }
}*/


// Отправка байта
void uart_tx_byte(unsigned char c)
{
    while(UART1->SR ==(0<<7));
    UART1->DR = c;
}
// Отправка массива данных

void uart_tx_data(unsigned char *s)
{
    while(*s != 0) uart_tx_byte(*s++);
}

void uart_tx_int(uint16_t c)//    Отправка числа от 0000 до 9999
{
uint16_t temp;
c=c%100000000;
temp=c/100;
uart_tx_byte(temp/10+'0');
uart_tx_byte(temp%10+'0');
temp=c%100;
uart_tx_byte(temp/10+'0');
uart_tx_byte(temp%10+'0');
}

// Прием байта
unsigned char uart_rx_byte()
{
    while(UART1->SR ==(0<<7));
    return UART1->DR;
}
 
 
// Прием массива данных

/*void uart_rx_data(unsigned char *sx)
{
    while(*sx != 0) uart_rx_byte(*sx++);
}*/

/*void uart_rx_data(unsigned char * data, unsigned char len){
  while(len--){
      *data++ = uart_rx_byte();
  }
}*/