/*-------------------------------------------------------------------------
 *      STM8 definitions of SFR registers
 *
 *      Used with STM8 IAR C/C++ Compiler and Assembler.
 *
 *      Copyright 2017 IAR Systems AB.
 *
 *-----------------------------------------------------------------------*/

#ifndef __IOSTM8L101F2_H__
#define __IOSTM8L101F2_H__

#if (((__TID__ >> 8) & 0x7F) != 0x38)     /* 0x38 = 56 dec */
#error This file should only be compiled by STM8 IAR compiler and assembler
#endif

/*-------------------------------------------------------------------------
 *      I/O register macros
 *-----------------------------------------------------------------------*/

#include "io_macros.h"


#ifdef __IAR_SYSTEMS_ICC__
#pragma system_include
#pragma language=save
#pragma language=extended
#endif

/*-------------------------------------------------------------------------
 *      Option byte attribute define
 *-----------------------------------------------------------------------*/
 
#define OPTION_BYTE_ATTRIBUTES __root const volatile __ro_placement
 
/*-------------------------------------------------------------------------
 *      Option bytes register definitions
 *-----------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
 *      Option bytes addresses
 *-----------------------------------------------------------------------*/
#define OPT1_ADDR        0x4800
#define OPT2_ADDR        0x4802
#define OPT3_ADDR        0x4803
#define OPT4_ADDR        0x4808

#define OPT1_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT1        @ OPT1_ADDR
#define OPT2_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT2        @ OPT2_ADDR
#define OPT3_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT3        @ OPT3_ADDR
#define OPT4_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT4        @ OPT4_ADDR


/*-------------------------------------------------------------------------
 *      Port A register definitions
 *-----------------------------------------------------------------------*/
/* Port A data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PA_ODR;
#endif
__IO_REG8_BIT(PA_ODR,      0x5000, __READ_WRITE, __BITS_PA_ODR);

/* Port A input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PA_IDR;
#endif
__IO_REG8_BIT(PA_IDR,      0x5001, __READ, __BITS_PA_IDR);

/* Port A data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PA_DDR;
#endif
__IO_REG8_BIT(PA_DDR,      0x5002, __READ_WRITE, __BITS_PA_DDR);

/* Port A control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PA_CR1;
#endif
__IO_REG8_BIT(PA_CR1,      0x5003, __READ_WRITE, __BITS_PA_CR1);

/* Port A control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PA_CR2;
#endif
__IO_REG8_BIT(PA_CR2,      0x5004, __READ_WRITE, __BITS_PA_CR2);


/*-------------------------------------------------------------------------
 *      Port A bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PA_ODR_ODR0              PA_ODR_bit.ODR0
#define PA_ODR_ODR1              PA_ODR_bit.ODR1
#define PA_ODR_ODR2              PA_ODR_bit.ODR2
#define PA_ODR_ODR3              PA_ODR_bit.ODR3
#define PA_ODR_ODR4              PA_ODR_bit.ODR4
#define PA_ODR_ODR5              PA_ODR_bit.ODR5
#define PA_ODR_ODR6              PA_ODR_bit.ODR6
#define PA_ODR_ODR7              PA_ODR_bit.ODR7

#define PA_IDR_IDR0              PA_IDR_bit.IDR0
#define PA_IDR_IDR1              PA_IDR_bit.IDR1
#define PA_IDR_IDR2              PA_IDR_bit.IDR2
#define PA_IDR_IDR3              PA_IDR_bit.IDR3
#define PA_IDR_IDR4              PA_IDR_bit.IDR4
#define PA_IDR_IDR5              PA_IDR_bit.IDR5
#define PA_IDR_IDR6              PA_IDR_bit.IDR6
#define PA_IDR_IDR7              PA_IDR_bit.IDR7

#define PA_DDR_DDR0              PA_DDR_bit.DDR0
#define PA_DDR_DDR1              PA_DDR_bit.DDR1
#define PA_DDR_DDR2              PA_DDR_bit.DDR2
#define PA_DDR_DDR3              PA_DDR_bit.DDR3
#define PA_DDR_DDR4              PA_DDR_bit.DDR4
#define PA_DDR_DDR5              PA_DDR_bit.DDR5
#define PA_DDR_DDR6              PA_DDR_bit.DDR6
#define PA_DDR_DDR7              PA_DDR_bit.DDR7

#define PA_CR1_C10               PA_CR1_bit.C10
#define PA_CR1_C11               PA_CR1_bit.C11
#define PA_CR1_C12               PA_CR1_bit.C12
#define PA_CR1_C13               PA_CR1_bit.C13
#define PA_CR1_C14               PA_CR1_bit.C14
#define PA_CR1_C15               PA_CR1_bit.C15
#define PA_CR1_C16               PA_CR1_bit.C16
#define PA_CR1_C17               PA_CR1_bit.C17

#define PA_CR2_C20               PA_CR2_bit.C20
#define PA_CR2_C21               PA_CR2_bit.C21
#define PA_CR2_C22               PA_CR2_bit.C22
#define PA_CR2_C23               PA_CR2_bit.C23
#define PA_CR2_C24               PA_CR2_bit.C24
#define PA_CR2_C25               PA_CR2_bit.C25
#define PA_CR2_C26               PA_CR2_bit.C26
#define PA_CR2_C27               PA_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port A bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PA_ODR_ODR0         0x01
#define MASK_PA_ODR_ODR1         0x02
#define MASK_PA_ODR_ODR2         0x04
#define MASK_PA_ODR_ODR3         0x08
#define MASK_PA_ODR_ODR4         0x10
#define MASK_PA_ODR_ODR5         0x20
#define MASK_PA_ODR_ODR6         0x40
#define MASK_PA_ODR_ODR7         0x80

#define MASK_PA_IDR_IDR0         0x01
#define MASK_PA_IDR_IDR1         0x02
#define MASK_PA_IDR_IDR2         0x04
#define MASK_PA_IDR_IDR3         0x08
#define MASK_PA_IDR_IDR4         0x10
#define MASK_PA_IDR_IDR5         0x20
#define MASK_PA_IDR_IDR6         0x40
#define MASK_PA_IDR_IDR7         0x80

#define MASK_PA_DDR_DDR0         0x01
#define MASK_PA_DDR_DDR1         0x02
#define MASK_PA_DDR_DDR2         0x04
#define MASK_PA_DDR_DDR3         0x08
#define MASK_PA_DDR_DDR4         0x10
#define MASK_PA_DDR_DDR5         0x20
#define MASK_PA_DDR_DDR6         0x40
#define MASK_PA_DDR_DDR7         0x80

#define MASK_PA_CR1_C10          0x01
#define MASK_PA_CR1_C11          0x02
#define MASK_PA_CR1_C12          0x04
#define MASK_PA_CR1_C13          0x08
#define MASK_PA_CR1_C14          0x10
#define MASK_PA_CR1_C15          0x20
#define MASK_PA_CR1_C16          0x40
#define MASK_PA_CR1_C17          0x80

#define MASK_PA_CR2_C20          0x01
#define MASK_PA_CR2_C21          0x02
#define MASK_PA_CR2_C22          0x04
#define MASK_PA_CR2_C23          0x08
#define MASK_PA_CR2_C24          0x10
#define MASK_PA_CR2_C25          0x20
#define MASK_PA_CR2_C26          0x40
#define MASK_PA_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port B register definitions
 *-----------------------------------------------------------------------*/
/* Port B data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PB_ODR;
#endif
__IO_REG8_BIT(PB_ODR,      0x5005, __READ_WRITE, __BITS_PB_ODR);

/* Port B input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PB_IDR;
#endif
__IO_REG8_BIT(PB_IDR,      0x5006, __READ, __BITS_PB_IDR);

/* Port B data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PB_DDR;
#endif
__IO_REG8_BIT(PB_DDR,      0x5007, __READ_WRITE, __BITS_PB_DDR);

/* Port B control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PB_CR1;
#endif
__IO_REG8_BIT(PB_CR1,      0x5008, __READ_WRITE, __BITS_PB_CR1);

/* Port B control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PB_CR2;
#endif
__IO_REG8_BIT(PB_CR2,      0x5009, __READ_WRITE, __BITS_PB_CR2);


/*-------------------------------------------------------------------------
 *      Port B bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PB_ODR_ODR0              PB_ODR_bit.ODR0
#define PB_ODR_ODR1              PB_ODR_bit.ODR1
#define PB_ODR_ODR2              PB_ODR_bit.ODR2
#define PB_ODR_ODR3              PB_ODR_bit.ODR3
#define PB_ODR_ODR4              PB_ODR_bit.ODR4
#define PB_ODR_ODR5              PB_ODR_bit.ODR5
#define PB_ODR_ODR6              PB_ODR_bit.ODR6
#define PB_ODR_ODR7              PB_ODR_bit.ODR7

#define PB_IDR_IDR0              PB_IDR_bit.IDR0
#define PB_IDR_IDR1              PB_IDR_bit.IDR1
#define PB_IDR_IDR2              PB_IDR_bit.IDR2
#define PB_IDR_IDR3              PB_IDR_bit.IDR3
#define PB_IDR_IDR4              PB_IDR_bit.IDR4
#define PB_IDR_IDR5              PB_IDR_bit.IDR5
#define PB_IDR_IDR6              PB_IDR_bit.IDR6
#define PB_IDR_IDR7              PB_IDR_bit.IDR7

#define PB_DDR_DDR0              PB_DDR_bit.DDR0
#define PB_DDR_DDR1              PB_DDR_bit.DDR1
#define PB_DDR_DDR2              PB_DDR_bit.DDR2
#define PB_DDR_DDR3              PB_DDR_bit.DDR3
#define PB_DDR_DDR4              PB_DDR_bit.DDR4
#define PB_DDR_DDR5              PB_DDR_bit.DDR5
#define PB_DDR_DDR6              PB_DDR_bit.DDR6
#define PB_DDR_DDR7              PB_DDR_bit.DDR7

#define PB_CR1_C10               PB_CR1_bit.C10
#define PB_CR1_C11               PB_CR1_bit.C11
#define PB_CR1_C12               PB_CR1_bit.C12
#define PB_CR1_C13               PB_CR1_bit.C13
#define PB_CR1_C14               PB_CR1_bit.C14
#define PB_CR1_C15               PB_CR1_bit.C15
#define PB_CR1_C16               PB_CR1_bit.C16
#define PB_CR1_C17               PB_CR1_bit.C17

#define PB_CR2_C20               PB_CR2_bit.C20
#define PB_CR2_C21               PB_CR2_bit.C21
#define PB_CR2_C22               PB_CR2_bit.C22
#define PB_CR2_C23               PB_CR2_bit.C23
#define PB_CR2_C24               PB_CR2_bit.C24
#define PB_CR2_C25               PB_CR2_bit.C25
#define PB_CR2_C26               PB_CR2_bit.C26
#define PB_CR2_C27               PB_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port B bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PB_ODR_ODR0         0x01
#define MASK_PB_ODR_ODR1         0x02
#define MASK_PB_ODR_ODR2         0x04
#define MASK_PB_ODR_ODR3         0x08
#define MASK_PB_ODR_ODR4         0x10
#define MASK_PB_ODR_ODR5         0x20
#define MASK_PB_ODR_ODR6         0x40
#define MASK_PB_ODR_ODR7         0x80

#define MASK_PB_IDR_IDR0         0x01
#define MASK_PB_IDR_IDR1         0x02
#define MASK_PB_IDR_IDR2         0x04
#define MASK_PB_IDR_IDR3         0x08
#define MASK_PB_IDR_IDR4         0x10
#define MASK_PB_IDR_IDR5         0x20
#define MASK_PB_IDR_IDR6         0x40
#define MASK_PB_IDR_IDR7         0x80

#define MASK_PB_DDR_DDR0         0x01
#define MASK_PB_DDR_DDR1         0x02
#define MASK_PB_DDR_DDR2         0x04
#define MASK_PB_DDR_DDR3         0x08
#define MASK_PB_DDR_DDR4         0x10
#define MASK_PB_DDR_DDR5         0x20
#define MASK_PB_DDR_DDR6         0x40
#define MASK_PB_DDR_DDR7         0x80

#define MASK_PB_CR1_C10          0x01
#define MASK_PB_CR1_C11          0x02
#define MASK_PB_CR1_C12          0x04
#define MASK_PB_CR1_C13          0x08
#define MASK_PB_CR1_C14          0x10
#define MASK_PB_CR1_C15          0x20
#define MASK_PB_CR1_C16          0x40
#define MASK_PB_CR1_C17          0x80

#define MASK_PB_CR2_C20          0x01
#define MASK_PB_CR2_C21          0x02
#define MASK_PB_CR2_C22          0x04
#define MASK_PB_CR2_C23          0x08
#define MASK_PB_CR2_C24          0x10
#define MASK_PB_CR2_C25          0x20
#define MASK_PB_CR2_C26          0x40
#define MASK_PB_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port C register definitions
 *-----------------------------------------------------------------------*/
