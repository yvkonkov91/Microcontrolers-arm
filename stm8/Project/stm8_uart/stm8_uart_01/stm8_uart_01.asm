;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Thu May 10 19:39:55 2018
;--------------------------------------------------------
	.module stm8_uart_01
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _pin_cfg
	.globl _uart_tx_int
	.globl _uart_tx_data
	.globl _uart_tx_byte
	.globl _uart1_cfg
	.globl _clk_cfg
	.globl _delay_ms
	.globl _tim4_cfg
	.globl _delay_interrupt
	.globl _count
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
_count::
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
	int 0x0000 ;int18
	int 0x0000 ;int19
	int 0x0000 ;int20
	int 0x0000 ;int21
	int 0x0000 ;int22
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
;	../lib/lib1/inc/stm8s_uart.h: 3: void clk_cfg()
;	-----------------------------------------
;	 function clk_cfg
;	-----------------------------------------
_clk_cfg:
;	../lib/lib1/inc/stm8s_uart.h: 5: CLK->SWR     |= 0xE1;    //выбран основной источник тактиования HSI
	ldw	x, #0x50c4
	ld	a, (x)
	or	a, #0xe1
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 6: CLK->CKDIVR  |= 0x0; // коэффициент деления частоты HSI-генератора (2MHz)
	ldw	x, #0x50c6
	ld	a, (x)
	ldw	x, #0x50c6
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 7: CLK->PCKENR1 |= 0b00010100; //включение модуля тактиования UART1 & TIM4
	ldw	x, #0x50c7
	ld	a, (x)
	or	a, #0x14
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_uart.h: 10: void uart1_cfg()
;	-----------------------------------------
;	 function uart1_cfg
;	-----------------------------------------
_uart1_cfg:
;	../lib/lib1/inc/stm8s_uart.h: 12: UART1->CR1  |= 0b00000000;   //установка колличества бит передачи 8/9
	ldw	x, #0x5234
	ld	a, (x)
	ldw	x, #0x5234
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 13: UART1->CR2  |= 0b00001000;   //разрешение работы RX & TX
	ldw	x, #0x5235
	ld	a, (x)
	or	a, #0x08
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 14: UART1->CR3  |= 0b00000000;   //STOP bits 00 - 1 stop bit
	ldw	x, #0x5236
	ld	a, (x)
	ldw	x, #0x5236
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 16: UART1->BRR2 |= 0x0;  //сначало записываем скорость передачи в BRR2! / 
	ldw	x, #0x5233
	ld	a, (x)
	ldw	x, #0x5233
	ld	(x), a
;	../lib/lib1/inc/stm8s_uart.h: 17: UART1->BRR1 |= 0x0d;  //записываеться значение только после записи значения в BRR2! /9600
	ldw	x, #0x5232
	ld	a, (x)
	or	a, #0x0d
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_uart.h: 23: void uart_tx_byte(unsigned char c)
;	-----------------------------------------
;	 function uart_tx_byte
;	-----------------------------------------
_uart_tx_byte:
;	../lib/lib1/inc/stm8s_uart.h: 25: while(UART1->SR ==(0<<7));
00101$:
	ldw	x, #0x5230
	ld	a, (x)
	tnz	a
	jreq	00101$
;	../lib/lib1/inc/stm8s_uart.h: 26: UART1->DR = c;
	ldw	x, #0x5231
	ld	a, (0x03, sp)
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_uart.h: 30: void uart_tx_data(unsigned char *s)
;	-----------------------------------------
;	 function uart_tx_data
;	-----------------------------------------
_uart_tx_data:
;	../lib/lib1/inc/stm8s_uart.h: 32: while(*s != 0) uart_tx_byte(*s++);
	ldw	x, (0x03, sp)
00101$:
	ld	a, (x)
	tnz	a
	jreq	00104$
	incw	x
	pushw	x
	push	a
	call	_uart_tx_byte
	pop	a
	popw	x
	jra	00101$
00104$:
	ret
;	../lib/lib1/inc/stm8s_uart.h: 35: void uart_tx_int(uint16_t c)//    Отправка числа от 0000 до 9999
;	-----------------------------------------
;	 function uart_tx_int
;	-----------------------------------------
_uart_tx_int:
	sub	sp, #2
;	../lib/lib1/inc/stm8s_uart.h: 38: c=c%100000000;
	ldw	y, (0x05, sp)
	clrw	x
	push	#0x00
	push	#0xe1
	push	#0xf5
	push	#0x05
	pushw	y
	pushw	x
	call	__modslong
	addw	sp, #8
	ldw	(0x05, sp), x
