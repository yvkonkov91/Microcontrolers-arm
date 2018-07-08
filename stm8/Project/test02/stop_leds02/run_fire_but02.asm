;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Mon Jun  4 19:20:13 2018
;--------------------------------------------------------
	.module run_fire_but02
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _RunningDn
	.globl _RunningUp
	.globl _adc1_r_cfg
	.globl _clearPin
	.globl _Pin
	.globl _delay_ms
	.globl _tim4_cfg
	.globl _delay_interrupt
	.globl _n
	.globl _adc
	.globl _count
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area DATA
_count::
	.ds 2
_adc::
	.ds 2
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area INITIALIZED
_n::
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
;	../lib/lib1/inc/stm8s_delay.h: 9: void tim4_cfg() //настройка таймера
;	-----------------------------------------
;	 function tim4_cfg
;	-----------------------------------------
_tim4_cfg:
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
;	./run_fire_but02.c: 15: void Pin()  // настройка портов
;	-----------------------------------------
;	 function Pin
;	-----------------------------------------
_Pin:
;	./run_fire_but02.c: 18: GPIOC->DDR |= 0b11111000;
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but02.c: 19: GPIOC->CR1 |= 0b11111000;
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but02.c: 20: GPIOC->ODR |= 0b11111000;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but02.c: 22: GPIOD->DDR |= (0<<2);   //устанавливаем на выход пин 5 порта D
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./run_fire_but02.c: 23: GPIOD->CR1 |= (0<<2);   //устанавливаем подтяжку пин 5 порта D
	ldw	x, #0x5012
	ld	a, (x)
	ldw	x, #0x5012
	ld	(x), a
;	./run_fire_but02.c: 24: GPIOD->CR2 |= (0<<2);   //минимальная скорость на выход / без прерывания на вход
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
;	./run_fire_but02.c: 27: GPIOB->DDR |= 0b00000000;
	ldw	x, #0x5007
	ld	a, (x)
	ldw	x, #0x5007
	ld	(x), a
;	./run_fire_but02.c: 28: GPIOB->CR1 |= 0b00100000;
	ldw	x, #0x5008
	ld	a, (x)
	or	a, #0x20
	ld	(x), a
;	./run_fire_but02.c: 29: GPIOB->CR2 |= 0b00000000;
	ldw	x, #0x5009
	ld	a, (x)
	ldw	x, #0x5009
	ld	(x), a
	ret
;	./run_fire_but02.c: 33: void clearPin()
;	-----------------------------------------
;	 function clearPin
;	-----------------------------------------
_clearPin:
;	./run_fire_but02.c: 35: GPIOC->ODR = 0b11111000;
	mov	0x500a+0, #0xf8
	ret
;	./run_fire_but02.c: 38: uint16_t adc1_r_cfg(uint8_t channel) 
;	-----------------------------------------
;	 function adc1_r_cfg
;	-----------------------------------------
_adc1_r_cfg:
	sub	sp, #3
;	./run_fire_but02.c: 42: CLK->PCKENR2 |= 0b00001000; //тактирование модуля ADC1
	ldw	x, #0x50ca
	ld	a, (x)
	or	a, #0x08
	ld	(x), a
;	./run_fire_but02.c: 43: ADC1->CSR |= ((0x0F)&channel); //выбор канала
	ldw	x, #0x5400
	ld	a, (x)
	ld	(0x03, sp), a
	ld	a, (0x06, sp)
	and	a, #0x0f
	or	a, (0x03, sp)
	ldw	x, #0x5400
	ld	(x), a
;	./run_fire_but02.c: 44: ADC1->CR2 |= (1<<3);   // номер канала преобразования АЦП
	ldw	x, #0x5402
	ld	a, (x)
	or	a, #0x08
	ld	(x), a
;	./run_fire_but02.c: 45: ADC1->CR1 |= (1<<0);   //включение АЦП 
	bset	0x5401, #0
;	./run_fire_but02.c: 46: ADC1->CR1 |= (0<<1);   // одиночное преобразование
	ldw	x, #0x5401
	ld	a, (x)
	ldw	x, #0x5401
	ld	(x), a
;	./run_fire_but02.c: 47: while(((ADC1->CSR)&(1<<7))== 0);   // пока не завершено преобразование
00101$:
	ldw	x, #0x5400
	ld	a, (x)
	tnz	a
	jrpl	00101$
;	./run_fire_but02.c: 48: val |= (uint8_t)ADC1->DRL;    //запись результата в переменную val из нижнего регистра
	ldw	x, #0x5405
	ld	a, (x)
	clrw	x
	ld	xl, a
	ldw	(0x01, sp), x
