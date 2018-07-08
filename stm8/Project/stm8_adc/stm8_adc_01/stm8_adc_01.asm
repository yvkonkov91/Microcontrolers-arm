;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Wed May  2 13:28:48 2018
;--------------------------------------------------------
	.module stm8_adc_01
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _IRQ_Handled_ADC1
	.globl _pin_cfg
	.globl _uart_rx_data
	.globl _uart_rx_byte
	.globl _uart_tx_data
	.globl _uart_tx_byte
	.globl _uart1_cfg
	.globl _clk_cfg
	.globl _uart1_interrupt
	.globl _delay_ms
	.globl _tim4_cfg
	.globl _delay_interrupt
	.globl _GPIO_Init
	.globl _ADC1_ClearITPendingBit
	.globl _ADC1_GetConversionValue
	.globl _ADC1_StartConversion
	.globl _ADC1_ITConfig
	.globl _ADC1_Init
	.globl _ADC1_DeInit
	.globl _adc2
	.globl _count
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
_count::
	.ds 2
_adc2::
	.ds 2
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area INITIALIZED
;--------------------------------------------------------
; Stack segment in internal ram 
;--------------------------------------------------------
	.area	SSEG
__start__stack:
	.ds	1

;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area DABS (ABS)
;--------------------------------------------------------
; interrupt vector 
;--------------------------------------------------------
	.area HOME
__interrupt_vect:
	int s_GSINIT ;reset
	int 0x0000 ;trap
	int 0x0000 ;int0
	int 0x0000 ;int1
	int 0x0000 ;int2
	int 0x0000 ;int3
	int 0x0000 ;int4
	int 0x0000 ;int5
	int 0x0000 ;int6
	int 0x0000 ;int7
	int 0x0000 ;int8
	int 0x0000 ;int9
	int 0x0000 ;int10
	int 0x0000 ;int11
	int 0x0000 ;int12
	int 0x0000 ;int13
	int 0x0000 ;int14
	int 0x0000 ;int15
	int 0x0000 ;int16
	int 0x0000 ;int17
	int _uart1_interrupt ;int18
	int 0x0000 ;int19
	int 0x0000 ;int20
	int 0x0000 ;int21
	int _IRQ_Handled_ADC1 ;int22
	int _delay_interrupt ;int23
	int 0x0000 ;int24
	int 0x0000 ;int25
	int 0x0000 ;int26
	int 0x0000 ;int27
	int 0x0000 ;int28
	int 0x0000 ;int29
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME
	.area GSINIT
	.area GSFINAL
	.area GSINIT
__sdcc_gs_init_startup:
__sdcc_init_data:
; stm8_genXINIT() start
	ldw x, #l_DATA
	jreq	00002$
00001$:
	clr (s_DATA - 1, x)
	decw x
	jrne	00001$
00002$:
	ldw	x, #l_INITIALIZER
	jreq	00004$
00003$:
	ld	a, (s_INITIALIZER - 1, x)
	ld	(s_INITIALIZED - 1, x), a
	decw	x
	jrne	00003$
00004$:
; stm8_genXINIT() end
	.area GSFINAL
	jp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME
	.area HOME
__sdcc_program_startup:
	jp	_main
;	return from main will return to caller
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CODE
;	../lib/lib1/inc/stm8s_delay.h: 3: extern void delay_interrupt(void) __interrupt(23) //обработчик прерывания функции delay_ms таймера TIM4
;	-----------------------------------------
;	 function delay_interrupt
;	-----------------------------------------
_delay_interrupt:
;	../lib/lib1/inc/stm8s_delay.h: 5: if(count)
	ldw	x, _count+0
	jreq	00102$
;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
	ldw	x, _count+0
	decw	x
	ldw	_count+0, x
00102$:
;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = 0x00; ////событие обновления не происходило
	mov	0x5344+0, #0x00
	iret
;	../lib/lib1/inc/stm8s_delay.h: 9: void tim4_cfg() //настройка таймера
;	-----------------------------------------
;	 function tim4_cfg
;	-----------------------------------------
_tim4_cfg:
;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = 0x1;   //событие обновления не происходило
	mov	0x5344+0, #0x01
;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= 1;    // прерывания по обновлению включены
	bset	0x5343, #0
;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 128; // установка предделителя 128
	bset	0x5347, #7
;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки
	ldw	x, #0x5348
	ld	a, (x)
	or	a, #0x7c
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint16_t ms) //функция выдержки времени
;	-----------------------------------------
;	 function delay_ms
;	-----------------------------------------
_delay_ms:
;	../lib/lib1/inc/stm8s_delay.h: 18: TIM4->CR1  = 0x0;
	mov	0x5340+0, #0x00
;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms;
	ld	a, (0x04, sp)
	ld	_count+1, a
	ld	a, (0x03, sp)
	ld	_count+0, a
;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = 0x1;
	mov	0x5340+0, #0x01
