;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Mon Mar 19 05:01:47 2018
;--------------------------------------------------------
	.module running_fire04
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _n
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
_n::
	.ds 1
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
;	./running_fire04.c: 4: static void delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	sub	sp, #8
;	./running_fire04.c: 6: while(t--);
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
;	./running_fire04.c: 21: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
	sub	sp, #4
;	./running_fire04.c: 23: GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./running_fire04.c: 24: GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./running_fire04.c: 25: GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./running_fire04.c: 27: GPIOD->DDR |= 0x00;
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./running_fire04.c: 28: GPIOD->CR1 |= 0x10;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./running_fire04.c: 29: GPIOD->CR2 |= 0x00;
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
;	./running_fire04.c: 31: while(1){
00109$:
;	./running_fire04.c: 32: if (GPIOD->IDR & 0x10) // проверяем нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x10
	jreq	00106$
;	./running_fire04.c: 35: GPIOC->ODR ^= 0x08 << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x02, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00131$
00130$:
	sll	(1, sp)
	dec	a
	jrne	00130$
00131$:
	pop	a
	xor	a, (0x02, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./running_fire04.c: 36: delay(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay
	addw	sp, #4
;	./running_fire04.c: 38: GPIOC->ODR |= 0x08 << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00133$
00132$:
	sll	(1, sp)
	dec	a
	jrne	00132$
00133$:
	pop	a
	or	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./running_fire04.c: 41: n++;
	ld	a, _n+0
	inc	a
;	./running_fire04.c: 44: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00109$
;	./running_fire04.c: 47: n=0;
	clr	_n+0
	jra	00109$
00106$:
;	./running_fire04.c: 55: GPIOC->ODR ^= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	xh, a
	ld	a, #0x80
	ld	(0x03, sp), a
	ld	a, _n+0
	jreq	00136$
00135$:
	srl	(0x03, sp)
	dec	a
	jrne	00135$
00136$:
	ld	a, xh
	xor	a, (0x03, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./running_fire04.c: 56: delay(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay
	addw	sp, #4
;	./running_fire04.c: 58: GPIOC->ODR |= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	xh, a
	ld	a, #0x80
	ld	(0x04, sp), a
	ld	a, _n+0
	jreq	00138$
00137$:
	srl	(0x04, sp)
	dec	a
	jrne	00137$
00138$:
	ld	a, xh
	or	a, (0x04, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./running_fire04.c: 61: n++;
	ld	a, _n+0
	inc	a
;	./running_fire04.c: 64: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrsge	00139$
	jp	00109$
00139$:
;	./running_fire04.c: 67: n=0;
	clr	_n+0
	jp	00109$
	addw	sp, #4
	ret
	.area CODE
	.area INITIALIZER
	.area CABS (ABS)
