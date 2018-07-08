;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Mon Apr  2 19:13:57 2018
;--------------------------------------------------------
	.module run_fire_but01
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _button
	.globl _RunningDn
	.globl _RunningUp
	.globl _Pin
	.globl _delay
	.globl _bls
	.globl _bs
	.globl _msb
	.globl _ms
	.globl _n
	.globl _b
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
_b::
	.ds 1
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area INITIALIZED
_n::
	.ds 1
_ms::
	.ds 4
_msb::
	.ds 4
_bs::
	.ds 1
_bls::
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
;	./run_fire_but01.c: 4: uint32_t delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	sub	sp, #4
;	./run_fire_but01.c: 7: while(t--);
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
;	./run_fire_but01.c: 8: return t;
	exgw	x, y
	addw	sp, #4
	ret
;	./run_fire_but01.c: 11: static void delay1(uint32_t m)  //объявление статической функции часла типа long переменной t для реализации работы функции delay1
;	-----------------------------------------
;	 function delay1
;	-----------------------------------------
_delay1:
	sub	sp, #8
;	./run_fire_but01.c: 13: while(m--);
	ldw	y, (0x0b, sp)
	ldw	(0x01, sp), y
	ldw	x, (0x0d, sp)
00101$:
	ldw	(0x07, sp), x
	ldw	y, (0x01, sp)
	ldw	(0x05, sp), y
	subw	x, #0x0001
	ld	a, (0x02, sp)
	sbc	a, #0x00
	ld	(0x02, sp), a
	ld	a, (0x01, sp)
	sbc	a, #0x00
	ld	(0x01, sp), a
	ldw	y, (0x07, sp)
	jrne	00101$
	ldw	y, (0x05, sp)
	jrne	00101$
	addw	sp, #8
	ret
;	./run_fire_but01.c: 32: void Pin()  // настройка портов
;	-----------------------------------------
;	 function Pin
;	-----------------------------------------
_Pin:
;	./run_fire_but01.c: 34: GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but01.c: 35: GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but01.c: 36: GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but01.c: 38: GPIOD->DDR |= 0x00;
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./run_fire_but01.c: 39: GPIOD->CR1 |= 0x10;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./run_fire_but01.c: 40: GPIOD->CR2 |= 0x00;
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
	ret
