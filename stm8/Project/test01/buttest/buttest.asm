;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Sun Apr 22 01:20:23 2018
;--------------------------------------------------------
	.module buttest
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _runLdDn
	.globl _runLdUp
	.globl _RunningDn
	.globl _RunningUp
	.globl _Pin
	.globl _if_0
	.globl _pin_int
	.globl _delay_ms
	.globl _TIM4_cfg
	.globl _delay_interrupt
	.globl _b
	.globl _s
	.globl _n
	.globl _count
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
_count::
	.ds 2
_n::
	.ds 1
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area INITIALIZED
_s::
	.ds 4
_b::
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
	int _pin_int ;int6
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
	ldw	x, _count+0
	jreq	00102$
;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
	ldw	x, _count+0
	decw	x
	ldw	_count+0, x
00102$:
;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = 0x00; ////событие обновления не происходило
	mov	0x5344+0, #0x00
	iret
;	../lib/lib1/inc/stm8s_delay.h: 9: void TIM4_cfg() //настройка таймера
;	-----------------------------------------
;	 function TIM4_cfg
;	-----------------------------------------
_TIM4_cfg:
;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = 0x1;   //событие обновления не происходило
	mov	0x5344+0, #0x01
;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= 1;    // прерывания по обновлению включены
	bset	0x5343, #0
;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 128; // установка предделителя 128
	bset	0x5347, #7
;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки
	ldw	x, #0x5348
	ld	a, (x)
	or	a, #0x7c
	ld	(x), a
	ret
;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint16_t ms) //функция выдержки времени
;	-----------------------------------------
;	 function delay_ms
;	-----------------------------------------
_delay_ms:
;	../lib/lib1/inc/stm8s_delay.h: 18: TIM4->CR1  = 0x0;
	mov	0x5340+0, #0x00
;	../lib/lib1/inc/stm8s_delay.h: 19: TIM4_cfg(); //вызов функции настройки таймера
	call	_TIM4_cfg
;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms;
	ld	a, (0x04, sp)
	ld	_count+1, a
	ld	a, (0x03, sp)
	ld	_count+0, a
;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = 0x1;
	mov	0x5340+0, #0x01
;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
00101$:
	ldw	x, _count+0
	jrne	00101$
	ret
;	./buttest.c: 7: void pin_int(void) __interrupt(6)   //обработчик прерывания по порту D
;	-----------------------------------------
;	 function pin_int
;	-----------------------------------------
_pin_int:
;	./buttest.c: 11: n=5;
	mov	_n+0, #0x05
;	./buttest.c: 12: GPIOC->ODR |= 0xf8;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./buttest.c: 13: if (b>=4)
	ld	a, _b+0
	cp	a, #0x04
	jrc	00102$
;	./buttest.c: 15: b=0;
	clr	_b+0
	jra	00104$
00102$:
;	./buttest.c: 18: b++;
	inc	_b+0
00104$:
	iret
;	./buttest.c: 22: void if_0(void)  //функция условия
;	-----------------------------------------
;	 function if_0
;	-----------------------------------------
_if_0:
;	./buttest.c: 24: n++;
	ld	a, _n+0
	inc	a
;	./buttest.c: 25: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrc	00103$
;	./buttest.c: 27: n=0;
	clr	_n+0
00103$:
	ret
;	./buttest.c: 39: void Pin()  // настройка портов
;	-----------------------------------------
;	 function Pin
;	-----------------------------------------
_Pin:
;	./buttest.c: 41: GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./buttest.c: 42: GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./buttest.c: 45: GPIOD->DDR |= 0b00000000;
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./buttest.c: 46: GPIOD->CR1 |= 0b01000010;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x42
	ld	(x), a
;	./buttest.c: 47: GPIOD->CR2 |= 0b01000010;
	ldw	x, #0x5013
	ld	a, (x)
	or	a, #0x42
	ld	(x), a
;	./buttest.c: 49: EXTI->CR1  |= 0b01000000;
	ldw	x, #0x50a0
	ld	a, (x)
	or	a, #0x40
	ld	(x), a
	ret
;	./buttest.c: 52: void RunningUp()    //функция направление бегущиго огня с л->п
;	-----------------------------------------
;	 function RunningUp
;	-----------------------------------------
_RunningUp:
	sub	sp, #2
;	./buttest.c: 54: GPIOC->ODR ^= 0x08 << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x02, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00104$
00103$:
	sll	(1, sp)
	dec	a
	jrne	00103$
