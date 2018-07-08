                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Thu May 10 19:39:55 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module stm8_uart_01
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _pin_cfg
                                     14 	.globl _uart_tx_int
                                     15 	.globl _uart_tx_data
                                     16 	.globl _uart_tx_byte
                                     17 	.globl _uart1_cfg
                                     18 	.globl _clk_cfg
                                     19 	.globl _delay_ms
                                     20 	.globl _tim4_cfg
                                     21 	.globl _delay_interrupt
                                     22 	.globl _count
                                     23 ;--------------------------------------------------------
                                     24 ; ram data
                                     25 ;--------------------------------------------------------
                                     26 	.area DATA
      000001                         27 _count::
      000001                         28 	.ds 2
                                     29 ;--------------------------------------------------------
                                     30 ; ram data
                                     31 ;--------------------------------------------------------
                                     32 	.area INITIALIZED
                                     33 ;--------------------------------------------------------
                                     34 ; Stack segment in internal ram 
                                     35 ;--------------------------------------------------------
                                     36 	.area	SSEG
      000003                         37 __start__stack:
      000003                         38 	.ds	1
                                     39 
                                     40 ;--------------------------------------------------------
                                     41 ; absolute external ram data
                                     42 ;--------------------------------------------------------
                                     43 	.area DABS (ABS)
                                     44 ;--------------------------------------------------------
                                     45 ; interrupt vector 
                                     46 ;--------------------------------------------------------
                                     47 	.area HOME
      008000                         48 __interrupt_vect:
      008000 82 00 80 83             49 	int s_GSINIT ;reset
      008004 82 00 00 00             50 	int 0x0000 ;trap
      008008 82 00 00 00             51 	int 0x0000 ;int0
      00800C 82 00 00 00             52 	int 0x0000 ;int1
      008010 82 00 00 00             53 	int 0x0000 ;int2
      008014 82 00 00 00             54 	int 0x0000 ;int3
      008018 82 00 00 00             55 	int 0x0000 ;int4
      00801C 82 00 00 00             56 	int 0x0000 ;int5
      008020 82 00 00 00             57 	int 0x0000 ;int6
      008024 82 00 00 00             58 	int 0x0000 ;int7
      008028 82 00 00 00             59 	int 0x0000 ;int8
      00802C 82 00 00 00             60 	int 0x0000 ;int9
      008030 82 00 00 00             61 	int 0x0000 ;int10
      008034 82 00 00 00             62 	int 0x0000 ;int11
      008038 82 00 00 00             63 	int 0x0000 ;int12
      00803C 82 00 00 00             64 	int 0x0000 ;int13
      008040 82 00 00 00             65 	int 0x0000 ;int14
      008044 82 00 00 00             66 	int 0x0000 ;int15
      008048 82 00 00 00             67 	int 0x0000 ;int16
      00804C 82 00 00 00             68 	int 0x0000 ;int17
      008050 82 00 00 00             69 	int 0x0000 ;int18
      008054 82 00 00 00             70 	int 0x0000 ;int19
      008058 82 00 00 00             71 	int 0x0000 ;int20
      00805C 82 00 00 00             72 	int 0x0000 ;int21
      008060 82 00 00 00             73 	int 0x0000 ;int22
      008064 82 00 80 A0             74 	int _delay_interrupt ;int23
      008068 82 00 00 00             75 	int 0x0000 ;int24
      00806C 82 00 00 00             76 	int 0x0000 ;int25
      008070 82 00 00 00             77 	int 0x0000 ;int26
      008074 82 00 00 00             78 	int 0x0000 ;int27
      008078 82 00 00 00             79 	int 0x0000 ;int28
      00807C 82 00 00 00             80 	int 0x0000 ;int29
                                     81 ;--------------------------------------------------------
                                     82 ; global & static initialisations
                                     83 ;--------------------------------------------------------
                                     84 	.area HOME
                                     85 	.area GSINIT
                                     86 	.area GSFINAL
                                     87 	.area GSINIT
      008083                         88 __sdcc_gs_init_startup:
      008083                         89 __sdcc_init_data:
                                     90 ; stm8_genXINIT() start
      008083 AE 00 02         [ 2]   91 	ldw x, #l_DATA
      008086 27 07            [ 1]   92 	jreq	00002$
      008088                         93 00001$:
      008088 72 4F 00 00      [ 1]   94 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]   95 	decw x
      00808D 26 F9            [ 1]   96 	jrne	00001$
      00808F                         97 00002$:
      00808F AE 00 00         [ 2]   98 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]   99 	jreq	00004$
      008094                        100 00003$:
      008094 D6 82 B7         [ 1]  101 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 02         [ 1]  102 	ld	(s_INITIALIZED - 1, x), a
      00809A 5A               [ 2]  103 	decw	x
      00809B 26 F7            [ 1]  104 	jrne	00003$
      00809D                        105 00004$:
                                    106 ; stm8_genXINIT() end
                                    107 	.area GSFINAL
      00809D CC 80 80         [ 2]  108 	jp	__sdcc_program_startup
                                    109 ;--------------------------------------------------------
                                    110 ; Home
                                    111 ;--------------------------------------------------------
                                    112 	.area HOME
                                    113 	.area HOME
      008080                        114 __sdcc_program_startup:
      008080 CC 81 D1         [ 2]  115 	jp	_main
                                    116 ;	return from main will return to caller
                                    117 ;--------------------------------------------------------
                                    118 ; code
                                    119 ;--------------------------------------------------------
                                    120 	.area CODE
                                    121 ;	../lib/lib1/inc/stm8s_delay.h: 3: extern void delay_interrupt(void) __interrupt(23) //обработчик прерывания функции delay_ms таймера TIM4
                                    122 ;	-----------------------------------------
                                    123 ;	 function delay_interrupt
                                    124 ;	-----------------------------------------
      0080A0                        125 _delay_interrupt:
                                    126 ;	../lib/lib1/inc/stm8s_delay.h: 5: if(count)
      0080A0 CE 00 01         [ 2]  127 	ldw	x, _count+0
      0080A3 27 07            [ 1]  128 	jreq	00102$
                                    129 ;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
      0080A5 CE 00 01         [ 2]  130 	ldw	x, _count+0
      0080A8 5A               [ 2]  131 	decw	x
      0080A9 CF 00 01         [ 2]  132 	ldw	_count+0, x
      0080AC                        133 00102$:
                                    134 ;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = 0x00; ////событие обновления не происходило
      0080AC 35 00 53 44      [ 1]  135 	mov	0x5344+0, #0x00
      0080B0 80               [11]  136 	iret
                                    137 ;	../lib/lib1/inc/stm8s_delay.h: 9: void tim4_cfg() //настройка таймера
                                    138 ;	-----------------------------------------
                                    139 ;	 function tim4_cfg
                                    140 ;	-----------------------------------------
      0080B1                        141 _tim4_cfg:
                                    142 ;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = 0x1;   //событие обновления не происходило
      0080B1 35 01 53 44      [ 1]  143 	mov	0x5344+0, #0x01
                                    144 ;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= 1;    // прерывания по обновлению включены
      0080B5 72 10 53 43      [ 1]  145 	bset	0x5343, #0
                                    146 ;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 128; // установка предделителя 128
      0080B9 72 1E 53 47      [ 1]  147 	bset	0x5347, #7
                                    148 ;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки
      0080BD AE 53 48         [ 2]  149 	ldw	x, #0x5348
      0080C0 F6               [ 1]  150 	ld	a, (x)
      0080C1 AA 7C            [ 1]  151 	or	a, #0x7c
      0080C3 F7               [ 1]  152 	ld	(x), a
      0080C4 81               [ 4]  153 	ret
                                    154 ;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint16_t ms) //функция выдержки времени
                                    155 ;	-----------------------------------------
                                    156 ;	 function delay_ms
                                    157 ;	-----------------------------------------
      0080C5                        158 _delay_ms:
                                    159 ;	../lib/lib1/inc/stm8s_delay.h: 18: TIM4->CR1  = 0x0;
      0080C5 35 00 53 40      [ 1]  160 	mov	0x5340+0, #0x00
                                    161 ;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms;
      0080C9 7B 04            [ 1]  162 	ld	a, (0x04, sp)
      0080CB C7 00 02         [ 1]  163 	ld	_count+1, a
      0080CE 7B 03            [ 1]  164 	ld	a, (0x03, sp)
      0080D0 C7 00 01         [ 1]  165 	ld	_count+0, a
                                    166 ;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = 0x1;
      0080D3 35 01 53 40      [ 1]  167 	mov	0x5340+0, #0x01
                                    168 ;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
      0080D7                        169 00101$:
      0080D7 CE 00 01         [ 2]  170 	ldw	x, _count+0
      0080DA 26 FB            [ 1]  171 	jrne	00101$
      0080DC 81               [ 4]  172 	ret
                                    173 ;	../lib/lib1/inc/stm8s_uart.h: 3: void clk_cfg()
                                    174 ;	-----------------------------------------
                                    175 ;	 function clk_cfg
                                    176 ;	-----------------------------------------
      0080DD                        177 _clk_cfg:
                                    178 ;	../lib/lib1/inc/stm8s_uart.h: 5: CLK->SWR     |= 0xE1;    //выбран основной источник тактиования HSI
      0080DD AE 50 C4         [ 2]  179 	ldw	x, #0x50c4
      0080E0 F6               [ 1]  180 	ld	a, (x)
      0080E1 AA E1            [ 1]  181 	or	a, #0xe1
      0080E3 F7               [ 1]  182 	ld	(x), a
                                    183 ;	../lib/lib1/inc/stm8s_uart.h: 6: CLK->CKDIVR  |= 0x0; // коэффициент деления частоты HSI-генератора (2MHz)
      0080E4 AE 50 C6         [ 2]  184 	ldw	x, #0x50c6
      0080E7 F6               [ 1]  185 	ld	a, (x)
      0080E8 AE 50 C6         [ 2]  186 	ldw	x, #0x50c6
      0080EB F7               [ 1]  187 	ld	(x), a
                                    188 ;	../lib/lib1/inc/stm8s_uart.h: 7: CLK->PCKENR1 |= 0b00010100; //включение модуля тактиования UART1 & TIM4
      0080EC AE 50 C7         [ 2]  189 	ldw	x, #0x50c7
      0080EF F6               [ 1]  190 	ld	a, (x)
      0080F0 AA 14            [ 1]  191 	or	a, #0x14
      0080F2 F7               [ 1]  192 	ld	(x), a
      0080F3 81               [ 4]  193 	ret
                                    194 ;	../lib/lib1/inc/stm8s_uart.h: 10: void uart1_cfg()
                                    195 ;	-----------------------------------------
                                    196 ;	 function uart1_cfg
                                    197 ;	-----------------------------------------
      0080F4                        198 _uart1_cfg:
                                    199 ;	../lib/lib1/inc/stm8s_uart.h: 12: UART1->CR1  |= 0b00000000;   //установка колличества бит передачи 8/9
      0080F4 AE 52 34         [ 2]  200 	ldw	x, #0x5234
      0080F7 F6               [ 1]  201 	ld	a, (x)
      0080F8 AE 52 34         [ 2]  202 	ldw	x, #0x5234
      0080FB F7               [ 1]  203 	ld	(x), a
                                    204 ;	../lib/lib1/inc/stm8s_uart.h: 13: UART1->CR2  |= 0b00001000;   //разрешение работы RX & TX
      0080FC AE 52 35         [ 2]  205 	ldw	x, #0x5235
      0080FF F6               [ 1]  206 	ld	a, (x)
      008100 AA 08            [ 1]  207 	or	a, #0x08
      008102 F7               [ 1]  208 	ld	(x), a
                                    209 ;	../lib/lib1/inc/stm8s_uart.h: 14: UART1->CR3  |= 0b00000000;   //STOP bits 00 - 1 stop bit
      008103 AE 52 36         [ 2]  210 	ldw	x, #0x5236
      008106 F6               [ 1]  211 	ld	a, (x)
      008107 AE 52 36         [ 2]  212 	ldw	x, #0x5236
      00810A F7               [ 1]  213 	ld	(x), a
                                    214 ;	../lib/lib1/inc/stm8s_uart.h: 16: UART1->BRR2 |= 0x0;  //сначало записываем скорость передачи в BRR2! / 
      00810B AE 52 33         [ 2]  215 	ldw	x, #0x5233
      00810E F6               [ 1]  216 	ld	a, (x)
      00810F AE 52 33         [ 2]  217 	ldw	x, #0x5233
      008112 F7               [ 1]  218 	ld	(x), a
                                    219 ;	../lib/lib1/inc/stm8s_uart.h: 17: UART1->BRR1 |= 0x0d;  //записываеться значение только после записи значения в BRR2! /9600
      008113 AE 52 32         [ 2]  220 	ldw	x, #0x5232
      008116 F6               [ 1]  221 	ld	a, (x)
      008117 AA 0D            [ 1]  222 	or	a, #0x0d
      008119 F7               [ 1]  223 	ld	(x), a
      00811A 81               [ 4]  224 	ret
                                    225 ;	../lib/lib1/inc/stm8s_uart.h: 23: void uart_tx_byte(unsigned char c)
                                    226 ;	-----------------------------------------
                                    227 ;	 function uart_tx_byte
                                    228 ;	-----------------------------------------
      00811B                        229 _uart_tx_byte:
                                    230 ;	../lib/lib1/inc/stm8s_uart.h: 25: while(UART1->SR ==(0<<7));
      00811B                        231 00101$:
      00811B AE 52 30         [ 2]  232 	ldw	x, #0x5230
      00811E F6               [ 1]  233 	ld	a, (x)
      00811F 4D               [ 1]  234 	tnz	a
      008120 27 F9            [ 1]  235 	jreq	00101$
                                    236 ;	../lib/lib1/inc/stm8s_uart.h: 26: UART1->DR = c;
      008122 AE 52 31         [ 2]  237 	ldw	x, #0x5231
      008125 7B 03            [ 1]  238 	ld	a, (0x03, sp)
      008127 F7               [ 1]  239 	ld	(x), a
      008128 81               [ 4]  240 	ret
                                    241 ;	../lib/lib1/inc/stm8s_uart.h: 30: void uart_tx_data(unsigned char *s)
                                    242 ;	-----------------------------------------
                                    243 ;	 function uart_tx_data
                                    244 ;	-----------------------------------------
      008129                        245 _uart_tx_data:
                                    246 ;	../lib/lib1/inc/stm8s_uart.h: 32: while(*s != 0) uart_tx_byte(*s++);
      008129 1E 03            [ 2]  247 	ldw	x, (0x03, sp)
      00812B                        248 00101$:
      00812B F6               [ 1]  249 	ld	a, (x)
      00812C 4D               [ 1]  250 	tnz	a
      00812D 27 0A            [ 1]  251 	jreq	00104$
      00812F 5C               [ 2]  252 	incw	x
      008130 89               [ 2]  253 	pushw	x
      008131 88               [ 1]  254 	push	a
      008132 CD 81 1B         [ 4]  255 	call	_uart_tx_byte
      008135 84               [ 1]  256 	pop	a
      008136 85               [ 2]  257 	popw	x
      008137 20 F2            [ 2]  258 	jra	00101$
      008139                        259 00104$:
      008139 81               [ 4]  260 	ret
                                    261 ;	../lib/lib1/inc/stm8s_uart.h: 35: void uart_tx_int(uint16_t c)//    Отправка числа от 0000 до 9999
                                    262 ;	-----------------------------------------
                                    263 ;	 function uart_tx_int
                                    264 ;	-----------------------------------------
      00813A                        265 _uart_tx_int:
      00813A 52 02            [ 2]  266 	sub	sp, #2
                                    267 ;	../lib/lib1/inc/stm8s_uart.h: 38: c=c%100000000;
      00813C 16 05            [ 2]  268 	ldw	y, (0x05, sp)
      00813E 5F               [ 1]  269 	clrw	x
      00813F 4B 00            [ 1]  270 	push	#0x00
      008141 4B E1            [ 1]  271 	push	#0xe1
      008143 4B F5            [ 1]  272 	push	#0xf5
      008145 4B 05            [ 1]  273 	push	#0x05
      008147 90 89            [ 2]  274 	pushw	y
      008149 89               [ 2]  275 	pushw	x
      00814A CD 82 18         [ 4]  276 	call	__modslong
      00814D 5B 08            [ 2]  277 	addw	sp, #8
      00814F 1F 05            [ 2]  278 	ldw	(0x05, sp), x
                                    279 ;	../lib/lib1/inc/stm8s_uart.h: 39: temp=c/100;
      008151 1E 05            [ 2]  280 	ldw	x, (0x05, sp)
      008153 90 AE 00 64      [ 2]  281 	ldw	y, #0x0064
      008157 65               [ 2]  282 	divw	x, y
                                    283 ;	../lib/lib1/inc/stm8s_uart.h: 40: uart_tx_byte(temp/10+'0');
      008158 89               [ 2]  284 	pushw	x
      008159 90 AE 00 0A      [ 2]  285 	ldw	y, #0x000a
      00815D 65               [ 2]  286 	divw	x, y
      00815E 90 93            [ 1]  287 	ldw	y, x
      008160 9F               [ 1]  288 	ld	a, xl
      008161 85               [ 2]  289 	popw	x
      008162 AB 30            [ 1]  290 	add	a, #0x30
      008164 89               [ 2]  291 	pushw	x
      008165 88               [ 1]  292 	push	a
      008166 CD 81 1B         [ 4]  293 	call	_uart_tx_byte
      008169 84               [ 1]  294 	pop	a
      00816A 85               [ 2]  295 	popw	x
                                    296 ;	../lib/lib1/inc/stm8s_uart.h: 41: uart_tx_byte(temp%10+'0');
      00816B 90 AE 00 0A      [ 2]  297 	ldw	y, #0x000a
      00816F 65               [ 2]  298 	divw	x, y
      008170 90 9F            [ 1]  299 	ld	a, yl
      008172 AB 30            [ 1]  300 	add	a, #0x30
      008174 88               [ 1]  301 	push	a
      008175 CD 81 1B         [ 4]  302 	call	_uart_tx_byte
      008178 84               [ 1]  303 	pop	a
                                    304 ;	../lib/lib1/inc/stm8s_uart.h: 42: temp=c%100;
      008179 1E 05            [ 2]  305 	ldw	x, (0x05, sp)
      00817B 90 AE 00 64      [ 2]  306 	ldw	y, #0x0064
      00817F 65               [ 2]  307 	divw	x, y
      008180 17 01            [ 2]  308 	ldw	(0x01, sp), y
                                    309 ;	../lib/lib1/inc/stm8s_uart.h: 43: uart_tx_byte(temp/10+'0');
      008182 1E 01            [ 2]  310 	ldw	x, (0x01, sp)
      008184 90 AE 00 0A      [ 2]  311 	ldw	y, #0x000a
      008188 65               [ 2]  312 	divw	x, y
      008189 9F               [ 1]  313 	ld	a, xl
      00818A AB 30            [ 1]  314 	add	a, #0x30
      00818C 88               [ 1]  315 	push	a
      00818D CD 81 1B         [ 4]  316 	call	_uart_tx_byte
      008190 84               [ 1]  317 	pop	a
                                    318 ;	../lib/lib1/inc/stm8s_uart.h: 44: uart_tx_byte(temp%10+'0');
      008191 1E 01            [ 2]  319 	ldw	x, (0x01, sp)
      008193 90 AE 00 0A      [ 2]  320 	ldw	y, #0x000a
      008197 65               [ 2]  321 	divw	x, y
      008198 90 9F            [ 1]  322 	ld	a, yl
      00819A AB 30            [ 1]  323 	add	a, #0x30
      00819C 88               [ 1]  324 	push	a
      00819D CD 81 1B         [ 4]  325 	call	_uart_tx_byte
      0081A0 5B 03            [ 2]  326 	addw	sp, #3
      0081A2 81               [ 4]  327 	ret
                                    328 ;	./stm8_uart_01.c: 4: void pin_cfg()  //функция настройки GPIO
                                    329 ;	-----------------------------------------
                                    330 ;	 function pin_cfg
                                    331 ;	-----------------------------------------
      0081A3                        332 _pin_cfg:
                                    333 ;	./stm8_uart_01.c: 6: GPIOB->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта B
      0081A3 AE 50 07         [ 2]  334 	ldw	x, #0x5007
      0081A6 F6               [ 1]  335 	ld	a, (x)
      0081A7 AA 20            [ 1]  336 	or	a, #0x20
      0081A9 F7               [ 1]  337 	ld	(x), a
                                    338 ;	./stm8_uart_01.c: 7: GPIOB->CR1 |= 0b00100000;   //устанавливаем подтяжку пин 5 порта B
      0081AA AE 50 08         [ 2]  339 	ldw	x, #0x5008
      0081AD F6               [ 1]  340 	ld	a, (x)
      0081AE AA 20            [ 1]  341 	or	a, #0x20
      0081B0 F7               [ 1]  342 	ld	(x), a
                                    343 ;	./stm8_uart_01.c: 8: GPIOB->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
      0081B1 AE 50 09         [ 2]  344 	ldw	x, #0x5009
      0081B4 F6               [ 1]  345 	ld	a, (x)
      0081B5 AE 50 09         [ 2]  346 	ldw	x, #0x5009
      0081B8 F7               [ 1]  347 	ld	(x), a
                                    348 ;	./stm8_uart_01.c: 10: GPIOD->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта D TX
      0081B9 AE 50 11         [ 2]  349 	ldw	x, #0x5011
      0081BC F6               [ 1]  350 	ld	a, (x)
      0081BD AA 20            [ 1]  351 	or	a, #0x20
      0081BF F7               [ 1]  352 	ld	(x), a
                                    353 ;	./stm8_uart_01.c: 11: GPIOD->CR1 |= 0b00000000;   //без подтяжки
      0081C0 AE 50 12         [ 2]  354 	ldw	x, #0x5012
      0081C3 F6               [ 1]  355 	ld	a, (x)
      0081C4 AE 50 12         [ 2]  356 	ldw	x, #0x5012
      0081C7 F7               [ 1]  357 	ld	(x), a
                                    358 ;	./stm8_uart_01.c: 12: GPIOD->CR2 |= 0b00000000;   //без прерывания на вход / минимальная скорость на выход
      0081C8 AE 50 13         [ 2]  359 	ldw	x, #0x5013
      0081CB F6               [ 1]  360 	ld	a, (x)
      0081CC AE 50 13         [ 2]  361 	ldw	x, #0x5013
      0081CF F7               [ 1]  362 	ld	(x), a
      0081D0 81               [ 4]  363 	ret
                                    364 ;	./stm8_uart_01.c: 16: int main( void )
                                    365 ;	-----------------------------------------
                                    366 ;	 function main
                                    367 ;	-----------------------------------------
      0081D1                        368 _main:
                                    369 ;	./stm8_uart_01.c: 18: pin_cfg();
      0081D1 CD 81 A3         [ 4]  370 	call	_pin_cfg
                                    371 ;	./stm8_uart_01.c: 20: clk_cfg();
      0081D4 CD 80 DD         [ 4]  372 	call	_clk_cfg
                                    373 ;	./stm8_uart_01.c: 22: tim4_cfg();
      0081D7 CD 80 B1         [ 4]  374 	call	_tim4_cfg
                                    375 ;	./stm8_uart_01.c: 24: uart1_cfg();
      0081DA CD 80 F4         [ 4]  376 	call	_uart1_cfg
                                    377 ;	./stm8_uart_01.c: 26: rim();  //разрешаем глобальное прерывание
      0081DD 9A               [ 1]  378 	rim 
      0081DE                        379 00105$:
                                    380 ;	./stm8_uart_01.c: 33: GPIOB->ODR ^=0b00100000;  //зажигаем светодиод
      0081DE AE 50 05         [ 2]  381 	ldw	x, #0x5005
      0081E1 F6               [ 1]  382 	ld	a, (x)
      0081E2 A8 20            [ 1]  383 	xor	a, #0x20
      0081E4 F7               [ 1]  384 	ld	(x), a
                                    385 ;	./stm8_uart_01.c: 34: delay_ms(5000);   //временная задержка
      0081E5 4B 88            [ 1]  386 	push	#0x88
      0081E7 4B 13            [ 1]  387 	push	#0x13
      0081E9 CD 80 C5         [ 4]  388 	call	_delay_ms
      0081EC 5B 02            [ 2]  389 	addw	sp, #2
                                    390 ;	./stm8_uart_01.c: 36: if (GPIOB->ODR ==0b00100000)
      0081EE AE 50 05         [ 2]  391 	ldw	x, #0x5005
      0081F1 F6               [ 1]  392 	ld	a, (x)
      0081F2 A1 20            [ 1]  393 	cp	a, #0x20
      0081F4 26 0B            [ 1]  394 	jrne	00102$
                                    395 ;	./stm8_uart_01.c: 39: uart_tx_data("on, ");
      0081F6 AE 82 0D         [ 2]  396 	ldw	x, #___str_0+0
      0081F9 89               [ 2]  397 	pushw	x
      0081FA CD 81 29         [ 4]  398 	call	_uart_tx_data
      0081FD 5B 02            [ 2]  399 	addw	sp, #2
      0081FF 20 DD            [ 2]  400 	jra	00105$
      008201                        401 00102$:
                                    402 ;	./stm8_uart_01.c: 42: else uart_tx_data("off\r\n");//printf("value: %u\n",adc2);
      008201 AE 82 12         [ 2]  403 	ldw	x, #___str_1+0
      008204 89               [ 2]  404 	pushw	x
      008205 CD 81 29         [ 4]  405 	call	_uart_tx_data
      008208 5B 02            [ 2]  406 	addw	sp, #2
      00820A 20 D2            [ 2]  407 	jra	00105$
      00820C 81               [ 4]  408 	ret
                                    409 	.area CODE
      00820D                        410 ___str_0:
      00820D 6F 6E 2C 20            411 	.ascii "on, "
      008211 00                     412 	.db 0x00
      008212                        413 ___str_1:
      008212 6F 66 66               414 	.ascii "off"
      008215 0D                     415 	.db 0x0D
      008216 0A                     416 	.db 0x0A
      008217 00                     417 	.db 0x00
                                    418 	.area INITIALIZER
                                    419 	.area CABS (ABS)
