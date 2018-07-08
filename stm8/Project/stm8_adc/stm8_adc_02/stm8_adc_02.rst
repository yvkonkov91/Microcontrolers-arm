                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Fri May  4 21:51:49 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module stm8_adc_02
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _adc1_r_cfg
                                     14 	.globl _mode
                                     15 	.globl _pin_cfg
                                     16 	.globl _uart_rx_byte
                                     17 	.globl _uart_tx_int
                                     18 	.globl _uart_tx_data
                                     19 	.globl _uart_tx_byte
                                     20 	.globl _clearStr
                                     21 	.globl _uart1_cfg
                                     22 	.globl _clk_cfg
                                     23 	.globl _delay_ms
                                     24 	.globl _tim4_cfg
                                     25 	.globl _delay_interrupt
                                     26 	.globl _adc
                                     27 	.globl _IT
                                     28 	.globl _count
                                     29 ;--------------------------------------------------------
                                     30 ; ram data
                                     31 ;--------------------------------------------------------
                                     32 	.area DATA
      000001                         33 _count::
      000001                         34 	.ds 2
      000003                         35 _IT::
      000003                         36 	.ds 1
      000004                         37 _adc::
      000004                         38 	.ds 2
                                     39 ;--------------------------------------------------------
                                     40 ; ram data
                                     41 ;--------------------------------------------------------
                                     42 	.area INITIALIZED
                                     43 ;--------------------------------------------------------
                                     44 ; Stack segment in internal ram 
                                     45 ;--------------------------------------------------------
                                     46 	.area	SSEG
      000006                         47 __start__stack:
      000006                         48 	.ds	1
                                     49 
                                     50 ;--------------------------------------------------------
                                     51 ; absolute external ram data
                                     52 ;--------------------------------------------------------
                                     53 	.area DABS (ABS)
                                     54 ;--------------------------------------------------------
                                     55 ; interrupt vector 
                                     56 ;--------------------------------------------------------
                                     57 	.area HOME
      008000                         58 __interrupt_vect:
      008000 82 00 80 83             59 	int s_GSINIT ;reset
      008004 82 00 00 00             60 	int 0x0000 ;trap
      008008 82 00 00 00             61 	int 0x0000 ;int0
      00800C 82 00 00 00             62 	int 0x0000 ;int1
      008010 82 00 00 00             63 	int 0x0000 ;int2
      008014 82 00 00 00             64 	int 0x0000 ;int3
      008018 82 00 00 00             65 	int 0x0000 ;int4
      00801C 82 00 00 00             66 	int 0x0000 ;int5
      008020 82 00 00 00             67 	int 0x0000 ;int6
      008024 82 00 00 00             68 	int 0x0000 ;int7
      008028 82 00 00 00             69 	int 0x0000 ;int8
      00802C 82 00 00 00             70 	int 0x0000 ;int9
      008030 82 00 00 00             71 	int 0x0000 ;int10
      008034 82 00 00 00             72 	int 0x0000 ;int11
      008038 82 00 00 00             73 	int 0x0000 ;int12
      00803C 82 00 00 00             74 	int 0x0000 ;int13
      008040 82 00 00 00             75 	int 0x0000 ;int14
      008044 82 00 00 00             76 	int 0x0000 ;int15
      008048 82 00 00 00             77 	int 0x0000 ;int16
      00804C 82 00 00 00             78 	int 0x0000 ;int17
      008050 82 00 00 00             79 	int 0x0000 ;int18
      008054 82 00 00 00             80 	int 0x0000 ;int19
      008058 82 00 00 00             81 	int 0x0000 ;int20
      00805C 82 00 00 00             82 	int 0x0000 ;int21
      008060 82 00 00 00             83 	int 0x0000 ;int22
      008064 82 00 80 A0             84 	int _delay_interrupt ;int23
      008068 82 00 00 00             85 	int 0x0000 ;int24
      00806C 82 00 00 00             86 	int 0x0000 ;int25
      008070 82 00 00 00             87 	int 0x0000 ;int26
      008074 82 00 00 00             88 	int 0x0000 ;int27
      008078 82 00 00 00             89 	int 0x0000 ;int28
      00807C 82 00 00 00             90 	int 0x0000 ;int29
                                     91 ;--------------------------------------------------------
                                     92 ; global & static initialisations
                                     93 ;--------------------------------------------------------
                                     94 	.area HOME
                                     95 	.area GSINIT
                                     96 	.area GSFINAL
                                     97 	.area GSINIT
      008083                         98 __sdcc_gs_init_startup:
      008083                         99 __sdcc_init_data:
                                    100 ; stm8_genXINIT() start
      008083 AE 00 05         [ 2]  101 	ldw x, #l_DATA
      008086 27 07            [ 1]  102 	jreq	00002$
      008088                        103 00001$:
      008088 72 4F 00 00      [ 1]  104 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]  105 	decw x
      00808D 26 F9            [ 1]  106 	jrne	00001$
      00808F                        107 00002$:
      00808F AE 00 00         [ 2]  108 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]  109 	jreq	00004$
      008094                        110 00003$:
      008094 D6 83 D4         [ 1]  111 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 05         [ 1]  112 	ld	(s_INITIALIZED - 1, x), a
      00809A 5A               [ 2]  113 	decw	x
      00809B 26 F7            [ 1]  114 	jrne	00003$
      00809D                        115 00004$:
                                    116 ; stm8_genXINIT() end
                                    117 	.area GSFINAL
      00809D CC 80 80         [ 2]  118 	jp	__sdcc_program_startup
                                    119 ;--------------------------------------------------------
                                    120 ; Home
                                    121 ;--------------------------------------------------------
                                    122 	.area HOME
                                    123 	.area HOME
      008080                        124 __sdcc_program_startup:
      008080 CC 82 8C         [ 2]  125 	jp	_main
                                    126 ;	return from main will return to caller
                                    127 ;--------------------------------------------------------
                                    128 ; code
                                    129 ;--------------------------------------------------------
                                    130 	.area CODE
                                    131 ;	../lib/lib1/inc/stm8s_delay.h: 3: extern void delay_interrupt(void) __interrupt(23) //обработчик прерывания функции delay_ms таймера TIM4
                                    132 ;	-----------------------------------------
                                    133 ;	 function delay_interrupt
                                    134 ;	-----------------------------------------
      0080A0                        135 _delay_interrupt:
                                    136 ;	../lib/lib1/inc/stm8s_delay.h: 5: if(count)
      0080A0 CE 00 01         [ 2]  137 	ldw	x, _count+0
      0080A3 27 07            [ 1]  138 	jreq	00102$
                                    139 ;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
      0080A5 CE 00 01         [ 2]  140 	ldw	x, _count+0
      0080A8 5A               [ 2]  141 	decw	x
      0080A9 CF 00 01         [ 2]  142 	ldw	_count+0, x
      0080AC                        143 00102$:
                                    144 ;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = 0x00; ////событие обновления не происходило
      0080AC 35 00 53 44      [ 1]  145 	mov	0x5344+0, #0x00
      0080B0 80               [11]  146 	iret
                                    147 ;	../lib/lib1/inc/stm8s_delay.h: 9: void tim4_cfg() //настройка таймера
                                    148 ;	-----------------------------------------
                                    149 ;	 function tim4_cfg
                                    150 ;	-----------------------------------------
      0080B1                        151 _tim4_cfg:
                                    152 ;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = 0x1;   //событие обновления не происходило
      0080B1 35 01 53 44      [ 1]  153 	mov	0x5344+0, #0x01
                                    154 ;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= 1;    // прерывания по обновлению включены
      0080B5 72 10 53 43      [ 1]  155 	bset	0x5343, #0
                                    156 ;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 128; // установка предделителя 128
      0080B9 72 1E 53 47      [ 1]  157 	bset	0x5347, #7
                                    158 ;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки
      0080BD AE 53 48         [ 2]  159 	ldw	x, #0x5348
      0080C0 F6               [ 1]  160 	ld	a, (x)
      0080C1 AA 7C            [ 1]  161 	or	a, #0x7c
      0080C3 F7               [ 1]  162 	ld	(x), a
      0080C4 81               [ 4]  163 	ret
                                    164 ;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint16_t ms) //функция выдержки времени
                                    165 ;	-----------------------------------------
                                    166 ;	 function delay_ms
                                    167 ;	-----------------------------------------
      0080C5                        168 _delay_ms:
                                    169 ;	../lib/lib1/inc/stm8s_delay.h: 18: TIM4->CR1  = 0x0;
      0080C5 35 00 53 40      [ 1]  170 	mov	0x5340+0, #0x00
                                    171 ;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms;
      0080C9 7B 04            [ 1]  172 	ld	a, (0x04, sp)
      0080CB C7 00 02         [ 1]  173 	ld	_count+1, a
      0080CE 7B 03            [ 1]  174 	ld	a, (0x03, sp)
      0080D0 C7 00 01         [ 1]  175 	ld	_count+0, a
                                    176 ;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = 0x1;
      0080D3 35 01 53 40      [ 1]  177 	mov	0x5340+0, #0x01
                                    178 ;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
      0080D7                        179 00101$:
      0080D7 CE 00 01         [ 2]  180 	ldw	x, _count+0
      0080DA 26 FB            [ 1]  181 	jrne	00101$
      0080DC 81               [ 4]  182 	ret
                                    183 ;	../lib/lib1/inc/stm8s_uart.h: 5: void clk_cfg()
                                    184 ;	-----------------------------------------
                                    185 ;	 function clk_cfg
                                    186 ;	-----------------------------------------
      0080DD                        187 _clk_cfg:
                                    188 ;	../lib/lib1/inc/stm8s_uart.h: 7: CLK->SWR     |= 0xE1;    //выбран основной источник тактиования HSI
      0080DD AE 50 C4         [ 2]  189 	ldw	x, #0x50c4
      0080E0 F6               [ 1]  190 	ld	a, (x)
      0080E1 AA E1            [ 1]  191 	or	a, #0xe1
      0080E3 F7               [ 1]  192 	ld	(x), a
                                    193 ;	../lib/lib1/inc/stm8s_uart.h: 8: CLK->CKDIVR  |= 0x0; // коэффициент деления частоты HSI-генератора (2MHz)
      0080E4 AE 50 C6         [ 2]  194 	ldw	x, #0x50c6
      0080E7 F6               [ 1]  195 	ld	a, (x)
      0080E8 AE 50 C6         [ 2]  196 	ldw	x, #0x50c6
      0080EB F7               [ 1]  197 	ld	(x), a
                                    198 ;	../lib/lib1/inc/stm8s_uart.h: 9: CLK->PCKENR1 |= 0b00010100; //включение модуля тактиования UART1 & TIM4
      0080EC AE 50 C7         [ 2]  199 	ldw	x, #0x50c7
      0080EF F6               [ 1]  200 	ld	a, (x)
      0080F0 AA 14            [ 1]  201 	or	a, #0x14
      0080F2 F7               [ 1]  202 	ld	(x), a
      0080F3 81               [ 4]  203 	ret
                                    204 ;	../lib/lib1/inc/stm8s_uart.h: 12: void uart1_cfg()
                                    205 ;	-----------------------------------------
                                    206 ;	 function uart1_cfg
                                    207 ;	-----------------------------------------
      0080F4                        208 _uart1_cfg:
                                    209 ;	../lib/lib1/inc/stm8s_uart.h: 14: UART1->CR1  |= 0b00000000;   //установка колличества бит передачи 8/9
      0080F4 AE 52 34         [ 2]  210 	ldw	x, #0x5234
      0080F7 F6               [ 1]  211 	ld	a, (x)
      0080F8 AE 52 34         [ 2]  212 	ldw	x, #0x5234
      0080FB F7               [ 1]  213 	ld	(x), a
                                    214 ;	../lib/lib1/inc/stm8s_uart.h: 15: UART1->CR2  |= 0b00001100;   //разрешение работы RX & TX
      0080FC AE 52 35         [ 2]  215 	ldw	x, #0x5235
      0080FF F6               [ 1]  216 	ld	a, (x)
      008100 AA 0C            [ 1]  217 	or	a, #0x0c
      008102 F7               [ 1]  218 	ld	(x), a
                                    219 ;	../lib/lib1/inc/stm8s_uart.h: 16: UART1->CR3  |= 0b00000000;   //STOP bits 00 - 1 stop bit
      008103 AE 52 36         [ 2]  220 	ldw	x, #0x5236
      008106 F6               [ 1]  221 	ld	a, (x)
      008107 AE 52 36         [ 2]  222 	ldw	x, #0x5236
      00810A F7               [ 1]  223 	ld	(x), a
                                    224 ;	../lib/lib1/inc/stm8s_uart.h: 18: UART1->BRR2 |= 0x0;  //сначало записываем скорость передачи в BRR2! / 
      00810B AE 52 33         [ 2]  225 	ldw	x, #0x5233
      00810E F6               [ 1]  226 	ld	a, (x)
      00810F AE 52 33         [ 2]  227 	ldw	x, #0x5233
      008112 F7               [ 1]  228 	ld	(x), a
                                    229 ;	../lib/lib1/inc/stm8s_uart.h: 19: UART1->BRR1 |= 0x0d;  //записываеться значение только после записи значения в BRR2! /9600
      008113 AE 52 32         [ 2]  230 	ldw	x, #0x5232
      008116 F6               [ 1]  231 	ld	a, (x)
      008117 AA 0D            [ 1]  232 	or	a, #0x0d
      008119 F7               [ 1]  233 	ld	(x), a
      00811A 81               [ 4]  234 	ret
                                    235 ;	../lib/lib1/inc/stm8s_uart.h: 23: void clearStr(unsigned char* s)
                                    236 ;	-----------------------------------------
                                    237 ;	 function clearStr
                                    238 ;	-----------------------------------------
      00811B                        239 _clearStr:
                                    240 ;	../lib/lib1/inc/stm8s_uart.h: 25: for(IT=0;IT<32;IT++)
      00811B 72 5F 00 03      [ 1]  241 	clr	_IT+0
      00811F                        242 00103$:
      00811F C6 00 03         [ 1]  243 	ld	a, _IT+0
      008122 A1 20            [ 1]  244 	cp	a, #0x20
      008124 24 0F            [ 1]  245 	jrnc	00105$
                                    246 ;	../lib/lib1/inc/stm8s_uart.h: 27: s[IT]=0;
      008126 5F               [ 1]  247 	clrw	x
      008127 C6 00 03         [ 1]  248 	ld	a, _IT+0
      00812A 97               [ 1]  249 	ld	xl, a
      00812B 72 FB 03         [ 2]  250 	addw	x, (0x03, sp)
      00812E 7F               [ 1]  251 	clr	(x)
                                    252 ;	../lib/lib1/inc/stm8s_uart.h: 25: for(IT=0;IT<32;IT++)
      00812F 72 5C 00 03      [ 1]  253 	inc	_IT+0
      008133 20 EA            [ 2]  254 	jra	00103$
      008135                        255 00105$:
      008135 81               [ 4]  256 	ret
                                    257 ;	../lib/lib1/inc/stm8s_uart.h: 43: void uart_tx_byte(unsigned char c)
                                    258 ;	-----------------------------------------
                                    259 ;	 function uart_tx_byte
                                    260 ;	-----------------------------------------
      008136                        261 _uart_tx_byte:
                                    262 ;	../lib/lib1/inc/stm8s_uart.h: 45: while(UART1->SR ==(0<<7));
      008136                        263 00101$:
      008136 AE 52 30         [ 2]  264 	ldw	x, #0x5230
      008139 F6               [ 1]  265 	ld	a, (x)
      00813A 4D               [ 1]  266 	tnz	a
      00813B 27 F9            [ 1]  267 	jreq	00101$
                                    268 ;	../lib/lib1/inc/stm8s_uart.h: 46: UART1->DR = c;
      00813D AE 52 31         [ 2]  269 	ldw	x, #0x5231
      008140 7B 03            [ 1]  270 	ld	a, (0x03, sp)
      008142 F7               [ 1]  271 	ld	(x), a
      008143 81               [ 4]  272 	ret
                                    273 ;	../lib/lib1/inc/stm8s_uart.h: 50: void uart_tx_data(unsigned char *s)
                                    274 ;	-----------------------------------------
                                    275 ;	 function uart_tx_data
                                    276 ;	-----------------------------------------
      008144                        277 _uart_tx_data:
                                    278 ;	../lib/lib1/inc/stm8s_uart.h: 52: while(*s != 0) uart_tx_byte(*s++);
      008144 1E 03            [ 2]  279 	ldw	x, (0x03, sp)
      008146                        280 00101$:
      008146 F6               [ 1]  281 	ld	a, (x)
      008147 4D               [ 1]  282 	tnz	a
      008148 27 0A            [ 1]  283 	jreq	00104$
      00814A 5C               [ 2]  284 	incw	x
      00814B 89               [ 2]  285 	pushw	x
      00814C 88               [ 1]  286 	push	a
      00814D CD 81 36         [ 4]  287 	call	_uart_tx_byte
      008150 84               [ 1]  288 	pop	a
      008151 85               [ 2]  289 	popw	x
      008152 20 F2            [ 2]  290 	jra	00101$
      008154                        291 00104$:
      008154 81               [ 4]  292 	ret
                                    293 ;	../lib/lib1/inc/stm8s_uart.h: 55: void uart_tx_int(uint16_t c)//    Отправка числа от 0000 до 9999
                                    294 ;	-----------------------------------------
                                    295 ;	 function uart_tx_int
                                    296 ;	-----------------------------------------
      008155                        297 _uart_tx_int:
      008155 52 02            [ 2]  298 	sub	sp, #2
                                    299 ;	../lib/lib1/inc/stm8s_uart.h: 58: c=c%100000000;
      008157 16 05            [ 2]  300 	ldw	y, (0x05, sp)
      008159 5F               [ 1]  301 	clrw	x
      00815A 4B 00            [ 1]  302 	push	#0x00
      00815C 4B E1            [ 1]  303 	push	#0xe1
      00815E 4B F5            [ 1]  304 	push	#0xf5
      008160 4B 05            [ 1]  305 	push	#0x05
      008162 90 89            [ 2]  306 	pushw	y
      008164 89               [ 2]  307 	pushw	x
      008165 CD 83 35         [ 4]  308 	call	__modslong
      008168 5B 08            [ 2]  309 	addw	sp, #8
      00816A 1F 05            [ 2]  310 	ldw	(0x05, sp), x
                                    311 ;	../lib/lib1/inc/stm8s_uart.h: 59: temp=c/100;
      00816C 1E 05            [ 2]  312 	ldw	x, (0x05, sp)
      00816E 90 AE 00 64      [ 2]  313 	ldw	y, #0x0064
      008172 65               [ 2]  314 	divw	x, y
                                    315 ;	../lib/lib1/inc/stm8s_uart.h: 60: uart_tx_byte(temp/10+'0');
      008173 89               [ 2]  316 	pushw	x
      008174 90 AE 00 0A      [ 2]  317 	ldw	y, #0x000a
      008178 65               [ 2]  318 	divw	x, y
      008179 90 93            [ 1]  319 	ldw	y, x
      00817B 9F               [ 1]  320 	ld	a, xl
      00817C 85               [ 2]  321 	popw	x
      00817D AB 30            [ 1]  322 	add	a, #0x30
      00817F 89               [ 2]  323 	pushw	x
      008180 88               [ 1]  324 	push	a
      008181 CD 81 36         [ 4]  325 	call	_uart_tx_byte
      008184 84               [ 1]  326 	pop	a
      008185 85               [ 2]  327 	popw	x
                                    328 ;	../lib/lib1/inc/stm8s_uart.h: 61: uart_tx_byte(temp%10+'0');
      008186 90 AE 00 0A      [ 2]  329 	ldw	y, #0x000a
      00818A 65               [ 2]  330 	divw	x, y
      00818B 90 9F            [ 1]  331 	ld	a, yl
      00818D AB 30            [ 1]  332 	add	a, #0x30
      00818F 88               [ 1]  333 	push	a
      008190 CD 81 36         [ 4]  334 	call	_uart_tx_byte
      008193 84               [ 1]  335 	pop	a
                                    336 ;	../lib/lib1/inc/stm8s_uart.h: 62: temp=c%100;
      008194 1E 05            [ 2]  337 	ldw	x, (0x05, sp)
      008196 90 AE 00 64      [ 2]  338 	ldw	y, #0x0064
      00819A 65               [ 2]  339 	divw	x, y
      00819B 17 01            [ 2]  340 	ldw	(0x01, sp), y
                                    341 ;	../lib/lib1/inc/stm8s_uart.h: 63: uart_tx_byte(temp/10+'0');
      00819D 1E 01            [ 2]  342 	ldw	x, (0x01, sp)
      00819F 90 AE 00 0A      [ 2]  343 	ldw	y, #0x000a
      0081A3 65               [ 2]  344 	divw	x, y
      0081A4 9F               [ 1]  345 	ld	a, xl
      0081A5 AB 30            [ 1]  346 	add	a, #0x30
      0081A7 88               [ 1]  347 	push	a
      0081A8 CD 81 36         [ 4]  348 	call	_uart_tx_byte
      0081AB 84               [ 1]  349 	pop	a
                                    350 ;	../lib/lib1/inc/stm8s_uart.h: 64: uart_tx_byte(temp%10+'0');
      0081AC 1E 01            [ 2]  351 	ldw	x, (0x01, sp)
      0081AE 90 AE 00 0A      [ 2]  352 	ldw	y, #0x000a
      0081B2 65               [ 2]  353 	divw	x, y
      0081B3 90 9F            [ 1]  354 	ld	a, yl
      0081B5 AB 30            [ 1]  355 	add	a, #0x30
      0081B7 88               [ 1]  356 	push	a
      0081B8 CD 81 36         [ 4]  357 	call	_uart_tx_byte
      0081BB 5B 03            [ 2]  358 	addw	sp, #3
      0081BD 81               [ 4]  359 	ret
                                    360 ;	../lib/lib1/inc/stm8s_uart.h: 68: unsigned char uart_rx_byte()
                                    361 ;	-----------------------------------------
                                    362 ;	 function uart_rx_byte
                                    363 ;	-----------------------------------------
      0081BE                        364 _uart_rx_byte:
                                    365 ;	../lib/lib1/inc/stm8s_uart.h: 70: while(UART1->SR ==(0<<7));
      0081BE                        366 00101$:
      0081BE AE 52 30         [ 2]  367 	ldw	x, #0x5230
      0081C1 F6               [ 1]  368 	ld	a, (x)
      0081C2 4D               [ 1]  369 	tnz	a
      0081C3 27 F9            [ 1]  370 	jreq	00101$
                                    371 ;	../lib/lib1/inc/stm8s_uart.h: 71: return UART1->DR;
      0081C5 AE 52 31         [ 2]  372 	ldw	x, #0x5231
      0081C8 F6               [ 1]  373 	ld	a, (x)
      0081C9 81               [ 4]  374 	ret
                                    375 ;	./stm8_adc_02.c: 27: void pin_cfg()  //функция настройки GPIO
                                    376 ;	-----------------------------------------
                                    377 ;	 function pin_cfg
                                    378 ;	-----------------------------------------
      0081CA                        379 _pin_cfg:
                                    380 ;	./stm8_adc_02.c: 29: GPIOB->DDR |= (1<<5);   //устанавливаем на выход пин 5 порта B
      0081CA AE 50 07         [ 2]  381 	ldw	x, #0x5007
      0081CD F6               [ 1]  382 	ld	a, (x)
      0081CE AA 20            [ 1]  383 	or	a, #0x20
      0081D0 F7               [ 1]  384 	ld	(x), a
                                    385 ;	./stm8_adc_02.c: 30: GPIOB->CR1 |= (1<<5);   //устанавливаем подтяжку пин 5 порта B
      0081D1 AE 50 08         [ 2]  386 	ldw	x, #0x5008
      0081D4 F6               [ 1]  387 	ld	a, (x)
      0081D5 AA 20            [ 1]  388 	or	a, #0x20
      0081D7 F7               [ 1]  389 	ld	(x), a
                                    390 ;	./stm8_adc_02.c: 31: GPIOB->CR2 |= (0<<5);   //минимальная скорость на выход / без прерывания на вход
      0081D8 AE 50 09         [ 2]  391 	ldw	x, #0x5009
      0081DB F6               [ 1]  392 	ld	a, (x)
      0081DC AE 50 09         [ 2]  393 	ldw	x, #0x5009
      0081DF F7               [ 1]  394 	ld	(x), a
                                    395 ;	./stm8_adc_02.c: 32: GPIOB->ODR |= (1<<5);
      0081E0 AE 50 05         [ 2]  396 	ldw	x, #0x5005
      0081E3 F6               [ 1]  397 	ld	a, (x)
      0081E4 AA 20            [ 1]  398 	or	a, #0x20
      0081E6 F7               [ 1]  399 	ld	(x), a
                                    400 ;	./stm8_adc_02.c: 34: GPIOD->DDR |= (1<<5);   //устанавливаем на выход пин 5 порта D TX
      0081E7 AE 50 11         [ 2]  401 	ldw	x, #0x5011
      0081EA F6               [ 1]  402 	ld	a, (x)
      0081EB AA 20            [ 1]  403 	or	a, #0x20
      0081ED F7               [ 1]  404 	ld	(x), a
                                    405 ;	./stm8_adc_02.c: 35: GPIOD->CR1 |= (0<<5);   //
      0081EE AE 50 12         [ 2]  406 	ldw	x, #0x5012
      0081F1 F6               [ 1]  407 	ld	a, (x)
      0081F2 AE 50 12         [ 2]  408 	ldw	x, #0x5012
      0081F5 F7               [ 1]  409 	ld	(x), a
                                    410 ;	./stm8_adc_02.c: 36: GPIOD->CR2 |= (0<<5);   //без прерывания на вход / минимальная скорость на выход
      0081F6 AE 50 13         [ 2]  411 	ldw	x, #0x5013
      0081F9 F6               [ 1]  412 	ld	a, (x)
      0081FA AE 50 13         [ 2]  413 	ldw	x, #0x5013
      0081FD F7               [ 1]  414 	ld	(x), a
                                    415 ;	./stm8_adc_02.c: 37: GPIOD->ODR |= (1<<5);
      0081FE AE 50 0F         [ 2]  416 	ldw	x, #0x500f
      008201 F6               [ 1]  417 	ld	a, (x)
      008202 AA 20            [ 1]  418 	or	a, #0x20
      008204 F7               [ 1]  419 	ld	(x), a
                                    420 ;	./stm8_adc_02.c: 39: GPIOC->DDR |= (0<<4);   //устанавливаем на выход пин 5 порта C
      008205 AE 50 0C         [ 2]  421 	ldw	x, #0x500c
      008208 F6               [ 1]  422 	ld	a, (x)
      008209 AE 50 0C         [ 2]  423 	ldw	x, #0x500c
      00820C F7               [ 1]  424 	ld	(x), a
                                    425 ;	./stm8_adc_02.c: 40: GPIOC->CR1 |= (0<<4);   //устанавливаем подтяжку пин 5 порта C
      00820D AE 50 0D         [ 2]  426 	ldw	x, #0x500d
      008210 F6               [ 1]  427 	ld	a, (x)
      008211 AE 50 0D         [ 2]  428 	ldw	x, #0x500d
      008214 F7               [ 1]  429 	ld	(x), a
                                    430 ;	./stm8_adc_02.c: 41: GPIOC->CR2 |= (0<<4);   //минимальная скорость на выход / без прерывания на вход
      008215 AE 50 0E         [ 2]  431 	ldw	x, #0x500e
      008218 F6               [ 1]  432 	ld	a, (x)
      008219 AE 50 0E         [ 2]  433 	ldw	x, #0x500e
      00821C F7               [ 1]  434 	ld	(x), a
                                    435 ;	./stm8_adc_02.c: 42: GPIOC->ODR |= (1<<4);
      00821D AE 50 0A         [ 2]  436 	ldw	x, #0x500a
      008220 F6               [ 1]  437 	ld	a, (x)
      008221 AA 10            [ 1]  438 	or	a, #0x10
      008223 F7               [ 1]  439 	ld	(x), a
      008224 81               [ 4]  440 	ret
                                    441 ;	./stm8_adc_02.c: 46: void mode()
                                    442 ;	-----------------------------------------
                                    443 ;	 function mode
                                    444 ;	-----------------------------------------
      008225                        445 _mode:
                                    446 ;	./stm8_adc_02.c: 48: pin_cfg();
      008225 CD 81 CA         [ 4]  447 	call	_pin_cfg
                                    448 ;	./stm8_adc_02.c: 50: uart1_cfg();
      008228 CD 80 F4         [ 4]  449 	call	_uart1_cfg
                                    450 ;	./stm8_adc_02.c: 52: clk_cfg();
      00822B CD 80 DD         [ 4]  451 	call	_clk_cfg
                                    452 ;	./stm8_adc_02.c: 54: tim4_cfg();
      00822E CD 80 B1         [ 4]  453 	call	_tim4_cfg
                                    454 ;	./stm8_adc_02.c: 56: rim();
      008231 9A               [ 1]  455 	rim 
      008232 81               [ 4]  456 	ret
                                    457 ;	./stm8_adc_02.c: 59: uint16_t adc1_r_cfg(uint8_t channel) 
                                    458 ;	-----------------------------------------
                                    459 ;	 function adc1_r_cfg
                                    460 ;	-----------------------------------------
      008233                        461 _adc1_r_cfg:
      008233 52 03            [ 2]  462 	sub	sp, #3
                                    463 ;	./stm8_adc_02.c: 63: CLK->PCKENR2 |= 0b00001000; //тактирование модуля ADC1
      008235 AE 50 CA         [ 2]  464 	ldw	x, #0x50ca
      008238 F6               [ 1]  465 	ld	a, (x)
      008239 AA 08            [ 1]  466 	or	a, #0x08
      00823B F7               [ 1]  467 	ld	(x), a
                                    468 ;	./stm8_adc_02.c: 64: ADC1->CSR |= ((0x0F)&channel); //выбор канала
      00823C AE 54 00         [ 2]  469 	ldw	x, #0x5400
      00823F F6               [ 1]  470 	ld	a, (x)
      008240 6B 03            [ 1]  471 	ld	(0x03, sp), a
      008242 7B 06            [ 1]  472 	ld	a, (0x06, sp)
      008244 A4 0F            [ 1]  473 	and	a, #0x0f
      008246 1A 03            [ 1]  474 	or	a, (0x03, sp)
      008248 AE 54 00         [ 2]  475 	ldw	x, #0x5400
      00824B F7               [ 1]  476 	ld	(x), a
                                    477 ;	./stm8_adc_02.c: 65: ADC1->CR2 |= (1<<3);   // номер канала преобразования АЦП
      00824C AE 54 02         [ 2]  478 	ldw	x, #0x5402
      00824F F6               [ 1]  479 	ld	a, (x)
      008250 AA 08            [ 1]  480 	or	a, #0x08
      008252 F7               [ 1]  481 	ld	(x), a
                                    482 ;	./stm8_adc_02.c: 66: ADC1->CR1 |= (1<<0);   //включение АЦП 
      008253 72 10 54 01      [ 1]  483 	bset	0x5401, #0
                                    484 ;	./stm8_adc_02.c: 67: ADC1->CR1 |= (0<<1);   // одиночное преобразование
      008257 AE 54 01         [ 2]  485 	ldw	x, #0x5401
      00825A F6               [ 1]  486 	ld	a, (x)
      00825B AE 54 01         [ 2]  487 	ldw	x, #0x5401
      00825E F7               [ 1]  488 	ld	(x), a
                                    489 ;	./stm8_adc_02.c: 68: while(((ADC1->CSR)&(1<<7))== 0);   // пока не завершено преобразование
      00825F                        490 00101$:
      00825F AE 54 00         [ 2]  491 	ldw	x, #0x5400
      008262 F6               [ 1]  492 	ld	a, (x)
      008263 4D               [ 1]  493 	tnz	a
      008264 2A F9            [ 1]  494 	jrpl	00101$
                                    495 ;	./stm8_adc_02.c: 69: val |= (uint8_t)ADC1->DRL;    //запись результата в переменную val из нижнего регистра
      008266 AE 54 05         [ 2]  496 	ldw	x, #0x5405
      008269 F6               [ 1]  497 	ld	a, (x)
      00826A 5F               [ 1]  498 	clrw	x
      00826B 97               [ 1]  499 	ld	xl, a
      00826C 1F 01            [ 2]  500 	ldw	(0x01, sp), x
                                    501 ;	./stm8_adc_02.c: 70: val |= (uint8_t)ADC1->DRH<<8;    //запись результата в переменную val из верхнего регистра
      00826E AE 54 04         [ 2]  502 	ldw	x, #0x5404
      008271 F6               [ 1]  503 	ld	a, (x)
      008272 95               [ 1]  504 	ld	xh, a
      008273 4F               [ 1]  505 	clr	a
      008274 4F               [ 1]  506 	clr	a
      008275 1A 02            [ 1]  507 	or	a, (0x02, sp)
      008277 02               [ 1]  508 	rlwa	x
      008278 1A 01            [ 1]  509 	or	a, (0x01, sp)
      00827A 95               [ 1]  510 	ld	xh, a
                                    511 ;	./stm8_adc_02.c: 71: ADC1->CR1 &= ~(1<<0); // ADC Stop Conversion
      00827B 90 AE 54 01      [ 2]  512 	ldw	y, #0x5401
      00827F 90 F6            [ 1]  513 	ld	a, (y)
      008281 A4 FE            [ 1]  514 	and	a, #0xfe
      008283 90 F7            [ 1]  515 	ld	(y), a
                                    516 ;	./stm8_adc_02.c: 72: val &= 0x03ff;
      008285 9E               [ 1]  517 	ld	a, xh
      008286 A4 03            [ 1]  518 	and	a, #0x03
      008288 95               [ 1]  519 	ld	xh, a
                                    520 ;	./stm8_adc_02.c: 73: return val;
      008289 5B 03            [ 2]  521 	addw	sp, #3
      00828B 81               [ 4]  522 	ret
                                    523 ;	./stm8_adc_02.c: 76: int main(void)
                                    524 ;	-----------------------------------------
                                    525 ;	 function main
                                    526 ;	-----------------------------------------
      00828C                        527 _main:
      00828C 52 02            [ 2]  528 	sub	sp, #2
                                    529 ;	./stm8_adc_02.c: 78: mode();
      00828E CD 82 25         [ 4]  530 	call	_mode
                                    531 ;	./stm8_adc_02.c: 79: uart_tx_data("\n\r");
      008291 AE 82 F9         [ 2]  532 	ldw	x, #___str_0+0
      008294 1F 01            [ 2]  533 	ldw	(0x01, sp), x
      008296 1E 01            [ 2]  534 	ldw	x, (0x01, sp)
      008298 89               [ 2]  535 	pushw	x
      008299 CD 81 44         [ 4]  536 	call	_uart_tx_data
      00829C 5B 02            [ 2]  537 	addw	sp, #2
                                    538 ;	./stm8_adc_02.c: 80: uart_tx_data("stm8s -> ok!\n\r");
      00829E AE 82 FC         [ 2]  539 	ldw	x, #___str_1+0
      0082A1 89               [ 2]  540 	pushw	x
      0082A2 CD 81 44         [ 4]  541 	call	_uart_tx_data
      0082A5 5B 02            [ 2]  542 	addw	sp, #2
      0082A7                        543 00102$:
                                    544 ;	./stm8_adc_02.c: 91: adc=adc1_r_cfg(2);
      0082A7 4B 02            [ 1]  545 	push	#0x02
      0082A9 CD 82 33         [ 4]  546 	call	_adc1_r_cfg
      0082AC 84               [ 1]  547 	pop	a
      0082AD CF 00 04         [ 2]  548 	ldw	_adc+0, x
                                    549 ;	./stm8_adc_02.c: 92: uart_tx_data("Volum: ");
      0082B0 AE 83 0B         [ 2]  550 	ldw	x, #___str_2+0
      0082B3 89               [ 2]  551 	pushw	x
      0082B4 CD 81 44         [ 4]  552 	call	_uart_tx_data
      0082B7 5B 02            [ 2]  553 	addw	sp, #2
                                    554 ;	./stm8_adc_02.c: 93: uart_tx_int(adc);
      0082B9 3B 00 05         [ 1]  555 	push	_adc+1
      0082BC 3B 00 04         [ 1]  556 	push	_adc+0
      0082BF CD 81 55         [ 4]  557 	call	_uart_tx_int
      0082C2 5B 02            [ 2]  558 	addw	sp, #2
                                    559 ;	./stm8_adc_02.c: 94: uart_tx_data("\n\r");
      0082C4 1E 01            [ 2]  560 	ldw	x, (0x01, sp)
      0082C6 89               [ 2]  561 	pushw	x
      0082C7 CD 81 44         [ 4]  562 	call	_uart_tx_data
      0082CA 5B 02            [ 2]  563 	addw	sp, #2
                                    564 ;	./stm8_adc_02.c: 95: clearStr("");
      0082CC AE 83 13         [ 2]  565 	ldw	x, #___str_3+0
      0082CF 89               [ 2]  566 	pushw	x
      0082D0 CD 81 1B         [ 4]  567 	call	_clearStr
      0082D3 5B 02            [ 2]  568 	addw	sp, #2
                                    569 ;	./stm8_adc_02.c: 96: GPIOB->ODR ^= (1<<5);
      0082D5 AE 50 05         [ 2]  570 	ldw	x, #0x5005
      0082D8 F6               [ 1]  571 	ld	a, (x)
      0082D9 A8 20            [ 1]  572 	xor	a, #0x20
      0082DB F7               [ 1]  573 	ld	(x), a
                                    574 ;	./stm8_adc_02.c: 97: delay_ms(adc*10+100);
      0082DC 3B 00 05         [ 1]  575 	push	_adc+1
      0082DF 3B 00 04         [ 1]  576 	push	_adc+0
      0082E2 4B 0A            [ 1]  577 	push	#0x0a
      0082E4 4B 00            [ 1]  578 	push	#0x00
      0082E6 CD 83 14         [ 4]  579 	call	__mulint
      0082E9 5B 04            [ 2]  580 	addw	sp, #4
      0082EB 1C 00 64         [ 2]  581 	addw	x, #0x0064
      0082EE 89               [ 2]  582 	pushw	x
      0082EF CD 80 C5         [ 4]  583 	call	_delay_ms
      0082F2 5B 02            [ 2]  584 	addw	sp, #2
      0082F4 20 B1            [ 2]  585 	jra	00102$
      0082F6 5B 02            [ 2]  586 	addw	sp, #2
      0082F8 81               [ 4]  587 	ret
                                    588 	.area CODE
      0082F9                        589 ___str_0:
      0082F9 0A                     590 	.db 0x0A
      0082FA 0D                     591 	.db 0x0D
      0082FB 00                     592 	.db 0x00
      0082FC                        593 ___str_1:
      0082FC 73 74 6D 38 73 20 2D   594 	.ascii "stm8s -> ok!"
             3E 20 6F 6B 21
      008308 0A                     595 	.db 0x0A
      008309 0D                     596 	.db 0x0D
      00830A 00                     597 	.db 0x00
      00830B                        598 ___str_2:
      00830B 56 6F 6C 75 6D 3A 20   599 	.ascii "Volum: "
      008312 00                     600 	.db 0x00
      008313                        601 ___str_3:
      008313 00                     602 	.db 0x00
                                    603 	.area INITIALIZER
                                    604 	.area CABS (ABS)
