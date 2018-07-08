                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Wed Apr 11 23:24:16 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module run_fire_but01
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _button
                                     14 	.globl _RunningDn
                                     15 	.globl _RunningUp
                                     16 	.globl _Pin
                                     17 	.globl _delay_ms
                                     18 	.globl _TIM4_cfg
                                     19 	.globl _delay_interrupt
                                     20 	.globl _bls
                                     21 	.globl _bs
                                     22 	.globl _msb
                                     23 	.globl _ms1
                                     24 	.globl _b
                                     25 	.globl _n
                                     26 	.globl _count
                                     27 ;--------------------------------------------------------
                                     28 ; ram data
                                     29 ;--------------------------------------------------------
                                     30 	.area DATA
      000001                         31 _count::
      000001                         32 	.ds 2
      000003                         33 _n::
      000003                         34 	.ds 1
      000004                         35 _b::
      000004                         36 	.ds 1
                                     37 ;--------------------------------------------------------
                                     38 ; ram data
                                     39 ;--------------------------------------------------------
                                     40 	.area INITIALIZED
      000005                         41 _ms1::
      000005                         42 	.ds 1
      000006                         43 _msb::
      000006                         44 	.ds 1
      000007                         45 _bs::
      000007                         46 	.ds 1
      000008                         47 _bls::
      000008                         48 	.ds 1
                                     49 ;--------------------------------------------------------
                                     50 ; Stack segment in internal ram 
                                     51 ;--------------------------------------------------------
                                     52 	.area	SSEG
      000009                         53 __start__stack:
      000009                         54 	.ds	1
                                     55 
                                     56 ;--------------------------------------------------------
                                     57 ; absolute external ram data
                                     58 ;--------------------------------------------------------
                                     59 	.area DABS (ABS)
                                     60 ;--------------------------------------------------------
                                     61 ; interrupt vector 
                                     62 ;--------------------------------------------------------
                                     63 	.area HOME
      008000                         64 __interrupt_vect:
      008000 82 00 80 83             65 	int s_GSINIT ;reset
      008004 82 00 00 00             66 	int 0x0000 ;trap
      008008 82 00 00 00             67 	int 0x0000 ;int0
      00800C 82 00 00 00             68 	int 0x0000 ;int1
      008010 82 00 00 00             69 	int 0x0000 ;int2
      008014 82 00 00 00             70 	int 0x0000 ;int3
      008018 82 00 00 00             71 	int 0x0000 ;int4
      00801C 82 00 00 00             72 	int 0x0000 ;int5
      008020 82 00 00 00             73 	int 0x0000 ;int6
      008024 82 00 00 00             74 	int 0x0000 ;int7
      008028 82 00 00 00             75 	int 0x0000 ;int8
      00802C 82 00 00 00             76 	int 0x0000 ;int9
      008030 82 00 00 00             77 	int 0x0000 ;int10
      008034 82 00 00 00             78 	int 0x0000 ;int11
      008038 82 00 00 00             79 	int 0x0000 ;int12
      00803C 82 00 00 00             80 	int 0x0000 ;int13
      008040 82 00 00 00             81 	int 0x0000 ;int14
      008044 82 00 00 00             82 	int 0x0000 ;int15
      008048 82 00 00 00             83 	int 0x0000 ;int16
      00804C 82 00 00 00             84 	int 0x0000 ;int17
      008050 82 00 00 00             85 	int 0x0000 ;int18
      008054 82 00 00 00             86 	int 0x0000 ;int19
      008058 82 00 00 00             87 	int 0x0000 ;int20
      00805C 82 00 00 00             88 	int 0x0000 ;int21
      008060 82 00 00 00             89 	int 0x0000 ;int22
      008064 82 00 80 A0             90 	int _delay_interrupt ;int23
      008068 82 00 00 00             91 	int 0x0000 ;int24
      00806C 82 00 00 00             92 	int 0x0000 ;int25
      008070 82 00 00 00             93 	int 0x0000 ;int26
      008074 82 00 00 00             94 	int 0x0000 ;int27
      008078 82 00 00 00             95 	int 0x0000 ;int28
      00807C 82 00 00 00             96 	int 0x0000 ;int29
                                     97 ;--------------------------------------------------------
                                     98 ; global & static initialisations
                                     99 ;--------------------------------------------------------
                                    100 	.area HOME
                                    101 	.area GSINIT
                                    102 	.area GSFINAL
                                    103 	.area GSINIT
      008083                        104 __sdcc_gs_init_startup:
      008083                        105 __sdcc_init_data:
                                    106 ; stm8_genXINIT() start
      008083 AE 00 04         [ 2]  107 	ldw x, #l_DATA
      008086 27 07            [ 1]  108 	jreq	00002$
      008088                        109 00001$:
      008088 72 4F 00 00      [ 1]  110 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]  111 	decw x
      00808D 26 F9            [ 1]  112 	jrne	00001$
      00808F                        113 00002$:
      00808F AE 00 04         [ 2]  114 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]  115 	jreq	00004$
      008094                        116 00003$:
      008094 D6 82 19         [ 1]  117 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 04         [ 1]  118 	ld	(s_INITIALIZED - 1, x), a
      00809A 5A               [ 2]  119 	decw	x
      00809B 26 F7            [ 1]  120 	jrne	00003$
      00809D                        121 00004$:
                                    122 ; stm8_genXINIT() end
                                    123 	.area GSFINAL
      00809D CC 80 80         [ 2]  124 	jp	__sdcc_program_startup
                                    125 ;--------------------------------------------------------
                                    126 ; Home
                                    127 ;--------------------------------------------------------
                                    128 	.area HOME
                                    129 	.area HOME
      008080                        130 __sdcc_program_startup:
      008080 CC 81 F9         [ 2]  131 	jp	_main
                                    132 ;	return from main will return to caller
                                    133 ;--------------------------------------------------------
                                    134 ; code
                                    135 ;--------------------------------------------------------
                                    136 	.area CODE
                                    137 ;	../lib/lib1/inc/stm8s_delay.h: 3: extern void delay_interrupt(void) __interrupt(23) //обработчик прерывания функции delay_ms таймера TIM4
                                    138 ;	-----------------------------------------
                                    139 ;	 function delay_interrupt
                                    140 ;	-----------------------------------------
      0080A0                        141 _delay_interrupt:
                                    142 ;	../lib/lib1/inc/stm8s_delay.h: 5: if(count)
      0080A0 CE 00 01         [ 2]  143 	ldw	x, _count+0
      0080A3 27 07            [ 1]  144 	jreq	00102$
                                    145 ;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
      0080A5 CE 00 01         [ 2]  146 	ldw	x, _count+0
      0080A8 5A               [ 2]  147 	decw	x
      0080A9 CF 00 01         [ 2]  148 	ldw	_count+0, x
      0080AC                        149 00102$:
                                    150 ;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = 0x00; ////событие обновления не происходило
      0080AC 35 00 53 44      [ 1]  151 	mov	0x5344+0, #0x00
      0080B0 80               [11]  152 	iret
                                    153 ;	../lib/lib1/inc/stm8s_delay.h: 9: void TIM4_cfg() //настройка таймера
                                    154 ;	-----------------------------------------
                                    155 ;	 function TIM4_cfg
                                    156 ;	-----------------------------------------
      0080B1                        157 _TIM4_cfg:
                                    158 ;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = 0x1;   //событие обновления не происходило
      0080B1 35 01 53 44      [ 1]  159 	mov	0x5344+0, #0x01
                                    160 ;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= 1;    // прерывания по обновлению включены
      0080B5 72 10 53 43      [ 1]  161 	bset	0x5343, #0
                                    162 ;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 128; // установка предделителя 128
      0080B9 72 1E 53 47      [ 1]  163 	bset	0x5347, #7
                                    164 ;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки
      0080BD AE 53 48         [ 2]  165 	ldw	x, #0x5348
      0080C0 F6               [ 1]  166 	ld	a, (x)
      0080C1 AA 7C            [ 1]  167 	or	a, #0x7c
      0080C3 F7               [ 1]  168 	ld	(x), a
      0080C4 81               [ 4]  169 	ret
                                    170 ;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint16_t ms) //функция выдержки времени
                                    171 ;	-----------------------------------------
                                    172 ;	 function delay_ms
                                    173 ;	-----------------------------------------
      0080C5                        174 _delay_ms:
                                    175 ;	../lib/lib1/inc/stm8s_delay.h: 18: TIM4->CR1  = 0x0;
      0080C5 35 00 53 40      [ 1]  176 	mov	0x5340+0, #0x00
                                    177 ;	../lib/lib1/inc/stm8s_delay.h: 19: TIM4_cfg(); //вызов функции настройки таймера
      0080C9 CD 80 B1         [ 4]  178 	call	_TIM4_cfg
                                    179 ;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms;
      0080CC 7B 04            [ 1]  180 	ld	a, (0x04, sp)
      0080CE C7 00 02         [ 1]  181 	ld	_count+1, a
      0080D1 7B 03            [ 1]  182 	ld	a, (0x03, sp)
      0080D3 C7 00 01         [ 1]  183 	ld	_count+0, a
                                    184 ;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = 0x1;
      0080D6 35 01 53 40      [ 1]  185 	mov	0x5340+0, #0x01
                                    186 ;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
      0080DA                        187 00101$:
      0080DA CE 00 01         [ 2]  188 	ldw	x, _count+0
      0080DD 26 FB            [ 1]  189 	jrne	00101$
      0080DF 81               [ 4]  190 	ret
                                    191 ;	./run_fire_but01.c: 27: void Pin()  // настройка портов
                                    192 ;	-----------------------------------------
                                    193 ;	 function Pin
                                    194 ;	-----------------------------------------
      0080E0                        195 _Pin:
                                    196 ;	./run_fire_but01.c: 29: GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
      0080E0 AE 50 0C         [ 2]  197 	ldw	x, #0x500c
      0080E3 F6               [ 1]  198 	ld	a, (x)
      0080E4 AA F8            [ 1]  199 	or	a, #0xf8
      0080E6 F7               [ 1]  200 	ld	(x), a
                                    201 ;	./run_fire_but01.c: 30: GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
      0080E7 AE 50 0D         [ 2]  202 	ldw	x, #0x500d
      0080EA F6               [ 1]  203 	ld	a, (x)
      0080EB AA F8            [ 1]  204 	or	a, #0xf8
      0080ED F7               [ 1]  205 	ld	(x), a
                                    206 ;	./run_fire_but01.c: 31: GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
      0080EE AE 50 0A         [ 2]  207 	ldw	x, #0x500a
      0080F1 F6               [ 1]  208 	ld	a, (x)
      0080F2 AA F8            [ 1]  209 	or	a, #0xf8
      0080F4 F7               [ 1]  210 	ld	(x), a
                                    211 ;	./run_fire_but01.c: 33: GPIOD->DDR |= 0x00;
      0080F5 AE 50 11         [ 2]  212 	ldw	x, #0x5011
      0080F8 F6               [ 1]  213 	ld	a, (x)
      0080F9 AE 50 11         [ 2]  214 	ldw	x, #0x5011
      0080FC F7               [ 1]  215 	ld	(x), a
                                    216 ;	./run_fire_but01.c: 34: GPIOD->CR1 |= 0x10;
      0080FD AE 50 12         [ 2]  217 	ldw	x, #0x5012
      008100 F6               [ 1]  218 	ld	a, (x)
      008101 AA 10            [ 1]  219 	or	a, #0x10
      008103 F7               [ 1]  220 	ld	(x), a
                                    221 ;	./run_fire_but01.c: 35: GPIOD->CR2 |= 0x00;
      008104 AE 50 13         [ 2]  222 	ldw	x, #0x5013
      008107 F6               [ 1]  223 	ld	a, (x)
      008108 AE 50 13         [ 2]  224 	ldw	x, #0x5013
      00810B F7               [ 1]  225 	ld	(x), a
      00810C 81               [ 4]  226 	ret
                                    227 ;	./run_fire_but01.c: 38: void RunningUp()    //функция направление бегущиго огня с л->п
                                    228 ;	-----------------------------------------
                                    229 ;	 function RunningUp
                                    230 ;	-----------------------------------------
      00810D                        231 _RunningUp:
      00810D 52 02            [ 2]  232 	sub	sp, #2
                                    233 ;	./run_fire_but01.c: 40: GPIOC->ODR ^= 0x08 << n;
      00810F AE 50 0A         [ 2]  234 	ldw	x, #0x500a
      008112 F6               [ 1]  235 	ld	a, (x)
      008113 6B 01            [ 1]  236 	ld	(0x01, sp), a
      008115 A6 08            [ 1]  237 	ld	a, #0x08
      008117 88               [ 1]  238 	push	a
      008118 C6 00 03         [ 1]  239 	ld	a, _n+0
      00811B 27 05            [ 1]  240 	jreq	00110$
      00811D                        241 00109$:
      00811D 08 01            [ 1]  242 	sll	(1, sp)
      00811F 4A               [ 1]  243 	dec	a
      008120 26 FB            [ 1]  244 	jrne	00109$
      008122                        245 00110$:
      008122 84               [ 1]  246 	pop	a
      008123 18 01            [ 1]  247 	xor	a, (0x01, sp)
      008125 AE 50 0A         [ 2]  248 	ldw	x, #0x500a
      008128 F7               [ 1]  249 	ld	(x), a
                                    250 ;	./run_fire_but01.c: 41: delay_ms(50000);
      008129 4B 50            [ 1]  251 	push	#0x50
      00812B 4B C3            [ 1]  252 	push	#0xc3
      00812D CD 80 C5         [ 4]  253 	call	_delay_ms
      008130 5B 02            [ 2]  254 	addw	sp, #2
                                    255 ;	./run_fire_but01.c: 42: GPIOC->ODR |= 0x08 << n;
      008132 AE 50 0A         [ 2]  256 	ldw	x, #0x500a
      008135 F6               [ 1]  257 	ld	a, (x)
      008136 6B 02            [ 1]  258 	ld	(0x02, sp), a
      008138 A6 08            [ 1]  259 	ld	a, #0x08
      00813A 88               [ 1]  260 	push	a
      00813B C6 00 03         [ 1]  261 	ld	a, _n+0
      00813E 27 05            [ 1]  262 	jreq	00112$
      008140                        263 00111$:
      008140 08 01            [ 1]  264 	sll	(1, sp)
      008142 4A               [ 1]  265 	dec	a
      008143 26 FB            [ 1]  266 	jrne	00111$
      008145                        267 00112$:
      008145 84               [ 1]  268 	pop	a
      008146 1A 02            [ 1]  269 	or	a, (0x02, sp)
      008148 AE 50 0A         [ 2]  270 	ldw	x, #0x500a
      00814B F7               [ 1]  271 	ld	(x), a
                                    272 ;	./run_fire_but01.c: 44: n++;
      00814C C6 00 03         [ 1]  273 	ld	a, _n+0
      00814F 4C               [ 1]  274 	inc	a
                                    275 ;	./run_fire_but01.c: 46: if ( n>=5 )
      008150 C7 00 03         [ 1]  276 	ld	_n+0, a
      008153 A1 05            [ 1]  277 	cp	a, #0x05
      008155 2F 04            [ 1]  278 	jrslt	00103$
                                    279 ;	./run_fire_but01.c: 49: n=0;
      008157 72 5F 00 03      [ 1]  280 	clr	_n+0
      00815B                        281 00103$:
      00815B 5B 02            [ 2]  282 	addw	sp, #2
      00815D 81               [ 4]  283 	ret
                                    284 ;	./run_fire_but01.c: 53: void RunningDn()    //функция направление бегущиго огня с п->л
                                    285 ;	-----------------------------------------
                                    286 ;	 function RunningDn
                                    287 ;	-----------------------------------------
      00815E                        288 _RunningDn:
      00815E 52 02            [ 2]  289 	sub	sp, #2
                                    290 ;	./run_fire_but01.c: 55: GPIOC->ODR ^= 0x80 >> n;
      008160 AE 50 0A         [ 2]  291 	ldw	x, #0x500a
      008163 F6               [ 1]  292 	ld	a, (x)
      008164 6B 01            [ 1]  293 	ld	(0x01, sp), a
      008166 A6 80            [ 1]  294 	ld	a, #0x80
      008168 88               [ 1]  295 	push	a
      008169 C6 00 03         [ 1]  296 	ld	a, _n+0
      00816C 27 05            [ 1]  297 	jreq	00110$
      00816E                        298 00109$:
      00816E 04 01            [ 1]  299 	srl	(1, sp)
      008170 4A               [ 1]  300 	dec	a
      008171 26 FB            [ 1]  301 	jrne	00109$
      008173                        302 00110$:
      008173 84               [ 1]  303 	pop	a
      008174 18 01            [ 1]  304 	xor	a, (0x01, sp)
      008176 AE 50 0A         [ 2]  305 	ldw	x, #0x500a
      008179 F7               [ 1]  306 	ld	(x), a
                                    307 ;	./run_fire_but01.c: 56: delay_ms(500);
      00817A 4B F4            [ 1]  308 	push	#0xf4
      00817C 4B 01            [ 1]  309 	push	#0x01
      00817E CD 80 C5         [ 4]  310 	call	_delay_ms
      008181 5B 02            [ 2]  311 	addw	sp, #2
                                    312 ;	./run_fire_but01.c: 57: GPIOC->ODR |= 0x80 >> n;
      008183 AE 50 0A         [ 2]  313 	ldw	x, #0x500a
      008186 F6               [ 1]  314 	ld	a, (x)
      008187 6B 02            [ 1]  315 	ld	(0x02, sp), a
      008189 A6 80            [ 1]  316 	ld	a, #0x80
      00818B 88               [ 1]  317 	push	a
      00818C C6 00 03         [ 1]  318 	ld	a, _n+0
      00818F 27 05            [ 1]  319 	jreq	00112$
      008191                        320 00111$:
      008191 04 01            [ 1]  321 	srl	(1, sp)
      008193 4A               [ 1]  322 	dec	a
      008194 26 FB            [ 1]  323 	jrne	00111$
      008196                        324 00112$:
      008196 84               [ 1]  325 	pop	a
      008197 1A 02            [ 1]  326 	or	a, (0x02, sp)
      008199 AE 50 0A         [ 2]  327 	ldw	x, #0x500a
      00819C F7               [ 1]  328 	ld	(x), a
                                    329 ;	./run_fire_but01.c: 59: n++;
      00819D C6 00 03         [ 1]  330 	ld	a, _n+0
      0081A0 4C               [ 1]  331 	inc	a
                                    332 ;	./run_fire_but01.c: 61: if ( n>=5 )
      0081A1 C7 00 03         [ 1]  333 	ld	_n+0, a
      0081A4 A1 05            [ 1]  334 	cp	a, #0x05
      0081A6 2F 04            [ 1]  335 	jrslt	00103$
                                    336 ;	./run_fire_but01.c: 64: n=0;
      0081A8 72 5F 00 03      [ 1]  337 	clr	_n+0
      0081AC                        338 00103$:
      0081AC 5B 02            [ 2]  339 	addw	sp, #2
      0081AE 81               [ 4]  340 	ret
                                    341 ;	./run_fire_but01.c: 68: uint8_t button ()
                                    342 ;	-----------------------------------------
                                    343 ;	 function button
                                    344 ;	-----------------------------------------
      0081AF                        345 _button:
                                    346 ;	./run_fire_but01.c: 70: sim();
      0081AF 9B               [ 1]  347 	sim 
                                    348 ;	./run_fire_but01.c: 71: if ((GPIOD->IDR & 0x10) ==0x00 && !bs /*&& (delay(ms1)-msb)>16*/) // фиксируем нажатие кнопки
      0081B0 AE 50 10         [ 2]  349 	ldw	x, #0x5010
      0081B3 F6               [ 1]  350 	ld	a, (x)
                                    351 ;	./run_fire_but01.c: 74: msb=ms1;
      0081B4 61               [ 1]  352 	exg	a, yl
      0081B5 C6 00 05         [ 1]  353 	ld	a, _ms1+0
      0081B8 61               [ 1]  354 	exg	a, yl
                                    355 ;	./run_fire_but01.c: 71: if ((GPIOD->IDR & 0x10) ==0x00 && !bs /*&& (delay(ms1)-msb)>16*/) // фиксируем нажатие кнопки
      0081B9 A5 10            [ 1]  356 	bcp	a, #0x10
      0081BB 26 13            [ 1]  357 	jrne	00102$
      0081BD 72 01 00 07 02   [ 2]  358 	btjf	_bs+0, #0, 00126$
      0081C2 20 0C            [ 2]  359 	jra	00102$
      0081C4                        360 00126$:
                                    361 ;	./run_fire_but01.c: 73: bs=1;
      0081C4 35 01 00 07      [ 1]  362 	mov	_bs+0, #0x01
                                    363 ;	./run_fire_but01.c: 74: msb=ms1;
      0081C8 90 9F            [ 1]  364 	ld	a, yl
      0081CA C7 00 06         [ 1]  365 	ld	_msb+0, a
                                    366 ;	./run_fire_but01.c: 75: b^=0;
      0081CD C6 00 04         [ 1]  367 	ld	a, _b+0
      0081D0                        368 00102$:
                                    369 ;	./run_fire_but01.c: 78: if ((GPIOD->IDR & 0x10) ==0x10 && bs /*&& (delay(ms1)-msb)>16*/) // фиксируем отпускание  нажатие кнопки
      0081D0 AE 50 10         [ 2]  370 	ldw	x, #0x5010
      0081D3 F6               [ 1]  371 	ld	a, (x)
      0081D4 A4 10            [ 1]  372 	and	a, #0x10
      0081D6 A1 10            [ 1]  373 	cp	a, #0x10
      0081D8 26 1A            [ 1]  374 	jrne	00105$
      0081DA 72 00 00 07 02   [ 2]  375 	btjt	_bs+0, #0, 00130$
      0081DF 20 13            [ 2]  376 	jra	00105$
      0081E1                        377 00130$:
                                    378 ;	./run_fire_but01.c: 80: bs=0;
      0081E1 72 5F 00 07      [ 1]  379 	clr	_bs+0
                                    380 ;	./run_fire_but01.c: 81: msb=ms1;
      0081E5 90 9F            [ 1]  381 	ld	a, yl
      0081E7 C7 00 06         [ 1]  382 	ld	_msb+0, a
                                    383 ;	./run_fire_but01.c: 82: b^=1;
      0081EA C6 00 04         [ 1]  384 	ld	a, _b+0
      0081ED A0 01            [ 1]  385 	sub	a, #0x01
      0081EF 4F               [ 1]  386 	clr	a
      0081F0 49               [ 1]  387 	rlc	a
      0081F1 C7 00 04         [ 1]  388 	ld	_b+0, a
      0081F4                        389 00105$:
                                    390 ;	./run_fire_but01.c: 84: rim();
      0081F4 9A               [ 1]  391 	rim 
                                    392 ;	./run_fire_but01.c: 85: return b;
      0081F5 C6 00 04         [ 1]  393 	ld	a, _b+0
      0081F8 81               [ 4]  394 	ret
                                    395 ;	./run_fire_but01.c: 89: int main( void )    //основная программа
                                    396 ;	-----------------------------------------
                                    397 ;	 function main
                                    398 ;	-----------------------------------------
      0081F9                        399 _main:
                                    400 ;	./run_fire_but01.c: 91: CLK->CKDIVR |= 0; // коэффициент деления частоты HSI-генератора (16MHz)
      0081F9 AE 50 C6         [ 2]  401 	ldw	x, #0x50c6
      0081FC F6               [ 1]  402 	ld	a, (x)
      0081FD AE 50 C6         [ 2]  403 	ldw	x, #0x50c6
      008200 F7               [ 1]  404 	ld	(x), a
                                    405 ;	./run_fire_but01.c: 92: Pin();
      008201 CD 80 E0         [ 4]  406 	call	_Pin
                                    407 ;	./run_fire_but01.c: 93: rim(); // разрешение прерывания!
      008204 9A               [ 1]  408 	rim 
                                    409 ;	./run_fire_but01.c: 95: while(1)    //бесконечный цикл
      008205                        410 00105$:
                                    411 ;	./run_fire_but01.c: 97: button(); 
      008205 CD 81 AF         [ 4]  412 	call	_button
                                    413 ;	./run_fire_but01.c: 99: if (b==0) // проверяем нажатие кнопки
      008208 72 01 00 04 02   [ 2]  414 	btjf	_b+0, #0, 00117$
      00820D 20 05            [ 2]  415 	jra	00102$
      00820F                        416 00117$:
                                    417 ;	./run_fire_but01.c: 101: RunningUp();
      00820F CD 81 0D         [ 4]  418 	call	_RunningUp
      008212 20 F1            [ 2]  419 	jra	00105$
      008214                        420 00102$:
                                    421 ;	./run_fire_but01.c: 106: RunningDn();
      008214 CD 81 5E         [ 4]  422 	call	_RunningDn
      008217 20 EC            [ 2]  423 	jra	00105$
      008219 81               [ 4]  424 	ret
                                    425 	.area CODE
                                    426 	.area INITIALIZER
      00821A                        427 __xinit__ms1:
      00821A 00                     428 	.db #0x00	; 0
      00821B                        429 __xinit__msb:
      00821B 00                     430 	.db #0x00	; 0
      00821C                        431 __xinit__bs:
      00821C 00                     432 	.db #0x00	;  0
      00821D                        433 __xinit__bls:
      00821D 00                     434 	.db #0x00	;  0
                                    435 	.area CABS (ABS)
