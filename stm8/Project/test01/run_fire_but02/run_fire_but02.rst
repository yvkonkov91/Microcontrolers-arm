                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Tue Apr 17 20:37:38 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module run_fire_but02
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _buttonD4
                                     14 	.globl _runLdDn
                                     15 	.globl _runLdUp
                                     16 	.globl _RunningDn
                                     17 	.globl _RunningUp
                                     18 	.globl _Pin
                                     19 	.globl _delay
                                     20 	.globl _delay_ms
                                     21 	.globl _TIM4_cfg
                                     22 	.globl _delay_interrupt
                                     23 	.globl _b
                                     24 	.globl _bs
                                     25 	.globl _msb
                                     26 	.globl _ms
                                     27 	.globl _s
                                     28 	.globl _n
                                     29 	.globl _count
                                     30 ;--------------------------------------------------------
                                     31 ; ram data
                                     32 ;--------------------------------------------------------
                                     33 	.area DATA
      000001                         34 _count::
      000001                         35 	.ds 2
      000003                         36 _n::
      000003                         37 	.ds 1
                                     38 ;--------------------------------------------------------
                                     39 ; ram data
                                     40 ;--------------------------------------------------------
                                     41 	.area INITIALIZED
      000004                         42 _s::
      000004                         43 	.ds 4
      000008                         44 _ms::
      000008                         45 	.ds 1
      000009                         46 _msb::
      000009                         47 	.ds 1
      00000A                         48 _bs::
      00000A                         49 	.ds 1
      00000B                         50 _b::
      00000B                         51 	.ds 2
                                     52 ;--------------------------------------------------------
                                     53 ; Stack segment in internal ram 
                                     54 ;--------------------------------------------------------
                                     55 	.area	SSEG
      00000D                         56 __start__stack:
      00000D                         57 	.ds	1
                                     58 
                                     59 ;--------------------------------------------------------
                                     60 ; absolute external ram data
                                     61 ;--------------------------------------------------------
                                     62 	.area DABS (ABS)
                                     63 ;--------------------------------------------------------
                                     64 ; interrupt vector 
                                     65 ;--------------------------------------------------------
                                     66 	.area HOME
      008000                         67 __interrupt_vect:
      008000 82 00 80 83             68 	int s_GSINIT ;reset
      008004 82 00 00 00             69 	int 0x0000 ;trap
      008008 82 00 00 00             70 	int 0x0000 ;int0
      00800C 82 00 00 00             71 	int 0x0000 ;int1
      008010 82 00 00 00             72 	int 0x0000 ;int2
      008014 82 00 00 00             73 	int 0x0000 ;int3
      008018 82 00 00 00             74 	int 0x0000 ;int4
      00801C 82 00 00 00             75 	int 0x0000 ;int5
      008020 82 00 00 00             76 	int 0x0000 ;int6
      008024 82 00 00 00             77 	int 0x0000 ;int7
      008028 82 00 00 00             78 	int 0x0000 ;int8
      00802C 82 00 00 00             79 	int 0x0000 ;int9
      008030 82 00 00 00             80 	int 0x0000 ;int10
      008034 82 00 00 00             81 	int 0x0000 ;int11
      008038 82 00 00 00             82 	int 0x0000 ;int12
      00803C 82 00 00 00             83 	int 0x0000 ;int13
      008040 82 00 00 00             84 	int 0x0000 ;int14
      008044 82 00 00 00             85 	int 0x0000 ;int15
      008048 82 00 00 00             86 	int 0x0000 ;int16
      00804C 82 00 00 00             87 	int 0x0000 ;int17
      008050 82 00 00 00             88 	int 0x0000 ;int18
      008054 82 00 00 00             89 	int 0x0000 ;int19
      008058 82 00 00 00             90 	int 0x0000 ;int20
      00805C 82 00 00 00             91 	int 0x0000 ;int21
      008060 82 00 00 00             92 	int 0x0000 ;int22
      008064 82 00 80 A0             93 	int _delay_interrupt ;int23
      008068 82 00 00 00             94 	int 0x0000 ;int24
      00806C 82 00 00 00             95 	int 0x0000 ;int25
      008070 82 00 00 00             96 	int 0x0000 ;int26
      008074 82 00 00 00             97 	int 0x0000 ;int27
      008078 82 00 00 00             98 	int 0x0000 ;int28
      00807C 82 00 00 00             99 	int 0x0000 ;int29
                                    100 ;--------------------------------------------------------
                                    101 ; global & static initialisations
                                    102 ;--------------------------------------------------------
                                    103 	.area HOME
                                    104 	.area GSINIT
                                    105 	.area GSFINAL
                                    106 	.area GSINIT
      008083                        107 __sdcc_gs_init_startup:
      008083                        108 __sdcc_init_data:
                                    109 ; stm8_genXINIT() start
      008083 AE 00 03         [ 2]  110 	ldw x, #l_DATA
      008086 27 07            [ 1]  111 	jreq	00002$
      008088                        112 00001$:
      008088 72 4F 00 00      [ 1]  113 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]  114 	decw x
      00808D 26 F9            [ 1]  115 	jrne	00001$
      00808F                        116 00002$:
      00808F AE 00 09         [ 2]  117 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]  118 	jreq	00004$
      008094                        119 00003$:
      008094 D6 82 F0         [ 1]  120 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 03         [ 1]  121 	ld	(s_INITIALIZED - 1, x), a
      00809A 5A               [ 2]  122 	decw	x
      00809B 26 F7            [ 1]  123 	jrne	00003$
      00809D                        124 00004$:
                                    125 ; stm8_genXINIT() end
                                    126 	.area GSFINAL
      00809D CC 80 80         [ 2]  127 	jp	__sdcc_program_startup
                                    128 ;--------------------------------------------------------
                                    129 ; Home
                                    130 ;--------------------------------------------------------
                                    131 	.area HOME
                                    132 	.area HOME
      008080                        133 __sdcc_program_startup:
      008080 CC 82 AC         [ 2]  134 	jp	_main
                                    135 ;	return from main will return to caller
                                    136 ;--------------------------------------------------------
                                    137 ; code
                                    138 ;--------------------------------------------------------
                                    139 	.area CODE
                                    140 ;	../lib/lib1/inc/stm8s_delay.h: 3: extern void delay_interrupt(void) __interrupt(23) //обработчик прерывания функции delay_ms таймера TIM4
                                    141 ;	-----------------------------------------
                                    142 ;	 function delay_interrupt
                                    143 ;	-----------------------------------------
      0080A0                        144 _delay_interrupt:
                                    145 ;	../lib/lib1/inc/stm8s_delay.h: 5: if(count)
      0080A0 CE 00 01         [ 2]  146 	ldw	x, _count+0
      0080A3 27 07            [ 1]  147 	jreq	00102$
                                    148 ;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
      0080A5 CE 00 01         [ 2]  149 	ldw	x, _count+0
      0080A8 5A               [ 2]  150 	decw	x
      0080A9 CF 00 01         [ 2]  151 	ldw	_count+0, x
      0080AC                        152 00102$:
                                    153 ;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = 0x00; ////событие обновления не происходило
      0080AC 35 00 53 44      [ 1]  154 	mov	0x5344+0, #0x00
      0080B0 80               [11]  155 	iret
                                    156 ;	../lib/lib1/inc/stm8s_delay.h: 9: void TIM4_cfg() //настройка таймера
                                    157 ;	-----------------------------------------
                                    158 ;	 function TIM4_cfg
                                    159 ;	-----------------------------------------
      0080B1                        160 _TIM4_cfg:
                                    161 ;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = 0x1;   //событие обновления не происходило
      0080B1 35 01 53 44      [ 1]  162 	mov	0x5344+0, #0x01
                                    163 ;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= 1;    // прерывания по обновлению включены
      0080B5 72 10 53 43      [ 1]  164 	bset	0x5343, #0
                                    165 ;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 128; // установка предделителя 128
      0080B9 72 1E 53 47      [ 1]  166 	bset	0x5347, #7
                                    167 ;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки
      0080BD AE 53 48         [ 2]  168 	ldw	x, #0x5348
      0080C0 F6               [ 1]  169 	ld	a, (x)
      0080C1 AA 7C            [ 1]  170 	or	a, #0x7c
      0080C3 F7               [ 1]  171 	ld	(x), a
      0080C4 81               [ 4]  172 	ret
                                    173 ;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint16_t ms) //функция выдержки времени
                                    174 ;	-----------------------------------------
                                    175 ;	 function delay_ms
                                    176 ;	-----------------------------------------
      0080C5                        177 _delay_ms:
                                    178 ;	../lib/lib1/inc/stm8s_delay.h: 18: TIM4->CR1  = 0x0;
      0080C5 35 00 53 40      [ 1]  179 	mov	0x5340+0, #0x00
                                    180 ;	../lib/lib1/inc/stm8s_delay.h: 19: TIM4_cfg(); //вызов функции настройки таймера
      0080C9 CD 80 B1         [ 4]  181 	call	_TIM4_cfg
                                    182 ;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms;
      0080CC 7B 04            [ 1]  183 	ld	a, (0x04, sp)
      0080CE C7 00 02         [ 1]  184 	ld	_count+1, a
      0080D1 7B 03            [ 1]  185 	ld	a, (0x03, sp)
      0080D3 C7 00 01         [ 1]  186 	ld	_count+0, a
                                    187 ;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = 0x1;
      0080D6 35 01 53 40      [ 1]  188 	mov	0x5340+0, #0x01
                                    189 ;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
      0080DA                        190 00101$:
      0080DA CE 00 01         [ 2]  191 	ldw	x, _count+0
      0080DD 26 FB            [ 1]  192 	jrne	00101$
      0080DF 81               [ 4]  193 	ret
                                    194 ;	./run_fire_but02.c: 3: uint8_t delay(uint8_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
                                    195 ;	-----------------------------------------
                                    196 ;	 function delay
                                    197 ;	-----------------------------------------
      0080E0                        198 _delay:
                                    199 ;	./run_fire_but02.c: 6: while(t--);
      0080E0 A6 20            [ 1]  200 	ld	a, #0x20
      0080E2                        201 00101$:
      0080E2 97               [ 1]  202 	ld	xl, a
      0080E3 4A               [ 1]  203 	dec	a
      0080E4 41               [ 1]  204 	exg	a, xl
      0080E5 4D               [ 1]  205 	tnz	a
      0080E6 41               [ 1]  206 	exg	a, xl
      0080E7 26 F9            [ 1]  207 	jrne	00101$
                                    208 ;	./run_fire_but02.c: 7: return t;
      0080E9 81               [ 4]  209 	ret
                                    210 ;	./run_fire_but02.c: 25: void Pin()  // настройка портов
                                    211 ;	-----------------------------------------
                                    212 ;	 function Pin
                                    213 ;	-----------------------------------------
      0080EA                        214 _Pin:
                                    215 ;	./run_fire_but02.c: 27: GPIOC->DDR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//направление данных порта out-0; input-1
      0080EA AE 50 0C         [ 2]  216 	ldw	x, #0x500c
      0080ED F6               [ 1]  217 	ld	a, (x)
      0080EE AA F8            [ 1]  218 	or	a, #0xf8
      0080F0 F7               [ 1]  219 	ld	(x), a
                                    220 ;	./run_fire_but02.c: 28: GPIOC->CR1 |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка подтягивающего резистора open-drain=0; push-pull=1
      0080F1 AE 50 0D         [ 2]  221 	ldw	x, #0x500d
      0080F4 F6               [ 1]  222 	ld	a, (x)
      0080F5 AA F8            [ 1]  223 	or	a, #0xf8
      0080F7 F7               [ 1]  224 	ld	(x), a
                                    225 ;	./run_fire_but02.c: 29: GPIOC->ODR |= 0xf8;   //GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;	//установка значения бита 0/1
      0080F8 AE 50 0A         [ 2]  226 	ldw	x, #0x500a
      0080FB F6               [ 1]  227 	ld	a, (x)
      0080FC AA F8            [ 1]  228 	or	a, #0xf8
      0080FE F7               [ 1]  229 	ld	(x), a
                                    230 ;	./run_fire_but02.c: 31: GPIOD->DDR |= 0x00;
      0080FF AE 50 11         [ 2]  231 	ldw	x, #0x5011
      008102 F6               [ 1]  232 	ld	a, (x)
      008103 AE 50 11         [ 2]  233 	ldw	x, #0x5011
      008106 F7               [ 1]  234 	ld	(x), a
                                    235 ;	./run_fire_but02.c: 32: GPIOD->CR1 |= 0x30;
      008107 AE 50 12         [ 2]  236 	ldw	x, #0x5012
      00810A F6               [ 1]  237 	ld	a, (x)
      00810B AA 30            [ 1]  238 	or	a, #0x30
      00810D F7               [ 1]  239 	ld	(x), a
                                    240 ;	./run_fire_but02.c: 33: GPIOD->CR2 |= 0x00;
      00810E AE 50 13         [ 2]  241 	ldw	x, #0x5013
      008111 F6               [ 1]  242 	ld	a, (x)
      008112 AE 50 13         [ 2]  243 	ldw	x, #0x5013
      008115 F7               [ 1]  244 	ld	(x), a
      008116 81               [ 4]  245 	ret
                                    246 ;	./run_fire_but02.c: 36: void RunningUp()    //функция направление бегущиго огня с л->п
                                    247 ;	-----------------------------------------
                                    248 ;	 function RunningUp
                                    249 ;	-----------------------------------------
      008117                        250 _RunningUp:
      008117 52 02            [ 2]  251 	sub	sp, #2
                                    252 ;	./run_fire_but02.c: 38: GPIOC->ODR ^= 0x08 << n;
      008119 AE 50 0A         [ 2]  253 	ldw	x, #0x500a
      00811C F6               [ 1]  254 	ld	a, (x)
      00811D 6B 01            [ 1]  255 	ld	(0x01, sp), a
      00811F A6 08            [ 1]  256 	ld	a, #0x08
      008121 88               [ 1]  257 	push	a
      008122 C6 00 03         [ 1]  258 	ld	a, _n+0
      008125 27 05            [ 1]  259 	jreq	00110$
      008127                        260 00109$:
      008127 08 01            [ 1]  261 	sll	(1, sp)
      008129 4A               [ 1]  262 	dec	a
      00812A 26 FB            [ 1]  263 	jrne	00109$
      00812C                        264 00110$:
      00812C 84               [ 1]  265 	pop	a
      00812D 18 01            [ 1]  266 	xor	a, (0x01, sp)
      00812F AE 50 0A         [ 2]  267 	ldw	x, #0x500a
      008132 F7               [ 1]  268 	ld	(x), a
                                    269 ;	./run_fire_but02.c: 39: delay_ms(s);
      008133 CE 00 06         [ 2]  270 	ldw	x, _s+2
      008136 89               [ 2]  271 	pushw	x
      008137 CD 80 C5         [ 4]  272 	call	_delay_ms
      00813A 5B 02            [ 2]  273 	addw	sp, #2
                                    274 ;	./run_fire_but02.c: 40: GPIOC->ODR |= 0x08 << n;
      00813C AE 50 0A         [ 2]  275 	ldw	x, #0x500a
      00813F F6               [ 1]  276 	ld	a, (x)
      008140 6B 02            [ 1]  277 	ld	(0x02, sp), a
      008142 A6 08            [ 1]  278 	ld	a, #0x08
      008144 88               [ 1]  279 	push	a
      008145 C6 00 03         [ 1]  280 	ld	a, _n+0
      008148 27 05            [ 1]  281 	jreq	00112$
      00814A                        282 00111$:
      00814A 08 01            [ 1]  283 	sll	(1, sp)
      00814C 4A               [ 1]  284 	dec	a
      00814D 26 FB            [ 1]  285 	jrne	00111$
      00814F                        286 00112$:
      00814F 84               [ 1]  287 	pop	a
      008150 1A 02            [ 1]  288 	or	a, (0x02, sp)
      008152 AE 50 0A         [ 2]  289 	ldw	x, #0x500a
      008155 F7               [ 1]  290 	ld	(x), a
                                    291 ;	./run_fire_but02.c: 42: n++;
      008156 C6 00 03         [ 1]  292 	ld	a, _n+0
      008159 4C               [ 1]  293 	inc	a
                                    294 ;	./run_fire_but02.c: 44: if ( n>=5 )
      00815A C7 00 03         [ 1]  295 	ld	_n+0, a
      00815D A1 05            [ 1]  296 	cp	a, #0x05
      00815F 2F 04            [ 1]  297 	jrslt	00103$
                                    298 ;	./run_fire_but02.c: 46: n=0;
      008161 72 5F 00 03      [ 1]  299 	clr	_n+0
      008165                        300 00103$:
      008165 5B 02            [ 2]  301 	addw	sp, #2
      008167 81               [ 4]  302 	ret
                                    303 ;	./run_fire_but02.c: 50: void RunningDn()    //функция направление бегущиго огня с п->л
                                    304 ;	-----------------------------------------
                                    305 ;	 function RunningDn
                                    306 ;	-----------------------------------------
      008168                        307 _RunningDn:
      008168 52 02            [ 2]  308 	sub	sp, #2
                                    309 ;	./run_fire_but02.c: 52: GPIOC->ODR ^= 0x80 >> n;
      00816A AE 50 0A         [ 2]  310 	ldw	x, #0x500a
      00816D F6               [ 1]  311 	ld	a, (x)
      00816E 6B 01            [ 1]  312 	ld	(0x01, sp), a
      008170 A6 80            [ 1]  313 	ld	a, #0x80
      008172 88               [ 1]  314 	push	a
      008173 C6 00 03         [ 1]  315 	ld	a, _n+0
      008176 27 05            [ 1]  316 	jreq	00110$
      008178                        317 00109$:
      008178 04 01            [ 1]  318 	srl	(1, sp)
      00817A 4A               [ 1]  319 	dec	a
      00817B 26 FB            [ 1]  320 	jrne	00109$
      00817D                        321 00110$:
      00817D 84               [ 1]  322 	pop	a
      00817E 18 01            [ 1]  323 	xor	a, (0x01, sp)
      008180 AE 50 0A         [ 2]  324 	ldw	x, #0x500a
      008183 F7               [ 1]  325 	ld	(x), a
                                    326 ;	./run_fire_but02.c: 53: delay_ms(s);
      008184 CE 00 06         [ 2]  327 	ldw	x, _s+2
      008187 89               [ 2]  328 	pushw	x
      008188 CD 80 C5         [ 4]  329 	call	_delay_ms
      00818B 5B 02            [ 2]  330 	addw	sp, #2
                                    331 ;	./run_fire_but02.c: 54: GPIOC->ODR |= 0x80 >> n;
      00818D AE 50 0A         [ 2]  332 	ldw	x, #0x500a
      008190 F6               [ 1]  333 	ld	a, (x)
      008191 6B 02            [ 1]  334 	ld	(0x02, sp), a
      008193 A6 80            [ 1]  335 	ld	a, #0x80
      008195 88               [ 1]  336 	push	a
      008196 C6 00 03         [ 1]  337 	ld	a, _n+0
      008199 27 05            [ 1]  338 	jreq	00112$
      00819B                        339 00111$:
      00819B 04 01            [ 1]  340 	srl	(1, sp)
      00819D 4A               [ 1]  341 	dec	a
      00819E 26 FB            [ 1]  342 	jrne	00111$
      0081A0                        343 00112$:
      0081A0 84               [ 1]  344 	pop	a
      0081A1 1A 02            [ 1]  345 	or	a, (0x02, sp)
      0081A3 AE 50 0A         [ 2]  346 	ldw	x, #0x500a
      0081A6 F7               [ 1]  347 	ld	(x), a
                                    348 ;	./run_fire_but02.c: 56: n++;
      0081A7 C6 00 03         [ 1]  349 	ld	a, _n+0
      0081AA 4C               [ 1]  350 	inc	a
                                    351 ;	./run_fire_but02.c: 58: if ( n>=5 )
      0081AB C7 00 03         [ 1]  352 	ld	_n+0, a
      0081AE A1 05            [ 1]  353 	cp	a, #0x05
      0081B0 2F 04            [ 1]  354 	jrslt	00103$
                                    355 ;	./run_fire_but02.c: 61: n=0;
      0081B2 72 5F 00 03      [ 1]  356 	clr	_n+0
      0081B6                        357 00103$:
      0081B6 5B 02            [ 2]  358 	addw	sp, #2
      0081B8 81               [ 4]  359 	ret
                                    360 ;	./run_fire_but02.c: 65: void runLdUp()    //функция переполняющийся бегущий огонь п->л
                                    361 ;	-----------------------------------------
                                    362 ;	 function runLdUp
                                    363 ;	-----------------------------------------
      0081B9                        364 _runLdUp:
      0081B9 88               [ 1]  365 	push	a
                                    366 ;	./run_fire_but02.c: 67: GPIOC->ODR ^= 0x08 << n;;
      0081BA AE 50 0A         [ 2]  367 	ldw	x, #0x500a
      0081BD F6               [ 1]  368 	ld	a, (x)
      0081BE 6B 01            [ 1]  369 	ld	(0x01, sp), a
      0081C0 A6 08            [ 1]  370 	ld	a, #0x08
      0081C2 88               [ 1]  371 	push	a
      0081C3 C6 00 03         [ 1]  372 	ld	a, _n+0
      0081C6 27 05            [ 1]  373 	jreq	00110$
      0081C8                        374 00109$:
      0081C8 08 01            [ 1]  375 	sll	(1, sp)
      0081CA 4A               [ 1]  376 	dec	a
      0081CB 26 FB            [ 1]  377 	jrne	00109$
      0081CD                        378 00110$:
      0081CD 84               [ 1]  379 	pop	a
      0081CE 18 01            [ 1]  380 	xor	a, (0x01, sp)
      0081D0 AE 50 0A         [ 2]  381 	ldw	x, #0x500a
      0081D3 F7               [ 1]  382 	ld	(x), a
                                    383 ;	./run_fire_but02.c: 68: delay_ms(s);
      0081D4 CE 00 06         [ 2]  384 	ldw	x, _s+2
      0081D7 89               [ 2]  385 	pushw	x
      0081D8 CD 80 C5         [ 4]  386 	call	_delay_ms
      0081DB 5B 02            [ 2]  387 	addw	sp, #2
                                    388 ;	./run_fire_but02.c: 69: n++;
      0081DD C6 00 03         [ 1]  389 	ld	a, _n+0
      0081E0 4C               [ 1]  390 	inc	a
                                    391 ;	./run_fire_but02.c: 70: if ( n >= 5 )
      0081E1 C7 00 03         [ 1]  392 	ld	_n+0, a
      0081E4 A1 05            [ 1]  393 	cp	a, #0x05
      0081E6 2F 04            [ 1]  394 	jrslt	00103$
                                    395 ;	./run_fire_but02.c: 72: n = 0;
      0081E8 72 5F 00 03      [ 1]  396 	clr	_n+0
      0081EC                        397 00103$:
      0081EC 84               [ 1]  398 	pop	a
      0081ED 81               [ 4]  399 	ret
                                    400 ;	./run_fire_but02.c: 76: void runLdDn()    //функция переполняющийся бегущий огонь п->л
                                    401 ;	-----------------------------------------
                                    402 ;	 function runLdDn
                                    403 ;	-----------------------------------------
      0081EE                        404 _runLdDn:
      0081EE 88               [ 1]  405 	push	a
                                    406 ;	./run_fire_but02.c: 78: GPIOC->ODR ^= 0x80 >> n;;
      0081EF AE 50 0A         [ 2]  407 	ldw	x, #0x500a
      0081F2 F6               [ 1]  408 	ld	a, (x)
      0081F3 6B 01            [ 1]  409 	ld	(0x01, sp), a
      0081F5 A6 80            [ 1]  410 	ld	a, #0x80
      0081F7 88               [ 1]  411 	push	a
      0081F8 C6 00 03         [ 1]  412 	ld	a, _n+0
      0081FB 27 05            [ 1]  413 	jreq	00110$
      0081FD                        414 00109$:
      0081FD 04 01            [ 1]  415 	srl	(1, sp)
      0081FF 4A               [ 1]  416 	dec	a
      008200 26 FB            [ 1]  417 	jrne	00109$
      008202                        418 00110$:
      008202 84               [ 1]  419 	pop	a
      008203 18 01            [ 1]  420 	xor	a, (0x01, sp)
      008205 AE 50 0A         [ 2]  421 	ldw	x, #0x500a
      008208 F7               [ 1]  422 	ld	(x), a
                                    423 ;	./run_fire_but02.c: 79: delay_ms(s);
      008209 CE 00 06         [ 2]  424 	ldw	x, _s+2
      00820C 89               [ 2]  425 	pushw	x
      00820D CD 80 C5         [ 4]  426 	call	_delay_ms
      008210 5B 02            [ 2]  427 	addw	sp, #2
                                    428 ;	./run_fire_but02.c: 80: n++;
      008212 C6 00 03         [ 1]  429 	ld	a, _n+0
      008215 4C               [ 1]  430 	inc	a
                                    431 ;	./run_fire_but02.c: 81: if (n>=5)
      008216 C7 00 03         [ 1]  432 	ld	_n+0, a
      008219 A1 05            [ 1]  433 	cp	a, #0x05
      00821B 2F 04            [ 1]  434 	jrslt	00103$
                                    435 ;	./run_fire_but02.c: 83: n = 0;
      00821D 72 5F 00 03      [ 1]  436 	clr	_n+0
      008221                        437 00103$:
      008221 84               [ 1]  438 	pop	a
      008222 81               [ 4]  439 	ret
                                    440 ;	./run_fire_but02.c: 87: uint8_t buttonD4()
                                    441 ;	-----------------------------------------
                                    442 ;	 function buttonD4
                                    443 ;	-----------------------------------------
      008223                        444 _buttonD4:
      008223 52 04            [ 2]  445 	sub	sp, #4
                                    446 ;	./run_fire_but02.c: 90: if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>25) // фиксируем нажатие кнопки
      008225 AE 50 10         [ 2]  447 	ldw	x, #0x5010
      008228 F6               [ 1]  448 	ld	a, (x)
      008229 A5 10            [ 1]  449 	bcp	a, #0x10
      00822B 26 45            [ 1]  450 	jrne	00104$
      00822D 72 01 00 0A 02   [ 2]  451 	btjf	_bs+0, #0, 00142$
      008232 20 3E            [ 2]  452 	jra	00104$
      008234                        453 00142$:
      008234 3B 00 08         [ 1]  454 	push	_ms+0
      008237 CD 80 E0         [ 4]  455 	call	_delay
      00823A 5B 01            [ 2]  456 	addw	sp, #1
      00823C 5F               [ 1]  457 	clrw	x
      00823D 97               [ 1]  458 	ld	xl, a
      00823E C6 00 09         [ 1]  459 	ld	a, _msb+0
      008241 6B 02            [ 1]  460 	ld	(0x02, sp), a
      008243 0F 01            [ 1]  461 	clr	(0x01, sp)
      008245 72 F0 01         [ 2]  462 	subw	x, (0x01, sp)
      008248 A3 00 19         [ 2]  463 	cpw	x, #0x0019
      00824B 2D 25            [ 1]  464 	jrsle	00104$
                                    465 ;	./run_fire_but02.c: 92: bs=1;
      00824D 35 01 00 0A      [ 1]  466 	mov	_bs+0, #0x01
                                    467 ;	./run_fire_but02.c: 93: msb=ms;
      008251 C6 00 08         [ 1]  468 	ld	a, _ms+0
      008254 C7 00 09         [ 1]  469 	ld	_msb+0, a
                                    470 ;	./run_fire_but02.c: 94: GPIOC->ODR |= 0xf8;
      008257 AE 50 0A         [ 2]  471 	ldw	x, #0x500a
      00825A F6               [ 1]  472 	ld	a, (x)
      00825B AA F8            [ 1]  473 	or	a, #0xf8
      00825D F7               [ 1]  474 	ld	(x), a
                                    475 ;	./run_fire_but02.c: 95: n=0;
      00825E 72 5F 00 03      [ 1]  476 	clr	_n+0
                                    477 ;	./run_fire_but02.c: 96: b++;
      008262 CE 00 0B         [ 2]  478 	ldw	x, _b+0
      008265 5C               [ 2]  479 	incw	x
                                    480 ;	./run_fire_but02.c: 97: if ( b>=5 )
      008266 CF 00 0B         [ 2]  481 	ldw	_b+0, x
      008269 A3 00 05         [ 2]  482 	cpw	x, #0x0005
      00826C 25 04            [ 1]  483 	jrc	00104$
                                    484 ;	./run_fire_but02.c: 99: b=0;
      00826E 5F               [ 1]  485 	clrw	x
      00826F CF 00 0B         [ 2]  486 	ldw	_b+0, x
      008272                        487 00104$:
                                    488 ;	./run_fire_but02.c: 103: if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>25) // фиксируем отпускание  нажатие кнопки
      008272 AE 50 10         [ 2]  489 	ldw	x, #0x5010
      008275 F6               [ 1]  490 	ld	a, (x)
      008276 A4 10            [ 1]  491 	and	a, #0x10
      008278 A1 10            [ 1]  492 	cp	a, #0x10
      00827A 26 2A            [ 1]  493 	jrne	00108$
      00827C 72 00 00 0A 02   [ 2]  494 	btjt	_bs+0, #0, 00148$
      008281 20 23            [ 2]  495 	jra	00108$
      008283                        496 00148$:
      008283 3B 00 08         [ 1]  497 	push	_ms+0
      008286 CD 80 E0         [ 4]  498 	call	_delay
      008289 5B 01            [ 2]  499 	addw	sp, #1
      00828B 5F               [ 1]  500 	clrw	x
      00828C 97               [ 1]  501 	ld	xl, a
      00828D C6 00 09         [ 1]  502 	ld	a, _msb+0
      008290 6B 04            [ 1]  503 	ld	(0x04, sp), a
      008292 0F 03            [ 1]  504 	clr	(0x03, sp)
      008294 72 F0 03         [ 2]  505 	subw	x, (0x03, sp)
      008297 A3 00 19         [ 2]  506 	cpw	x, #0x0019
      00829A 2D 0A            [ 1]  507 	jrsle	00108$
                                    508 ;	./run_fire_but02.c: 105: bs=0;
      00829C 72 5F 00 0A      [ 1]  509 	clr	_bs+0
                                    510 ;	./run_fire_but02.c: 106: msb=ms;
      0082A0 C6 00 08         [ 1]  511 	ld	a, _ms+0
      0082A3 C7 00 09         [ 1]  512 	ld	_msb+0, a
      0082A6                        513 00108$:
                                    514 ;	./run_fire_but02.c: 109: return b;
      0082A6 C6 00 0C         [ 1]  515 	ld	a, _b+1
      0082A9 5B 04            [ 2]  516 	addw	sp, #4
      0082AB 81               [ 4]  517 	ret
                                    518 ;	./run_fire_but02.c: 135: int main( void )    //основная программа
                                    519 ;	-----------------------------------------
                                    520 ;	 function main
                                    521 ;	-----------------------------------------
      0082AC                        522 _main:
                                    523 ;	./run_fire_but02.c: 137: Pin();
      0082AC CD 80 EA         [ 4]  524 	call	_Pin
                                    525 ;	./run_fire_but02.c: 138: CLK->CKDIVR |= 0; // коэффициент деления частоты HSI-генератора (16MHz)
      0082AF AE 50 C6         [ 2]  526 	ldw	x, #0x50c6
      0082B2 F6               [ 1]  527 	ld	a, (x)
      0082B3 AE 50 C6         [ 2]  528 	ldw	x, #0x50c6
      0082B6 F7               [ 1]  529 	ld	(x), a
                                    530 ;	./run_fire_but02.c: 139: rim();
      0082B7 9A               [ 1]  531 	rim 
                                    532 ;	./run_fire_but02.c: 141: while(1)    //бесконечный цикл
      0082B8                        533 00108$:
                                    534 ;	./run_fire_but02.c: 144: buttonD4();
      0082B8 CD 82 23         [ 4]  535 	call	_buttonD4
                                    536 ;	./run_fire_but02.c: 146: switch(b)
      0082BB CE 00 0B         [ 2]  537 	ldw	x, _b+0
      0082BE A3 00 03         [ 2]  538 	cpw	x, #0x0003
      0082C1 22 24            [ 1]  539 	jrugt	00105$
      0082C3 CE 00 0B         [ 2]  540 	ldw	x, _b+0
      0082C6 58               [ 2]  541 	sllw	x
      0082C7 DE 82 CB         [ 2]  542 	ldw	x, (#00121$, x)
      0082CA FC               [ 2]  543 	jp	(x)
      0082CB                        544 00121$:
      0082CB 82 D3                  545 	.dw	#00101$
      0082CD 82 D8                  546 	.dw	#00102$
      0082CF 82 DD                  547 	.dw	#00103$
      0082D1 82 E2                  548 	.dw	#00104$
                                    549 ;	./run_fire_but02.c: 148: case 0:
      0082D3                        550 00101$:
                                    551 ;	./run_fire_but02.c: 149: RunningUp();
      0082D3 CD 81 17         [ 4]  552 	call	_RunningUp
                                    553 ;	./run_fire_but02.c: 150: break;
      0082D6 20 E0            [ 2]  554 	jra	00108$
                                    555 ;	./run_fire_but02.c: 151: case 1:
      0082D8                        556 00102$:
                                    557 ;	./run_fire_but02.c: 152: RunningDn();
      0082D8 CD 81 68         [ 4]  558 	call	_RunningDn
                                    559 ;	./run_fire_but02.c: 153: break;
      0082DB 20 DB            [ 2]  560 	jra	00108$
                                    561 ;	./run_fire_but02.c: 154: case 2:
      0082DD                        562 00103$:
                                    563 ;	./run_fire_but02.c: 155: runLdUp();
      0082DD CD 81 B9         [ 4]  564 	call	_runLdUp
                                    565 ;	./run_fire_but02.c: 156: break;
      0082E0 20 D6            [ 2]  566 	jra	00108$
                                    567 ;	./run_fire_but02.c: 157: case 3:
      0082E2                        568 00104$:
                                    569 ;	./run_fire_but02.c: 158: runLdDn();
      0082E2 CD 81 EE         [ 4]  570 	call	_runLdDn
                                    571 ;	./run_fire_but02.c: 159: break;
      0082E5 20 D1            [ 2]  572 	jra	00108$
                                    573 ;	./run_fire_but02.c: 160: default:
      0082E7                        574 00105$:
                                    575 ;	./run_fire_but02.c: 161: GPIOC->ODR |= 0xf8;
      0082E7 AE 50 0A         [ 2]  576 	ldw	x, #0x500a
      0082EA F6               [ 1]  577 	ld	a, (x)
      0082EB AA F8            [ 1]  578 	or	a, #0xf8
      0082ED F7               [ 1]  579 	ld	(x), a
                                    580 ;	./run_fire_but02.c: 163: }
      0082EE 20 C8            [ 2]  581 	jra	00108$
      0082F0 81               [ 4]  582 	ret
                                    583 	.area CODE
                                    584 	.area INITIALIZER
      0082F1                        585 __xinit__s:
      0082F1 00 00 27 10            586 	.byte #0x00,#0x00,#0x27,#0x10	; 10000
      0082F5                        587 __xinit__ms:
      0082F5 00                     588 	.db #0x00	; 0
      0082F6                        589 __xinit__msb:
      0082F6 00                     590 	.db #0x00	; 0
      0082F7                        591 __xinit__bs:
      0082F7 00                     592 	.db #0x00	;  0
      0082F8                        593 __xinit__b:
      0082F8 03 E8                  594 	.dw #0x03E8
                                    595 	.area CABS (ABS)