/* Port C data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PC_ODR;
#endif
__IO_REG8_BIT(PC_ODR,      0x500A, __READ_WRITE, __BITS_PC_ODR);

/* Port C input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PC_IDR;
#endif
__IO_REG8_BIT(PC_IDR,      0x500B, __READ, __BITS_PC_IDR);

/* Port C data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PC_DDR;
#endif
__IO_REG8_BIT(PC_DDR,      0x500C, __READ_WRITE, __BITS_PC_DDR);

/* Port C control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PC_CR1;
#endif
__IO_REG8_BIT(PC_CR1,      0x500D, __READ_WRITE, __BITS_PC_CR1);

/* Port C control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PC_CR2;
#endif
__IO_REG8_BIT(PC_CR2,      0x500E, __READ_WRITE, __BITS_PC_CR2);


/*-------------------------------------------------------------------------
 *      Port C bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PC_ODR_ODR0              PC_ODR_bit.ODR0
#define PC_ODR_ODR1              PC_ODR_bit.ODR1
#define PC_ODR_ODR2              PC_ODR_bit.ODR2
#define PC_ODR_ODR3              PC_ODR_bit.ODR3
#define PC_ODR_ODR4              PC_ODR_bit.ODR4
#define PC_ODR_ODR5              PC_ODR_bit.ODR5
#define PC_ODR_ODR6              PC_ODR_bit.ODR6
#define PC_ODR_ODR7              PC_ODR_bit.ODR7

#define PC_IDR_IDR0              PC_IDR_bit.IDR0
#define PC_IDR_IDR1              PC_IDR_bit.IDR1
#define PC_IDR_IDR2              PC_IDR_bit.IDR2
#define PC_IDR_IDR3              PC_IDR_bit.IDR3
#define PC_IDR_IDR4              PC_IDR_bit.IDR4
#define PC_IDR_IDR5              PC_IDR_bit.IDR5
#define PC_IDR_IDR6              PC_IDR_bit.IDR6
#define PC_IDR_IDR7              PC_IDR_bit.IDR7

#define PC_DDR_DDR0              PC_DDR_bit.DDR0
#define PC_DDR_DDR1              PC_DDR_bit.DDR1
#define PC_DDR_DDR2              PC_DDR_bit.DDR2
#define PC_DDR_DDR3              PC_DDR_bit.DDR3
#define PC_DDR_DDR4              PC_DDR_bit.DDR4
#define PC_DDR_DDR5              PC_DDR_bit.DDR5
#define PC_DDR_DDR6              PC_DDR_bit.DDR6
#define PC_DDR_DDR7              PC_DDR_bit.DDR7

#define PC_CR1_C10               PC_CR1_bit.C10
#define PC_CR1_C11               PC_CR1_bit.C11
#define PC_CR1_C12               PC_CR1_bit.C12
#define PC_CR1_C13               PC_CR1_bit.C13
#define PC_CR1_C14               PC_CR1_bit.C14
#define PC_CR1_C15               PC_CR1_bit.C15
#define PC_CR1_C16               PC_CR1_bit.C16
#define PC_CR1_C17               PC_CR1_bit.C17

#define PC_CR2_C20               PC_CR2_bit.C20
#define PC_CR2_C21               PC_CR2_bit.C21
#define PC_CR2_C22               PC_CR2_bit.C22
#define PC_CR2_C23               PC_CR2_bit.C23
#define PC_CR2_C24               PC_CR2_bit.C24
#define PC_CR2_C25               PC_CR2_bit.C25
#define PC_CR2_C26               PC_CR2_bit.C26
#define PC_CR2_C27               PC_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port C bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PC_ODR_ODR0         0x01
#define MASK_PC_ODR_ODR1         0x02
#define MASK_PC_ODR_ODR2         0x04
#define MASK_PC_ODR_ODR3         0x08
#define MASK_PC_ODR_ODR4         0x10
#define MASK_PC_ODR_ODR5         0x20
#define MASK_PC_ODR_ODR6         0x40
#define MASK_PC_ODR_ODR7         0x80

#define MASK_PC_IDR_IDR0         0x01
#define MASK_PC_IDR_IDR1         0x02
#define MASK_PC_IDR_IDR2         0x04
#define MASK_PC_IDR_IDR3         0x08
#define MASK_PC_IDR_IDR4         0x10
#define MASK_PC_IDR_IDR5         0x20
#define MASK_PC_IDR_IDR6         0x40
#define MASK_PC_IDR_IDR7         0x80

#define MASK_PC_DDR_DDR0         0x01
#define MASK_PC_DDR_DDR1         0x02
#define MASK_PC_DDR_DDR2         0x04
#define MASK_PC_DDR_DDR3         0x08
#define MASK_PC_DDR_DDR4         0x10
#define MASK_PC_DDR_DDR5         0x20
#define MASK_PC_DDR_DDR6         0x40
#define MASK_PC_DDR_DDR7         0x80

#define MASK_PC_CR1_C10          0x01
#define MASK_PC_CR1_C11          0x02
#define MASK_PC_CR1_C12          0x04
#define MASK_PC_CR1_C13          0x08
#define MASK_PC_CR1_C14          0x10
#define MASK_PC_CR1_C15          0x20
#define MASK_PC_CR1_C16          0x40
#define MASK_PC_CR1_C17          0x80

#define MASK_PC_CR2_C20          0x01
#define MASK_PC_CR2_C21          0x02
#define MASK_PC_CR2_C22          0x04
#define MASK_PC_CR2_C23          0x08
#define MASK_PC_CR2_C24          0x10
#define MASK_PC_CR2_C25          0x20
#define MASK_PC_CR2_C26          0x40
#define MASK_PC_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port D register definitions
 *-----------------------------------------------------------------------*/
/* Port D data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PD_ODR;
#endif
__IO_REG8_BIT(PD_ODR,      0x500F, __READ_WRITE, __BITS_PD_ODR);

/* Port D input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PD_IDR;
#endif
__IO_REG8_BIT(PD_IDR,      0x5010, __READ, __BITS_PD_IDR);

/* Port D data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PD_DDR;
#endif
__IO_REG8_BIT(PD_DDR,      0x5011, __READ_WRITE, __BITS_PD_DDR);

/* Port D control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PD_CR1;
#endif
__IO_REG8_BIT(PD_CR1,      0x5012, __READ_WRITE, __BITS_PD_CR1);

/* Port D control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PD_CR2;
#endif
__IO_REG8_BIT(PD_CR2,      0x5013, __READ_WRITE, __BITS_PD_CR2);


/*-------------------------------------------------------------------------
 *      Port D bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PD_ODR_ODR0              PD_ODR_bit.ODR0
#define PD_ODR_ODR1              PD_ODR_bit.ODR1
#define PD_ODR_ODR2              PD_ODR_bit.ODR2
#define PD_ODR_ODR3              PD_ODR_bit.ODR3
#define PD_ODR_ODR4              PD_ODR_bit.ODR4
#define PD_ODR_ODR5              PD_ODR_bit.ODR5
#define PD_ODR_ODR6              PD_ODR_bit.ODR6
#define PD_ODR_ODR7              PD_ODR_bit.ODR7

#define PD_IDR_IDR0              PD_IDR_bit.IDR0
#define PD_IDR_IDR1              PD_IDR_bit.IDR1
#define PD_IDR_IDR2              PD_IDR_bit.IDR2
#define PD_IDR_IDR3              PD_IDR_bit.IDR3
#define PD_IDR_IDR4              PD_IDR_bit.IDR4
#define PD_IDR_IDR5              PD_IDR_bit.IDR5
#define PD_IDR_IDR6              PD_IDR_bit.IDR6
#define PD_IDR_IDR7              PD_IDR_bit.IDR7

#define PD_DDR_DDR0              PD_DDR_bit.DDR0
#define PD_DDR_DDR1              PD_DDR_bit.DDR1
#define PD_DDR_DDR2              PD_DDR_bit.DDR2
#define PD_DDR_DDR3              PD_DDR_bit.DDR3
#define PD_DDR_DDR4              PD_DDR_bit.DDR4
#define PD_DDR_DDR5              PD_DDR_bit.DDR5
#define PD_DDR_DDR6              PD_DDR_bit.DDR6
#define PD_DDR_DDR7              PD_DDR_bit.DDR7

#define PD_CR1_C10               PD_CR1_bit.C10
#define PD_CR1_C11               PD_CR1_bit.C11
#define PD_CR1_C12               PD_CR1_bit.C12
#define PD_CR1_C13               PD_CR1_bit.C13
#define PD_CR1_C14               PD_CR1_bit.C14
#define PD_CR1_C15               PD_CR1_bit.C15
#define PD_CR1_C16               PD_CR1_bit.C16
#define PD_CR1_C17               PD_CR1_bit.C17

#define PD_CR2_C20               PD_CR2_bit.C20
#define PD_CR2_C21               PD_CR2_bit.C21
#define PD_CR2_C22               PD_CR2_bit.C22
#define PD_CR2_C23               PD_CR2_bit.C23
#define PD_CR2_C24               PD_CR2_bit.C24
#define PD_CR2_C25               PD_CR2_bit.C25
#define PD_CR2_C26               PD_CR2_bit.C26
#define PD_CR2_C27               PD_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port D bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PD_ODR_ODR0         0x01
#define MASK_PD_ODR_ODR1         0x02
#define MASK_PD_ODR_ODR2         0x04
#define MASK_PD_ODR_ODR3         0x08
#define MASK_PD_ODR_ODR4         0x10
#define MASK_PD_ODR_ODR5         0x20
#define MASK_PD_ODR_ODR6         0x40
#define MASK_PD_ODR_ODR7         0x80

#define MASK_PD_IDR_IDR0         0x01
#define MASK_PD_IDR_IDR1         0x02
#define MASK_PD_IDR_IDR2         0x04
#define MASK_PD_IDR_IDR3         0x08
#define MASK_PD_IDR_IDR4         0x10
#define MASK_PD_IDR_IDR5         0x20
#define MASK_PD_IDR_IDR6         0x40
#define MASK_PD_IDR_IDR7         0x80

#define MASK_PD_DDR_DDR0         0x01
#define MASK_PD_DDR_DDR1         0x02
#define MASK_PD_DDR_DDR2         0x04
#define MASK_PD_DDR_DDR3         0x08
#define MASK_PD_DDR_DDR4         0x10
#define MASK_PD_DDR_DDR5         0x20
#define MASK_PD_DDR_DDR6         0x40
#define MASK_PD_DDR_DDR7         0x80

#define MASK_PD_CR1_C10          0x01
#define MASK_PD_CR1_C11          0x02
#define MASK_PD_CR1_C12          0x04
#define MASK_PD_CR1_C13          0x08
#define MASK_PD_CR1_C14          0x10
#define MASK_PD_CR1_C15          0x20
#define MASK_PD_CR1_C16          0x40
#define MASK_PD_CR1_C17          0x80

#define MASK_PD_CR2_C20          0x01
#define MASK_PD_CR2_C21          0x02
#define MASK_PD_CR2_C22          0x04
#define MASK_PD_CR2_C23          0x08
#define MASK_PD_CR2_C24          0x10
#define MASK_PD_CR2_C25          0x20
#define MASK_PD_CR2_C26          0x40
#define MASK_PD_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Flash register definitions
 *-----------------------------------------------------------------------*/
/* Flash control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FIX         : 1;
  unsigned char IE          : 1;
} __BITS_FLASH_CR1;
#endif
__IO_REG8_BIT(FLASH_CR1,   0x5050, __READ_WRITE, __BITS_FLASH_CR1);

/* Flash control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PRG         : 1;
  unsigned char             : 3;
  unsigned char FPRG        : 1;
  unsigned char ERASE       : 1;
  unsigned char WPRG        : 1;
  unsigned char OPT         : 1;
} __BITS_FLASH_CR2;
#endif
__IO_REG8_BIT(FLASH_CR2,   0x5051, __READ_WRITE, __BITS_FLASH_CR2);

/* Flash Program memory unprotection register */
__IO_REG8    (FLASH_PUKR,  0x5052, __READ_WRITE);
/* Data EEPROM unprotection register */
__IO_REG8    (FLASH_DUKR,  0x5053, __READ_WRITE);
/* Flash in-application programming status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WR_PG_DIS   : 1;
  unsigned char PUL         : 1;
  unsigned char EOP         : 1;
  unsigned char DUL         : 1;
} __BITS_FLASH_IAPSR;
#endif
__IO_REG8_BIT(FLASH_IAPSR, 0x5054, __READ_WRITE, __BITS_FLASH_IAPSR);


/*-------------------------------------------------------------------------
 *      Flash bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define FLASH_CR1_FIX            FLASH_CR1_bit.FIX
#define FLASH_CR1_IE             FLASH_CR1_bit.IE

#define FLASH_CR2_PRG            FLASH_CR2_bit.PRG
#define FLASH_CR2_FPRG           FLASH_CR2_bit.FPRG
#define FLASH_CR2_ERASE          FLASH_CR2_bit.ERASE
#define FLASH_CR2_WPRG           FLASH_CR2_bit.WPRG
#define FLASH_CR2_OPT            FLASH_CR2_bit.OPT

#define FLASH_IAPSR_WR_PG_DIS    FLASH_IAPSR_bit.WR_PG_DIS
#define FLASH_IAPSR_PUL          FLASH_IAPSR_bit.PUL
#define FLASH_IAPSR_EOP          FLASH_IAPSR_bit.EOP
#define FLASH_IAPSR_DUL          FLASH_IAPSR_bit.DUL

#endif

/*-------------------------------------------------------------------------
 *      Flash bit masks
 *-----------------------------------------------------------------------*/
#define MASK_FLASH_CR1_FIX       0x01
#define MASK_FLASH_CR1_IE        0x02

#define MASK_FLASH_CR2_PRG       0x01
#define MASK_FLASH_CR2_FPRG      0x10
#define MASK_FLASH_CR2_ERASE     0x20
#define MASK_FLASH_CR2_WPRG      0x40
#define MASK_FLASH_CR2_OPT       0x80

#define MASK_FLASH_IAPSR_WR_PG_DIS 0x01
#define MASK_FLASH_IAPSR_PUL     0x02
#define MASK_FLASH_IAPSR_EOP     0x04
#define MASK_FLASH_IAPSR_DUL     0x08


/*-------------------------------------------------------------------------
 *      ITC-EXTI register definitions
 *-----------------------------------------------------------------------*/