;	./run_fire_but01.c: 43: void RunningUp()    //функция направление бегущиго огня с л->п
;	-----------------------------------------
;	 function RunningUp
;	-----------------------------------------
_RunningUp:
;	./run_fire_but01.c: 45: if(n<=1){
	ld	a, _n+0
	cp	a, #0x01
	jrsgt	00102$
;	./run_fire_but01.c: 46: GPIOC->ODR ^= 0b01010000;    // 1-0b01010000->delay(1000)->2-0b10001000->delay(1000)->3-(1)->delay(1000)->(2)->delay(1000)->4-0b11011000;
	ldw	x, #0x500a
	ld	a, (x)
	xor	a, #0x50
	ld	(x), a
;	./run_fire_but01.c: 47: delay1(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay1
	addw	sp, #4
;	./run_fire_but01.c: 48: GPIOC->ODR |= 0b01010000;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0x50
	ld	(x), a
;	./run_fire_but01.c: 49: delay1(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay1
	addw	sp, #4
;	./run_fire_but01.c: 50: GPIOC->ODR ^= 0b10001000;    // 1-0b01010000->delay(1000)->2-0b10001000->delay(1000)->3-(1)->delay(1000)->(2)->delay(1000)->4-0b11011000;
	ldw	x, #0x500a
	ld	a, (x)
	xor	a, #0x88
	ld	(x), a
;	./run_fire_but01.c: 51: delay1(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay1
	addw	sp, #4
;	./run_fire_but01.c: 52: GPIOC->ODR |= 0b10001000;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0x88
	ld	(x), a
;	./run_fire_but01.c: 53: delay1(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay1
	addw	sp, #4
;	./run_fire_but01.c: 54: n++;
	inc	_n+0
	jra	00104$
00102$:
;	./run_fire_but01.c: 58: GPIOC->ODR ^= 0b11011000;
	ldw	x, #0x500a
	ld	a, (x)
	xor	a, #0xd8
	ld	(x), a
00104$:
	ret
;	./run_fire_but01.c: 62: void RunningDn()    //функция направление бегущиго огня с п->л
;	-----------------------------------------
;	 function RunningDn
;	-----------------------------------------
_RunningDn:
	sub	sp, #2
;	./run_fire_but01.c: 64: GPIOC->ODR ^= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x02, sp), a
	ld	a, #0x80
	push	a
	ld	a, _n+0
	jreq	00110$
00109$:
	srl	(1, sp)
	dec	a
	jrne	00109$
00110$:
	pop	a
	xor	a, (0x02, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./run_fire_but01.c: 65: delay1(10000);
	push	#0x10
	push	#0x27
	clrw	x
	pushw	x
	call	_delay1
	addw	sp, #4
;	./run_fire_but01.c: 66: GPIOC->ODR |= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
	ld	a, #0x80
	push	a
	ld	a, _n+0
	jreq	00112$
00111$:
	srl	(1, sp)
	dec	a
	jrne	00111$
00112$:
	pop	a
	or	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./run_fire_but01.c: 68: n++;
	ld	a, _n+0
	inc	a
;	./run_fire_but01.c: 70: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00103$
;	./run_fire_but01.c: 73: n=0;
	clr	_n+0
00103$:
	addw	sp, #2
	ret
;	./run_fire_but01.c: 77: uint32_t button ()
;	-----------------------------------------
;	 function button
;	-----------------------------------------
_button:
	sub	sp, #8
;	./run_fire_but01.c: 80: if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>50) // фиксируем нажатие кнопки
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
;	./run_fire_but01.c: 82: bs=1;
	mov	_bs+0, #0x01
;	./run_fire_but01.c: 83: msb=ms;
	ldw	y, _ms+2
	ldw	x, _ms+0
	ldw	_msb+2, y
	ldw	_msb+0, x
;	./run_fire_but01.c: 84: b^=0;
	ld	a, _b+0
00102$:
;	./run_fire_but01.c: 87: if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>50) // фиксируем отпускание  нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	and	a, #0x10
	cp	a, #0x10
	jrne	00106$
	btjt	_bs+0, #0, 00141$
	jra	00106$
00141$:
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
	jrnc	00106$
;	./run_fire_but01.c: 89: bs=0;
	clr	_bs+0
;	./run_fire_but01.c: 90: msb=ms;
	ldw	y, _ms+2
	ldw	x, _ms+0
	ldw	_msb+2, y
	ldw	_msb+0, x
;	./run_fire_but01.c: 91: b^=1;
	ld	a, _b+0
	sub	a, #0x01
	clr	a
	rlc	a
	ld	_b+0, a
00106$:
;	./run_fire_but01.c: 93: return b;
	ld	a, _b+0
	ld	xl, a
	rlc	a
	clr	a
	sbc	a, #0x00
	ld	xh, a
	ld	yl, a
	ld	yh, a
	addw	sp, #8
	ret
;	./run_fire_but01.c: 97: int main( void )    //основная программа
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./run_fire_but01.c: 99: Pin();
	call	_Pin
;	./run_fire_but01.c: 101: while(1)    //бесконечный цикл
00105$:
;	./run_fire_but01.c: 103: button(); 
	call	_button
;	./run_fire_but01.c: 105: if (b==0) // проверяем нажатие кнопки
	btjf	_b+0, #0, 00117$
	jra	00102$
00117$:
;	./run_fire_but01.c: 107: RunningUp();
	call	_RunningUp
	jra	00105$
00102$:
;	./run_fire_but01.c: 112: RunningDn();
	call	_RunningDn
	jra	00105$
	ret
	.area CODE
	.area INITIALIZER
__xinit__n:
	.db #0x00	;  0
__xinit__ms:
	.byte #0x00,#0x00,#0x00,#0x00	; 0
__xinit__msb:
	.byte #0x00,#0x00,#0x00,#0x00	; 0
__xinit__bs:
	.db #0x00	;  0
__xinit__bls:
	.db #0x00	;  0
	.area CABS (ABS)
