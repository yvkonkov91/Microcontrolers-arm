                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Sat Mar 24 20:18:16 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module button_leds
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _running
                                     14 	.globl _button
                                     15 	.globl _PIN
                                     16 	.globl _delay
                                     17 	.globl _bs
                                     18 	.globl _msb
                                     19 	.globl _ms
                                     20 	.globl _n
                                     21 ;--------------------------------------------------------
                                     22 ; ram data
                                     23 ;--------------------------------------------------------
                                     24 	.area DATA
      000001                         25 _n::
      000001                         26 	.ds 1
                                     27 ;--------------------------------------------------------
                                     28 ; ram data
                                     29 ;--------------------------------------------------------
                                     30 	.area INITIALIZED
      000002                         31 _ms::
      000002                         32 	.ds 4
      000006                         33 _msb::
      000006                         34 	.ds 4
      00000A                         35 _bs::
      00000A                         36 	.ds 1
                                     37 ;--------------------------------------------------------
                                     38 ; Stack segment in internal ram 
                                     39 ;--------------------------------------------------------
                                     40 	.area	SSEG
      00000B                         41 __start__stack:
      00000B                         42 	.ds	1
                                     43 
                                     44 ;--------------------------------------------------------
                                     45 ; absolute external ram data
                                     46 ;--------------------------------------------------------
                                     47 	.area DABS (ABS)
                                     48 ;--------------------------------------------------------
                                     49 ; interrupt vector 
                                     50 ;--------------------------------------------------------
                                     51 	.area HOME
      008000                         52 __interrupt_vect:
      008000 82 00 80 83             53 	int s_GSINIT ;reset
      008004 82 00 00 00             54 	int 0x0000 ;trap
      008008 82 00 00 00             55 	int 0x0000 ;int0
      00800C 82 00 00 00             56 	int 0x0000 ;int1
      008010 82 00 00 00             57 	int 0x0000 ;int2
      008014 82 00 00 00             58 	int 0x0000 ;int3
      008018 82 00 00 00             59 	int 0x0000 ;int4
      00801C 82 00 00 00             60 	int 0x0000 ;int5
      008020 82 00 00 00             61 	int 0x0000 ;int6
      008024 82 00 00 00             62 	int 0x0000 ;int7
      008028 82 00 00 00             63 	int 0x0000 ;int8
      00802C 82 00 00 00             64 	int 0x0000 ;int9
      008030 82 00 00 00             65 	int 0x0000 ;int10
      008034 82 00 00 00             66 	int 0x0000 ;int11
      008038 82 00 00 00             67 	int 0x0000 ;int12
      00803C 82 00 00 00             68 	int 0x0000 ;int13
      008040 82 00 00 00             69 	int 0x0000 ;int14
      008044 82 00 00 00             70 	int 0x0000 ;int15
      008048 82 00 00 00             71 	int 0x0000 ;int16
      00804C 82 00 00 00             72 	int 0x0000 ;int17
      008050 82 00 00 00             73 	int 0x0000 ;int18
      008054 82 00 00 00             74 	int 0x0000 ;int19
      008058 82 00 00 00             75 	int 0x0000 ;int20
      00805C 82 00 00 00             76 	int 0x0000 ;int21
      008060 82 00 00 00             77 	int 0x0000 ;int22
      008064 82 00 00 00             78 	int 0x0000 ;int23
      008068 82 00 00 00             79 	int 0x0000 ;int24
      00806C 82 00 00 00             80 	int 0x0000 ;int25
      008070 82 00 00 00             81 	int 0x0000 ;int26
      008074 82 00 00 00             82 	int 0x0000 ;int27
      008078 82 00 00 00             83 	int 0x0000 ;int28
      00807C 82 00 00 00             84 	int 0x0000 ;int29
                                     85 ;--------------------------------------------------------
                                     86 ; global & static initialisations
                                     87 ;--------------------------------------------------------
                                     88 	.area HOME
                                     89 	.area GSINIT
                                     90 	.area GSFINAL
                                     91 	.area GSINIT
      008083                         92 __sdcc_gs_init_startup:
      008083                         93 __sdcc_init_data:
                                     94 ; stm8_genXINIT() start
      008083 AE 00 01         [ 2]   95 	ldw x, #l_DATA
      008086 27 07            [ 1]   96 	jreq	00002$
      008088                         97 00001$:
      008088 72 4F 00 00      [ 1]   98 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]   99 	decw x
      00808D 26 F9            [ 1]  100 	jrne	00001$
      00808F                        101 00002$:
      00808F AE 00 09         [ 2]  102 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]  103 	jreq	00004$
      008094                        104 00003$:
      008094 D6 82 58         [ 1]  105 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 01         [ 1]  106 	ld	(s_INITIALIZED - 1, x), a
      00809A 5A               [ 2]  107 	decw	x
      00809B 26 F7            [ 1]  108 	jrne	00003$
      00809D                        109 00004$:
                                    110 ; stm8_genXINIT() end
                                    111 	.area GSFINAL
      00809D CC 80 80         [ 2]  112 	jp	__sdcc_program_startup
                                    113 ;--------------------------------------------------------
                                    114 ; Home
                                    115 ;--------------------------------------------------------
                                    116 	.area HOME
                                    117 	.area HOME
      008080                        118 __sdcc_program_startup:
      008080 CC 82 4D         [ 2]  119 	jp	_main
                                    120 ;	return from main will return to caller
                                    121 ;--------------------------------------------------------
                                    122 ; code
                                    123 ;--------------------------------------------------------
                                    124 	.area CODE
                                    125 ;	./button_leds.c: 5: uint32_t delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
                                    126 ;	-----------------------------------------
                                    127 ;	 function delay
                                    128 ;	-----------------------------------------
      0080A0                        129 _delay:
      0080A0 52 04            [ 2]  130 	sub	sp, #4
                                    131 ;	./button_leds.c: 8: while(t--);
      0080A2 90 AE 01 F4      [ 2]  132 	ldw	y, #0x01f4
      0080A6 5F               [ 1]  133 	clrw	x
      0080A7                        134 00101$:
      0080A7 17 03            [ 2]  135 	ldw	(0x03, sp), y
      0080A9 1F 01            [ 2]  136 	ldw	(0x01, sp), x
      0080AB 72 A2 00 01      [ 2]  137 	subw	y, #0x0001
      0080AF 9F               [ 1]  138 	ld	a, xl
      0080B0 A2 00            [ 1]  139 	sbc	a, #0x00
      0080B2 02               [ 1]  140 	rlwa	x
      0080B3 A2 00            [ 1]  141 	sbc	a, #0x00
      0080B5 95               [ 1]  142 	ld	xh, a
      0080B6 0D 04            [ 1]  143 	tnz	(0x04, sp)
      0080B8 26 ED            [ 1]  144 	jrne	00101$
      0080BA 0D 03            [ 1]  145 	tnz	(0x03, sp)
      0080BC 26 E9            [ 1]  146 	jrne	00101$
      0080BE 0D 02            [ 1]  147 	tnz	(0x02, sp)
      0080C0 26 E5            [ 1]  148 	jrne	00101$
      0080C2 0D 01            [ 1]  149 	tnz	(0x01, sp)
      0080C4 26 E1            [ 1]  150 	jrne	00101$
                                    151 ;	./button_leds.c: 9: return t;
      0080C6 51               [ 1]  152 	exgw	x, y
      0080C7 5B 04            [ 2]  153 	addw	sp, #4
      0080C9 81               [ 4]  154 	ret
                                    155 ;	./button_leds.c: 26: void PIN()
                                    156 ;	-----------------------------------------
                                    157 ;	 function PIN
                                    158 ;	-----------------------------------------
      0080CA                        159 _PIN:
                                    160 ;	./button_leds.c: 28: GPIOC->DDR |= 0xf8;   	//направление данных порта out-0; input-1
      0080CA AE 50 0C         [ 2]  161 	ldw	x, #0x500c
      0080CD F6               [ 1]  162 	ld	a, (x)
      0080CE AA F8            [ 1]  163 	or	a, #0xf8
      0080D0 F7               [ 1]  164 	ld	(x), a
                                    165 ;	./button_leds.c: 29: GPIOC->CR1 |= 0xf8;   	//установка подтягивающего резистора open-drain=0; push-pull=1
      0080D1 AE 50 0D         [ 2]  166 	ldw	x, #0x500d
      0080D4 F6               [ 1]  167 	ld	a, (x)
      0080D5 AA F8            [ 1]  168 	or	a, #0xf8
      0080D7 F7               [ 1]  169 	ld	(x), a
                                    170 ;	./button_leds.c: 30: GPIOC->ODR |= 0xf8;   	//установка значения бита 0/1
      0080D8 AE 50 0A         [ 2]  171 	ldw	x, #0x500a
      0080DB F6               [ 1]  172 	ld	a, (x)
      0080DC AA F8            [ 1]  173 	or	a, #0xf8
      0080DE F7               [ 1]  174 	ld	(x), a
                                    175 ;	./button_leds.c: 32: GPIOD->DDR |= 0x00;
      0080DF AE 50 11         [ 2]  176 	ldw	x, #0x5011
      0080E2 F6               [ 1]  177 	ld	a, (x)
      0080E3 AE 50 11         [ 2]  178 	ldw	x, #0x5011
      0080E6 F7               [ 1]  179 	ld	(x), a
                                    180 ;	./button_leds.c: 33: GPIOD->CR1 |= 0x10;
      0080E7 AE 50 12         [ 2]  181 	ldw	x, #0x5012
      0080EA F6               [ 1]  182 	ld	a, (x)
      0080EB AA 10            [ 1]  183 	or	a, #0x10
      0080ED F7               [ 1]  184 	ld	(x), a
                                    185 ;	./button_leds.c: 34: GPIOD->CR2 |= 0x00;
      0080EE AE 50 13         [ 2]  186 	ldw	x, #0x5013
      0080F1 F6               [ 1]  187 	ld	a, (x)
      0080F2 AE 50 13         [ 2]  188 	ldw	x, #0x5013
      0080F5 F7               [ 1]  189 	ld	(x), a
      0080F6 81               [ 4]  190 	ret
                                    191 ;	./button_leds.c: 38: void button()
                                    192 ;	-----------------------------------------
                                    193 ;	 function button
                                    194 ;	-----------------------------------------
      0080F7                        195 _button:
      0080F7 52 08            [ 2]  196 	sub	sp, #8
                                    197 ;	./button_leds.c: 41: if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>50) // фиксируем нажатие кнопки
      0080F9 AE 50 10         [ 2]  198 	ldw	x, #0x5010
      0080FC F6               [ 1]  199 	ld	a, (x)
      0080FD A5 10            [ 1]  200 	bcp	a, #0x10
      0080FF 26 4A            [ 1]  201 	jrne	00102$
      008101 72 01 00 0A 02   [ 2]  202 	btjf	_bs+0, #0, 00136$
      008106 20 43            [ 2]  203 	jra	00102$
      008108                        204 00136$:
      008108 3B 00 05         [ 1]  205 	push	_ms+3
      00810B 3B 00 04         [ 1]  206 	push	_ms+2
      00810E 3B 00 03         [ 1]  207 	push	_ms+1
      008111 3B 00 02         [ 1]  208 	push	_ms+0
      008114 CD 80 A0         [ 4]  209 	call	_delay
      008117 5B 04            [ 2]  210 	addw	sp, #4
      008119 51               [ 1]  211 	exgw	x, y
      00811A 72 B2 00 08      [ 2]  212 	subw	y, _msb+2
      00811E 17 03            [ 2]  213 	ldw	(0x03, sp), y
      008120 9F               [ 1]  214 	ld	a, xl
      008121 C2 00 07         [ 1]  215 	sbc	a, _msb+1
      008124 6B 02            [ 1]  216 	ld	(0x02, sp), a
      008126 9E               [ 1]  217 	ld	a, xh
      008127 C2 00 06         [ 1]  218 	sbc	a, _msb+0
      00812A 6B 01            [ 1]  219 	ld	(0x01, sp), a
      00812C AE 00 32         [ 2]  220 	ldw	x, #0x0032
      00812F 13 03            [ 2]  221 	cpw	x, (0x03, sp)
      008131 4F               [ 1]  222 	clr	a
      008132 12 02            [ 1]  223 	sbc	a, (0x02, sp)
      008134 4F               [ 1]  224 	clr	a
      008135 12 01            [ 1]  225 	sbc	a, (0x01, sp)
      008137 24 12            [ 1]  226 	jrnc	00102$
                                    227 ;	./button_leds.c: 43: bs=1;
      008139 35 01 00 0A      [ 1]  228 	mov	_bs+0, #0x01
                                    229 ;	./button_leds.c: 44: msb=ms;
      00813D 90 CE 00 04      [ 2]  230 	ldw	y, _ms+2
      008141 CE 00 02         [ 2]  231 	ldw	x, _ms+0
      008144 90 CF 00 08      [ 2]  232 	ldw	_msb+2, y
      008148 CF 00 06         [ 2]  233 	ldw	_msb+0, x
      00814B                        234 00102$:
                                    235 ;	./button_leds.c: 49: if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>50) // фиксируем отпускание  нажатие кнопки
      00814B AE 50 10         [ 2]  236 	ldw	x, #0x5010
      00814E F6               [ 1]  237 	ld	a, (x)
      00814F A4 10            [ 1]  238 	and	a, #0x10
      008151 A1 10            [ 1]  239 	cp	a, #0x10
      008153 26 4A            [ 1]  240 	jrne	00109$
      008155 72 00 00 0A 02   [ 2]  241 	btjt	_bs+0, #0, 00141$
      00815A 20 43            [ 2]  242 	jra	00109$
      00815C                        243 00141$:
      00815C 3B 00 05         [ 1]  244 	push	_ms+3
      00815F 3B 00 04         [ 1]  245 	push	_ms+2
      008162 3B 00 03         [ 1]  246 	push	_ms+1
      008165 3B 00 02         [ 1]  247 	push	_ms+0
      008168 CD 80 A0         [ 4]  248 	call	_delay
      00816B 5B 04            [ 2]  249 	addw	sp, #4
      00816D 51               [ 1]  250 	exgw	x, y
      00816E 72 B2 00 08      [ 2]  251 	subw	y, _msb+2
      008172 17 07            [ 2]  252 	ldw	(0x07, sp), y
      008174 9F               [ 1]  253 	ld	a, xl
      008175 C2 00 07         [ 1]  254 	sbc	a, _msb+1
      008178 6B 06            [ 1]  255 	ld	(0x06, sp), a
      00817A 9E               [ 1]  256 	ld	a, xh
      00817B C2 00 06         [ 1]  257 	sbc	a, _msb+0
      00817E 6B 05            [ 1]  258 	ld	(0x05, sp), a
      008180 AE 00 32         [ 2]  259 	ldw	x, #0x0032
      008183 13 07            [ 2]  260 	cpw	x, (0x07, sp)
      008185 4F               [ 1]  261 	clr	a
      008186 12 06            [ 1]  262 	sbc	a, (0x06, sp)
      008188 4F               [ 1]  263 	clr	a
      008189 12 05            [ 1]  264 	sbc	a, (0x05, sp)
      00818B 24 12            [ 1]  265 	jrnc	00109$
                                    266 ;	./button_leds.c: 51: bs=0;
      00818D 72 5F 00 0A      [ 1]  267 	clr	_bs+0
                                    268 ;	./button_leds.c: 52: msb=ms;
      008191 90 CE 00 04      [ 2]  269 	ldw	y, _ms+2
      008195 CE 00 02         [ 2]  270 	ldw	x, _ms+0
      008198 90 CF 00 08      [ 2]  271 	ldw	_msb+2, y
      00819C CF 00 06         [ 2]  272 	ldw	_msb+0, x
      00819F                        273 00109$:
      00819F 5B 08            [ 2]  274 	addw	sp, #8
      0081A1 81               [ 4]  275 	ret
                                    276 ;	./button_leds.c: 59: void running()
                                    277 ;	-----------------------------------------
                                    278 ;	 function running
                                    279 ;	-----------------------------------------
      0081A2                        280 _running:
      0081A2 52 04            [ 2]  281 	sub	sp, #4
                                    282 ;	./button_leds.c: 61: if (GPIOD->IDR & 0x10) // проверяем нажатие кнопки
      0081A4 AE 50 10         [ 2]  283 	ldw	x, #0x5010
      0081A7 F6               [ 1]  284 	ld	a, (x)
      0081A8 A5 10            [ 1]  285 	bcp	a, #0x10
      0081AA 27 50            [ 1]  286 	jreq	00106$
                                    287 ;	./button_leds.c: 64: GPIOC->ODR ^= 0x08 << n;
      0081AC AE 50 0A         [ 2]  288 	ldw	x, #0x500a
      0081AF F6               [ 1]  289 	ld	a, (x)
      0081B0 6B 04            [ 1]  290 	ld	(0x04, sp), a
      0081B2 A6 08            [ 1]  291 	ld	a, #0x08
      0081B4 88               [ 1]  292 	push	a
      0081B5 C6 00 01         [ 1]  293 	ld	a, _n+0
      0081B8 27 05            [ 1]  294 	jreq	00124$
      0081BA                        295 00123$:
      0081BA 08 01            [ 1]  296 	sll	(1, sp)
      0081BC 4A               [ 1]  297 	dec	a
      0081BD 26 FB            [ 1]  298 	jrne	00123$
      0081BF                        299 00124$:
      0081BF 84               [ 1]  300 	pop	a
      0081C0 18 04            [ 1]  301 	xor	a, (0x04, sp)
      0081C2 AE 50 0A         [ 2]  302 	ldw	x, #0x500a
      0081C5 F7               [ 1]  303 	ld	(x), a
                                    304 ;	./button_leds.c: 65: delay(10000);
      0081C6 4B 10            [ 1]  305 	push	#0x10
      0081C8 4B 27            [ 1]  306 	push	#0x27
      0081CA 5F               [ 1]  307 	clrw	x
      0081CB 89               [ 2]  308 	pushw	x
      0081CC CD 80 A0         [ 4]  309 	call	_delay
      0081CF 5B 04            [ 2]  310 	addw	sp, #4
                                    311 ;	./button_leds.c: 67: GPIOC->ODR |= 0x08 << n;
      0081D1 AE 50 0A         [ 2]  312 	ldw	x, #0x500a
      0081D4 F6               [ 1]  313 	ld	a, (x)
      0081D5 6B 01            [ 1]  314 	ld	(0x01, sp), a
      0081D7 A6 08            [ 1]  315 	ld	a, #0x08
      0081D9 88               [ 1]  316 	push	a
      0081DA C6 00 01         [ 1]  317 	ld	a, _n+0
      0081DD 27 05            [ 1]  318 	jreq	00126$
      0081DF                        319 00125$:
      0081DF 08 01            [ 1]  320 	sll	(1, sp)
      0081E1 4A               [ 1]  321 	dec	a
      0081E2 26 FB            [ 1]  322 	jrne	00125$
      0081E4                        323 00126$:
      0081E4 84               [ 1]  324 	pop	a
      0081E5 1A 01            [ 1]  325 	or	a, (0x01, sp)
      0081E7 AE 50 0A         [ 2]  326 	ldw	x, #0x500a
      0081EA F7               [ 1]  327 	ld	(x), a
                                    328 ;	./button_leds.c: 70: n++;
      0081EB C6 00 01         [ 1]  329 	ld	a, _n+0
      0081EE 4C               [ 1]  330 	inc	a
                                    331 ;	./button_leds.c: 73: if ( n>=5 )
      0081EF C7 00 01         [ 1]  332 	ld	_n+0, a
      0081F2 A1 05            [ 1]  333 	cp	a, #0x05
      0081F4 2F 54            [ 1]  334 	jrslt	00108$
                                    335 ;	./button_leds.c: 76: n=0;
      0081F6 72 5F 00 01      [ 1]  336 	clr	_n+0
      0081FA 20 4E            [ 2]  337 	jra	00108$
      0081FC                        338 00106$:
                                    339 ;	./button_leds.c: 84: GPIOC->ODR ^= 0x80 >> n;
      0081FC AE 50 0A         [ 2]  340 	ldw	x, #0x500a
      0081FF F6               [ 1]  341 	ld	a, (x)
      008200 6B 03            [ 1]  342 	ld	(0x03, sp), a
      008202 A6 80            [ 1]  343 	ld	a, #0x80
      008204 88               [ 1]  344 	push	a
      008205 C6 00 01         [ 1]  345 	ld	a, _n+0
      008208 27 05            [ 1]  346 	jreq	00129$
      00820A                        347 00128$:
      00820A 04 01            [ 1]  348 	srl	(1, sp)
      00820C 4A               [ 1]  349 	dec	a
      00820D 26 FB            [ 1]  350 	jrne	00128$
      00820F                        351 00129$:
      00820F 84               [ 1]  352 	pop	a
      008210 18 03            [ 1]  353 	xor	a, (0x03, sp)
      008212 AE 50 0A         [ 2]  354 	ldw	x, #0x500a
      008215 F7               [ 1]  355 	ld	(x), a
                                    356 ;	./button_leds.c: 85: delay(10000);
      008216 4B 10            [ 1]  357 	push	#0x10
      008218 4B 27            [ 1]  358 	push	#0x27
      00821A 5F               [ 1]  359 	clrw	x
      00821B 89               [ 2]  360 	pushw	x
      00821C CD 80 A0         [ 4]  361 	call	_delay
      00821F 5B 04            [ 2]  362 	addw	sp, #4
                                    363 ;	./button_leds.c: 87: GPIOC->ODR |= 0x80 >> n;
      008221 AE 50 0A         [ 2]  364 	ldw	x, #0x500a
      008224 F6               [ 1]  365 	ld	a, (x)
      008225 6B 02            [ 1]  366 	ld	(0x02, sp), a
      008227 A6 80            [ 1]  367 	ld	a, #0x80
      008229 88               [ 1]  368 	push	a
      00822A C6 00 01         [ 1]  369 	ld	a, _n+0
      00822D 27 05            [ 1]  370 	jreq	00131$
      00822F                        371 00130$:
      00822F 04 01            [ 1]  372 	srl	(1, sp)
      008231 4A               [ 1]  373 	dec	a
      008232 26 FB            [ 1]  374 	jrne	00130$
      008234                        375 00131$:
      008234 84               [ 1]  376 	pop	a
      008235 1A 02            [ 1]  377 	or	a, (0x02, sp)
      008237 AE 50 0A         [ 2]  378 	ldw	x, #0x500a
      00823A F7               [ 1]  379 	ld	(x), a
                                    380 ;	./button_leds.c: 90: n++;
      00823B C6 00 01         [ 1]  381 	ld	a, _n+0
      00823E 4C               [ 1]  382 	inc	a
                                    383 ;	./button_leds.c: 93: if ( n>=5 )
      00823F C7 00 01         [ 1]  384 	ld	_n+0, a
      008242 A1 05            [ 1]  385 	cp	a, #0x05
      008244 2F 04            [ 1]  386 	jrslt	00108$
                                    387 ;	./button_leds.c: 96: n=0;
      008246 72 5F 00 01      [ 1]  388 	clr	_n+0
      00824A                        389 00108$:
      00824A 5B 04            [ 2]  390 	addw	sp, #4
      00824C 81               [ 4]  391 	ret
                                    392 ;	./button_leds.c: 101: int main( void )    //установка портов и пинов
                                    393 ;	-----------------------------------------
                                    394 ;	 function main
                                    395 ;	-----------------------------------------
      00824D                        396 _main:
                                    397 ;	./button_leds.c: 104: PIN();
      00824D CD 80 CA         [ 4]  398 	call	_PIN
                                    399 ;	./button_leds.c: 106: while(1){
      008250                        400 00102$:
                                    401 ;	./button_leds.c: 108: button();
      008250 CD 80 F7         [ 4]  402 	call	_button
                                    403 ;	./button_leds.c: 109: running();
      008253 CD 81 A2         [ 4]  404 	call	_running
      008256 20 F8            [ 2]  405 	jra	00102$
      008258 81               [ 4]  406 	ret
                                    407 	.area CODE
                                    408 	.area INITIALIZER
      008259                        409 __xinit__ms:
      008259 00 00 00 00            410 	.byte #0x00,#0x00,#0x00,#0x00	; 0
      00825D                        411 __xinit__msb:
      00825D 00 00 00 00            412 	.byte #0x00,#0x00,#0x00,#0x00	; 0
      008261                        413 __xinit__bs:
      008261 00                     414 	.db #0x00	;  0
                                    415 	.area CABS (ABS)
