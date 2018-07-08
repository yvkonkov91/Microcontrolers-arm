;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Fri Mar 23 12:14:36 2018
;--------------------------------------------------------
	.module button_state01
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _delay
	.globl _msb
	.globl _bs
	.globl _ms
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area INITIALIZED
_ms::
	.ds 4
_bs::
	.ds 1
_msb::
	.ds 4
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
;	./button_state01.c: 5: uint32_t delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	sub	sp, #4
;	./button_state01.c: 8: while(t--);
	ldw	y, #0x01f4
	clrw	x
00101$:
	ldw	(0x03, sp), y
	ldw	(0x01, sp), x
	subw	y, #0x0001
	ld	a, xl
	sbc	a, #0x00
	rlwa	x
	sbc	a, #0x00
	ld	xh, a
	tnz	(0x04, sp)
	jrne	00101$
	tnz	(0x03, sp)
	jrne	00101$
	tnz	(0x02, sp)
	jrne	00101$
	tnz	(0x01, sp)
	jrne	00101$
;	./button_state01.c: 9: return t;
	exgw	x, y
	addw	sp, #4
	ret
;	./button_state01.c: 28: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
	sub	sp, #8
;	./button_state01.c: 30: GPIOC->DDR |= 0x10;   	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./button_state01.c: 31: GPIOC->CR1 |= 0x10;   	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./button_state01.c: 32: GPIOC->ODR |= 0x10;   	//установка значения бита 0/1
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./button_state01.c: 34: GPIOD->DDR |= 0x00;
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./button_state01.c: 35: GPIOD->CR1 |= 0x10;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./button_state01.c: 36: GPIOD->CR2 |= 0x00;
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
;	./button_state01.c: 39: while(1){
00110$:
;	./button_state01.c: 42: if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>50) // фиксируем нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x10
	jrne	00102$
	btjf	_bs+0, #0, 00143$
	jra	00102$
00143$:
	push	_ms+3
	push	_ms+2
	push	_ms+1
	push	_ms+0
	call	_delay
	addw	sp, #4
	exgw	x, y
	subw	y, _msb+2
	ldw	(0x07, sp), y
	ld	a, xl
	sbc	a, _msb+1
	ld	(0x06, sp), a
	ld	a, xh
	sbc	a, _msb+0
	ld	(0x05, sp), a
	ldw	x, #0x0032
	cpw	x, (0x07, sp)
	clr	a
	sbc	a, (0x06, sp)
	clr	a
	sbc	a, (0x05, sp)
	jrnc	00102$
;	./button_state01.c: 44: bs=1;
	mov	_bs+0, #0x01
;	./button_state01.c: 45: msb=ms;
	ldw	y, _ms+2
	ldw	x, _ms+0
	ldw	_msb+2, y
	ldw	_msb+0, x
;	./button_state01.c: 46: GPIOC->ODR ^= 0x00;
	ldw	x, #0x500a
	ld	a, (x)
	ldw	x, #0x500a
	ld	(x), a
00102$:
;	./button_state01.c: 51: if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>50) // фиксируем отпускание  нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	and	a, #0x10
	cp	a, #0x10
	jrne	00110$
	btjt	_bs+0, #0, 00148$
	jra	00110$
00148$:
	push	_ms+3
	push	_ms+2
	push	_ms+1
	push	_ms+0
	call	_delay
	addw	sp, #4
	exgw	x, y
	subw	y, _msb+2
	ldw	(0x03, sp), y
	ld	a, xl
	sbc	a, _msb+1
	ld	(0x02, sp), a
	ld	a, xh
	sbc	a, _msb+0
	ld	(0x01, sp), a
	ldw	x, #0x0032
	cpw	x, (0x03, sp)
	clr	a
	sbc	a, (0x02, sp)
	clr	a
	sbc	a, (0x01, sp)
	jrc	00149$
	jp	00110$
00149$:
;	./button_state01.c: 53: bs=0;
	clr	_bs+0
;	./button_state01.c: 54: msb=ms;
	ldw	y, _ms+2
	ldw	x, _ms+0
	ldw	_msb+2, y
	ldw	_msb+0, x
;	./button_state01.c: 55: GPIOC->ODR ^= 0x10;
	ldw	x, #0x500a
	ld	a, (x)
	xor	a, #0x10
	ld	(x), a
	jp	00110$
	addw	sp, #8
	ret
	.area CODE
	.area INITIALIZER
__xinit__ms:
	.byte #0x00,#0x00,#0x00,#0x00	; 0
__xinit__bs:
	.db #0x00	;  0
__xinit__msb:
	.byte #0x00,#0x00,#0x00,#0x00	; 0
	.area CABS (ABS)
