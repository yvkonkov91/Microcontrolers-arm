#include "stm8s.h"
#include "stm8s_delay.h"
#include "stm8s_adc1.h"
#include "stm8s_uart.h"

volatile uint16_t adc2=0;


void pin_cfg()  //функция настройки GPIO
    {
        GPIOB->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта B
        GPIOB->CR1 |= 0b00100000;   //устанавливаем подтяжку пин 5 порта B
        GPIOB->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
        
        GPIOD->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта D TX
        GPIOD->CR1 |= 0b00100000;   //без подтяжки
        GPIOD->CR2 |= 0b00000000;   //без прерывания на вход / минимальная скорость на выход
        
        GPIOC->DDR |= 0b00000000;   //устанавливаем на выход пин 5 порта B
        GPIOC->CR1 |= 0b00000000;   //устанавливаем подтяжку пин 5 порта B
        GPIOC->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
    }
    
void adc1_cfg()
{

    ADC1->TDR  |=0b00010000 //отключение триггера Шмидта
    CLK->PCKENR2 |= 0b00001000; //тактирование модуля ADC1
    ADC1->CR1 |=0b00000001; //включение модуля ADC1
    
}


extern void adc1_interrupt(void) __interrupt(22)   // Обработчик прерываний по приему UART
{
    if ((ADC1->SR & ADC_SR_AWD) != 0) 
 {
   . . .
   ADC1->SR &= ~ADC_SR_AWD;  
 }

    //uart_tx_byte(data); //Отсылаем принятый байт обратно echo
}

/*INTERRUPT_HANDLER(IRQ_Handled_ADC1,22)
{
    adc2=ADC1_GetConversionValue();

    ADC1_ClearITPendingBit(0x080);
}*/


int main( void )
{
    pin_cfg();
   
    clk_cfg();
    
    tim4_cfg();
    
    uart1_cfg();
    
    adc1_cfg();
    
    
    // ------------ ADC1 -------------------
    ADC1_Init(ADC1_CONVERSIONMODE_SINGLE, ADC1_CHANNEL_2, ADC1_PRESSEL_FCPU_D8,
            ADC1_EXTTRIG_TIM,DISABLE, ADC1_ALIGN_RIGHT,  ADC1_SCHMITTTRIG_CHANNEL2, DISABLE);
    ADC1_ITConfig(ADC1_IT_EOCIE ,ENABLE);
   
    
    rim();

    for(;;)
    {
        GPIOB->ODR ^=0b00100000;  //зажигаем светодиод
        
        ADC1_StartConversion();
        
        delay_ms(500);//временная задержка
        
        uart_tx_data("value: ",adc2,4);
        
        //printf("value: %u\n",adc2);
        
        delay_ms(500);
    }
}