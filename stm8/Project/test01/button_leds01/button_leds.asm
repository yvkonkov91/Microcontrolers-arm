;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Sat Mar 24 20:18:16 2018
;--------------------------------------------------------
	.module button_leds
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _running
	.globl _button
	.globl _PIN
	.globl _delay
	.globl _bs
	.globl _msb
	.globl _ms
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
_ms::
	.ds 4
_msb::
	.ds 4
_bs::
	.ds 1
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
;	./button_leds.c: 5: uint32_t delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	sub	sp, #4
;	./button_leds.c: 8: while(t--);
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
;	./button_leds.c: 9: return t;
	exgw	x, y
	addw	sp, #4
	ret
;	./button_leds.c: 26: void PIN()
;	-----------------------------------------
;	 function PIN
;	-----------------------------------------
_PIN:
;	./button_leds.c: 28: GPIOC->DDR |= 0xf8;   	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./button_leds.c: 29: GPIOC->CR1 |= 0xf8;   	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./button_leds.c: 30: GPIOC->ODR |= 0xf8;   	//установка значения бита 0/1
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./button_leds.c: 32: GPIOD->DDR |= 0x00;
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./button_leds.c: 33: GPIOD->CR1 |= 0x10;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./button_leds.c: 34: GPIOD->CR2 |= 0x00;
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
	ret
;	./button_leds.c: 38: void button()
;	-----------------------------------------
;	 function button
;	-----------------------------------------
_button:
	sub	sp, #8
;	./button_leds.c: 41: if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>50) // фиксируем нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x10
	jrne	00102$
	btjf	_bs+0, #0, 00136$
	jra	00102$
00136$:
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
	jrnc	00102$
;	./button_leds.c: 43: bs=1;
	mov	_bs+0, #0x01
;	./button_leds.c: 44: msb=ms;
	ldw	y, _ms+2
	ldw	x, _ms+0
	ldw	_msb+2, y
	ldw	_msb+0, x
00102$:
;	./button_leds.c: 49: if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>50) // фиксируем отпускание  нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	and	a, #0x10
	cp	a, #0x10
	jrne	00109$
	btjt	_bs+0, #0, 00141$
	jra	00109$
00141$:
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
	jrnc	00109$
;	./button_leds.c: 51: bs=0;
	clr	_bs+0
;	./button_leds.c: 52: msb=ms;
	ldw	y, _ms+2
	ldw	x, _ms+0
	ldw	_msb+2, y
	ldw	_msb+0, x
00109$:
	addw	sp, #8
	ret
;	./button_leds.c: 59: void running()
;	-----------------------------------------
;	 function running
;	-----------------------------------------
_running:
	sub	sp, #4
;	./button_leds.c: 61: if (GPIOD->IDR & 0x10) // проверяем нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x10
	jreq	00106$
;	./button_leds.c: 64: GPIOC->ODR ^= 0x08 << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x04, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00124$
00123$:
	sll	(1, sp)
	dec	a
	jrne	00123$
00124$:
	pop	a
	xor	a, (0x04, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./button_leds.c: 65: delay(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay
	addw	sp, #4
;	./button_leds.c: 67: GPIOC->ODR |= 0x08 << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00126$
00125$:
	sll	(1, sp)
	dec	a
	jrne	00125$
00126$:
	pop	a
	or	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./button_leds.c: 70: n++;
	ld	a, _n+0
	inc	a
;	./button_leds.c: 73: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00108$
;	./button_leds.c: 76: n=0;
	clr	_n+0
	jra	00108$
00106$:
;	./button_leds.c: 84: GPIOC->ODR ^= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x03, sp), a
	ld	a, #0x80
	push	a
	ld	a, _n+0
	jreq	00129$
00128$:
	srl	(1, sp)
	dec	a
	jrne	00128$
00129$:
	pop	a
	xor	a, (0x03, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./button_leds.c: 85: delay(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay
	addw	sp, #4
;	./button_leds.c: 87: GPIOC->ODR |= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x02, sp), a
	ld	a, #0x80
	push	a
	ld	a, _n+0
	jreq	00131$
00130$:
	srl	(1, sp)
	dec	a
	jrne	00130$
00131$:
	pop	a
	or	a, (0x02, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./button_leds.c: 90: n++;
	ld	a, _n+0
	inc	a
;	./button_leds.c: 93: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00108$
;	./button_leds.c: 96: n=0;
	clr	_n+0
00108$:
	addw	sp, #4
	ret
;	./button_leds.c: 101: int main( void )    //установка портов и пинов
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./button_leds.c: 104: PIN();
	call	_PIN
;	./button_leds.c: 106: while(1){
00102$:
;	./button_leds.c: 108: button();
	call	_button
;	./button_leds.c: 109: running();
	call	_running
	jra	00102$
	ret
	.area CODE
	.area INITIALIZER
__xinit__ms:
	.byte #0x00,#0x00,#0x00,#0x00	; 0
__xinit__msb:
	.byte #0x00,#0x00,#0x00,#0x00	; 0
__xinit__bs:
	.db #0x00	;  0
	.area CABS (ABS)