;	../lib/lib1/inc/stm8s_uart.h: 39: temp=c/100;
	ldw	x, (0x05, sp)
	ldw	y, #0x0064
	divw	x, y
;	../lib/lib1/inc/stm8s_uart.h: 40: uart_tx_byte(temp/10+'0');
	pushw	x
	ldw	y, #0x000a
	divw	x, y
	ldw	y, x
	ld	a, xl
	popw	x
	add	a, #0x30
	pushw	x
	push	a
	call	_uart_tx_byte
	pop	a
	popw	x
;	../lib/lib1/inc/stm8s_uart.h: 41: uart_tx_byte(temp%10+'0');
	ldw	y, #0x000a
	divw	x, y
	ld	a, yl
	add	a, #0x30
	push	a
	call	_uart_tx_byte
	pop	a
;	../lib/lib1/inc/stm8s_uart.h: 42: temp=c%100;
	ldw	x, (0x05, sp)
	ldw	y, #0x0064
	divw	x, y
	ldw	(0x01, sp), y
;	../lib/lib1/inc/stm8s_uart.h: 43: uart_tx_byte(temp/10+'0');
	ldw	x, (0x01, sp)
	ldw	y, #0x000a
	divw	x, y
	ld	a, xl
	add	a, #0x30
	push	a
	call	_uart_tx_byte
	pop	a
;	../lib/lib1/inc/stm8s_uart.h: 44: uart_tx_byte(temp%10+'0');
	ldw	x, (0x01, sp)
	ldw	y, #0x000a
	divw	x, y
	ld	a, yl
	add	a, #0x30
	push	a
	call	_uart_tx_byte
	addw	sp, #3
	ret
;	./stm8_uart_01.c: 4: void pin_cfg()  //функция настройки GPIO
;	-----------------------------------------
;	 function pin_cfg
;	-----------------------------------------
_pin_cfg:
;	./stm8_uart_01.c: 6: GPIOB->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта B
	ldw	x, #0x5007
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./stm8_uart_01.c: 7: GPIOB->CR1 |= 0b00100000;   //устанавливаем подтяжку пин 5 порта B
	ldw	x, #0x5008
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./stm8_uart_01.c: 8: GPIOB->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
	ldw	x, #0x5009
	ld	a, (x)
	ldw	x, #0x5009
	ld	(x), a
;	./stm8_uart_01.c: 10: GPIOD->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта D TX
	ldw	x, #0x5011
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./stm8_uart_01.c: 11: GPIOD->CR1 |= 0b00000000;   //без подтяжки
	ldw	x, #0x5012
	ld	a, (x)
	ldw	x, #0x5012
	ld	(x), a
;	./stm8_uart_01.c: 12: GPIOD->CR2 |= 0b00000000;   //без прерывания на вход / минимальная скорость на выход
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
	ret
;	./stm8_uart_01.c: 16: int main( void )
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./stm8_uart_01.c: 18: pin_cfg();
	call	_pin_cfg
;	./stm8_uart_01.c: 20: clk_cfg();
	call	_clk_cfg
;	./stm8_uart_01.c: 22: tim4_cfg();
	call	_tim4_cfg
;	./stm8_uart_01.c: 24: uart1_cfg();
	call	_uart1_cfg
;	./stm8_uart_01.c: 26: rim();  //разрешаем глобальное прерывание
	rim 
00105$:
;	./stm8_uart_01.c: 33: GPIOB->ODR ^=0b00100000;  //зажигаем светодиод
	ldw	x, #0x5005
	ld	a, (x)
	xor	a, #0x20
	ld	(x), a
;	./stm8_uart_01.c: 34: delay_ms(5000);   //временная задержка
	push	#0x88
	push	#0x13
	call	_delay_ms
	addw	sp, #2
;	./stm8_uart_01.c: 36: if (GPIOB->ODR ==0b00100000)
	ldw	x, #0x5005
	ld	a, (x)
	cp	a, #0x20
	jrne	00102$
;	./stm8_uart_01.c: 39: uart_tx_data("on, ");
	ldw	x, #___str_0+0
	pushw	x
	call	_uart_tx_data
	addw	sp, #2
	jra	00105$
00102$:
;	./stm8_uart_01.c: 42: else uart_tx_data("off\r\n");//printf("value: %u\n",adc2);
	ldw	x, #___str_1+0
	pushw	x
	call	_uart_tx_data
	addw	sp, #2
	jra	00105$
	ret
	.area CODE
___str_0:
	.ascii "on, "
	.db 0x00
___str_1:
	.ascii "off"
	.db 0x0D
	.db 0x0A
	.db 0x00
	.area INITIALIZER
	.area CABS (ABS)
