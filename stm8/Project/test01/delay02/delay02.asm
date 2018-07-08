;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Wed Apr 11 21:41:26 2018
;--------------------------------------------------------
	.module delay02
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _pin_cfg
	.globl _delay_ms
	.globl _TIM4_cfg
	.globl _delay
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
	int _delay ;int23
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
;	./delay02.c: 6: extern void delay(void) __interrupt(23) //обработчик прерывания функции delay_ms
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
;	./delay02.c: 8: if(count)
	ldw	x, _count+0
	jreq	00102$
;	./delay02.c: 9: count--;    //дикримент переменной count
	ldw	x, _count+0
	decw	x
	ldw	_count+0, x
00102$:
;	./delay02.c: 10: TIM4->SR1   = 0x00; ////событие обновления не происходило
	mov	0x5344+0, #0x00
	iret
;	./delay02.c: 14: void TIM4_cfg() //настройка таймера
;	-----------------------------------------
;	 function TIM4_cfg
;	-----------------------------------------
_TIM4_cfg:
;	./delay02.c: 16: TIM4->SR1   = 0x1;   //событие обновления не происходило
	mov	0x5344+0, #0x01
;	./delay02.c: 17: TIM4->IER  |= 1;    // прерывания по обновлению включены
	bset	0x5343, #0
;	./delay02.c: 18: TIM4->PSCR |= 128; // установка предделителя 128
	bset	0x5347, #7
;	./delay02.c: 19: TIM4->ARR  |= 128;    // значение автоперезагрузки
	bset	0x5348, #7
	ret
;	./delay02.c: 22: void delay_ms(uint16_t ms) //функция выдержки времени
;	-----------------------------------------
;	 function delay_ms
;	-----------------------------------------
_delay_ms:
;	./delay02.c: 24: TIM4->CR1  = 0x0;
	mov	0x5340+0, #0x00
;	./delay02.c: 25: TIM4_cfg(); //вызов функции настройки таймера
	call	_TIM4_cfg
;	./delay02.c: 26: count = ms;
	ld	a, (0x04, sp)
	ld	_count+1, a
	ld	a, (0x03, sp)
	ld	_count+0, a
;	./delay02.c: 27: TIM4->CR1  = 0x1;
	mov	0x5340+0, #0x01
;	./delay02.c: 28: while(count);
00101$:
	ldw	x, _count+0
	jrne	00101$
	ret
;	./delay02.c: 32: void pin_cfg()  //функция настройки GPIO
;	-----------------------------------------
;	 function pin_cfg
;	-----------------------------------------
_pin_cfg:
;	./delay02.c: 34: GPIOB->DDR |= 0b00100000;
	ldw	x, #0x5007
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./delay02.c: 35: GPIOB->CR1 |= 0b00100000;
	ldw	x, #0x5008
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
	ret
;	./delay02.c: 38: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./delay02.c: 41: CLK->CKDIVR |= 0; // коэффициент деления частоты HSI-генератора (16MHz)
	ldw	x, #0x50c6
	ld	a, (x)
	ldw	x, #0x50c6
	ld	(x), a
;	./delay02.c: 43: pin_cfg();  //функция настройки GPIO
	call	_pin_cfg
;	./delay02.c: 45: rim(); // разрешение прерывания!
	rim 
;	./delay02.c: 48: while(1)  //бесконечный цикл        
00102$:
;	./delay02.c: 50: GPIOB->ODR ^=0b00100000;  //зажигаем светодиод
	ldw	x, #0x5005
	ld	a, (x)
	xor	a, #0x20
	ld	(x), a
;	./delay02.c: 51: delay_ms(5000);   //временная задержка
	push	#0x88
	push	#0x13
	call	_delay_ms
	addw	sp, #2
	jra	00102$
	ret
	.area CODE
	.area INITIALIZER
	.area CABS (ABS)