;	./run_fire_but02.c: 49: val |= (uint8_t)ADC1->DRH<<8;    //запись результата в переменную val из верхнего регистра
	ldw	x, #0x5404
	ld	a, (x)
	ld	xh, a
	clr	a
	clr	a
	or	a, (0x02, sp)
	rlwa	x
	or	a, (0x01, sp)
	ld	xh, a
;	./run_fire_but02.c: 50: ADC1->CR1 &= ~(1<<0); // ADC Stop Conversion
	ldw	y, #0x5401
	ld	a, (y)
	and	a, #0xfe
	ld	(y), a
;	./run_fire_but02.c: 51: val &= 0x03ff;
	ld	a, xh
	and	a, #0x03
	ld	xh, a
;	./run_fire_but02.c: 52: return val;
	addw	sp, #3
	ret
;	./run_fire_but02.c: 55: void RunningUp()
;	-----------------------------------------
;	 function RunningUp
;	-----------------------------------------
_RunningUp:
	sub	sp, #2
;	./run_fire_but02.c: 57: if(n<12)
	ld	a, _n+0
	cp	a, #0x0c
	jrnc	00102$
;	./run_fire_but02.c: 59: GPIOC->ODR |= 0b01110111;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0x77
	ld	(x), a
;	./run_fire_but02.c: 60: GPIOC->ODR ^= 0b10101111;
	ldw	x, #0x500a
	ld	a, (x)
	xor	a, #0xaf
	ld	(x), a
;	./run_fire_but02.c: 61: delay_ms(adc);
	push	_adc+1
	push	_adc+0
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but02.c: 62: GPIOC->ODR |= 0b10101111;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xaf
	ld	(x), a
;	./run_fire_but02.c: 63: GPIOC->ODR ^= 0b01110111;
	ldw	x, #0x500a
	ld	a, (x)
	xor	a, #0x77
	ld	(x), a
;	./run_fire_but02.c: 64: delay_ms(adc-n*64);
	clrw	x
	ld	a, _n+0
	ld	xl, a
	sllw	x
	sllw	x
	sllw	x
	sllw	x
	sllw	x
	sllw	x
	ldw	(0x01, sp), x
	ldw	x, _adc+0
	subw	x, (0x01, sp)
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but02.c: 65: n++;
	ld	a, _n+0
	inc	a
	ld	_n+0, a
	jra	00104$
00102$:
;	./run_fire_but02.c: 67: else GPIOC->ODR =0b11011000;
	mov	0x500a+0, #0xd8
00104$:
	addw	sp, #2
	ret
;	./run_fire_but02.c: 70: void RunningDn()
;	-----------------------------------------
;	 function RunningDn
;	-----------------------------------------
_RunningDn:
	sub	sp, #2
;	./run_fire_but02.c: 72: if(n<12)
	ld	a, _n+0
	cp	a, #0x0c
	jrnc	00103$
;	./run_fire_but02.c: 74: GPIOC->ODR ^= 0b11011000;
	ldw	x, #0x500a
	ld	a, (x)
	xor	a, #0xd8
	ld	(x), a
;	./run_fire_but02.c: 75: delay_ms(adc-n*64);
	clrw	x
	ld	a, _n+0
	ld	xl, a
	sllw	x
	sllw	x
	sllw	x
	sllw	x
	sllw	x
	sllw	x
	ldw	(0x01, sp), x
	ldw	x, _adc+0
	subw	x, (0x01, sp)
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but02.c: 77: n++;
	ld	a, _n+0
	inc	a
	ld	_n+0, a
00103$:
	addw	sp, #2
	ret
;	./run_fire_but02.c: 82: int main( void )    //основная программа
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./run_fire_but02.c: 84: Pin();
	call	_Pin
;	./run_fire_but02.c: 85: tim4_cfg();
	call	_tim4_cfg
;	./run_fire_but02.c: 86: rim();
	rim 
;	./run_fire_but02.c: 87: clearPin();
	call	_clearPin
;	./run_fire_but02.c: 88: adc=(adc1_r_cfg(3))*10;
	push	#0x03
	call	_adc1_r_cfg
	pop	a
	pushw	x
	push	#0x0a
	push	#0x00
	call	__mulint
	addw	sp, #4
	ldw	_adc+0, x
;	./run_fire_but02.c: 90: while(1)    //бесконечный цикл
00105$:
;	./run_fire_but02.c: 93: if(GPIOB->IDR==0)
	ldw	x, #0x5006
	ld	a, (x)
	tnz	a
	jrne	00102$
;	./run_fire_but02.c: 95: RunningUp();
	call	_RunningUp
	jra	00105$
00102$:
;	./run_fire_but02.c: 98: RunningDn();
	call	_RunningDn
	jra	00105$
	ret
	.area CODE
	.area INITIALIZER
__xinit__n:
	.db #0x00	; 0
	.area CABS (ABS)
