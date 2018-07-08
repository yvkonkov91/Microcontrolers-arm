                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Thu May 10 21:41:22 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module stm8_uart_02
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _uart1_interrupt
                                     14 	.globl _pin_cfg
                                     15 	.globl _uart_rx_byte
                                     16 	.globl _uart_tx_int
                                     17 	.globl _uart_tx_data
                                     18 	.globl _uart_tx_byte
                                     19 	.globl _uart1_cfg
                                     20 	.globl _clk_cfg
                                     21 	.globl _delay_ms
                                     22 	.globl _tim4_cfg
                                     23 	.globl _delay_interrupt
                                     24 	.globl _rx
                                     25 	.globl _count
                                     26 ;--------------------------------------------------------
                                     27 ; ram data
                                     28 ;--------------------------------------------------------
                                     29 	.area DATA
      000001                         30 _count::
      000001                         31 	.ds 2
      000003                         32 _rx::
      000003                         33 	.ds 1
                                     34 ;--------------------------------------------------------
                                     35 ; ram data
                                     36 ;--------------------------------------------------------
                                     37 	.area INITIALIZED
                                     38 ;--------------------------------------------------------
                                     39 ; Stack segment in internal ram 
                                     40 ;--------------------------------------------------------
                                     41 	.area	SSEG
      000004                         42 __start__stack:
      000004                         43 	.ds	1
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
      008050 82 00 81 DD             74 	int _uart1_interrupt ;int18
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
      008083 AE 00 03         [ 2]   96 	ldw x, #l_DATA
      008086 27 07            [ 1]   97 	jreq	00002$
      008088                         98 00001$:
      008088 72 4F 00 00      [ 1]   99 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]  100 	decw x
      00808D 26 F9            [ 1]  101 	jrne	00001$
      00808F                        102 00002$:
      00808F AE 00 00         [ 2]  103 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]  104 	jreq	00004$
      008094                        105 00003$:
      008094 D6 82 AC         [ 1]  106 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 03         [ 1]  107 	ld	(s_INITIALIZED - 1, x), a
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
      008080 CC 81 ED         [ 2]  120 	jp	_main
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
                                    178 ;	../lib/lib1/inc/stm8s_uart.h: 3: void clk_cfg()
                                    179 ;	-----------------------------------------
                                    180 ;	 function clk_cfg
                                    181 ;	-----------------------------------------
      0080DD                        182 _clk_cfg:
                                    183 ;	../lib/lib1/inc/stm8s_uart.h: 5: CLK->SWR     |= 0xE1;    //выбран основной источник тактиования HSI
      0080DD AE 50 C4         [ 2]  184 	ldw	x, #0x50c4
      0080E0 F6               [ 1]  185 	ld	a, (x)
      0080E1 AA E1            [ 1]  186 	or	a, #0xe1
      0080E3 F7               [ 1]  187 	ld	(x), a
                                    188 ;	../lib/lib1/inc/stm8s_uart.h: 6: CLK->CKDIVR  |= 0x0; // коэффициент деления частоты HSI-генератора (2MHz)
      0080E4 AE 50 C6         [ 2]  189 	ldw	x, #0x50c6
      0080E7 F6               [ 1]  190 	ld	a, (x)
      0080E8 AE 50 C6         [ 2]  191 	ldw	x, #0x50c6
      0080EB F7               [ 1]  192 	ld	(x), a
                                    193 ;	../lib/lib1/inc/stm8s_uart.h: 7: CLK->PCKENR1 |= 0b00010100; //включение модуля тактиования UART1 & TIM4
      0080EC AE 50 C7         [ 2]  194 	ldw	x, #0x50c7
      0080EF F6               [ 1]  195 	ld	a, (x)
      0080F0 AA 14            [ 1]  196 	or	a, #0x14
      0080F2 F7               [ 1]  197 	ld	(x), a
      0080F3 81               [ 4]  198 	ret
                                    199 ;	../lib/lib1/inc/stm8s_uart.h: 10: void uart1_cfg()
                                    200 ;	-----------------------------------------
                                    201 ;	 function uart1_cfg
                                    202 ;	-----------------------------------------
      0080F4                        203 _uart1_cfg:
                                    204 ;	../lib/lib1/inc/stm8s_uart.h: 12: UART1->CR1  |= 0b00000000;   //установка колличества бит передачи 8/9
      0080F4 AE 52 34         [ 2]  205 	ldw	x, #0x5234
      0080F7 F6               [ 1]  206 	ld	a, (x)
      0080F8 AE 52 34         [ 2]  207 	ldw	x, #0x5234
      0080FB F7               [ 1]  208 	ld	(x), a
                                    209 ;	../lib/lib1/inc/stm8s_uart.h: 13: UART1->CR2  |= 0b01001100;   //разрешение работы RX & TX
      0080FC AE 52 35         [ 2]  210 	ldw	x, #0x5235
      0080FF F6               [ 1]  211 	ld	a, (x)
      008100 AA 4C            [ 1]  212 	or	a, #0x4c
      008102 F7               [ 1]  213 	ld	(x), a
                                    214 ;	../lib/lib1/inc/stm8s_uart.h: 14: UART1->CR3  |= 0b00000000;   //STOP bits 00 - 1 stop bit
      008103 AE 52 36         [ 2]  215 	ldw	x, #0x5236
      008106 F6               [ 1]  216 	ld	a, (x)
      008107 AE 52 36         [ 2]  217 	ldw	x, #0x5236
      00810A F7               [ 1]  218 	ld	(x), a
                                    219 ;	../lib/lib1/inc/stm8s_uart.h: 16: UART1->BRR2 |= 0x0;  //сначало записываем скорость передачи в BRR2! / 
      00810B AE 52 33         [ 2]  220 	ldw	x, #0x5233
      00810E F6               [ 1]  221 	ld	a, (x)
      00810F AE 52 33         [ 2]  222 	ldw	x, #0x5233
      008112 F7               [ 1]  223 	ld	(x), a
                                    224 ;	../lib/lib1/inc/stm8s_uart.h: 17: UART1->BRR1 |= 0x0d;  //записываеться значение только после записи значения в BRR2! /9600
      008113 AE 52 32         [ 2]  225 	ldw	x, #0x5232
      008116 F6               [ 1]  226 	ld	a, (x)
      008117 AA 0D            [ 1]  227 	or	a, #0x0d
      008119 F7               [ 1]  228 	ld	(x), a
      00811A 81               [ 4]  229 	ret
                                    230 ;	../lib/lib1/inc/stm8s_uart.h: 23: void uart_tx_byte(unsigned char c)
                                    231 ;	-----------------------------------------
                                    232 ;	 function uart_tx_byte
                                    233 ;	-----------------------------------------
      00811B                        234 _uart_tx_byte:
                                    235 ;	../lib/lib1/inc/stm8s_uart.h: 25: while(UART1->SR ==(0<<7));
      00811B                        236 00101$:
      00811B AE 52 30         [ 2]  237 	ldw	x, #0x5230
      00811E F6               [ 1]  238 	ld	a, (x)
      00811F 4D               [ 1]  239 	tnz	a
      008120 27 F9            [ 1]  240 	jreq	00101$
                                    241 ;	../lib/lib1/inc/stm8s_uart.h: 26: UART1->DR = c;
      008122 AE 52 31         [ 2]  242 	ldw	x, #0x5231
      008125 7B 03            [ 1]  243 	ld	a, (0x03, sp)
      008127 F7               [ 1]  244 	ld	(x), a
      008128 81               [ 4]  245 	ret
                                    246 ;	../lib/lib1/inc/stm8s_uart.h: 30: void uart_tx_data(unsigned char *s)
                                    247 ;	-----------------------------------------
                                    248 ;	 function uart_tx_data
                                    249 ;	-----------------------------------------
      008129                        250 _uart_tx_data:
                                    251 ;	../lib/lib1/inc/stm8s_uart.h: 32: while(*s != 0) uart_tx_byte(*s++);
      008129 1E 03            [ 2]  252 	ldw	x, (0x03, sp)
      00812B                        253 00101$:
      00812B F6               [ 1]  254 	ld	a, (x)
      00812C 4D               [ 1]  255 	tnz	a
      00812D 27 0A            [ 1]  256 	jreq	00104$
      00812F 5C               [ 2]  257 	incw	x
      008130 89               [ 2]  258 	pushw	x
      008131 88               [ 1]  259 	push	a
      008132 CD 81 1B         [ 4]  260 	call	_uart_tx_byte
      008135 84               [ 1]  261 	pop	a
      008136 85               [ 2]  262 	popw	x
      008137 20 F2            [ 2]  263 	jra	00101$
      008139                        264 00104$:
      008139 81               [ 4]  265 	ret
                                    266 ;	../lib/lib1/inc/stm8s_uart.h: 35: void uart_tx_int(uint16_t c)//    Отправка числа от 0000 до 9999
                                    267 ;	-----------------------------------------
                                    268 ;	 function uart_tx_int
                                    269 ;	-----------------------------------------
      00813A                        270 _uart_tx_int:
      00813A 52 02            [ 2]  271 	sub	sp, #2
                                    272 ;	../lib/lib1/inc/stm8s_uart.h: 38: c=c%100000000;
      00813C 16 05            [ 2]  273 	ldw	y, (0x05, sp)
      00813E 5F               [ 1]  274 	clrw	x
      00813F 4B 00            [ 1]  275 	push	#0x00
      008141 4B E1            [ 1]  276 	push	#0xe1
      008143 4B F5            [ 1]  277 	push	#0xf5
      008145 4B 05            [ 1]  278 	push	#0x05
      008147 90 89            [ 2]  279 	pushw	y
      008149 89               [ 2]  280 	pushw	x
      00814A CD 82 0D         [ 4]  281 	call	__modslong
      00814D 5B 08            [ 2]  282 	addw	sp, #8
      00814F 1F 05            [ 2]  283 	ldw	(0x05, sp), x
                                    284 ;	../lib/lib1/inc/stm8s_uart.h: 39: temp=c/100;
      008151 1E 05            [ 2]  285 	ldw	x, (0x05, sp)
      008153 90 AE 00 64      [ 2]  286 	ldw	y, #0x0064
      008157 65               [ 2]  287 	divw	x, y
                                    288 ;	../lib/lib1/inc/stm8s_uart.h: 40: uart_tx_byte(temp/10+'0');
      008158 89               [ 2]  289 	pushw	x
      008159 90 AE 00 0A      [ 2]  290 	ldw	y, #0x000a
      00815D 65               [ 2]  291 	divw	x, y
      00815E 90 93            [ 1]  292 	ldw	y, x
      008160 9F               [ 1]  293 	ld	a, xl
      008161 85               [ 2]  294 	popw	x
      008162 AB 30            [ 1]  295 	add	a, #0x30
      008164 89               [ 2]  296 	pushw	x
      008165 88               [ 1]  297 	push	a
      008166 CD 81 1B         [ 4]  298 	call	_uart_tx_byte
      008169 84               [ 1]  299 	pop	a
      00816A 85               [ 2]  300 	popw	x
                                    301 ;	../lib/lib1/inc/stm8s_uart.h: 41: uart_tx_byte(temp%10+'0');
      00816B 90 AE 00 0A      [ 2]  302 	ldw	y, #0x000a
      00816F 65               [ 2]  303 	divw	x, y
      008170 90 9F            [ 1]  304 	ld	a, yl
      008172 AB 30            [ 1]  305 	add	a, #0x30
      008174 88               [ 1]  306 	push	a
      008175 CD 81 1B         [ 4]  307 	call	_uart_tx_byte
      008178 84               [ 1]  308 	pop	a
                                    309 ;	../lib/lib1/inc/stm8s_uart.h: 42: temp=c%100;
      008179 1E 05            [ 2]  310 	ldw	x, (0x05, sp)
      00817B 90 AE 00 64      [ 2]  311 	ldw	y, #0x0064
      00817F 65               [ 2]  312 	divw	x, y
      008180 17 01            [ 2]  313 	ldw	(0x01, sp), y
                                    314 ;	../lib/lib1/inc/stm8s_uart.h: 43: uart_tx_byte(temp/10+'0');
      008182 1E 01            [ 2]  315 	ldw	x, (0x01, sp)
      008184 90 AE 00 0A      [ 2]  316 	ldw	y, #0x000a
      008188 65               [ 2]  317 	divw	x, y
      008189 9F               [ 1]  318 	ld	a, xl
      00818A AB 30            [ 1]  319 	add	a, #0x30
      00818C 88               [ 1]  320 	push	a
      00818D CD 81 1B         [ 4]  321 	call	_uart_tx_byte
      008190 84               [ 1]  322 	pop	a
                                    323 ;	../lib/lib1/inc/stm8s_uart.h: 44: uart_tx_byte(temp%10+'0');
      008191 1E 01            [ 2]  324 	ldw	x, (0x01, sp)
      008193 90 AE 00 0A      [ 2]  325 	ldw	y, #0x000a
      008197 65               [ 2]  326 	divw	x, y
      008198 90 9F            [ 1]  327 	ld	a, yl
      00819A AB 30            [ 1]  328 	add	a, #0x30
      00819C 88               [ 1]  329 	push	a
      00819D CD 81 1B         [ 4]  330 	call	_uart_tx_byte
      0081A0 5B 03            [ 2]  331 	addw	sp, #3
      0081A2 81               [ 4]  332 	ret
                                    333 ;	../lib/lib1/inc/stm8s_uart.h: 48: unsigned char uart_rx_byte(void)  //  Получение байта
                                    334 ;	-----------------------------------------
                                    335 ;	 function uart_rx_byte
                                    336 ;	-----------------------------------------
      0081A3                        337 _uart_rx_byte:
                                    338 ;	../lib/lib1/inc/stm8s_uart.h: 50: while(!(UART1->SR&(1<<7)))    //  Устанавливается, когда регистр свободен
      0081A3                        339 00101$:
      0081A3 AE 52 30         [ 2]  340 	ldw	x, #0x5230
      0081A6 F6               [ 1]  341 	ld	a, (x)
      0081A7 4D               [ 1]  342 	tnz	a
      0081A8 2A F9            [ 1]  343 	jrpl	00101$
                                    344 ;	../lib/lib1/inc/stm8s_uart.h: 52: return UART1->DR;
      0081AA AE 52 31         [ 2]  345 	ldw	x, #0x5231
      0081AD F6               [ 1]  346 	ld	a, (x)
      0081AE 81               [ 4]  347 	ret
                                    348 ;	./stm8_uart_02.c: 6: void pin_cfg()  //функция настройки GPIO
                                    349 ;	-----------------------------------------
                                    350 ;	 function pin_cfg
                                    351 ;	-----------------------------------------
      0081AF                        352 _pin_cfg:
                                    353 ;	./stm8_uart_02.c: 8: GPIOB->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта B
      0081AF AE 50 07         [ 2]  354 	ldw	x, #0x5007
      0081B2 F6               [ 1]  355 	ld	a, (x)
      0081B3 AA 20            [ 1]  356 	or	a, #0x20
      0081B5 F7               [ 1]  357 	ld	(x), a
                                    358 ;	./stm8_uart_02.c: 9: GPIOB->CR1 |= 0b00100000;   //устанавливаем подтяжку пин 5 порта B
      0081B6 AE 50 08         [ 2]  359 	ldw	x, #0x5008
      0081B9 F6               [ 1]  360 	ld	a, (x)
      0081BA AA 20            [ 1]  361 	or	a, #0x20
      0081BC F7               [ 1]  362 	ld	(x), a
                                    363 ;	./stm8_uart_02.c: 10: GPIOB->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
      0081BD AE 50 09         [ 2]  364 	ldw	x, #0x5009
      0081C0 F6               [ 1]  365 	ld	a, (x)
      0081C1 AE 50 09         [ 2]  366 	ldw	x, #0x5009
      0081C4 F7               [ 1]  367 	ld	(x), a
                                    368 ;	./stm8_uart_02.c: 12: GPIOD->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта D TX
      0081C5 AE 50 11         [ 2]  369 	ldw	x, #0x5011
      0081C8 F6               [ 1]  370 	ld	a, (x)
      0081C9 AA 20            [ 1]  371 	or	a, #0x20
      0081CB F7               [ 1]  372 	ld	(x), a
                                    373 ;	./stm8_uart_02.c: 13: GPIOD->CR1 |= 0b00000000;   //без подтяжки
      0081CC AE 50 12         [ 2]  374 	ldw	x, #0x5012
      0081CF F6               [ 1]  375 	ld	a, (x)
      0081D0 AE 50 12         [ 2]  376 	ldw	x, #0x5012
      0081D3 F7               [ 1]  377 	ld	(x), a
                                    378 ;	./stm8_uart_02.c: 14: GPIOD->CR2 |= 0b00000000;   //без прерывания на вход / минимальная скорость на выход
      0081D4 AE 50 13         [ 2]  379 	ldw	x, #0x5013
      0081D7 F6               [ 1]  380 	ld	a, (x)
      0081D8 AE 50 13         [ 2]  381 	ldw	x, #0x5013
      0081DB F7               [ 1]  382 	ld	(x), a
      0081DC 81               [ 4]  383 	ret
                                    384 ;	./stm8_uart_02.c: 18: extern void uart1_interrupt(void) __interrupt(18)   // Обработчик прерываний по приему UART
                                    385 ;	-----------------------------------------
                                    386 ;	 function uart1_interrupt
                                    387 ;	-----------------------------------------
      0081DD                        388 _uart1_interrupt:
                                    389 ;	./stm8_uart_02.c: 29: if((UART1->SR & (1<<6))!=0)
      0081DD AE 52 30         [ 2]  390 	ldw	x, #0x5230
      0081E0 F6               [ 1]  391 	ld	a, (x)
      0081E1 A5 40            [ 1]  392 	bcp	a, #0x40
      0081E3 27 07            [ 1]  393 	jreq	00103$
                                    394 ;	./stm8_uart_02.c: 32: UART1->SR ^= (1<<6);  
      0081E5 AE 52 30         [ 2]  395 	ldw	x, #0x5230
      0081E8 F6               [ 1]  396 	ld	a, (x)
      0081E9 A8 40            [ 1]  397 	xor	a, #0x40
      0081EB F7               [ 1]  398 	ld	(x), a
      0081EC                        399 00103$:
      0081EC 80               [11]  400 	iret
                                    401 ;	./stm8_uart_02.c: 39: int main( void )
                                    402 ;	-----------------------------------------
                                    403 ;	 function main
                                    404 ;	-----------------------------------------
      0081ED                        405 _main:
                                    406 ;	./stm8_uart_02.c: 41: pin_cfg();
      0081ED CD 81 AF         [ 4]  407 	call	_pin_cfg
                                    408 ;	./stm8_uart_02.c: 43: clk_cfg();
      0081F0 CD 80 DD         [ 4]  409 	call	_clk_cfg
                                    410 ;	./stm8_uart_02.c: 45: tim4_cfg();
      0081F3 CD 80 B1         [ 4]  411 	call	_tim4_cfg
                                    412 ;	./stm8_uart_02.c: 47: uart1_cfg();
      0081F6 CD 80 F4         [ 4]  413 	call	_uart1_cfg
                                    414 ;	./stm8_uart_02.c: 49: rim();  //разрешаем глобальное прерывание
      0081F9 9A               [ 1]  415 	rim 
      0081FA                        416 00102$:
                                    417 ;	./stm8_uart_02.c: 55: GPIOB->ODR ^= 0b00100000;
      0081FA AE 50 05         [ 2]  418 	ldw	x, #0x5005
      0081FD F6               [ 1]  419 	ld	a, (x)
      0081FE A8 20            [ 1]  420 	xor	a, #0x20
      008200 F7               [ 1]  421 	ld	(x), a
                                    422 ;	./stm8_uart_02.c: 56: delay_ms(5000);
      008201 4B 88            [ 1]  423 	push	#0x88
      008203 4B 13            [ 1]  424 	push	#0x13
      008205 CD 80 C5         [ 4]  425 	call	_delay_ms
      008208 5B 02            [ 2]  426 	addw	sp, #2
      00820A 20 EE            [ 2]  427 	jra	00102$
      00820C 81               [ 4]  428 	ret
                                    429 	.area CODE
                                    430 	.area INITIALIZER
                                    431 	.area CABS (ABS)
