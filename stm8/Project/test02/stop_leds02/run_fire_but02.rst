                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Mon Jun  4 19:20:13 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module run_fire_but02
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _RunningDn
                                     14 	.globl _RunningUp
                                     15 	.globl _adc1_r_cfg
                                     16 	.globl _clearPin
                                     17 	.globl _Pin
                                     18 	.globl _delay_ms
                                     19 	.globl _tim4_cfg
                                     20 	.globl _delay_interrupt
                                     21 	.globl _n
                                     22 	.globl _adc
                                     23 	.globl _count
                                     24 ;--------------------------------------------------------
                                     25 ; ram data
                                     26 ;--------------------------------------------------------
                                     27 	.area DATA
      000001                         28 _count::
      000001                         29 	.ds 2
      000003                         30 _adc::
      000003                         31 	.ds 2
                                     32 ;--------------------------------------------------------
                                     33 ; ram data
                                     34 ;--------------------------------------------------------
                                     35 	.area INITIALIZED
      000005                         36 _n::
      000005                         37 	.ds 1
                                     38 ;--------------------------------------------------------
                                     39 ; Stack segment in internal ram 
                                     40 ;--------------------------------------------------------
                                     41 	.area	SSEG
      000006                         42 __start__stack:
      000006                         43 	.ds	1
                                     44 
                                     45 ;--------------------------------------------------------
                                     46 ; absolute external ram data
                                     47 ;--------------------------------------------------------
                                     48 	.area DABS (ABS)
                                     49 ;--------------------------------------------------------
                                     50 ; interrupt vector 
                                     51 ;--------------------------------------------------------
                                     52 	.area HOME
      008000                         53 __interrupt_vect:
      008000 82 00 80 83             54 	int s_GSINIT ;reset
      008004 82 00 00 00             55 	int 0x0000 ;trap
      008008 82 00 00 00             56 	int 0x0000 ;int0
      00800C 82 00 00 00             57 	int 0x0000 ;int1
      008010 82 00 00 00             58 	int 0x0000 ;int2
      008014 82 00 00 00             59 	int 0x0000 ;int3
      008018 82 00 00 00             60 	int 0x0000 ;int4
      00801C 82 00 00 00             61 	int 0x0000 ;int5
      008020 82 00 00 00             62 	int 0x0000 ;int6
      008024 82 00 00 00             63 	int 0x0000 ;int7
      008028 82 00 00 00             64 	int 0x0000 ;int8
      00802C 82 00 00 00             65 	int 0x0000 ;int9
      008030 82 00 00 00             66 	int 0x0000 ;int10
      008034 82 00 00 00             67 	int 0x0000 ;int11
      008038 82 00 00 00             68 	int 0x0000 ;int12
      00803C 82 00 00 00             69 	int 0x0000 ;int13
      008040 82 00 00 00             70 	int 0x0000 ;int14
      008044 82 00 00 00             71 	int 0x0000 ;int15
      008048 82 00 00 00             72 	int 0x0000 ;int16
      00804C 82 00 00 00             73 	int 0x0000 ;int17
      008050 82 00 00 00             74 	int 0x0000 ;int18
      008054 82 00 00 00             75 	int 0x0000 ;int19
      008058 82 00 00 00             76 	int 0x0000 ;int20
      00805C 82 00 00 00             77 	int 0x0000 ;int21
      008060 82 00 00 00             78 	int 0x0000 ;int22
      008064 82 00 80 A0             79 	int _delay_interrupt ;int23
      008068 82 00 00 00             80 	int 0x0000 ;int24
      00806C 82 00 00 00             81 	int 0x0000 ;int25
      008070 82 00 00 00             82 	int 0x0000 ;int26
      008074 82 00 00 00             83 	int 0x0000 ;int27
      008078 82 00 00 00             84 	int 0x0000 ;int28
      00807C 82 00 00 00             85 	int 0x0000 ;int29
                                     86 ;--------------------------------------------------------
                                     87 ; global & static initialisations
                                     88 ;--------------------------------------------------------
                                     89 	.area HOME
                                     90 	.area GSINIT
                                     91 	.area GSFINAL
                                     92 	.area GSINIT
      008083                         93 __sdcc_gs_init_startup:
      008083                         94 __sdcc_init_data:
                                     95 ; stm8_genXINIT() start
      008083 AE 00 04         [ 2]   96 	ldw x, #l_DATA
      008086 27 07            [ 1]   97 	jreq	00002$
      008088                         98 00001$:
      008088 72 4F 00 00      [ 1]   99 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]  100 	decw x
      00808D 26 F9            [ 1]  101 	jrne	00001$
      00808F                        102 00002$:
      00808F AE 00 01         [ 2]  103 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]  104 	jreq	00004$
      008094                        105 00003$:
      008094 D6 82 5B         [ 1]  106 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 04         [ 1]  107 	ld	(s_INITIALIZED - 1, x), a
      00809A 5A               [ 2]  108 	decw	x
      00809B 26 F7            [ 1]  109 	jrne	00003$
      00809D                        110 00004$:
                                    111 ; stm8_genXINIT() end
                                    112 	.area GSFINAL
      00809D CC 80 80         [ 2]  113 	jp	__sdcc_program_startup
                                    114 ;--------------------------------------------------------
                                    115 ; Home
                                    116 ;--------------------------------------------------------
                                    117 	.area HOME
                                    118 	.area HOME
      008080                        119 __sdcc_program_startup:
      008080 CC 82 0C         [ 2]  120 	jp	_main
                                    121 ;	return from main will return to caller
                                    122 ;--------------------------------------------------------
                                    123 ; code
                                    124 ;--------------------------------------------------------
                                    125 	.area CODE
                                    126 ;	../lib/lib1/inc/stm8s_delay.h: 3: extern void delay_interrupt(void) __interrupt(23) //обработчик прерывания функции delay_ms таймера TIM4
                                    127 ;	-----------------------------------------
                                    128 ;	 function delay_interrupt
                                    129 ;	-----------------------------------------
      0080A0                        130 _delay_interrupt:
                                    131 ;	../lib/lib1/inc/stm8s_delay.h: 5: if(count)
      0080A0 CE 00 01         [ 2]  132 	ldw	x, _count+0
      0080A3 27 07            [ 1]  133 	jreq	00102$
                                    134 ;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
      0080A5 CE 00 01         [ 2]  135 	ldw	x, _count+0
      0080A8 5A               [ 2]  136 	decw	x
      0080A9 CF 00 01         [ 2]  137 	ldw	_count+0, x
      0080AC                        138 00102$:
                                    139 ;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = 0x00; ////событие обновления не происходило
      0080AC 35 00 53 44      [ 1]  140 	mov	0x5344+0, #0x00
      0080B0 80               [11]  141 	iret
                                    142 ;	../lib/lib1/inc/stm8s_delay.h: 9: void tim4_cfg() //настройка таймера
                                    143 ;	-----------------------------------------
                                    144 ;	 function tim4_cfg
                                    145 ;	-----------------------------------------
      0080B1                        146 _tim4_cfg:
                                    147 ;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = 0x1;   //событие обновления не происходило
      0080B1 35 01 53 44      [ 1]  148 	mov	0x5344+0, #0x01
                                    149 ;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= 1;    // прерывания по обновлению включены
      0080B5 72 10 53 43      [ 1]  150 	bset	0x5343, #0
                                    151 ;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 128; // установка предделителя 128
      0080B9 72 1E 53 47      [ 1]  152 	bset	0x5347, #7
                                    153 ;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки
      0080BD AE 53 48         [ 2]  154 	ldw	x, #0x5348
      0080C0 F6               [ 1]  155 	ld	a, (x)
      0080C1 AA 7C            [ 1]  156 	or	a, #0x7c
      0080C3 F7               [ 1]  157 	ld	(x), a
      0080C4 81               [ 4]  158 	ret
                                    159 ;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint16_t ms) //функция выдержки времени
                                    160 ;	-----------------------------------------
                                    161 ;	 function delay_ms
                                    162 ;	-----------------------------------------
      0080C5                        163 _delay_ms:
                                    164 ;	../lib/lib1/inc/stm8s_delay.h: 18: TIM4->CR1  = 0x0;
      0080C5 35 00 53 40      [ 1]  165 	mov	0x5340+0, #0x00
                                    166 ;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms;
      0080C9 7B 04            [ 1]  167 	ld	a, (0x04, sp)
      0080CB C7 00 02         [ 1]  168 	ld	_count+1, a
      0080CE 7B 03            [ 1]  169 	ld	a, (0x03, sp)
      0080D0 C7 00 01         [ 1]  170 	ld	_count+0, a
                                    171 ;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = 0x1;
      0080D3 35 01 53 40      [ 1]  172 	mov	0x5340+0, #0x01
                                    173 ;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
      0080D7                        174 00101$:
      0080D7 CE 00 01         [ 2]  175 	ldw	x, _count+0
      0080DA 26 FB            [ 1]  176 	jrne	00101$
      0080DC 81               [ 4]  177 	ret
                                    178 ;	./run_fire_but02.c: 15: void Pin()  // настройка портов
                                    179 ;	-----------------------------------------
                                    180 ;	 function Pin
                                    181 ;	-----------------------------------------
      0080DD                        182 _Pin:
                                    183 ;	./run_fire_but02.c: 18: GPIOC->DDR |= 0b11111000;
      0080DD AE 50 0C         [ 2]  184 	ldw	x, #0x500c
      0080E0 F6               [ 1]  185 	ld	a, (x)
      0080E1 AA F8            [ 1]  186 	or	a, #0xf8
      0080E3 F7               [ 1]  187 	ld	(x), a
                                    188 ;	./run_fire_but02.c: 19: GPIOC->CR1 |= 0b11111000;
      0080E4 AE 50 0D         [ 2]  189 	ldw	x, #0x500d
      0080E7 F6               [ 1]  190 	ld	a, (x)
      0080E8 AA F8            [ 1]  191 	or	a, #0xf8
      0080EA F7               [ 1]  192 	ld	(x), a
                                    193 ;	./run_fire_but02.c: 20: GPIOC->ODR |= 0b11111000;
      0080EB AE 50 0A         [ 2]  194 	ldw	x, #0x500a
      0080EE F6               [ 1]  195 	ld	a, (x)
      0080EF AA F8            [ 1]  196 	or	a, #0xf8
      0080F1 F7               [ 1]  197 	ld	(x), a
                                    198 ;	./run_fire_but02.c: 22: GPIOD->DDR |= (0<<2);   //устанавливаем на выход пин 5 порта D
      0080F2 AE 50 11         [ 2]  199 	ldw	x, #0x5011
      0080F5 F6               [ 1]  200 	ld	a, (x)
      0080F6 AE 50 11         [ 2]  201 	ldw	x, #0x5011
      0080F9 F7               [ 1]  202 	ld	(x), a
                                    203 ;	./run_fire_but02.c: 23: GPIOD->CR1 |= (0<<2);   //устанавливаем подтяжку пин 5 порта D
      0080FA AE 50 12         [ 2]  204 	ldw	x, #0x5012
      0080FD F6               [ 1]  205 	ld	a, (x)
      0080FE AE 50 12         [ 2]  206 	ldw	x, #0x5012
      008101 F7               [ 1]  207 	ld	(x), a
                                    208 ;	./run_fire_but02.c: 24: GPIOD->CR2 |= (0<<2);   //минимальная скорость на выход / без прерывания на вход
      008102 AE 50 13         [ 2]  209 	ldw	x, #0x5013
      008105 F6               [ 1]  210 	ld	a, (x)
      008106 AE 50 13         [ 2]  211 	ldw	x, #0x5013
      008109 F7               [ 1]  212 	ld	(x), a
                                    213 ;	./run_fire_but02.c: 27: GPIOB->DDR |= 0b00000000;
      00810A AE 50 07         [ 2]  214 	ldw	x, #0x5007
      00810D F6               [ 1]  215 	ld	a, (x)
      00810E AE 50 07         [ 2]  216 	ldw	x, #0x5007
      008111 F7               [ 1]  217 	ld	(x), a
                                    218 ;	./run_fire_but02.c: 28: GPIOB->CR1 |= 0b00100000;
      008112 AE 50 08         [ 2]  219 	ldw	x, #0x5008
      008115 F6               [ 1]  220 	ld	a, (x)
      008116 AA 20            [ 1]  221 	or	a, #0x20
      008118 F7               [ 1]  222 	ld	(x), a
                                    223 ;	./run_fire_but02.c: 29: GPIOB->CR2 |= 0b00000000;
      008119 AE 50 09         [ 2]  224 	ldw	x, #0x5009
      00811C F6               [ 1]  225 	ld	a, (x)
      00811D AE 50 09         [ 2]  226 	ldw	x, #0x5009
      008120 F7               [ 1]  227 	ld	(x), a
      008121 81               [ 4]  228 	ret
                                    229 ;	./run_fire_but02.c: 33: void clearPin()
                                    230 ;	-----------------------------------------
                                    231 ;	 function clearPin
                                    232 ;	-----------------------------------------
      008122                        233 _clearPin:
                                    234 ;	./run_fire_but02.c: 35: GPIOC->ODR = 0b11111000;
      008122 35 F8 50 0A      [ 1]  235 	mov	0x500a+0, #0xf8
      008126 81               [ 4]  236 	ret
                                    237 ;	./run_fire_but02.c: 38: uint16_t adc1_r_cfg(uint8_t channel) 
                                    238 ;	-----------------------------------------
                                    239 ;	 function adc1_r_cfg
                                    240 ;	-----------------------------------------
      008127                        241 _adc1_r_cfg:
      008127 52 03            [ 2]  242 	sub	sp, #3
                                    243 ;	./run_fire_but02.c: 42: CLK->PCKENR2 |= 0b00001000; //тактирование модуля ADC1
      008129 AE 50 CA         [ 2]  244 	ldw	x, #0x50ca
      00812C F6               [ 1]  245 	ld	a, (x)
      00812D AA 08            [ 1]  246 	or	a, #0x08
      00812F F7               [ 1]  247 	ld	(x), a
                                    248 ;	./run_fire_but02.c: 43: ADC1->CSR |= ((0x0F)&channel); //выбор канала
      008130 AE 54 00         [ 2]  249 	ldw	x, #0x5400
      008133 F6               [ 1]  250 	ld	a, (x)
      008134 6B 03            [ 1]  251 	ld	(0x03, sp), a
      008136 7B 06            [ 1]  252 	ld	a, (0x06, sp)
      008138 A4 0F            [ 1]  253 	and	a, #0x0f
      00813A 1A 03            [ 1]  254 	or	a, (0x03, sp)
      00813C AE 54 00         [ 2]  255 	ldw	x, #0x5400
      00813F F7               [ 1]  256 	ld	(x), a
                                    257 ;	./run_fire_but02.c: 44: ADC1->CR2 |= (1<<3);   // номер канала преобразования АЦП
      008140 AE 54 02         [ 2]  258 	ldw	x, #0x5402
      008143 F6               [ 1]  259 	ld	a, (x)
      008144 AA 08            [ 1]  260 	or	a, #0x08
      008146 F7               [ 1]  261 	ld	(x), a
                                    262 ;	./run_fire_but02.c: 45: ADC1->CR1 |= (1<<0);   //включение АЦП 
      008147 72 10 54 01      [ 1]  263 	bset	0x5401, #0
                                    264 ;	./run_fire_but02.c: 46: ADC1->CR1 |= (0<<1);   // одиночное преобразование
      00814B AE 54 01         [ 2]  265 	ldw	x, #0x5401
      00814E F6               [ 1]  266 	ld	a, (x)
      00814F AE 54 01         [ 2]  267 	ldw	x, #0x5401
      008152 F7               [ 1]  268 	ld	(x), a
                                    269 ;	./run_fire_but02.c: 47: while(((ADC1->CSR)&(1<<7))== 0);   // пока не завершено преобразование
      008153                        270 00101$:
      008153 AE 54 00         [ 2]  271 	ldw	x, #0x5400
      008156 F6               [ 1]  272 	ld	a, (x)
      008157 4D               [ 1]  273 	tnz	a
      008158 2A F9            [ 1]  274 	jrpl	00101$
                                    275 ;	./run_fire_but02.c: 48: val |= (uint8_t)ADC1->DRL;    //запись результата в переменную val из нижнего регистра
      00815A AE 54 05         [ 2]  276 	ldw	x, #0x5405
      00815D F6               [ 1]  277 	ld	a, (x)
      00815E 5F               [ 1]  278 	clrw	x
      00815F 97               [ 1]  279 	ld	xl, a
      008160 1F 01            [ 2]  280 	ldw	(0x01, sp), x
                                    281 ;	./run_fire_but02.c: 49: val |= (uint8_t)ADC1->DRH<<8;    //запись результата в переменную val из верхнего регистра
      008162 AE 54 04         [ 2]  282 	ldw	x, #0x5404
      008165 F6               [ 1]  283 	ld	a, (x)
      008166 95               [ 1]  284 	ld	xh, a
      008167 4F               [ 1]  285 	clr	a
      008168 4F               [ 1]  286 	clr	a
      008169 1A 02            [ 1]  287 	or	a, (0x02, sp)
      00816B 02               [ 1]  288 	rlwa	x
      00816C 1A 01            [ 1]  289 	or	a, (0x01, sp)
      00816E 95               [ 1]  290 	ld	xh, a
                                    291 ;	./run_fire_but02.c: 50: ADC1->CR1 &= ~(1<<0); // ADC Stop Conversion
      00816F 90 AE 54 01      [ 2]  292 	ldw	y, #0x5401
      008173 90 F6            [ 1]  293 	ld	a, (y)
      008175 A4 FE            [ 1]  294 	and	a, #0xfe
      008177 90 F7            [ 1]  295 	ld	(y), a
                                    296 ;	./run_fire_but02.c: 51: val &= 0x03ff;
      008179 9E               [ 1]  297 	ld	a, xh
      00817A A4 03            [ 1]  298 	and	a, #0x03
      00817C 95               [ 1]  299 	ld	xh, a
                                    300 ;	./run_fire_but02.c: 52: return val;
      00817D 5B 03            [ 2]  301 	addw	sp, #3
      00817F 81               [ 4]  302 	ret
                                    303 ;	./run_fire_but02.c: 55: void RunningUp()
                                    304 ;	-----------------------------------------
                                    305 ;	 function RunningUp
                                    306 ;	-----------------------------------------
      008180                        307 _RunningUp:
      008180 52 02            [ 2]  308 	sub	sp, #2
                                    309 ;	./run_fire_but02.c: 57: if(n<12)
      008182 C6 00 05         [ 1]  310 	ld	a, _n+0
      008185 A1 0C            [ 1]  311 	cp	a, #0x0c
      008187 24 49            [ 1]  312 	jrnc	00102$
                                    313 ;	./run_fire_but02.c: 59: GPIOC->ODR |= 0b01110111;
      008189 AE 50 0A         [ 2]  314 	ldw	x, #0x500a
      00818C F6               [ 1]  315 	ld	a, (x)
      00818D AA 77            [ 1]  316 	or	a, #0x77
      00818F F7               [ 1]  317 	ld	(x), a
                                    318 ;	./run_fire_but02.c: 60: GPIOC->ODR ^= 0b10101111;
      008190 AE 50 0A         [ 2]  319 	ldw	x, #0x500a
      008193 F6               [ 1]  320 	ld	a, (x)
      008194 A8 AF            [ 1]  321 	xor	a, #0xaf
      008196 F7               [ 1]  322 	ld	(x), a
                                    323 ;	./run_fire_but02.c: 61: delay_ms(adc);
      008197 3B 00 04         [ 1]  324 	push	_adc+1
      00819A 3B 00 03         [ 1]  325 	push	_adc+0
      00819D CD 80 C5         [ 4]  326 	call	_delay_ms
      0081A0 5B 02            [ 2]  327 	addw	sp, #2
                                    328 ;	./run_fire_but02.c: 62: GPIOC->ODR |= 0b10101111;
      0081A2 AE 50 0A         [ 2]  329 	ldw	x, #0x500a
      0081A5 F6               [ 1]  330 	ld	a, (x)
      0081A6 AA AF            [ 1]  331 	or	a, #0xaf
      0081A8 F7               [ 1]  332 	ld	(x), a
                                    333 ;	./run_fire_but02.c: 63: GPIOC->ODR ^= 0b01110111;
      0081A9 AE 50 0A         [ 2]  334 	ldw	x, #0x500a
      0081AC F6               [ 1]  335 	ld	a, (x)
      0081AD A8 77            [ 1]  336 	xor	a, #0x77
      0081AF F7               [ 1]  337 	ld	(x), a
                                    338 ;	./run_fire_but02.c: 64: delay_ms(adc-n*64);
      0081B0 5F               [ 1]  339 	clrw	x
      0081B1 C6 00 05         [ 1]  340 	ld	a, _n+0
      0081B4 97               [ 1]  341 	ld	xl, a
      0081B5 58               [ 2]  342 	sllw	x
      0081B6 58               [ 2]  343 	sllw	x
      0081B7 58               [ 2]  344 	sllw	x
      0081B8 58               [ 2]  345 	sllw	x
      0081B9 58               [ 2]  346 	sllw	x
      0081BA 58               [ 2]  347 	sllw	x
      0081BB 1F 01            [ 2]  348 	ldw	(0x01, sp), x
      0081BD CE 00 03         [ 2]  349 	ldw	x, _adc+0
      0081C0 72 F0 01         [ 2]  350 	subw	x, (0x01, sp)
      0081C3 89               [ 2]  351 	pushw	x
      0081C4 CD 80 C5         [ 4]  352 	call	_delay_ms
      0081C7 5B 02            [ 2]  353 	addw	sp, #2
                                    354 ;	./run_fire_but02.c: 65: n++;
      0081C9 C6 00 05         [ 1]  355 	ld	a, _n+0
      0081CC 4C               [ 1]  356 	inc	a
      0081CD C7 00 05         [ 1]  357 	ld	_n+0, a
      0081D0 20 04            [ 2]  358 	jra	00104$
      0081D2                        359 00102$:
                                    360 ;	./run_fire_but02.c: 67: else GPIOC->ODR =0b11011000;
      0081D2 35 D8 50 0A      [ 1]  361 	mov	0x500a+0, #0xd8
      0081D6                        362 00104$:
      0081D6 5B 02            [ 2]  363 	addw	sp, #2
      0081D8 81               [ 4]  364 	ret
                                    365 ;	./run_fire_but02.c: 70: void RunningDn()
                                    366 ;	-----------------------------------------
                                    367 ;	 function RunningDn
                                    368 ;	-----------------------------------------
      0081D9                        369 _RunningDn:
      0081D9 52 02            [ 2]  370 	sub	sp, #2
                                    371 ;	./run_fire_but02.c: 72: if(n<12)
      0081DB C6 00 05         [ 1]  372 	ld	a, _n+0
      0081DE A1 0C            [ 1]  373 	cp	a, #0x0c
      0081E0 24 27            [ 1]  374 	jrnc	00103$
                                    375 ;	./run_fire_but02.c: 74: GPIOC->ODR ^= 0b11011000;
      0081E2 AE 50 0A         [ 2]  376 	ldw	x, #0x500a
      0081E5 F6               [ 1]  377 	ld	a, (x)
      0081E6 A8 D8            [ 1]  378 	xor	a, #0xd8
      0081E8 F7               [ 1]  379 	ld	(x), a
                                    380 ;	./run_fire_but02.c: 75: delay_ms(adc-n*64);
      0081E9 5F               [ 1]  381 	clrw	x
      0081EA C6 00 05         [ 1]  382 	ld	a, _n+0
      0081ED 97               [ 1]  383 	ld	xl, a
      0081EE 58               [ 2]  384 	sllw	x
      0081EF 58               [ 2]  385 	sllw	x
      0081F0 58               [ 2]  386 	sllw	x
      0081F1 58               [ 2]  387 	sllw	x
      0081F2 58               [ 2]  388 	sllw	x
      0081F3 58               [ 2]  389 	sllw	x
      0081F4 1F 01            [ 2]  390 	ldw	(0x01, sp), x
      0081F6 CE 00 03         [ 2]  391 	ldw	x, _adc+0
      0081F9 72 F0 01         [ 2]  392 	subw	x, (0x01, sp)
      0081FC 89               [ 2]  393 	pushw	x
      0081FD CD 80 C5         [ 4]  394 	call	_delay_ms
      008200 5B 02            [ 2]  395 	addw	sp, #2
                                    396 ;	./run_fire_but02.c: 77: n++;
      008202 C6 00 05         [ 1]  397 	ld	a, _n+0
      008205 4C               [ 1]  398 	inc	a
      008206 C7 00 05         [ 1]  399 	ld	_n+0, a
      008209                        400 00103$:
      008209 5B 02            [ 2]  401 	addw	sp, #2
      00820B 81               [ 4]  402 	ret
                                    403 ;	./run_fire_but02.c: 82: int main( void )    //основная программа
                                    404 ;	-----------------------------------------
                                    405 ;	 function main
                                    406 ;	-----------------------------------------
      00820C                        407 _main:
                                    408 ;	./run_fire_but02.c: 84: Pin();
      00820C CD 80 DD         [ 4]  409 	call	_Pin
                                    410 ;	./run_fire_but02.c: 85: tim4_cfg();
      00820F CD 80 B1         [ 4]  411 	call	_tim4_cfg
                                    412 ;	./run_fire_but02.c: 86: rim();
      008212 9A               [ 1]  413 	rim 
                                    414 ;	./run_fire_but02.c: 87: clearPin();
      008213 CD 81 22         [ 4]  415 	call	_clearPin
                                    416 ;	./run_fire_but02.c: 88: adc=(adc1_r_cfg(3))*10;
      008216 4B 03            [ 1]  417 	push	#0x03
      008218 CD 81 27         [ 4]  418 	call	_adc1_r_cfg
      00821B 84               [ 1]  419 	pop	a
      00821C 89               [ 2]  420 	pushw	x
      00821D 4B 0A            [ 1]  421 	push	#0x0a
      00821F 4B 00            [ 1]  422 	push	#0x00
      008221 CD 82 3B         [ 4]  423 	call	__mulint
      008224 5B 04            [ 2]  424 	addw	sp, #4
      008226 CF 00 03         [ 2]  425 	ldw	_adc+0, x
                                    426 ;	./run_fire_but02.c: 90: while(1)    //бесконечный цикл
      008229                        427 00105$:
                                    428 ;	./run_fire_but02.c: 93: if(GPIOB->IDR==0)
      008229 AE 50 06         [ 2]  429 	ldw	x, #0x5006
      00822C F6               [ 1]  430 	ld	a, (x)
      00822D 4D               [ 1]  431 	tnz	a
      00822E 26 05            [ 1]  432 	jrne	00102$
                                    433 ;	./run_fire_but02.c: 95: RunningUp();
      008230 CD 81 80         [ 4]  434 	call	_RunningUp
      008233 20 F4            [ 2]  435 	jra	00105$
      008235                        436 00102$:
                                    437 ;	./run_fire_but02.c: 98: RunningDn();
      008235 CD 81 D9         [ 4]  438 	call	_RunningDn
      008238 20 EF            [ 2]  439 	jra	00105$
      00823A 81               [ 4]  440 	ret
                                    441 	.area CODE
                                    442 	.area INITIALIZER
      00825C                        443 __xinit__n:
      00825C 00                     444 	.db #0x00	; 0
                                    445 	.area CABS (ABS)
