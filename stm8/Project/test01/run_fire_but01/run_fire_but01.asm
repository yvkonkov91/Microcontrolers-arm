;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Wed Apr 11 23:24:16 2018
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
	.globl _delay_ms
	.globl _TIM4_cfg
	.globl _delay_interrupt
	.globl _bls
	.globl _bs
	.globl _msb
	.globl _ms1
	.globl _b
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
_b::
	.ds 1
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area INITIALIZED
_ms1::
	.ds 1
_msb::
	.ds 1
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
;	./run_fire_but01.c: 27: void Pin()  // настройка портов
;	-----------------------------------------
;	 function Pin
;	-----------------------------------------
_Pin:
;	./run_fire_but01.c: 29: GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but01.c: 30: GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but01.c: 31: GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but01.c: 33: GPIOD->DDR |= 0x00;
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./run_fire_but01.c: 34: GPIOD->CR1 |= 0x10;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x10
	ld	(x), a
;	./run_fire_but01.c: 35: GPIOD->CR2 |= 0x00;
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
	ret
;	./run_fire_but01.c: 38: void RunningUp()    //функция направление бегущиго огня с л->п
;	-----------------------------------------
;	 function RunningUp
;	-----------------------------------------
_RunningUp:
	sub	sp, #2
;	./run_fire_but01.c: 40: GPIOC->ODR ^= 0x08 << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00110$
00109$:
	sll	(1, sp)
	dec	a
	jrne	00109$
00110$:
	pop	a
	xor	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./run_fire_but01.c: 41: delay_ms(50000);
	push	#0x50
	push	#0xc3
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but01.c: 42: GPIOC->ODR |= 0x08 << n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x02, sp), a
	ld	a, #0x08
	push	a
	ld	a, _n+0
	jreq	00112$
00111$:
	sll	(1, sp)
	dec	a
	jrne	00111$
00112$:
	pop	a
	or	a, (0x02, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./run_fire_but01.c: 44: n++;
	ld	a, _n+0
	inc	a
;	./run_fire_but01.c: 46: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00103$
;	./run_fire_but01.c: 49: n=0;
	clr	_n+0
00103$:
	addw	sp, #2
	ret
;	./run_fire_but01.c: 53: void RunningDn()    //функция направление бегущиго огня с п->л
;	-----------------------------------------
;	 function RunningDn
;	-----------------------------------------
_RunningDn:
	sub	sp, #2
;	./run_fire_but01.c: 55: GPIOC->ODR ^= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x01, sp), a
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
	xor	a, (0x01, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./run_fire_but01.c: 56: delay_ms(500);
	push	#0xf4
	push	#0x01
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but01.c: 57: GPIOC->ODR |= 0x80 >> n;
	ldw	x, #0x500a
	ld	a, (x)
	ld	(0x02, sp), a
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
	or	a, (0x02, sp)
	ldw	x, #0x500a
	ld	(x), a
;	./run_fire_but01.c: 59: n++;
	ld	a, _n+0
	inc	a
;	./run_fire_but01.c: 61: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00103$
;	./run_fire_but01.c: 64: n=0;
	clr	_n+0
00103$:
	addw	sp, #2
	ret
;	./run_fire_but01.c: 68: uint8_t button ()
;	-----------------------------------------
;	 function button
;	-----------------------------------------
_button:
;	./run_fire_but01.c: 70: sim();
	sim 
;	./run_fire_but01.c: 71: if ((GPIOD->IDR & 0x10) ==0x00 && !bs /*&& (delay(ms1)-msb)>16*/) // фиксируем нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
;	./run_fire_but01.c: 74: msb=ms1;
	exg	a, yl
	ld	a, _ms1+0
	exg	a, yl
;	./run_fire_but01.c: 71: if ((GPIOD->IDR & 0x10) ==0x00 && !bs /*&& (delay(ms1)-msb)>16*/) // фиксируем нажатие кнопки
	bcp	a, #0x10
	jrne	00102$
	btjf	_bs+0, #0, 00126$
	jra	00102$
00126$:
;	./run_fire_but01.c: 73: bs=1;
	mov	_bs+0, #0x01
;	./run_fire_but01.c: 74: msb=ms1;
	ld	a, yl
	ld	_msb+0, a
;	./run_fire_but01.c: 75: b^=0;
	ld	a, _b+0
00102$:
;	./run_fire_but01.c: 78: if ((GPIOD->IDR & 0x10) ==0x10 && bs /*&& (delay(ms1)-msb)>16*/) // фиксируем отпускание  нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	and	a, #0x10
	cp	a, #0x10
	jrne	00105$
	btjt	_bs+0, #0, 00130$
	jra	00105$
00130$:
;	./run_fire_but01.c: 80: bs=0;
	clr	_bs+0
;	./run_fire_but01.c: 81: msb=ms1;
	ld	a, yl
	ld	_msb+0, a
;	./run_fire_but01.c: 82: b^=1;
	ld	a, _b+0
	sub	a, #0x01
	clr	a
	rlc	a
	ld	_b+0, a
00105$:
;	./run_fire_but01.c: 84: rim();
	rim 
;	./run_fire_but01.c: 85: return b;
	ld	a, _b+0
	ret
;	./run_fire_but01.c: 89: int main( void )    //основная программа
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./run_fire_but01.c: 91: CLK->CKDIVR |= 0; // коэффициент деления частоты HSI-генератора (16MHz)
	ldw	x, #0x50c6
	ld	a, (x)
	ldw	x, #0x50c6
	ld	(x), a
;	./run_fire_but01.c: 92: Pin();
	call	_Pin
;	./run_fire_but01.c: 93: rim(); // разрешение прерывания!
	rim 
;	./run_fire_but01.c: 95: while(1)    //бесконечный цикл
00105$:
;	./run_fire_but01.c: 97: button(); 
	call	_button
;	./run_fire_but01.c: 99: if (b==0) // проверяем нажатие кнопки
	btjf	_b+0, #0, 00117$
	jra	00102$
00117$:
;	./run_fire_but01.c: 101: RunningUp();
	call	_RunningUp
	jra	00105$
00102$:
;	./run_fire_but01.c: 106: RunningDn();
	call	_RunningDn
	jra	00105$
	ret
	.area CODE
	.area INITIALIZER
__xinit__ms1:
	.db #0x00	; 0
__xinit__msb:
	.db #0x00	; 0
__xinit__bs:
	.db #0x00	;  0
__xinit__bls:
	.db #0x00	;  0
	.area CABS (ABS)