00104$:
	pop	a
	xor	a, (0x02, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./buttest.c: 55: delay_ms(s);
	ldw	x, _s+2
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./buttest.c: 56: GPIOC->ODR |= 0x08 << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00106$
00105$:
	sll	(1, sp)
	dec	a
	jrne	00105$
00106$:
	pop	a
	or	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./buttest.c: 57: if_0();
	call	_if_0
	addw	sp, #2
	ret
;	./buttest.c: 60: void RunningDn()    //функция направление бегущиго огня с п->л
;	-----------------------------------------
;	 function RunningDn
;	-----------------------------------------
_RunningDn:
	sub	sp, #2
;	./buttest.c: 62: GPIOC->ODR ^= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x02, sp), a
	ld	a, #0x80
	push	a
	ld	a, _n+0
	jreq	00104$
00103$:
	srl	(1, sp)
	dec	a
	jrne	00103$
00104$:
	pop	a
	xor	a, (0x02, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./buttest.c: 63: delay_ms(s);
	ldw	x, _s+2
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./buttest.c: 64: GPIOC->ODR |= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
	ld	a, #0x80
	push	a
	ld	a, _n+0
	jreq	00106$
00105$:
	srl	(1, sp)
	dec	a
	jrne	00105$
00106$:
	pop	a
	or	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./buttest.c: 65: if_0();
	call	_if_0
	addw	sp, #2
	ret
;	./buttest.c: 68: void runLdUp()    //функция переполняющийся бегущий огонь п->л
;	-----------------------------------------
;	 function runLdUp
;	-----------------------------------------
_runLdUp:
	push	a
;	./buttest.c: 70: GPIOC->ODR ^= 0x08 << n;;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00104$
00103$:
	sll	(1, sp)
	dec	a
	jrne	00103$
00104$:
	pop	a
	xor	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./buttest.c: 71: delay_ms(s);
	ldw	x, _s+2
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./buttest.c: 72: if_0();
	call	_if_0
	pop	a
	ret
;	./buttest.c: 75: void runLdDn()    //функция переполняющийся бегущий огонь п->л
;	-----------------------------------------
;	 function runLdDn
;	-----------------------------------------
_runLdDn:
	push	a
;	./buttest.c: 77: GPIOC->ODR ^= 0x80 >> n;;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
	ld	a, #0x80
	push	a
	ld	a, _n+0
	jreq	00104$
00103$:
	srl	(1, sp)
	dec	a
	jrne	00103$
00104$:
	pop	a
	xor	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./buttest.c: 78: delay_ms(s);
	ldw	x, _s+2
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./buttest.c: 79: if_0();
	call	_if_0
	pop	a
	ret
;	./buttest.c: 82: int main( void )    //основная программа
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./buttest.c: 84: Pin();
	call	_Pin
;	./buttest.c: 86: rim();
	rim 
00108$:
;	./buttest.c: 90: switch(b)
	ld	a, _b+0
	cp	a, #0x00
	jreq	00101$
	ld	a, _b+0
	cp	a, #0x01
	jreq	00102$
	ld	a, _b+0
	cp	a, #0x02
	jreq	00103$
	ld	a, _b+0
	cp	a, #0x03
	jreq	00104$
	jra	00105$
;	./buttest.c: 92: case 0:
00101$:
;	./buttest.c: 93: RunningUp();
	call	_RunningUp
;	./buttest.c: 94: break;
	jra	00108$
;	./buttest.c: 95: case 1:
00102$:
;	./buttest.c: 96: RunningDn();
	call	_RunningDn
;	./buttest.c: 97: break;
	jra	00108$
;	./buttest.c: 98: case 2:
00103$:
;	./buttest.c: 99: runLdUp();
	call	_runLdUp
;	./buttest.c: 100: break;
	jra	00108$
;	./buttest.c: 101: case 3:
00104$:
;	./buttest.c: 102: runLdDn();
	call	_runLdDn
;	./buttest.c: 103: break;
	jra	00108$
;	./buttest.c: 104: default:
00105$:
;	./buttest.c: 105: GPIOC->ODR |= 0xf8;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./buttest.c: 107: }
	jra	00108$
	ret
	.area CODE
	.area INITIALIZER
__xinit__s:
	.byte #0x00,#0x00,#0x07,#0xD0	; 2000
__xinit__b:
	.db #0x04	; 4
	.area CABS (ABS)