;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
00101$:
	ldw	x, _count+0
	jrne	00101$
	ret
;	../lib/lib1/inc/stm8s_uart.h: 3: extern void uart1_interrupt(void) __interrupt(18)   // Обработчик прерываний по приему UART
;	-----------------------------------------
;	 function uart1_interrupt
;	-----------------------------------------
_uart1_interrupt:
;	../lib/lib1/inc/stm8s_uart.h: 6: data = UART1->DR;
	ldw	x, #0x5231
	ld	a, (x)
	iret
;	../lib/lib1/inc/stm8s_uart.h: 10: void clk_cfg()
;	-----------------------------------------
;	 function clk_cfg
;	-----------------------------------------
_clk_cfg:
;	../lib/lib1/inc/stm8s_uart.h: 12: CLK->SWR     |= 0xE1;    //выбран основной источник тактиования HSI
	ldw	x, #0x50c4
	ld	a, (x)
	or	a, #0xe1
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 13: CLK->CKDIVR  |= 0x0; // коэффициент деления частоты HSI-генератора (2MHz)
	ldw	x, #0x50c6
	ld	a, (x)
	ldw	x, #0x50c6
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 14: CLK->PCKENR1 |= 0b00010100; //включение модуля тактиования UART1 & TIM4
	ldw	x, #0x50c7
	ld	a, (x)
	or	a, #0x14
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_uart.h: 17: void uart1_cfg()
;	-----------------------------------------
;	 function uart1_cfg
;	-----------------------------------------
_uart1_cfg:
;	../lib/lib1/inc/stm8s_uart.h: 19: UART1->CR1  |= 0b00000000;   //установка колличества бит передачи 8/9
	ldw	x, #0x5234
	ld	a, (x)
	ldw	x, #0x5234
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 20: UART1->CR2  |= 0b00001100;   //разрешение работы RX & TX
	ldw	x, #0x5235
	ld	a, (x)
	or	a, #0x0c
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 21: UART1->CR3  |= 0b00000000;   //STOP bits 00 - 1 stop bit
	ldw	x, #0x5236
	ld	a, (x)
	ldw	x, #0x5236
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 23: UART1->BRR2 |= 0x0;  //сначало записываем скорость передачи в BRR2! / 
	ldw	x, #0x5233
	ld	a, (x)
	ldw	x, #0x5233
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 24: UART1->BRR1 |= 0x0d;  //записываеться значение только после записи значения в BRR2! /9600
	ldw	x, #0x5232
	ld	a, (x)
	or	a, #0x0d
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_uart.h: 28: void uart_tx_byte(unsigned char data){
;	-----------------------------------------
;	 function uart_tx_byte
;	-----------------------------------------
_uart_tx_byte:
;	../lib/lib1/inc/stm8s_uart.h: 29: while(!UART1->SR ==1);
00101$:
	ldw	x, #0x5230
	ld	a, (x)
	sub	a, #0x01
	clr	a
	rlc	a
	cp	a, #0x01
	jreq	00101$
;	../lib/lib1/inc/stm8s_uart.h: 30: UART1->DR = data;
	ldw	x, #0x5231
	ld	a, (0x03, sp)
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_uart.h: 34: void uart_tx_data(unsigned char *data, unsigned char len){
;	-----------------------------------------
;	 function uart_tx_data
;	-----------------------------------------
_uart_tx_data:
	push	a
;	../lib/lib1/inc/stm8s_uart.h: 36: while(len--){
	ldw	x, (0x04, sp)
	ld	a, (0x06, sp)
	ld	(0x01, sp), a
00101$:
	ld	a, (0x01, sp)
	dec	(0x01, sp)
	tnz	a
	jreq	00104$
;	../lib/lib1/inc/stm8s_uart.h: 37: uart_tx_byte(*data++);
	ld	a, (x)
	incw	x
	ldw	(0x04, sp), x
	pushw	x
	push	a
	call	_uart_tx_byte
	pop	a
	popw	x
	jra	00101$
00104$:
	pop	a
	ret
;	../lib/lib1/inc/stm8s_uart.h: 41: unsigned char uart_rx_byte(){
;	-----------------------------------------
;	 function uart_rx_byte
;	-----------------------------------------
_uart_rx_byte:
;	../lib/lib1/inc/stm8s_uart.h: 44: while(!UART1->SR);
00101$:
	ldw	x, #0x5230
	ld	a, (x)
	tnz	a
	jreq	00101$
;	../lib/lib1/inc/stm8s_uart.h: 45: data = UART1->DR;
	ldw	x, #0x5231
	ld	a, (x)
;	../lib/lib1/inc/stm8s_uart.h: 46: return data;
	ret
;	../lib/lib1/inc/stm8s_uart.h: 50: void uart_rx_data(unsigned char * data, unsigned char len){
;	-----------------------------------------
;	 function uart_rx_data
;	-----------------------------------------
_uart_rx_data:
	push	a
;	../lib/lib1/inc/stm8s_uart.h: 51: while(len--){
	ldw	x, (0x04, sp)
	ld	a, (0x06, sp)
	ld	(0x01, sp), a
00101$:
	ld	a, (0x01, sp)
	dec	(0x01, sp)
	tnz	a
	jreq	00104$
;	../lib/lib1/inc/stm8s_uart.h: 52: *data++ = uart_rx_byte();
	pushw	x
	call	_uart_rx_byte
	popw	x
	ld	(x), a
	incw	x
	jra	00101$
00104$:
	pop	a
	ret
;	./stm8_adc_01.c: 9: void pin_cfg()  //функция настройки GPIO
;	-----------------------------------------
;	 function pin_cfg
;	-----------------------------------------
_pin_cfg:
;	./stm8_adc_01.c: 11: GPIOB->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта B
	ldw	x, #0x5007
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./stm8_adc_01.c: 12: GPIOB->CR1 |= 0b00100000;   //устанавливаем подтяжку пин 5 порта B
	ldw	x, #0x5008
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./stm8_adc_01.c: 13: GPIOD->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
;	./stm8_adc_01.c: 15: GPIOD->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта D TX
	ldw	x, #0x5011
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./stm8_adc_01.c: 16: GPIOD->CR1 |= 0b00100000;   //без подтяжки
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./stm8_adc_01.c: 17: GPIOD->CR2 |= 0b00000000;   //без прерывания на вход / минимальная скорость на выход
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
	ret
;	./stm8_adc_01.c: 22: INTERRUPT_HANDLER(IRQ_Handled_ADC1,22)
;	-----------------------------------------
;	 function IRQ_Handled_ADC1
;	-----------------------------------------
_IRQ_Handled_ADC1:
;	./stm8_adc_01.c: 24: adc2=ADC1_GetConversionValue();
	call	_ADC1_GetConversionValue
	ldw	_adc2+0, x
;	./stm8_adc_01.c: 26: ADC1_ClearITPendingBit(ADC1_IT_EOC);
	push	#0x80
	push	#0x00
	call	_ADC1_ClearITPendingBit
	addw	sp, #2
	iret
;	./stm8_adc_01.c: 30: int main( void )
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./stm8_adc_01.c: 32: pin_cfg();
	call	_pin_cfg
;	./stm8_adc_01.c: 34: clk_cfg();
	call	_clk_cfg
;	./stm8_adc_01.c: 36: tim4_cfg();
	call	_tim4_cfg
;	./stm8_adc_01.c: 38: uart1_cfg();
	call	_uart1_cfg
;	./stm8_adc_01.c: 42: GPIO_Init(GPIOC,GPIO_PIN_4,GPIO_MODE_IN_FL_NO_IT);
	push	#0x00
	push	#0x10
	push	#0x0a
	push	#0x50
	call	_GPIO_Init
	addw	sp, #4
;	./stm8_adc_01.c: 43: ADC1_DeInit();
	call	_ADC1_DeInit
;	./stm8_adc_01.c: 44: ADC1_Init(ADC1_CONVERSIONMODE_SINGLE, ADC1_CHANNEL_2, ADC1_PRESSEL_FCPU_D8,
	push	#0x00
	push	#0x02
	push	#0x08
	push	#0x00
	push	#0x00
	push	#0x40
	push	#0x02
	push	#0x00
	call	_ADC1_Init
	addw	sp, #8
;	./stm8_adc_01.c: 46: ADC1_ITConfig(ADC1_IT_EOCIE ,ENABLE);
	push	#0x01
	push	#0x20
	push	#0x00
	call	_ADC1_ITConfig
	addw	sp, #3
;	./stm8_adc_01.c: 50: adc2=0;
	clrw	x
	ldw	_adc2+0, x
;	./stm8_adc_01.c: 51: rim();
	rim 
00102$:
;	./stm8_adc_01.c: 55: GPIOB->ODR ^=0b00100000;  //зажигаем светодиод
	ldw	x, #0x5005
	ld	a, (x)
	xor	a, #0x20
	ld	(x), a
;	./stm8_adc_01.c: 57: ADC1_StartConversion();
	call	_ADC1_StartConversion
;	./stm8_adc_01.c: 59: delay_ms(500);//временная задержка
	push	#0xf4
	push	#0x01
	call	_delay_ms
	addw	sp, #2
;	./stm8_adc_01.c: 61: uart_tx_data("on, ",4);
	ldw	x, #___str_0+0
	push	#0x04
	pushw	x
	call	_uart_tx_data
	addw	sp, #3
;	./stm8_adc_01.c: 65: delay_ms(500);
	push	#0xf4
	push	#0x01
	call	_delay_ms
	addw	sp, #2
	jra	00102$
	ret
	.area CODE
___str_0:
	.ascii "on, "
	.db 0x00
	.area INITIALIZER
	.area CABS (ABS)