/* External interrupt control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P0IS        : 2;
  unsigned char P1IS        : 2;
  unsigned char P2IS        : 2;
  unsigned char P3IS        : 2;
} __BITS_EXTI_CR1;
#endif
__IO_REG8_BIT(EXTI_CR1,    0x50A0, __READ_WRITE, __BITS_EXTI_CR1);

/* External interrupt control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P4IS        : 2;
  unsigned char P5IS        : 2;
  unsigned char P6IS        : 2;
  unsigned char P7IS        : 2;
} __BITS_EXTI_CR2;
#endif
__IO_REG8_BIT(EXTI_CR2,    0x50A1, __READ_WRITE, __BITS_EXTI_CR2);

/* External interrupt control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PDIS        : 2;
  unsigned char PBIS        : 2;
} __BITS_EXTI_CR3;
#endif
__IO_REG8_BIT(EXTI_CR3,    0x50A2, __READ_WRITE, __BITS_EXTI_CR3);

/* External interrupt status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P0F         : 1;
  unsigned char P1F         : 1;
  unsigned char P2F         : 1;
  unsigned char P3F         : 1;
  unsigned char P4F         : 1;
  unsigned char P5F         : 1;
  unsigned char P6F         : 1;
  unsigned char P7F         : 1;
} __BITS_EXTI_SR1;
#endif
__IO_REG8_BIT(EXTI_SR1,    0x50A3, __READ_WRITE, __BITS_EXTI_SR1);

/* External interrupt status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PBF         : 1;
  unsigned char PDF         : 1;
} __BITS_EXTI_SR2;
#endif
__IO_REG8_BIT(EXTI_SR2,    0x50A4, __READ_WRITE, __BITS_EXTI_SR2);

/* External interrupt port select register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PBLIS       : 1;
  unsigned char PBHIS       : 1;
  unsigned char PDLIS       : 1;
  unsigned char PDHIS       : 1;
} __BITS_EXTI_CONF;
#endif
__IO_REG8_BIT(EXTI_CONF,   0x50A5, __READ_WRITE, __BITS_EXTI_CONF);


/*-------------------------------------------------------------------------
 *      ITC-EXTI bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define EXTI_CR1_P0IS            EXTI_CR1_bit.P0IS
#define EXTI_CR1_P1IS            EXTI_CR1_bit.P1IS
#define EXTI_CR1_P2IS            EXTI_CR1_bit.P2IS
#define EXTI_CR1_P3IS            EXTI_CR1_bit.P3IS

#define EXTI_CR2_P4IS            EXTI_CR2_bit.P4IS
#define EXTI_CR2_P5IS            EXTI_CR2_bit.P5IS
#define EXTI_CR2_P6IS            EXTI_CR2_bit.P6IS
#define EXTI_CR2_P7IS            EXTI_CR2_bit.P7IS

#define EXTI_CR3_PDIS            EXTI_CR3_bit.PDIS
#define EXTI_CR3_PBIS            EXTI_CR3_bit.PBIS

#define EXTI_SR1_P0F             EXTI_SR1_bit.P0F
#define EXTI_SR1_P1F             EXTI_SR1_bit.P1F
#define EXTI_SR1_P2F             EXTI_SR1_bit.P2F
#define EXTI_SR1_P3F             EXTI_SR1_bit.P3F
#define EXTI_SR1_P4F             EXTI_SR1_bit.P4F
#define EXTI_SR1_P5F             EXTI_SR1_bit.P5F
#define EXTI_SR1_P6F             EXTI_SR1_bit.P6F
#define EXTI_SR1_P7F             EXTI_SR1_bit.P7F

#define EXTI_SR2_PBF             EXTI_SR2_bit.PBF
#define EXTI_SR2_PDF             EXTI_SR2_bit.PDF

#define EXTI_CONF_PBLIS          EXTI_CONF_bit.PBLIS
#define EXTI_CONF_PBHIS          EXTI_CONF_bit.PBHIS
#define EXTI_CONF_PDLIS          EXTI_CONF_bit.PDLIS
#define EXTI_CONF_PDHIS          EXTI_CONF_bit.PDHIS

#endif

/*-------------------------------------------------------------------------
 *      ITC-EXTI bit masks
 *-----------------------------------------------------------------------*/
#define MASK_EXTI_CR1_P0IS       0x03
#define MASK_EXTI_CR1_P1IS       0x0C
#define MASK_EXTI_CR1_P2IS       0x30
#define MASK_EXTI_CR1_P3IS       0xC0

#define MASK_EXTI_CR2_P4IS       0x03
#define MASK_EXTI_CR2_P5IS       0x0C
#define MASK_EXTI_CR2_P6IS       0x30
#define MASK_EXTI_CR2_P7IS       0xC0

#define MASK_EXTI_CR3_PDIS       0x03
#define MASK_EXTI_CR3_PBIS       0x0C

#define MASK_EXTI_SR1_P0F        0x01
#define MASK_EXTI_SR1_P1F        0x02
#define MASK_EXTI_SR1_P2F        0x04
#define MASK_EXTI_SR1_P3F        0x08
#define MASK_EXTI_SR1_P4F        0x10
#define MASK_EXTI_SR1_P5F        0x20
#define MASK_EXTI_SR1_P6F        0x40
#define MASK_EXTI_SR1_P7F        0x80

#define MASK_EXTI_SR2_PBF        0x01
#define MASK_EXTI_SR2_PDF        0x02

#define MASK_EXTI_CONF_PBLIS     0x01
#define MASK_EXTI_CONF_PBHIS     0x02
#define MASK_EXTI_CONF_PDLIS     0x04
#define MASK_EXTI_CONF_PDHIS     0x08


/*-------------------------------------------------------------------------
 *      WFE register definitions
 *-----------------------------------------------------------------------*/
/* WFE control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM2_EV0    : 1;
  unsigned char TIM2_EV1    : 1;
  unsigned char             : 2;
  unsigned char EXTI_EV0    : 1;
  unsigned char EXTI_EV1    : 1;
  unsigned char EXTI_EV2    : 1;
  unsigned char EXTI_EV3    : 1;
} __BITS_WFE_CR1;
#endif
__IO_REG8_BIT(WFE_CR1,     0x50A6, __READ_WRITE, __BITS_WFE_CR1);

/* WFE control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EXTI_EV4    : 1;
  unsigned char EXTI_EV5    : 1;
  unsigned char EXTI_EV6    : 1;
  unsigned char EXTI_EV7    : 1;
  unsigned char EXTI_EVB    : 1;
  unsigned char EXTI_EVD    : 1;
} __BITS_WFE_CR2;
#endif
__IO_REG8_BIT(WFE_CR2,     0x50A7, __READ_WRITE, __BITS_WFE_CR2);


/*-------------------------------------------------------------------------
 *      WFE bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define WFE_CR1_TIM2_EV0         WFE_CR1_bit.TIM2_EV0
#define WFE_CR1_TIM2_EV1         WFE_CR1_bit.TIM2_EV1
#define WFE_CR1_EXTI_EV0         WFE_CR1_bit.EXTI_EV0
#define WFE_CR1_EXTI_EV1         WFE_CR1_bit.EXTI_EV1
#define WFE_CR1_EXTI_EV2         WFE_CR1_bit.EXTI_EV2
#define WFE_CR1_EXTI_EV3         WFE_CR1_bit.EXTI_EV3

#define WFE_CR2_EXTI_EV4         WFE_CR2_bit.EXTI_EV4
#define WFE_CR2_EXTI_EV5         WFE_CR2_bit.EXTI_EV5
#define WFE_CR2_EXTI_EV6         WFE_CR2_bit.EXTI_EV6
#define WFE_CR2_EXTI_EV7         WFE_CR2_bit.EXTI_EV7
#define WFE_CR2_EXTI_EVB         WFE_CR2_bit.EXTI_EVB
#define WFE_CR2_EXTI_EVD         WFE_CR2_bit.EXTI_EVD

#endif

/*-------------------------------------------------------------------------
 *      WFE bit masks
 *-----------------------------------------------------------------------*/
#define MASK_WFE_CR1_TIM2_EV0    0x01
#define MASK_WFE_CR1_TIM2_EV1    0x02
#define MASK_WFE_CR1_EXTI_EV0    0x10
#define MASK_WFE_CR1_EXTI_EV1    0x20
#define MASK_WFE_CR1_EXTI_EV2    0x40
#define MASK_WFE_CR1_EXTI_EV3    0x80

#define MASK_WFE_CR2_EXTI_EV4    0x01
#define MASK_WFE_CR2_EXTI_EV5    0x02
#define MASK_WFE_CR2_EXTI_EV6    0x04
#define MASK_WFE_CR2_EXTI_EV7    0x08
#define MASK_WFE_CR2_EXTI_EVB    0x10
#define MASK_WFE_CR2_EXTI_EVD    0x20


/*-------------------------------------------------------------------------
 *      RST register definitions
 *-----------------------------------------------------------------------*/
/* Reset control register */
__IO_REG8    (RST_CR,      0x50B0, __READ_WRITE);
/* Reset status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PORF        : 1;
  unsigned char IWDGF       : 1;
  unsigned char ILLOPF      : 1;
  unsigned char SWIMF       : 1;
} __BITS_RST_SR;
#endif
__IO_REG8_BIT(RST_SR,      0x50B1, __READ_WRITE, __BITS_RST_SR);


/*-------------------------------------------------------------------------
 *      RST bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define RST_SR_PORF              RST_SR_bit.PORF
#define RST_SR_IWDGF             RST_SR_bit.IWDGF
#define RST_SR_ILLOPF            RST_SR_bit.ILLOPF
#define RST_SR_SWIMF             RST_SR_bit.SWIMF

#endif

/*-------------------------------------------------------------------------
 *      RST bit masks
 *-----------------------------------------------------------------------*/
#define MASK_RST_SR_PORF         0x01
#define MASK_RST_SR_IWDGF        0x02
#define MASK_RST_SR_ILLOPF       0x04
#define MASK_RST_SR_SWIMF        0x08


/*-------------------------------------------------------------------------
 *      CLK register definitions
 *-----------------------------------------------------------------------*/
/* Clock divider register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSIDIV      : 2;
} __BITS_CLK_CKDIVR;
#endif
__IO_REG8_BIT(CLK_CKDIVR,  0x50C0, __READ_WRITE, __BITS_CLK_CKDIVR);

/* Peripheral clock gating register */
__IO_REG8    (CLK_PCKENR,  0x50C3, __READ_WRITE);
/* Configurable clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC0EN       : 1;
  unsigned char CCOSEL      : 2;
} __BITS_CLK_CCOR;
#endif
__IO_REG8_BIT(CLK_CCOR,    0x50C5, __READ_WRITE, __BITS_CLK_CCOR);


/*-------------------------------------------------------------------------
 *      CLK bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define CLK_CKDIVR_HSIDIV        CLK_CKDIVR_bit.HSIDIV

#define CLK_CCOR_CC0EN           CLK_CCOR_bit.CC0EN
#define CLK_CCOR_CCOSEL          CLK_CCOR_bit.CCOSEL

#endif

/*-------------------------------------------------------------------------
 *      CLK bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CLK_CKDIVR_HSIDIV   0x03

#define MASK_CLK_CCOR_CC0EN      0x01
#define MASK_CLK_CCOR_CCOSEL     0x06


/*-------------------------------------------------------------------------
 *      IWDG register definitions
 *-----------------------------------------------------------------------*/
