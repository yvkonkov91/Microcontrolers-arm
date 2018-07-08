;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Wed May 16 22:34:20 2018
;--------------------------------------------------------
	.module delay03
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _pin_cfg
	.globl _delay_ms
	.globl _tim4_cfg
	.globl _delay_interrupt
	.globl _count
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
_count::
	.ds 4
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
	ldw	x, _count+2
	jrne	00109$
	ldw	x, _count+0
	jreq	00102$
00109$:
;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
	ldw	y, _count+2
	subw	y, #0x0001
	ld	a, _count+1
	sbc	a, #0x00
	ld	xl, a
	ld	a, _count+0
	sbc	a, #0x00
	ld	xh, a
	ldw	_count+2, y
	ldw	_count+0, x
00102$:
;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = (0<<0); ////событие обновления не происходило
	mov	0x5344+0, #0x00
	iret
;	../lib/lib1/inc/stm8s_delay.h: 9: void tim4_cfg() //настройка таймера
;	-----------------------------------------
;	 function tim4_cfg
;	-----------------------------------------
_tim4_cfg:
;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = (1<<0);   //событие обновления происходило
	mov	0x5344+0, #0x01
;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= (1<<0);    // прерывания по обновлению включены
	bset	0x5343, #0
;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 8; // установка предделителя 128
	ldw	x, #0x5347
	ld	a, (x)
	or	a, #0x08
	ld	(x), a
;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки 124
	ldw	x, #0x5348
	ld	a, (x)
	or	a, #0x7c
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint32_t ms) //функция выдержки времени
;	-----------------------------------------
;	 function delay_ms
;	-----------------------------------------
_delay_ms:
;	../lib/lib1/inc/stm8s_delay.h: 19: tim4_cfg(); //вызов функции настройки таймера
	call	_tim4_cfg
;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms; //переменная count пресваивает значение переменной ms
	ld	a, (0x06, sp)
	ld	_count+3, a
	ld	a, (0x05, sp)
	ld	_count+2, a
	ld	a, (0x04, sp)
	ld	_count+1, a
	ld	a, (0x03, sp)
	ld	_count+0, a
;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = (1<<0);    //включение таймера
	mov	0x5340+0, #0x01
;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
00101$:
	ldw	x, _count+2
	jrne	00101$
	ldw	x, _count+0
	jrne	00101$
	ret
;	./delay03.c: 4: void pin_cfg()  //функция настройки GPIO
;	-----------------------------------------
;	 function pin_cfg
;	-----------------------------------------
_pin_cfg:
;	./delay03.c: 6: GPIOC->DDR |= (1<<3);
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0x08
	ld	(x), a
;	./delay03.c: 7: GPIOC->CR1 |= (1<<3);
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0x08
	ld	(x), a
;	./delay03.c: 8: GPIOC->ODR |= (1<<3);
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0x08
	ld	(x), a
	ret
;	./delay03.c: 11: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./delay03.c: 13: CLK->CKDIVR |= (0<<4)|(0<<3)|(0<<2)|(0<<1)|(0<<0); // коэффициент деления частоты HSI-генератора (16MHz)
	ldw	x, #0x50c6
	ld	a, (x)
	ldw	x, #0x50c6
	ld	(x), a
;	./delay03.c: 15: pin_cfg();  //функция настройки GPIO
	call	_pin_cfg
;	./delay03.c: 17: rim(); // разрешение прерывания!
	rim 
;	./delay03.c: 20: while(1)  //бесконечный цикл        
00102$:
;	./delay03.c: 22: GPIOC->ODR ^=(1<<3);  //зажигаем светодиод
	ldw	x, #0x500a
	ld	a, (x)
	xor	a, #0x08
	ld	(x), a
;	./delay03.c: 23: delay_ms(10000);   //временная задержка
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay_ms
	addw	sp, #4
	jra	00102$
	ret
	.area CODE
	.area INITIALIZER
	.area CABS (ABS)
