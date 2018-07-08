;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Sat Mar 17 23:46:32 2018
;--------------------------------------------------------
	.module leds
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _P
	.globl _n
	.globl _i
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area INITIALIZED
_i::
	.ds 2
_n::
	.ds 2
_P::
	.ds 6
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
;	./leds.c: 4: static void delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	sub	sp, #8
;	./leds.c: 6: while(t--);
	ldw	y, (0x0b, sp)
	ldw	(0x05, sp), y
	ldw	x, (0x0d, sp)
00101$:
	ldw	(0x03, sp), x
	ldw	y, (0x05, sp)
	ldw	(0x01, sp), y
	subw	x, #0x0001
	ld	a, (0x06, sp)
	sbc	a, #0x00
	ld	(0x06, sp), a
	ld	a, (0x05, sp)
	sbc	a, #0x00
	ld	(0x05, sp), a
	ldw	y, (0x03, sp)
	jrne	00101$
	ldw	y, (0x01, sp)
	jrne	00101$
	addw	sp, #8
	ret
;	./leds.c: 13: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
	sub	sp, #4
;	./leds.c: 15: GPIOC->DDR |= GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6;	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0x70
	ld	(x), a
;	./leds.c: 16: GPIOC->CR1 |= GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6;	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0x70
	ld	(x), a
;	./leds.c: 23: for(i=0; i<n; i++)           //цикл for, перебока массива PIN
	clrw	x
	ldw	_i+0, x
	ldw	x, #_P+0
	ldw	(0x03, sp), x
00104$:
	ldw	x, _n+0
	cpw	x, _i+0
	jrsle	00101$
;	./leds.c: 25: delay(50000);
	push	#0x50
	push	#0xc3
	clrw	x
	pushw	x
	call	_delay
	addw	sp, #4
;	./leds.c: 26: GPIOC->ODR |= P[i];
	ldw	x, #0x500a
	ld	a, (x)
	ldw	x, _i+0
	sllw	x
	addw	x, (0x03, sp)
	ldw	x, (x)
	ld	(0x02, sp), a
	clr	(0x01, sp)
	ld	a, xl
	or	a, (0x02, sp)
	push	a
	ld	a, xh
	or	a, (0x02, sp)
	ld	xh, a
	pop	a
	ldw	x, #0x500a
	ld	(x), a
;	./leds.c: 23: for(i=0; i<n; i++)           //цикл for, перебока массива PIN
	ldw	x, _i+0
	incw	x
	ldw	_i+0, x
	jra	00104$
00101$:
;	./leds.c: 28: delay(50000);               //задержка цикла for
	push	#0x50
	push	#0xc3
	clrw	x
	pushw	x
	call	_delay
	addw	sp, #4
;	./leds.c: 29: GPIOC->ODR |=GPIO_PIN_6;    //установка PIN_6=0
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0x40
	ld	(x), a
;	./leds.c: 30: break;
	addw	sp, #4
	ret
	.area CODE
	.area INITIALIZER
__xinit__i:
	.dw #0x0000
__xinit__n:
	.dw #0x0002
__xinit__P:
	.dw #0x0010
	.dw #0x0020
	.dw #0x0040
	.area CABS (ABS)
