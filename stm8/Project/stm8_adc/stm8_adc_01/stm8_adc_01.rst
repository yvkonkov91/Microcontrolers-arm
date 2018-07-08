                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Wed May  2 13:28:48 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module stm8_adc_01
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _IRQ_Handled_ADC1
                                     14 	.globl _pin_cfg
                                     15 	.globl _uart_rx_data
                                     16 	.globl _uart_rx_byte
                                     17 	.globl _uart_tx_data
                                     18 	.globl _uart_tx_byte
                                     19 	.globl _uart1_cfg
                                     20 	.globl _clk_cfg
                                     21 	.globl _uart1_interrupt
                                     22 	.globl _delay_ms
                                     23 	.globl _tim4_cfg
                                     24 	.globl _delay_interrupt
                                     25 	.globl _GPIO_Init
                                     26 	.globl _ADC1_ClearITPendingBit
                                     27 	.globl _ADC1_GetConversionValue
                                     28 	.globl _ADC1_StartConversion
                                     29 	.globl _ADC1_ITConfig
                                     30 	.globl _ADC1_Init
                                     31 	.globl _ADC1_DeInit
                                     32 	.globl _adc2
                                     33 	.globl _count
                                     34 ;--------------------------------------------------------
                                     35 ; ram data
                                     36 ;--------------------------------------------------------
                                     37 	.area DATA
      000001                         38 _count::
      000001                         39 	.ds 2
      000003                         40 _adc2::
      000003                         41 	.ds 2
                                     42 ;--------------------------------------------------------
                                     43 ; ram data
                                     44 ;--------------------------------------------------------
                                     45 	.area INITIALIZED
                                     46 ;--------------------------------------------------------
                                     47 ; Stack segment in internal ram 
                                     48 ;--------------------------------------------------------
                                     49 	.area	SSEG
      000005                         50 __start__stack:
      000005                         51 	.ds	1
                                     52 
                                     53 ;--------------------------------------------------------
                                     54 ; absolute external ram data
                                     55 ;--------------------------------------------------------
                                     56 	.area DABS (ABS)
                                     57 ;--------------------------------------------------------
                                     58 ; interrupt vector 
                                     59 ;--------------------------------------------------------
                                     60 	.area HOME
      008000                         61 __interrupt_vect:
      008000 82 00 80 83             62 	int s_GSINIT ;reset
      008004 82 00 00 00             63 	int 0x0000 ;trap
      008008 82 00 00 00             64 	int 0x0000 ;int0
      00800C 82 00 00 00             65 	int 0x0000 ;int1
      008010 82 00 00 00             66 	int 0x0000 ;int2
      008014 82 00 00 00             67 	int 0x0000 ;int3
      008018 82 00 00 00             68 	int 0x0000 ;int4
      00801C 82 00 00 00             69 	int 0x0000 ;int5
      008020 82 00 00 00             70 	int 0x0000 ;int6
      008024 82 00 00 00             71 	int 0x0000 ;int7
      008028 82 00 00 00             72 	int 0x0000 ;int8
      00802C 82 00 00 00             73 	int 0x0000 ;int9
      008030 82 00 00 00             74 	int 0x0000 ;int10
      008034 82 00 00 00             75 	int 0x0000 ;int11
      008038 82 00 00 00             76 	int 0x0000 ;int12
      00803C 82 00 00 00             77 	int 0x0000 ;int13
      008040 82 00 00 00             78 	int 0x0000 ;int14
      008044 82 00 00 00             79 	int 0x0000 ;int15
      008048 82 00 00 00             80 	int 0x0000 ;int16
      00804C 82 00 00 00             81 	int 0x0000 ;int17
      008050 82 00 80 DD             82 	int _uart1_interrupt ;int18
      008054 82 00 00 00             83 	int 0x0000 ;int19
      008058 82 00 00 00             84 	int 0x0000 ;int20
      00805C 82 00 00 00             85 	int 0x0000 ;int21
      008060 82 00 81 A2             86 	int _IRQ_Handled_ADC1 ;int22
      008064 82 00 80 A0             87 	int _delay_interrupt ;int23
      008068 82 00 00 00             88 	int 0x0000 ;int24
      00806C 82 00 00 00             89 	int 0x0000 ;int25
      008070 82 00 00 00             90 	int 0x0000 ;int26
      008074 82 00 00 00             91 	int 0x0000 ;int27
      008078 82 00 00 00             92 	int 0x0000 ;int28
      00807C 82 00 00 00             93 	int 0x0000 ;int29
                                     94 ;--------------------------------------------------------
                                     95 ; global & static initialisations
                                     96 ;--------------------------------------------------------
                                     97 	.area HOME
                                     98 	.area GSINIT
                                     99 	.area GSFINAL
                                    100 	.area GSINIT
      008083                        101 __sdcc_gs_init_startup:
      008083                        102 __sdcc_init_data:
                                    103 ; stm8_genXINIT() start
      008083 AE 00 04         [ 2]  104 	ldw x, #l_DATA
      008086 27 07            [ 1]  105 	jreq	00002$
      008088                        106 00001$:
      008088 72 4F 00 00      [ 1]  107 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]  108 	decw x
      00808D 26 F9            [ 1]  109 	jrne	00001$
      00808F                        110 00002$:
      00808F AE 00 00         [ 2]  111 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]  112 	jreq	00004$
      008094                        113 00003$:
      008094 D6 82 21         [ 1]  114 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 04         [ 1]  115 	ld	(s_INITIALIZED - 1, x), a
      00809A 5A               [ 2]  116 	decw	x
      00809B 26 F7            [ 1]  117 	jrne	00003$
      00809D                        118 00004$:
                                    119 ; stm8_genXINIT() end
                                    120 	.area GSFINAL
      00809D CC 80 80         [ 2]  121 	jp	__sdcc_program_startup
                                    122 ;--------------------------------------------------------
                                    123 ; Home
                                    124 ;--------------------------------------------------------
                                    125 	.area HOME
                                    126 	.area HOME
      008080                        127 __sdcc_program_startup:
      008080 CC 81 B2         [ 2]  128 	jp	_main
                                    129 ;	return from main will return to caller
                                    130 ;--------------------------------------------------------
                                    131 ; code
                                    132 ;--------------------------------------------------------
                                    133 	.area CODE
                                    134 ;	../lib/lib1/inc/stm8s_delay.h: 3: extern void delay_interrupt(void) __interrupt(23) //обработчик прерывания функции delay_ms таймера TIM4
                                    135 ;	-----------------------------------------
                                    136 ;	 function delay_interrupt
                                    137 ;	-----------------------------------------
      0080A0                        138 _delay_interrupt:
                                    139 ;	../lib/lib1/inc/stm8s_delay.h: 5: if(count)
      0080A0 CE 00 01         [ 2]  140 	ldw	x, _count+0
      0080A3 27 07            [ 1]  141 	jreq	00102$
                                    142 ;	../lib/lib1/inc/stm8s_delay.h: 6: count--;    //дикримент переменной count
      0080A5 CE 00 01         [ 2]  143 	ldw	x, _count+0
      0080A8 5A               [ 2]  144 	decw	x
      0080A9 CF 00 01         [ 2]  145 	ldw	_count+0, x
      0080AC                        146 00102$:
                                    147 ;	../lib/lib1/inc/stm8s_delay.h: 7: TIM4->SR1   = 0x00; ////событие обновления не происходило
      0080AC 35 00 53 44      [ 1]  148 	mov	0x5344+0, #0x00
      0080B0 80               [11]  149 	iret
                                    150 ;	../lib/lib1/inc/stm8s_delay.h: 9: void tim4_cfg() //настройка таймера
                                    151 ;	-----------------------------------------
                                    152 ;	 function tim4_cfg
                                    153 ;	-----------------------------------------
      0080B1                        154 _tim4_cfg:
                                    155 ;	../lib/lib1/inc/stm8s_delay.h: 11: TIM4->SR1   = 0x1;   //событие обновления не происходило
      0080B1 35 01 53 44      [ 1]  156 	mov	0x5344+0, #0x01
                                    157 ;	../lib/lib1/inc/stm8s_delay.h: 12: TIM4->IER  |= 1;    // прерывания по обновлению включены
      0080B5 72 10 53 43      [ 1]  158 	bset	0x5343, #0
                                    159 ;	../lib/lib1/inc/stm8s_delay.h: 13: TIM4->PSCR |= 128; // установка предделителя 128
      0080B9 72 1E 53 47      [ 1]  160 	bset	0x5347, #7
                                    161 ;	../lib/lib1/inc/stm8s_delay.h: 14: TIM4->ARR  |= 124;    // значение автоперезагрузки
      0080BD AE 53 48         [ 2]  162 	ldw	x, #0x5348
      0080C0 F6               [ 1]  163 	ld	a, (x)
      0080C1 AA 7C            [ 1]  164 	or	a, #0x7c
      0080C3 F7               [ 1]  165 	ld	(x), a
      0080C4 81               [ 4]  166 	ret
                                    167 ;	../lib/lib1/inc/stm8s_delay.h: 16: void delay_ms(uint16_t ms) //функция выдержки времени
                                    168 ;	-----------------------------------------
                                    169 ;	 function delay_ms
                                    170 ;	-----------------------------------------
      0080C5                        171 _delay_ms:
                                    172 ;	../lib/lib1/inc/stm8s_delay.h: 18: TIM4->CR1  = 0x0;
      0080C5 35 00 53 40      [ 1]  173 	mov	0x5340+0, #0x00
                                    174 ;	../lib/lib1/inc/stm8s_delay.h: 20: count = ms;
      0080C9 7B 04            [ 1]  175 	ld	a, (0x04, sp)
      0080CB C7 00 02         [ 1]  176 	ld	_count+1, a
      0080CE 7B 03            [ 1]  177 	ld	a, (0x03, sp)
      0080D0 C7 00 01         [ 1]  178 	ld	_count+0, a
                                    179 ;	../lib/lib1/inc/stm8s_delay.h: 21: TIM4->CR1  = 0x1;
      0080D3 35 01 53 40      [ 1]  180 	mov	0x5340+0, #0x01
                                    181 ;	../lib/lib1/inc/stm8s_delay.h: 22: while(count);
      0080D7                        182 00101$:
      0080D7 CE 00 01         [ 2]  183 	ldw	x, _count+0
      0080DA 26 FB            [ 1]  184 	jrne	00101$
      0080DC 81               [ 4]  185 	ret
                                    186 ;	../lib/lib1/inc/stm8s_uart.h: 3: extern void uart1_interrupt(void) __interrupt(18)   // Обработчик прерываний по приему UART
                                    187 ;	-----------------------------------------
                                    188 ;	 function uart1_interrupt
                                    189 ;	-----------------------------------------
      0080DD                        190 _uart1_interrupt:
                                    191 ;	../lib/lib1/inc/stm8s_uart.h: 6: data = UART1->DR;
      0080DD AE 52 31         [ 2]  192 	ldw	x, #0x5231
      0080E0 F6               [ 1]  193 	ld	a, (x)
      0080E1 80               [11]  194 	iret
                                    195 ;	../lib/lib1/inc/stm8s_uart.h: 10: void clk_cfg()
                                    196 ;	-----------------------------------------
                                    197 ;	 function clk_cfg
                                    198 ;	-----------------------------------------
      0080E2                        199 _clk_cfg:
                                    200 ;	../lib/lib1/inc/stm8s_uart.h: 12: CLK->SWR     |= 0xE1;    //выбран основной источник тактиования HSI
      0080E2 AE 50 C4         [ 2]  201 	ldw	x, #0x50c4
      0080E5 F6               [ 1]  202 	ld	a, (x)
      0080E6 AA E1            [ 1]  203 	or	a, #0xe1
      0080E8 F7               [ 1]  204 	ld	(x), a
                                    205 ;	../lib/lib1/inc/stm8s_uart.h: 13: CLK->CKDIVR  |= 0x0; // коэффициент деления частоты HSI-генератора (2MHz)
      0080E9 AE 50 C6         [ 2]  206 	ldw	x, #0x50c6
      0080EC F6               [ 1]  207 	ld	a, (x)
      0080ED AE 50 C6         [ 2]  208 	ldw	x, #0x50c6
      0080F0 F7               [ 1]  209 	ld	(x), a
                                    210 ;	../lib/lib1/inc/stm8s_uart.h: 14: CLK->PCKENR1 |= 0b00010100; //включение модуля тактиования UART1 & TIM4
      0080F1 AE 50 C7         [ 2]  211 	ldw	x, #0x50c7
      0080F4 F6               [ 1]  212 	ld	a, (x)
      0080F5 AA 14            [ 1]  213 	or	a, #0x14
      0080F7 F7               [ 1]  214 	ld	(x), a
      0080F8 81               [ 4]  215 	ret
                                    216 ;	../lib/lib1/inc/stm8s_uart.h: 17: void uart1_cfg()
                                    217 ;	-----------------------------------------
                                    218 ;	 function uart1_cfg
                                    219 ;	-----------------------------------------
      0080F9                        220 _uart1_cfg:
                                    221 ;	../lib/lib1/inc/stm8s_uart.h: 19: UART1->CR1  |= 0b00000000;   //установка колличества бит передачи 8/9
      0080F9 AE 52 34         [ 2]  222 	ldw	x, #0x5234
      0080FC F6               [ 1]  223 	ld	a, (x)
      0080FD AE 52 34         [ 2]  224 	ldw	x, #0x5234
      008100 F7               [ 1]  225 	ld	(x), a
                                    226 ;	../lib/lib1/inc/stm8s_uart.h: 20: UART1->CR2  |= 0b00001100;   //разрешение работы RX & TX
      008101 AE 52 35         [ 2]  227 	ldw	x, #0x5235
      008104 F6               [ 1]  228 	ld	a, (x)
      008105 AA 0C            [ 1]  229 	or	a, #0x0c
      008107 F7               [ 1]  230 	ld	(x), a
                                    231 ;	../lib/lib1/inc/stm8s_uart.h: 21: UART1->CR3  |= 0b00000000;   //STOP bits 00 - 1 stop bit
      008108 AE 52 36         [ 2]  232 	ldw	x, #0x5236
      00810B F6               [ 1]  233 	ld	a, (x)
      00810C AE 52 36         [ 2]  234 	ldw	x, #0x5236
      00810F F7               [ 1]  235 	ld	(x), a
                                    236 ;	../lib/lib1/inc/stm8s_uart.h: 23: UART1->BRR2 |= 0x0;  //сначало записываем скорость передачи в BRR2! / 
      008110 AE 52 33         [ 2]  237 	ldw	x, #0x5233
      008113 F6               [ 1]  238 	ld	a, (x)
      008114 AE 52 33         [ 2]  239 	ldw	x, #0x5233
      008117 F7               [ 1]  240 	ld	(x), a
                                    241 ;	../lib/lib1/inc/stm8s_uart.h: 24: UART1->BRR1 |= 0x0d;  //записываеться значение только после записи значения в BRR2! /9600
      008118 AE 52 32         [ 2]  242 	ldw	x, #0x5232
      00811B F6               [ 1]  243 	ld	a, (x)
      00811C AA 0D            [ 1]  244 	or	a, #0x0d
      00811E F7               [ 1]  245 	ld	(x), a
      00811F 81               [ 4]  246 	ret
                                    247 ;	../lib/lib1/inc/stm8s_uart.h: 28: void uart_tx_byte(unsigned char data){
                                    248 ;	-----------------------------------------
                                    249 ;	 function uart_tx_byte
                                    250 ;	-----------------------------------------
      008120                        251 _uart_tx_byte:
                                    252 ;	../lib/lib1/inc/stm8s_uart.h: 29: while(!UART1->SR ==1);
      008120                        253 00101$:
      008120 AE 52 30         [ 2]  254 	ldw	x, #0x5230
      008123 F6               [ 1]  255 	ld	a, (x)
      008124 A0 01            [ 1]  256 	sub	a, #0x01
      008126 4F               [ 1]  257 	clr	a
      008127 49               [ 1]  258 	rlc	a
      008128 A1 01            [ 1]  259 	cp	a, #0x01
      00812A 27 F4            [ 1]  260 	jreq	00101$
                                    261 ;	../lib/lib1/inc/stm8s_uart.h: 30: UART1->DR = data;
      00812C AE 52 31         [ 2]  262 	ldw	x, #0x5231
      00812F 7B 03            [ 1]  263 	ld	a, (0x03, sp)
      008131 F7               [ 1]  264 	ld	(x), a
      008132 81               [ 4]  265 	ret
                                    266 ;	../lib/lib1/inc/stm8s_uart.h: 34: void uart_tx_data(unsigned char *data, unsigned char len){
                                    267 ;	-----------------------------------------
                                    268 ;	 function uart_tx_data
                                    269 ;	-----------------------------------------
      008133                        270 _uart_tx_data:
      008133 88               [ 1]  271 	push	a
                                    272 ;	../lib/lib1/inc/stm8s_uart.h: 36: while(len--){
      008134 1E 04            [ 2]  273 	ldw	x, (0x04, sp)
      008136 7B 06            [ 1]  274 	ld	a, (0x06, sp)
      008138 6B 01            [ 1]  275 	ld	(0x01, sp), a
      00813A                        276 00101$:
      00813A 7B 01            [ 1]  277 	ld	a, (0x01, sp)
      00813C 0A 01            [ 1]  278 	dec	(0x01, sp)
      00813E 4D               [ 1]  279 	tnz	a
      00813F 27 0D            [ 1]  280 	jreq	00104$
                                    281 ;	../lib/lib1/inc/stm8s_uart.h: 37: uart_tx_byte(*data++);
      008141 F6               [ 1]  282 	ld	a, (x)
      008142 5C               [ 2]  283 	incw	x
      008143 1F 04            [ 2]  284 	ldw	(0x04, sp), x
      008145 89               [ 2]  285 	pushw	x
      008146 88               [ 1]  286 	push	a
      008147 CD 81 20         [ 4]  287 	call	_uart_tx_byte
      00814A 84               [ 1]  288 	pop	a
      00814B 85               [ 2]  289 	popw	x
      00814C 20 EC            [ 2]  290 	jra	00101$
      00814E                        291 00104$:
      00814E 84               [ 1]  292 	pop	a
      00814F 81               [ 4]  293 	ret
                                    294 ;	../lib/lib1/inc/stm8s_uart.h: 41: unsigned char uart_rx_byte(){
                                    295 ;	-----------------------------------------
                                    296 ;	 function uart_rx_byte
                                    297 ;	-----------------------------------------
      008150                        298 _uart_rx_byte:
                                    299 ;	../lib/lib1/inc/stm8s_uart.h: 44: while(!UART1->SR);
      008150                        300 00101$:
      008150 AE 52 30         [ 2]  301 	ldw	x, #0x5230
      008153 F6               [ 1]  302 	ld	a, (x)
      008154 4D               [ 1]  303 	tnz	a
      008155 27 F9            [ 1]  304 	jreq	00101$
                                    305 ;	../lib/lib1/inc/stm8s_uart.h: 45: data = UART1->DR;
      008157 AE 52 31         [ 2]  306 	ldw	x, #0x5231
      00815A F6               [ 1]  307 	ld	a, (x)
                                    308 ;	../lib/lib1/inc/stm8s_uart.h: 46: return data;
      00815B 81               [ 4]  309 	ret
                                    310 ;	../lib/lib1/inc/stm8s_uart.h: 50: void uart_rx_data(unsigned char * data, unsigned char len){
                                    311 ;	-----------------------------------------
                                    312 ;	 function uart_rx_data
                                    313 ;	-----------------------------------------
      00815C                        314 _uart_rx_data:
      00815C 88               [ 1]  315 	push	a
                                    316 ;	../lib/lib1/inc/stm8s_uart.h: 51: while(len--){
      00815D 1E 04            [ 2]  317 	ldw	x, (0x04, sp)
      00815F 7B 06            [ 1]  318 	ld	a, (0x06, sp)
      008161 6B 01            [ 1]  319 	ld	(0x01, sp), a
      008163                        320 00101$:
      008163 7B 01            [ 1]  321 	ld	a, (0x01, sp)
      008165 0A 01            [ 1]  322 	dec	(0x01, sp)
      008167 4D               [ 1]  323 	tnz	a
      008168 27 09            [ 1]  324 	jreq	00104$
                                    325 ;	../lib/lib1/inc/stm8s_uart.h: 52: *data++ = uart_rx_byte();
      00816A 89               [ 2]  326 	pushw	x
      00816B CD 81 50         [ 4]  327 	call	_uart_rx_byte
      00816E 85               [ 2]  328 	popw	x
      00816F F7               [ 1]  329 	ld	(x), a
      008170 5C               [ 2]  330 	incw	x
      008171 20 F0            [ 2]  331 	jra	00101$
      008173                        332 00104$:
      008173 84               [ 1]  333 	pop	a
      008174 81               [ 4]  334 	ret
                                    335 ;	./stm8_adc_01.c: 9: void pin_cfg()  //функция настройки GPIO
                                    336 ;	-----------------------------------------
                                    337 ;	 function pin_cfg
                                    338 ;	-----------------------------------------
      008175                        339 _pin_cfg:
                                    340 ;	./stm8_adc_01.c: 11: GPIOB->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта B
      008175 AE 50 07         [ 2]  341 	ldw	x, #0x5007
      008178 F6               [ 1]  342 	ld	a, (x)
      008179 AA 20            [ 1]  343 	or	a, #0x20
      00817B F7               [ 1]  344 	ld	(x), a
                                    345 ;	./stm8_adc_01.c: 12: GPIOB->CR1 |= 0b00100000;   //устанавливаем подтяжку пин 5 порта B
      00817C AE 50 08         [ 2]  346 	ldw	x, #0x5008
      00817F F6               [ 1]  347 	ld	a, (x)
      008180 AA 20            [ 1]  348 	or	a, #0x20
      008182 F7               [ 1]  349 	ld	(x), a
                                    350 ;	./stm8_adc_01.c: 13: GPIOD->CR2 |= 0b00000000;   //минимальная скорость на выход / без прерывания на вход
      008183 AE 50 13         [ 2]  351 	ldw	x, #0x5013
      008186 F6               [ 1]  352 	ld	a, (x)
      008187 AE 50 13         [ 2]  353 	ldw	x, #0x5013
      00818A F7               [ 1]  354 	ld	(x), a
                                    355 ;	./stm8_adc_01.c: 15: GPIOD->DDR |= 0b00100000;   //устанавливаем на выход пин 5 порта D TX
      00818B AE 50 11         [ 2]  356 	ldw	x, #0x5011
      00818E F6               [ 1]  357 	ld	a, (x)
      00818F AA 20            [ 1]  358 	or	a, #0x20
      008191 F7               [ 1]  359 	ld	(x), a
                                    360 ;	./stm8_adc_01.c: 16: GPIOD->CR1 |= 0b00100000;   //без подтяжки
      008192 AE 50 12         [ 2]  361 	ldw	x, #0x5012
      008195 F6               [ 1]  362 	ld	a, (x)
      008196 AA 20            [ 1]  363 	or	a, #0x20
      008198 F7               [ 1]  364 	ld	(x), a
                                    365 ;	./stm8_adc_01.c: 17: GPIOD->CR2 |= 0b00000000;   //без прерывания на вход / минимальная скорость на выход
      008199 AE 50 13         [ 2]  366 	ldw	x, #0x5013
      00819C F6               [ 1]  367 	ld	a, (x)
      00819D AE 50 13         [ 2]  368 	ldw	x, #0x5013
      0081A0 F7               [ 1]  369 	ld	(x), a
      0081A1 81               [ 4]  370 	ret
                                    371 ;	./stm8_adc_01.c: 22: INTERRUPT_HANDLER(IRQ_Handled_ADC1,22)
                                    372 ;	-----------------------------------------
                                    373 ;	 function IRQ_Handled_ADC1
                                    374 ;	-----------------------------------------
      0081A2                        375 _IRQ_Handled_ADC1:
                                    376 ;	./stm8_adc_01.c: 24: adc2=ADC1_GetConversionValue();
      0081A2 CD 00 00         [ 4]  377 	call	_ADC1_GetConversionValue
      0081A5 CF 00 03         [ 2]  378 	ldw	_adc2+0, x
                                    379 ;	./stm8_adc_01.c: 26: ADC1_ClearITPendingBit(ADC1_IT_EOC);
      0081A8 4B 80            [ 1]  380 	push	#0x80
      0081AA 4B 00            [ 1]  381 	push	#0x00
      0081AC CD 00 00         [ 4]  382 	call	_ADC1_ClearITPendingBit
      0081AF 5B 02            [ 2]  383 	addw	sp, #2
      0081B1 80               [11]  384 	iret
                                    385 ;	./stm8_adc_01.c: 30: int main( void )
                                    386 ;	-----------------------------------------
                                    387 ;	 function main
                                    388 ;	-----------------------------------------
      0081B2                        389 _main:
                                    390 ;	./stm8_adc_01.c: 32: pin_cfg();
      0081B2 CD 81 75         [ 4]  391 	call	_pin_cfg
                                    392 ;	./stm8_adc_01.c: 34: clk_cfg();
      0081B5 CD 80 E2         [ 4]  393 	call	_clk_cfg
                                    394 ;	./stm8_adc_01.c: 36: tim4_cfg();
      0081B8 CD 80 B1         [ 4]  395 	call	_tim4_cfg
                                    396 ;	./stm8_adc_01.c: 38: uart1_cfg();
      0081BB CD 80 F9         [ 4]  397 	call	_uart1_cfg
                                    398 ;	./stm8_adc_01.c: 42: GPIO_Init(GPIOC,GPIO_PIN_4,GPIO_MODE_IN_FL_NO_IT);
      0081BE 4B 00            [ 1]  399 	push	#0x00
      0081C0 4B 10            [ 1]  400 	push	#0x10
      0081C2 4B 0A            [ 1]  401 	push	#0x0a
      0081C4 4B 50            [ 1]  402 	push	#0x50
      0081C6 CD 00 00         [ 4]  403 	call	_GPIO_Init
      0081C9 5B 04            [ 2]  404 	addw	sp, #4
                                    405 ;	./stm8_adc_01.c: 43: ADC1_DeInit();
      0081CB CD 00 00         [ 4]  406 	call	_ADC1_DeInit
                                    407 ;	./stm8_adc_01.c: 44: ADC1_Init(ADC1_CONVERSIONMODE_SINGLE, ADC1_CHANNEL_2, ADC1_PRESSEL_FCPU_D8,
      0081CE 4B 00            [ 1]  408 	push	#0x00
      0081D0 4B 02            [ 1]  409 	push	#0x02
      0081D2 4B 08            [ 1]  410 	push	#0x08
      0081D4 4B 00            [ 1]  411 	push	#0x00
      0081D6 4B 00            [ 1]  412 	push	#0x00
      0081D8 4B 40            [ 1]  413 	push	#0x40
      0081DA 4B 02            [ 1]  414 	push	#0x02
      0081DC 4B 00            [ 1]  415 	push	#0x00
      0081DE CD 00 00         [ 4]  416 	call	_ADC1_Init
      0081E1 5B 08            [ 2]  417 	addw	sp, #8
                                    418 ;	./stm8_adc_01.c: 46: ADC1_ITConfig(ADC1_IT_EOCIE ,ENABLE);
      0081E3 4B 01            [ 1]  419 	push	#0x01
      0081E5 4B 20            [ 1]  420 	push	#0x20
      0081E7 4B 00            [ 1]  421 	push	#0x00
      0081E9 CD 00 00         [ 4]  422 	call	_ADC1_ITConfig
      0081EC 5B 03            [ 2]  423 	addw	sp, #3
                                    424 ;	./stm8_adc_01.c: 50: adc2=0;
      0081EE 5F               [ 1]  425 	clrw	x
      0081EF CF 00 03         [ 2]  426 	ldw	_adc2+0, x
                                    427 ;	./stm8_adc_01.c: 51: rim();
      0081F2 9A               [ 1]  428 	rim 
      0081F3                        429 00102$:
                                    430 ;	./stm8_adc_01.c: 55: GPIOB->ODR ^=0b00100000;  //зажигаем светодиод
      0081F3 AE 50 05         [ 2]  431 	ldw	x, #0x5005
      0081F6 F6               [ 1]  432 	ld	a, (x)
      0081F7 A8 20            [ 1]  433 	xor	a, #0x20
      0081F9 F7               [ 1]  434 	ld	(x), a
                                    435 ;	./stm8_adc_01.c: 57: ADC1_StartConversion();
      0081FA CD 00 00         [ 4]  436 	call	_ADC1_StartConversion
                                    437 ;	./stm8_adc_01.c: 59: delay_ms(500);//временная задержка
      0081FD 4B F4            [ 1]  438 	push	#0xf4
      0081FF 4B 01            [ 1]  439 	push	#0x01
      008201 CD 80 C5         [ 4]  440 	call	_delay_ms
      008204 5B 02            [ 2]  441 	addw	sp, #2
                                    442 ;	./stm8_adc_01.c: 61: uart_tx_data("on, ",4);
      008206 AE 82 1D         [ 2]  443 	ldw	x, #___str_0+0
      008209 4B 04            [ 1]  444 	push	#0x04
      00820B 89               [ 2]  445 	pushw	x
      00820C CD 81 33         [ 4]  446 	call	_uart_tx_data
      00820F 5B 03            [ 2]  447 	addw	sp, #3
                                    448 ;	./stm8_adc_01.c: 65: delay_ms(500);
      008211 4B F4            [ 1]  449 	push	#0xf4
      008213 4B 01            [ 1]  450 	push	#0x01
      008215 CD 80 C5         [ 4]  451 	call	_delay_ms
      008218 5B 02            [ 2]  452 	addw	sp, #2
      00821A 20 D7            [ 2]  453 	jra	00102$
      00821C 81               [ 4]  454 	ret
                                    455 	.area CODE
      00821D                        456 ___str_0:
      00821D 6F 6E 2C 20            457 	.ascii "on, "
      008221 00                     458 	.db 0x00
                                    459 	.area INITIALIZER
                                    460 	.area CABS (ABS)
