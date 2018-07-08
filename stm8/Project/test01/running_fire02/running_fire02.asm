;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Mon Mar 19 01:03:24 2018
;--------------------------------------------------------
	.module running_fire02
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _b
	.globl _a
	.globl _n
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
_n::
	.ds 2
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area INITIALIZED
_a::
	.ds 2
_b::
	.ds 2
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
;	./running_fire02.c: 4: static void delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	sub	sp, #8
;	./running_fire02.c: 6: while(t--);
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
;	./running_fire02.c: 21: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./running_fire02.c: 23: GPIOC->DDR |= a;//0b11111000; //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	ld	xh, a
	clr	a
	or	a, _a+0
	rlwa	x
	or	a, _a+1
	ld	xh, a
	ldw	x, #0x500c
	ld	(x), a
;	./running_fire02.c: 24: GPIOC->CR1 |= a;//0b11111000; //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	ld	xh, a
	clr	a
	or	a, _a+0
	rlwa	x
	or	a, _a+1
	ld	xh, a
	ldw	x, #0x500d
	ld	(x), a
;	./running_fire02.c: 25: GPIOC->ODR |= a;//0b11111000; //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
	ldw	x, #0x500a
	ld	a, (x)
	ld	xh, a
	clr	a
	or	a, _a+0
	rlwa	x
	or	a, _a+1
	ld	xh, a
	ldw	x, #0x500a
	ld	(x), a
00104$:
;	./running_fire02.c: 29: GPIOC->ODR ^= b << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	yh, a
	ld	a, _b+1
	clrw	x
	ld	xl, a
	ld	a, _n+1
	jreq	00117$
00116$:
	sllw	x
	dec	a
	jrne	00116$
00117$:
	pushw	x
	ld	a, yh
	xor	a, (2, sp)
	popw	x
	ldw	x, #0x500a
	ld	(x), a
;	./running_fire02.c: 30: delay(100000);
	push	#0xa0
	push	#0x86
	push	#0x01
	push	#0x00
	call	_delay
	addw	sp, #4
;	./running_fire02.c: 32: GPIOC->ODR |= b << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	yh, a
	ld	a, _b+1
	clrw	x
	ld	xl, a
	ld	a, _n+1
	jreq	00119$
00118$:
	sllw	x
	dec	a
	jrne	00118$
00119$:
	pushw	x
	ld	a, yh
	or	a, (2, sp)
	popw	x
	ldw	x, #0x500a
	ld	(x), a
;	./running_fire02.c: 35: n++;
	ldw	x, _n+0
	incw	x
;	./running_fire02.c: 37: if ( n >= 5 )
	ldw	_n+0, x
	cpw	x, #0x0005
	jrslt	00104$
;	./running_fire02.c: 39: n = 0;
	clrw	x
	ldw	_n+0, x
	jra	00104$
	ret
	.area CODE
	.area INITIALIZER
__xinit__a:
	.dw #0x00F8
__xinit__b:
	.dw #0x0008
	.area CABS (ABS)
