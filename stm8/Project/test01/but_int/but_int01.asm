;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Tue Apr 17 18:31:13 2018
;--------------------------------------------------------
	.module but_int01
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _pin_cfg
	.globl _pin_int
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
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
	int _pin_int ;int4
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
	int 0x0000 ;int23
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
;	./but_int01.c: 4: static void delay(unsigned int t)
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	sub	sp, #2
;	./but_int01.c: 6: while(t--);
	ldw	x, (0x05, sp)
00101$:
	ldw	(0x01, sp), x
	decw	x
	ldw	y, (0x01, sp)
	jrne	00101$
	addw	sp, #2
	ret
;	./but_int01.c: 9: extern void pin_int(void) __interrupt(4)
;	-----------------------------------------
;	 function pin_int
;	-----------------------------------------
_pin_int:
;	./but_int01.c: 11: if(GPIOD->IDR & 0b00010000)
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x10
	jreq	00102$
;	./but_int01.c: 13: GPIOB->ODR ^= 0b00100000;
	ldw	x, #0x5005
	ld	a, (x)
	xor	a, #0x20
	ld	(x), a
	jra	00104$
00102$:
;	./but_int01.c: 16: GPIOB->ODR |= 0b00100000;
	ldw	x, #0x5005
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
00104$:
	iret
;	./but_int01.c: 22: void pin_cfg()  //функция настройки GPIO
;	-----------------------------------------
;	 function pin_cfg
;	-----------------------------------------
_pin_cfg:
;	./but_int01.c: 24: GPIOB->DDR |= 0b00100000;
	ldw	x, #0x5007
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./but_int01.c: 25: GPIOB->CR1 |= 0b00100000;
	ldw	x, #0x5008
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./but_int01.c: 26: GPIOD->CR1 |= 0b00010000;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./but_int01.c: 27: GPIOD->CR2 |= 0b00010000;
	ldw	x, #0x5013
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./but_int01.c: 28: GPIOB->ODR |= 0b00100000;
	ldw	x, #0x5005
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./but_int01.c: 29: EXTI->CR1 |= 0b11000000;
	ldw	x, #0x50a0
	ld	a, (x)
	or	a, #0xc0
	ld	(x), a
	ret
;	./but_int01.c: 32: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./but_int01.c: 35: CLK->CKDIVR |= 4; // коэффициент деления частоты HSI-генератора (16MHz)
	ldw	x, #0x50c6
	ld	a, (x)
	or	a, #0x04
	ld	(x), a
;	./but_int01.c: 37: pin_cfg();  //функция настройки GPIO
	call	_pin_cfg
;	./but_int01.c: 39: rim(); // разрешение прерывания!
	rim 
;	./but_int01.c: 42: while(1)  //бесконечный цикл        
00102$:
;	./but_int01.c: 44: delay(5000);
	push	#0x88
	push	#0x13
	call	_delay
	addw	sp, #2
;	./but_int01.c: 45: GPIOB->ODR ^= 0b00100000;
	ldw	x, #0x5005
	ld	a, (x)
	xor	a, #0x20
	ld	(x), a
	jra	00102$
	ret
	.area CODE
	.area INITIALIZER
	.area CABS (ABS)
