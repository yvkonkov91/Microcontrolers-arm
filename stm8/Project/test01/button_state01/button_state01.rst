                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Fri Mar 23 12:14:36 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module button_state01
                                      7 	.optsdcc -mstm8
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _delay
                                     14 	.globl _msb
                                     15 	.globl _bs
                                     16 	.globl _ms
                                     17 ;--------------------------------------------------------
                                     18 ; ram data
                                     19 ;--------------------------------------------------------
                                     20 	.area DATA
                                     21 ;--------------------------------------------------------
                                     22 ; ram data
                                     23 ;--------------------------------------------------------
                                     24 	.area INITIALIZED
      000001                         25 _ms::
      000001                         26 	.ds 4
      000005                         27 _bs::
      000005                         28 	.ds 1
      000006                         29 _msb::
      000006                         30 	.ds 4
                                     31 ;--------------------------------------------------------
                                     32 ; Stack segment in internal ram 
                                     33 ;--------------------------------------------------------
                                     34 	.area	SSEG
      00000A                         35 __start__stack:
      00000A                         36 	.ds	1
                                     37 
                                     38 ;--------------------------------------------------------
                                     39 ; absolute external ram data
                                     40 ;--------------------------------------------------------
                                     41 	.area DABS (ABS)
                                     42 ;--------------------------------------------------------
                                     43 ; interrupt vector 
                                     44 ;--------------------------------------------------------
                                     45 	.area HOME
      008000                         46 __interrupt_vect:
      008000 82 00 80 83             47 	int s_GSINIT ;reset
      008004 82 00 00 00             48 	int 0x0000 ;trap
      008008 82 00 00 00             49 	int 0x0000 ;int0
      00800C 82 00 00 00             50 	int 0x0000 ;int1
      008010 82 00 00 00             51 	int 0x0000 ;int2
      008014 82 00 00 00             52 	int 0x0000 ;int3
      008018 82 00 00 00             53 	int 0x0000 ;int4
      00801C 82 00 00 00             54 	int 0x0000 ;int5
      008020 82 00 00 00             55 	int 0x0000 ;int6
      008024 82 00 00 00             56 	int 0x0000 ;int7
      008028 82 00 00 00             57 	int 0x0000 ;int8
      00802C 82 00 00 00             58 	int 0x0000 ;int9
      008030 82 00 00 00             59 	int 0x0000 ;int10
      008034 82 00 00 00             60 	int 0x0000 ;int11
      008038 82 00 00 00             61 	int 0x0000 ;int12
      00803C 82 00 00 00             62 	int 0x0000 ;int13
      008040 82 00 00 00             63 	int 0x0000 ;int14
      008044 82 00 00 00             64 	int 0x0000 ;int15
      008048 82 00 00 00             65 	int 0x0000 ;int16
      00804C 82 00 00 00             66 	int 0x0000 ;int17
      008050 82 00 00 00             67 	int 0x0000 ;int18
      008054 82 00 00 00             68 	int 0x0000 ;int19
      008058 82 00 00 00             69 	int 0x0000 ;int20
      00805C 82 00 00 00             70 	int 0x0000 ;int21
      008060 82 00 00 00             71 	int 0x0000 ;int22
      008064 82 00 00 00             72 	int 0x0000 ;int23
      008068 82 00 00 00             73 	int 0x0000 ;int24
      00806C 82 00 00 00             74 	int 0x0000 ;int25
      008070 82 00 00 00             75 	int 0x0000 ;int26
      008074 82 00 00 00             76 	int 0x0000 ;int27
      008078 82 00 00 00             77 	int 0x0000 ;int28
      00807C 82 00 00 00             78 	int 0x0000 ;int29
                                     79 ;--------------------------------------------------------
                                     80 ; global & static initialisations
                                     81 ;--------------------------------------------------------
                                     82 	.area HOME
                                     83 	.area GSINIT
                                     84 	.area GSFINAL
                                     85 	.area GSINIT
      008083                         86 __sdcc_gs_init_startup:
      008083                         87 __sdcc_init_data:
                                     88 ; stm8_genXINIT() start
      008083 AE 00 00         [ 2]   89 	ldw x, #l_DATA
      008086 27 07            [ 1]   90 	jreq	00002$
      008088                         91 00001$:
      008088 72 4F 00 00      [ 1]   92 	clr (s_DATA - 1, x)
      00808C 5A               [ 2]   93 	decw x
      00808D 26 F9            [ 1]   94 	jrne	00001$
      00808F                         95 00002$:
      00808F AE 00 09         [ 2]   96 	ldw	x, #l_INITIALIZER
      008092 27 09            [ 1]   97 	jreq	00004$
      008094                         98 00003$:
      008094 D6 81 B5         [ 1]   99 	ld	a, (s_INITIALIZER - 1, x)
      008097 D7 00 00         [ 1]  100 	ld	(s_INITIALIZED - 1, x), a
      00809A 5A               [ 2]  101 	decw	x
      00809B 26 F7            [ 1]  102 	jrne	00003$
      00809D                        103 00004$:
                                    104 ; stm8_genXINIT() end
                                    105 	.area GSFINAL
      00809D CC 80 80         [ 2]  106 	jp	__sdcc_program_startup
                                    107 ;--------------------------------------------------------
                                    108 ; Home
                                    109 ;--------------------------------------------------------
                                    110 	.area HOME
                                    111 	.area HOME
      008080                        112 __sdcc_program_startup:
      008080 CC 80 CA         [ 2]  113 	jp	_main
                                    114 ;	return from main will return to caller
                                    115 ;--------------------------------------------------------
                                    116 ; code
                                    117 ;--------------------------------------------------------
                                    118 	.area CODE
                                    119 ;	./button_state01.c: 5: uint32_t delay(uint32_t t)  //объявление статической функции часла типа long переменной t для реализации работы функции delay
                                    120 ;	-----------------------------------------
                                    121 ;	 function delay
                                    122 ;	-----------------------------------------
      0080A0                        123 _delay:
      0080A0 52 04            [ 2]  124 	sub	sp, #4
                                    125 ;	./button_state01.c: 8: while(t--);
      0080A2 90 AE 01 F4      [ 2]  126 	ldw	y, #0x01f4
      0080A6 5F               [ 1]  127 	clrw	x
      0080A7                        128 00101$:
      0080A7 17 03            [ 2]  129 	ldw	(0x03, sp), y
      0080A9 1F 01            [ 2]  130 	ldw	(0x01, sp), x
      0080AB 72 A2 00 01      [ 2]  131 	subw	y, #0x0001
      0080AF 9F               [ 1]  132 	ld	a, xl
      0080B0 A2 00            [ 1]  133 	sbc	a, #0x00
      0080B2 02               [ 1]  134 	rlwa	x
      0080B3 A2 00            [ 1]  135 	sbc	a, #0x00
      0080B5 95               [ 1]  136 	ld	xh, a
      0080B6 0D 04            [ 1]  137 	tnz	(0x04, sp)
      0080B8 26 ED            [ 1]  138 	jrne	00101$
      0080BA 0D 03            [ 1]  139 	tnz	(0x03, sp)
      0080BC 26 E9            [ 1]  140 	jrne	00101$
      0080BE 0D 02            [ 1]  141 	tnz	(0x02, sp)
      0080C0 26 E5            [ 1]  142 	jrne	00101$
      0080C2 0D 01            [ 1]  143 	tnz	(0x01, sp)
      0080C4 26 E1            [ 1]  144 	jrne	00101$
                                    145 ;	./button_state01.c: 9: return t;
      0080C6 51               [ 1]  146 	exgw	x, y
      0080C7 5B 04            [ 2]  147 	addw	sp, #4
      0080C9 81               [ 4]  148 	ret
                                    149 ;	./button_state01.c: 28: int main( void )    //установка портов и пинов
                                    150 ;	-----------------------------------------
                                    151 ;	 function main
                                    152 ;	-----------------------------------------
      0080CA                        153 _main:
      0080CA 52 08            [ 2]  154 	sub	sp, #8
                                    155 ;	./button_state01.c: 30: GPIOC->DDR |= 0x10;   	//направление данных порта out-0; input-1
      0080CC AE 50 0C         [ 2]  156 	ldw	x, #0x500c
      0080CF F6               [ 1]  157 	ld	a, (x)
      0080D0 AA 10            [ 1]  158 	or	a, #0x10
      0080D2 F7               [ 1]  159 	ld	(x), a
                                    160 ;	./button_state01.c: 31: GPIOC->CR1 |= 0x10;   	//установка подтягивающего резистора open-drain=0; push-pull=1
      0080D3 AE 50 0D         [ 2]  161 	ldw	x, #0x500d
      0080D6 F6               [ 1]  162 	ld	a, (x)
      0080D7 AA 10            [ 1]  163 	or	a, #0x10
      0080D9 F7               [ 1]  164 	ld	(x), a
                                    165 ;	./button_state01.c: 32: GPIOC->ODR |= 0x10;   	//установка значения бита 0/1
      0080DA AE 50 0A         [ 2]  166 	ldw	x, #0x500a
      0080DD F6               [ 1]  167 	ld	a, (x)
      0080DE AA 10            [ 1]  168 	or	a, #0x10
      0080E0 F7               [ 1]  169 	ld	(x), a
                                    170 ;	./button_state01.c: 34: GPIOD->DDR |= 0x00;
      0080E1 AE 50 11         [ 2]  171 	ldw	x, #0x5011
      0080E4 F6               [ 1]  172 	ld	a, (x)
      0080E5 AE 50 11         [ 2]  173 	ldw	x, #0x5011
      0080E8 F7               [ 1]  174 	ld	(x), a
                                    175 ;	./button_state01.c: 35: GPIOD->CR1 |= 0x10;
      0080E9 AE 50 12         [ 2]  176 	ldw	x, #0x5012
      0080EC F6               [ 1]  177 	ld	a, (x)
      0080ED AA 10            [ 1]  178 	or	a, #0x10
      0080EF F7               [ 1]  179 	ld	(x), a
                                    180 ;	./button_state01.c: 36: GPIOD->CR2 |= 0x00;
      0080F0 AE 50 13         [ 2]  181 	ldw	x, #0x5013
      0080F3 F6               [ 1]  182 	ld	a, (x)
      0080F4 AE 50 13         [ 2]  183 	ldw	x, #0x5013
      0080F7 F7               [ 1]  184 	ld	(x), a
                                    185 ;	./button_state01.c: 39: while(1){
      0080F8                        186 00110$:
                                    187 ;	./button_state01.c: 42: if ((GPIOD->IDR & 0x10) ==0x00 && !bs && (delay(ms)-msb)>50) // фиксируем нажатие кнопки
      0080F8 AE 50 10         [ 2]  188 	ldw	x, #0x5010
      0080FB F6               [ 1]  189 	ld	a, (x)
      0080FC A5 10            [ 1]  190 	bcp	a, #0x10
      0080FE 26 52            [ 1]  191 	jrne	00102$
      008100 72 01 00 05 02   [ 2]  192 	btjf	_bs+0, #0, 00143$
      008105 20 4B            [ 2]  193 	jra	00102$
      008107                        194 00143$:
      008107 3B 00 04         [ 1]  195 	push	_ms+3
      00810A 3B 00 03         [ 1]  196 	push	_ms+2
      00810D 3B 00 02         [ 1]  197 	push	_ms+1
      008110 3B 00 01         [ 1]  198 	push	_ms+0
      008113 CD 80 A0         [ 4]  199 	call	_delay
      008116 5B 04            [ 2]  200 	addw	sp, #4
      008118 51               [ 1]  201 	exgw	x, y
      008119 72 B2 00 08      [ 2]  202 	subw	y, _msb+2
      00811D 17 07            [ 2]  203 	ldw	(0x07, sp), y
      00811F 9F               [ 1]  204 	ld	a, xl
      008120 C2 00 07         [ 1]  205 	sbc	a, _msb+1
      008123 6B 06            [ 1]  206 	ld	(0x06, sp), a
      008125 9E               [ 1]  207 	ld	a, xh
      008126 C2 00 06         [ 1]  208 	sbc	a, _msb+0
      008129 6B 05            [ 1]  209 	ld	(0x05, sp), a
      00812B AE 00 32         [ 2]  210 	ldw	x, #0x0032
      00812E 13 07            [ 2]  211 	cpw	x, (0x07, sp)
      008130 4F               [ 1]  212 	clr	a
      008131 12 06            [ 1]  213 	sbc	a, (0x06, sp)
      008133 4F               [ 1]  214 	clr	a
      008134 12 05            [ 1]  215 	sbc	a, (0x05, sp)
      008136 24 1A            [ 1]  216 	jrnc	00102$
                                    217 ;	./button_state01.c: 44: bs=1;
      008138 35 01 00 05      [ 1]  218 	mov	_bs+0, #0x01
                                    219 ;	./button_state01.c: 45: msb=ms;
      00813C 90 CE 00 03      [ 2]  220 	ldw	y, _ms+2
      008140 CE 00 01         [ 2]  221 	ldw	x, _ms+0
      008143 90 CF 00 08      [ 2]  222 	ldw	_msb+2, y
      008147 CF 00 06         [ 2]  223 	ldw	_msb+0, x
                                    224 ;	./button_state01.c: 46: GPIOC->ODR ^= 0x00;
      00814A AE 50 0A         [ 2]  225 	ldw	x, #0x500a
      00814D F6               [ 1]  226 	ld	a, (x)
      00814E AE 50 0A         [ 2]  227 	ldw	x, #0x500a
      008151 F7               [ 1]  228 	ld	(x), a
      008152                        229 00102$:
                                    230 ;	./button_state01.c: 51: if ((GPIOD->IDR & 0x10) ==0x10 && bs && (delay(ms)-msb)>50) // фиксируем отпускание  нажатие кнопки
      008152 AE 50 10         [ 2]  231 	ldw	x, #0x5010
      008155 F6               [ 1]  232 	ld	a, (x)
      008156 A4 10            [ 1]  233 	and	a, #0x10
      008158 A1 10            [ 1]  234 	cp	a, #0x10
      00815A 26 9C            [ 1]  235 	jrne	00110$
      00815C 72 00 00 05 02   [ 2]  236 	btjt	_bs+0, #0, 00148$
      008161 20 95            [ 2]  237 	jra	00110$
      008163                        238 00148$:
      008163 3B 00 04         [ 1]  239 	push	_ms+3
      008166 3B 00 03         [ 1]  240 	push	_ms+2
      008169 3B 00 02         [ 1]  241 	push	_ms+1
      00816C 3B 00 01         [ 1]  242 	push	_ms+0
      00816F CD 80 A0         [ 4]  243 	call	_delay
      008172 5B 04            [ 2]  244 	addw	sp, #4
      008174 51               [ 1]  245 	exgw	x, y
      008175 72 B2 00 08      [ 2]  246 	subw	y, _msb+2
      008179 17 03            [ 2]  247 	ldw	(0x03, sp), y
      00817B 9F               [ 1]  248 	ld	a, xl
      00817C C2 00 07         [ 1]  249 	sbc	a, _msb+1
      00817F 6B 02            [ 1]  250 	ld	(0x02, sp), a
      008181 9E               [ 1]  251 	ld	a, xh
      008182 C2 00 06         [ 1]  252 	sbc	a, _msb+0
      008185 6B 01            [ 1]  253 	ld	(0x01, sp), a
      008187 AE 00 32         [ 2]  254 	ldw	x, #0x0032
      00818A 13 03            [ 2]  255 	cpw	x, (0x03, sp)
      00818C 4F               [ 1]  256 	clr	a
      00818D 12 02            [ 1]  257 	sbc	a, (0x02, sp)
      00818F 4F               [ 1]  258 	clr	a
      008190 12 01            [ 1]  259 	sbc	a, (0x01, sp)
      008192 25 03            [ 1]  260 	jrc	00149$
      008194 CC 80 F8         [ 2]  261 	jp	00110$
      008197                        262 00149$:
                                    263 ;	./button_state01.c: 53: bs=0;
      008197 72 5F 00 05      [ 1]  264 	clr	_bs+0
                                    265 ;	./button_state01.c: 54: msb=ms;
      00819B 90 CE 00 03      [ 2]  266 	ldw	y, _ms+2
      00819F CE 00 01         [ 2]  267 	ldw	x, _ms+0
      0081A2 90 CF 00 08      [ 2]  268 	ldw	_msb+2, y
      0081A6 CF 00 06         [ 2]  269 	ldw	_msb+0, x
                                    270 ;	./button_state01.c: 55: GPIOC->ODR ^= 0x10;
      0081A9 AE 50 0A         [ 2]  271 	ldw	x, #0x500a
      0081AC F6               [ 1]  272 	ld	a, (x)
      0081AD A8 10            [ 1]  273 	xor	a, #0x10
      0081AF F7               [ 1]  274 	ld	(x), a
      0081B0 CC 80 F8         [ 2]  275 	jp	00110$
      0081B3 5B 08            [ 2]  276 	addw	sp, #8
      0081B5 81               [ 4]  277 	ret
                                    278 	.area CODE
                                    279 	.area INITIALIZER
      0081B6                        280 __xinit__ms:
      0081B6 00 00 00 00            281 	.byte #0x00,#0x00,#0x00,#0x00	; 0
      0081BA                        282 __xinit__bs:
      0081BA 00                     283 	.db #0x00	;  0
      0081BB                        284 __xinit__msb:
      0081BB 00 00 00 00            285 	.byte #0x00,#0x00,#0x00,#0x00	; 0
                                    286 	.area CABS (ABS)