/* IWDG Key register */
__IO_REG8    (IWDG_KR,     0x50E0, __READ_WRITE);
/* IWDG Prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PR          : 3;
} __BITS_IWDG_PR;
#endif
__IO_REG8_BIT(IWDG_PR,     0x50E1, __READ_WRITE, __BITS_IWDG_PR);

/* IWDG Reload register */
__IO_REG8    (IWDG_RLR,    0x50E2, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      IWDG bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define IWDG_PR_PR               IWDG_PR_bit.PR

#endif

/*-------------------------------------------------------------------------
 *      IWDG bit masks
 *-----------------------------------------------------------------------*/
#define MASK_IWDG_PR_PR          0x07


/*-------------------------------------------------------------------------
 *      AWU register definitions
 *-----------------------------------------------------------------------*/
/* AWU control/status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MSR         : 1;
  unsigned char             : 3;
  unsigned char AWUEN       : 1;
  unsigned char AWUF        : 1;
} __BITS_AWU_CSR;
#endif
__IO_REG8_BIT(AWU_CSR,     0x50F0, __READ_WRITE, __BITS_AWU_CSR);

/* AWU asynchronous prescaler buffer register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char APR         : 6;
} __BITS_AWU_APR;
#endif
__IO_REG8_BIT(AWU_APR,     0x50F1, __READ_WRITE, __BITS_AWU_APR);

/* AWU timebase selection register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AWUTB       : 6;
} __BITS_AWU_TBR;
#endif
__IO_REG8_BIT(AWU_TBR,     0x50F2, __READ_WRITE, __BITS_AWU_TBR);


/*-------------------------------------------------------------------------
 *      AWU bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define AWU_CSR_MSR              AWU_CSR_bit.MSR
#define AWU_CSR_AWUEN            AWU_CSR_bit.AWUEN
#define AWU_CSR_AWUF             AWU_CSR_bit.AWUF

#define AWU_APR_APR              AWU_APR_bit.APR

#define AWU_TBR_AWUTB            AWU_TBR_bit.AWUTB

#endif

/*-------------------------------------------------------------------------
 *      AWU bit masks
 *-----------------------------------------------------------------------*/
#define MASK_AWU_CSR_MSR         0x01
#define MASK_AWU_CSR_AWUEN       0x10
#define MASK_AWU_CSR_AWUF        0x20

#define MASK_AWU_APR_APR         0x3F

#define MASK_AWU_TBR_AWUTB       0x3F


/*-------------------------------------------------------------------------
 *      BEEP register definitions
 *-----------------------------------------------------------------------*/
/* BEEP control/status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BEEPDIV     : 5;
  unsigned char BEEPEN      : 1;
  unsigned char BEEPSEL     : 2;
} __BITS_BEEP_CSR;
#endif
__IO_REG8_BIT(BEEP_CSR,    0x50F3, __READ_WRITE, __BITS_BEEP_CSR);


/*-------------------------------------------------------------------------
 *      BEEP bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define BEEP_CSR_BEEPDIV         BEEP_CSR_bit.BEEPDIV
#define BEEP_CSR_BEEPEN          BEEP_CSR_bit.BEEPEN
#define BEEP_CSR_BEEPSEL         BEEP_CSR_bit.BEEPSEL

#endif

/*-------------------------------------------------------------------------
 *      BEEP bit masks
 *-----------------------------------------------------------------------*/
#define MASK_BEEP_CSR_BEEPDIV    0x1F
#define MASK_BEEP_CSR_BEEPEN     0x20
#define MASK_BEEP_CSR_BEEPSEL    0xC0


/*-------------------------------------------------------------------------
 *      SPI register definitions
 *-----------------------------------------------------------------------*/
/* SPI control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char MSTR        : 1;
  unsigned char BR          : 3;
  unsigned char SPE         : 1;
  unsigned char LSBFIRST    : 1;
} __BITS_SPI_CR1;
#endif
__IO_REG8_BIT(SPI_CR1,     0x5200, __READ_WRITE, __BITS_SPI_CR1);

/* SPI control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SSI         : 1;
  unsigned char SSM         : 1;
  unsigned char RXOnly      : 1;
  unsigned char             : 3;
  unsigned char BD0E        : 1;
  unsigned char BDM         : 1;
} __BITS_SPI_CR2;
#endif
__IO_REG8_BIT(SPI_CR2,     0x5201, __READ_WRITE, __BITS_SPI_CR2);

/* SPI interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char WKIE        : 1;
  unsigned char ERRIE       : 1;
  unsigned char RXIE        : 1;
  unsigned char TXIE        : 1;
} __BITS_SPI_ICR;
#endif
__IO_REG8_BIT(SPI_ICR,     0x5202, __READ_WRITE, __BITS_SPI_ICR);

/* SPI status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
  unsigned char             : 1;
  unsigned char WKUP        : 1;
  unsigned char             : 1;
  unsigned char MODF        : 1;
  unsigned char OVR         : 1;
  unsigned char BSY         : 1;
} __BITS_SPI_SR;
#endif
__IO_REG8_BIT(SPI_SR,      0x5203, __READ_WRITE, __BITS_SPI_SR);

/* SPI data register */
__IO_REG8    (SPI_DR,      0x5204, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      SPI bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SPI_CR1_CPHA             SPI_CR1_bit.CPHA
#define SPI_CR1_CPOL             SPI_CR1_bit.CPOL
#define SPI_CR1_MSTR             SPI_CR1_bit.MSTR
#define SPI_CR1_BR               SPI_CR1_bit.BR
#define SPI_CR1_SPE              SPI_CR1_bit.SPE
#define SPI_CR1_LSBFIRST         SPI_CR1_bit.LSBFIRST

#define SPI_CR2_SSI              SPI_CR2_bit.SSI
#define SPI_CR2_SSM              SPI_CR2_bit.SSM
#define SPI_CR2_RXOnly           SPI_CR2_bit.RXOnly
#define SPI_CR2_BD0E             SPI_CR2_bit.BD0E
#define SPI_CR2_BDM              SPI_CR2_bit.BDM

#define SPI_ICR_WKIE             SPI_ICR_bit.WKIE
#define SPI_ICR_ERRIE            SPI_ICR_bit.ERRIE
#define SPI_ICR_RXIE             SPI_ICR_bit.RXIE
#define SPI_ICR_TXIE             SPI_ICR_bit.TXIE

#define SPI_SR_RXNE              SPI_SR_bit.RXNE
#define SPI_SR_TXE               SPI_SR_bit.TXE
#define SPI_SR_WKUP              SPI_SR_bit.WKUP
#define SPI_SR_MODF              SPI_SR_bit.MODF
#define SPI_SR_OVR               SPI_SR_bit.OVR
#define SPI_SR_BSY               SPI_SR_bit.BSY

#endif

/*-------------------------------------------------------------------------
 *      SPI bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SPI_CR1_CPHA        0x01
#define MASK_SPI_CR1_CPOL        0x02
#define MASK_SPI_CR1_MSTR        0x04
#define MASK_SPI_CR1_BR          0x38
#define MASK_SPI_CR1_SPE         0x40
#define MASK_SPI_CR1_LSBFIRST    0x80

#define MASK_SPI_CR2_SSI         0x01
#define MASK_SPI_CR2_SSM         0x02
#define MASK_SPI_CR2_RXOnly      0x04
#define MASK_SPI_CR2_BD0E        0x40
#define MASK_SPI_CR2_BDM         0x80

#define MASK_SPI_ICR_WKIE        0x10
#define MASK_SPI_ICR_ERRIE       0x20
#define MASK_SPI_ICR_RXIE        0x40
#define MASK_SPI_ICR_TXIE        0x80

#define MASK_SPI_SR_RXNE         0x01
#define MASK_SPI_SR_TXE          0x02
#define MASK_SPI_SR_WKUP         0x08
#define MASK_SPI_SR_MODF         0x20
#define MASK_SPI_SR_OVR          0x40
#define MASK_SPI_SR_BSY          0x80


/*-------------------------------------------------------------------------
 *      I2C register definitions
 *-----------------------------------------------------------------------*/
/* I2C control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char             : 5;
  unsigned char ENGC        : 1;
  unsigned char NOSTRETCH   : 1;
} __BITS_I2C_CR1;
#endif
__IO_REG8_BIT(I2C_CR1,     0x5210, __READ_WRITE, __BITS_I2C_CR1);

/* I2C control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START       : 1;
  unsigned char STOP        : 1;
  unsigned char ACK         : 1;
  unsigned char POS         : 1;
  unsigned char             : 3;
  unsigned char SWRST       : 1;
} __BITS_I2C_CR2;
#endif
__IO_REG8_BIT(I2C_CR2,     0x5211, __READ_WRITE, __BITS_I2C_CR2);

/* I2C frequency register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FREQ        : 6;
} __BITS_I2C_FREQR;
#endif
__IO_REG8_BIT(I2C_FREQR,   0x5212, __READ_WRITE, __BITS_I2C_FREQR);

/* I2C Own address register low */
__IO_REG8    (I2C_OARL,    0x5213, __READ_WRITE);
/* I2C Own address register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char ADD         : 2;
  unsigned char             : 3;
  unsigned char ADDCONF     : 1;
  unsigned char ADDMODE     : 1;
} __BITS_I2C_OARH;
#endif
__IO_REG8_BIT(I2C_OARH,    0x5214, __READ_WRITE, __BITS_I2C_OARH);

/* I2C data register */
__IO_REG8    (I2C_DR,      0x5216, __READ_WRITE);
/* I2C status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SB          : 1;
  unsigned char ADDR        : 1;
  unsigned char BTF         : 1;
  unsigned char ADD10       : 1;
  unsigned char STOPF       : 1;
  unsigned char             : 1;
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
} __BITS_I2C_SR1;
#endif
__IO_REG8_BIT(I2C_SR1,     0x5217, __READ, __BITS_I2C_SR1);

/* I2C status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BERR        : 1;
  unsigned char ARLO        : 1;
  unsigned char AF          : 1;
  unsigned char OVR         : 1;
  unsigned char             : 1;
  unsigned char WUFH        : 1;
} __BITS_I2C_SR2;
#endif
__IO_REG8_BIT(I2C_SR2,     0x5218, __READ_WRITE, __BITS_I2C_SR2);

/* I2C status register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MSL         : 1;
  unsigned char BUSY        : 1;
  unsigned char TRA         : 1;
  unsigned char             : 1;
  unsigned char GENCALL     : 1;
} __BITS_I2C_SR3;
#endif
__IO_REG8_BIT(I2C_SR3,     0x5219, __READ, __BITS_I2C_SR3);

/* I2C interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ITERREN     : 1;
  unsigned char ITEVTEN     : 1;
  unsigned char ITBUFEN     : 1;
} __BITS_I2C_ITR;
#endif
__IO_REG8_BIT(I2C_ITR,     0x521A, __READ_WRITE, __BITS_I2C_ITR);

/* I2C Clock control register low */
__IO_REG8    (I2C_CCRL,    0x521B, __READ_WRITE);
/* I2C Clock control register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR         : 4;
  unsigned char             : 2;
  unsigned char DUTY        : 1;
  unsigned char F_S         : 1;
} __BITS_I2C_CCRH;
#endif
__IO_REG8_BIT(I2C_CCRH,    0x521C, __READ_WRITE, __BITS_I2C_CCRH);

/* I2C TRISE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRISE       : 6;
} __BITS_I2C_TRISER;
#endif
__IO_REG8_BIT(I2C_TRISER,  0x521D, __READ_WRITE, __BITS_I2C_TRISER);


/*-------------------------------------------------------------------------
 *      I2C bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define I2C_CR1_PE               I2C_CR1_bit.PE
#define I2C_CR1_ENGC             I2C_CR1_bit.ENGC
#define I2C_CR1_NOSTRETCH        I2C_CR1_bit.NOSTRETCH

#define I2C_CR2_START            I2C_CR2_bit.START
#define I2C_CR2_STOP             I2C_CR2_bit.STOP
#define I2C_CR2_ACK              I2C_CR2_bit.ACK
#define I2C_CR2_POS              I2C_CR2_bit.POS
#define I2C_CR2_SWRST            I2C_CR2_bit.SWRST

#define I2C_FREQR_FREQ           I2C_FREQR_bit.FREQ

#define I2C_OARH_ADD             I2C_OARH_bit.ADD
#define I2C_OARH_ADDCONF         I2C_OARH_bit.ADDCONF
#define I2C_OARH_ADDMODE         I2C_OARH_bit.ADDMODE

#define I2C_SR1_SB               I2C_SR1_bit.SB
#define I2C_SR1_ADDR             I2C_SR1_bit.ADDR
#define I2C_SR1_BTF              I2C_SR1_bit.BTF
#define I2C_SR1_ADD10            I2C_SR1_bit.ADD10
#define I2C_SR1_STOPF            I2C_SR1_bit.STOPF
#define I2C_SR1_RXNE             I2C_SR1_bit.RXNE
#define I2C_SR1_TXE              I2C_SR1_bit.TXE

#define I2C_SR2_BERR             I2C_SR2_bit.BERR
#define I2C_SR2_ARLO             I2C_SR2_bit.ARLO
#define I2C_SR2_AF               I2C_SR2_bit.AF
#define I2C_SR2_OVR              I2C_SR2_bit.OVR
#define I2C_SR2_WUFH             I2C_SR2_bit.WUFH

#define I2C_SR3_MSL              I2C_SR3_bit.MSL
#define I2C_SR3_BUSY             I2C_SR3_bit.BUSY
#define I2C_SR3_TRA              I2C_SR3_bit.TRA
#define I2C_SR3_GENCALL          I2C_SR3_bit.GENCALL

#define I2C_ITR_ITERREN          I2C_ITR_bit.ITERREN
#define I2C_ITR_ITEVTEN          I2C_ITR_bit.ITEVTEN
#define I2C_ITR_ITBUFEN          I2C_ITR_bit.ITBUFEN

#define I2C_CCRH_CCR             I2C_CCRH_bit.CCR
#define I2C_CCRH_DUTY            I2C_CCRH_bit.DUTY
#define I2C_CCRH_F_S             I2C_CCRH_bit.F_S

#define I2C_TRISER_TRISE         I2C_TRISER_bit.TRISE

#endif

/*-------------------------------------------------------------------------
 *      I2C bit masks
 *-----------------------------------------------------------------------*/
#define MASK_I2C_CR1_PE          0x01
#define MASK_I2C_CR1_ENGC        0x40
#define MASK_I2C_CR1_NOSTRETCH   0x80

#define MASK_I2C_CR2_START       0x01
#define MASK_I2C_CR2_STOP        0x02
#define MASK_I2C_CR2_ACK         0x04
#define MASK_I2C_CR2_POS         0x08
#define MASK_I2C_CR2_SWRST       0x80

#define MASK_I2C_FREQR_FREQ      0x3F

#define MASK_I2C_OARH_ADD        0x06
#define MASK_I2C_OARH_ADDCONF    0x40
#define MASK_I2C_OARH_ADDMODE    0x80

#define MASK_I2C_SR1_SB          0x01
#define MASK_I2C_SR1_ADDR        0x02
#define MASK_I2C_SR1_BTF         0x04
#define MASK_I2C_SR1_ADD10       0x08
#define MASK_I2C_SR1_STOPF       0x10
#define MASK_I2C_SR1_RXNE        0x40
#define MASK_I2C_SR1_TXE         0x80

#define MASK_I2C_SR2_BERR        0x01
#define MASK_I2C_SR2_ARLO        0x02
#define MASK_I2C_SR2_AF          0x04
#define MASK_I2C_SR2_OVR         0x08
#define MASK_I2C_SR2_WUFH        0x20

#define MASK_I2C_SR3_MSL         0x01
#define MASK_I2C_SR3_BUSY        0x02
#define MASK_I2C_SR3_TRA         0x04
#define MASK_I2C_SR3_GENCALL     0x10

#define MASK_I2C_ITR_ITERREN     0x01
#define MASK_I2C_ITR_ITEVTEN     0x02
#define MASK_I2C_ITR_ITBUFEN     0x04

#define MASK_I2C_CCRH_CCR        0x0F
#define MASK_I2C_CCRH_DUTY       0x40
#define MASK_I2C_CCRH_F_S        0x80

#define MASK_I2C_TRISER_TRISE    0x3F


/*-------------------------------------------------------------------------
 *      USART register definitions
 *-----------------------------------------------------------------------*/
/* USART Status Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char FE          : 1;
  unsigned char NF          : 1;
  unsigned char OR          : 1;
  unsigned char IDLE        : 1;
  unsigned char RXNE        : 1;
  unsigned char TC          : 1;
  unsigned char TXE         : 1;
} __BITS_USART_SR;
#endif
__IO_REG8_BIT(USART_SR,    0x5230, __READ, __BITS_USART_SR);

/* USART Data Register */
__IO_REG8    (USART_DR,    0x5231, __READ_WRITE);
/* USART Baud Rate Register 1 */
__IO_REG8    (USART_BRR1,  0x5232, __READ_WRITE);
/* USART Baud Rate Register 2 */
__IO_REG8    (USART_BRR2,  0x5233, __READ_WRITE);
/* USART Control Register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PIEN        : 1;
  unsigned char PS          : 1;
  unsigned char PCEN        : 1;
  unsigned char WAKE        : 1;
  unsigned char MSL         : 1;
  unsigned char USARTD      : 1;
  unsigned char T8          : 1;
  unsigned char R8          : 1;
} __BITS_USART_CR1;
#endif
__IO_REG8_BIT(USART_CR1,   0x5234, __READ_WRITE, __BITS_USART_CR1);

/* USART Control Register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SBK         : 1;
  unsigned char RWU         : 1;
  unsigned char REN         : 1;
  unsigned char TEN         : 1;
  unsigned char ILIEN       : 1;
  unsigned char RIEN        : 1;
  unsigned char TCIEN       : 1;
  unsigned char TIEN        : 1;
} __BITS_USART_CR2;
#endif
__IO_REG8_BIT(USART_CR2,   0x5235, __READ_WRITE, __BITS_USART_CR2);

/* USART Control Register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LBCL        : 1;
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char CLKEN       : 1;
  unsigned char STOP        : 2;
} __BITS_USART_CR3;
#endif
__IO_REG8_BIT(USART_CR3,   0x5236, __READ_WRITE, __BITS_USART_CR3);

/* USART Control Register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD         : 4;
} __BITS_USART_CR4;
#endif
__IO_REG8_BIT(USART_CR4,   0x5237, __READ_WRITE, __BITS_USART_CR4);


/*-------------------------------------------------------------------------
 *      USART bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define USART_SR_PE              USART_SR_bit.PE
#define USART_SR_FE              USART_SR_bit.FE
#define USART_SR_NF              USART_SR_bit.NF
#define USART_SR_OR              USART_SR_bit.OR
#define USART_SR_IDLE            USART_SR_bit.IDLE
#define USART_SR_RXNE            USART_SR_bit.RXNE
#define USART_SR_TC              USART_SR_bit.TC
#define USART_SR_TXE             USART_SR_bit.TXE

#define USART_CR1_PIEN           USART_CR1_bit.PIEN
#define USART_CR1_PS             USART_CR1_bit.PS
#define USART_CR1_PCEN           USART_CR1_bit.PCEN
#define USART_CR1_WAKE           USART_CR1_bit.WAKE
#define USART_CR1_MSL            USART_CR1_bit.MSL
#define USART_CR1_USARTD         USART_CR1_bit.USARTD
#define USART_CR1_T8             USART_CR1_bit.T8
#define USART_CR1_R8             USART_CR1_bit.R8

#define USART_CR2_SBK            USART_CR2_bit.SBK
#define USART_CR2_RWU            USART_CR2_bit.RWU
#define USART_CR2_REN            USART_CR2_bit.REN
#define USART_CR2_TEN            USART_CR2_bit.TEN
#define USART_CR2_ILIEN          USART_CR2_bit.ILIEN
#define USART_CR2_RIEN           USART_CR2_bit.RIEN
#define USART_CR2_TCIEN          USART_CR2_bit.TCIEN
#define USART_CR2_TIEN           USART_CR2_bit.TIEN

#define USART_CR3_LBCL           USART_CR3_bit.LBCL
#define USART_CR3_CPHA           USART_CR3_bit.CPHA
#define USART_CR3_CPOL           USART_CR3_bit.CPOL
#define USART_CR3_CLKEN          USART_CR3_bit.CLKEN
#define USART_CR3_STOP           USART_CR3_bit.STOP

#define USART_CR4_ADD            USART_CR4_bit.ADD

#endif

/*-------------------------------------------------------------------------
 *      USART bit masks
 *-----------------------------------------------------------------------*/
#define MASK_USART_SR_PE         0x01
#define MASK_USART_SR_FE         0x02
#define MASK_USART_SR_NF         0x04
#define MASK_USART_SR_OR         0x08
#define MASK_USART_SR_IDLE       0x10
#define MASK_USART_SR_RXNE       0x20
#define MASK_USART_SR_TC         0x40
#define MASK_USART_SR_TXE        0x80

#define MASK_USART_CR1_PIEN      0x01
#define MASK_USART_CR1_PS        0x02
#define MASK_USART_CR1_PCEN      0x04
#define MASK_USART_CR1_WAKE      0x08
#define MASK_USART_CR1_MSL       0x10
#define MASK_USART_CR1_USARTD    0x20
#define MASK_USART_CR1_T8        0x40
#define MASK_USART_CR1_R8        0x80

#define MASK_USART_CR2_SBK       0x01
#define MASK_USART_CR2_RWU       0x02
#define MASK_USART_CR2_REN       0x04
#define MASK_USART_CR2_TEN       0x08
#define MASK_USART_CR2_ILIEN     0x10
#define MASK_USART_CR2_RIEN      0x20
#define MASK_USART_CR2_TCIEN     0x40
#define MASK_USART_CR2_TIEN      0x80

#define MASK_USART_CR3_LBCL      0x01
#define MASK_USART_CR3_CPHA      0x02
#define MASK_USART_CR3_CPOL      0x04
#define MASK_USART_CR3_CLKEN     0x08
#define MASK_USART_CR3_STOP      0x30

#define MASK_USART_CR4_ADD       0x0F


/*-------------------------------------------------------------------------
 *      TIM2 register definitions
 *-----------------------------------------------------------------------*/
/* TIM2 Control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM2_CR1;
#endif
__IO_REG8_BIT(TIM2_CR1,    0x5250, __READ_WRITE, __BITS_TIM2_CR1);

/* TIM2 Control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char MMS         : 3;
} __BITS_TIM2_CR2;
#endif
__IO_REG8_BIT(TIM2_CR2,    0x5251, __READ_WRITE, __BITS_TIM2_CR2);

/* TIM2 Slave Mode Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM2_SMCR;
#endif
__IO_REG8_BIT(TIM2_SMCR,   0x5252, __READ_WRITE, __BITS_TIM2_SMCR);

/* TIM2 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM2_ETR;
#endif
__IO_REG8_BIT(TIM2_ETR,    0x5253, __READ_WRITE, __BITS_TIM2_ETR);

/* TIM2 Interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char             : 3;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM2_IER;
#endif
__IO_REG8_BIT(TIM2_IER,    0x5254, __READ_WRITE, __BITS_TIM2_IER);

/* TIM2 Status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char             : 3;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM2_SR1;
#endif
__IO_REG8_BIT(TIM2_SR1,    0x5255, __READ_WRITE, __BITS_TIM2_SR1);

/* TIM2 Status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
} __BITS_TIM2_SR2;
#endif
__IO_REG8_BIT(TIM2_SR2,    0x5256, __READ_WRITE, __BITS_TIM2_SR2);

/* TIM2 Event Generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char             : 3;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM2_EGR;
#endif
__IO_REG8_BIT(TIM2_EGR,    0x5257, __WRITE, __BITS_TIM2_EGR);

/* TIM2 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char IC1PSC      : 2;
  unsigned char IC1F        : 4;
} __BITS_TIM2_CCMR1_CAPTURE;
#endif
__IO_REG8_BIT(TIM2_CCMR1_CAPTURE, 0x5258, __READ_WRITE, __BITS_TIM2_CCMR1_CAPTURE);

/* TIM2 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM2_CCMR1_COMPARE;
#endif
__IO_REG8_BIT(TIM2_CCMR1_COMPARE, 0x5258, __READ_WRITE, __BITS_TIM2_CCMR1_COMPARE);

/* TIM2 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char IC2PSC      : 2;
  unsigned char IC2F        : 4;
} __BITS_TIM2_CCMR2_CAPTURE;
#endif
__IO_REG8_BIT(TIM2_CCMR2_CAPTURE, 0x5259, __READ_WRITE, __BITS_TIM2_CCMR2_CAPTURE);

/* TIM2 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM2_CCMR2_COMPARE;
#endif
__IO_REG8_BIT(TIM2_CCMR2_COMPARE, 0x5259, __READ_WRITE, __BITS_TIM2_CCMR2_COMPARE);

/* TIM2 Capture/Compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM2_CCER1;
#endif
__IO_REG8_BIT(TIM2_CCER1,  0x525A, __READ_WRITE, __BITS_TIM2_CCER1);

/* TIM2 Counter high */
__IO_REG8    (TIM2_CNTRH,  0x525B, __READ_WRITE);
/* TIM2 Counter low */
__IO_REG8    (TIM2_CNTRL,  0x525C, __READ_WRITE);
/* TIM2 Prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_TIM2_PSCR;
#endif
__IO_REG8_BIT(TIM2_PSCR,   0x525D, __READ_WRITE, __BITS_TIM2_PSCR);

/* TIM2 Auto-reload register high */
__IO_REG8    (TIM2_ARRH,   0x525E, __READ_WRITE);
/* TIM2 Auto-reload register low */
__IO_REG8    (TIM2_ARRL,   0x525F, __READ_WRITE);
/* TIM2 Capture/Compare register 1 high */
__IO_REG8    (TIM2_CCR1H,  0x5260, __READ_WRITE);
/* TIM2 Capture/Compare register 1 low */
__IO_REG8    (TIM2_CCR1L,  0x5261, __READ_WRITE);
/* TIM2 Capture/Compare register 2 high */
__IO_REG8    (TIM2_CCR2H,  0x5262, __READ_WRITE);
/* TIM2 Capture/Compare register 2 low */
__IO_REG8    (TIM2_CCR2L,  0x5263, __READ_WRITE);
/* TIM2 Break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char             : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM2_BKR;
#endif
__IO_REG8_BIT(TIM2_BKR,    0x5264, __READ_WRITE, __BITS_TIM2_BKR);

/* TIM2 Output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char             : 1;
  unsigned char PIS2        : 1;
} __BITS_TIM2_OISR;
#endif
__IO_REG8_BIT(TIM2_OISR,   0x5265, __READ_WRITE, __BITS_TIM2_OISR);


/*-------------------------------------------------------------------------
 *      TIM2 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM2_CR1_CEN             TIM2_CR1_bit.CEN
#define TIM2_CR1_UDIS            TIM2_CR1_bit.UDIS
#define TIM2_CR1_URS             TIM2_CR1_bit.URS
#define TIM2_CR1_OPM             TIM2_CR1_bit.OPM
#define TIM2_CR1_DIR             TIM2_CR1_bit.DIR
#define TIM2_CR1_CMS             TIM2_CR1_bit.CMS
#define TIM2_CR1_ARPE            TIM2_CR1_bit.ARPE

#define TIM2_CR2_MMS             TIM2_CR2_bit.MMS

#define TIM2_SMCR_SMS            TIM2_SMCR_bit.SMS
#define TIM2_SMCR_TS             TIM2_SMCR_bit.TS
#define TIM2_SMCR_MSM            TIM2_SMCR_bit.MSM

#define TIM2_ETR_ETF             TIM2_ETR_bit.ETF
#define TIM2_ETR_ETPS            TIM2_ETR_bit.ETPS
#define TIM2_ETR_ECE             TIM2_ETR_bit.ECE
#define TIM2_ETR_ETP             TIM2_ETR_bit.ETP

#define TIM2_IER_UIE             TIM2_IER_bit.UIE
#define TIM2_IER_CC1IE           TIM2_IER_bit.CC1IE
#define TIM2_IER_CC2IE           TIM2_IER_bit.CC2IE
#define TIM2_IER_TIE             TIM2_IER_bit.TIE
#define TIM2_IER_BIE             TIM2_IER_bit.BIE

#define TIM2_SR1_UIF             TIM2_SR1_bit.UIF
#define TIM2_SR1_CC1IF           TIM2_SR1_bit.CC1IF
#define TIM2_SR1_CC2IF           TIM2_SR1_bit.CC2IF
#define TIM2_SR1_TIF             TIM2_SR1_bit.TIF
#define TIM2_SR1_BIF             TIM2_SR1_bit.BIF

#define TIM2_SR2_CC1OF           TIM2_SR2_bit.CC1OF
#define TIM2_SR2_CC2OF           TIM2_SR2_bit.CC2OF

#define TIM2_EGR_UG              TIM2_EGR_bit.UG
#define TIM2_EGR_CC1G            TIM2_EGR_bit.CC1G
#define TIM2_EGR_CC2G            TIM2_EGR_bit.CC2G
#define TIM2_EGR_TG              TIM2_EGR_bit.TG
#define TIM2_EGR_BG              TIM2_EGR_bit.BG

#define TIM2_CCMR1_CAPTURE_CC1S  TIM2_CCMR1_CAPTURE_bit.CC1S
#define TIM2_CCMR1_CAPTURE_IC1PSC TIM2_CCMR1_CAPTURE_bit.IC1PSC
#define TIM2_CCMR1_CAPTURE_IC1F  TIM2_CCMR1_CAPTURE_bit.IC1F

#define TIM2_CCMR1_COMPARE_CC1S  TIM2_CCMR1_COMPARE_bit.CC1S
#define TIM2_CCMR1_COMPARE_OC1FE TIM2_CCMR1_COMPARE_bit.OC1FE
#define TIM2_CCMR1_COMPARE_OC1PE TIM2_CCMR1_COMPARE_bit.OC1PE
#define TIM2_CCMR1_COMPARE_OC1M  TIM2_CCMR1_COMPARE_bit.OC1M

#define TIM2_CCMR2_CAPTURE_CC2S  TIM2_CCMR2_CAPTURE_bit.CC2S
#define TIM2_CCMR2_CAPTURE_IC2PSC TIM2_CCMR2_CAPTURE_bit.IC2PSC
#define TIM2_CCMR2_CAPTURE_IC2F  TIM2_CCMR2_CAPTURE_bit.IC2F

#define TIM2_CCMR2_COMPARE_CC2S  TIM2_CCMR2_COMPARE_bit.CC2S
#define TIM2_CCMR2_COMPARE_OC2FE TIM2_CCMR2_COMPARE_bit.OC2FE
#define TIM2_CCMR2_COMPARE_OC2PE TIM2_CCMR2_COMPARE_bit.OC2PE
#define TIM2_CCMR2_COMPARE_OC2M  TIM2_CCMR2_COMPARE_bit.OC2M

#define TIM2_CCER1_CC1E          TIM2_CCER1_bit.CC1E
#define TIM2_CCER1_CC1P          TIM2_CCER1_bit.CC1P
#define TIM2_CCER1_CC2E          TIM2_CCER1_bit.CC2E
#define TIM2_CCER1_CC2P          TIM2_CCER1_bit.CC2P

#define TIM2_PSCR_PSC            TIM2_PSCR_bit.PSC

#define TIM2_BKR_LOCK            TIM2_BKR_bit.LOCK
#define TIM2_BKR_OSSI            TIM2_BKR_bit.OSSI
#define TIM2_BKR_BKE             TIM2_BKR_bit.BKE
#define TIM2_BKR_BKP             TIM2_BKR_bit.BKP
#define TIM2_BKR_AOE             TIM2_BKR_bit.AOE
#define TIM2_BKR_MOE             TIM2_BKR_bit.MOE

#define TIM2_OISR_OIS1           TIM2_OISR_bit.OIS1
#define TIM2_OISR_PIS2           TIM2_OISR_bit.PIS2

#endif

/*-------------------------------------------------------------------------
 *      TIM2 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM2_CR1_CEN        0x01
#define MASK_TIM2_CR1_UDIS       0x02
#define MASK_TIM2_CR1_URS        0x04
#define MASK_TIM2_CR1_OPM        0x08
#define MASK_TIM2_CR1_DIR        0x10
#define MASK_TIM2_CR1_CMS        0x60
#define MASK_TIM2_CR1_ARPE       0x80

#define MASK_TIM2_CR2_MMS        0x70

#define MASK_TIM2_SMCR_SMS       0x07
#define MASK_TIM2_SMCR_TS        0x70
#define MASK_TIM2_SMCR_MSM       0x80

#define MASK_TIM2_ETR_ETF        0x0F
#define MASK_TIM2_ETR_ETPS       0x30
#define MASK_TIM2_ETR_ECE        0x40
#define MASK_TIM2_ETR_ETP        0x80

#define MASK_TIM2_IER_UIE        0x01
#define MASK_TIM2_IER_CC1IE      0x02
#define MASK_TIM2_IER_CC2IE      0x04
#define MASK_TIM2_IER_TIE        0x40
#define MASK_TIM2_IER_BIE        0x80

#define MASK_TIM2_SR1_UIF        0x01
#define MASK_TIM2_SR1_CC1IF      0x02
#define MASK_TIM2_SR1_CC2IF      0x04
#define MASK_TIM2_SR1_TIF        0x40
#define MASK_TIM2_SR1_BIF        0x80

#define MASK_TIM2_SR2_CC1OF      0x02
#define MASK_TIM2_SR2_CC2OF      0x04

#define MASK_TIM2_EGR_UG         0x01
#define MASK_TIM2_EGR_CC1G       0x02
#define MASK_TIM2_EGR_CC2G       0x04
#define MASK_TIM2_EGR_TG         0x40
#define MASK_TIM2_EGR_BG         0x80

#define MASK_TIM2_CCMR1_CAPTURE_CC1S 0x03
#define MASK_TIM2_CCMR1_CAPTURE_IC1PSC 0x0C
#define MASK_TIM2_CCMR1_CAPTURE_IC1F 0xF0

#define MASK_TIM2_CCMR1_COMPARE_CC1S 0x03
#define MASK_TIM2_CCMR1_COMPARE_OC1FE 0x04
#define MASK_TIM2_CCMR1_COMPARE_OC1PE 0x08
#define MASK_TIM2_CCMR1_COMPARE_OC1M 0x70

#define MASK_TIM2_CCMR2_CAPTURE_CC2S 0x03
#define MASK_TIM2_CCMR2_CAPTURE_IC2PSC 0x0C
#define MASK_TIM2_CCMR2_CAPTURE_IC2F 0xF0

#define MASK_TIM2_CCMR2_COMPARE_CC2S 0x03
#define MASK_TIM2_CCMR2_COMPARE_OC2FE 0x04
#define MASK_TIM2_CCMR2_COMPARE_OC2PE 0x08
#define MASK_TIM2_CCMR2_COMPARE_OC2M 0x70

#define MASK_TIM2_CCER1_CC1E     0x01
#define MASK_TIM2_CCER1_CC1P     0x02
#define MASK_TIM2_CCER1_CC2E     0x10
#define MASK_TIM2_CCER1_CC2P     0x20

#define MASK_TIM2_PSCR_PSC       0x07

#define MASK_TIM2_BKR_LOCK       0x03
#define MASK_TIM2_BKR_OSSI       0x04
#define MASK_TIM2_BKR_BKE        0x10
#define MASK_TIM2_BKR_BKP        0x20
#define MASK_TIM2_BKR_AOE        0x40
#define MASK_TIM2_BKR_MOE        0x80

#define MASK_TIM2_OISR_OIS1      0x01
#define MASK_TIM2_OISR_PIS2      0x04


/*-------------------------------------------------------------------------
 *      TIM3 register definitions
 *-----------------------------------------------------------------------*/
/* TIM3 Control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM3_CR1;
#endif
__IO_REG8_BIT(TIM3_CR1,    0x5280, __READ_WRITE, __BITS_TIM3_CR1);

/* TIM3 Control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char MMS         : 3;
} __BITS_TIM3_CR2;
#endif
__IO_REG8_BIT(TIM3_CR2,    0x5281, __READ_WRITE, __BITS_TIM3_CR2);

/* TIM3 Slave Mode Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM3_SMCR;
#endif
__IO_REG8_BIT(TIM3_SMCR,   0x5282, __READ_WRITE, __BITS_TIM3_SMCR);

/* TIM3 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM3_ETR;
#endif
__IO_REG8_BIT(TIM3_ETR,    0x5283, __READ_WRITE, __BITS_TIM3_ETR);

/* TIM3 Interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char             : 3;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM3_IER;
#endif
__IO_REG8_BIT(TIM3_IER,    0x5284, __READ_WRITE, __BITS_TIM3_IER);

/* TIM3 Status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char             : 3;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM3_SR1;
#endif
__IO_REG8_BIT(TIM3_SR1,    0x5285, __READ_WRITE, __BITS_TIM3_SR1);

/* TIM3 Status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
} __BITS_TIM3_SR2;
#endif
__IO_REG8_BIT(TIM3_SR2,    0x5286, __READ_WRITE, __BITS_TIM3_SR2);

/* TIM3 Event Generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char             : 3;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM3_EGR;
#endif
__IO_REG8_BIT(TIM3_EGR,    0x5287, __WRITE, __BITS_TIM3_EGR);

/* TIM3 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char IC1PSC      : 2;
  unsigned char IC1F        : 4;
} __BITS_TIM3_CCMR1_CAPTURE;
#endif
__IO_REG8_BIT(TIM3_CCMR1_CAPTURE, 0x5288, __READ_WRITE, __BITS_TIM3_CCMR1_CAPTURE);

/* TIM3 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM3_CCMR1_COMPARE;
#endif
__IO_REG8_BIT(TIM3_CCMR1_COMPARE, 0x5288, __READ_WRITE, __BITS_TIM3_CCMR1_COMPARE);

/* TIM3 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char IC2PSC      : 2;
  unsigned char IC2F        : 4;
} __BITS_TIM3_CCMR2_CAPTURE;
#endif
__IO_REG8_BIT(TIM3_CCMR2_CAPTURE, 0x5289, __READ_WRITE, __BITS_TIM3_CCMR2_CAPTURE);

/* TIM3 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM3_CCMR2_COMPARE;
#endif
__IO_REG8_BIT(TIM3_CCMR2_COMPARE, 0x5289, __READ_WRITE, __BITS_TIM3_CCMR2_COMPARE);

/* TIM3 Capture/Compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM3_CCER1;
#endif
__IO_REG8_BIT(TIM3_CCER1,  0x528A, __READ_WRITE, __BITS_TIM3_CCER1);

/* TIM3 Counter high */
__IO_REG8    (TIM3_CNTRH,  0x528B, __READ_WRITE);
/* TIM3 Counter low */
__IO_REG8    (TIM3_CNTRL,  0x528C, __READ_WRITE);
/* TIM3 Prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_TIM3_PSCR;
#endif
__IO_REG8_BIT(TIM3_PSCR,   0x528D, __READ_WRITE, __BITS_TIM3_PSCR);

/* TIM3 Auto-reload register high */
__IO_REG8    (TIM3_ARRH,   0x528E, __READ_WRITE);
/* TIM3 Auto-reload register low */
__IO_REG8    (TIM3_ARRL,   0x528F, __READ_WRITE);
/* TIM3 Capture/Compare register 1 high */
__IO_REG8    (TIM3_CCR1H,  0x5290, __READ_WRITE);
/* TIM3 Capture/Compare register 1 low */
__IO_REG8    (TIM3_CCR1L,  0x5291, __READ_WRITE);
/* TIM3 Capture/Compare register 2 high */
__IO_REG8    (TIM3_CCR2H,  0x5292, __READ_WRITE);
/* TIM3 Capture/Compare register 2 low */
__IO_REG8    (TIM3_CCR2L,  0x5293, __READ_WRITE);
/* TIM3 Break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char             : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM3_BKR;
#endif
__IO_REG8_BIT(TIM3_BKR,    0x5294, __READ_WRITE, __BITS_TIM3_BKR);

/* TIM3 Output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char             : 1;
  unsigned char PIS2        : 1;
} __BITS_TIM3_OISR;
#endif
__IO_REG8_BIT(TIM3_OISR,   0x5295, __READ_WRITE, __BITS_TIM3_OISR);


/*-------------------------------------------------------------------------
 *      TIM3 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM3_CR1_CEN             TIM3_CR1_bit.CEN
#define TIM3_CR1_UDIS            TIM3_CR1_bit.UDIS
#define TIM3_CR1_URS             TIM3_CR1_bit.URS
#define TIM3_CR1_OPM             TIM3_CR1_bit.OPM
#define TIM3_CR1_DIR             TIM3_CR1_bit.DIR
#define TIM3_CR1_CMS             TIM3_CR1_bit.CMS
#define TIM3_CR1_ARPE            TIM3_CR1_bit.ARPE

#define TIM3_CR2_MMS             TIM3_CR2_bit.MMS

#define TIM3_SMCR_SMS            TIM3_SMCR_bit.SMS
#define TIM3_SMCR_TS             TIM3_SMCR_bit.TS
#define TIM3_SMCR_MSM            TIM3_SMCR_bit.MSM

#define TIM3_ETR_ETF             TIM3_ETR_bit.ETF
#define TIM3_ETR_ETPS            TIM3_ETR_bit.ETPS
#define TIM3_ETR_ECE             TIM3_ETR_bit.ECE
#define TIM3_ETR_ETP             TIM3_ETR_bit.ETP

#define TIM3_IER_UIE             TIM3_IER_bit.UIE
#define TIM3_IER_CC1IE           TIM3_IER_bit.CC1IE
#define TIM3_IER_CC2IE           TIM3_IER_bit.CC2IE
#define TIM3_IER_TIE             TIM3_IER_bit.TIE
#define TIM3_IER_BIE             TIM3_IER_bit.BIE

#define TIM3_SR1_UIF             TIM3_SR1_bit.UIF
#define TIM3_SR1_CC1IF           TIM3_SR1_bit.CC1IF
#define TIM3_SR1_CC2IF           TIM3_SR1_bit.CC2IF
#define TIM3_SR1_TIF             TIM3_SR1_bit.TIF
#define TIM3_SR1_BIF             TIM3_SR1_bit.BIF

#define TIM3_SR2_CC1OF           TIM3_SR2_bit.CC1OF
#define TIM3_SR2_CC2OF           TIM3_SR2_bit.CC2OF

#define TIM3_EGR_UG              TIM3_EGR_bit.UG
#define TIM3_EGR_CC1G            TIM3_EGR_bit.CC1G
#define TIM3_EGR_CC2G            TIM3_EGR_bit.CC2G
#define TIM3_EGR_TG              TIM3_EGR_bit.TG
#define TIM3_EGR_BG              TIM3_EGR_bit.BG

#define TIM3_CCMR1_CAPTURE_CC1S  TIM3_CCMR1_CAPTURE_bit.CC1S
#define TIM3_CCMR1_CAPTURE_IC1PSC TIM3_CCMR1_CAPTURE_bit.IC1PSC
#define TIM3_CCMR1_CAPTURE_IC1F  TIM3_CCMR1_CAPTURE_bit.IC1F

#define TIM3_CCMR1_COMPARE_CC1S  TIM3_CCMR1_COMPARE_bit.CC1S
#define TIM3_CCMR1_COMPARE_OC1FE TIM3_CCMR1_COMPARE_bit.OC1FE
#define TIM3_CCMR1_COMPARE_OC1PE TIM3_CCMR1_COMPARE_bit.OC1PE
#define TIM3_CCMR1_COMPARE_OC1M  TIM3_CCMR1_COMPARE_bit.OC1M

#define TIM3_CCMR2_CAPTURE_CC2S  TIM3_CCMR2_CAPTURE_bit.CC2S
#define TIM3_CCMR2_CAPTURE_IC2PSC TIM3_CCMR2_CAPTURE_bit.IC2PSC
#define TIM3_CCMR2_CAPTURE_IC2F  TIM3_CCMR2_CAPTURE_bit.IC2F

#define TIM3_CCMR2_COMPARE_CC2S  TIM3_CCMR2_COMPARE_bit.CC2S
#define TIM3_CCMR2_COMPARE_OC2FE TIM3_CCMR2_COMPARE_bit.OC2FE
#define TIM3_CCMR2_COMPARE_OC2PE TIM3_CCMR2_COMPARE_bit.OC2PE
#define TIM3_CCMR2_COMPARE_OC2M  TIM3_CCMR2_COMPARE_bit.OC2M

#define TIM3_CCER1_CC1E          TIM3_CCER1_bit.CC1E
#define TIM3_CCER1_CC1P          TIM3_CCER1_bit.CC1P
#define TIM3_CCER1_CC2E          TIM3_CCER1_bit.CC2E
#define TIM3_CCER1_CC2P          TIM3_CCER1_bit.CC2P

#define TIM3_PSCR_PSC            TIM3_PSCR_bit.PSC

#define TIM3_BKR_LOCK            TIM3_BKR_bit.LOCK
#define TIM3_BKR_OSSI            TIM3_BKR_bit.OSSI
#define TIM3_BKR_BKE             TIM3_BKR_bit.BKE
#define TIM3_BKR_BKP             TIM3_BKR_bit.BKP
#define TIM3_BKR_AOE             TIM3_BKR_bit.AOE
#define TIM3_BKR_MOE             TIM3_BKR_bit.MOE

#define TIM3_OISR_OIS1           TIM3_OISR_bit.OIS1
#define TIM3_OISR_PIS2           TIM3_OISR_bit.PIS2

#endif

/*-------------------------------------------------------------------------
 *      TIM3 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM3_CR1_CEN        0x01
#define MASK_TIM3_CR1_UDIS       0x02
#define MASK_TIM3_CR1_URS        0x04
#define MASK_TIM3_CR1_OPM        0x08
#define MASK_TIM3_CR1_DIR        0x10
#define MASK_TIM3_CR1_CMS        0x60
#define MASK_TIM3_CR1_ARPE       0x80

#define MASK_TIM3_CR2_MMS        0x70

#define MASK_TIM3_SMCR_SMS       0x07
#define MASK_TIM3_SMCR_TS        0x70
#define MASK_TIM3_SMCR_MSM       0x80

#define MASK_TIM3_ETR_ETF        0x0F
#define MASK_TIM3_ETR_ETPS       0x30
#define MASK_TIM3_ETR_ECE        0x40
#define MASK_TIM3_ETR_ETP        0x80

#define MASK_TIM3_IER_UIE        0x01
#define MASK_TIM3_IER_CC1IE      0x02
#define MASK_TIM3_IER_CC2IE      0x04
#define MASK_TIM3_IER_TIE        0x40
#define MASK_TIM3_IER_BIE        0x80

#define MASK_TIM3_SR1_UIF        0x01
#define MASK_TIM3_SR1_CC1IF      0x02
#define MASK_TIM3_SR1_CC2IF      0x04
#define MASK_TIM3_SR1_TIF        0x40
#define MASK_TIM3_SR1_BIF        0x80

#define MASK_TIM3_SR2_CC1OF      0x02
#define MASK_TIM3_SR2_CC2OF      0x04

#define MASK_TIM3_EGR_UG         0x01
#define MASK_TIM3_EGR_CC1G       0x02
#define MASK_TIM3_EGR_CC2G       0x04
#define MASK_TIM3_EGR_TG         0x40
#define MASK_TIM3_EGR_BG         0x80

#define MASK_TIM3_CCMR1_CAPTURE_CC1S 0x03
#define MASK_TIM3_CCMR1_CAPTURE_IC1PSC 0x0C
#define MASK_TIM3_CCMR1_CAPTURE_IC1F 0xF0

#define MASK_TIM3_CCMR1_COMPARE_CC1S 0x03
#define MASK_TIM3_CCMR1_COMPARE_OC1FE 0x04
#define MASK_TIM3_CCMR1_COMPARE_OC1PE 0x08
#define MASK_TIM3_CCMR1_COMPARE_OC1M 0x70

#define MASK_TIM3_CCMR2_CAPTURE_CC2S 0x03
#define MASK_TIM3_CCMR2_CAPTURE_IC2PSC 0x0C
#define MASK_TIM3_CCMR2_CAPTURE_IC2F 0xF0

#define MASK_TIM3_CCMR2_COMPARE_CC2S 0x03
#define MASK_TIM3_CCMR2_COMPARE_OC2FE 0x04
#define MASK_TIM3_CCMR2_COMPARE_OC2PE 0x08
#define MASK_TIM3_CCMR2_COMPARE_OC2M 0x70

#define MASK_TIM3_CCER1_CC1E     0x01
#define MASK_TIM3_CCER1_CC1P     0x02
#define MASK_TIM3_CCER1_CC2E     0x10
#define MASK_TIM3_CCER1_CC2P     0x20

#define MASK_TIM3_PSCR_PSC       0x07

#define MASK_TIM3_BKR_LOCK       0x03
#define MASK_TIM3_BKR_OSSI       0x04
#define MASK_TIM3_BKR_BKE        0x10
#define MASK_TIM3_BKR_BKP        0x20
#define MASK_TIM3_BKR_AOE        0x40
#define MASK_TIM3_BKR_MOE        0x80

#define MASK_TIM3_OISR_OIS1      0x01
#define MASK_TIM3_OISR_PIS2      0x04


/*-------------------------------------------------------------------------
 *      TIM4 register definitions
 *-----------------------------------------------------------------------*/
/* TIM4 Control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char             : 3;
  unsigned char ARPE        : 1;
} __BITS_TIM4_CR1;
#endif
__IO_REG8_BIT(TIM4_CR1,    0x52E0, __READ_WRITE, __BITS_TIM4_CR1);

/* TIM4 Control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char MMS         : 3;
} __BITS_TIM4_CR2;
#endif
__IO_REG8_BIT(TIM4_CR2,    0x52E1, __READ_WRITE, __BITS_TIM4_CR2);

/* TIM4 Slave Mode Control Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM4_SMCR;
#endif
__IO_REG8_BIT(TIM4_SMCR,   0x52E2, __READ_WRITE, __BITS_TIM4_SMCR);

/* TIM4 Interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char             : 5;
  unsigned char TIE         : 1;
} __BITS_TIM4_IER;
#endif
__IO_REG8_BIT(TIM4_IER,    0x52E3, __READ_WRITE, __BITS_TIM4_IER);

/* TIM4 Status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char             : 5;
  unsigned char TIF         : 1;
} __BITS_TIM4_SR1;
#endif
__IO_REG8_BIT(TIM4_SR1,    0x52E4, __READ_WRITE, __BITS_TIM4_SR1);

/* TIM4 Event Generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char             : 5;
  unsigned char TG          : 1;
} __BITS_TIM4_EGR;
#endif
__IO_REG8_BIT(TIM4_EGR,    0x52E5, __WRITE, __BITS_TIM4_EGR);

/* TIM4 Counter */
__IO_REG8    (TIM4_CNTR,   0x52E6, __READ_WRITE);
/* TIM4 Prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 4;
} __BITS_TIM4_PSCR;
#endif
__IO_REG8_BIT(TIM4_PSCR,   0x52E7, __READ_WRITE, __BITS_TIM4_PSCR);

/* TIM4 Auto-reload register low */
__IO_REG8    (TIM4_ARR,    0x52E8, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      TIM4 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM4_CR1_CEN             TIM4_CR1_bit.CEN
#define TIM4_CR1_UDIS            TIM4_CR1_bit.UDIS
#define TIM4_CR1_URS             TIM4_CR1_bit.URS
#define TIM4_CR1_OPM             TIM4_CR1_bit.OPM
#define TIM4_CR1_ARPE            TIM4_CR1_bit.ARPE

#define TIM4_CR2_MMS             TIM4_CR2_bit.MMS

#define TIM4_SMCR_SMS            TIM4_SMCR_bit.SMS
#define TIM4_SMCR_TS             TIM4_SMCR_bit.TS
#define TIM4_SMCR_MSM            TIM4_SMCR_bit.MSM

#define TIM4_IER_UIE             TIM4_IER_bit.UIE
#define TIM4_IER_TIE             TIM4_IER_bit.TIE

#define TIM4_SR1_UIF             TIM4_SR1_bit.UIF
#define TIM4_SR1_TIF             TIM4_SR1_bit.TIF

#define TIM4_EGR_UG              TIM4_EGR_bit.UG
#define TIM4_EGR_TG              TIM4_EGR_bit.TG

#define TIM4_PSCR_PSC            TIM4_PSCR_bit.PSC

#endif

/*-------------------------------------------------------------------------
 *      TIM4 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM4_CR1_CEN        0x01
#define MASK_TIM4_CR1_UDIS       0x02
#define MASK_TIM4_CR1_URS        0x04
#define MASK_TIM4_CR1_OPM        0x08
#define MASK_TIM4_CR1_ARPE       0x80

#define MASK_TIM4_CR2_MMS        0x70

#define MASK_TIM4_SMCR_SMS       0x07
#define MASK_TIM4_SMCR_TS        0x70
#define MASK_TIM4_SMCR_MSM       0x80

#define MASK_TIM4_IER_UIE        0x01
#define MASK_TIM4_IER_TIE        0x40

#define MASK_TIM4_SR1_UIF        0x01
#define MASK_TIM4_SR1_TIF        0x40

#define MASK_TIM4_EGR_UG         0x01
#define MASK_TIM4_EGR_TG         0x40

#define MASK_TIM4_PSCR_PSC       0x0F


/*-------------------------------------------------------------------------
 *      IR register definitions
 *-----------------------------------------------------------------------*/
/* Infra-red control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IR_EN       : 1;
  unsigned char HS_EN       : 1;
} __BITS_IR_CR;
#endif
__IO_REG8_BIT(IR_CR,       0x52FF, __READ_WRITE, __BITS_IR_CR);


/*-------------------------------------------------------------------------
 *      IR bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define IR_CR_IR_EN              IR_CR_bit.IR_EN
#define IR_CR_HS_EN              IR_CR_bit.HS_EN

#endif

/*-------------------------------------------------------------------------
 *      IR bit masks
 *-----------------------------------------------------------------------*/
#define MASK_IR_CR_IR_EN         0x01
#define MASK_IR_CR_HS_EN         0x02


/*-------------------------------------------------------------------------
 *      CMP register definitions
 *-----------------------------------------------------------------------*/
/* Comparator control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BIAS_EN     : 1;
  unsigned char COMP2_EN    : 1;
  unsigned char COMP1_EN    : 1;
  unsigned char COMPREF     : 1;
  unsigned char POL         : 1;
  unsigned char CNF_TIM0    : 1;
  unsigned char CNF_TIM1    : 1;
  unsigned char IC1_BK      : 1;
} __BITS_COMP_CR;
#endif
__IO_REG8_BIT(COMP_CR,     0x5300, __READ_WRITE, __BITS_COMP_CR);

/* Comparator status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char COMP1_OUT   : 1;
  unsigned char COMP2_OUT   : 1;
  unsigned char             : 2;
  unsigned char CEF1        : 1;
  unsigned char ITEN1       : 1;
  unsigned char CEF2        : 1;
  unsigned char ITEN2       : 1;
} __BITS_COMP_CSR;
#endif
__IO_REG8_BIT(COMP_CSR,    0x5301, __READ_WRITE, __BITS_COMP_CSR);

/* Comparator channel selection register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char COMP1_CH1   : 1;
  unsigned char COMP1_CH2   : 1;
  unsigned char COMP1_CH3   : 1;
  unsigned char COMP1_CH4   : 1;
  unsigned char COMP2_CH1   : 1;
  unsigned char COMP2_CH2   : 1;
  unsigned char COMP2_CH3   : 1;
  unsigned char COMP2_CH4   : 1;
} __BITS_COMP_CCS;
#endif
__IO_REG8_BIT(COMP_CCS,    0x5302, __READ_WRITE, __BITS_COMP_CCS);


/*-------------------------------------------------------------------------
 *      CMP bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define COMP_CR_BIAS_EN          COMP_CR_bit.BIAS_EN
#define COMP_CR_COMP2_EN         COMP_CR_bit.COMP2_EN
#define COMP_CR_COMP1_EN         COMP_CR_bit.COMP1_EN
#define COMP_CR_COMPREF          COMP_CR_bit.COMPREF
#define COMP_CR_POL              COMP_CR_bit.POL
#define COMP_CR_CNF_TIM0         COMP_CR_bit.CNF_TIM0
#define COMP_CR_CNF_TIM1         COMP_CR_bit.CNF_TIM1
#define COMP_CR_IC1_BK           COMP_CR_bit.IC1_BK

#define COMP_CSR_COMP1_OUT       COMP_CSR_bit.COMP1_OUT
#define COMP_CSR_COMP2_OUT       COMP_CSR_bit.COMP2_OUT
#define COMP_CSR_CEF1            COMP_CSR_bit.CEF1
#define COMP_CSR_ITEN1           COMP_CSR_bit.ITEN1
#define COMP_CSR_CEF2            COMP_CSR_bit.CEF2
#define COMP_CSR_ITEN2           COMP_CSR_bit.ITEN2

#define COMP_CCS_COMP1_CH1       COMP_CCS_bit.COMP1_CH1
#define COMP_CCS_COMP1_CH2       COMP_CCS_bit.COMP1_CH2
#define COMP_CCS_COMP1_CH3       COMP_CCS_bit.COMP1_CH3
#define COMP_CCS_COMP1_CH4       COMP_CCS_bit.COMP1_CH4
#define COMP_CCS_COMP2_CH1       COMP_CCS_bit.COMP2_CH1
#define COMP_CCS_COMP2_CH2       COMP_CCS_bit.COMP2_CH2
#define COMP_CCS_COMP2_CH3       COMP_CCS_bit.COMP2_CH3
#define COMP_CCS_COMP2_CH4       COMP_CCS_bit.COMP2_CH4

#endif

/*-------------------------------------------------------------------------
 *      CMP bit masks
 *-----------------------------------------------------------------------*/
#define MASK_COMP_CR_BIAS_EN     0x01
#define MASK_COMP_CR_COMP2_EN    0x02
#define MASK_COMP_CR_COMP1_EN    0x04
#define MASK_COMP_CR_COMPREF     0x08
#define MASK_COMP_CR_POL         0x10
#define MASK_COMP_CR_CNF_TIM0    0x20
#define MASK_COMP_CR_CNF_TIM1    0x40
#define MASK_COMP_CR_IC1_BK      0x80

#define MASK_COMP_CSR_COMP1_OUT  0x01
#define MASK_COMP_CSR_COMP2_OUT  0x02
#define MASK_COMP_CSR_CEF1       0x10
#define MASK_COMP_CSR_ITEN1      0x20
#define MASK_COMP_CSR_CEF2       0x40
#define MASK_COMP_CSR_ITEN2      0x80

#define MASK_COMP_CCS_COMP1_CH1  0x01
#define MASK_COMP_CCS_COMP1_CH2  0x02
#define MASK_COMP_CCS_COMP1_CH3  0x04
#define MASK_COMP_CCS_COMP1_CH4  0x08
#define MASK_COMP_CCS_COMP2_CH1  0x10
#define MASK_COMP_CCS_COMP2_CH2  0x20
#define MASK_COMP_CCS_COMP2_CH3  0x40
#define MASK_COMP_CCS_COMP2_CH4  0x80


/*-------------------------------------------------------------------------
 *      CPU register definitions
 *-----------------------------------------------------------------------*/
/* Accumulator */
__IO_REG8    (CPU_A,       0x7F00, __READ_WRITE);
/* Program counter extended */
__IO_REG8    (CPU_PCE,     0x7F01, __READ_WRITE);
/* Program counter high */
__IO_REG8    (CPU_PCH,     0x7F02, __READ_WRITE);
/* Program counter low */
__IO_REG8    (CPU_PCL,     0x7F03, __READ_WRITE);
/* X index register high */
__IO_REG8    (CPU_XH,      0x7F04, __READ_WRITE);
/* X index register low */
__IO_REG8    (CPU_XL,      0x7F05, __READ_WRITE);
/* Y index register high */
__IO_REG8    (CPU_YH,      0x7F06, __READ_WRITE);
/* Y index register low */
__IO_REG8    (CPU_YL,      0x7F07, __READ_WRITE);
/* Stack pointer high */
__IO_REG8    (CPU_SPH,     0x7F08, __READ_WRITE);
/* Stack pointer low */
__IO_REG8    (CPU_SPL,     0x7F09, __READ_WRITE);
/* Condition code register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C           : 1;
  unsigned char Z           : 1;
  unsigned char N           : 1;
  unsigned char I0          : 1;
  unsigned char H           : 1;
  unsigned char I1          : 1;
  unsigned char             : 1;
  unsigned char V           : 1;
} __BITS_CPU_CCR;
#endif
__IO_REG8_BIT(CPU_CCR,     0x7F0A, __READ_WRITE, __BITS_CPU_CCR);

/* Global configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWD         : 1;
  unsigned char AL          : 1;
} __BITS_CPU_CFG_GCR;
#endif
__IO_REG8_BIT(CPU_CFG_GCR, 0x7F60, __READ_WRITE, __BITS_CPU_CFG_GCR);


/*-------------------------------------------------------------------------
 *      CPU bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define CPU_CCR_C                CPU_CCR_bit.C
#define CPU_CCR_Z                CPU_CCR_bit.Z
#define CPU_CCR_N                CPU_CCR_bit.N
#define CPU_CCR_I0               CPU_CCR_bit.I0
#define CPU_CCR_H                CPU_CCR_bit.H
#define CPU_CCR_I1               CPU_CCR_bit.I1
#define CPU_CCR_V                CPU_CCR_bit.V

#define CPU_CFG_GCR_SWD          CPU_CFG_GCR_bit.SWD
#define CPU_CFG_GCR_AL           CPU_CFG_GCR_bit.AL

#endif

/*-------------------------------------------------------------------------
 *      CPU bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CPU_CCR_C           0x01
#define MASK_CPU_CCR_Z           0x02
#define MASK_CPU_CCR_N           0x04
#define MASK_CPU_CCR_I0          0x08
#define MASK_CPU_CCR_H           0x10
#define MASK_CPU_CCR_I1          0x20
#define MASK_CPU_CCR_V           0x80

#define MASK_CPU_CFG_GCR_SWD     0x01
#define MASK_CPU_CFG_GCR_AL      0x02


/*-------------------------------------------------------------------------
 *      ITC-SPR(1) register definitions
 *-----------------------------------------------------------------------*/
/* Interrupt Software priority register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char VECT1SPR    : 2;
} __BITS_ITC_SPR1;
#endif
__IO_REG8_BIT(ITC_SPR1,    0x7F70, __READ_WRITE, __BITS_ITC_SPR1);

/* Interrupt Software priority register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT4SPR    : 2;
  unsigned char             : 2;
  unsigned char VECT6SPR    : 2;
  unsigned char VECT7SPR    : 2;
} __BITS_ITC_SPR2;
#endif
__IO_REG8_BIT(ITC_SPR2,    0x7F71, __READ_WRITE, __BITS_ITC_SPR2);

/* Interrupt Software priority register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT8SPR    : 2;
  unsigned char VECT9SPR    : 2;
  unsigned char VECT10SPR   : 2;
  unsigned char VECT11SPR   : 2;
} __BITS_ITC_SPR3;
#endif
__IO_REG8_BIT(ITC_SPR3,    0x7F72, __READ_WRITE, __BITS_ITC_SPR3);

/* Interrupt Software priority register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT12SPR   : 2;
  unsigned char VECT13SPR   : 2;
  unsigned char VECT14SPR   : 2;
  unsigned char VECT15SPR   : 2;
} __BITS_ITC_SPR4;
#endif
__IO_REG8_BIT(ITC_SPR4,    0x7F73, __READ_WRITE, __BITS_ITC_SPR4);

/* Interrupt Software priority register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char VECT18SPR   : 2;
  unsigned char VECT19SPR   : 2;
} __BITS_ITC_SPR5;
#endif
__IO_REG8_BIT(ITC_SPR5,    0x7F74, __READ_WRITE, __BITS_ITC_SPR5);

/* Interrupt Software priority register 6 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT20SPR   : 2;
  unsigned char VECT21SPR   : 2;
  unsigned char VECT22SPR   : 2;
} __BITS_ITC_SPR6;
#endif
__IO_REG8_BIT(ITC_SPR6,    0x7F75, __READ_WRITE, __BITS_ITC_SPR6);

/* Interrupt Software priority register 7 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char VECT25SPR   : 2;
  unsigned char VECT26SPR   : 2;
  unsigned char VECT27SPR   : 2;
} __BITS_ITC_SPR7;
#endif
__IO_REG8_BIT(ITC_SPR7,    0x7F76, __READ_WRITE, __BITS_ITC_SPR7);

/* Interrupt Software priority register 8 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT28SPR   : 2;
  unsigned char VECT29SPR   : 2;
} __BITS_ITC_SPR8;
#endif
__IO_REG8_BIT(ITC_SPR8,    0x7F77, __READ_WRITE, __BITS_ITC_SPR8);


/*-------------------------------------------------------------------------
 *      ITC-SPR(1) bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define ITC_SPR1_VECT1SPR        ITC_SPR1_bit.VECT1SPR

#define ITC_SPR2_VECT4SPR        ITC_SPR2_bit.VECT4SPR
#define ITC_SPR2_VECT6SPR        ITC_SPR2_bit.VECT6SPR
#define ITC_SPR2_VECT7SPR        ITC_SPR2_bit.VECT7SPR

#define ITC_SPR3_VECT8SPR        ITC_SPR3_bit.VECT8SPR
#define ITC_SPR3_VECT9SPR        ITC_SPR3_bit.VECT9SPR
#define ITC_SPR3_VECT10SPR       ITC_SPR3_bit.VECT10SPR
#define ITC_SPR3_VECT11SPR       ITC_SPR3_bit.VECT11SPR

#define ITC_SPR4_VECT12SPR       ITC_SPR4_bit.VECT12SPR
#define ITC_SPR4_VECT13SPR       ITC_SPR4_bit.VECT13SPR
#define ITC_SPR4_VECT14SPR       ITC_SPR4_bit.VECT14SPR
#define ITC_SPR4_VECT15SPR       ITC_SPR4_bit.VECT15SPR

#define ITC_SPR5_VECT18SPR       ITC_SPR5_bit.VECT18SPR
#define ITC_SPR5_VECT19SPR       ITC_SPR5_bit.VECT19SPR

#define ITC_SPR6_VECT20SPR       ITC_SPR6_bit.VECT20SPR
#define ITC_SPR6_VECT21SPR       ITC_SPR6_bit.VECT21SPR
#define ITC_SPR6_VECT22SPR       ITC_SPR6_bit.VECT22SPR

#define ITC_SPR7_VECT25SPR       ITC_SPR7_bit.VECT25SPR
#define ITC_SPR7_VECT26SPR       ITC_SPR7_bit.VECT26SPR
#define ITC_SPR7_VECT27SPR       ITC_SPR7_bit.VECT27SPR

#define ITC_SPR8_VECT28SPR       ITC_SPR8_bit.VECT28SPR
#define ITC_SPR8_VECT29SPR       ITC_SPR8_bit.VECT29SPR

#endif

/*-------------------------------------------------------------------------
 *      ITC-SPR(1) bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ITC_SPR1_VECT1SPR   0x0C

#define MASK_ITC_SPR2_VECT4SPR   0x03
#define MASK_ITC_SPR2_VECT6SPR   0x30
#define MASK_ITC_SPR2_VECT7SPR   0xC0

#define MASK_ITC_SPR3_VECT8SPR   0x03
#define MASK_ITC_SPR3_VECT9SPR   0x0C
#define MASK_ITC_SPR3_VECT10SPR  0x30
#define MASK_ITC_SPR3_VECT11SPR  0xC0

#define MASK_ITC_SPR4_VECT12SPR  0x03
#define MASK_ITC_SPR4_VECT13SPR  0x0C
#define MASK_ITC_SPR4_VECT14SPR  0x30
#define MASK_ITC_SPR4_VECT15SPR  0xC0

#define MASK_ITC_SPR5_VECT18SPR  0x30
#define MASK_ITC_SPR5_VECT19SPR  0xC0

#define MASK_ITC_SPR6_VECT20SPR  0x03
#define MASK_ITC_SPR6_VECT21SPR  0x0C
#define MASK_ITC_SPR6_VECT22SPR  0x30

#define MASK_ITC_SPR7_VECT25SPR  0x0C
#define MASK_ITC_SPR7_VECT26SPR  0x30
#define MASK_ITC_SPR7_VECT27SPR  0xC0

#define MASK_ITC_SPR8_VECT28SPR  0x03
#define MASK_ITC_SPR8_VECT29SPR  0x0C


/*-------------------------------------------------------------------------
 *      SWIM register definitions
 *-----------------------------------------------------------------------*/
/* SWIM control status register */
__IO_REG8    (SWIM_CSR,    0x7F80, __READ_WRITE);


/*-------------------------------------------------------------------------
 *      DM register definitions
 *-----------------------------------------------------------------------*/
/* Breakpoint 1 register extended byte */
__IO_REG8    (DM_BK1RE,    0x7F90, __READ_WRITE);
/* Breakpoint 1 register high byte */
__IO_REG8    (DM_BK1RH,    0x7F91, __READ_WRITE);
/* Breakpoint 1 register low byte */
__IO_REG8    (DM_BK1RL,    0x7F92, __READ_WRITE);
/* Breakpoint 2 register extended byte */
__IO_REG8    (DM_BK2RE,    0x7F93, __READ_WRITE);
/* Breakpoint 2 register high byte */
__IO_REG8    (DM_BK2RH,    0x7F94, __READ_WRITE);
/* Breakpoint 2 register low byte */
__IO_REG8    (DM_BK2RL,    0x7F95, __READ_WRITE);
/* Debug module control register 1 */
__IO_REG8    (DM_CR1,      0x7F96, __READ_WRITE);
/* Debug module control register 2 */
__IO_REG8    (DM_CR2,      0x7F97, __READ_WRITE);
/* Debug module control/status register 1 */
__IO_REG8    (DM_CSR1,     0x7F98, __READ_WRITE);
/* Debug module control/status register 2 */
__IO_REG8    (DM_CSR2,     0x7F99, __READ_WRITE);
/* Enable function register */
__IO_REG8    (DM_ENFCTR,   0x7F9A, __READ_WRITE);


/*-------------------------------------------------------------------------
 *      Interrupt vector numbers
 *
 *  Note: The vector numbers listed in ST's manuals for STM8 are offset
 *        by 2 compared to the vector numbers used by EWSTM8.
 *-----------------------------------------------------------------------*/
#define FLASH_EOP_vector                      3 /* IRQ No. in STM8 manual:  1 */
#define FLASH_WR_PG_DIS_vector                3 /* IRQ No. in STM8 manual:  1 */
#define AWU_vector                            6 /* IRQ No. in STM8 manual:  4 */
#define EXTIB_vector                          8 /* IRQ No. in STM8 manual:  6 */
#define EXTID_vector                          9 /* IRQ No. in STM8 manual:  7 */
#define EXTI0_vector                         10 /* IRQ No. in STM8 manual:  8 */
#define EXTI1_vector                         11 /* IRQ No. in STM8 manual:  9 */
#define EXTI2_vector                         12 /* IRQ No. in STM8 manual: 10 */
#define EXTI3_vector                         13 /* IRQ No. in STM8 manual: 11 */
#define EXTI4_vector                         14 /* IRQ No. in STM8 manual: 12 */
#define EXTI5_vector                         15 /* IRQ No. in STM8 manual: 13 */
#define EXTI6_vector                         16 /* IRQ No. in STM8 manual: 14 */
#define EXTI7_vector                         17 /* IRQ No. in STM8 manual: 15 */
#define COMP_ITEN1_vector                    20 /* IRQ No. in STM8 manual: 18 */
#define COMP_ITEN2_vector                    20 /* IRQ No. in STM8 manual: 18 */
#define TIM2_BIF_vector                      21 /* IRQ No. in STM8 manual: 19 */
#define TIM2_OVR_UIF_vector                  21 /* IRQ No. in STM8 manual: 19 */
#define TIM2_TIF_vector                      21 /* IRQ No. in STM8 manual: 19 */
#define TIM2_CAPCOM_CC1IF_vector             22 /* IRQ No. in STM8 manual: 20 */
#define TIM2_CAPCOM_CC2IF_vector             22 /* IRQ No. in STM8 manual: 20 */
#define TIM3_BIF_vector                      23 /* IRQ No. in STM8 manual: 21 */
#define TIM3_OVR_UIF_vector                  23 /* IRQ No. in STM8 manual: 21 */
#define TIM3_TIF_vector                      23 /* IRQ No. in STM8 manual: 21 */
#define TIM3_CAPCOM_CC1IF_vector             24 /* IRQ No. in STM8 manual: 22 */
#define TIM3_CAPCOM_CC2IF_vector             24 /* IRQ No. in STM8 manual: 22 */
#define TIM4_TIF_vector                      27 /* IRQ No. in STM8 manual: 25 */
#define TIM4_UIF_vector                      27 /* IRQ No. in STM8 manual: 25 */
#define SPI_MODF_vector                      28 /* IRQ No. in STM8 manual: 26 */
#define SPI_OVR_vector                       28 /* IRQ No. in STM8 manual: 26 */
#define SPI_RXNE_vector                      28 /* IRQ No. in STM8 manual: 26 */
#define SPI_TXE_vector                       28 /* IRQ No. in STM8 manual: 26 */
#define SPI_WKUP_vector                      28 /* IRQ No. in STM8 manual: 26 */
#define USART_T_TC_vector                    29 /* IRQ No. in STM8 manual: 27 */
#define USART_T_TXE_vector                   29 /* IRQ No. in STM8 manual: 27 */
#define USART_R_IDLE_vector                  30 /* IRQ No. in STM8 manual: 28 */
#define USART_R_OR_vector                    30 /* IRQ No. in STM8 manual: 28 */
#define USART_R_PE_vector                    30 /* IRQ No. in STM8 manual: 28 */
#define USART_R_RXNE_vector                  30 /* IRQ No. in STM8 manual: 28 */
#define I2C_ADD10_vector                     31 /* IRQ No. in STM8 manual: 29 */
#define I2C_ADDR_vector                      31 /* IRQ No. in STM8 manual: 29 */
#define I2C_AF_vector                        31 /* IRQ No. in STM8 manual: 29 */
#define I2C_ARLO_vector                      31 /* IRQ No. in STM8 manual: 29 */
#define I2C_BERR_vector                      31 /* IRQ No. in STM8 manual: 29 */
#define I2C_BTF_vector                       31 /* IRQ No. in STM8 manual: 29 */
#define I2C_OVR_vector                       31 /* IRQ No. in STM8 manual: 29 */
#define I2C_RXNE_vector                      31 /* IRQ No. in STM8 manual: 29 */
#define I2C_SB_vector                        31 /* IRQ No. in STM8 manual: 29 */
#define I2C_STOPF_vector                     31 /* IRQ No. in STM8 manual: 29 */
#define I2C_TXE_vector                       31 /* IRQ No. in STM8 manual: 29 */
#define I2C_WUFH_vector                      31 /* IRQ No. in STM8 manual: 29 */

#ifdef __IAR_SYSTEMS_ICC__
#pragma language=restore
#endif

#endif    /* __IOSTM8L101F2_H__ */

/*----------------------------------------------
 *      End of file
 *--------------------------------------------*/
