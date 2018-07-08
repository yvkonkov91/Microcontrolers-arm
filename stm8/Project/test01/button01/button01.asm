;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Mon Apr 16 20:45:43 2018
;--------------------------------------------------------
	.module button01
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
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
;	./button01.c: 21: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./button01.c: 23: GPIOB->DDR |= 0x20;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
	ldw	x, #0x5007
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./button01.c: 24: GPIOB->CR1 |= 0x20;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x5008
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./button01.c: 27: GPIOD->DDR |= 0x00;
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./button01.c: 28: GPIOD->CR1 |= 0x10;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./button01.c: 32: while(1){
00104$:
;	./button01.c: 33: if (GPIOD->IDR & 0x10) // проверяем нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x10
	jreq	00104$
;	./button01.c: 36: GPIOB->ODR ^= 0x20;
	ldw	x, #0x5005
	ld	a, (x)
	xor	a, #0x20
	ld	(x), a
	jra	00104$
	ret
	.area CODE
	.area INITIALIZER
	.area CABS (ABS)
