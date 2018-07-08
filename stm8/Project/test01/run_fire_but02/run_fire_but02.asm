;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
; This file was generated Tue Apr 17 20:37:38 2018
;--------------------------------------------------------
	.module run_fire_but02
	.optsdcc -mstm8
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _buttonD4
	.globl _runLdDn
	.globl _runLdUp
	.globl _RunningDn
	.globl _RunningUp
	.globl _Pin
	.globl _delay
	.globl _delay_ms
	.globl _TIM4_cfg
	.globl _delay_interrupt
	.globl _b
	.globl _bs
	.globl _msb
	.globl _ms
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
_ms::
	.ds 1
_msb::
	.ds 1
_bs::
	.ds 1
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
;	./run_fire_but02.c: 3: uint8_t delay(uint8_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
;	./run_fire_but02.c: 6: while(t--);
	ld	a, #0x20
00101$:
	ld	xl, a
	dec	a
	exg	a, xl
	tnz	a
	exg	a, xl
	jrne	00101$
;	./run_fire_but02.c: 7: return t;
	ret
;	./run_fire_but02.c: 25: void Pin()  // настройка портов
;	-----------------------------------------
;	 function Pin
;	-----------------------------------------
_Pin:
;	./run_fire_but02.c: 27: GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
	ldw	x, #0x500c
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but02.c: 28: GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
	ldw	x, #0x500d
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but02.c: 29: GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but02.c: 31: GPIOD->DDR |= 0x00;
	ldw	x, #0x5011
	ld	a, (x)
	ldw	x, #0x5011
	ld	(x), a
;	./run_fire_but02.c: 32: GPIOD->CR1 |= 0x30;
	ldw	x, #0x5012
	ld	a, (x)
	or	a, #0x30
	ld	(x), a
;	./run_fire_but02.c: 33: GPIOD->CR2 |= 0x00;
	ldw	x, #0x5013
	ld	a, (x)
	ldw	x, #0x5013
	ld	(x), a
	ret
;	./run_fire_but02.c: 36: void RunningUp()    //функция направление бегущиго огня с л->п
;	-----------------------------------------
;	 function RunningUp
;	-----------------------------------------
_RunningUp:
	sub	sp, #2
;	./run_fire_but02.c: 38: GPIOC->ODR ^= 0x08 << n;
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
;	./run_fire_but02.c: 39: delay_ms(s);
	ldw	x, _s+2
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but02.c: 40: GPIOC->ODR |= 0x08 << n;
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
;	./run_fire_but02.c: 42: n++;
	ld	a, _n+0
	inc	a
;	./run_fire_but02.c: 44: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00103$
;	./run_fire_but02.c: 46: n=0;
	clr	_n+0
00103$:
	addw	sp, #2
	ret
;	./run_fire_but02.c: 50: void RunningDn()    //функция направление бегущиго огня с п->л
;	-----------------------------------------
;	 function RunningDn
;	-----------------------------------------
_RunningDn:
	sub	sp, #2
;	./run_fire_but02.c: 52: GPIOC->ODR ^= 0x80 >> n;
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
;	./run_fire_but02.c: 53: delay_ms(s);
	ldw	x, _s+2
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but02.c: 54: GPIOC->ODR |= 0x80 >> n;
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
;	./run_fire_but02.c: 56: n++;
	ld	a, _n+0
	inc	a
;	./run_fire_but02.c: 58: if ( n>=5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00103$
;	./run_fire_but02.c: 61: n=0;
	clr	_n+0
00103$:
	addw	sp, #2
	ret
;	./run_fire_but02.c: 65: void runLdUp()    //функция переполняющийся бегущий огонь п->л
;	-----------------------------------------
;	 function runLdUp
;	-----------------------------------------
_runLdUp:
	push	a
;	./run_fire_but02.c: 67: GPIOC->ODR ^= 0x08 << n;;
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
;	./run_fire_but02.c: 68: delay_ms(s);
	ldw	x, _s+2
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but02.c: 69: n++;
	ld	a, _n+0
	inc	a
;	./run_fire_but02.c: 70: if ( n >= 5 )
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00103$
;	./run_fire_but02.c: 72: n = 0;
	clr	_n+0
00103$:
	pop	a
	ret
;	./run_fire_but02.c: 76: void runLdDn()    //функция переполняющийся бегущий огонь п->л
;	-----------------------------------------
;	 function runLdDn
;	-----------------------------------------
_runLdDn:
	push	a
;	./run_fire_but02.c: 78: GPIOC->ODR ^= 0x80 >> n;;
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
;	./run_fire_but02.c: 79: delay_ms(s);
	ldw	x, _s+2
	pushw	x
	call	_delay_ms
	addw	sp, #2
;	./run_fire_but02.c: 80: n++;
	ld	a, _n+0
	inc	a
;	./run_fire_but02.c: 81: if (n>=5)
	ld	_n+0, a
	cp	a, #0x05
	jrslt	00103$
;	./run_fire_but02.c: 83: n = 0;
	clr	_n+0
00103$:
	pop	a
	ret
;	./run_fire_but02.c: 87: uint8_t buttonD4()
;	-----------------------------------------
;	 function buttonD4
;	-----------------------------------------
_buttonD4:
	sub	sp, #4
;	./run_fire_but02.c: 90: if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>25) // фиксируем нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	bcp	a, #0x10
	jrne	00104$
	btjf	_bs+0, #0, 00142$
	jra	00104$
00142$:
	push	_ms+0
	call	_delay
	addw	sp, #1
	clrw	x
	ld	xl, a
	ld	a, _msb+0
	ld	(0x02, sp), a
	clr	(0x01, sp)
	subw	x, (0x01, sp)
	cpw	x, #0x0019
	jrsle	00104$
;	./run_fire_but02.c: 92: bs=1;
	mov	_bs+0, #0x01
;	./run_fire_but02.c: 93: msb=ms;
	ld	a, _ms+0
	ld	_msb+0, a
;	./run_fire_but02.c: 94: GPIOC->ODR |= 0xf8;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but02.c: 95: n=0;
	clr	_n+0
;	./run_fire_but02.c: 96: b++;
	ldw	x, _b+0
	incw	x
;	./run_fire_but02.c: 97: if ( b>=5 )
	ldw	_b+0, x
	cpw	x, #0x0005
	jrc	00104$
;	./run_fire_but02.c: 99: b=0;
	clrw	x
	ldw	_b+0, x
00104$:
;	./run_fire_but02.c: 103: if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>25) // фиксируем отпускание  нажатие кнопки
	ldw	x, #0x5010
	ld	a, (x)
	and	a, #0x10
	cp	a, #0x10
	jrne	00108$
	btjt	_bs+0, #0, 00148$
	jra	00108$
00148$:
	push	_ms+0
	call	_delay
	addw	sp, #1
	clrw	x
	ld	xl, a
	ld	a, _msb+0
	ld	(0x04, sp), a
	clr	(0x03, sp)
	subw	x, (0x03, sp)
	cpw	x, #0x0019
	jrsle	00108$
;	./run_fire_but02.c: 105: bs=0;
	clr	_bs+0
;	./run_fire_but02.c: 106: msb=ms;
	ld	a, _ms+0
	ld	_msb+0, a
00108$:
;	./run_fire_but02.c: 109: return b;
	ld	a, _b+1
	addw	sp, #4
	ret
;	./run_fire_but02.c: 135: int main( void )    //основная программа
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	./run_fire_but02.c: 137: Pin();
	call	_Pin
;	./run_fire_but02.c: 138: CLK->CKDIVR |= 0; // коэффициент деления частоты HSI-генератора (16MHz)
	ldw	x, #0x50c6
	ld	a, (x)
	ldw	x, #0x50c6
	ld	(x), a
;	./run_fire_but02.c: 139: rim();
	rim 
;	./run_fire_but02.c: 141: while(1)    //бесконечный цикл
00108$:
;	./run_fire_but02.c: 144: buttonD4();
	call	_buttonD4
;	./run_fire_but02.c: 146: switch(b)
	ldw	x, _b+0
	cpw	x, #0x0003
	jrugt	00105$
	ldw	x, _b+0
	sllw	x
	ldw	x, (#00121$, x)
	jp	(x)
00121$:
	.dw	#00101$
	.dw	#00102$
	.dw	#00103$
	.dw	#00104$
;	./run_fire_but02.c: 148: case 0:
00101$:
;	./run_fire_but02.c: 149: RunningUp();
	call	_RunningUp
;	./run_fire_but02.c: 150: break;
	jra	00108$
;	./run_fire_but02.c: 151: case 1:
00102$:
;	./run_fire_but02.c: 152: RunningDn();
	call	_RunningDn
;	./run_fire_but02.c: 153: break;
	jra	00108$
;	./run_fire_but02.c: 154: case 2:
00103$:
;	./run_fire_but02.c: 155: runLdUp();
	call	_runLdUp
;	./run_fire_but02.c: 156: break;
	jra	00108$
;	./run_fire_but02.c: 157: case 3:
00104$:
;	./run_fire_but02.c: 158: runLdDn();
	call	_runLdDn
;	./run_fire_but02.c: 159: break;
	jra	00108$
;	./run_fire_but02.c: 160: default:
00105$:
;	./run_fire_but02.c: 161: GPIOC->ODR |= 0xf8;
	ldw	x, #0x500a
	ld	a, (x)
	or	a, #0xf8
	ld	(x), a
;	./run_fire_but02.c: 163: }
	jra	00108$
	ret
	.area CODE
	.area INITIALIZER
__xinit__s:
	.byte #0x00,#0x00,#0x27,#0x10	; 10000
__xinit__ms:
	.db #0x00	; 0
__xinit__msb:
	.db #0x00	; 0
__xinit__bs:
	.db #0x00	;  0
__xinit__b:
	.dw #0x03E8
	.area CABS (ABS)
