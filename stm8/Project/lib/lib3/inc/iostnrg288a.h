/*-------------------------------------------------------------------------
 *      STM8 definitions of SFR registers
 *
 *      Used with STM8 IAR C/C++ Compiler and Assembler.
 *
 *      Copyright 2017 IAR Systems AB.
 *
 *-----------------------------------------------------------------------*/

#ifndef __IOSTNRG288A_H__
#define __IOSTNRG288A_H__

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
#define ROP_ADDR         0x4800
#define UCB_ADDR         0x4801
#define nUCB_ADDR        0x4802
#define GENCFG_ADDR      0x4803
#define nGENCFG_ADDR     0x4804
#define MISCUOPT_ADDR    0x4805
#define nMISCUOPT_ADDR   0x4806
#define CLKCTL_ADDR      0x4807
#define nCLKCTL_ADDR     0x4808
#define HSESTAB_ADDR     0x4809
#define nHSESTAB_ADDR    0x480a
#define ENHFEAT_ADDR     0x480b
#define nENHFEAT_ADDR    0x480c
#define WAITSTATE_ADDR   0x480d
#define nWAITSTATE_ADDR  0x480e
#define AFR_IOMXP0_ADDR  0x480f
#define nAFR_IOMXP0_ADDR 0x4810
#define AFR_IOMXP1_ADDR  0x4811
#define nAFR_IOMXP1_ADDR 0x4812
#define AFR_IOMXP2_ADDR  0x4813
#define nAFR_IOMXP2_ADDR 0x4814
#define MSC_OPT0_ADDR    0x4815
#define nMSC_OPT0_ADDR   0x4816
#define OPTBL_ADDR       0x487e
#define nOPTBL_ADDR      0x487f

#define ROP_DECL         OPTION_BYTE_ATTRIBUTES unsigned char ROP         @ ROP_ADDR
#define UCB_DECL         OPTION_BYTE_ATTRIBUTES unsigned char UCB         @ UCB_ADDR
#define nUCB_DECL        OPTION_BYTE_ATTRIBUTES unsigned char nUCB        @ nUCB_ADDR
#define GENCFG_DECL      OPTION_BYTE_ATTRIBUTES unsigned char GENCFG      @ GENCFG_ADDR
#define nGENCFG_DECL     OPTION_BYTE_ATTRIBUTES unsigned char nGENCFG     @ nGENCFG_ADDR
#define MISCUOPT_DECL    OPTION_BYTE_ATTRIBUTES unsigned char MISCUOPT    @ MISCUOPT_ADDR
#define nMISCUOPT_DECL   OPTION_BYTE_ATTRIBUTES unsigned char nMISCUOPT   @ nMISCUOPT_ADDR
#define CLKCTL_DECL      OPTION_BYTE_ATTRIBUTES unsigned char CLKCTL      @ CLKCTL_ADDR
#define nCLKCTL_DECL     OPTION_BYTE_ATTRIBUTES unsigned char nCLKCTL     @ nCLKCTL_ADDR
#define HSESTAB_DECL     OPTION_BYTE_ATTRIBUTES unsigned char HSESTAB     @ HSESTAB_ADDR
#define nHSESTAB_DECL    OPTION_BYTE_ATTRIBUTES unsigned char nHSESTAB    @ nHSESTAB_ADDR
#define ENHFEAT_DECL     OPTION_BYTE_ATTRIBUTES unsigned char ENHFEAT     @ ENHFEAT_ADDR
#define nENHFEAT_DECL    OPTION_BYTE_ATTRIBUTES unsigned char nENHFEAT    @ nENHFEAT_ADDR
#define WAITSTATE_DECL   OPTION_BYTE_ATTRIBUTES unsigned char WAITSTATE   @ WAITSTATE_ADDR
#define nWAITSTATE_DECL  OPTION_BYTE_ATTRIBUTES unsigned char nWAITSTATE  @ nWAITSTATE_ADDR
#define AFR_IOMXP0_DECL  OPTION_BYTE_ATTRIBUTES unsigned char AFR_IOMXP0  @ AFR_IOMXP0_ADDR
#define nAFR_IOMXP0_DECL OPTION_BYTE_ATTRIBUTES unsigned char nAFR_IOMXP0 @ nAFR_IOMXP0_ADDR
#define AFR_IOMXP1_DECL  OPTION_BYTE_ATTRIBUTES unsigned char AFR_IOMXP1  @ AFR_IOMXP1_ADDR
#define nAFR_IOMXP1_DECL OPTION_BYTE_ATTRIBUTES unsigned char nAFR_IOMXP1 @ nAFR_IOMXP1_ADDR
#define AFR_IOMXP2_DECL  OPTION_BYTE_ATTRIBUTES unsigned char AFR_IOMXP2  @ AFR_IOMXP2_ADDR
#define nAFR_IOMXP2_DECL OPTION_BYTE_ATTRIBUTES unsigned char nAFR_IOMXP2 @ nAFR_IOMXP2_ADDR
#define MSC_OPT0_DECL    OPTION_BYTE_ATTRIBUTES unsigned char MSC_OPT0    @ MSC_OPT0_ADDR
#define nMSC_OPT0_DECL   OPTION_BYTE_ATTRIBUTES unsigned char nMSC_OPT0   @ nMSC_OPT0_ADDR
#define OPTBL_DECL       OPTION_BYTE_ATTRIBUTES unsigned char OPTBL       @ OPTBL_ADDR
#define nOPTBL_DECL      OPTION_BYTE_ATTRIBUTES unsigned char nOPTBL      @ nOPTBL_ADDR


/*-------------------------------------------------------------------------
 *      Port 0 Registers register definitions
 *-----------------------------------------------------------------------*/
/* Port 0 output register */
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
} __BITS_P0_ODR;
#endif
__IO_REG8_BIT(P0_ODR,      0x5000, __READ_WRITE, __BITS_P0_ODR);

/* Port 0 input register */
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
} __BITS_P0_IDR;
#endif
__IO_REG8_BIT(P0_IDR,      0x5001, __READ, __BITS_P0_IDR);

/* Port 0 data direction register */
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
} __BITS_P0_DDR;
#endif
__IO_REG8_BIT(P0_DDR,      0x5002, __READ_WRITE, __BITS_P0_DDR);

/* Port 0 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CR1_0       : 1;
  unsigned char CR1_1       : 1;
  unsigned char CR1_2       : 1;
  unsigned char CR1_3       : 1;
  unsigned char CR1_4       : 1;
  unsigned char CR1_5       : 1;
  unsigned char CR1_6       : 1;
  unsigned char CR1_7       : 1;
} __BITS_P0_CR1;
#endif
__IO_REG8_BIT(P0_CR1,      0x5003, __READ_WRITE, __BITS_P0_CR1);

/* Port 0 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CR2_0       : 1;
  unsigned char CR2_1       : 1;
  unsigned char CR2_2       : 1;
  unsigned char CR2_3       : 1;
  unsigned char CR2_4       : 1;
  unsigned char CR2_5       : 1;
  unsigned char CR2_6       : 1;
  unsigned char CR2_7       : 1;
} __BITS_P0_CR2;
#endif
__IO_REG8_BIT(P0_CR2,      0x5004, __READ_WRITE, __BITS_P0_CR2);


/*-------------------------------------------------------------------------
 *      Port 0 Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define P0_ODR_ODR0              P0_ODR_bit.ODR0
#define P0_ODR_ODR1              P0_ODR_bit.ODR1
#define P0_ODR_ODR2              P0_ODR_bit.ODR2
#define P0_ODR_ODR3              P0_ODR_bit.ODR3
#define P0_ODR_ODR4              P0_ODR_bit.ODR4
#define P0_ODR_ODR5              P0_ODR_bit.ODR5
#define P0_ODR_ODR6              P0_ODR_bit.ODR6
#define P0_ODR_ODR7              P0_ODR_bit.ODR7

#define P0_IDR_IDR0              P0_IDR_bit.IDR0
#define P0_IDR_IDR1              P0_IDR_bit.IDR1
#define P0_IDR_IDR2              P0_IDR_bit.IDR2
#define P0_IDR_IDR3              P0_IDR_bit.IDR3
#define P0_IDR_IDR4              P0_IDR_bit.IDR4
#define P0_IDR_IDR5              P0_IDR_bit.IDR5
#define P0_IDR_IDR6              P0_IDR_bit.IDR6
#define P0_IDR_IDR7              P0_IDR_bit.IDR7

#define P0_DDR_DDR0              P0_DDR_bit.DDR0
#define P0_DDR_DDR1              P0_DDR_bit.DDR1
#define P0_DDR_DDR2              P0_DDR_bit.DDR2
#define P0_DDR_DDR3              P0_DDR_bit.DDR3
#define P0_DDR_DDR4              P0_DDR_bit.DDR4
#define P0_DDR_DDR5              P0_DDR_bit.DDR5
#define P0_DDR_DDR6              P0_DDR_bit.DDR6
#define P0_DDR_DDR7              P0_DDR_bit.DDR7

#define P0_CR1_CR1_0             P0_CR1_bit.CR1_0
#define P0_CR1_CR1_1             P0_CR1_bit.CR1_1
#define P0_CR1_CR1_2             P0_CR1_bit.CR1_2
#define P0_CR1_CR1_3             P0_CR1_bit.CR1_3
#define P0_CR1_CR1_4             P0_CR1_bit.CR1_4
#define P0_CR1_CR1_5             P0_CR1_bit.CR1_5
#define P0_CR1_CR1_6             P0_CR1_bit.CR1_6
#define P0_CR1_CR1_7             P0_CR1_bit.CR1_7

#define P0_CR2_CR2_0             P0_CR2_bit.CR2_0
#define P0_CR2_CR2_1             P0_CR2_bit.CR2_1
#define P0_CR2_CR2_2             P0_CR2_bit.CR2_2
#define P0_CR2_CR2_3             P0_CR2_bit.CR2_3
#define P0_CR2_CR2_4             P0_CR2_bit.CR2_4
#define P0_CR2_CR2_5             P0_CR2_bit.CR2_5
#define P0_CR2_CR2_6             P0_CR2_bit.CR2_6
#define P0_CR2_CR2_7             P0_CR2_bit.CR2_7

#endif

/*-------------------------------------------------------------------------
 *      Port 0 Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_P0_ODR_ODR0         0x01
#define MASK_P0_ODR_ODR1         0x02
#define MASK_P0_ODR_ODR2         0x04
#define MASK_P0_ODR_ODR3         0x08
#define MASK_P0_ODR_ODR4         0x10
#define MASK_P0_ODR_ODR5         0x20
#define MASK_P0_ODR_ODR6         0x40
#define MASK_P0_ODR_ODR7         0x80

#define MASK_P0_IDR_IDR0         0x01
#define MASK_P0_IDR_IDR1         0x02
#define MASK_P0_IDR_IDR2         0x04
#define MASK_P0_IDR_IDR3         0x08
#define MASK_P0_IDR_IDR4         0x10
#define MASK_P0_IDR_IDR5         0x20
#define MASK_P0_IDR_IDR6         0x40
#define MASK_P0_IDR_IDR7         0x80

#define MASK_P0_DDR_DDR0         0x01
#define MASK_P0_DDR_DDR1         0x02
#define MASK_P0_DDR_DDR2         0x04
#define MASK_P0_DDR_DDR3         0x08
#define MASK_P0_DDR_DDR4         0x10
#define MASK_P0_DDR_DDR5         0x20
#define MASK_P0_DDR_DDR6         0x40
#define MASK_P0_DDR_DDR7         0x80

#define MASK_P0_CR1_CR1_0        0x01
#define MASK_P0_CR1_CR1_1        0x02
#define MASK_P0_CR1_CR1_2        0x04
#define MASK_P0_CR1_CR1_3        0x08
#define MASK_P0_CR1_CR1_4        0x10
#define MASK_P0_CR1_CR1_5        0x20
#define MASK_P0_CR1_CR1_6        0x40
#define MASK_P0_CR1_CR1_7        0x80

#define MASK_P0_CR2_CR2_0        0x01
#define MASK_P0_CR2_CR2_1        0x02
#define MASK_P0_CR2_CR2_2        0x04
#define MASK_P0_CR2_CR2_3        0x08
#define MASK_P0_CR2_CR2_4        0x10
#define MASK_P0_CR2_CR2_5        0x20
#define MASK_P0_CR2_CR2_6        0x40
#define MASK_P0_CR2_CR2_7        0x80


/*-------------------------------------------------------------------------
 *      Port 1 Registers register definitions
 *-----------------------------------------------------------------------*/
/* Port 1 output register */
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
} __BITS_P1_ODR;
#endif
__IO_REG8_BIT(P1_ODR,      0x5005, __READ_WRITE, __BITS_P1_ODR);

/* Port 1 input register */
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
} __BITS_P1_IDR;
#endif
__IO_REG8_BIT(P1_IDR,      0x5006, __READ, __BITS_P1_IDR);

/* Port 1 data direction register */
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
} __BITS_P1_DDR;
#endif
__IO_REG8_BIT(P1_DDR,      0x5007, __READ_WRITE, __BITS_P1_DDR);

/* Port 1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CR1_0       : 1;
  unsigned char CR1_1       : 1;
  unsigned char CR1_2       : 1;
  unsigned char CR1_3       : 1;
  unsigned char CR1_4       : 1;
  unsigned char CR1_5       : 1;
  unsigned char CR1_6       : 1;
  unsigned char CR1_7       : 1;
} __BITS_P1_CR1;
#endif
__IO_REG8_BIT(P1_CR1,      0x5008, __READ_WRITE, __BITS_P1_CR1);

/* Port 1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CR2_0       : 1;
  unsigned char CR2_1       : 1;
  unsigned char CR2_2       : 1;
  unsigned char CR2_3       : 1;
  unsigned char CR2_4       : 1;
  unsigned char CR2_5       : 1;
  unsigned char CR2_6       : 1;
  unsigned char CR2_7       : 1;
} __BITS_P1_CR2;
#endif
__IO_REG8_BIT(P1_CR2,      0x5009, __READ_WRITE, __BITS_P1_CR2);


/*-------------------------------------------------------------------------
 *      Port 1 Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define P1_ODR_ODR0              P1_ODR_bit.ODR0
#define P1_ODR_ODR1              P1_ODR_bit.ODR1
#define P1_ODR_ODR2              P1_ODR_bit.ODR2
#define P1_ODR_ODR3              P1_ODR_bit.ODR3
#define P1_ODR_ODR4              P1_ODR_bit.ODR4
#define P1_ODR_ODR5              P1_ODR_bit.ODR5
#define P1_ODR_ODR6              P1_ODR_bit.ODR6
#define P1_ODR_ODR7              P1_ODR_bit.ODR7

#define P1_IDR_IDR0              P1_IDR_bit.IDR0
#define P1_IDR_IDR1              P1_IDR_bit.IDR1
#define P1_IDR_IDR2              P1_IDR_bit.IDR2
#define P1_IDR_IDR3              P1_IDR_bit.IDR3
#define P1_IDR_IDR4              P1_IDR_bit.IDR4
#define P1_IDR_IDR5              P1_IDR_bit.IDR5
#define P1_IDR_IDR6              P1_IDR_bit.IDR6
#define P1_IDR_IDR7              P1_IDR_bit.IDR7

#define P1_DDR_DDR0              P1_DDR_bit.DDR0
#define P1_DDR_DDR1              P1_DDR_bit.DDR1
#define P1_DDR_DDR2              P1_DDR_bit.DDR2
#define P1_DDR_DDR3              P1_DDR_bit.DDR3
#define P1_DDR_DDR4              P1_DDR_bit.DDR4
#define P1_DDR_DDR5              P1_DDR_bit.DDR5
#define P1_DDR_DDR6              P1_DDR_bit.DDR6
#define P1_DDR_DDR7              P1_DDR_bit.DDR7

#define P1_CR1_CR1_0             P1_CR1_bit.CR1_0
#define P1_CR1_CR1_1             P1_CR1_bit.CR1_1
#define P1_CR1_CR1_2             P1_CR1_bit.CR1_2
#define P1_CR1_CR1_3             P1_CR1_bit.CR1_3
#define P1_CR1_CR1_4             P1_CR1_bit.CR1_4
#define P1_CR1_CR1_5             P1_CR1_bit.CR1_5
#define P1_CR1_CR1_6             P1_CR1_bit.CR1_6
#define P1_CR1_CR1_7             P1_CR1_bit.CR1_7

#define P1_CR2_CR2_0             P1_CR2_bit.CR2_0
#define P1_CR2_CR2_1             P1_CR2_bit.CR2_1
#define P1_CR2_CR2_2             P1_CR2_bit.CR2_2
#define P1_CR2_CR2_3             P1_CR2_bit.CR2_3
#define P1_CR2_CR2_4             P1_CR2_bit.CR2_4
#define P1_CR2_CR2_5             P1_CR2_bit.CR2_5
#define P1_CR2_CR2_6             P1_CR2_bit.CR2_6
#define P1_CR2_CR2_7             P1_CR2_bit.CR2_7

#endif

/*-------------------------------------------------------------------------
 *      Port 1 Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_P1_ODR_ODR0         0x01
#define MASK_P1_ODR_ODR1         0x02
#define MASK_P1_ODR_ODR2         0x04
#define MASK_P1_ODR_ODR3         0x08
#define MASK_P1_ODR_ODR4         0x10
#define MASK_P1_ODR_ODR5         0x20
#define MASK_P1_ODR_ODR6         0x40
#define MASK_P1_ODR_ODR7         0x80

#define MASK_P1_IDR_IDR0         0x01
#define MASK_P1_IDR_IDR1         0x02
#define MASK_P1_IDR_IDR2         0x04
#define MASK_P1_IDR_IDR3         0x08
#define MASK_P1_IDR_IDR4         0x10
#define MASK_P1_IDR_IDR5         0x20
#define MASK_P1_IDR_IDR6         0x40
#define MASK_P1_IDR_IDR7         0x80

#define MASK_P1_DDR_DDR0         0x01
#define MASK_P1_DDR_DDR1         0x02
#define MASK_P1_DDR_DDR2         0x04
#define MASK_P1_DDR_DDR3         0x08
#define MASK_P1_DDR_DDR4         0x10
#define MASK_P1_DDR_DDR5         0x20
#define MASK_P1_DDR_DDR6         0x40
#define MASK_P1_DDR_DDR7         0x80

#define MASK_P1_CR1_CR1_0        0x01
#define MASK_P1_CR1_CR1_1        0x02
#define MASK_P1_CR1_CR1_2        0x04
#define MASK_P1_CR1_CR1_3        0x08
#define MASK_P1_CR1_CR1_4        0x10
#define MASK_P1_CR1_CR1_5        0x20
#define MASK_P1_CR1_CR1_6        0x40
#define MASK_P1_CR1_CR1_7        0x80

#define MASK_P1_CR2_CR2_0        0x01
#define MASK_P1_CR2_CR2_1        0x02
#define MASK_P1_CR2_CR2_2        0x04
#define MASK_P1_CR2_CR2_3        0x08
#define MASK_P1_CR2_CR2_4        0x10
#define MASK_P1_CR2_CR2_5        0x20
#define MASK_P1_CR2_CR2_6        0x40
#define MASK_P1_CR2_CR2_7        0x80


/*-------------------------------------------------------------------------
 *      MSC Registers register definitions
 *-----------------------------------------------------------------------*/
/* Control register for P0-0 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP00;
#endif
__IO_REG8_BIT(MSC_CFGP00,  0x5010, __READ_WRITE, __BITS_MSC_CFGP00);

/* Control register for P0-1 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP01;
#endif
__IO_REG8_BIT(MSC_CFGP01,  0x5011, __READ_WRITE, __BITS_MSC_CFGP01);

/* Control register for P0-2 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP02;
#endif
__IO_REG8_BIT(MSC_CFGP02,  0x5012, __READ_WRITE, __BITS_MSC_CFGP02);

/* Control register for P0-3 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP03;
#endif
__IO_REG8_BIT(MSC_CFGP03,  0x5013, __READ_WRITE, __BITS_MSC_CFGP03);

/* Control register for P0-4 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP04;
#endif
__IO_REG8_BIT(MSC_CFGP04,  0x5014, __READ_WRITE, __BITS_MSC_CFGP04);

/* Control register for P0-5 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP05;
#endif
__IO_REG8_BIT(MSC_CFGP05,  0x5015, __READ_WRITE, __BITS_MSC_CFGP05);

/* Control register for AUXTIM input line */
__IO_REG8    (MSC_CFGP15,  0x5036, __READ_WRITE);
/* Control register for P2-0 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP20;
#endif
__IO_REG8_BIT(MSC_CFGP20,  0x5016, __READ_WRITE, __BITS_MSC_CFGP20);

/* Control register for P2-1 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP21;
#endif
__IO_REG8_BIT(MSC_CFGP21,  0x5017, __READ_WRITE, __BITS_MSC_CFGP21);

/* Control register for P2-2 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP22;
#endif
__IO_REG8_BIT(MSC_CFGP22,  0x5018, __READ_WRITE, __BITS_MSC_CFGP22);

/* Control register for P2-3 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP23;
#endif
__IO_REG8_BIT(MSC_CFGP23,  0x5019, __READ_WRITE, __BITS_MSC_CFGP23);

/* Control register for P2-4 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP24;
#endif
__IO_REG8_BIT(MSC_CFGP24,  0x501A, __READ_WRITE, __BITS_MSC_CFGP24);

/* Control register for P2-5 input line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INT_LEV     : 1;
  unsigned char INT_SEL0    : 1;
  unsigned char INT_SEL1    : 1;
  unsigned char INT_ENB     : 1;
  unsigned char INT_TYPE    : 1;
} __BITS_MSC_CFGP25;
#endif
__IO_REG8_BIT(MSC_CFGP25,  0x501B, __READ_WRITE, __BITS_MSC_CFGP25);

/* Port 0 Status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BIT_0_INT   : 1;
  unsigned char BIT_1_INT   : 1;
  unsigned char BIT_2_INT   : 1;
  unsigned char BIT_3_INT   : 1;
  unsigned char BIT_4_INT   : 1;
  unsigned char BIT_5_INT   : 1;
} __BITS_MSC_STSP0;
#endif
__IO_REG8_BIT(MSC_STSP0,   0x501C, __READ_WRITE, __BITS_MSC_STSP0);

/* AUXTIM status register */
__IO_REG8    (MSC_STSP1,   0x5037, __READ_WRITE);
/* Port 2 Status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BIT_0_INT   : 1;
  unsigned char BIT_1_INT   : 1;
  unsigned char BIT_2_INT   : 1;
  unsigned char BIT_3_INT   : 1;
  unsigned char BIT_4_INT   : 1;
  unsigned char BIT_5_INT   : 1;
} __BITS_MSC_STSP2;
#endif
__IO_REG8_BIT(MSC_STSP2,   0x501D, __READ_WRITE, __BITS_MSC_STSP2);

/* Miscellaneous indirect address */
__IO_REG8    (MSC_IDXADD,  0x503C, __READ_WRITE);
/* Miscellaneous indirect data */
__IO_REG8    (MSC_IDXDAT,  0x503D, __READ_WRITE);
/* Port 2 inputs read register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_IN     : 6;
} __BITS_MSC_INPP2;
#endif
__IO_REG8_BIT(MSC_INPP2,   0x501E, __READ, __BITS_MSC_INPP2);

/* Enable DACs, CP3 sel */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DAC0_EN     : 1;
  unsigned char DAC1_EN     : 1;
  unsigned char DAC2_EN     : 1;
  unsigned char DAC3_EN     : 1;
  unsigned char CP3_EN      : 1;
  unsigned char CP3_SEL     : 1;
  unsigned char             : 1;
  unsigned char DACBIAS_EN  : 1;
} __BITS_MSC_DACCTR;
#endif
__IO_REG8_BIT(MSC_DACCTR,  0x5020, __READ_WRITE, __BITS_MSC_DACCTR);

/* Four bit input value for DAC 0 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DAC_IN0     : 4;
} __BITS_MSC_DACIN0;
#endif
__IO_REG8_BIT(MSC_DACIN0,  0x5021, __READ_WRITE, __BITS_MSC_DACIN0);

/* Four bit input value for DAC 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DAC_IN1     : 4;
} __BITS_MSC_DACIN1;
#endif
__IO_REG8_BIT(MSC_DACIN1,  0x5022, __READ_WRITE, __BITS_MSC_DACIN1);

/* Four bit input value for DAC 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DAC_IN2     : 4;
} __BITS_MSC_DACIN2;
#endif
__IO_REG8_BIT(MSC_DACIN2,  0x5023, __READ_WRITE, __BITS_MSC_DACIN2);

/* Four bit input value for DAC 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DAC_IN3     : 4;
} __BITS_MSC_DACIN3;
#endif
__IO_REG8_BIT(MSC_DACIN3,  0x5024, __READ_WRITE, __BITS_MSC_DACIN3);

/* SMED0,1 global configuration reg */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMED0_GLBCONF: 4;
  unsigned char SMED1_GLBCONF: 4;
} __BITS_MSC_SMDCFG01;
#endif
__IO_REG8_BIT(MSC_SMDCFG01, 0x5025, __READ_WRITE, __BITS_MSC_SMDCFG01);

/* SMED2,3 global configuration reg */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMED2_GLBCONF: 4;
  unsigned char SMED3_GLBCONF: 4;
} __BITS_MSC_SMDCFG23;
#endif
__IO_REG8_BIT(MSC_SMDCFG23, 0x5026, __READ_WRITE, __BITS_MSC_SMDCFG23);

/* SMED4,5 global configuration reg */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMED4_GLBCONF: 4;
  unsigned char SMED5_GLBCONF: 4;
} __BITS_MSC_SMDCFG45;
#endif
__IO_REG8_BIT(MSC_SMDCFG45, 0x5027, __READ_WRITE, __BITS_MSC_SMDCFG45);

/* Software events for all SMED */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SW0         : 1;
  unsigned char SW1         : 1;
  unsigned char SW2         : 1;
  unsigned char SW3         : 1;
  unsigned char SW4         : 1;
  unsigned char SW5         : 1;
} __BITS_MSC_SMSWEV;
#endif
__IO_REG8_BIT(MSC_SMSWEV,  0x5028, __READ_WRITE, __BITS_MSC_SMSWEV);

/* Unlock controls for SMED */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USE_UNLOCK_01: 1;
  unsigned char USE_UNLOCK_23: 1;
  unsigned char USE_UNLOCK_45: 1;
  unsigned char UNLOCK_01   : 1;
  unsigned char UNLOCK_23   : 1;
  unsigned char UNLOCK_45   : 1;
} __BITS_MSC_SMULOCK;
#endif
__IO_REG8_BIT(MSC_SMULOCK, 0x5029, __READ_WRITE, __BITS_MSC_SMULOCK);

/* Connect Box selection for SMED0 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONB_S0_00  : 1;
  unsigned char CONB_S0_01  : 1;
  unsigned char CONB_S0_10  : 1;
  unsigned char CONB_S0_11  : 1;
  unsigned char CONB_S0_20  : 1;
  unsigned char CONB_S0_21  : 1;
} __BITS_MSC_CBOXS0;
#endif
__IO_REG8_BIT(MSC_CBOXS0,  0x502A, __READ_WRITE, __BITS_MSC_CBOXS0);

/* Connect Box selection for SMED1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONB_S1_00  : 1;
  unsigned char CONB_S1_01  : 1;
  unsigned char CONB_S1_10  : 1;
  unsigned char CONB_S1_11  : 1;
  unsigned char CONB_S1_20  : 1;
  unsigned char CONB_S1_21  : 1;
} __BITS_MSC_CBOXS1;
#endif
__IO_REG8_BIT(MSC_CBOXS1,  0x502B, __READ_WRITE, __BITS_MSC_CBOXS1);

/* Connect Box selection for SMED2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONB_S2_00  : 1;
  unsigned char CONB_S2_01  : 1;
  unsigned char CONB_S2_10  : 1;
  unsigned char CONB_S2_11  : 1;
  unsigned char CONB_S2_20  : 1;
  unsigned char CONB_S2_21  : 1;
} __BITS_MSC_CBOXS2;
#endif
__IO_REG8_BIT(MSC_CBOXS2,  0x502C, __READ_WRITE, __BITS_MSC_CBOXS2);

/* Connect Box selection for SMED3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONB_S3_00  : 1;
  unsigned char CONB_S3_01  : 1;
  unsigned char CONB_S3_10  : 1;
  unsigned char CONB_S3_11  : 1;
  unsigned char CONB_S3_20  : 1;
  unsigned char CONB_S3_21  : 1;
} __BITS_MSC_CBOXS3;
#endif
__IO_REG8_BIT(MSC_CBOXS3,  0x502D, __READ_WRITE, __BITS_MSC_CBOXS3);

/* Connect Box selection for SMED4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONB_S4_00  : 1;
  unsigned char CONB_S4_01  : 1;
  unsigned char CONB_S4_10  : 1;
  unsigned char CONB_S4_11  : 1;
  unsigned char CONB_S4_20  : 1;
  unsigned char CONB_S4_21  : 1;
} __BITS_MSC_CBOXS4;
#endif
__IO_REG8_BIT(MSC_CBOXS4,  0x502E, __READ_WRITE, __BITS_MSC_CBOXS4);

/* Connect Box selection for SMED5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONB_S5_00  : 1;
  unsigned char CONB_S5_01  : 1;
  unsigned char CONB_S5_10  : 1;
  unsigned char CONB_S5_11  : 1;
  unsigned char CONB_S5_20  : 1;
  unsigned char CONB_S5_21  : 1;
} __BITS_MSC_CBOXS5;
#endif
__IO_REG8_BIT(MSC_CBOXS5,  0x502F, __READ_WRITE, __BITS_MSC_CBOXS5);

/* I/O mux Port0 P0 SMED FSM state */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMD_FSML0   : 3;
  unsigned char SEL_FSMEN0  : 1;
  unsigned char SMD_FSML1   : 3;
  unsigned char SEL_FSMEN1  : 1;
} __BITS_MSC_IOMXSMD;
#endif
__IO_REG8_BIT(MSC_IOMXSMD, 0x5030, __READ_WRITE, __BITS_MSC_IOMXSMD);

/* Port 3 inputs read register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char COMP0       : 1;
  unsigned char COMP1       : 1;
  unsigned char COMP2       : 1;
  unsigned char COMP3       : 1;
} __BITS_MSC_INPP3;
#endif
__IO_REG8_BIT(MSC_INPP3,   0x5039, __READ, __BITS_MSC_INPP3);

/* I/O mux Port0 (GPIO0s) signals */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEL_P010    : 2;
  unsigned char SEL_P032    : 2;
  unsigned char SEL_P054    : 2;
} __BITS_MSC_IOMXP0;
#endif
__IO_REG8_BIT(MSC_IOMXP0,  0x503A, __READ_WRITE, __BITS_MSC_IOMXP0);

/* I/O mux Port1 (PWMs/GPIO1s) signals */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEL_P10     : 1;
  unsigned char SEL_P11     : 1;
  unsigned char SEL_P12     : 1;
  unsigned char SEL_P13     : 1;
  unsigned char SEL_P14     : 1;
  unsigned char SEL_P15     : 1;
} __BITS_MSC_IOMXP1;
#endif
__IO_REG8_BIT(MSC_IOMXP1,  0x503B, __READ_WRITE, __BITS_MSC_IOMXP1);


/*-------------------------------------------------------------------------
 *      MSC Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define MSC_CFGP00_INT_LEV       MSC_CFGP00_bit.INT_LEV
#define MSC_CFGP00_INT_SEL0      MSC_CFGP00_bit.INT_SEL0
#define MSC_CFGP00_INT_SEL1      MSC_CFGP00_bit.INT_SEL1
#define MSC_CFGP00_INT_ENB       MSC_CFGP00_bit.INT_ENB
#define MSC_CFGP00_INT_TYPE      MSC_CFGP00_bit.INT_TYPE

#define MSC_CFGP01_INT_LEV       MSC_CFGP01_bit.INT_LEV
#define MSC_CFGP01_INT_SEL0      MSC_CFGP01_bit.INT_SEL0
#define MSC_CFGP01_INT_SEL1      MSC_CFGP01_bit.INT_SEL1
#define MSC_CFGP01_INT_ENB       MSC_CFGP01_bit.INT_ENB
#define MSC_CFGP01_INT_TYPE      MSC_CFGP01_bit.INT_TYPE

#define MSC_CFGP02_INT_LEV       MSC_CFGP02_bit.INT_LEV
#define MSC_CFGP02_INT_SEL0      MSC_CFGP02_bit.INT_SEL0
#define MSC_CFGP02_INT_SEL1      MSC_CFGP02_bit.INT_SEL1
#define MSC_CFGP02_INT_ENB       MSC_CFGP02_bit.INT_ENB
#define MSC_CFGP02_INT_TYPE      MSC_CFGP02_bit.INT_TYPE

#define MSC_CFGP03_INT_LEV       MSC_CFGP03_bit.INT_LEV
#define MSC_CFGP03_INT_SEL0      MSC_CFGP03_bit.INT_SEL0
#define MSC_CFGP03_INT_SEL1      MSC_CFGP03_bit.INT_SEL1
#define MSC_CFGP03_INT_ENB       MSC_CFGP03_bit.INT_ENB
#define MSC_CFGP03_INT_TYPE      MSC_CFGP03_bit.INT_TYPE

#define MSC_CFGP04_INT_LEV       MSC_CFGP04_bit.INT_LEV
#define MSC_CFGP04_INT_SEL0      MSC_CFGP04_bit.INT_SEL0
#define MSC_CFGP04_INT_SEL1      MSC_CFGP04_bit.INT_SEL1
#define MSC_CFGP04_INT_ENB       MSC_CFGP04_bit.INT_ENB
#define MSC_CFGP04_INT_TYPE      MSC_CFGP04_bit.INT_TYPE

#define MSC_CFGP05_INT_LEV       MSC_CFGP05_bit.INT_LEV
#define MSC_CFGP05_INT_SEL0      MSC_CFGP05_bit.INT_SEL0
#define MSC_CFGP05_INT_SEL1      MSC_CFGP05_bit.INT_SEL1
#define MSC_CFGP05_INT_ENB       MSC_CFGP05_bit.INT_ENB
#define MSC_CFGP05_INT_TYPE      MSC_CFGP05_bit.INT_TYPE

#define MSC_CFGP20_INT_LEV       MSC_CFGP20_bit.INT_LEV
#define MSC_CFGP20_INT_SEL0      MSC_CFGP20_bit.INT_SEL0
#define MSC_CFGP20_INT_SEL1      MSC_CFGP20_bit.INT_SEL1
#define MSC_CFGP20_INT_ENB       MSC_CFGP20_bit.INT_ENB
#define MSC_CFGP20_INT_TYPE      MSC_CFGP20_bit.INT_TYPE

#define MSC_CFGP21_INT_LEV       MSC_CFGP21_bit.INT_LEV
#define MSC_CFGP21_INT_SEL0      MSC_CFGP21_bit.INT_SEL0
#define MSC_CFGP21_INT_SEL1      MSC_CFGP21_bit.INT_SEL1
#define MSC_CFGP21_INT_ENB       MSC_CFGP21_bit.INT_ENB
#define MSC_CFGP21_INT_TYPE      MSC_CFGP21_bit.INT_TYPE

#define MSC_CFGP22_INT_LEV       MSC_CFGP22_bit.INT_LEV
#define MSC_CFGP22_INT_SEL0      MSC_CFGP22_bit.INT_SEL0
#define MSC_CFGP22_INT_SEL1      MSC_CFGP22_bit.INT_SEL1
#define MSC_CFGP22_INT_ENB       MSC_CFGP22_bit.INT_ENB
#define MSC_CFGP22_INT_TYPE      MSC_CFGP22_bit.INT_TYPE

#define MSC_CFGP23_INT_LEV       MSC_CFGP23_bit.INT_LEV
#define MSC_CFGP23_INT_SEL0      MSC_CFGP23_bit.INT_SEL0
#define MSC_CFGP23_INT_SEL1      MSC_CFGP23_bit.INT_SEL1
#define MSC_CFGP23_INT_ENB       MSC_CFGP23_bit.INT_ENB
#define MSC_CFGP23_INT_TYPE      MSC_CFGP23_bit.INT_TYPE

#define MSC_CFGP24_INT_LEV       MSC_CFGP24_bit.INT_LEV
#define MSC_CFGP24_INT_SEL0      MSC_CFGP24_bit.INT_SEL0
#define MSC_CFGP24_INT_SEL1      MSC_CFGP24_bit.INT_SEL1
#define MSC_CFGP24_INT_ENB       MSC_CFGP24_bit.INT_ENB
#define MSC_CFGP24_INT_TYPE      MSC_CFGP24_bit.INT_TYPE

#define MSC_CFGP25_INT_LEV       MSC_CFGP25_bit.INT_LEV
#define MSC_CFGP25_INT_SEL0      MSC_CFGP25_bit.INT_SEL0
#define MSC_CFGP25_INT_SEL1      MSC_CFGP25_bit.INT_SEL1
#define MSC_CFGP25_INT_ENB       MSC_CFGP25_bit.INT_ENB
#define MSC_CFGP25_INT_TYPE      MSC_CFGP25_bit.INT_TYPE

#define MSC_STSP0_BIT_0_INT      MSC_STSP0_bit.BIT_0_INT
#define MSC_STSP0_BIT_1_INT      MSC_STSP0_bit.BIT_1_INT
#define MSC_STSP0_BIT_2_INT      MSC_STSP0_bit.BIT_2_INT
#define MSC_STSP0_BIT_3_INT      MSC_STSP0_bit.BIT_3_INT
#define MSC_STSP0_BIT_4_INT      MSC_STSP0_bit.BIT_4_INT
#define MSC_STSP0_BIT_5_INT      MSC_STSP0_bit.BIT_5_INT

#define MSC_STSP2_BIT_0_INT      MSC_STSP2_bit.BIT_0_INT
#define MSC_STSP2_BIT_1_INT      MSC_STSP2_bit.BIT_1_INT
#define MSC_STSP2_BIT_2_INT      MSC_STSP2_bit.BIT_2_INT
#define MSC_STSP2_BIT_3_INT      MSC_STSP2_bit.BIT_3_INT
#define MSC_STSP2_BIT_4_INT      MSC_STSP2_bit.BIT_4_INT
#define MSC_STSP2_BIT_5_INT      MSC_STSP2_bit.BIT_5_INT

#define MSC_INPP2_DATA_IN        MSC_INPP2_bit.DATA_IN

#define MSC_DACCTR_DAC0_EN       MSC_DACCTR_bit.DAC0_EN
#define MSC_DACCTR_DAC1_EN       MSC_DACCTR_bit.DAC1_EN
#define MSC_DACCTR_DAC2_EN       MSC_DACCTR_bit.DAC2_EN
#define MSC_DACCTR_DAC3_EN       MSC_DACCTR_bit.DAC3_EN
#define MSC_DACCTR_CP3_EN        MSC_DACCTR_bit.CP3_EN
#define MSC_DACCTR_CP3_SEL       MSC_DACCTR_bit.CP3_SEL
#define MSC_DACCTR_DACBIAS_EN    MSC_DACCTR_bit.DACBIAS_EN

#define MSC_DACIN0_DAC_IN0       MSC_DACIN0_bit.DAC_IN0

#define MSC_DACIN1_DAC_IN1       MSC_DACIN1_bit.DAC_IN1

#define MSC_DACIN2_DAC_IN2       MSC_DACIN2_bit.DAC_IN2

#define MSC_DACIN3_DAC_IN3       MSC_DACIN3_bit.DAC_IN3

#define MSC_SMDCFG01_SMED0_GLBCONF MSC_SMDCFG01_bit.SMED0_GLBCONF
#define MSC_SMDCFG01_SMED1_GLBCONF MSC_SMDCFG01_bit.SMED1_GLBCONF

#define MSC_SMDCFG23_SMED2_GLBCONF MSC_SMDCFG23_bit.SMED2_GLBCONF
#define MSC_SMDCFG23_SMED3_GLBCONF MSC_SMDCFG23_bit.SMED3_GLBCONF

#define MSC_SMDCFG45_SMED4_GLBCONF MSC_SMDCFG45_bit.SMED4_GLBCONF
#define MSC_SMDCFG45_SMED5_GLBCONF MSC_SMDCFG45_bit.SMED5_GLBCONF

#define MSC_SMSWEV_SW0           MSC_SMSWEV_bit.SW0
#define MSC_SMSWEV_SW1           MSC_SMSWEV_bit.SW1
#define MSC_SMSWEV_SW2           MSC_SMSWEV_bit.SW2
#define MSC_SMSWEV_SW3           MSC_SMSWEV_bit.SW3
#define MSC_SMSWEV_SW4           MSC_SMSWEV_bit.SW4
#define MSC_SMSWEV_SW5           MSC_SMSWEV_bit.SW5

#define MSC_SMULOCK_USE_UNLOCK_01 MSC_SMULOCK_bit.USE_UNLOCK_01
#define MSC_SMULOCK_USE_UNLOCK_23 MSC_SMULOCK_bit.USE_UNLOCK_23
#define MSC_SMULOCK_USE_UNLOCK_45 MSC_SMULOCK_bit.USE_UNLOCK_45
#define MSC_SMULOCK_UNLOCK_01    MSC_SMULOCK_bit.UNLOCK_01
#define MSC_SMULOCK_UNLOCK_23    MSC_SMULOCK_bit.UNLOCK_23
#define MSC_SMULOCK_UNLOCK_45    MSC_SMULOCK_bit.UNLOCK_45

#define MSC_CBOXS0_CONB_S0_00    MSC_CBOXS0_bit.CONB_S0_00
#define MSC_CBOXS0_CONB_S0_01    MSC_CBOXS0_bit.CONB_S0_01
#define MSC_CBOXS0_CONB_S0_10    MSC_CBOXS0_bit.CONB_S0_10
#define MSC_CBOXS0_CONB_S0_11    MSC_CBOXS0_bit.CONB_S0_11
#define MSC_CBOXS0_CONB_S0_20    MSC_CBOXS0_bit.CONB_S0_20
#define MSC_CBOXS0_CONB_S0_21    MSC_CBOXS0_bit.CONB_S0_21

#define MSC_CBOXS1_CONB_S1_00    MSC_CBOXS1_bit.CONB_S1_00
#define MSC_CBOXS1_CONB_S1_01    MSC_CBOXS1_bit.CONB_S1_01
#define MSC_CBOXS1_CONB_S1_10    MSC_CBOXS1_bit.CONB_S1_10
#define MSC_CBOXS1_CONB_S1_11    MSC_CBOXS1_bit.CONB_S1_11
#define MSC_CBOXS1_CONB_S1_20    MSC_CBOXS1_bit.CONB_S1_20
#define MSC_CBOXS1_CONB_S1_21    MSC_CBOXS1_bit.CONB_S1_21

#define MSC_CBOXS2_CONB_S2_00    MSC_CBOXS2_bit.CONB_S2_00
#define MSC_CBOXS2_CONB_S2_01    MSC_CBOXS2_bit.CONB_S2_01
#define MSC_CBOXS2_CONB_S2_10    MSC_CBOXS2_bit.CONB_S2_10
#define MSC_CBOXS2_CONB_S2_11    MSC_CBOXS2_bit.CONB_S2_11
#define MSC_CBOXS2_CONB_S2_20    MSC_CBOXS2_bit.CONB_S2_20
#define MSC_CBOXS2_CONB_S2_21    MSC_CBOXS2_bit.CONB_S2_21

#define MSC_CBOXS3_CONB_S3_00    MSC_CBOXS3_bit.CONB_S3_00
#define MSC_CBOXS3_CONB_S3_01    MSC_CBOXS3_bit.CONB_S3_01
#define MSC_CBOXS3_CONB_S3_10    MSC_CBOXS3_bit.CONB_S3_10
#define MSC_CBOXS3_CONB_S3_11    MSC_CBOXS3_bit.CONB_S3_11
#define MSC_CBOXS3_CONB_S3_20    MSC_CBOXS3_bit.CONB_S3_20
#define MSC_CBOXS3_CONB_S3_21    MSC_CBOXS3_bit.CONB_S3_21

#define MSC_CBOXS4_CONB_S4_00    MSC_CBOXS4_bit.CONB_S4_00
#define MSC_CBOXS4_CONB_S4_01    MSC_CBOXS4_bit.CONB_S4_01
#define MSC_CBOXS4_CONB_S4_10    MSC_CBOXS4_bit.CONB_S4_10
#define MSC_CBOXS4_CONB_S4_11    MSC_CBOXS4_bit.CONB_S4_11
#define MSC_CBOXS4_CONB_S4_20    MSC_CBOXS4_bit.CONB_S4_20
#define MSC_CBOXS4_CONB_S4_21    MSC_CBOXS4_bit.CONB_S4_21

#define MSC_CBOXS5_CONB_S5_00    MSC_CBOXS5_bit.CONB_S5_00
#define MSC_CBOXS5_CONB_S5_01    MSC_CBOXS5_bit.CONB_S5_01
#define MSC_CBOXS5_CONB_S5_10    MSC_CBOXS5_bit.CONB_S5_10
#define MSC_CBOXS5_CONB_S5_11    MSC_CBOXS5_bit.CONB_S5_11
#define MSC_CBOXS5_CONB_S5_20    MSC_CBOXS5_bit.CONB_S5_20
#define MSC_CBOXS5_CONB_S5_21    MSC_CBOXS5_bit.CONB_S5_21

#define MSC_IOMXSMD_SMD_FSML0    MSC_IOMXSMD_bit.SMD_FSML0
#define MSC_IOMXSMD_SEL_FSMEN0   MSC_IOMXSMD_bit.SEL_FSMEN0
#define MSC_IOMXSMD_SMD_FSML1    MSC_IOMXSMD_bit.SMD_FSML1
#define MSC_IOMXSMD_SEL_FSMEN1   MSC_IOMXSMD_bit.SEL_FSMEN1

#define MSC_INPP3_COMP0          MSC_INPP3_bit.COMP0
#define MSC_INPP3_COMP1          MSC_INPP3_bit.COMP1
#define MSC_INPP3_COMP2          MSC_INPP3_bit.COMP2
#define MSC_INPP3_COMP3          MSC_INPP3_bit.COMP3

#define MSC_IOMXP0_SEL_P010      MSC_IOMXP0_bit.SEL_P010
#define MSC_IOMXP0_SEL_P032      MSC_IOMXP0_bit.SEL_P032
#define MSC_IOMXP0_SEL_P054      MSC_IOMXP0_bit.SEL_P054

#define MSC_IOMXP1_SEL_P10       MSC_IOMXP1_bit.SEL_P10
#define MSC_IOMXP1_SEL_P11       MSC_IOMXP1_bit.SEL_P11
#define MSC_IOMXP1_SEL_P12       MSC_IOMXP1_bit.SEL_P12
#define MSC_IOMXP1_SEL_P13       MSC_IOMXP1_bit.SEL_P13
#define MSC_IOMXP1_SEL_P14       MSC_IOMXP1_bit.SEL_P14
#define MSC_IOMXP1_SEL_P15       MSC_IOMXP1_bit.SEL_P15

#endif

/*-------------------------------------------------------------------------
 *      MSC Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_MSC_CFGP00_INT_LEV  0x01
#define MASK_MSC_CFGP00_INT_SEL0 0x02
#define MASK_MSC_CFGP00_INT_SEL1 0x04
#define MASK_MSC_CFGP00_INT_ENB  0x08
#define MASK_MSC_CFGP00_INT_TYPE 0x10

#define MASK_MSC_CFGP01_INT_LEV  0x01
#define MASK_MSC_CFGP01_INT_SEL0 0x02
#define MASK_MSC_CFGP01_INT_SEL1 0x04
#define MASK_MSC_CFGP01_INT_ENB  0x08
#define MASK_MSC_CFGP01_INT_TYPE 0x10

#define MASK_MSC_CFGP02_INT_LEV  0x01
#define MASK_MSC_CFGP02_INT_SEL0 0x02
#define MASK_MSC_CFGP02_INT_SEL1 0x04
#define MASK_MSC_CFGP02_INT_ENB  0x08
#define MASK_MSC_CFGP02_INT_TYPE 0x10

#define MASK_MSC_CFGP03_INT_LEV  0x01
#define MASK_MSC_CFGP03_INT_SEL0 0x02
#define MASK_MSC_CFGP03_INT_SEL1 0x04
#define MASK_MSC_CFGP03_INT_ENB  0x08
#define MASK_MSC_CFGP03_INT_TYPE 0x10

#define MASK_MSC_CFGP04_INT_LEV  0x01
#define MASK_MSC_CFGP04_INT_SEL0 0x02
#define MASK_MSC_CFGP04_INT_SEL1 0x04
#define MASK_MSC_CFGP04_INT_ENB  0x08
#define MASK_MSC_CFGP04_INT_TYPE 0x10

#define MASK_MSC_CFGP05_INT_LEV  0x01
#define MASK_MSC_CFGP05_INT_SEL0 0x02
#define MASK_MSC_CFGP05_INT_SEL1 0x04
#define MASK_MSC_CFGP05_INT_ENB  0x08
#define MASK_MSC_CFGP05_INT_TYPE 0x10

#define MASK_MSC_CFGP20_INT_LEV  0x01
#define MASK_MSC_CFGP20_INT_SEL0 0x02
#define MASK_MSC_CFGP20_INT_SEL1 0x04
#define MASK_MSC_CFGP20_INT_ENB  0x08
#define MASK_MSC_CFGP20_INT_TYPE 0x10

#define MASK_MSC_CFGP21_INT_LEV  0x01
#define MASK_MSC_CFGP21_INT_SEL0 0x02
#define MASK_MSC_CFGP21_INT_SEL1 0x04
#define MASK_MSC_CFGP21_INT_ENB  0x08
#define MASK_MSC_CFGP21_INT_TYPE 0x10

#define MASK_MSC_CFGP22_INT_LEV  0x01
#define MASK_MSC_CFGP22_INT_SEL0 0x02
#define MASK_MSC_CFGP22_INT_SEL1 0x04
#define MASK_MSC_CFGP22_INT_ENB  0x08
#define MASK_MSC_CFGP22_INT_TYPE 0x10

#define MASK_MSC_CFGP23_INT_LEV  0x01
#define MASK_MSC_CFGP23_INT_SEL0 0x02
#define MASK_MSC_CFGP23_INT_SEL1 0x04
#define MASK_MSC_CFGP23_INT_ENB  0x08
#define MASK_MSC_CFGP23_INT_TYPE 0x10

#define MASK_MSC_CFGP24_INT_LEV  0x01
#define MASK_MSC_CFGP24_INT_SEL0 0x02
#define MASK_MSC_CFGP24_INT_SEL1 0x04
#define MASK_MSC_CFGP24_INT_ENB  0x08
#define MASK_MSC_CFGP24_INT_TYPE 0x10

#define MASK_MSC_CFGP25_INT_LEV  0x01
#define MASK_MSC_CFGP25_INT_SEL0 0x02
#define MASK_MSC_CFGP25_INT_SEL1 0x04
#define MASK_MSC_CFGP25_INT_ENB  0x08
#define MASK_MSC_CFGP25_INT_TYPE 0x10

#define MASK_MSC_STSP0_BIT_0_INT 0x01
#define MASK_MSC_STSP0_BIT_1_INT 0x02
#define MASK_MSC_STSP0_BIT_2_INT 0x04
#define MASK_MSC_STSP0_BIT_3_INT 0x08
#define MASK_MSC_STSP0_BIT_4_INT 0x10
#define MASK_MSC_STSP0_BIT_5_INT 0x20

#define MASK_MSC_STSP2_BIT_0_INT 0x01
#define MASK_MSC_STSP2_BIT_1_INT 0x02
#define MASK_MSC_STSP2_BIT_2_INT 0x04
#define MASK_MSC_STSP2_BIT_3_INT 0x08
#define MASK_MSC_STSP2_BIT_4_INT 0x10
#define MASK_MSC_STSP2_BIT_5_INT 0x20

#define MASK_MSC_INPP2_DATA_IN   0x3F

#define MASK_MSC_DACCTR_DAC0_EN  0x01
#define MASK_MSC_DACCTR_DAC1_EN  0x02
#define MASK_MSC_DACCTR_DAC2_EN  0x04
#define MASK_MSC_DACCTR_DAC3_EN  0x08
#define MASK_MSC_DACCTR_CP3_EN   0x10
#define MASK_MSC_DACCTR_CP3_SEL  0x20
#define MASK_MSC_DACCTR_DACBIAS_EN 0x80

#define MASK_MSC_DACIN0_DAC_IN0  0x0F

#define MASK_MSC_DACIN1_DAC_IN1  0x0F

#define MASK_MSC_DACIN2_DAC_IN2  0x0F

#define MASK_MSC_DACIN3_DAC_IN3  0x0F

#define MASK_MSC_SMDCFG01_SMED0_GLBCONF 0x0F
#define MASK_MSC_SMDCFG01_SMED1_GLBCONF 0xF0

#define MASK_MSC_SMDCFG23_SMED2_GLBCONF 0x0F
#define MASK_MSC_SMDCFG23_SMED3_GLBCONF 0xF0

#define MASK_MSC_SMDCFG45_SMED4_GLBCONF 0x0F
#define MASK_MSC_SMDCFG45_SMED5_GLBCONF 0xF0

#define MASK_MSC_SMSWEV_SW0      0x01
#define MASK_MSC_SMSWEV_SW1      0x02
#define MASK_MSC_SMSWEV_SW2      0x04
#define MASK_MSC_SMSWEV_SW3      0x08
#define MASK_MSC_SMSWEV_SW4      0x10
#define MASK_MSC_SMSWEV_SW5      0x20

#define MASK_MSC_SMULOCK_USE_UNLOCK_01 0x01
#define MASK_MSC_SMULOCK_USE_UNLOCK_23 0x02
#define MASK_MSC_SMULOCK_USE_UNLOCK_45 0x04
#define MASK_MSC_SMULOCK_UNLOCK_01 0x08
#define MASK_MSC_SMULOCK_UNLOCK_23 0x10
#define MASK_MSC_SMULOCK_UNLOCK_45 0x20

#define MASK_MSC_CBOXS0_CONB_S0_00 0x01
#define MASK_MSC_CBOXS0_CONB_S0_01 0x02
#define MASK_MSC_CBOXS0_CONB_S0_10 0x04
#define MASK_MSC_CBOXS0_CONB_S0_11 0x08
#define MASK_MSC_CBOXS0_CONB_S0_20 0x10
#define MASK_MSC_CBOXS0_CONB_S0_21 0x20

#define MASK_MSC_CBOXS1_CONB_S1_00 0x01
#define MASK_MSC_CBOXS1_CONB_S1_01 0x02
#define MASK_MSC_CBOXS1_CONB_S1_10 0x04
#define MASK_MSC_CBOXS1_CONB_S1_11 0x08
#define MASK_MSC_CBOXS1_CONB_S1_20 0x10
#define MASK_MSC_CBOXS1_CONB_S1_21 0x20

#define MASK_MSC_CBOXS2_CONB_S2_00 0x01
#define MASK_MSC_CBOXS2_CONB_S2_01 0x02
#define MASK_MSC_CBOXS2_CONB_S2_10 0x04
#define MASK_MSC_CBOXS2_CONB_S2_11 0x08
#define MASK_MSC_CBOXS2_CONB_S2_20 0x10
#define MASK_MSC_CBOXS2_CONB_S2_21 0x20

#define MASK_MSC_CBOXS3_CONB_S3_00 0x01
#define MASK_MSC_CBOXS3_CONB_S3_01 0x02
#define MASK_MSC_CBOXS3_CONB_S3_10 0x04
#define MASK_MSC_CBOXS3_CONB_S3_11 0x08
#define MASK_MSC_CBOXS3_CONB_S3_20 0x10
#define MASK_MSC_CBOXS3_CONB_S3_21 0x20

#define MASK_MSC_CBOXS4_CONB_S4_00 0x01
#define MASK_MSC_CBOXS4_CONB_S4_01 0x02
#define MASK_MSC_CBOXS4_CONB_S4_10 0x04
#define MASK_MSC_CBOXS4_CONB_S4_11 0x08
#define MASK_MSC_CBOXS4_CONB_S4_20 0x10
#define MASK_MSC_CBOXS4_CONB_S4_21 0x20

#define MASK_MSC_CBOXS5_CONB_S5_00 0x01
#define MASK_MSC_CBOXS5_CONB_S5_01 0x02
#define MASK_MSC_CBOXS5_CONB_S5_10 0x04
#define MASK_MSC_CBOXS5_CONB_S5_11 0x08
#define MASK_MSC_CBOXS5_CONB_S5_20 0x10
#define MASK_MSC_CBOXS5_CONB_S5_21 0x20

#define MASK_MSC_IOMXSMD_SMD_FSML0 0x07
#define MASK_MSC_IOMXSMD_SEL_FSMEN0 0x08
#define MASK_MSC_IOMXSMD_SMD_FSML1 0x70
#define MASK_MSC_IOMXSMD_SEL_FSMEN1 0x80

#define MASK_MSC_INPP3_COMP0     0x01
#define MASK_MSC_INPP3_COMP1     0x02
#define MASK_MSC_INPP3_COMP2     0x04
#define MASK_MSC_INPP3_COMP3     0x08

#define MASK_MSC_IOMXP0_SEL_P010 0x03
#define MASK_MSC_IOMXP0_SEL_P032 0x0C
#define MASK_MSC_IOMXP0_SEL_P054 0x30

#define MASK_MSC_IOMXP1_SEL_P10  0x01
#define MASK_MSC_IOMXP1_SEL_P11  0x02
#define MASK_MSC_IOMXP1_SEL_P12  0x04
#define MASK_MSC_IOMXP1_SEL_P13  0x08
#define MASK_MSC_IOMXP1_SEL_P14  0x10
#define MASK_MSC_IOMXP1_SEL_P15  0x20


/*-------------------------------------------------------------------------
 *      Flash Registers register definitions
 *-----------------------------------------------------------------------*/
/* Flash control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FIX         : 1;
  unsigned char IE          : 1;
  unsigned char AHALT       : 1;
  unsigned char HALT        : 1;
} __BITS_FLASH_CR1;
#endif
__IO_REG8_BIT(FLASH_CR1,   0x505A, __READ_WRITE, __BITS_FLASH_CR1);

/* Flash control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PRG         : 1;
  unsigned char             : 3;
  unsigned char FPRG        : 1;
  unsigned char ERASE       : 1;
  unsigned char WWO         : 1;
  unsigned char OPT         : 1;
} __BITS_FLASH_CR2;
#endif
__IO_REG8_BIT(FLASH_CR2,   0x505B, __READ_WRITE, __BITS_FLASH_CR2);

/* Flash complementary control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NPRG        : 1;
  unsigned char             : 3;
  unsigned char NFPRG       : 1;
  unsigned char NERASE      : 1;
  unsigned char NWWO        : 1;
  unsigned char NOPT        : 1;
} __BITS_FLASH_NCR2;
#endif
__IO_REG8_BIT(FLASH_NCR2,  0x505C, __READ_WRITE, __BITS_FLASH_NCR2);

/* Flash protection register */
__IO_REG8    (FLASH_FPR,   0x505D, __READ);
/* Flash complementary protection register */
__IO_REG8    (FLASH_NFPR,  0x505E, __READ);
/* Flash status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WR_PG_DIS   : 1;
  unsigned char PUL         : 1;
  unsigned char EOP         : 1;
  unsigned char DUL         : 1;
  unsigned char             : 2;
  unsigned char HVOFF       : 1;
} __BITS_FLASH_IAPSR;
#endif
__IO_REG8_BIT(FLASH_IAPSR, 0x505F, __READ_WRITE, __BITS_FLASH_IAPSR);

/* Flash program memory unprotection register */
__IO_REG8    (FLASH_PUKR,  0x5062, __READ_WRITE);
/* Flash data unprotection register */
__IO_REG8    (FLASH_DUKR,  0x5064, __READ_WRITE);
/* Flash wait state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char Wait        : 2;
} __BITS_FLASH_WAIT;
#endif
__IO_REG8_BIT(FLASH_WAIT,  0x5067, __READ, __BITS_FLASH_WAIT);


/*-------------------------------------------------------------------------
 *      Flash Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define FLASH_CR1_FIX            FLASH_CR1_bit.FIX
#define FLASH_CR1_IE             FLASH_CR1_bit.IE
#define FLASH_CR1_AHALT          FLASH_CR1_bit.AHALT
#define FLASH_CR1_HALT           FLASH_CR1_bit.HALT

#define FLASH_CR2_PRG            FLASH_CR2_bit.PRG
#define FLASH_CR2_FPRG           FLASH_CR2_bit.FPRG
#define FLASH_CR2_ERASE          FLASH_CR2_bit.ERASE
#define FLASH_CR2_WWO            FLASH_CR2_bit.WWO
#define FLASH_CR2_OPT            FLASH_CR2_bit.OPT

#define FLASH_NCR2_NPRG          FLASH_NCR2_bit.NPRG
#define FLASH_NCR2_NFPRG         FLASH_NCR2_bit.NFPRG
#define FLASH_NCR2_NERASE        FLASH_NCR2_bit.NERASE
#define FLASH_NCR2_NWWO          FLASH_NCR2_bit.NWWO
#define FLASH_NCR2_NOPT          FLASH_NCR2_bit.NOPT

#define FLASH_IAPSR_WR_PG_DIS    FLASH_IAPSR_bit.WR_PG_DIS
#define FLASH_IAPSR_PUL          FLASH_IAPSR_bit.PUL
#define FLASH_IAPSR_EOP          FLASH_IAPSR_bit.EOP
#define FLASH_IAPSR_DUL          FLASH_IAPSR_bit.DUL
#define FLASH_IAPSR_HVOFF        FLASH_IAPSR_bit.HVOFF

#define FLASH_WAIT_Wait          FLASH_WAIT_bit.Wait

#endif

/*-------------------------------------------------------------------------
 *      Flash Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_FLASH_CR1_FIX       0x01
#define MASK_FLASH_CR1_IE        0x02
#define MASK_FLASH_CR1_AHALT     0x04
#define MASK_FLASH_CR1_HALT      0x08

#define MASK_FLASH_CR2_PRG       0x01
#define MASK_FLASH_CR2_FPRG      0x10
#define MASK_FLASH_CR2_ERASE     0x20
#define MASK_FLASH_CR2_WWO       0x40
#define MASK_FLASH_CR2_OPT       0x80

#define MASK_FLASH_NCR2_NPRG     0x01
#define MASK_FLASH_NCR2_NFPRG    0x10
#define MASK_FLASH_NCR2_NERASE   0x20
#define MASK_FLASH_NCR2_NWWO     0x40
#define MASK_FLASH_NCR2_NOPT     0x80

#define MASK_FLASH_IAPSR_WR_PG_DIS 0x01
#define MASK_FLASH_IAPSR_PUL     0x02
#define MASK_FLASH_IAPSR_EOP     0x04
#define MASK_FLASH_IAPSR_DUL     0x08
#define MASK_FLASH_IAPSR_HVOFF   0x40

#define MASK_FLASH_WAIT_Wait     0x03


/*-------------------------------------------------------------------------
 *      Reset Register register definitions
 *-----------------------------------------------------------------------*/
/* Reset status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WWDGF       : 1;
  unsigned char IWDGF       : 1;
  unsigned char ILLOPF      : 1;
  unsigned char SWIMF       : 1;
  unsigned char EMCF        : 1;
} __BITS_RST_SR;
#endif
__IO_REG8_BIT(RST_SR,      0x50B3, __READ_WRITE, __BITS_RST_SR);


/*-------------------------------------------------------------------------
 *      Reset Register bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define RST_SR_WWDGF             RST_SR_bit.WWDGF
#define RST_SR_IWDGF             RST_SR_bit.IWDGF
#define RST_SR_ILLOPF            RST_SR_bit.ILLOPF
#define RST_SR_SWIMF             RST_SR_bit.SWIMF
#define RST_SR_EMCF              RST_SR_bit.EMCF

#endif

/*-------------------------------------------------------------------------
 *      Reset Register bit masks
 *-----------------------------------------------------------------------*/
#define MASK_RST_SR_WWDGF        0x01
#define MASK_RST_SR_IWDGF        0x02
#define MASK_RST_SR_ILLOPF       0x04
#define MASK_RST_SR_SWIMF        0x08
#define MASK_RST_SR_EMCF         0x10


/*-------------------------------------------------------------------------
 *      Clock Registers register definitions
 *-----------------------------------------------------------------------*/
/* SMED0 clock configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CK_SW0      : 1;
  unsigned char CK_SW1      : 1;
  unsigned char             : 2;
  unsigned char SMED_0_DIV  : 3;
} __BITS_CLK_SMED0;
#endif
__IO_REG8_BIT(CLK_SMED0,   0x50B4, __READ_WRITE, __BITS_CLK_SMED0);

/* SMED1 clock configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CK_SW0      : 1;
  unsigned char CK_SW1      : 1;
  unsigned char             : 2;
  unsigned char SMED_1_DIV  : 3;
} __BITS_CLK_SMED1;
#endif
__IO_REG8_BIT(CLK_SMED1,   0x50B5, __READ_WRITE, __BITS_CLK_SMED1);

/* SMED2 clock configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CK_SW0      : 1;
  unsigned char CK_SW1      : 1;
  unsigned char             : 2;
  unsigned char SMED_2_DIV  : 3;
} __BITS_CLK_SMED2;
#endif
__IO_REG8_BIT(CLK_SMED2,   0x50B6, __READ_WRITE, __BITS_CLK_SMED2);

/* SMED3 clock configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CK_SW0      : 1;
  unsigned char CK_SW1      : 1;
  unsigned char             : 2;
  unsigned char SMED_3_DIV  : 3;
} __BITS_CLK_SMED3;
#endif
__IO_REG8_BIT(CLK_SMED3,   0x50B7, __READ_WRITE, __BITS_CLK_SMED3);

/* SMED4 clock configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CK_SW0      : 1;
  unsigned char CK_SW1      : 1;
  unsigned char             : 2;
  unsigned char SMED_4_DIV  : 3;
} __BITS_CLK_SMED4;
#endif
__IO_REG8_BIT(CLK_SMED4,   0x50B8, __READ_WRITE, __BITS_CLK_SMED4);

/* SMED5 clock configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CK_SW0      : 1;
  unsigned char CK_SW1      : 1;
  unsigned char             : 2;
  unsigned char SMED_5_DIV  : 3;
} __BITS_CLK_SMED5;
#endif
__IO_REG8_BIT(CLK_SMED5,   0x50B9, __READ_WRITE, __BITS_CLK_SMED5);

/* PLL prescaler configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PLL_DIV     : 2;
  unsigned char             : 1;
  unsigned char PLL_PRES_DIV: 2;
} __BITS_CLK_PLLDIVR;
#endif
__IO_REG8_BIT(CLK_PLLDIVR, 0x50BE, __READ_WRITE, __BITS_CLK_PLLDIVR);

/* AWU clock prescaler configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AWUDIV0     : 1;
  unsigned char AWUDIV1     : 1;
  unsigned char AWUDIV2     : 1;
  unsigned char AWUDIV3     : 1;
} __BITS_CLK_AWUDIVR;
#endif
__IO_REG8_BIT(CLK_AWUDIVR, 0x50BF, __READ_WRITE, __BITS_CLK_AWUDIVR);

/* Internal clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSIEN       : 1;
  unsigned char HSIRDY      : 1;
  unsigned char FHW         : 1;
  unsigned char LSIEN       : 1;
  unsigned char LSIRDY      : 1;
  unsigned char REGAH       : 1;
} __BITS_CLK_ICKR;
#endif
__IO_REG8_BIT(CLK_ICKR,    0x50C0, __READ_WRITE, __BITS_CLK_ICKR);

/* External clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSEEN       : 1;
  unsigned char HSERDY      : 1;
} __BITS_CLK_ECKR;
#endif
__IO_REG8_BIT(CLK_ECKR,    0x50C1, __READ_WRITE, __BITS_CLK_ECKR);

/* External clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PLLON       : 1;
  unsigned char LOCKP       : 1;
  unsigned char REF_SEL     : 1;
  unsigned char BYPASS      : 1;
  unsigned char SSCG_CTRL   : 1;
  unsigned char SPREAD_CTRL : 1;
  unsigned char PLL_LOCK_INT: 1;
} __BITS_CLK_PLLR;
#endif
__IO_REG8_BIT(CLK_PLLR,    0x50C2, __READ_WRITE, __BITS_CLK_PLLR);

/* Clock master status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CKM         : 4;
  unsigned char NCKM        : 4;
} __BITS_CLK_CMSR;
#endif
__IO_REG8_BIT(CLK_CMSR,    0x50C3, __READ, __BITS_CLK_CMSR);

/* Clock master switch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWI         : 4;
  unsigned char NSWI        : 4;
} __BITS_CLK_SWR;
#endif
__IO_REG8_BIT(CLK_SWR,     0x50C4, __READ_WRITE, __BITS_CLK_SWR);

/* Clock switch control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWBSY       : 1;
  unsigned char SWEN        : 1;
  unsigned char SWIEN       : 1;
  unsigned char SWIF        : 1;
} __BITS_CLK_SWCR;
#endif
__IO_REG8_BIT(CLK_SWCR,    0x50C5, __READ_WRITE, __BITS_CLK_SWCR);

/* Clock divider register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CPUDIV      : 3;
  unsigned char HSIDIV      : 2;
} __BITS_CLK_DIVR;
#endif
__IO_REG8_BIT(CLK_DIVR,    0x50C6, __READ_WRITE, __BITS_CLK_DIVR);

/* Peripheral clock gating register 1 */
__IO_REG8    (CLK_PCKENR1, 0x50C7, __READ_WRITE);
/* Clock security system register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CSSEN       : 1;
  unsigned char AUX         : 1;
  unsigned char CSSDIE      : 1;
  unsigned char CSSD        : 1;
} __BITS_CLK_CSSR;
#endif
__IO_REG8_BIT(CLK_CSSR,    0x50C8, __READ_WRITE, __BITS_CLK_CSSR);

/* Configurable clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCOEN       : 1;
  unsigned char CCOSEL      : 4;
  unsigned char CCORDY      : 1;
  unsigned char CCOBSY      : 1;
} __BITS_CLK_CCOR;
#endif
__IO_REG8_BIT(CLK_CCOR,    0x50C9, __READ_WRITE, __BITS_CLK_CCOR);

/* Peripheral clock gating register 2 */
__IO_REG8    (CLK_PCKENR2, 0x50CA, __READ_WRITE);
/* HSI clock calibration trimming register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSITRIM     : 4;
} __BITS_CLK_HSITRIMR;
#endif
__IO_REG8_BIT(CLK_HSITRIMR, 0x50CC, __READ_WRITE, __BITS_CLK_HSITRIMR);

/* SWIM clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWIMCLK     : 1;
} __BITS_CLK_SWIMCCR;
#endif
__IO_REG8_BIT(CLK_SWIMCCR, 0x50CD, __READ_WRITE, __BITS_CLK_SWIMCCR);

/* CCO divider register */
__IO_REG8    (CLK_CCODIVR, 0x50CE, __READ_WRITE);
/* ADC clock configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEL         : 2;
  unsigned char             : 2;
  unsigned char ADC_DIV     : 4;
} __BITS_CLK_ADCR;
#endif
__IO_REG8_BIT(CLK_ADCR,    0x50CF, __READ_WRITE, __BITS_CLK_ADCR);


/*-------------------------------------------------------------------------
 *      Clock Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define CLK_SMED0_CK_SW0         CLK_SMED0_bit.CK_SW0
#define CLK_SMED0_CK_SW1         CLK_SMED0_bit.CK_SW1
#define CLK_SMED0_SMED_0_DIV     CLK_SMED0_bit.SMED_0_DIV

#define CLK_SMED1_CK_SW0         CLK_SMED1_bit.CK_SW0
#define CLK_SMED1_CK_SW1         CLK_SMED1_bit.CK_SW1
#define CLK_SMED1_SMED_1_DIV     CLK_SMED1_bit.SMED_1_DIV

#define CLK_SMED2_CK_SW0         CLK_SMED2_bit.CK_SW0
#define CLK_SMED2_CK_SW1         CLK_SMED2_bit.CK_SW1
#define CLK_SMED2_SMED_2_DIV     CLK_SMED2_bit.SMED_2_DIV

#define CLK_SMED3_CK_SW0         CLK_SMED3_bit.CK_SW0
#define CLK_SMED3_CK_SW1         CLK_SMED3_bit.CK_SW1
#define CLK_SMED3_SMED_3_DIV     CLK_SMED3_bit.SMED_3_DIV

#define CLK_SMED4_CK_SW0         CLK_SMED4_bit.CK_SW0
#define CLK_SMED4_CK_SW1         CLK_SMED4_bit.CK_SW1
#define CLK_SMED4_SMED_4_DIV     CLK_SMED4_bit.SMED_4_DIV

#define CLK_SMED5_CK_SW0         CLK_SMED5_bit.CK_SW0
#define CLK_SMED5_CK_SW1         CLK_SMED5_bit.CK_SW1
#define CLK_SMED5_SMED_5_DIV     CLK_SMED5_bit.SMED_5_DIV

#define CLK_PLLDIVR_PLL_DIV      CLK_PLLDIVR_bit.PLL_DIV
#define CLK_PLLDIVR_PLL_PRES_DIV CLK_PLLDIVR_bit.PLL_PRES_DIV

#define CLK_AWUDIVR_AWUDIV0      CLK_AWUDIVR_bit.AWUDIV0
#define CLK_AWUDIVR_AWUDIV1      CLK_AWUDIVR_bit.AWUDIV1
#define CLK_AWUDIVR_AWUDIV2      CLK_AWUDIVR_bit.AWUDIV2
#define CLK_AWUDIVR_AWUDIV3      CLK_AWUDIVR_bit.AWUDIV3

#define CLK_ICKR_HSIEN           CLK_ICKR_bit.HSIEN
#define CLK_ICKR_HSIRDY          CLK_ICKR_bit.HSIRDY
#define CLK_ICKR_FHW             CLK_ICKR_bit.FHW
#define CLK_ICKR_LSIEN           CLK_ICKR_bit.LSIEN
#define CLK_ICKR_LSIRDY          CLK_ICKR_bit.LSIRDY
#define CLK_ICKR_REGAH           CLK_ICKR_bit.REGAH

#define CLK_ECKR_HSEEN           CLK_ECKR_bit.HSEEN
#define CLK_ECKR_HSERDY          CLK_ECKR_bit.HSERDY

#define CLK_PLLR_PLLON           CLK_PLLR_bit.PLLON
#define CLK_PLLR_LOCKP           CLK_PLLR_bit.LOCKP
#define CLK_PLLR_REF_SEL         CLK_PLLR_bit.REF_SEL
#define CLK_PLLR_BYPASS          CLK_PLLR_bit.BYPASS
#define CLK_PLLR_SSCG_CTRL       CLK_PLLR_bit.SSCG_CTRL
#define CLK_PLLR_SPREAD_CTRL     CLK_PLLR_bit.SPREAD_CTRL
#define CLK_PLLR_PLL_LOCK_INT    CLK_PLLR_bit.PLL_LOCK_INT

#define CLK_CMSR_CKM             CLK_CMSR_bit.CKM
#define CLK_CMSR_NCKM            CLK_CMSR_bit.NCKM

#define CLK_SWR_SWI              CLK_SWR_bit.SWI
#define CLK_SWR_NSWI             CLK_SWR_bit.NSWI

#define CLK_SWCR_SWBSY           CLK_SWCR_bit.SWBSY
#define CLK_SWCR_SWEN            CLK_SWCR_bit.SWEN
#define CLK_SWCR_SWIEN           CLK_SWCR_bit.SWIEN
#define CLK_SWCR_SWIF            CLK_SWCR_bit.SWIF

#define CLK_DIVR_CPUDIV          CLK_DIVR_bit.CPUDIV
#define CLK_DIVR_HSIDIV          CLK_DIVR_bit.HSIDIV

#define CLK_CSSR_CSSEN           CLK_CSSR_bit.CSSEN
#define CLK_CSSR_AUX             CLK_CSSR_bit.AUX
#define CLK_CSSR_CSSDIE          CLK_CSSR_bit.CSSDIE
#define CLK_CSSR_CSSD            CLK_CSSR_bit.CSSD

#define CLK_CCOR_CCOEN           CLK_CCOR_bit.CCOEN
#define CLK_CCOR_CCOSEL          CLK_CCOR_bit.CCOSEL
#define CLK_CCOR_CCORDY          CLK_CCOR_bit.CCORDY
#define CLK_CCOR_CCOBSY          CLK_CCOR_bit.CCOBSY

#define CLK_HSITRIMR_HSITRIM     CLK_HSITRIMR_bit.HSITRIM

#define CLK_SWIMCCR_SWIMCLK      CLK_SWIMCCR_bit.SWIMCLK

#define CLK_ADCR_SEL             CLK_ADCR_bit.SEL
#define CLK_ADCR_ADC_DIV         CLK_ADCR_bit.ADC_DIV

#endif

/*-------------------------------------------------------------------------
 *      Clock Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CLK_SMED0_CK_SW0    0x01
#define MASK_CLK_SMED0_CK_SW1    0x02
#define MASK_CLK_SMED0_SMED_0_DIV 0x70

#define MASK_CLK_SMED1_CK_SW0    0x01
#define MASK_CLK_SMED1_CK_SW1    0x02
#define MASK_CLK_SMED1_SMED_1_DIV 0x70

#define MASK_CLK_SMED2_CK_SW0    0x01
#define MASK_CLK_SMED2_CK_SW1    0x02
#define MASK_CLK_SMED2_SMED_2_DIV 0x70

#define MASK_CLK_SMED3_CK_SW0    0x01
#define MASK_CLK_SMED3_CK_SW1    0x02
#define MASK_CLK_SMED3_SMED_3_DIV 0x70

#define MASK_CLK_SMED4_CK_SW0    0x01
#define MASK_CLK_SMED4_CK_SW1    0x02
#define MASK_CLK_SMED4_SMED_4_DIV 0x70

#define MASK_CLK_SMED5_CK_SW0    0x01
#define MASK_CLK_SMED5_CK_SW1    0x02
#define MASK_CLK_SMED5_SMED_5_DIV 0x70

#define MASK_CLK_PLLDIVR_PLL_DIV 0x03
#define MASK_CLK_PLLDIVR_PLL_PRES_DIV 0x18

#define MASK_CLK_AWUDIVR_AWUDIV0 0x01
#define MASK_CLK_AWUDIVR_AWUDIV1 0x02
#define MASK_CLK_AWUDIVR_AWUDIV2 0x04
#define MASK_CLK_AWUDIVR_AWUDIV3 0x08

#define MASK_CLK_ICKR_HSIEN      0x01
#define MASK_CLK_ICKR_HSIRDY     0x02
#define MASK_CLK_ICKR_FHW        0x04
#define MASK_CLK_ICKR_LSIEN      0x08
#define MASK_CLK_ICKR_LSIRDY     0x10
#define MASK_CLK_ICKR_REGAH      0x20

#define MASK_CLK_ECKR_HSEEN      0x01
#define MASK_CLK_ECKR_HSERDY     0x02

#define MASK_CLK_PLLR_PLLON      0x01
#define MASK_CLK_PLLR_LOCKP      0x02
#define MASK_CLK_PLLR_REF_SEL    0x04
#define MASK_CLK_PLLR_BYPASS     0x08
#define MASK_CLK_PLLR_SSCG_CTRL  0x10
#define MASK_CLK_PLLR_SPREAD_CTRL 0x20
#define MASK_CLK_PLLR_PLL_LOCK_INT 0x40

#define MASK_CLK_CMSR_CKM        0x0F
#define MASK_CLK_CMSR_NCKM       0xF0

#define MASK_CLK_SWR_SWI         0x0F
#define MASK_CLK_SWR_NSWI        0xF0

#define MASK_CLK_SWCR_SWBSY      0x01
#define MASK_CLK_SWCR_SWEN       0x02
#define MASK_CLK_SWCR_SWIEN      0x04
#define MASK_CLK_SWCR_SWIF       0x08

#define MASK_CLK_DIVR_CPUDIV     0x07
#define MASK_CLK_DIVR_HSIDIV     0x18

#define MASK_CLK_CSSR_CSSEN      0x01
#define MASK_CLK_CSSR_AUX        0x02
#define MASK_CLK_CSSR_CSSDIE     0x04
#define MASK_CLK_CSSR_CSSD       0x08

#define MASK_CLK_CCOR_CCOEN      0x01
#define MASK_CLK_CCOR_CCOSEL     0x1E
#define MASK_CLK_CCOR_CCORDY     0x20
#define MASK_CLK_CCOR_CCOBSY     0x40

#define MASK_CLK_HSITRIMR_HSITRIM 0x0F

#define MASK_CLK_SWIMCCR_SWIMCLK 0x01

#define MASK_CLK_ADCR_SEL        0x03
#define MASK_CLK_ADCR_ADC_DIV    0xF0


/*-------------------------------------------------------------------------
 *      Watchdog Registers register definitions
 *-----------------------------------------------------------------------*/
/* WWDG control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char T0          : 1;
  unsigned char T1          : 1;
  unsigned char T2          : 1;
  unsigned char T3          : 1;
  unsigned char T4          : 1;
  unsigned char T5          : 1;
  unsigned char T6          : 1;
  unsigned char WDGA        : 1;
} __BITS_WWDG_CR;
#endif
__IO_REG8_BIT(WWDG_CR,     0x50D1, __READ_WRITE, __BITS_WWDG_CR);

/* WWDR window register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char W0          : 1;
  unsigned char W1          : 1;
  unsigned char W2          : 1;
  unsigned char W3          : 1;
  unsigned char W4          : 1;
  unsigned char W5          : 1;
  unsigned char W6          : 1;
} __BITS_WWDG_WR;
#endif
__IO_REG8_BIT(WWDG_WR,     0x50D2, __READ_WRITE, __BITS_WWDG_WR);

/* IWDG key register */
__IO_REG8    (IWDG_KR,     0x50E0, __WRITE);
/* IWDG prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PR          : 3;
} __BITS_IWDG_PR;
#endif
__IO_REG8_BIT(IWDG_PR,     0x50E1, __READ_WRITE, __BITS_IWDG_PR);

/* IWDG reload register */
__IO_REG8    (IWDG_RLR,    0x50E2, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      Watchdog Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define WWDG_CR_T0               WWDG_CR_bit.T0
#define WWDG_CR_T1               WWDG_CR_bit.T1
#define WWDG_CR_T2               WWDG_CR_bit.T2
#define WWDG_CR_T3               WWDG_CR_bit.T3
#define WWDG_CR_T4               WWDG_CR_bit.T4
#define WWDG_CR_T5               WWDG_CR_bit.T5
#define WWDG_CR_T6               WWDG_CR_bit.T6
#define WWDG_CR_WDGA             WWDG_CR_bit.WDGA

#define WWDG_WR_W0               WWDG_WR_bit.W0
#define WWDG_WR_W1               WWDG_WR_bit.W1
#define WWDG_WR_W2               WWDG_WR_bit.W2
#define WWDG_WR_W3               WWDG_WR_bit.W3
#define WWDG_WR_W4               WWDG_WR_bit.W4
#define WWDG_WR_W5               WWDG_WR_bit.W5
#define WWDG_WR_W6               WWDG_WR_bit.W6

#define IWDG_PR_PR               IWDG_PR_bit.PR

#endif

/*-------------------------------------------------------------------------
 *      Watchdog Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_WWDG_CR_T0          0x01
#define MASK_WWDG_CR_T1          0x02
#define MASK_WWDG_CR_T2          0x04
#define MASK_WWDG_CR_T3          0x08
#define MASK_WWDG_CR_T4          0x10
#define MASK_WWDG_CR_T5          0x20
#define MASK_WWDG_CR_T6          0x40
#define MASK_WWDG_CR_WDGA        0x80

#define MASK_WWDG_WR_W0          0x01
#define MASK_WWDG_WR_W1          0x02
#define MASK_WWDG_WR_W2          0x04
#define MASK_WWDG_WR_W3          0x08
#define MASK_WWDG_WR_W4          0x10
#define MASK_WWDG_WR_W5          0x20
#define MASK_WWDG_WR_W6          0x40

#define MASK_IWDG_PR_PR          0x07


/*-------------------------------------------------------------------------
 *      AWU Registers register definitions
 *-----------------------------------------------------------------------*/
/* AWU control/status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char MR          : 1;
  unsigned char             : 2;
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
  unsigned char AWUTB       : 4;
} __BITS_AWU_TBR;
#endif
__IO_REG8_BIT(AWU_TBR,     0x50F2, __READ_WRITE, __BITS_AWU_TBR);


/*-------------------------------------------------------------------------
 *      AWU Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define AWU_CSR_MR               AWU_CSR_bit.MR
#define AWU_CSR_AWUEN            AWU_CSR_bit.AWUEN
#define AWU_CSR_AWUF             AWU_CSR_bit.AWUF

#define AWU_APR_APR              AWU_APR_bit.APR

#define AWU_TBR_AWUTB            AWU_TBR_bit.AWUTB

#endif

/*-------------------------------------------------------------------------
 *      AWU Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_AWU_CSR_MR          0x02
#define MASK_AWU_CSR_AWUEN       0x10
#define MASK_AWU_CSR_AWUF        0x20

#define MASK_AWU_APR_APR         0x3F

#define MASK_AWU_TBR_AWUTB       0x0F


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

/* I2C own address register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD0        : 1;
  unsigned char ADD1        : 1;
  unsigned char ADD2        : 1;
  unsigned char ADD3        : 1;
  unsigned char ADD4        : 1;
  unsigned char ADD5        : 1;
  unsigned char ADD6        : 1;
  unsigned char ADD7        : 1;
} __BITS_I2C_OARL;
#endif
__IO_REG8_BIT(I2C_OARL,    0x5213, __READ_WRITE, __BITS_I2C_OARL);

/* I2C own address register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char ADD8        : 1;
  unsigned char ADD9        : 1;
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

/* I2C clock control register low */
__IO_REG8    (I2C_CCRL,    0x521B, __READ_WRITE);
/* I2C clock control register high */
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

#define I2C_OARL_ADD0            I2C_OARL_bit.ADD0
#define I2C_OARL_ADD1            I2C_OARL_bit.ADD1
#define I2C_OARL_ADD2            I2C_OARL_bit.ADD2
#define I2C_OARL_ADD3            I2C_OARL_bit.ADD3
#define I2C_OARL_ADD4            I2C_OARL_bit.ADD4
#define I2C_OARL_ADD5            I2C_OARL_bit.ADD5
#define I2C_OARL_ADD6            I2C_OARL_bit.ADD6
#define I2C_OARL_ADD7            I2C_OARL_bit.ADD7

#define I2C_OARH_ADD8            I2C_OARH_bit.ADD8
#define I2C_OARH_ADD9            I2C_OARH_bit.ADD9
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

#define MASK_I2C_OARL_ADD0       0x01
#define MASK_I2C_OARL_ADD1       0x02
#define MASK_I2C_OARL_ADD2       0x04
#define MASK_I2C_OARL_ADD3       0x08
#define MASK_I2C_OARL_ADD4       0x10
#define MASK_I2C_OARL_ADD5       0x20
#define MASK_I2C_OARL_ADD6       0x40
#define MASK_I2C_OARL_ADD7       0x80

#define MASK_I2C_OARH_ADD8       0x02
#define MASK_I2C_OARH_ADD9       0x04
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
 *      UART register definitions
 *-----------------------------------------------------------------------*/
/* UART status register */
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
} __BITS_UART_SR;
#endif
__IO_REG8_BIT(UART_SR,     0x5230, __READ_WRITE, __BITS_UART_SR);

/* UART data register */
__IO_REG8    (UART_DR,     0x5231, __READ_WRITE);
/* UART baud rate register 1 */
__IO_REG8    (UART_BRR1,   0x5232, __READ_WRITE);
/* UART baud rate register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UART_DIV_F  : 4;
  unsigned char UART_DIV_M  : 4;
} __BITS_UART_BRR2;
#endif
__IO_REG8_BIT(UART_BRR2,   0x5233, __READ_WRITE, __BITS_UART_BRR2);

/* UART control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PIEN        : 1;
  unsigned char PS          : 1;
  unsigned char PCEN        : 1;
  unsigned char WAKE        : 1;
  unsigned char M           : 1;
  unsigned char UARTD       : 1;
  unsigned char T8          : 1;
  unsigned char R8          : 1;
} __BITS_UART_CR1;
#endif
__IO_REG8_BIT(UART_CR1,    0x5234, __READ_WRITE, __BITS_UART_CR1);

/* UART control register 2 */
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
} __BITS_UART_CR2;
#endif
__IO_REG8_BIT(UART_CR2,    0x5235, __READ_WRITE, __BITS_UART_CR2);

/* UART control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char STOP        : 2;
} __BITS_UART_CR3;
#endif
__IO_REG8_BIT(UART_CR3,    0x5236, __READ_WRITE, __BITS_UART_CR3);

/* UART control register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD         : 4;
} __BITS_UART_CR4;
#endif
__IO_REG8_BIT(UART_CR4,    0x5237, __READ_WRITE, __BITS_UART_CR4);

/* UART guard time register */
__IO_REG8    (UART_GTR,    0x5239, __READ_WRITE);
/* UART prescaler register */
__IO_REG8    (UART_PSCR,   0x523A, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      UART bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define UART_SR_PE               UART_SR_bit.PE
#define UART_SR_FE               UART_SR_bit.FE
#define UART_SR_NF               UART_SR_bit.NF
#define UART_SR_OR               UART_SR_bit.OR
#define UART_SR_IDLE             UART_SR_bit.IDLE
#define UART_SR_RXNE             UART_SR_bit.RXNE
#define UART_SR_TC               UART_SR_bit.TC
#define UART_SR_TXE              UART_SR_bit.TXE

#define UART_BRR2_UART_DIV_F     UART_BRR2_bit.UART_DIV_F
#define UART_BRR2_UART_DIV_M     UART_BRR2_bit.UART_DIV_M

#define UART_CR1_PIEN            UART_CR1_bit.PIEN
#define UART_CR1_PS              UART_CR1_bit.PS
#define UART_CR1_PCEN            UART_CR1_bit.PCEN
#define UART_CR1_WAKE            UART_CR1_bit.WAKE
#define UART_CR1_M               UART_CR1_bit.M
#define UART_CR1_UARTD           UART_CR1_bit.UARTD
#define UART_CR1_T8              UART_CR1_bit.T8
#define UART_CR1_R8              UART_CR1_bit.R8

#define UART_CR2_SBK             UART_CR2_bit.SBK
#define UART_CR2_RWU             UART_CR2_bit.RWU
#define UART_CR2_REN             UART_CR2_bit.REN
#define UART_CR2_TEN             UART_CR2_bit.TEN
#define UART_CR2_ILIEN           UART_CR2_bit.ILIEN
#define UART_CR2_RIEN            UART_CR2_bit.RIEN
#define UART_CR2_TCIEN           UART_CR2_bit.TCIEN
#define UART_CR2_TIEN            UART_CR2_bit.TIEN

#define UART_CR3_STOP            UART_CR3_bit.STOP

#define UART_CR4_ADD             UART_CR4_bit.ADD

#endif

/*-------------------------------------------------------------------------
 *      UART bit masks
 *-----------------------------------------------------------------------*/
#define MASK_UART_SR_PE          0x01
#define MASK_UART_SR_FE          0x02
#define MASK_UART_SR_NF          0x04
#define MASK_UART_SR_OR          0x08
#define MASK_UART_SR_IDLE        0x10
#define MASK_UART_SR_RXNE        0x20
#define MASK_UART_SR_TC          0x40
#define MASK_UART_SR_TXE         0x80

#define MASK_UART_BRR2_UART_DIV_F 0x0F
#define MASK_UART_BRR2_UART_DIV_M 0xF0

#define MASK_UART_CR1_PIEN       0x01
#define MASK_UART_CR1_PS         0x02
#define MASK_UART_CR1_PCEN       0x04
#define MASK_UART_CR1_WAKE       0x08
#define MASK_UART_CR1_M          0x10
#define MASK_UART_CR1_UARTD      0x20
#define MASK_UART_CR1_T8         0x40
#define MASK_UART_CR1_R8         0x80

#define MASK_UART_CR2_SBK        0x01
#define MASK_UART_CR2_RWU        0x02
#define MASK_UART_CR2_REN        0x04
#define MASK_UART_CR2_TEN        0x08
#define MASK_UART_CR2_ILIEN      0x10
#define MASK_UART_CR2_RIEN       0x20
#define MASK_UART_CR2_TCIEN      0x40
#define MASK_UART_CR2_TIEN       0x80

#define MASK_UART_CR3_STOP       0x30

#define MASK_UART_CR4_ADD        0x0F


/*-------------------------------------------------------------------------
 *      STMR Registers register definitions
 *-----------------------------------------------------------------------*/
/* Control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char             : 3;
  unsigned char ARPE        : 1;
} __BITS_STMR_CR1;
#endif
__IO_REG8_BIT(STMR_CR1,    0x5340, __READ_WRITE, __BITS_STMR_CR1);

/* Interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
} __BITS_STMR_IER;
#endif
__IO_REG8_BIT(STMR_IER,    0x5341, __READ_WRITE, __BITS_STMR_IER);

/* Status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
} __BITS_STMR_SR1;
#endif
__IO_REG8_BIT(STMR_SR1,    0x5342, __READ_WRITE, __BITS_STMR_SR1);

/* Event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
} __BITS_STMR_EGR;
#endif
__IO_REG8_BIT(STMR_EGR,    0x5343, __WRITE, __BITS_STMR_EGR);

/* Counter high register */
__IO_REG8    (STMR_CNTH,   0x5344, __READ_WRITE);
/* Counter low register */
__IO_REG8    (STMR_CNTL,   0x5345, __READ_WRITE);
/* Prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_STMR_PSCL;
#endif
__IO_REG8_BIT(STMR_PSCL,   0x5346, __READ_WRITE, __BITS_STMR_PSCL);

/* Auto-reload high register */
__IO_REG8    (STMR_ARRH,   0x5347, __READ_WRITE);
/* Auto-reload low register */
__IO_REG8    (STMR_ARRL,   0x5348, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      STMR Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define STMR_CR1_CEN             STMR_CR1_bit.CEN
#define STMR_CR1_UDIS            STMR_CR1_bit.UDIS
#define STMR_CR1_URS             STMR_CR1_bit.URS
#define STMR_CR1_OPM             STMR_CR1_bit.OPM
#define STMR_CR1_ARPE            STMR_CR1_bit.ARPE

#define STMR_IER_UIE             STMR_IER_bit.UIE

#define STMR_SR1_UIF             STMR_SR1_bit.UIF

#define STMR_EGR_UG              STMR_EGR_bit.UG

#define STMR_PSCL_PSC            STMR_PSCL_bit.PSC

#endif

/*-------------------------------------------------------------------------
 *      STMR Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_STMR_CR1_CEN        0x01
#define MASK_STMR_CR1_UDIS       0x02
#define MASK_STMR_CR1_URS        0x04
#define MASK_STMR_CR1_OPM        0x08
#define MASK_STMR_CR1_ARPE       0x80

#define MASK_STMR_IER_UIE        0x01

#define MASK_STMR_SR1_UIF        0x01

#define MASK_STMR_EGR_UG         0x01

#define MASK_STMR_PSCL_PSC       0x07


/*-------------------------------------------------------------------------
 *      DALI Registers register definitions
 *-----------------------------------------------------------------------*/
/* Clock prescaler LSB */
__IO_REG8    (DALI_CLK_L,  0x53C0, __READ_WRITE);
/* Clock prescaler MSB */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DALI_CLK    : 2;
} __BITS_DALI_CLK_H;
#endif
__IO_REG8_BIT(DALI_CLK_H,  0x53C1, __READ_WRITE, __BITS_DALI_CLK_H);

/* Message byte 0 register */
__IO_REG8    (DALI_FB0,    0x53C2, __READ);
/* Message byte 1 register */
__IO_REG8    (DALI_FB1,    0x53C3, __READ);
/* Message byte 2 register */
__IO_REG8    (DALI_FB2,    0x53C4, __READ);
/* Backward Data register */
__IO_REG8    (DALI_BD,     0x53C5, __READ_WRITE);
/* Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FTS         : 1;
  unsigned char RTS         : 1;
  unsigned char RTA         : 1;
  unsigned char DCME        : 1;
  unsigned char MLN         : 2;
  unsigned char SMK         : 1;
  unsigned char LNWDG_EN    : 1;
} __BITS_DALI_CR;
#endif
__IO_REG8_BIT(DALI_CR,     0x53C6, __READ_WRITE, __BITS_DALI_CR);

/* Control and Status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char WDGF        : 1;
  unsigned char WDGE        : 1;
  unsigned char RTF         : 1;
  unsigned char EF          : 1;
  unsigned char ITF         : 1;
  unsigned char IEN         : 1;
} __BITS_DALI_CSR;
#endif
__IO_REG8_BIT(DALI_CSR,    0x53C7, __READ_WRITE, __BITS_DALI_CSR);

/* Control and Status register1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WDG_PRSC    : 3;
  unsigned char RDY_REC     : 1;
  unsigned char CKS         : 4;
} __BITS_DALI_CSR1;
#endif
__IO_REG8_BIT(DALI_CSR1,   0x53C8, __READ_WRITE, __BITS_DALI_CSR1);

/* Control reverse signal line */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN_REV      : 1;
  unsigned char REV_DIN     : 1;
  unsigned char REV_DOUT    : 1;
} __BITS_DALI_REVLN;
#endif
__IO_REG8_BIT(DALI_REVLN,  0x53C9, __READ_WRITE, __BITS_DALI_REVLN);


/*-------------------------------------------------------------------------
 *      DALI Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define DALI_CLK_H_DALI_CLK      DALI_CLK_H_bit.DALI_CLK

#define DALI_CR_FTS              DALI_CR_bit.FTS
#define DALI_CR_RTS              DALI_CR_bit.RTS
#define DALI_CR_RTA              DALI_CR_bit.RTA
#define DALI_CR_DCME             DALI_CR_bit.DCME
#define DALI_CR_MLN              DALI_CR_bit.MLN
#define DALI_CR_SMK              DALI_CR_bit.SMK
#define DALI_CR_LNWDG_EN         DALI_CR_bit.LNWDG_EN

#define DALI_CSR_WDGF            DALI_CSR_bit.WDGF
#define DALI_CSR_WDGE            DALI_CSR_bit.WDGE
#define DALI_CSR_RTF             DALI_CSR_bit.RTF
#define DALI_CSR_EF              DALI_CSR_bit.EF
#define DALI_CSR_ITF             DALI_CSR_bit.ITF
#define DALI_CSR_IEN             DALI_CSR_bit.IEN

#define DALI_CSR1_WDG_PRSC       DALI_CSR1_bit.WDG_PRSC
#define DALI_CSR1_RDY_REC        DALI_CSR1_bit.RDY_REC
#define DALI_CSR1_CKS            DALI_CSR1_bit.CKS

#define DALI_REVLN_EN_REV        DALI_REVLN_bit.EN_REV
#define DALI_REVLN_REV_DIN       DALI_REVLN_bit.REV_DIN
#define DALI_REVLN_REV_DOUT      DALI_REVLN_bit.REV_DOUT

#endif

/*-------------------------------------------------------------------------
 *      DALI Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_DALI_CLK_H_DALI_CLK 0x03

#define MASK_DALI_CR_FTS         0x01
#define MASK_DALI_CR_RTS         0x02
#define MASK_DALI_CR_RTA         0x04
#define MASK_DALI_CR_DCME        0x08
#define MASK_DALI_CR_MLN         0x30
#define MASK_DALI_CR_SMK         0x40
#define MASK_DALI_CR_LNWDG_EN    0x80

#define MASK_DALI_CSR_WDGF       0x04
#define MASK_DALI_CSR_WDGE       0x08
#define MASK_DALI_CSR_RTF        0x10
#define MASK_DALI_CSR_EF         0x20
#define MASK_DALI_CSR_ITF        0x40
#define MASK_DALI_CSR_IEN        0x80

#define MASK_DALI_CSR1_WDG_PRSC  0x07
#define MASK_DALI_CSR1_RDY_REC   0x08
#define MASK_DALI_CSR1_CKS       0xF0

#define MASK_DALI_REVLN_EN_REV   0x01
#define MASK_DALI_REVLN_REV_DIN  0x02
#define MASK_DALI_REVLN_REV_DOUT 0x04


/*-------------------------------------------------------------------------
 *      ADC Registers register definitions
 *-----------------------------------------------------------------------*/
/* Configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PD          : 1;
  unsigned char STOP        : 1;
  unsigned char FIFO_FLUSH  : 1;
  unsigned char CIRCULAR    : 1;
  unsigned char FORMAT      : 1;
} __BITS_ADC_CFG;
#endif
__IO_REG8_BIT(ADC_CFG,     0x5400, __READ_WRITE, __BITS_ADC_CFG);

/* Start Of Conversion */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SOC         : 1;
} __BITS_ADC_SOC;
#endif
__IO_REG8_BIT(ADC_SOC,     0x5401, __WRITE, __BITS_ADC_SOC);

/* Interrupt Enable Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EOC_EN      : 1;
  unsigned char EOS_EN      : 1;
  unsigned char SEQ_FULL_EN : 1;
} __BITS_ADC_IER;
#endif
__IO_REG8_BIT(ADC_IER,     0x5402, __READ_WRITE, __BITS_ADC_IER);

/* Sequencer Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH          : 3;
  unsigned char GAIN        : 1;
} __BITS_ADC_SEQ;
#endif
__IO_REG8_BIT(ADC_SEQ,     0x5403, __WRITE, __BITS_ADC_SEQ);

/* Data Low Register */
__IO_REG8    (ADC_DATL_0,  0x5404, __READ);
/* Data High Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_HIGH   : 2;
} __BITS_ADC_DATH_0;
#endif
__IO_REG8_BIT(ADC_DATH_0,  0x5405, __READ, __BITS_ADC_DATH_0);

/* Data Low Register */
__IO_REG8    (ADC_DATL_1,  0x5406, __READ);
/* Data High Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_HIGH   : 2;
} __BITS_ADC_DATH_1;
#endif
__IO_REG8_BIT(ADC_DATH_1,  0x5407, __READ, __BITS_ADC_DATH_1);

/* Data Low Register */
__IO_REG8    (ADC_DATL_2,  0x5408, __READ);
/* Data High Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_HIGH   : 2;
} __BITS_ADC_DATH_2;
#endif
__IO_REG8_BIT(ADC_DATH_2,  0x5409, __READ, __BITS_ADC_DATH_2);

/* Data Low Register */
__IO_REG8    (ADC_DATL_3,  0x540A, __READ);
/* Data High Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_HIGH   : 2;
} __BITS_ADC_DATH_3;
#endif
__IO_REG8_BIT(ADC_DATH_3,  0x540B, __READ, __BITS_ADC_DATH_3);

/* Data Low Register */
__IO_REG8    (ADC_DATL_4,  0x540C, __READ);
/* Data High Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_HIGH   : 2;
} __BITS_ADC_DATH_4;
#endif
__IO_REG8_BIT(ADC_DATH_4,  0x540D, __READ, __BITS_ADC_DATH_4);

/* Data Low Register */
__IO_REG8    (ADC_DATL_5,  0x540E, __READ);
/* Data High Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_HIGH   : 2;
} __BITS_ADC_DATH_5;
#endif
__IO_REG8_BIT(ADC_DATH_5,  0x540F, __READ, __BITS_ADC_DATH_5);

/* Data Low Register */
__IO_REG8    (ADC_DATL_6,  0x5410, __READ);
/* Data High Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_HIGH   : 2;
} __BITS_ADC_DATH_6;
#endif
__IO_REG8_BIT(ADC_DATH_6,  0x5411, __READ, __BITS_ADC_DATH_6);

/* Data Low Register */
__IO_REG8    (ADC_DATL_7,  0x5412, __READ);
/* Data High Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DATA_HIGH   : 2;
} __BITS_ADC_DATH_7;
#endif
__IO_REG8_BIT(ADC_DATH_7,  0x5413, __READ, __BITS_ADC_DATH_7);

/* Status Register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EOC         : 1;
  unsigned char EOS         : 1;
  unsigned char SEQ_FULL    : 1;
} __BITS_ADC_SR;
#endif
__IO_REG8_BIT(ADC_SR,      0x5414, __READ_WRITE, __BITS_ADC_SR);

/* SOC Delay Counter Register */
__IO_REG8    (ADC_DLYCNT,  0x5415, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      ADC Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define ADC_CFG_PD               ADC_CFG_bit.PD
#define ADC_CFG_STOP             ADC_CFG_bit.STOP
#define ADC_CFG_FIFO_FLUSH       ADC_CFG_bit.FIFO_FLUSH
#define ADC_CFG_CIRCULAR         ADC_CFG_bit.CIRCULAR
#define ADC_CFG_FORMAT           ADC_CFG_bit.FORMAT

#define ADC_SOC_SOC              ADC_SOC_bit.SOC

#define ADC_IER_EOC_EN           ADC_IER_bit.EOC_EN
#define ADC_IER_EOS_EN           ADC_IER_bit.EOS_EN
#define ADC_IER_SEQ_FULL_EN      ADC_IER_bit.SEQ_FULL_EN

#define ADC_SEQ_CH               ADC_SEQ_bit.CH
#define ADC_SEQ_GAIN             ADC_SEQ_bit.GAIN

#define ADC_DATH_0_DATA_HIGH     ADC_DATH_0_bit.DATA_HIGH

#define ADC_DATH_1_DATA_HIGH     ADC_DATH_1_bit.DATA_HIGH

#define ADC_DATH_2_DATA_HIGH     ADC_DATH_2_bit.DATA_HIGH

#define ADC_DATH_3_DATA_HIGH     ADC_DATH_3_bit.DATA_HIGH

#define ADC_DATH_4_DATA_HIGH     ADC_DATH_4_bit.DATA_HIGH

#define ADC_DATH_5_DATA_HIGH     ADC_DATH_5_bit.DATA_HIGH

#define ADC_DATH_6_DATA_HIGH     ADC_DATH_6_bit.DATA_HIGH

#define ADC_DATH_7_DATA_HIGH     ADC_DATH_7_bit.DATA_HIGH

#define ADC_SR_EOC               ADC_SR_bit.EOC
#define ADC_SR_EOS               ADC_SR_bit.EOS
#define ADC_SR_SEQ_FULL          ADC_SR_bit.SEQ_FULL

#endif

/*-------------------------------------------------------------------------
 *      ADC Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ADC_CFG_PD          0x01
#define MASK_ADC_CFG_STOP        0x02
#define MASK_ADC_CFG_FIFO_FLUSH  0x04
#define MASK_ADC_CFG_CIRCULAR    0x08
#define MASK_ADC_CFG_FORMAT      0x10

#define MASK_ADC_SOC_SOC         0x01

#define MASK_ADC_IER_EOC_EN      0x01
#define MASK_ADC_IER_EOS_EN      0x02
#define MASK_ADC_IER_SEQ_FULL_EN 0x04

#define MASK_ADC_SEQ_CH          0x07
#define MASK_ADC_SEQ_GAIN        0x08

#define MASK_ADC_DATH_0_DATA_HIGH 0x03

#define MASK_ADC_DATH_1_DATA_HIGH 0x03

#define MASK_ADC_DATH_2_DATA_HIGH 0x03

#define MASK_ADC_DATH_3_DATA_HIGH 0x03

#define MASK_ADC_DATH_4_DATA_HIGH 0x03

#define MASK_ADC_DATH_5_DATA_HIGH 0x03

#define MASK_ADC_DATH_6_DATA_HIGH 0x03

#define MASK_ADC_DATH_7_DATA_HIGH 0x03

#define MASK_ADC_SR_EOC          0x01
#define MASK_ADC_SR_EOS          0x02
#define MASK_ADC_SR_SEQ_FULL     0x04


/*-------------------------------------------------------------------------
 *      SMED 0 Registers register definitions
 *-----------------------------------------------------------------------*/
/* Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START_CNT   : 1;
  unsigned char FSM_ENA     : 1;
} __BITS_SMD0_CTR;
#endif
__IO_REG8_BIT(SMD0_CTR,    0x5500, __READ_WRITE, __BITS_SMD0_CTR);

/* Control timer register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIME_T0_VAL : 1;
  unsigned char TIME_T1_VAL : 1;
  unsigned char TIME_T2_VAL : 1;
  unsigned char TIME_T3_VAL : 1;
  unsigned char DITHER_VAL  : 1;
} __BITS_SMD0_CTR_TMR;
#endif
__IO_REG8_BIT(SMD0_CTR_TMR, 0x5501, __READ_WRITE, __BITS_SMD0_CTR_TMR);

/* Control input register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RS_INSIG0   : 1;
  unsigned char RS_INSIG1   : 1;
  unsigned char RS_INSIG2   : 1;
  unsigned char RAIS_EN     : 1;
  unsigned char EL_INSIG0   : 1;
  unsigned char EL_INSIG1   : 1;
  unsigned char EL_INSIG2   : 1;
  unsigned char EL_EN       : 1;
} __BITS_SMD0_CTR_INP;
#endif
__IO_REG8_BIT(SMD0_CTR_INP, 0x5502, __READ_WRITE, __BITS_SMD0_CTR_INP);

/* Dithering register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DITH0       : 1;
  unsigned char DITH1       : 1;
  unsigned char DITH2       : 1;
  unsigned char DITH3       : 1;
  unsigned char DITH4       : 1;
  unsigned char DITH5       : 1;
  unsigned char DITH6       : 1;
  unsigned char DITH7       : 1;
} __BITS_SMD0_CTR_DTHR;
#endif
__IO_REG8_BIT(SMD0_CTR_DTHR, 0x5503, __READ_WRITE, __BITS_SMD0_CTR_DTHR);

/* Time T0 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0L0    : 1;
  unsigned char TIM_T0L1    : 1;
  unsigned char TIM_T0L2    : 1;
  unsigned char TIM_T0L3    : 1;
  unsigned char TIM_T0L4    : 1;
  unsigned char TIM_T0L5    : 1;
  unsigned char TIM_T0L6    : 1;
  unsigned char TIM_T0L7    : 1;
} __BITS_SMD0_TMR_T0L;
#endif
__IO_REG8_BIT(SMD0_TMR_T0L, 0x5504, __READ_WRITE, __BITS_SMD0_TMR_T0L);

/* Time T0 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0H0    : 1;
  unsigned char TIM_T0H1    : 1;
  unsigned char TIM_T0H2    : 1;
  unsigned char TIM_T0H3    : 1;
  unsigned char TIM_T0H4    : 1;
  unsigned char TIM_T0H5    : 1;
  unsigned char TIM_T0H6    : 1;
  unsigned char TIM_T0H7    : 1;
} __BITS_SMD0_TMR_T0H;
#endif
__IO_REG8_BIT(SMD0_TMR_T0H, 0x5505, __READ_WRITE, __BITS_SMD0_TMR_T0H);

/* Time T1 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1L0    : 1;
  unsigned char TIM_T1L1    : 1;
  unsigned char TIM_T1L2    : 1;
  unsigned char TIM_T1L3    : 1;
  unsigned char TIM_T1L4    : 1;
  unsigned char TIM_T1L5    : 1;
  unsigned char TIM_T1L6    : 1;
  unsigned char TIM_T1L7    : 1;
} __BITS_SMD0_TMR_T1L;
#endif
__IO_REG8_BIT(SMD0_TMR_T1L, 0x5506, __READ_WRITE, __BITS_SMD0_TMR_T1L);

/* Time T1 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1H0    : 1;
  unsigned char TIM_T1H1    : 1;
  unsigned char TIM_T1H2    : 1;
  unsigned char TIM_T1H3    : 1;
  unsigned char TIM_T1H4    : 1;
  unsigned char TIM_T1H5    : 1;
  unsigned char TIM_T1H6    : 1;
  unsigned char TIM_T1H7    : 1;
} __BITS_SMD0_TMR_T1H;
#endif
__IO_REG8_BIT(SMD0_TMR_T1H, 0x5507, __READ_WRITE, __BITS_SMD0_TMR_T1H);

/* Time T2 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2L0    : 1;
  unsigned char TIM_T2L1    : 1;
  unsigned char TIM_T2L2    : 1;
  unsigned char TIM_T2L3    : 1;
  unsigned char TIM_T2L4    : 1;
  unsigned char TIM_T2L5    : 1;
  unsigned char TIM_T2L6    : 1;
  unsigned char TIM_T2L7    : 1;
} __BITS_SMD0_TMR_T2L;
#endif
__IO_REG8_BIT(SMD0_TMR_T2L, 0x5508, __READ_WRITE, __BITS_SMD0_TMR_T2L);

/* Time T2 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2H0    : 1;
  unsigned char TIM_T2H1    : 1;
  unsigned char TIM_T2H2    : 1;
  unsigned char TIM_T2H3    : 1;
  unsigned char TIM_T2H4    : 1;
  unsigned char TIM_T2H5    : 1;
  unsigned char TIM_T2H6    : 1;
  unsigned char TIM_T2H7    : 1;
} __BITS_SMD0_TMR_T2H;
#endif
__IO_REG8_BIT(SMD0_TMR_T2H, 0x5509, __READ_WRITE, __BITS_SMD0_TMR_T2H);

/* Time T3 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3L0    : 1;
  unsigned char TIM_T3L1    : 1;
  unsigned char TIM_T3L2    : 1;
  unsigned char TIM_T3L3    : 1;
  unsigned char TIM_T3L4    : 1;
  unsigned char TIM_T3L5    : 1;
  unsigned char TIM_T3L6    : 1;
  unsigned char TIM_T3L7    : 1;
} __BITS_SMD0_TMR_T3L;
#endif
__IO_REG8_BIT(SMD0_TMR_T3L, 0x550A, __READ_WRITE, __BITS_SMD0_TMR_T3L);

/* Time T3 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3H0    : 1;
  unsigned char TIM_T3H1    : 1;
  unsigned char TIM_T3H2    : 1;
  unsigned char TIM_T3H3    : 1;
  unsigned char TIM_T3H4    : 1;
  unsigned char TIM_T3H5    : 1;
  unsigned char TIM_T3H6    : 1;
  unsigned char TIM_T3H7    : 1;
} __BITS_SMD0_TMR_T3H;
#endif
__IO_REG8_BIT(SMD0_TMR_T3H, 0x550B, __READ_WRITE, __BITS_SMD0_TMR_T3H);

/* Parameter 0 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD0_PRM_ID0;
#endif
__IO_REG8_BIT(SMD0_PRM_ID0, 0x550C, __READ_WRITE, __BITS_SMD0_PRM_ID0);

/* Parameter 1 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD0_PRM_ID1;
#endif
__IO_REG8_BIT(SMD0_PRM_ID1, 0x550D, __READ_WRITE, __BITS_SMD0_PRM_ID1);

/* Parameter 2 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD0_PRM_ID2;
#endif
__IO_REG8_BIT(SMD0_PRM_ID2, 0x550E, __READ_WRITE, __BITS_SMD0_PRM_ID2);

/* Parameter 0 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD0_PRM_S00;
#endif
__IO_REG8_BIT(SMD0_PRM_S00, 0x550F, __READ_WRITE, __BITS_SMD0_PRM_S00);

/* Parameter 1 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD0_PRM_S01;
#endif
__IO_REG8_BIT(SMD0_PRM_S01, 0x5510, __READ_WRITE, __BITS_SMD0_PRM_S01);

/* Parameter 2 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD0_PRM_S02;
#endif
__IO_REG8_BIT(SMD0_PRM_S02, 0x5511, __READ_WRITE, __BITS_SMD0_PRM_S02);

/* Parameter 0 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD0_PRM_S10;
#endif
__IO_REG8_BIT(SMD0_PRM_S10, 0x5512, __READ_WRITE, __BITS_SMD0_PRM_S10);

/* Parameter 1 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD0_PRM_S11;
#endif
__IO_REG8_BIT(SMD0_PRM_S11, 0x5513, __READ_WRITE, __BITS_SMD0_PRM_S11);

/* Parameter 2 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD0_PRM_S12;
#endif
__IO_REG8_BIT(SMD0_PRM_S12, 0x5514, __READ_WRITE, __BITS_SMD0_PRM_S12);

/* Parameter 0 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD0_PRM_S20;
#endif
__IO_REG8_BIT(SMD0_PRM_S20, 0x5515, __READ_WRITE, __BITS_SMD0_PRM_S20);

/* Parameter 1 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD0_PRM_S21;
#endif
__IO_REG8_BIT(SMD0_PRM_S21, 0x5516, __READ_WRITE, __BITS_SMD0_PRM_S21);

/* Parameter 2 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD0_PRM_S22;
#endif
__IO_REG8_BIT(SMD0_PRM_S22, 0x5517, __READ_WRITE, __BITS_SMD0_PRM_S22);

/* Parameter 0 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD0_PRM_S30;
#endif
__IO_REG8_BIT(SMD0_PRM_S30, 0x5518, __READ_WRITE, __BITS_SMD0_PRM_S30);

/* Parameter 1 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD0_PRM_S31;
#endif
__IO_REG8_BIT(SMD0_PRM_S31, 0x5519, __READ_WRITE, __BITS_SMD0_PRM_S31);

/* Parameter 2 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD0_PRM_S32;
#endif
__IO_REG8_BIT(SMD0_PRM_S32, 0x551A, __READ_WRITE, __BITS_SMD0_PRM_S32);

/* Timer configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TIM_NUM0    : 1;
  unsigned char TIM_NUM1    : 1;
  unsigned char TIM_UPD0    : 1;
  unsigned char TIM_UPD1    : 1;
} __BITS_SMD0_CFG;
#endif
__IO_REG8_BIT(SMD0_CFG,    0x551B, __READ_WRITE, __BITS_SMD0_CFG);

/* Dump counter lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LO0     : 1;
  unsigned char CNT_LO1     : 1;
  unsigned char CNT_LO2     : 1;
  unsigned char CNT_LO3     : 1;
  unsigned char CNT_LO4     : 1;
  unsigned char CNT_LO5     : 1;
  unsigned char CNT_LO6     : 1;
  unsigned char CNT_LO7     : 1;
} __BITS_SMD0_DMP_L;
#endif
__IO_REG8_BIT(SMD0_DMP_L,  0x551C, __READ, __BITS_SMD0_DMP_L);

/* Dump counter msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LH0     : 1;
  unsigned char CNT_LH1     : 1;
  unsigned char CNT_LH2     : 1;
  unsigned char CNT_LH3     : 1;
  unsigned char CNT_LH4     : 1;
  unsigned char CNT_LH5     : 1;
  unsigned char CNT_LH6     : 1;
  unsigned char CNT_LH7     : 1;
} __BITS_SMD0_DMP_H;
#endif
__IO_REG8_BIT(SMD0_DMP_H,  0x551D, __READ, __BITS_SMD0_DMP_H);

/* General status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EX0_DUMP    : 1;
  unsigned char EX1_DUMP    : 1;
  unsigned char EX2_DUMP    : 1;
  unsigned char CNT_FLAG    : 1;
  unsigned char DMP_LK0     : 1;
  unsigned char DMP_LK1     : 1;
  unsigned char EVENT_OV    : 1;
} __BITS_SMD0_GSTS;
#endif
__IO_REG8_BIT(SMD0_GSTS,   0x551E, __READ_WRITE, __BITS_SMD0_GSTS);

/* Interrupt status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OVER    : 1;
  unsigned char EXT0_INT    : 1;
  unsigned char EXT1_INT    : 1;
  unsigned char EXT2_INT    : 1;
  unsigned char STA_S0_IT   : 1;
  unsigned char STA_S1_IT   : 1;
  unsigned char STA_S2_IT   : 1;
  unsigned char STA_S3_IT   : 1;
} __BITS_SMD0_ISR;
#endif
__IO_REG8_BIT(SMD0_ISR,    0x551F, __READ_WRITE, __BITS_SMD0_ISR);

/* Interrupt mask register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OV_R    : 1;
  unsigned char IT_EXT0     : 1;
  unsigned char IT_EXT1     : 1;
  unsigned char IT_EXT2     : 1;
  unsigned char IT_STA_S0   : 1;
  unsigned char IT_STA_S1   : 1;
  unsigned char IT_STA_S2   : 1;
  unsigned char IT_STA_S3   : 1;
} __BITS_SMD0_IMR;
#endif
__IO_REG8_BIT(SMD0_IMR,    0x5520, __READ_WRITE, __BITS_SMD0_IMR);

/* External event control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INPUT0_EN   : 1;
  unsigned char INPUT1_EN   : 1;
  unsigned char INPUT2_EN   : 1;
  unsigned char INPUT_LAT   : 1;
} __BITS_SMD0_ISEL;
#endif
__IO_REG8_BIT(SMD0_ISEL,   0x5521, __READ_WRITE, __BITS_SMD0_ISEL);

/* Dump enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DMPE_EX0    : 1;
  unsigned char DMPE_EX1    : 1;
  unsigned char DMPE_EX2    : 1;
  unsigned char DMP_EVER    : 1;
  unsigned char CPL_IT_GE   : 1;
} __BITS_SMD0_DMP;
#endif
__IO_REG8_BIT(SMD0_DMP,    0x5522, __READ_WRITE, __BITS_SMD0_DMP);

/* FSM status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FSM0        : 1;
  unsigned char FSM1        : 1;
  unsigned char FSM2        : 1;
  unsigned char PWM         : 1;
  unsigned char EVINP0      : 1;
  unsigned char EVINP1      : 1;
  unsigned char EVINP2      : 1;
} __BITS_SMD0_FSM_STS;
#endif
__IO_REG8_BIT(SMD0_FSM_STS, 0x5523, __READ, __BITS_SMD0_FSM_STS);


/*-------------------------------------------------------------------------
 *      SMED 0 Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SMD0_CTR_START_CNT       SMD0_CTR_bit.START_CNT
#define SMD0_CTR_FSM_ENA         SMD0_CTR_bit.FSM_ENA

#define SMD0_CTR_TMR_TIME_T0_VAL SMD0_CTR_TMR_bit.TIME_T0_VAL
#define SMD0_CTR_TMR_TIME_T1_VAL SMD0_CTR_TMR_bit.TIME_T1_VAL
#define SMD0_CTR_TMR_TIME_T2_VAL SMD0_CTR_TMR_bit.TIME_T2_VAL
#define SMD0_CTR_TMR_TIME_T3_VAL SMD0_CTR_TMR_bit.TIME_T3_VAL
#define SMD0_CTR_TMR_DITHER_VAL  SMD0_CTR_TMR_bit.DITHER_VAL

#define SMD0_CTR_INP_RS_INSIG0   SMD0_CTR_INP_bit.RS_INSIG0
#define SMD0_CTR_INP_RS_INSIG1   SMD0_CTR_INP_bit.RS_INSIG1
#define SMD0_CTR_INP_RS_INSIG2   SMD0_CTR_INP_bit.RS_INSIG2
#define SMD0_CTR_INP_RAIS_EN     SMD0_CTR_INP_bit.RAIS_EN
#define SMD0_CTR_INP_EL_INSIG0   SMD0_CTR_INP_bit.EL_INSIG0
#define SMD0_CTR_INP_EL_INSIG1   SMD0_CTR_INP_bit.EL_INSIG1
#define SMD0_CTR_INP_EL_INSIG2   SMD0_CTR_INP_bit.EL_INSIG2
#define SMD0_CTR_INP_EL_EN       SMD0_CTR_INP_bit.EL_EN

#define SMD0_CTR_DTHR_DITH0      SMD0_CTR_DTHR_bit.DITH0
#define SMD0_CTR_DTHR_DITH1      SMD0_CTR_DTHR_bit.DITH1
#define SMD0_CTR_DTHR_DITH2      SMD0_CTR_DTHR_bit.DITH2
#define SMD0_CTR_DTHR_DITH3      SMD0_CTR_DTHR_bit.DITH3
#define SMD0_CTR_DTHR_DITH4      SMD0_CTR_DTHR_bit.DITH4
#define SMD0_CTR_DTHR_DITH5      SMD0_CTR_DTHR_bit.DITH5
#define SMD0_CTR_DTHR_DITH6      SMD0_CTR_DTHR_bit.DITH6
#define SMD0_CTR_DTHR_DITH7      SMD0_CTR_DTHR_bit.DITH7

#define SMD0_TMR_T0L_TIM_T0L0    SMD0_TMR_T0L_bit.TIM_T0L0
#define SMD0_TMR_T0L_TIM_T0L1    SMD0_TMR_T0L_bit.TIM_T0L1
#define SMD0_TMR_T0L_TIM_T0L2    SMD0_TMR_T0L_bit.TIM_T0L2
#define SMD0_TMR_T0L_TIM_T0L3    SMD0_TMR_T0L_bit.TIM_T0L3
#define SMD0_TMR_T0L_TIM_T0L4    SMD0_TMR_T0L_bit.TIM_T0L4
#define SMD0_TMR_T0L_TIM_T0L5    SMD0_TMR_T0L_bit.TIM_T0L5
#define SMD0_TMR_T0L_TIM_T0L6    SMD0_TMR_T0L_bit.TIM_T0L6
#define SMD0_TMR_T0L_TIM_T0L7    SMD0_TMR_T0L_bit.TIM_T0L7

#define SMD0_TMR_T0H_TIM_T0H0    SMD0_TMR_T0H_bit.TIM_T0H0
#define SMD0_TMR_T0H_TIM_T0H1    SMD0_TMR_T0H_bit.TIM_T0H1
#define SMD0_TMR_T0H_TIM_T0H2    SMD0_TMR_T0H_bit.TIM_T0H2
#define SMD0_TMR_T0H_TIM_T0H3    SMD0_TMR_T0H_bit.TIM_T0H3
#define SMD0_TMR_T0H_TIM_T0H4    SMD0_TMR_T0H_bit.TIM_T0H4
#define SMD0_TMR_T0H_TIM_T0H5    SMD0_TMR_T0H_bit.TIM_T0H5
#define SMD0_TMR_T0H_TIM_T0H6    SMD0_TMR_T0H_bit.TIM_T0H6
#define SMD0_TMR_T0H_TIM_T0H7    SMD0_TMR_T0H_bit.TIM_T0H7

#define SMD0_TMR_T1L_TIM_T1L0    SMD0_TMR_T1L_bit.TIM_T1L0
#define SMD0_TMR_T1L_TIM_T1L1    SMD0_TMR_T1L_bit.TIM_T1L1
#define SMD0_TMR_T1L_TIM_T1L2    SMD0_TMR_T1L_bit.TIM_T1L2
#define SMD0_TMR_T1L_TIM_T1L3    SMD0_TMR_T1L_bit.TIM_T1L3
#define SMD0_TMR_T1L_TIM_T1L4    SMD0_TMR_T1L_bit.TIM_T1L4
#define SMD0_TMR_T1L_TIM_T1L5    SMD0_TMR_T1L_bit.TIM_T1L5
#define SMD0_TMR_T1L_TIM_T1L6    SMD0_TMR_T1L_bit.TIM_T1L6
#define SMD0_TMR_T1L_TIM_T1L7    SMD0_TMR_T1L_bit.TIM_T1L7

#define SMD0_TMR_T1H_TIM_T1H0    SMD0_TMR_T1H_bit.TIM_T1H0
#define SMD0_TMR_T1H_TIM_T1H1    SMD0_TMR_T1H_bit.TIM_T1H1
#define SMD0_TMR_T1H_TIM_T1H2    SMD0_TMR_T1H_bit.TIM_T1H2
#define SMD0_TMR_T1H_TIM_T1H3    SMD0_TMR_T1H_bit.TIM_T1H3
#define SMD0_TMR_T1H_TIM_T1H4    SMD0_TMR_T1H_bit.TIM_T1H4
#define SMD0_TMR_T1H_TIM_T1H5    SMD0_TMR_T1H_bit.TIM_T1H5
#define SMD0_TMR_T1H_TIM_T1H6    SMD0_TMR_T1H_bit.TIM_T1H6
#define SMD0_TMR_T1H_TIM_T1H7    SMD0_TMR_T1H_bit.TIM_T1H7

#define SMD0_TMR_T2L_TIM_T2L0    SMD0_TMR_T2L_bit.TIM_T2L0
#define SMD0_TMR_T2L_TIM_T2L1    SMD0_TMR_T2L_bit.TIM_T2L1
#define SMD0_TMR_T2L_TIM_T2L2    SMD0_TMR_T2L_bit.TIM_T2L2
#define SMD0_TMR_T2L_TIM_T2L3    SMD0_TMR_T2L_bit.TIM_T2L3
#define SMD0_TMR_T2L_TIM_T2L4    SMD0_TMR_T2L_bit.TIM_T2L4
#define SMD0_TMR_T2L_TIM_T2L5    SMD0_TMR_T2L_bit.TIM_T2L5
#define SMD0_TMR_T2L_TIM_T2L6    SMD0_TMR_T2L_bit.TIM_T2L6
#define SMD0_TMR_T2L_TIM_T2L7    SMD0_TMR_T2L_bit.TIM_T2L7

#define SMD0_TMR_T2H_TIM_T2H0    SMD0_TMR_T2H_bit.TIM_T2H0
#define SMD0_TMR_T2H_TIM_T2H1    SMD0_TMR_T2H_bit.TIM_T2H1
#define SMD0_TMR_T2H_TIM_T2H2    SMD0_TMR_T2H_bit.TIM_T2H2
#define SMD0_TMR_T2H_TIM_T2H3    SMD0_TMR_T2H_bit.TIM_T2H3
#define SMD0_TMR_T2H_TIM_T2H4    SMD0_TMR_T2H_bit.TIM_T2H4
#define SMD0_TMR_T2H_TIM_T2H5    SMD0_TMR_T2H_bit.TIM_T2H5
#define SMD0_TMR_T2H_TIM_T2H6    SMD0_TMR_T2H_bit.TIM_T2H6
#define SMD0_TMR_T2H_TIM_T2H7    SMD0_TMR_T2H_bit.TIM_T2H7

#define SMD0_TMR_T3L_TIM_T3L0    SMD0_TMR_T3L_bit.TIM_T3L0
#define SMD0_TMR_T3L_TIM_T3L1    SMD0_TMR_T3L_bit.TIM_T3L1
#define SMD0_TMR_T3L_TIM_T3L2    SMD0_TMR_T3L_bit.TIM_T3L2
#define SMD0_TMR_T3L_TIM_T3L3    SMD0_TMR_T3L_bit.TIM_T3L3
#define SMD0_TMR_T3L_TIM_T3L4    SMD0_TMR_T3L_bit.TIM_T3L4
#define SMD0_TMR_T3L_TIM_T3L5    SMD0_TMR_T3L_bit.TIM_T3L5
#define SMD0_TMR_T3L_TIM_T3L6    SMD0_TMR_T3L_bit.TIM_T3L6
#define SMD0_TMR_T3L_TIM_T3L7    SMD0_TMR_T3L_bit.TIM_T3L7

#define SMD0_TMR_T3H_TIM_T3H0    SMD0_TMR_T3H_bit.TIM_T3H0
#define SMD0_TMR_T3H_TIM_T3H1    SMD0_TMR_T3H_bit.TIM_T3H1
#define SMD0_TMR_T3H_TIM_T3H2    SMD0_TMR_T3H_bit.TIM_T3H2
#define SMD0_TMR_T3H_TIM_T3H3    SMD0_TMR_T3H_bit.TIM_T3H3
#define SMD0_TMR_T3H_TIM_T3H4    SMD0_TMR_T3H_bit.TIM_T3H4
#define SMD0_TMR_T3H_TIM_T3H5    SMD0_TMR_T3H_bit.TIM_T3H5
#define SMD0_TMR_T3H_TIM_T3H6    SMD0_TMR_T3H_bit.TIM_T3H6
#define SMD0_TMR_T3H_TIM_T3H7    SMD0_TMR_T3H_bit.TIM_T3H7

#define SMD0_PRM_ID0_NX_STAT0    SMD0_PRM_ID0_bit.NX_STAT0
#define SMD0_PRM_ID0_NX_STAT1    SMD0_PRM_ID0_bit.NX_STAT1
#define SMD0_PRM_ID0_EDGE0       SMD0_PRM_ID0_bit.EDGE0
#define SMD0_PRM_ID0_EDGE1       SMD0_PRM_ID0_bit.EDGE1
#define SMD0_PRM_ID0_CNT_RSTE    SMD0_PRM_ID0_bit.CNT_RSTE
#define SMD0_PRM_ID0_PULS_EDG    SMD0_PRM_ID0_bit.PULS_EDG
#define SMD0_PRM_ID0_HOLD_JMP    SMD0_PRM_ID0_bit.HOLD_JMP
#define SMD0_PRM_ID0_AND_OR      SMD0_PRM_ID0_bit.AND_OR

#define SMD0_PRM_ID1_CEDGE0      SMD0_PRM_ID1_bit.CEDGE0
#define SMD0_PRM_ID1_CEDGE1      SMD0_PRM_ID1_bit.CEDGE1
#define SMD0_PRM_ID1_CNT_RSTC    SMD0_PRM_ID1_bit.CNT_RSTC
#define SMD0_PRM_ID1_PULS_CMP    SMD0_PRM_ID1_bit.PULS_CMP
#define SMD0_PRM_ID1_HOLD_EXIT   SMD0_PRM_ID1_bit.HOLD_EXIT

#define SMD0_PRM_ID2_LATCH_RS    SMD0_PRM_ID2_bit.LATCH_RS

#define SMD0_PRM_S00_NX_STAT0    SMD0_PRM_S00_bit.NX_STAT0
#define SMD0_PRM_S00_NX_STAT1    SMD0_PRM_S00_bit.NX_STAT1
#define SMD0_PRM_S00_EDGE0       SMD0_PRM_S00_bit.EDGE0
#define SMD0_PRM_S00_EDGE1       SMD0_PRM_S00_bit.EDGE1
#define SMD0_PRM_S00_CNT_RSTE    SMD0_PRM_S00_bit.CNT_RSTE
#define SMD0_PRM_S00_PULS_EDG    SMD0_PRM_S00_bit.PULS_EDG
#define SMD0_PRM_S00_HOLD_JMP    SMD0_PRM_S00_bit.HOLD_JMP
#define SMD0_PRM_S00_AND_OR      SMD0_PRM_S00_bit.AND_OR

#define SMD0_PRM_S01_CEDGE0      SMD0_PRM_S01_bit.CEDGE0
#define SMD0_PRM_S01_CEDGE1      SMD0_PRM_S01_bit.CEDGE1
#define SMD0_PRM_S01_CNT_RSTC    SMD0_PRM_S01_bit.CNT_RSTC
#define SMD0_PRM_S01_PULS_CMP    SMD0_PRM_S01_bit.PULS_CMP
#define SMD0_PRM_S01_HOLD_EXIT   SMD0_PRM_S01_bit.HOLD_EXIT

#define SMD0_PRM_S02_LATCH_RS    SMD0_PRM_S02_bit.LATCH_RS

#define SMD0_PRM_S10_NX_STAT0    SMD0_PRM_S10_bit.NX_STAT0
#define SMD0_PRM_S10_NX_STAT1    SMD0_PRM_S10_bit.NX_STAT1
#define SMD0_PRM_S10_EDGE0       SMD0_PRM_S10_bit.EDGE0
#define SMD0_PRM_S10_EDGE1       SMD0_PRM_S10_bit.EDGE1
#define SMD0_PRM_S10_CNT_RSTE    SMD0_PRM_S10_bit.CNT_RSTE
#define SMD0_PRM_S10_PULS_EDG    SMD0_PRM_S10_bit.PULS_EDG
#define SMD0_PRM_S10_HOLD_JMP    SMD0_PRM_S10_bit.HOLD_JMP
#define SMD0_PRM_S10_AND_OR      SMD0_PRM_S10_bit.AND_OR

#define SMD0_PRM_S11_CEDGE0      SMD0_PRM_S11_bit.CEDGE0
#define SMD0_PRM_S11_CEDGE1      SMD0_PRM_S11_bit.CEDGE1
#define SMD0_PRM_S11_CNT_RSTC    SMD0_PRM_S11_bit.CNT_RSTC
#define SMD0_PRM_S11_PULS_CMP    SMD0_PRM_S11_bit.PULS_CMP
#define SMD0_PRM_S11_HOLD_EXIT   SMD0_PRM_S11_bit.HOLD_EXIT

#define SMD0_PRM_S12_LATCH_RS    SMD0_PRM_S12_bit.LATCH_RS

#define SMD0_PRM_S20_NX_STAT0    SMD0_PRM_S20_bit.NX_STAT0
#define SMD0_PRM_S20_NX_STAT1    SMD0_PRM_S20_bit.NX_STAT1
#define SMD0_PRM_S20_EDGE0       SMD0_PRM_S20_bit.EDGE0
#define SMD0_PRM_S20_EDGE1       SMD0_PRM_S20_bit.EDGE1
#define SMD0_PRM_S20_CNT_RSTE    SMD0_PRM_S20_bit.CNT_RSTE
#define SMD0_PRM_S20_PULS_EDG    SMD0_PRM_S20_bit.PULS_EDG
#define SMD0_PRM_S20_HOLD_JMP    SMD0_PRM_S20_bit.HOLD_JMP
#define SMD0_PRM_S20_AND_OR      SMD0_PRM_S20_bit.AND_OR

#define SMD0_PRM_S21_CEDGE0      SMD0_PRM_S21_bit.CEDGE0
#define SMD0_PRM_S21_CEDGE1      SMD0_PRM_S21_bit.CEDGE1
#define SMD0_PRM_S21_CNT_RSTC    SMD0_PRM_S21_bit.CNT_RSTC
#define SMD0_PRM_S21_PULS_CMP    SMD0_PRM_S21_bit.PULS_CMP
#define SMD0_PRM_S21_HOLD_EXIT   SMD0_PRM_S21_bit.HOLD_EXIT

#define SMD0_PRM_S22_LATCH_RS    SMD0_PRM_S22_bit.LATCH_RS

#define SMD0_PRM_S30_NX_STAT0    SMD0_PRM_S30_bit.NX_STAT0
#define SMD0_PRM_S30_NX_STAT1    SMD0_PRM_S30_bit.NX_STAT1
#define SMD0_PRM_S30_EDGE0       SMD0_PRM_S30_bit.EDGE0
#define SMD0_PRM_S30_EDGE1       SMD0_PRM_S30_bit.EDGE1
#define SMD0_PRM_S30_CNT_RSTE    SMD0_PRM_S30_bit.CNT_RSTE
#define SMD0_PRM_S30_PULS_EDG    SMD0_PRM_S30_bit.PULS_EDG
#define SMD0_PRM_S30_HOLD_JMP    SMD0_PRM_S30_bit.HOLD_JMP
#define SMD0_PRM_S30_AND_OR      SMD0_PRM_S30_bit.AND_OR

#define SMD0_PRM_S31_CEDGE0      SMD0_PRM_S31_bit.CEDGE0
#define SMD0_PRM_S31_CEDGE1      SMD0_PRM_S31_bit.CEDGE1
#define SMD0_PRM_S31_CNT_RSTC    SMD0_PRM_S31_bit.CNT_RSTC
#define SMD0_PRM_S31_PULS_CMP    SMD0_PRM_S31_bit.PULS_CMP
#define SMD0_PRM_S31_HOLD_EXIT   SMD0_PRM_S31_bit.HOLD_EXIT

#define SMD0_PRM_S32_LATCH_RS    SMD0_PRM_S32_bit.LATCH_RS

#define SMD0_CFG_TIM_NUM0        SMD0_CFG_bit.TIM_NUM0
#define SMD0_CFG_TIM_NUM1        SMD0_CFG_bit.TIM_NUM1
#define SMD0_CFG_TIM_UPD0        SMD0_CFG_bit.TIM_UPD0
#define SMD0_CFG_TIM_UPD1        SMD0_CFG_bit.TIM_UPD1

#define SMD0_DMP_L_CNT_LO0       SMD0_DMP_L_bit.CNT_LO0
#define SMD0_DMP_L_CNT_LO1       SMD0_DMP_L_bit.CNT_LO1
#define SMD0_DMP_L_CNT_LO2       SMD0_DMP_L_bit.CNT_LO2
#define SMD0_DMP_L_CNT_LO3       SMD0_DMP_L_bit.CNT_LO3
#define SMD0_DMP_L_CNT_LO4       SMD0_DMP_L_bit.CNT_LO4
#define SMD0_DMP_L_CNT_LO5       SMD0_DMP_L_bit.CNT_LO5
#define SMD0_DMP_L_CNT_LO6       SMD0_DMP_L_bit.CNT_LO6
#define SMD0_DMP_L_CNT_LO7       SMD0_DMP_L_bit.CNT_LO7

#define SMD0_DMP_H_CNT_LH0       SMD0_DMP_H_bit.CNT_LH0
#define SMD0_DMP_H_CNT_LH1       SMD0_DMP_H_bit.CNT_LH1
#define SMD0_DMP_H_CNT_LH2       SMD0_DMP_H_bit.CNT_LH2
#define SMD0_DMP_H_CNT_LH3       SMD0_DMP_H_bit.CNT_LH3
#define SMD0_DMP_H_CNT_LH4       SMD0_DMP_H_bit.CNT_LH4
#define SMD0_DMP_H_CNT_LH5       SMD0_DMP_H_bit.CNT_LH5
#define SMD0_DMP_H_CNT_LH6       SMD0_DMP_H_bit.CNT_LH6
#define SMD0_DMP_H_CNT_LH7       SMD0_DMP_H_bit.CNT_LH7

#define SMD0_GSTS_EX0_DUMP       SMD0_GSTS_bit.EX0_DUMP
#define SMD0_GSTS_EX1_DUMP       SMD0_GSTS_bit.EX1_DUMP
#define SMD0_GSTS_EX2_DUMP       SMD0_GSTS_bit.EX2_DUMP
#define SMD0_GSTS_CNT_FLAG       SMD0_GSTS_bit.CNT_FLAG
#define SMD0_GSTS_DMP_LK0        SMD0_GSTS_bit.DMP_LK0
#define SMD0_GSTS_DMP_LK1        SMD0_GSTS_bit.DMP_LK1
#define SMD0_GSTS_EVENT_OV       SMD0_GSTS_bit.EVENT_OV

#define SMD0_ISR_CNT_OVER        SMD0_ISR_bit.CNT_OVER
#define SMD0_ISR_EXT0_INT        SMD0_ISR_bit.EXT0_INT
#define SMD0_ISR_EXT1_INT        SMD0_ISR_bit.EXT1_INT
#define SMD0_ISR_EXT2_INT        SMD0_ISR_bit.EXT2_INT
#define SMD0_ISR_STA_S0_IT       SMD0_ISR_bit.STA_S0_IT
#define SMD0_ISR_STA_S1_IT       SMD0_ISR_bit.STA_S1_IT
#define SMD0_ISR_STA_S2_IT       SMD0_ISR_bit.STA_S2_IT
#define SMD0_ISR_STA_S3_IT       SMD0_ISR_bit.STA_S3_IT

#define SMD0_IMR_CNT_OV_R        SMD0_IMR_bit.CNT_OV_R
#define SMD0_IMR_IT_EXT0         SMD0_IMR_bit.IT_EXT0
#define SMD0_IMR_IT_EXT1         SMD0_IMR_bit.IT_EXT1
#define SMD0_IMR_IT_EXT2         SMD0_IMR_bit.IT_EXT2
#define SMD0_IMR_IT_STA_S0       SMD0_IMR_bit.IT_STA_S0
#define SMD0_IMR_IT_STA_S1       SMD0_IMR_bit.IT_STA_S1
#define SMD0_IMR_IT_STA_S2       SMD0_IMR_bit.IT_STA_S2
#define SMD0_IMR_IT_STA_S3       SMD0_IMR_bit.IT_STA_S3

#define SMD0_ISEL_INPUT0_EN      SMD0_ISEL_bit.INPUT0_EN
#define SMD0_ISEL_INPUT1_EN      SMD0_ISEL_bit.INPUT1_EN
#define SMD0_ISEL_INPUT2_EN      SMD0_ISEL_bit.INPUT2_EN
#define SMD0_ISEL_INPUT_LAT      SMD0_ISEL_bit.INPUT_LAT

#define SMD0_DMP_DMPE_EX0        SMD0_DMP_bit.DMPE_EX0
#define SMD0_DMP_DMPE_EX1        SMD0_DMP_bit.DMPE_EX1
#define SMD0_DMP_DMPE_EX2        SMD0_DMP_bit.DMPE_EX2
#define SMD0_DMP_DMP_EVER        SMD0_DMP_bit.DMP_EVER
#define SMD0_DMP_CPL_IT_GE       SMD0_DMP_bit.CPL_IT_GE

#define SMD0_FSM_STS_FSM0        SMD0_FSM_STS_bit.FSM0
#define SMD0_FSM_STS_FSM1        SMD0_FSM_STS_bit.FSM1
#define SMD0_FSM_STS_FSM2        SMD0_FSM_STS_bit.FSM2
#define SMD0_FSM_STS_PWM         SMD0_FSM_STS_bit.PWM
#define SMD0_FSM_STS_EVINP0      SMD0_FSM_STS_bit.EVINP0
#define SMD0_FSM_STS_EVINP1      SMD0_FSM_STS_bit.EVINP1
#define SMD0_FSM_STS_EVINP2      SMD0_FSM_STS_bit.EVINP2

#endif

/*-------------------------------------------------------------------------
 *      SMED 0 Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SMD0_CTR_START_CNT  0x01
#define MASK_SMD0_CTR_FSM_ENA    0x02

#define MASK_SMD0_CTR_TMR_TIME_T0_VAL 0x01
#define MASK_SMD0_CTR_TMR_TIME_T1_VAL 0x02
#define MASK_SMD0_CTR_TMR_TIME_T2_VAL 0x04
#define MASK_SMD0_CTR_TMR_TIME_T3_VAL 0x08
#define MASK_SMD0_CTR_TMR_DITHER_VAL 0x10

#define MASK_SMD0_CTR_INP_RS_INSIG0 0x01
#define MASK_SMD0_CTR_INP_RS_INSIG1 0x02
#define MASK_SMD0_CTR_INP_RS_INSIG2 0x04
#define MASK_SMD0_CTR_INP_RAIS_EN 0x08
#define MASK_SMD0_CTR_INP_EL_INSIG0 0x10
#define MASK_SMD0_CTR_INP_EL_INSIG1 0x20
#define MASK_SMD0_CTR_INP_EL_INSIG2 0x40
#define MASK_SMD0_CTR_INP_EL_EN  0x80

#define MASK_SMD0_CTR_DTHR_DITH0 0x01
#define MASK_SMD0_CTR_DTHR_DITH1 0x02
#define MASK_SMD0_CTR_DTHR_DITH2 0x04
#define MASK_SMD0_CTR_DTHR_DITH3 0x08
#define MASK_SMD0_CTR_DTHR_DITH4 0x10
#define MASK_SMD0_CTR_DTHR_DITH5 0x20
#define MASK_SMD0_CTR_DTHR_DITH6 0x40
#define MASK_SMD0_CTR_DTHR_DITH7 0x80

#define MASK_SMD0_TMR_T0L_TIM_T0L0 0x01
#define MASK_SMD0_TMR_T0L_TIM_T0L1 0x02
#define MASK_SMD0_TMR_T0L_TIM_T0L2 0x04
#define MASK_SMD0_TMR_T0L_TIM_T0L3 0x08
#define MASK_SMD0_TMR_T0L_TIM_T0L4 0x10
#define MASK_SMD0_TMR_T0L_TIM_T0L5 0x20
#define MASK_SMD0_TMR_T0L_TIM_T0L6 0x40
#define MASK_SMD0_TMR_T0L_TIM_T0L7 0x80

#define MASK_SMD0_TMR_T0H_TIM_T0H0 0x01
#define MASK_SMD0_TMR_T0H_TIM_T0H1 0x02
#define MASK_SMD0_TMR_T0H_TIM_T0H2 0x04
#define MASK_SMD0_TMR_T0H_TIM_T0H3 0x08
#define MASK_SMD0_TMR_T0H_TIM_T0H4 0x10
#define MASK_SMD0_TMR_T0H_TIM_T0H5 0x20
#define MASK_SMD0_TMR_T0H_TIM_T0H6 0x40
#define MASK_SMD0_TMR_T0H_TIM_T0H7 0x80

#define MASK_SMD0_TMR_T1L_TIM_T1L0 0x01
#define MASK_SMD0_TMR_T1L_TIM_T1L1 0x02
#define MASK_SMD0_TMR_T1L_TIM_T1L2 0x04
#define MASK_SMD0_TMR_T1L_TIM_T1L3 0x08
#define MASK_SMD0_TMR_T1L_TIM_T1L4 0x10
#define MASK_SMD0_TMR_T1L_TIM_T1L5 0x20
#define MASK_SMD0_TMR_T1L_TIM_T1L6 0x40
#define MASK_SMD0_TMR_T1L_TIM_T1L7 0x80

#define MASK_SMD0_TMR_T1H_TIM_T1H0 0x01
#define MASK_SMD0_TMR_T1H_TIM_T1H1 0x02
#define MASK_SMD0_TMR_T1H_TIM_T1H2 0x04
#define MASK_SMD0_TMR_T1H_TIM_T1H3 0x08
#define MASK_SMD0_TMR_T1H_TIM_T1H4 0x10
#define MASK_SMD0_TMR_T1H_TIM_T1H5 0x20
#define MASK_SMD0_TMR_T1H_TIM_T1H6 0x40
#define MASK_SMD0_TMR_T1H_TIM_T1H7 0x80

#define MASK_SMD0_TMR_T2L_TIM_T2L0 0x01
#define MASK_SMD0_TMR_T2L_TIM_T2L1 0x02
#define MASK_SMD0_TMR_T2L_TIM_T2L2 0x04
#define MASK_SMD0_TMR_T2L_TIM_T2L3 0x08
#define MASK_SMD0_TMR_T2L_TIM_T2L4 0x10
#define MASK_SMD0_TMR_T2L_TIM_T2L5 0x20
#define MASK_SMD0_TMR_T2L_TIM_T2L6 0x40
#define MASK_SMD0_TMR_T2L_TIM_T2L7 0x80

#define MASK_SMD0_TMR_T2H_TIM_T2H0 0x01
#define MASK_SMD0_TMR_T2H_TIM_T2H1 0x02
#define MASK_SMD0_TMR_T2H_TIM_T2H2 0x04
#define MASK_SMD0_TMR_T2H_TIM_T2H3 0x08
#define MASK_SMD0_TMR_T2H_TIM_T2H4 0x10
#define MASK_SMD0_TMR_T2H_TIM_T2H5 0x20
#define MASK_SMD0_TMR_T2H_TIM_T2H6 0x40
#define MASK_SMD0_TMR_T2H_TIM_T2H7 0x80

#define MASK_SMD0_TMR_T3L_TIM_T3L0 0x01
#define MASK_SMD0_TMR_T3L_TIM_T3L1 0x02
#define MASK_SMD0_TMR_T3L_TIM_T3L2 0x04
#define MASK_SMD0_TMR_T3L_TIM_T3L3 0x08
#define MASK_SMD0_TMR_T3L_TIM_T3L4 0x10
#define MASK_SMD0_TMR_T3L_TIM_T3L5 0x20
#define MASK_SMD0_TMR_T3L_TIM_T3L6 0x40
#define MASK_SMD0_TMR_T3L_TIM_T3L7 0x80

#define MASK_SMD0_TMR_T3H_TIM_T3H0 0x01
#define MASK_SMD0_TMR_T3H_TIM_T3H1 0x02
#define MASK_SMD0_TMR_T3H_TIM_T3H2 0x04
#define MASK_SMD0_TMR_T3H_TIM_T3H3 0x08
#define MASK_SMD0_TMR_T3H_TIM_T3H4 0x10
#define MASK_SMD0_TMR_T3H_TIM_T3H5 0x20
#define MASK_SMD0_TMR_T3H_TIM_T3H6 0x40
#define MASK_SMD0_TMR_T3H_TIM_T3H7 0x80

#define MASK_SMD0_PRM_ID0_NX_STAT0 0x01
#define MASK_SMD0_PRM_ID0_NX_STAT1 0x02
#define MASK_SMD0_PRM_ID0_EDGE0  0x04
#define MASK_SMD0_PRM_ID0_EDGE1  0x08
#define MASK_SMD0_PRM_ID0_CNT_RSTE 0x10
#define MASK_SMD0_PRM_ID0_PULS_EDG 0x20
#define MASK_SMD0_PRM_ID0_HOLD_JMP 0x40
#define MASK_SMD0_PRM_ID0_AND_OR 0x80

#define MASK_SMD0_PRM_ID1_CEDGE0 0x04
#define MASK_SMD0_PRM_ID1_CEDGE1 0x08
#define MASK_SMD0_PRM_ID1_CNT_RSTC 0x10
#define MASK_SMD0_PRM_ID1_PULS_CMP 0x20
#define MASK_SMD0_PRM_ID1_HOLD_EXIT 0x40

#define MASK_SMD0_PRM_ID2_LATCH_RS 0x01

#define MASK_SMD0_PRM_S00_NX_STAT0 0x01
#define MASK_SMD0_PRM_S00_NX_STAT1 0x02
#define MASK_SMD0_PRM_S00_EDGE0  0x04
#define MASK_SMD0_PRM_S00_EDGE1  0x08
#define MASK_SMD0_PRM_S00_CNT_RSTE 0x10
#define MASK_SMD0_PRM_S00_PULS_EDG 0x20
#define MASK_SMD0_PRM_S00_HOLD_JMP 0x40
#define MASK_SMD0_PRM_S00_AND_OR 0x80

#define MASK_SMD0_PRM_S01_CEDGE0 0x04
#define MASK_SMD0_PRM_S01_CEDGE1 0x08
#define MASK_SMD0_PRM_S01_CNT_RSTC 0x10
#define MASK_SMD0_PRM_S01_PULS_CMP 0x20
#define MASK_SMD0_PRM_S01_HOLD_EXIT 0x40

#define MASK_SMD0_PRM_S02_LATCH_RS 0x01

#define MASK_SMD0_PRM_S10_NX_STAT0 0x01
#define MASK_SMD0_PRM_S10_NX_STAT1 0x02
#define MASK_SMD0_PRM_S10_EDGE0  0x04
#define MASK_SMD0_PRM_S10_EDGE1  0x08
#define MASK_SMD0_PRM_S10_CNT_RSTE 0x10
#define MASK_SMD0_PRM_S10_PULS_EDG 0x20
#define MASK_SMD0_PRM_S10_HOLD_JMP 0x40
#define MASK_SMD0_PRM_S10_AND_OR 0x80

#define MASK_SMD0_PRM_S11_CEDGE0 0x04
#define MASK_SMD0_PRM_S11_CEDGE1 0x08
#define MASK_SMD0_PRM_S11_CNT_RSTC 0x10
#define MASK_SMD0_PRM_S11_PULS_CMP 0x20
#define MASK_SMD0_PRM_S11_HOLD_EXIT 0x40

#define MASK_SMD0_PRM_S12_LATCH_RS 0x01

#define MASK_SMD0_PRM_S20_NX_STAT0 0x01
#define MASK_SMD0_PRM_S20_NX_STAT1 0x02
#define MASK_SMD0_PRM_S20_EDGE0  0x04
#define MASK_SMD0_PRM_S20_EDGE1  0x08
#define MASK_SMD0_PRM_S20_CNT_RSTE 0x10
#define MASK_SMD0_PRM_S20_PULS_EDG 0x20
#define MASK_SMD0_PRM_S20_HOLD_JMP 0x40
#define MASK_SMD0_PRM_S20_AND_OR 0x80

#define MASK_SMD0_PRM_S21_CEDGE0 0x04
#define MASK_SMD0_PRM_S21_CEDGE1 0x08
#define MASK_SMD0_PRM_S21_CNT_RSTC 0x10
#define MASK_SMD0_PRM_S21_PULS_CMP 0x20
#define MASK_SMD0_PRM_S21_HOLD_EXIT 0x40

#define MASK_SMD0_PRM_S22_LATCH_RS 0x01

#define MASK_SMD0_PRM_S30_NX_STAT0 0x01
#define MASK_SMD0_PRM_S30_NX_STAT1 0x02
#define MASK_SMD0_PRM_S30_EDGE0  0x04
#define MASK_SMD0_PRM_S30_EDGE1  0x08
#define MASK_SMD0_PRM_S30_CNT_RSTE 0x10
#define MASK_SMD0_PRM_S30_PULS_EDG 0x20
#define MASK_SMD0_PRM_S30_HOLD_JMP 0x40
#define MASK_SMD0_PRM_S30_AND_OR 0x80

#define MASK_SMD0_PRM_S31_CEDGE0 0x04
#define MASK_SMD0_PRM_S31_CEDGE1 0x08
#define MASK_SMD0_PRM_S31_CNT_RSTC 0x10
#define MASK_SMD0_PRM_S31_PULS_CMP 0x20
#define MASK_SMD0_PRM_S31_HOLD_EXIT 0x40

#define MASK_SMD0_PRM_S32_LATCH_RS 0x01

#define MASK_SMD0_CFG_TIM_NUM0   0x02
#define MASK_SMD0_CFG_TIM_NUM1   0x04
#define MASK_SMD0_CFG_TIM_UPD0   0x08
#define MASK_SMD0_CFG_TIM_UPD1   0x10

#define MASK_SMD0_DMP_L_CNT_LO0  0x01
#define MASK_SMD0_DMP_L_CNT_LO1  0x02
#define MASK_SMD0_DMP_L_CNT_LO2  0x04
#define MASK_SMD0_DMP_L_CNT_LO3  0x08
#define MASK_SMD0_DMP_L_CNT_LO4  0x10
#define MASK_SMD0_DMP_L_CNT_LO5  0x20
#define MASK_SMD0_DMP_L_CNT_LO6  0x40
#define MASK_SMD0_DMP_L_CNT_LO7  0x80

#define MASK_SMD0_DMP_H_CNT_LH0  0x01
#define MASK_SMD0_DMP_H_CNT_LH1  0x02
#define MASK_SMD0_DMP_H_CNT_LH2  0x04
#define MASK_SMD0_DMP_H_CNT_LH3  0x08
#define MASK_SMD0_DMP_H_CNT_LH4  0x10
#define MASK_SMD0_DMP_H_CNT_LH5  0x20
#define MASK_SMD0_DMP_H_CNT_LH6  0x40
#define MASK_SMD0_DMP_H_CNT_LH7  0x80

#define MASK_SMD0_GSTS_EX0_DUMP  0x01
#define MASK_SMD0_GSTS_EX1_DUMP  0x02
#define MASK_SMD0_GSTS_EX2_DUMP  0x04
#define MASK_SMD0_GSTS_CNT_FLAG  0x08
#define MASK_SMD0_GSTS_DMP_LK0   0x10
#define MASK_SMD0_GSTS_DMP_LK1   0x20
#define MASK_SMD0_GSTS_EVENT_OV  0x40

#define MASK_SMD0_ISR_CNT_OVER   0x01
#define MASK_SMD0_ISR_EXT0_INT   0x02
#define MASK_SMD0_ISR_EXT1_INT   0x04
#define MASK_SMD0_ISR_EXT2_INT   0x08
#define MASK_SMD0_ISR_STA_S0_IT  0x10
#define MASK_SMD0_ISR_STA_S1_IT  0x20
#define MASK_SMD0_ISR_STA_S2_IT  0x40
#define MASK_SMD0_ISR_STA_S3_IT  0x80

#define MASK_SMD0_IMR_CNT_OV_R   0x01
#define MASK_SMD0_IMR_IT_EXT0    0x02
#define MASK_SMD0_IMR_IT_EXT1    0x04
#define MASK_SMD0_IMR_IT_EXT2    0x08
#define MASK_SMD0_IMR_IT_STA_S0  0x10
#define MASK_SMD0_IMR_IT_STA_S1  0x20
#define MASK_SMD0_IMR_IT_STA_S2  0x40
#define MASK_SMD0_IMR_IT_STA_S3  0x80

#define MASK_SMD0_ISEL_INPUT0_EN 0x01
#define MASK_SMD0_ISEL_INPUT1_EN 0x02
#define MASK_SMD0_ISEL_INPUT2_EN 0x04
#define MASK_SMD0_ISEL_INPUT_LAT 0x08

#define MASK_SMD0_DMP_DMPE_EX0   0x01
#define MASK_SMD0_DMP_DMPE_EX1   0x02
#define MASK_SMD0_DMP_DMPE_EX2   0x04
#define MASK_SMD0_DMP_DMP_EVER   0x08
#define MASK_SMD0_DMP_CPL_IT_GE  0x10

#define MASK_SMD0_FSM_STS_FSM0   0x01
#define MASK_SMD0_FSM_STS_FSM1   0x02
#define MASK_SMD0_FSM_STS_FSM2   0x04
#define MASK_SMD0_FSM_STS_PWM    0x08
#define MASK_SMD0_FSM_STS_EVINP0 0x10
#define MASK_SMD0_FSM_STS_EVINP1 0x20
#define MASK_SMD0_FSM_STS_EVINP2 0x40


/*-------------------------------------------------------------------------
 *      SMED 1 Registers register definitions
 *-----------------------------------------------------------------------*/
/* Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START_CNT   : 1;
  unsigned char FSM_ENA     : 1;
} __BITS_SMD1_CTR;
#endif
__IO_REG8_BIT(SMD1_CTR,    0x5540, __READ_WRITE, __BITS_SMD1_CTR);

/* Control timer register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIME_T0_VAL : 1;
  unsigned char TIME_T1_VAL : 1;
  unsigned char TIME_T2_VAL : 1;
  unsigned char TIME_T3_VAL : 1;
  unsigned char DITHER_VAL  : 1;
} __BITS_SMD1_CTR_TMR;
#endif
__IO_REG8_BIT(SMD1_CTR_TMR, 0x5541, __READ_WRITE, __BITS_SMD1_CTR_TMR);

/* Control input register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RS_INSIG0   : 1;
  unsigned char RS_INSIG1   : 1;
  unsigned char RS_INSIG2   : 1;
  unsigned char RAIS_EN     : 1;
  unsigned char EL_INSIG0   : 1;
  unsigned char EL_INSIG1   : 1;
  unsigned char EL_INSIG2   : 1;
  unsigned char EL_EN       : 1;
} __BITS_SMD1_CTR_INP;
#endif
__IO_REG8_BIT(SMD1_CTR_INP, 0x5542, __READ_WRITE, __BITS_SMD1_CTR_INP);

/* Dithering register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DITH0       : 1;
  unsigned char DITH1       : 1;
  unsigned char DITH2       : 1;
  unsigned char DITH3       : 1;
  unsigned char DITH4       : 1;
  unsigned char DITH5       : 1;
  unsigned char DITH6       : 1;
  unsigned char DITH7       : 1;
} __BITS_SMD1_CTR_DTHR;
#endif
__IO_REG8_BIT(SMD1_CTR_DTHR, 0x5543, __READ_WRITE, __BITS_SMD1_CTR_DTHR);

/* Time T0 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0L0    : 1;
  unsigned char TIM_T0L1    : 1;
  unsigned char TIM_T0L2    : 1;
  unsigned char TIM_T0L3    : 1;
  unsigned char TIM_T0L4    : 1;
  unsigned char TIM_T0L5    : 1;
  unsigned char TIM_T0L6    : 1;
  unsigned char TIM_T0L7    : 1;
} __BITS_SMD1_TMR_T0L;
#endif
__IO_REG8_BIT(SMD1_TMR_T0L, 0x5544, __READ_WRITE, __BITS_SMD1_TMR_T0L);

/* Time T0 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0H0    : 1;
  unsigned char TIM_T0H1    : 1;
  unsigned char TIM_T0H2    : 1;
  unsigned char TIM_T0H3    : 1;
  unsigned char TIM_T0H4    : 1;
  unsigned char TIM_T0H5    : 1;
  unsigned char TIM_T0H6    : 1;
  unsigned char TIM_T0H7    : 1;
} __BITS_SMD1_TMR_T0H;
#endif
__IO_REG8_BIT(SMD1_TMR_T0H, 0x5545, __READ_WRITE, __BITS_SMD1_TMR_T0H);

/* Time T1 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1L0    : 1;
  unsigned char TIM_T1L1    : 1;
  unsigned char TIM_T1L2    : 1;
  unsigned char TIM_T1L3    : 1;
  unsigned char TIM_T1L4    : 1;
  unsigned char TIM_T1L5    : 1;
  unsigned char TIM_T1L6    : 1;
  unsigned char TIM_T1L7    : 1;
} __BITS_SMD1_TMR_T1L;
#endif
__IO_REG8_BIT(SMD1_TMR_T1L, 0x5546, __READ_WRITE, __BITS_SMD1_TMR_T1L);

/* Time T1 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1H0    : 1;
  unsigned char TIM_T1H1    : 1;
  unsigned char TIM_T1H2    : 1;
  unsigned char TIM_T1H3    : 1;
  unsigned char TIM_T1H4    : 1;
  unsigned char TIM_T1H5    : 1;
  unsigned char TIM_T1H6    : 1;
  unsigned char TIM_T1H7    : 1;
} __BITS_SMD1_TMR_T1H;
#endif
__IO_REG8_BIT(SMD1_TMR_T1H, 0x5547, __READ_WRITE, __BITS_SMD1_TMR_T1H);

/* Time T2 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2L0    : 1;
  unsigned char TIM_T2L1    : 1;
  unsigned char TIM_T2L2    : 1;
  unsigned char TIM_T2L3    : 1;
  unsigned char TIM_T2L4    : 1;
  unsigned char TIM_T2L5    : 1;
  unsigned char TIM_T2L6    : 1;
  unsigned char TIM_T2L7    : 1;
} __BITS_SMD1_TMR_T2L;
#endif
__IO_REG8_BIT(SMD1_TMR_T2L, 0x5548, __READ_WRITE, __BITS_SMD1_TMR_T2L);

/* Time T2 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2H0    : 1;
  unsigned char TIM_T2H1    : 1;
  unsigned char TIM_T2H2    : 1;
  unsigned char TIM_T2H3    : 1;
  unsigned char TIM_T2H4    : 1;
  unsigned char TIM_T2H5    : 1;
  unsigned char TIM_T2H6    : 1;
  unsigned char TIM_T2H7    : 1;
} __BITS_SMD1_TMR_T2H;
#endif
__IO_REG8_BIT(SMD1_TMR_T2H, 0x5549, __READ_WRITE, __BITS_SMD1_TMR_T2H);

/* Time T3 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3L0    : 1;
  unsigned char TIM_T3L1    : 1;
  unsigned char TIM_T3L2    : 1;
  unsigned char TIM_T3L3    : 1;
  unsigned char TIM_T3L4    : 1;
  unsigned char TIM_T3L5    : 1;
  unsigned char TIM_T3L6    : 1;
  unsigned char TIM_T3L7    : 1;
} __BITS_SMD1_TMR_T3L;
#endif
__IO_REG8_BIT(SMD1_TMR_T3L, 0x554A, __READ_WRITE, __BITS_SMD1_TMR_T3L);

/* Time T3 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3H0    : 1;
  unsigned char TIM_T3H1    : 1;
  unsigned char TIM_T3H2    : 1;
  unsigned char TIM_T3H3    : 1;
  unsigned char TIM_T3H4    : 1;
  unsigned char TIM_T3H5    : 1;
  unsigned char TIM_T3H6    : 1;
  unsigned char TIM_T3H7    : 1;
} __BITS_SMD1_TMR_T3H;
#endif
__IO_REG8_BIT(SMD1_TMR_T3H, 0x554B, __READ_WRITE, __BITS_SMD1_TMR_T3H);

/* Parameter 0 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD1_PRM_ID0;
#endif
__IO_REG8_BIT(SMD1_PRM_ID0, 0x554C, __READ_WRITE, __BITS_SMD1_PRM_ID0);

/* Parameter 1 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD1_PRM_ID1;
#endif
__IO_REG8_BIT(SMD1_PRM_ID1, 0x554D, __READ_WRITE, __BITS_SMD1_PRM_ID1);

/* Parameter 2 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD1_PRM_ID2;
#endif
__IO_REG8_BIT(SMD1_PRM_ID2, 0x554E, __READ_WRITE, __BITS_SMD1_PRM_ID2);

/* Parameter 0 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD1_PRM_S00;
#endif
__IO_REG8_BIT(SMD1_PRM_S00, 0x554F, __READ_WRITE, __BITS_SMD1_PRM_S00);

/* Parameter 1 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD1_PRM_S01;
#endif
__IO_REG8_BIT(SMD1_PRM_S01, 0x5550, __READ_WRITE, __BITS_SMD1_PRM_S01);

/* Parameter 2 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD1_PRM_S02;
#endif
__IO_REG8_BIT(SMD1_PRM_S02, 0x5551, __READ_WRITE, __BITS_SMD1_PRM_S02);

/* Parameter 0 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD1_PRM_S10;
#endif
__IO_REG8_BIT(SMD1_PRM_S10, 0x5552, __READ_WRITE, __BITS_SMD1_PRM_S10);

/* Parameter 1 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD1_PRM_S11;
#endif
__IO_REG8_BIT(SMD1_PRM_S11, 0x5553, __READ_WRITE, __BITS_SMD1_PRM_S11);

/* Parameter 2 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD1_PRM_S12;
#endif
__IO_REG8_BIT(SMD1_PRM_S12, 0x5554, __READ_WRITE, __BITS_SMD1_PRM_S12);

/* Parameter 0 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD1_PRM_S20;
#endif
__IO_REG8_BIT(SMD1_PRM_S20, 0x5555, __READ_WRITE, __BITS_SMD1_PRM_S20);

/* Parameter 1 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD1_PRM_S21;
#endif
__IO_REG8_BIT(SMD1_PRM_S21, 0x5556, __READ_WRITE, __BITS_SMD1_PRM_S21);

/* Parameter 2 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD1_PRM_S22;
#endif
__IO_REG8_BIT(SMD1_PRM_S22, 0x5557, __READ_WRITE, __BITS_SMD1_PRM_S22);

/* Parameter 0 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD1_PRM_S30;
#endif
__IO_REG8_BIT(SMD1_PRM_S30, 0x5558, __READ_WRITE, __BITS_SMD1_PRM_S30);

/* Parameter 1 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD1_PRM_S31;
#endif
__IO_REG8_BIT(SMD1_PRM_S31, 0x5559, __READ_WRITE, __BITS_SMD1_PRM_S31);

/* Parameter 2 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD1_PRM_S32;
#endif
__IO_REG8_BIT(SMD1_PRM_S32, 0x555A, __READ_WRITE, __BITS_SMD1_PRM_S32);

/* Timer configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TIM_NUM0    : 1;
  unsigned char TIM_NUM1    : 1;
  unsigned char TIM_UPD0    : 1;
  unsigned char TIM_UPD1    : 1;
} __BITS_SMD1_CFG;
#endif
__IO_REG8_BIT(SMD1_CFG,    0x555B, __READ_WRITE, __BITS_SMD1_CFG);

/* Dump counter lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LO0     : 1;
  unsigned char CNT_LO1     : 1;
  unsigned char CNT_LO2     : 1;
  unsigned char CNT_LO3     : 1;
  unsigned char CNT_LO4     : 1;
  unsigned char CNT_LO5     : 1;
  unsigned char CNT_LO6     : 1;
  unsigned char CNT_LO7     : 1;
} __BITS_SMD1_DMP_L;
#endif
__IO_REG8_BIT(SMD1_DMP_L,  0x555C, __READ, __BITS_SMD1_DMP_L);

/* Dump counter msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LH0     : 1;
  unsigned char CNT_LH1     : 1;
  unsigned char CNT_LH2     : 1;
  unsigned char CNT_LH3     : 1;
  unsigned char CNT_LH4     : 1;
  unsigned char CNT_LH5     : 1;
  unsigned char CNT_LH6     : 1;
  unsigned char CNT_LH7     : 1;
} __BITS_SMD1_DMP_H;
#endif
__IO_REG8_BIT(SMD1_DMP_H,  0x555D, __READ, __BITS_SMD1_DMP_H);

/* General status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EX0_DUMP    : 1;
  unsigned char EX1_DUMP    : 1;
  unsigned char EX2_DUMP    : 1;
  unsigned char CNT_FLAG    : 1;
  unsigned char DMP_LK0     : 1;
  unsigned char DMP_LK1     : 1;
  unsigned char EVENT_OV    : 1;
} __BITS_SMD1_GSTS;
#endif
__IO_REG8_BIT(SMD1_GSTS,   0x555E, __READ_WRITE, __BITS_SMD1_GSTS);

/* Interrupt status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OVER    : 1;
  unsigned char EXT0_INT    : 1;
  unsigned char EXT1_INT    : 1;
  unsigned char EXT2_INT    : 1;
  unsigned char STA_S0_IT   : 1;
  unsigned char STA_S1_IT   : 1;
  unsigned char STA_S2_IT   : 1;
  unsigned char STA_S3_IT   : 1;
} __BITS_SMD1_ISR;
#endif
__IO_REG8_BIT(SMD1_ISR,    0x555F, __READ_WRITE, __BITS_SMD1_ISR);

/* Interrupt mask register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OV_R    : 1;
  unsigned char IT_EXT0     : 1;
  unsigned char IT_EXT1     : 1;
  unsigned char IT_EXT2     : 1;
  unsigned char IT_STA_S0   : 1;
  unsigned char IT_STA_S1   : 1;
  unsigned char IT_STA_S2   : 1;
  unsigned char IT_STA_S3   : 1;
} __BITS_SMD1_IMR;
#endif
__IO_REG8_BIT(SMD1_IMR,    0x5560, __READ_WRITE, __BITS_SMD1_IMR);

/* External event control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INPUT0_EN   : 1;
  unsigned char INPUT1_EN   : 1;
  unsigned char INPUT2_EN   : 1;
  unsigned char INPUT_LAT   : 1;
} __BITS_SMD1_ISEL;
#endif
__IO_REG8_BIT(SMD1_ISEL,   0x5561, __READ_WRITE, __BITS_SMD1_ISEL);

/* Dump enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DMPE_EX0    : 1;
  unsigned char DMPE_EX1    : 1;
  unsigned char DMPE_EX2    : 1;
  unsigned char DMP_EVER    : 1;
  unsigned char CPL_IT_GE   : 1;
} __BITS_SMD1_DMP;
#endif
__IO_REG8_BIT(SMD1_DMP,    0x5562, __READ_WRITE, __BITS_SMD1_DMP);

/* FSM status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FSM0        : 1;
  unsigned char FSM1        : 1;
  unsigned char FSM2        : 1;
  unsigned char PWM         : 1;
  unsigned char EVINP0      : 1;
  unsigned char EVINP1      : 1;
  unsigned char EVINP2      : 1;
} __BITS_SMD1_FSM_STS;
#endif
__IO_REG8_BIT(SMD1_FSM_STS, 0x5563, __READ, __BITS_SMD1_FSM_STS);


/*-------------------------------------------------------------------------
 *      SMED 1 Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SMD1_CTR_START_CNT       SMD1_CTR_bit.START_CNT
#define SMD1_CTR_FSM_ENA         SMD1_CTR_bit.FSM_ENA

#define SMD1_CTR_TMR_TIME_T0_VAL SMD1_CTR_TMR_bit.TIME_T0_VAL
#define SMD1_CTR_TMR_TIME_T1_VAL SMD1_CTR_TMR_bit.TIME_T1_VAL
#define SMD1_CTR_TMR_TIME_T2_VAL SMD1_CTR_TMR_bit.TIME_T2_VAL
#define SMD1_CTR_TMR_TIME_T3_VAL SMD1_CTR_TMR_bit.TIME_T3_VAL
#define SMD1_CTR_TMR_DITHER_VAL  SMD1_CTR_TMR_bit.DITHER_VAL

#define SMD1_CTR_INP_RS_INSIG0   SMD1_CTR_INP_bit.RS_INSIG0
#define SMD1_CTR_INP_RS_INSIG1   SMD1_CTR_INP_bit.RS_INSIG1
#define SMD1_CTR_INP_RS_INSIG2   SMD1_CTR_INP_bit.RS_INSIG2
#define SMD1_CTR_INP_RAIS_EN     SMD1_CTR_INP_bit.RAIS_EN
#define SMD1_CTR_INP_EL_INSIG0   SMD1_CTR_INP_bit.EL_INSIG0
#define SMD1_CTR_INP_EL_INSIG1   SMD1_CTR_INP_bit.EL_INSIG1
#define SMD1_CTR_INP_EL_INSIG2   SMD1_CTR_INP_bit.EL_INSIG2
#define SMD1_CTR_INP_EL_EN       SMD1_CTR_INP_bit.EL_EN

#define SMD1_CTR_DTHR_DITH0      SMD1_CTR_DTHR_bit.DITH0
#define SMD1_CTR_DTHR_DITH1      SMD1_CTR_DTHR_bit.DITH1
#define SMD1_CTR_DTHR_DITH2      SMD1_CTR_DTHR_bit.DITH2
#define SMD1_CTR_DTHR_DITH3      SMD1_CTR_DTHR_bit.DITH3
#define SMD1_CTR_DTHR_DITH4      SMD1_CTR_DTHR_bit.DITH4
#define SMD1_CTR_DTHR_DITH5      SMD1_CTR_DTHR_bit.DITH5
#define SMD1_CTR_DTHR_DITH6      SMD1_CTR_DTHR_bit.DITH6
#define SMD1_CTR_DTHR_DITH7      SMD1_CTR_DTHR_bit.DITH7

#define SMD1_TMR_T0L_TIM_T0L0    SMD1_TMR_T0L_bit.TIM_T0L0
#define SMD1_TMR_T0L_TIM_T0L1    SMD1_TMR_T0L_bit.TIM_T0L1
#define SMD1_TMR_T0L_TIM_T0L2    SMD1_TMR_T0L_bit.TIM_T0L2
#define SMD1_TMR_T0L_TIM_T0L3    SMD1_TMR_T0L_bit.TIM_T0L3
#define SMD1_TMR_T0L_TIM_T0L4    SMD1_TMR_T0L_bit.TIM_T0L4
#define SMD1_TMR_T0L_TIM_T0L5    SMD1_TMR_T0L_bit.TIM_T0L5
#define SMD1_TMR_T0L_TIM_T0L6    SMD1_TMR_T0L_bit.TIM_T0L6
#define SMD1_TMR_T0L_TIM_T0L7    SMD1_TMR_T0L_bit.TIM_T0L7

#define SMD1_TMR_T0H_TIM_T0H0    SMD1_TMR_T0H_bit.TIM_T0H0
#define SMD1_TMR_T0H_TIM_T0H1    SMD1_TMR_T0H_bit.TIM_T0H1
#define SMD1_TMR_T0H_TIM_T0H2    SMD1_TMR_T0H_bit.TIM_T0H2
#define SMD1_TMR_T0H_TIM_T0H3    SMD1_TMR_T0H_bit.TIM_T0H3
#define SMD1_TMR_T0H_TIM_T0H4    SMD1_TMR_T0H_bit.TIM_T0H4
#define SMD1_TMR_T0H_TIM_T0H5    SMD1_TMR_T0H_bit.TIM_T0H5
#define SMD1_TMR_T0H_TIM_T0H6    SMD1_TMR_T0H_bit.TIM_T0H6
#define SMD1_TMR_T0H_TIM_T0H7    SMD1_TMR_T0H_bit.TIM_T0H7

#define SMD1_TMR_T1L_TIM_T1L0    SMD1_TMR_T1L_bit.TIM_T1L0
#define SMD1_TMR_T1L_TIM_T1L1    SMD1_TMR_T1L_bit.TIM_T1L1
#define SMD1_TMR_T1L_TIM_T1L2    SMD1_TMR_T1L_bit.TIM_T1L2
#define SMD1_TMR_T1L_TIM_T1L3    SMD1_TMR_T1L_bit.TIM_T1L3
#define SMD1_TMR_T1L_TIM_T1L4    SMD1_TMR_T1L_bit.TIM_T1L4
#define SMD1_TMR_T1L_TIM_T1L5    SMD1_TMR_T1L_bit.TIM_T1L5
#define SMD1_TMR_T1L_TIM_T1L6    SMD1_TMR_T1L_bit.TIM_T1L6
#define SMD1_TMR_T1L_TIM_T1L7    SMD1_TMR_T1L_bit.TIM_T1L7

#define SMD1_TMR_T1H_TIM_T1H0    SMD1_TMR_T1H_bit.TIM_T1H0
#define SMD1_TMR_T1H_TIM_T1H1    SMD1_TMR_T1H_bit.TIM_T1H1
#define SMD1_TMR_T1H_TIM_T1H2    SMD1_TMR_T1H_bit.TIM_T1H2
#define SMD1_TMR_T1H_TIM_T1H3    SMD1_TMR_T1H_bit.TIM_T1H3
#define SMD1_TMR_T1H_TIM_T1H4    SMD1_TMR_T1H_bit.TIM_T1H4
#define SMD1_TMR_T1H_TIM_T1H5    SMD1_TMR_T1H_bit.TIM_T1H5
#define SMD1_TMR_T1H_TIM_T1H6    SMD1_TMR_T1H_bit.TIM_T1H6
#define SMD1_TMR_T1H_TIM_T1H7    SMD1_TMR_T1H_bit.TIM_T1H7

#define SMD1_TMR_T2L_TIM_T2L0    SMD1_TMR_T2L_bit.TIM_T2L0
#define SMD1_TMR_T2L_TIM_T2L1    SMD1_TMR_T2L_bit.TIM_T2L1
#define SMD1_TMR_T2L_TIM_T2L2    SMD1_TMR_T2L_bit.TIM_T2L2
#define SMD1_TMR_T2L_TIM_T2L3    SMD1_TMR_T2L_bit.TIM_T2L3
#define SMD1_TMR_T2L_TIM_T2L4    SMD1_TMR_T2L_bit.TIM_T2L4
#define SMD1_TMR_T2L_TIM_T2L5    SMD1_TMR_T2L_bit.TIM_T2L5
#define SMD1_TMR_T2L_TIM_T2L6    SMD1_TMR_T2L_bit.TIM_T2L6
#define SMD1_TMR_T2L_TIM_T2L7    SMD1_TMR_T2L_bit.TIM_T2L7

#define SMD1_TMR_T2H_TIM_T2H0    SMD1_TMR_T2H_bit.TIM_T2H0
#define SMD1_TMR_T2H_TIM_T2H1    SMD1_TMR_T2H_bit.TIM_T2H1
#define SMD1_TMR_T2H_TIM_T2H2    SMD1_TMR_T2H_bit.TIM_T2H2
#define SMD1_TMR_T2H_TIM_T2H3    SMD1_TMR_T2H_bit.TIM_T2H3
#define SMD1_TMR_T2H_TIM_T2H4    SMD1_TMR_T2H_bit.TIM_T2H4
#define SMD1_TMR_T2H_TIM_T2H5    SMD1_TMR_T2H_bit.TIM_T2H5
#define SMD1_TMR_T2H_TIM_T2H6    SMD1_TMR_T2H_bit.TIM_T2H6
#define SMD1_TMR_T2H_TIM_T2H7    SMD1_TMR_T2H_bit.TIM_T2H7

#define SMD1_TMR_T3L_TIM_T3L0    SMD1_TMR_T3L_bit.TIM_T3L0
#define SMD1_TMR_T3L_TIM_T3L1    SMD1_TMR_T3L_bit.TIM_T3L1
#define SMD1_TMR_T3L_TIM_T3L2    SMD1_TMR_T3L_bit.TIM_T3L2
#define SMD1_TMR_T3L_TIM_T3L3    SMD1_TMR_T3L_bit.TIM_T3L3
#define SMD1_TMR_T3L_TIM_T3L4    SMD1_TMR_T3L_bit.TIM_T3L4
#define SMD1_TMR_T3L_TIM_T3L5    SMD1_TMR_T3L_bit.TIM_T3L5
#define SMD1_TMR_T3L_TIM_T3L6    SMD1_TMR_T3L_bit.TIM_T3L6
#define SMD1_TMR_T3L_TIM_T3L7    SMD1_TMR_T3L_bit.TIM_T3L7

#define SMD1_TMR_T3H_TIM_T3H0    SMD1_TMR_T3H_bit.TIM_T3H0
#define SMD1_TMR_T3H_TIM_T3H1    SMD1_TMR_T3H_bit.TIM_T3H1
#define SMD1_TMR_T3H_TIM_T3H2    SMD1_TMR_T3H_bit.TIM_T3H2
#define SMD1_TMR_T3H_TIM_T3H3    SMD1_TMR_T3H_bit.TIM_T3H3
#define SMD1_TMR_T3H_TIM_T3H4    SMD1_TMR_T3H_bit.TIM_T3H4
#define SMD1_TMR_T3H_TIM_T3H5    SMD1_TMR_T3H_bit.TIM_T3H5
#define SMD1_TMR_T3H_TIM_T3H6    SMD1_TMR_T3H_bit.TIM_T3H6
#define SMD1_TMR_T3H_TIM_T3H7    SMD1_TMR_T3H_bit.TIM_T3H7

#define SMD1_PRM_ID0_NX_STAT0    SMD1_PRM_ID0_bit.NX_STAT0
#define SMD1_PRM_ID0_NX_STAT1    SMD1_PRM_ID0_bit.NX_STAT1
#define SMD1_PRM_ID0_EDGE0       SMD1_PRM_ID0_bit.EDGE0
#define SMD1_PRM_ID0_EDGE1       SMD1_PRM_ID0_bit.EDGE1
#define SMD1_PRM_ID0_CNT_RSTE    SMD1_PRM_ID0_bit.CNT_RSTE
#define SMD1_PRM_ID0_PULS_EDG    SMD1_PRM_ID0_bit.PULS_EDG
#define SMD1_PRM_ID0_HOLD_JMP    SMD1_PRM_ID0_bit.HOLD_JMP
#define SMD1_PRM_ID0_AND_OR      SMD1_PRM_ID0_bit.AND_OR

#define SMD1_PRM_ID1_CEDGE0      SMD1_PRM_ID1_bit.CEDGE0
#define SMD1_PRM_ID1_CEDGE1      SMD1_PRM_ID1_bit.CEDGE1
#define SMD1_PRM_ID1_CNT_RSTC    SMD1_PRM_ID1_bit.CNT_RSTC
#define SMD1_PRM_ID1_PULS_CMP    SMD1_PRM_ID1_bit.PULS_CMP
#define SMD1_PRM_ID1_HOLD_EXIT   SMD1_PRM_ID1_bit.HOLD_EXIT

#define SMD1_PRM_ID2_LATCH_RS    SMD1_PRM_ID2_bit.LATCH_RS

#define SMD1_PRM_S00_NX_STAT0    SMD1_PRM_S00_bit.NX_STAT0
#define SMD1_PRM_S00_NX_STAT1    SMD1_PRM_S00_bit.NX_STAT1
#define SMD1_PRM_S00_EDGE0       SMD1_PRM_S00_bit.EDGE0
#define SMD1_PRM_S00_EDGE1       SMD1_PRM_S00_bit.EDGE1
#define SMD1_PRM_S00_CNT_RSTE    SMD1_PRM_S00_bit.CNT_RSTE
#define SMD1_PRM_S00_PULS_EDG    SMD1_PRM_S00_bit.PULS_EDG
#define SMD1_PRM_S00_HOLD_JMP    SMD1_PRM_S00_bit.HOLD_JMP
#define SMD1_PRM_S00_AND_OR      SMD1_PRM_S00_bit.AND_OR

#define SMD1_PRM_S01_CEDGE0      SMD1_PRM_S01_bit.CEDGE0
#define SMD1_PRM_S01_CEDGE1      SMD1_PRM_S01_bit.CEDGE1
#define SMD1_PRM_S01_CNT_RSTC    SMD1_PRM_S01_bit.CNT_RSTC
#define SMD1_PRM_S01_PULS_CMP    SMD1_PRM_S01_bit.PULS_CMP
#define SMD1_PRM_S01_HOLD_EXIT   SMD1_PRM_S01_bit.HOLD_EXIT

#define SMD1_PRM_S02_LATCH_RS    SMD1_PRM_S02_bit.LATCH_RS

#define SMD1_PRM_S10_NX_STAT0    SMD1_PRM_S10_bit.NX_STAT0
#define SMD1_PRM_S10_NX_STAT1    SMD1_PRM_S10_bit.NX_STAT1
#define SMD1_PRM_S10_EDGE0       SMD1_PRM_S10_bit.EDGE0
#define SMD1_PRM_S10_EDGE1       SMD1_PRM_S10_bit.EDGE1
#define SMD1_PRM_S10_CNT_RSTE    SMD1_PRM_S10_bit.CNT_RSTE
#define SMD1_PRM_S10_PULS_EDG    SMD1_PRM_S10_bit.PULS_EDG
#define SMD1_PRM_S10_HOLD_JMP    SMD1_PRM_S10_bit.HOLD_JMP
#define SMD1_PRM_S10_AND_OR      SMD1_PRM_S10_bit.AND_OR

#define SMD1_PRM_S11_CEDGE0      SMD1_PRM_S11_bit.CEDGE0
#define SMD1_PRM_S11_CEDGE1      SMD1_PRM_S11_bit.CEDGE1
#define SMD1_PRM_S11_CNT_RSTC    SMD1_PRM_S11_bit.CNT_RSTC
#define SMD1_PRM_S11_PULS_CMP    SMD1_PRM_S11_bit.PULS_CMP
#define SMD1_PRM_S11_HOLD_EXIT   SMD1_PRM_S11_bit.HOLD_EXIT

#define SMD1_PRM_S12_LATCH_RS    SMD1_PRM_S12_bit.LATCH_RS

#define SMD1_PRM_S20_NX_STAT0    SMD1_PRM_S20_bit.NX_STAT0
#define SMD1_PRM_S20_NX_STAT1    SMD1_PRM_S20_bit.NX_STAT1
#define SMD1_PRM_S20_EDGE0       SMD1_PRM_S20_bit.EDGE0
#define SMD1_PRM_S20_EDGE1       SMD1_PRM_S20_bit.EDGE1
#define SMD1_PRM_S20_CNT_RSTE    SMD1_PRM_S20_bit.CNT_RSTE
#define SMD1_PRM_S20_PULS_EDG    SMD1_PRM_S20_bit.PULS_EDG
#define SMD1_PRM_S20_HOLD_JMP    SMD1_PRM_S20_bit.HOLD_JMP
#define SMD1_PRM_S20_AND_OR      SMD1_PRM_S20_bit.AND_OR

#define SMD1_PRM_S21_CEDGE0      SMD1_PRM_S21_bit.CEDGE0
#define SMD1_PRM_S21_CEDGE1      SMD1_PRM_S21_bit.CEDGE1
#define SMD1_PRM_S21_CNT_RSTC    SMD1_PRM_S21_bit.CNT_RSTC
#define SMD1_PRM_S21_PULS_CMP    SMD1_PRM_S21_bit.PULS_CMP
#define SMD1_PRM_S21_HOLD_EXIT   SMD1_PRM_S21_bit.HOLD_EXIT

#define SMD1_PRM_S22_LATCH_RS    SMD1_PRM_S22_bit.LATCH_RS

#define SMD1_PRM_S30_NX_STAT0    SMD1_PRM_S30_bit.NX_STAT0
#define SMD1_PRM_S30_NX_STAT1    SMD1_PRM_S30_bit.NX_STAT1
#define SMD1_PRM_S30_EDGE0       SMD1_PRM_S30_bit.EDGE0
#define SMD1_PRM_S30_EDGE1       SMD1_PRM_S30_bit.EDGE1
#define SMD1_PRM_S30_CNT_RSTE    SMD1_PRM_S30_bit.CNT_RSTE
#define SMD1_PRM_S30_PULS_EDG    SMD1_PRM_S30_bit.PULS_EDG
#define SMD1_PRM_S30_HOLD_JMP    SMD1_PRM_S30_bit.HOLD_JMP
#define SMD1_PRM_S30_AND_OR      SMD1_PRM_S30_bit.AND_OR

#define SMD1_PRM_S31_CEDGE0      SMD1_PRM_S31_bit.CEDGE0
#define SMD1_PRM_S31_CEDGE1      SMD1_PRM_S31_bit.CEDGE1
#define SMD1_PRM_S31_CNT_RSTC    SMD1_PRM_S31_bit.CNT_RSTC
#define SMD1_PRM_S31_PULS_CMP    SMD1_PRM_S31_bit.PULS_CMP
#define SMD1_PRM_S31_HOLD_EXIT   SMD1_PRM_S31_bit.HOLD_EXIT

#define SMD1_PRM_S32_LATCH_RS    SMD1_PRM_S32_bit.LATCH_RS

#define SMD1_CFG_TIM_NUM0        SMD1_CFG_bit.TIM_NUM0
#define SMD1_CFG_TIM_NUM1        SMD1_CFG_bit.TIM_NUM1
#define SMD1_CFG_TIM_UPD0        SMD1_CFG_bit.TIM_UPD0
#define SMD1_CFG_TIM_UPD1        SMD1_CFG_bit.TIM_UPD1

#define SMD1_DMP_L_CNT_LO0       SMD1_DMP_L_bit.CNT_LO0
#define SMD1_DMP_L_CNT_LO1       SMD1_DMP_L_bit.CNT_LO1
#define SMD1_DMP_L_CNT_LO2       SMD1_DMP_L_bit.CNT_LO2
#define SMD1_DMP_L_CNT_LO3       SMD1_DMP_L_bit.CNT_LO3
#define SMD1_DMP_L_CNT_LO4       SMD1_DMP_L_bit.CNT_LO4
#define SMD1_DMP_L_CNT_LO5       SMD1_DMP_L_bit.CNT_LO5
#define SMD1_DMP_L_CNT_LO6       SMD1_DMP_L_bit.CNT_LO6
#define SMD1_DMP_L_CNT_LO7       SMD1_DMP_L_bit.CNT_LO7

#define SMD1_DMP_H_CNT_LH0       SMD1_DMP_H_bit.CNT_LH0
#define SMD1_DMP_H_CNT_LH1       SMD1_DMP_H_bit.CNT_LH1
#define SMD1_DMP_H_CNT_LH2       SMD1_DMP_H_bit.CNT_LH2
#define SMD1_DMP_H_CNT_LH3       SMD1_DMP_H_bit.CNT_LH3
#define SMD1_DMP_H_CNT_LH4       SMD1_DMP_H_bit.CNT_LH4
#define SMD1_DMP_H_CNT_LH5       SMD1_DMP_H_bit.CNT_LH5
#define SMD1_DMP_H_CNT_LH6       SMD1_DMP_H_bit.CNT_LH6
#define SMD1_DMP_H_CNT_LH7       SMD1_DMP_H_bit.CNT_LH7

#define SMD1_GSTS_EX0_DUMP       SMD1_GSTS_bit.EX0_DUMP
#define SMD1_GSTS_EX1_DUMP       SMD1_GSTS_bit.EX1_DUMP
#define SMD1_GSTS_EX2_DUMP       SMD1_GSTS_bit.EX2_DUMP
#define SMD1_GSTS_CNT_FLAG       SMD1_GSTS_bit.CNT_FLAG
#define SMD1_GSTS_DMP_LK0        SMD1_GSTS_bit.DMP_LK0
#define SMD1_GSTS_DMP_LK1        SMD1_GSTS_bit.DMP_LK1
#define SMD1_GSTS_EVENT_OV       SMD1_GSTS_bit.EVENT_OV

#define SMD1_ISR_CNT_OVER        SMD1_ISR_bit.CNT_OVER
#define SMD1_ISR_EXT0_INT        SMD1_ISR_bit.EXT0_INT
#define SMD1_ISR_EXT1_INT        SMD1_ISR_bit.EXT1_INT
#define SMD1_ISR_EXT2_INT        SMD1_ISR_bit.EXT2_INT
#define SMD1_ISR_STA_S0_IT       SMD1_ISR_bit.STA_S0_IT
#define SMD1_ISR_STA_S1_IT       SMD1_ISR_bit.STA_S1_IT
#define SMD1_ISR_STA_S2_IT       SMD1_ISR_bit.STA_S2_IT
#define SMD1_ISR_STA_S3_IT       SMD1_ISR_bit.STA_S3_IT

#define SMD1_IMR_CNT_OV_R        SMD1_IMR_bit.CNT_OV_R
#define SMD1_IMR_IT_EXT0         SMD1_IMR_bit.IT_EXT0
#define SMD1_IMR_IT_EXT1         SMD1_IMR_bit.IT_EXT1
#define SMD1_IMR_IT_EXT2         SMD1_IMR_bit.IT_EXT2
#define SMD1_IMR_IT_STA_S0       SMD1_IMR_bit.IT_STA_S0
#define SMD1_IMR_IT_STA_S1       SMD1_IMR_bit.IT_STA_S1
#define SMD1_IMR_IT_STA_S2       SMD1_IMR_bit.IT_STA_S2
#define SMD1_IMR_IT_STA_S3       SMD1_IMR_bit.IT_STA_S3

#define SMD1_ISEL_INPUT0_EN      SMD1_ISEL_bit.INPUT0_EN
#define SMD1_ISEL_INPUT1_EN      SMD1_ISEL_bit.INPUT1_EN
#define SMD1_ISEL_INPUT2_EN      SMD1_ISEL_bit.INPUT2_EN
#define SMD1_ISEL_INPUT_LAT      SMD1_ISEL_bit.INPUT_LAT

#define SMD1_DMP_DMPE_EX0        SMD1_DMP_bit.DMPE_EX0
#define SMD1_DMP_DMPE_EX1        SMD1_DMP_bit.DMPE_EX1
#define SMD1_DMP_DMPE_EX2        SMD1_DMP_bit.DMPE_EX2
#define SMD1_DMP_DMP_EVER        SMD1_DMP_bit.DMP_EVER
#define SMD1_DMP_CPL_IT_GE       SMD1_DMP_bit.CPL_IT_GE

#define SMD1_FSM_STS_FSM0        SMD1_FSM_STS_bit.FSM0
#define SMD1_FSM_STS_FSM1        SMD1_FSM_STS_bit.FSM1
#define SMD1_FSM_STS_FSM2        SMD1_FSM_STS_bit.FSM2
#define SMD1_FSM_STS_PWM         SMD1_FSM_STS_bit.PWM
#define SMD1_FSM_STS_EVINP0      SMD1_FSM_STS_bit.EVINP0
#define SMD1_FSM_STS_EVINP1      SMD1_FSM_STS_bit.EVINP1
#define SMD1_FSM_STS_EVINP2      SMD1_FSM_STS_bit.EVINP2

#endif

/*-------------------------------------------------------------------------
 *      SMED 1 Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SMD1_CTR_START_CNT  0x01
#define MASK_SMD1_CTR_FSM_ENA    0x02

#define MASK_SMD1_CTR_TMR_TIME_T0_VAL 0x01
#define MASK_SMD1_CTR_TMR_TIME_T1_VAL 0x02
#define MASK_SMD1_CTR_TMR_TIME_T2_VAL 0x04
#define MASK_SMD1_CTR_TMR_TIME_T3_VAL 0x08
#define MASK_SMD1_CTR_TMR_DITHER_VAL 0x10

#define MASK_SMD1_CTR_INP_RS_INSIG0 0x01
#define MASK_SMD1_CTR_INP_RS_INSIG1 0x02
#define MASK_SMD1_CTR_INP_RS_INSIG2 0x04
#define MASK_SMD1_CTR_INP_RAIS_EN 0x08
#define MASK_SMD1_CTR_INP_EL_INSIG0 0x10
#define MASK_SMD1_CTR_INP_EL_INSIG1 0x20
#define MASK_SMD1_CTR_INP_EL_INSIG2 0x40
#define MASK_SMD1_CTR_INP_EL_EN  0x80

#define MASK_SMD1_CTR_DTHR_DITH0 0x01
#define MASK_SMD1_CTR_DTHR_DITH1 0x02
#define MASK_SMD1_CTR_DTHR_DITH2 0x04
#define MASK_SMD1_CTR_DTHR_DITH3 0x08
#define MASK_SMD1_CTR_DTHR_DITH4 0x10
#define MASK_SMD1_CTR_DTHR_DITH5 0x20
#define MASK_SMD1_CTR_DTHR_DITH6 0x40
#define MASK_SMD1_CTR_DTHR_DITH7 0x80

#define MASK_SMD1_TMR_T0L_TIM_T0L0 0x01
#define MASK_SMD1_TMR_T0L_TIM_T0L1 0x02
#define MASK_SMD1_TMR_T0L_TIM_T0L2 0x04
#define MASK_SMD1_TMR_T0L_TIM_T0L3 0x08
#define MASK_SMD1_TMR_T0L_TIM_T0L4 0x10
#define MASK_SMD1_TMR_T0L_TIM_T0L5 0x20
#define MASK_SMD1_TMR_T0L_TIM_T0L6 0x40
#define MASK_SMD1_TMR_T0L_TIM_T0L7 0x80

#define MASK_SMD1_TMR_T0H_TIM_T0H0 0x01
#define MASK_SMD1_TMR_T0H_TIM_T0H1 0x02
#define MASK_SMD1_TMR_T0H_TIM_T0H2 0x04
#define MASK_SMD1_TMR_T0H_TIM_T0H3 0x08
#define MASK_SMD1_TMR_T0H_TIM_T0H4 0x10
#define MASK_SMD1_TMR_T0H_TIM_T0H5 0x20
#define MASK_SMD1_TMR_T0H_TIM_T0H6 0x40
#define MASK_SMD1_TMR_T0H_TIM_T0H7 0x80

#define MASK_SMD1_TMR_T1L_TIM_T1L0 0x01
#define MASK_SMD1_TMR_T1L_TIM_T1L1 0x02
#define MASK_SMD1_TMR_T1L_TIM_T1L2 0x04
#define MASK_SMD1_TMR_T1L_TIM_T1L3 0x08
#define MASK_SMD1_TMR_T1L_TIM_T1L4 0x10
#define MASK_SMD1_TMR_T1L_TIM_T1L5 0x20
#define MASK_SMD1_TMR_T1L_TIM_T1L6 0x40
#define MASK_SMD1_TMR_T1L_TIM_T1L7 0x80

#define MASK_SMD1_TMR_T1H_TIM_T1H0 0x01
#define MASK_SMD1_TMR_T1H_TIM_T1H1 0x02
#define MASK_SMD1_TMR_T1H_TIM_T1H2 0x04
#define MASK_SMD1_TMR_T1H_TIM_T1H3 0x08
#define MASK_SMD1_TMR_T1H_TIM_T1H4 0x10
#define MASK_SMD1_TMR_T1H_TIM_T1H5 0x20
#define MASK_SMD1_TMR_T1H_TIM_T1H6 0x40
#define MASK_SMD1_TMR_T1H_TIM_T1H7 0x80

#define MASK_SMD1_TMR_T2L_TIM_T2L0 0x01
#define MASK_SMD1_TMR_T2L_TIM_T2L1 0x02
#define MASK_SMD1_TMR_T2L_TIM_T2L2 0x04
#define MASK_SMD1_TMR_T2L_TIM_T2L3 0x08
#define MASK_SMD1_TMR_T2L_TIM_T2L4 0x10
#define MASK_SMD1_TMR_T2L_TIM_T2L5 0x20
#define MASK_SMD1_TMR_T2L_TIM_T2L6 0x40
#define MASK_SMD1_TMR_T2L_TIM_T2L7 0x80

#define MASK_SMD1_TMR_T2H_TIM_T2H0 0x01
#define MASK_SMD1_TMR_T2H_TIM_T2H1 0x02
#define MASK_SMD1_TMR_T2H_TIM_T2H2 0x04
#define MASK_SMD1_TMR_T2H_TIM_T2H3 0x08
#define MASK_SMD1_TMR_T2H_TIM_T2H4 0x10
#define MASK_SMD1_TMR_T2H_TIM_T2H5 0x20
#define MASK_SMD1_TMR_T2H_TIM_T2H6 0x40
#define MASK_SMD1_TMR_T2H_TIM_T2H7 0x80

#define MASK_SMD1_TMR_T3L_TIM_T3L0 0x01
#define MASK_SMD1_TMR_T3L_TIM_T3L1 0x02
#define MASK_SMD1_TMR_T3L_TIM_T3L2 0x04
#define MASK_SMD1_TMR_T3L_TIM_T3L3 0x08
#define MASK_SMD1_TMR_T3L_TIM_T3L4 0x10
#define MASK_SMD1_TMR_T3L_TIM_T3L5 0x20
#define MASK_SMD1_TMR_T3L_TIM_T3L6 0x40
#define MASK_SMD1_TMR_T3L_TIM_T3L7 0x80

#define MASK_SMD1_TMR_T3H_TIM_T3H0 0x01
#define MASK_SMD1_TMR_T3H_TIM_T3H1 0x02
#define MASK_SMD1_TMR_T3H_TIM_T3H2 0x04
#define MASK_SMD1_TMR_T3H_TIM_T3H3 0x08
#define MASK_SMD1_TMR_T3H_TIM_T3H4 0x10
#define MASK_SMD1_TMR_T3H_TIM_T3H5 0x20
#define MASK_SMD1_TMR_T3H_TIM_T3H6 0x40
#define MASK_SMD1_TMR_T3H_TIM_T3H7 0x80

#define MASK_SMD1_PRM_ID0_NX_STAT0 0x01
#define MASK_SMD1_PRM_ID0_NX_STAT1 0x02
#define MASK_SMD1_PRM_ID0_EDGE0  0x04
#define MASK_SMD1_PRM_ID0_EDGE1  0x08
#define MASK_SMD1_PRM_ID0_CNT_RSTE 0x10
#define MASK_SMD1_PRM_ID0_PULS_EDG 0x20
#define MASK_SMD1_PRM_ID0_HOLD_JMP 0x40
#define MASK_SMD1_PRM_ID0_AND_OR 0x80

#define MASK_SMD1_PRM_ID1_CEDGE0 0x04
#define MASK_SMD1_PRM_ID1_CEDGE1 0x08
#define MASK_SMD1_PRM_ID1_CNT_RSTC 0x10
#define MASK_SMD1_PRM_ID1_PULS_CMP 0x20
#define MASK_SMD1_PRM_ID1_HOLD_EXIT 0x40

#define MASK_SMD1_PRM_ID2_LATCH_RS 0x01

#define MASK_SMD1_PRM_S00_NX_STAT0 0x01
#define MASK_SMD1_PRM_S00_NX_STAT1 0x02
#define MASK_SMD1_PRM_S00_EDGE0  0x04
#define MASK_SMD1_PRM_S00_EDGE1  0x08
#define MASK_SMD1_PRM_S00_CNT_RSTE 0x10
#define MASK_SMD1_PRM_S00_PULS_EDG 0x20
#define MASK_SMD1_PRM_S00_HOLD_JMP 0x40
#define MASK_SMD1_PRM_S00_AND_OR 0x80

#define MASK_SMD1_PRM_S01_CEDGE0 0x04
#define MASK_SMD1_PRM_S01_CEDGE1 0x08
#define MASK_SMD1_PRM_S01_CNT_RSTC 0x10
#define MASK_SMD1_PRM_S01_PULS_CMP 0x20
#define MASK_SMD1_PRM_S01_HOLD_EXIT 0x40

#define MASK_SMD1_PRM_S02_LATCH_RS 0x01

#define MASK_SMD1_PRM_S10_NX_STAT0 0x01
#define MASK_SMD1_PRM_S10_NX_STAT1 0x02
#define MASK_SMD1_PRM_S10_EDGE0  0x04
#define MASK_SMD1_PRM_S10_EDGE1  0x08
#define MASK_SMD1_PRM_S10_CNT_RSTE 0x10
#define MASK_SMD1_PRM_S10_PULS_EDG 0x20
#define MASK_SMD1_PRM_S10_HOLD_JMP 0x40
#define MASK_SMD1_PRM_S10_AND_OR 0x80

#define MASK_SMD1_PRM_S11_CEDGE0 0x04
#define MASK_SMD1_PRM_S11_CEDGE1 0x08
#define MASK_SMD1_PRM_S11_CNT_RSTC 0x10
#define MASK_SMD1_PRM_S11_PULS_CMP 0x20
#define MASK_SMD1_PRM_S11_HOLD_EXIT 0x40

#define MASK_SMD1_PRM_S12_LATCH_RS 0x01

#define MASK_SMD1_PRM_S20_NX_STAT0 0x01
#define MASK_SMD1_PRM_S20_NX_STAT1 0x02
#define MASK_SMD1_PRM_S20_EDGE0  0x04
#define MASK_SMD1_PRM_S20_EDGE1  0x08
#define MASK_SMD1_PRM_S20_CNT_RSTE 0x10
#define MASK_SMD1_PRM_S20_PULS_EDG 0x20
#define MASK_SMD1_PRM_S20_HOLD_JMP 0x40
#define MASK_SMD1_PRM_S20_AND_OR 0x80

#define MASK_SMD1_PRM_S21_CEDGE0 0x04
#define MASK_SMD1_PRM_S21_CEDGE1 0x08
#define MASK_SMD1_PRM_S21_CNT_RSTC 0x10
#define MASK_SMD1_PRM_S21_PULS_CMP 0x20
#define MASK_SMD1_PRM_S21_HOLD_EXIT 0x40

#define MASK_SMD1_PRM_S22_LATCH_RS 0x01

#define MASK_SMD1_PRM_S30_NX_STAT0 0x01
#define MASK_SMD1_PRM_S30_NX_STAT1 0x02
#define MASK_SMD1_PRM_S30_EDGE0  0x04
#define MASK_SMD1_PRM_S30_EDGE1  0x08
#define MASK_SMD1_PRM_S30_CNT_RSTE 0x10
#define MASK_SMD1_PRM_S30_PULS_EDG 0x20
#define MASK_SMD1_PRM_S30_HOLD_JMP 0x40
#define MASK_SMD1_PRM_S30_AND_OR 0x80

#define MASK_SMD1_PRM_S31_CEDGE0 0x04
#define MASK_SMD1_PRM_S31_CEDGE1 0x08
#define MASK_SMD1_PRM_S31_CNT_RSTC 0x10
#define MASK_SMD1_PRM_S31_PULS_CMP 0x20
#define MASK_SMD1_PRM_S31_HOLD_EXIT 0x40

#define MASK_SMD1_PRM_S32_LATCH_RS 0x01

#define MASK_SMD1_CFG_TIM_NUM0   0x02
#define MASK_SMD1_CFG_TIM_NUM1   0x04
#define MASK_SMD1_CFG_TIM_UPD0   0x08
#define MASK_SMD1_CFG_TIM_UPD1   0x10

#define MASK_SMD1_DMP_L_CNT_LO0  0x01
#define MASK_SMD1_DMP_L_CNT_LO1  0x02
#define MASK_SMD1_DMP_L_CNT_LO2  0x04
#define MASK_SMD1_DMP_L_CNT_LO3  0x08
#define MASK_SMD1_DMP_L_CNT_LO4  0x10
#define MASK_SMD1_DMP_L_CNT_LO5  0x20
#define MASK_SMD1_DMP_L_CNT_LO6  0x40
#define MASK_SMD1_DMP_L_CNT_LO7  0x80

#define MASK_SMD1_DMP_H_CNT_LH0  0x01
#define MASK_SMD1_DMP_H_CNT_LH1  0x02
#define MASK_SMD1_DMP_H_CNT_LH2  0x04
#define MASK_SMD1_DMP_H_CNT_LH3  0x08
#define MASK_SMD1_DMP_H_CNT_LH4  0x10
#define MASK_SMD1_DMP_H_CNT_LH5  0x20
#define MASK_SMD1_DMP_H_CNT_LH6  0x40
#define MASK_SMD1_DMP_H_CNT_LH7  0x80

#define MASK_SMD1_GSTS_EX0_DUMP  0x01
#define MASK_SMD1_GSTS_EX1_DUMP  0x02
#define MASK_SMD1_GSTS_EX2_DUMP  0x04
#define MASK_SMD1_GSTS_CNT_FLAG  0x08
#define MASK_SMD1_GSTS_DMP_LK0   0x10
#define MASK_SMD1_GSTS_DMP_LK1   0x20
#define MASK_SMD1_GSTS_EVENT_OV  0x40

#define MASK_SMD1_ISR_CNT_OVER   0x01
#define MASK_SMD1_ISR_EXT0_INT   0x02
#define MASK_SMD1_ISR_EXT1_INT   0x04
#define MASK_SMD1_ISR_EXT2_INT   0x08
#define MASK_SMD1_ISR_STA_S0_IT  0x10
#define MASK_SMD1_ISR_STA_S1_IT  0x20
#define MASK_SMD1_ISR_STA_S2_IT  0x40
#define MASK_SMD1_ISR_STA_S3_IT  0x80

#define MASK_SMD1_IMR_CNT_OV_R   0x01
#define MASK_SMD1_IMR_IT_EXT0    0x02
#define MASK_SMD1_IMR_IT_EXT1    0x04
#define MASK_SMD1_IMR_IT_EXT2    0x08
#define MASK_SMD1_IMR_IT_STA_S0  0x10
#define MASK_SMD1_IMR_IT_STA_S1  0x20
#define MASK_SMD1_IMR_IT_STA_S2  0x40
#define MASK_SMD1_IMR_IT_STA_S3  0x80

#define MASK_SMD1_ISEL_INPUT0_EN 0x01
#define MASK_SMD1_ISEL_INPUT1_EN 0x02
#define MASK_SMD1_ISEL_INPUT2_EN 0x04
#define MASK_SMD1_ISEL_INPUT_LAT 0x08

#define MASK_SMD1_DMP_DMPE_EX0   0x01
#define MASK_SMD1_DMP_DMPE_EX1   0x02
#define MASK_SMD1_DMP_DMPE_EX2   0x04
#define MASK_SMD1_DMP_DMP_EVER   0x08
#define MASK_SMD1_DMP_CPL_IT_GE  0x10

#define MASK_SMD1_FSM_STS_FSM0   0x01
#define MASK_SMD1_FSM_STS_FSM1   0x02
#define MASK_SMD1_FSM_STS_FSM2   0x04
#define MASK_SMD1_FSM_STS_PWM    0x08
#define MASK_SMD1_FSM_STS_EVINP0 0x10
#define MASK_SMD1_FSM_STS_EVINP1 0x20
#define MASK_SMD1_FSM_STS_EVINP2 0x40


/*-------------------------------------------------------------------------
 *      SMED 2 Registers register definitions
 *-----------------------------------------------------------------------*/
/* Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START_CNT   : 1;
  unsigned char FSM_ENA     : 1;
} __BITS_SMD2_CTR;
#endif
__IO_REG8_BIT(SMD2_CTR,    0x5580, __READ_WRITE, __BITS_SMD2_CTR);

/* Control timer register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIME_T0_VAL : 1;
  unsigned char TIME_T1_VAL : 1;
  unsigned char TIME_T2_VAL : 1;
  unsigned char TIME_T3_VAL : 1;
  unsigned char DITHER_VAL  : 1;
} __BITS_SMD2_CTR_TMR;
#endif
__IO_REG8_BIT(SMD2_CTR_TMR, 0x5581, __READ_WRITE, __BITS_SMD2_CTR_TMR);

/* Control input register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RS_INSIG0   : 1;
  unsigned char RS_INSIG1   : 1;
  unsigned char RS_INSIG2   : 1;
  unsigned char RAIS_EN     : 1;
  unsigned char EL_INSIG0   : 1;
  unsigned char EL_INSIG1   : 1;
  unsigned char EL_INSIG2   : 1;
  unsigned char EL_EN       : 1;
} __BITS_SMD2_CTR_INP;
#endif
__IO_REG8_BIT(SMD2_CTR_INP, 0x5582, __READ_WRITE, __BITS_SMD2_CTR_INP);

/* Dithering register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DITH0       : 1;
  unsigned char DITH1       : 1;
  unsigned char DITH2       : 1;
  unsigned char DITH3       : 1;
  unsigned char DITH4       : 1;
  unsigned char DITH5       : 1;
  unsigned char DITH6       : 1;
  unsigned char DITH7       : 1;
} __BITS_SMD2_CTR_DTHR;
#endif
__IO_REG8_BIT(SMD2_CTR_DTHR, 0x5583, __READ_WRITE, __BITS_SMD2_CTR_DTHR);

/* Time T0 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0L0    : 1;
  unsigned char TIM_T0L1    : 1;
  unsigned char TIM_T0L2    : 1;
  unsigned char TIM_T0L3    : 1;
  unsigned char TIM_T0L4    : 1;
  unsigned char TIM_T0L5    : 1;
  unsigned char TIM_T0L6    : 1;
  unsigned char TIM_T0L7    : 1;
} __BITS_SMD2_TMR_T0L;
#endif
__IO_REG8_BIT(SMD2_TMR_T0L, 0x5584, __READ_WRITE, __BITS_SMD2_TMR_T0L);

/* Time T0 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0H0    : 1;
  unsigned char TIM_T0H1    : 1;
  unsigned char TIM_T0H2    : 1;
  unsigned char TIM_T0H3    : 1;
  unsigned char TIM_T0H4    : 1;
  unsigned char TIM_T0H5    : 1;
  unsigned char TIM_T0H6    : 1;
  unsigned char TIM_T0H7    : 1;
} __BITS_SMD2_TMR_T0H;
#endif
__IO_REG8_BIT(SMD2_TMR_T0H, 0x5585, __READ_WRITE, __BITS_SMD2_TMR_T0H);

/* Time T1 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1L0    : 1;
  unsigned char TIM_T1L1    : 1;
  unsigned char TIM_T1L2    : 1;
  unsigned char TIM_T1L3    : 1;
  unsigned char TIM_T1L4    : 1;
  unsigned char TIM_T1L5    : 1;
  unsigned char TIM_T1L6    : 1;
  unsigned char TIM_T1L7    : 1;
} __BITS_SMD2_TMR_T1L;
#endif
__IO_REG8_BIT(SMD2_TMR_T1L, 0x5586, __READ_WRITE, __BITS_SMD2_TMR_T1L);

/* Time T1 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1H0    : 1;
  unsigned char TIM_T1H1    : 1;
  unsigned char TIM_T1H2    : 1;
  unsigned char TIM_T1H3    : 1;
  unsigned char TIM_T1H4    : 1;
  unsigned char TIM_T1H5    : 1;
  unsigned char TIM_T1H6    : 1;
  unsigned char TIM_T1H7    : 1;
} __BITS_SMD2_TMR_T1H;
#endif
__IO_REG8_BIT(SMD2_TMR_T1H, 0x5587, __READ_WRITE, __BITS_SMD2_TMR_T1H);

/* Time T2 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2L0    : 1;
  unsigned char TIM_T2L1    : 1;
  unsigned char TIM_T2L2    : 1;
  unsigned char TIM_T2L3    : 1;
  unsigned char TIM_T2L4    : 1;
  unsigned char TIM_T2L5    : 1;
  unsigned char TIM_T2L6    : 1;
  unsigned char TIM_T2L7    : 1;
} __BITS_SMD2_TMR_T2L;
#endif
__IO_REG8_BIT(SMD2_TMR_T2L, 0x5588, __READ_WRITE, __BITS_SMD2_TMR_T2L);

/* Time T2 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2H0    : 1;
  unsigned char TIM_T2H1    : 1;
  unsigned char TIM_T2H2    : 1;
  unsigned char TIM_T2H3    : 1;
  unsigned char TIM_T2H4    : 1;
  unsigned char TIM_T2H5    : 1;
  unsigned char TIM_T2H6    : 1;
  unsigned char TIM_T2H7    : 1;
} __BITS_SMD2_TMR_T2H;
#endif
__IO_REG8_BIT(SMD2_TMR_T2H, 0x5589, __READ_WRITE, __BITS_SMD2_TMR_T2H);

/* Time T3 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3L0    : 1;
  unsigned char TIM_T3L1    : 1;
  unsigned char TIM_T3L2    : 1;
  unsigned char TIM_T3L3    : 1;
  unsigned char TIM_T3L4    : 1;
  unsigned char TIM_T3L5    : 1;
  unsigned char TIM_T3L6    : 1;
  unsigned char TIM_T3L7    : 1;
} __BITS_SMD2_TMR_T3L;
#endif
__IO_REG8_BIT(SMD2_TMR_T3L, 0x558A, __READ_WRITE, __BITS_SMD2_TMR_T3L);

/* Time T3 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3H0    : 1;
  unsigned char TIM_T3H1    : 1;
  unsigned char TIM_T3H2    : 1;
  unsigned char TIM_T3H3    : 1;
  unsigned char TIM_T3H4    : 1;
  unsigned char TIM_T3H5    : 1;
  unsigned char TIM_T3H6    : 1;
  unsigned char TIM_T3H7    : 1;
} __BITS_SMD2_TMR_T3H;
#endif
__IO_REG8_BIT(SMD2_TMR_T3H, 0x558B, __READ_WRITE, __BITS_SMD2_TMR_T3H);

/* Parameter 0 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD2_PRM_ID0;
#endif
__IO_REG8_BIT(SMD2_PRM_ID0, 0x558C, __READ_WRITE, __BITS_SMD2_PRM_ID0);

/* Parameter 1 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD2_PRM_ID1;
#endif
__IO_REG8_BIT(SMD2_PRM_ID1, 0x558D, __READ_WRITE, __BITS_SMD2_PRM_ID1);

/* Parameter 2 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD2_PRM_ID2;
#endif
__IO_REG8_BIT(SMD2_PRM_ID2, 0x558E, __READ_WRITE, __BITS_SMD2_PRM_ID2);

/* Parameter 0 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD2_PRM_S00;
#endif
__IO_REG8_BIT(SMD2_PRM_S00, 0x558F, __READ_WRITE, __BITS_SMD2_PRM_S00);

/* Parameter 1 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD2_PRM_S01;
#endif
__IO_REG8_BIT(SMD2_PRM_S01, 0x5590, __READ_WRITE, __BITS_SMD2_PRM_S01);

/* Parameter 2 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD2_PRM_S02;
#endif
__IO_REG8_BIT(SMD2_PRM_S02, 0x5591, __READ_WRITE, __BITS_SMD2_PRM_S02);

/* Parameter 0 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD2_PRM_S10;
#endif
__IO_REG8_BIT(SMD2_PRM_S10, 0x5592, __READ_WRITE, __BITS_SMD2_PRM_S10);

/* Parameter 1 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD2_PRM_S11;
#endif
__IO_REG8_BIT(SMD2_PRM_S11, 0x5593, __READ_WRITE, __BITS_SMD2_PRM_S11);

/* Parameter 2 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD2_PRM_S12;
#endif
__IO_REG8_BIT(SMD2_PRM_S12, 0x5594, __READ_WRITE, __BITS_SMD2_PRM_S12);

/* Parameter 0 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD2_PRM_S20;
#endif
__IO_REG8_BIT(SMD2_PRM_S20, 0x5595, __READ_WRITE, __BITS_SMD2_PRM_S20);

/* Parameter 1 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD2_PRM_S21;
#endif
__IO_REG8_BIT(SMD2_PRM_S21, 0x5596, __READ_WRITE, __BITS_SMD2_PRM_S21);

/* Parameter 2 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD2_PRM_S22;
#endif
__IO_REG8_BIT(SMD2_PRM_S22, 0x5597, __READ_WRITE, __BITS_SMD2_PRM_S22);

/* Parameter 0 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD2_PRM_S30;
#endif
__IO_REG8_BIT(SMD2_PRM_S30, 0x5598, __READ_WRITE, __BITS_SMD2_PRM_S30);

/* Parameter 1 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD2_PRM_S31;
#endif
__IO_REG8_BIT(SMD2_PRM_S31, 0x5599, __READ_WRITE, __BITS_SMD2_PRM_S31);

/* Parameter 2 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD2_PRM_S32;
#endif
__IO_REG8_BIT(SMD2_PRM_S32, 0x559A, __READ_WRITE, __BITS_SMD2_PRM_S32);

/* Timer configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TIM_NUM0    : 1;
  unsigned char TIM_NUM1    : 1;
  unsigned char TIM_UPD0    : 1;
  unsigned char TIM_UPD1    : 1;
} __BITS_SMD2_CFG;
#endif
__IO_REG8_BIT(SMD2_CFG,    0x559B, __READ_WRITE, __BITS_SMD2_CFG);

/* Dump counter lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LO0     : 1;
  unsigned char CNT_LO1     : 1;
  unsigned char CNT_LO2     : 1;
  unsigned char CNT_LO3     : 1;
  unsigned char CNT_LO4     : 1;
  unsigned char CNT_LO5     : 1;
  unsigned char CNT_LO6     : 1;
  unsigned char CNT_LO7     : 1;
} __BITS_SMD2_DMP_L;
#endif
__IO_REG8_BIT(SMD2_DMP_L,  0x559C, __READ, __BITS_SMD2_DMP_L);

/* Dump counter msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LH0     : 1;
  unsigned char CNT_LH1     : 1;
  unsigned char CNT_LH2     : 1;
  unsigned char CNT_LH3     : 1;
  unsigned char CNT_LH4     : 1;
  unsigned char CNT_LH5     : 1;
  unsigned char CNT_LH6     : 1;
  unsigned char CNT_LH7     : 1;
} __BITS_SMD2_DMP_H;
#endif
__IO_REG8_BIT(SMD2_DMP_H,  0x559D, __READ, __BITS_SMD2_DMP_H);

/* General status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EX0_DUMP    : 1;
  unsigned char EX1_DUMP    : 1;
  unsigned char EX2_DUMP    : 1;
  unsigned char CNT_FLAG    : 1;
  unsigned char DMP_LK0     : 1;
  unsigned char DMP_LK1     : 1;
  unsigned char EVENT_OV    : 1;
} __BITS_SMD2_GSTS;
#endif
__IO_REG8_BIT(SMD2_GSTS,   0x559E, __READ_WRITE, __BITS_SMD2_GSTS);

/* Interrupt status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OVER    : 1;
  unsigned char EXT0_INT    : 1;
  unsigned char EXT1_INT    : 1;
  unsigned char EXT2_INT    : 1;
  unsigned char STA_S0_IT   : 1;
  unsigned char STA_S1_IT   : 1;
  unsigned char STA_S2_IT   : 1;
  unsigned char STA_S3_IT   : 1;
} __BITS_SMD2_ISR;
#endif
__IO_REG8_BIT(SMD2_ISR,    0x559F, __READ_WRITE, __BITS_SMD2_ISR);

/* Interrupt mask register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OV_R    : 1;
  unsigned char IT_EXT0     : 1;
  unsigned char IT_EXT1     : 1;
  unsigned char IT_EXT2     : 1;
  unsigned char IT_STA_S0   : 1;
  unsigned char IT_STA_S1   : 1;
  unsigned char IT_STA_S2   : 1;
  unsigned char IT_STA_S3   : 1;
} __BITS_SMD2_IMR;
#endif
__IO_REG8_BIT(SMD2_IMR,    0x55A0, __READ_WRITE, __BITS_SMD2_IMR);

/* External event control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INPUT0_EN   : 1;
  unsigned char INPUT1_EN   : 1;
  unsigned char INPUT2_EN   : 1;
  unsigned char INPUT_LAT   : 1;
} __BITS_SMD2_ISEL;
#endif
__IO_REG8_BIT(SMD2_ISEL,   0x55A1, __READ_WRITE, __BITS_SMD2_ISEL);

/* Dump enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DMPE_EX0    : 1;
  unsigned char DMPE_EX1    : 1;
  unsigned char DMPE_EX2    : 1;
  unsigned char DMP_EVER    : 1;
  unsigned char CPL_IT_GE   : 1;
} __BITS_SMD2_DMP;
#endif
__IO_REG8_BIT(SMD2_DMP,    0x55A2, __READ_WRITE, __BITS_SMD2_DMP);

/* FSM status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FSM0        : 1;
  unsigned char FSM1        : 1;
  unsigned char FSM2        : 1;
  unsigned char PWM         : 1;
  unsigned char EVINP0      : 1;
  unsigned char EVINP1      : 1;
  unsigned char EVINP2      : 1;
} __BITS_SMD2_FSM_STS;
#endif
__IO_REG8_BIT(SMD2_FSM_STS, 0x55A3, __READ, __BITS_SMD2_FSM_STS);


/*-------------------------------------------------------------------------
 *      SMED 2 Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SMD2_CTR_START_CNT       SMD2_CTR_bit.START_CNT
#define SMD2_CTR_FSM_ENA         SMD2_CTR_bit.FSM_ENA

#define SMD2_CTR_TMR_TIME_T0_VAL SMD2_CTR_TMR_bit.TIME_T0_VAL
#define SMD2_CTR_TMR_TIME_T1_VAL SMD2_CTR_TMR_bit.TIME_T1_VAL
#define SMD2_CTR_TMR_TIME_T2_VAL SMD2_CTR_TMR_bit.TIME_T2_VAL
#define SMD2_CTR_TMR_TIME_T3_VAL SMD2_CTR_TMR_bit.TIME_T3_VAL
#define SMD2_CTR_TMR_DITHER_VAL  SMD2_CTR_TMR_bit.DITHER_VAL

#define SMD2_CTR_INP_RS_INSIG0   SMD2_CTR_INP_bit.RS_INSIG0
#define SMD2_CTR_INP_RS_INSIG1   SMD2_CTR_INP_bit.RS_INSIG1
#define SMD2_CTR_INP_RS_INSIG2   SMD2_CTR_INP_bit.RS_INSIG2
#define SMD2_CTR_INP_RAIS_EN     SMD2_CTR_INP_bit.RAIS_EN
#define SMD2_CTR_INP_EL_INSIG0   SMD2_CTR_INP_bit.EL_INSIG0
#define SMD2_CTR_INP_EL_INSIG1   SMD2_CTR_INP_bit.EL_INSIG1
#define SMD2_CTR_INP_EL_INSIG2   SMD2_CTR_INP_bit.EL_INSIG2
#define SMD2_CTR_INP_EL_EN       SMD2_CTR_INP_bit.EL_EN

#define SMD2_CTR_DTHR_DITH0      SMD2_CTR_DTHR_bit.DITH0
#define SMD2_CTR_DTHR_DITH1      SMD2_CTR_DTHR_bit.DITH1
#define SMD2_CTR_DTHR_DITH2      SMD2_CTR_DTHR_bit.DITH2
#define SMD2_CTR_DTHR_DITH3      SMD2_CTR_DTHR_bit.DITH3
#define SMD2_CTR_DTHR_DITH4      SMD2_CTR_DTHR_bit.DITH4
#define SMD2_CTR_DTHR_DITH5      SMD2_CTR_DTHR_bit.DITH5
#define SMD2_CTR_DTHR_DITH6      SMD2_CTR_DTHR_bit.DITH6
#define SMD2_CTR_DTHR_DITH7      SMD2_CTR_DTHR_bit.DITH7

#define SMD2_TMR_T0L_TIM_T0L0    SMD2_TMR_T0L_bit.TIM_T0L0
#define SMD2_TMR_T0L_TIM_T0L1    SMD2_TMR_T0L_bit.TIM_T0L1
#define SMD2_TMR_T0L_TIM_T0L2    SMD2_TMR_T0L_bit.TIM_T0L2
#define SMD2_TMR_T0L_TIM_T0L3    SMD2_TMR_T0L_bit.TIM_T0L3
#define SMD2_TMR_T0L_TIM_T0L4    SMD2_TMR_T0L_bit.TIM_T0L4
#define SMD2_TMR_T0L_TIM_T0L5    SMD2_TMR_T0L_bit.TIM_T0L5
#define SMD2_TMR_T0L_TIM_T0L6    SMD2_TMR_T0L_bit.TIM_T0L6
#define SMD2_TMR_T0L_TIM_T0L7    SMD2_TMR_T0L_bit.TIM_T0L7

#define SMD2_TMR_T0H_TIM_T0H0    SMD2_TMR_T0H_bit.TIM_T0H0
#define SMD2_TMR_T0H_TIM_T0H1    SMD2_TMR_T0H_bit.TIM_T0H1
#define SMD2_TMR_T0H_TIM_T0H2    SMD2_TMR_T0H_bit.TIM_T0H2
#define SMD2_TMR_T0H_TIM_T0H3    SMD2_TMR_T0H_bit.TIM_T0H3
#define SMD2_TMR_T0H_TIM_T0H4    SMD2_TMR_T0H_bit.TIM_T0H4
#define SMD2_TMR_T0H_TIM_T0H5    SMD2_TMR_T0H_bit.TIM_T0H5
#define SMD2_TMR_T0H_TIM_T0H6    SMD2_TMR_T0H_bit.TIM_T0H6
#define SMD2_TMR_T0H_TIM_T0H7    SMD2_TMR_T0H_bit.TIM_T0H7

#define SMD2_TMR_T1L_TIM_T1L0    SMD2_TMR_T1L_bit.TIM_T1L0
#define SMD2_TMR_T1L_TIM_T1L1    SMD2_TMR_T1L_bit.TIM_T1L1
#define SMD2_TMR_T1L_TIM_T1L2    SMD2_TMR_T1L_bit.TIM_T1L2
#define SMD2_TMR_T1L_TIM_T1L3    SMD2_TMR_T1L_bit.TIM_T1L3
#define SMD2_TMR_T1L_TIM_T1L4    SMD2_TMR_T1L_bit.TIM_T1L4
#define SMD2_TMR_T1L_TIM_T1L5    SMD2_TMR_T1L_bit.TIM_T1L5
#define SMD2_TMR_T1L_TIM_T1L6    SMD2_TMR_T1L_bit.TIM_T1L6
#define SMD2_TMR_T1L_TIM_T1L7    SMD2_TMR_T1L_bit.TIM_T1L7

#define SMD2_TMR_T1H_TIM_T1H0    SMD2_TMR_T1H_bit.TIM_T1H0
#define SMD2_TMR_T1H_TIM_T1H1    SMD2_TMR_T1H_bit.TIM_T1H1
#define SMD2_TMR_T1H_TIM_T1H2    SMD2_TMR_T1H_bit.TIM_T1H2
#define SMD2_TMR_T1H_TIM_T1H3    SMD2_TMR_T1H_bit.TIM_T1H3
#define SMD2_TMR_T1H_TIM_T1H4    SMD2_TMR_T1H_bit.TIM_T1H4
#define SMD2_TMR_T1H_TIM_T1H5    SMD2_TMR_T1H_bit.TIM_T1H5
#define SMD2_TMR_T1H_TIM_T1H6    SMD2_TMR_T1H_bit.TIM_T1H6
#define SMD2_TMR_T1H_TIM_T1H7    SMD2_TMR_T1H_bit.TIM_T1H7

#define SMD2_TMR_T2L_TIM_T2L0    SMD2_TMR_T2L_bit.TIM_T2L0
#define SMD2_TMR_T2L_TIM_T2L1    SMD2_TMR_T2L_bit.TIM_T2L1
#define SMD2_TMR_T2L_TIM_T2L2    SMD2_TMR_T2L_bit.TIM_T2L2
#define SMD2_TMR_T2L_TIM_T2L3    SMD2_TMR_T2L_bit.TIM_T2L3
#define SMD2_TMR_T2L_TIM_T2L4    SMD2_TMR_T2L_bit.TIM_T2L4
#define SMD2_TMR_T2L_TIM_T2L5    SMD2_TMR_T2L_bit.TIM_T2L5
#define SMD2_TMR_T2L_TIM_T2L6    SMD2_TMR_T2L_bit.TIM_T2L6
#define SMD2_TMR_T2L_TIM_T2L7    SMD2_TMR_T2L_bit.TIM_T2L7

#define SMD2_TMR_T2H_TIM_T2H0    SMD2_TMR_T2H_bit.TIM_T2H0
#define SMD2_TMR_T2H_TIM_T2H1    SMD2_TMR_T2H_bit.TIM_T2H1
#define SMD2_TMR_T2H_TIM_T2H2    SMD2_TMR_T2H_bit.TIM_T2H2
#define SMD2_TMR_T2H_TIM_T2H3    SMD2_TMR_T2H_bit.TIM_T2H3
#define SMD2_TMR_T2H_TIM_T2H4    SMD2_TMR_T2H_bit.TIM_T2H4
#define SMD2_TMR_T2H_TIM_T2H5    SMD2_TMR_T2H_bit.TIM_T2H5
#define SMD2_TMR_T2H_TIM_T2H6    SMD2_TMR_T2H_bit.TIM_T2H6
#define SMD2_TMR_T2H_TIM_T2H7    SMD2_TMR_T2H_bit.TIM_T2H7

#define SMD2_TMR_T3L_TIM_T3L0    SMD2_TMR_T3L_bit.TIM_T3L0
#define SMD2_TMR_T3L_TIM_T3L1    SMD2_TMR_T3L_bit.TIM_T3L1
#define SMD2_TMR_T3L_TIM_T3L2    SMD2_TMR_T3L_bit.TIM_T3L2
#define SMD2_TMR_T3L_TIM_T3L3    SMD2_TMR_T3L_bit.TIM_T3L3
#define SMD2_TMR_T3L_TIM_T3L4    SMD2_TMR_T3L_bit.TIM_T3L4
#define SMD2_TMR_T3L_TIM_T3L5    SMD2_TMR_T3L_bit.TIM_T3L5
#define SMD2_TMR_T3L_TIM_T3L6    SMD2_TMR_T3L_bit.TIM_T3L6
#define SMD2_TMR_T3L_TIM_T3L7    SMD2_TMR_T3L_bit.TIM_T3L7

#define SMD2_TMR_T3H_TIM_T3H0    SMD2_TMR_T3H_bit.TIM_T3H0
#define SMD2_TMR_T3H_TIM_T3H1    SMD2_TMR_T3H_bit.TIM_T3H1
#define SMD2_TMR_T3H_TIM_T3H2    SMD2_TMR_T3H_bit.TIM_T3H2
#define SMD2_TMR_T3H_TIM_T3H3    SMD2_TMR_T3H_bit.TIM_T3H3
#define SMD2_TMR_T3H_TIM_T3H4    SMD2_TMR_T3H_bit.TIM_T3H4
#define SMD2_TMR_T3H_TIM_T3H5    SMD2_TMR_T3H_bit.TIM_T3H5
#define SMD2_TMR_T3H_TIM_T3H6    SMD2_TMR_T3H_bit.TIM_T3H6
#define SMD2_TMR_T3H_TIM_T3H7    SMD2_TMR_T3H_bit.TIM_T3H7

#define SMD2_PRM_ID0_NX_STAT0    SMD2_PRM_ID0_bit.NX_STAT0
#define SMD2_PRM_ID0_NX_STAT1    SMD2_PRM_ID0_bit.NX_STAT1
#define SMD2_PRM_ID0_EDGE0       SMD2_PRM_ID0_bit.EDGE0
#define SMD2_PRM_ID0_EDGE1       SMD2_PRM_ID0_bit.EDGE1
#define SMD2_PRM_ID0_CNT_RSTE    SMD2_PRM_ID0_bit.CNT_RSTE
#define SMD2_PRM_ID0_PULS_EDG    SMD2_PRM_ID0_bit.PULS_EDG
#define SMD2_PRM_ID0_HOLD_JMP    SMD2_PRM_ID0_bit.HOLD_JMP
#define SMD2_PRM_ID0_AND_OR      SMD2_PRM_ID0_bit.AND_OR

#define SMD2_PRM_ID1_CEDGE0      SMD2_PRM_ID1_bit.CEDGE0
#define SMD2_PRM_ID1_CEDGE1      SMD2_PRM_ID1_bit.CEDGE1
#define SMD2_PRM_ID1_CNT_RSTC    SMD2_PRM_ID1_bit.CNT_RSTC
#define SMD2_PRM_ID1_PULS_CMP    SMD2_PRM_ID1_bit.PULS_CMP
#define SMD2_PRM_ID1_HOLD_EXIT   SMD2_PRM_ID1_bit.HOLD_EXIT

#define SMD2_PRM_ID2_LATCH_RS    SMD2_PRM_ID2_bit.LATCH_RS

#define SMD2_PRM_S00_NX_STAT0    SMD2_PRM_S00_bit.NX_STAT0
#define SMD2_PRM_S00_NX_STAT1    SMD2_PRM_S00_bit.NX_STAT1
#define SMD2_PRM_S00_EDGE0       SMD2_PRM_S00_bit.EDGE0
#define SMD2_PRM_S00_EDGE1       SMD2_PRM_S00_bit.EDGE1
#define SMD2_PRM_S00_CNT_RSTE    SMD2_PRM_S00_bit.CNT_RSTE
#define SMD2_PRM_S00_PULS_EDG    SMD2_PRM_S00_bit.PULS_EDG
#define SMD2_PRM_S00_HOLD_JMP    SMD2_PRM_S00_bit.HOLD_JMP
#define SMD2_PRM_S00_AND_OR      SMD2_PRM_S00_bit.AND_OR

#define SMD2_PRM_S01_CEDGE0      SMD2_PRM_S01_bit.CEDGE0
#define SMD2_PRM_S01_CEDGE1      SMD2_PRM_S01_bit.CEDGE1
#define SMD2_PRM_S01_CNT_RSTC    SMD2_PRM_S01_bit.CNT_RSTC
#define SMD2_PRM_S01_PULS_CMP    SMD2_PRM_S01_bit.PULS_CMP
#define SMD2_PRM_S01_HOLD_EXIT   SMD2_PRM_S01_bit.HOLD_EXIT

#define SMD2_PRM_S02_LATCH_RS    SMD2_PRM_S02_bit.LATCH_RS

#define SMD2_PRM_S10_NX_STAT0    SMD2_PRM_S10_bit.NX_STAT0
#define SMD2_PRM_S10_NX_STAT1    SMD2_PRM_S10_bit.NX_STAT1
#define SMD2_PRM_S10_EDGE0       SMD2_PRM_S10_bit.EDGE0
#define SMD2_PRM_S10_EDGE1       SMD2_PRM_S10_bit.EDGE1
#define SMD2_PRM_S10_CNT_RSTE    SMD2_PRM_S10_bit.CNT_RSTE
#define SMD2_PRM_S10_PULS_EDG    SMD2_PRM_S10_bit.PULS_EDG
#define SMD2_PRM_S10_HOLD_JMP    SMD2_PRM_S10_bit.HOLD_JMP
#define SMD2_PRM_S10_AND_OR      SMD2_PRM_S10_bit.AND_OR

#define SMD2_PRM_S11_CEDGE0      SMD2_PRM_S11_bit.CEDGE0
#define SMD2_PRM_S11_CEDGE1      SMD2_PRM_S11_bit.CEDGE1
#define SMD2_PRM_S11_CNT_RSTC    SMD2_PRM_S11_bit.CNT_RSTC
#define SMD2_PRM_S11_PULS_CMP    SMD2_PRM_S11_bit.PULS_CMP
#define SMD2_PRM_S11_HOLD_EXIT   SMD2_PRM_S11_bit.HOLD_EXIT

#define SMD2_PRM_S12_LATCH_RS    SMD2_PRM_S12_bit.LATCH_RS

#define SMD2_PRM_S20_NX_STAT0    SMD2_PRM_S20_bit.NX_STAT0
#define SMD2_PRM_S20_NX_STAT1    SMD2_PRM_S20_bit.NX_STAT1
#define SMD2_PRM_S20_EDGE0       SMD2_PRM_S20_bit.EDGE0
#define SMD2_PRM_S20_EDGE1       SMD2_PRM_S20_bit.EDGE1
#define SMD2_PRM_S20_CNT_RSTE    SMD2_PRM_S20_bit.CNT_RSTE
#define SMD2_PRM_S20_PULS_EDG    SMD2_PRM_S20_bit.PULS_EDG
#define SMD2_PRM_S20_HOLD_JMP    SMD2_PRM_S20_bit.HOLD_JMP
#define SMD2_PRM_S20_AND_OR      SMD2_PRM_S20_bit.AND_OR

#define SMD2_PRM_S21_CEDGE0      SMD2_PRM_S21_bit.CEDGE0
#define SMD2_PRM_S21_CEDGE1      SMD2_PRM_S21_bit.CEDGE1
#define SMD2_PRM_S21_CNT_RSTC    SMD2_PRM_S21_bit.CNT_RSTC
#define SMD2_PRM_S21_PULS_CMP    SMD2_PRM_S21_bit.PULS_CMP
#define SMD2_PRM_S21_HOLD_EXIT   SMD2_PRM_S21_bit.HOLD_EXIT

#define SMD2_PRM_S22_LATCH_RS    SMD2_PRM_S22_bit.LATCH_RS

#define SMD2_PRM_S30_NX_STAT0    SMD2_PRM_S30_bit.NX_STAT0
#define SMD2_PRM_S30_NX_STAT1    SMD2_PRM_S30_bit.NX_STAT1
#define SMD2_PRM_S30_EDGE0       SMD2_PRM_S30_bit.EDGE0
#define SMD2_PRM_S30_EDGE1       SMD2_PRM_S30_bit.EDGE1
#define SMD2_PRM_S30_CNT_RSTE    SMD2_PRM_S30_bit.CNT_RSTE
#define SMD2_PRM_S30_PULS_EDG    SMD2_PRM_S30_bit.PULS_EDG
#define SMD2_PRM_S30_HOLD_JMP    SMD2_PRM_S30_bit.HOLD_JMP
#define SMD2_PRM_S30_AND_OR      SMD2_PRM_S30_bit.AND_OR

#define SMD2_PRM_S31_CEDGE0      SMD2_PRM_S31_bit.CEDGE0
#define SMD2_PRM_S31_CEDGE1      SMD2_PRM_S31_bit.CEDGE1
#define SMD2_PRM_S31_CNT_RSTC    SMD2_PRM_S31_bit.CNT_RSTC
#define SMD2_PRM_S31_PULS_CMP    SMD2_PRM_S31_bit.PULS_CMP
#define SMD2_PRM_S31_HOLD_EXIT   SMD2_PRM_S31_bit.HOLD_EXIT

#define SMD2_PRM_S32_LATCH_RS    SMD2_PRM_S32_bit.LATCH_RS

#define SMD2_CFG_TIM_NUM0        SMD2_CFG_bit.TIM_NUM0
#define SMD2_CFG_TIM_NUM1        SMD2_CFG_bit.TIM_NUM1
#define SMD2_CFG_TIM_UPD0        SMD2_CFG_bit.TIM_UPD0
#define SMD2_CFG_TIM_UPD1        SMD2_CFG_bit.TIM_UPD1

#define SMD2_DMP_L_CNT_LO0       SMD2_DMP_L_bit.CNT_LO0
#define SMD2_DMP_L_CNT_LO1       SMD2_DMP_L_bit.CNT_LO1
#define SMD2_DMP_L_CNT_LO2       SMD2_DMP_L_bit.CNT_LO2
#define SMD2_DMP_L_CNT_LO3       SMD2_DMP_L_bit.CNT_LO3
#define SMD2_DMP_L_CNT_LO4       SMD2_DMP_L_bit.CNT_LO4
#define SMD2_DMP_L_CNT_LO5       SMD2_DMP_L_bit.CNT_LO5
#define SMD2_DMP_L_CNT_LO6       SMD2_DMP_L_bit.CNT_LO6
#define SMD2_DMP_L_CNT_LO7       SMD2_DMP_L_bit.CNT_LO7

#define SMD2_DMP_H_CNT_LH0       SMD2_DMP_H_bit.CNT_LH0
#define SMD2_DMP_H_CNT_LH1       SMD2_DMP_H_bit.CNT_LH1
#define SMD2_DMP_H_CNT_LH2       SMD2_DMP_H_bit.CNT_LH2
#define SMD2_DMP_H_CNT_LH3       SMD2_DMP_H_bit.CNT_LH3
#define SMD2_DMP_H_CNT_LH4       SMD2_DMP_H_bit.CNT_LH4
#define SMD2_DMP_H_CNT_LH5       SMD2_DMP_H_bit.CNT_LH5
#define SMD2_DMP_H_CNT_LH6       SMD2_DMP_H_bit.CNT_LH6
#define SMD2_DMP_H_CNT_LH7       SMD2_DMP_H_bit.CNT_LH7

#define SMD2_GSTS_EX0_DUMP       SMD2_GSTS_bit.EX0_DUMP
#define SMD2_GSTS_EX1_DUMP       SMD2_GSTS_bit.EX1_DUMP
#define SMD2_GSTS_EX2_DUMP       SMD2_GSTS_bit.EX2_DUMP
#define SMD2_GSTS_CNT_FLAG       SMD2_GSTS_bit.CNT_FLAG
#define SMD2_GSTS_DMP_LK0        SMD2_GSTS_bit.DMP_LK0
#define SMD2_GSTS_DMP_LK1        SMD2_GSTS_bit.DMP_LK1
#define SMD2_GSTS_EVENT_OV       SMD2_GSTS_bit.EVENT_OV

#define SMD2_ISR_CNT_OVER        SMD2_ISR_bit.CNT_OVER
#define SMD2_ISR_EXT0_INT        SMD2_ISR_bit.EXT0_INT
#define SMD2_ISR_EXT1_INT        SMD2_ISR_bit.EXT1_INT
#define SMD2_ISR_EXT2_INT        SMD2_ISR_bit.EXT2_INT
#define SMD2_ISR_STA_S0_IT       SMD2_ISR_bit.STA_S0_IT
#define SMD2_ISR_STA_S1_IT       SMD2_ISR_bit.STA_S1_IT
#define SMD2_ISR_STA_S2_IT       SMD2_ISR_bit.STA_S2_IT
#define SMD2_ISR_STA_S3_IT       SMD2_ISR_bit.STA_S3_IT

#define SMD2_IMR_CNT_OV_R        SMD2_IMR_bit.CNT_OV_R
#define SMD2_IMR_IT_EXT0         SMD2_IMR_bit.IT_EXT0
#define SMD2_IMR_IT_EXT1         SMD2_IMR_bit.IT_EXT1
#define SMD2_IMR_IT_EXT2         SMD2_IMR_bit.IT_EXT2
#define SMD2_IMR_IT_STA_S0       SMD2_IMR_bit.IT_STA_S0
#define SMD2_IMR_IT_STA_S1       SMD2_IMR_bit.IT_STA_S1
#define SMD2_IMR_IT_STA_S2       SMD2_IMR_bit.IT_STA_S2
#define SMD2_IMR_IT_STA_S3       SMD2_IMR_bit.IT_STA_S3

#define SMD2_ISEL_INPUT0_EN      SMD2_ISEL_bit.INPUT0_EN
#define SMD2_ISEL_INPUT1_EN      SMD2_ISEL_bit.INPUT1_EN
#define SMD2_ISEL_INPUT2_EN      SMD2_ISEL_bit.INPUT2_EN
#define SMD2_ISEL_INPUT_LAT      SMD2_ISEL_bit.INPUT_LAT

#define SMD2_DMP_DMPE_EX0        SMD2_DMP_bit.DMPE_EX0
#define SMD2_DMP_DMPE_EX1        SMD2_DMP_bit.DMPE_EX1
#define SMD2_DMP_DMPE_EX2        SMD2_DMP_bit.DMPE_EX2
#define SMD2_DMP_DMP_EVER        SMD2_DMP_bit.DMP_EVER
#define SMD2_DMP_CPL_IT_GE       SMD2_DMP_bit.CPL_IT_GE

#define SMD2_FSM_STS_FSM0        SMD2_FSM_STS_bit.FSM0
#define SMD2_FSM_STS_FSM1        SMD2_FSM_STS_bit.FSM1
#define SMD2_FSM_STS_FSM2        SMD2_FSM_STS_bit.FSM2
#define SMD2_FSM_STS_PWM         SMD2_FSM_STS_bit.PWM
#define SMD2_FSM_STS_EVINP0      SMD2_FSM_STS_bit.EVINP0
#define SMD2_FSM_STS_EVINP1      SMD2_FSM_STS_bit.EVINP1
#define SMD2_FSM_STS_EVINP2      SMD2_FSM_STS_bit.EVINP2

#endif

/*-------------------------------------------------------------------------
 *      SMED 2 Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SMD2_CTR_START_CNT  0x01
#define MASK_SMD2_CTR_FSM_ENA    0x02

#define MASK_SMD2_CTR_TMR_TIME_T0_VAL 0x01
#define MASK_SMD2_CTR_TMR_TIME_T1_VAL 0x02
#define MASK_SMD2_CTR_TMR_TIME_T2_VAL 0x04
#define MASK_SMD2_CTR_TMR_TIME_T3_VAL 0x08
#define MASK_SMD2_CTR_TMR_DITHER_VAL 0x10

#define MASK_SMD2_CTR_INP_RS_INSIG0 0x01
#define MASK_SMD2_CTR_INP_RS_INSIG1 0x02
#define MASK_SMD2_CTR_INP_RS_INSIG2 0x04
#define MASK_SMD2_CTR_INP_RAIS_EN 0x08
#define MASK_SMD2_CTR_INP_EL_INSIG0 0x10
#define MASK_SMD2_CTR_INP_EL_INSIG1 0x20
#define MASK_SMD2_CTR_INP_EL_INSIG2 0x40
#define MASK_SMD2_CTR_INP_EL_EN  0x80

#define MASK_SMD2_CTR_DTHR_DITH0 0x01
#define MASK_SMD2_CTR_DTHR_DITH1 0x02
#define MASK_SMD2_CTR_DTHR_DITH2 0x04
#define MASK_SMD2_CTR_DTHR_DITH3 0x08
#define MASK_SMD2_CTR_DTHR_DITH4 0x10
#define MASK_SMD2_CTR_DTHR_DITH5 0x20
#define MASK_SMD2_CTR_DTHR_DITH6 0x40
#define MASK_SMD2_CTR_DTHR_DITH7 0x80

#define MASK_SMD2_TMR_T0L_TIM_T0L0 0x01
#define MASK_SMD2_TMR_T0L_TIM_T0L1 0x02
#define MASK_SMD2_TMR_T0L_TIM_T0L2 0x04
#define MASK_SMD2_TMR_T0L_TIM_T0L3 0x08
#define MASK_SMD2_TMR_T0L_TIM_T0L4 0x10
#define MASK_SMD2_TMR_T0L_TIM_T0L5 0x20
#define MASK_SMD2_TMR_T0L_TIM_T0L6 0x40
#define MASK_SMD2_TMR_T0L_TIM_T0L7 0x80

#define MASK_SMD2_TMR_T0H_TIM_T0H0 0x01
#define MASK_SMD2_TMR_T0H_TIM_T0H1 0x02
#define MASK_SMD2_TMR_T0H_TIM_T0H2 0x04
#define MASK_SMD2_TMR_T0H_TIM_T0H3 0x08
#define MASK_SMD2_TMR_T0H_TIM_T0H4 0x10
#define MASK_SMD2_TMR_T0H_TIM_T0H5 0x20
#define MASK_SMD2_TMR_T0H_TIM_T0H6 0x40
#define MASK_SMD2_TMR_T0H_TIM_T0H7 0x80

#define MASK_SMD2_TMR_T1L_TIM_T1L0 0x01
#define MASK_SMD2_TMR_T1L_TIM_T1L1 0x02
#define MASK_SMD2_TMR_T1L_TIM_T1L2 0x04
#define MASK_SMD2_TMR_T1L_TIM_T1L3 0x08
#define MASK_SMD2_TMR_T1L_TIM_T1L4 0x10
#define MASK_SMD2_TMR_T1L_TIM_T1L5 0x20
#define MASK_SMD2_TMR_T1L_TIM_T1L6 0x40
#define MASK_SMD2_TMR_T1L_TIM_T1L7 0x80

#define MASK_SMD2_TMR_T1H_TIM_T1H0 0x01
#define MASK_SMD2_TMR_T1H_TIM_T1H1 0x02
#define MASK_SMD2_TMR_T1H_TIM_T1H2 0x04
#define MASK_SMD2_TMR_T1H_TIM_T1H3 0x08
#define MASK_SMD2_TMR_T1H_TIM_T1H4 0x10
#define MASK_SMD2_TMR_T1H_TIM_T1H5 0x20
#define MASK_SMD2_TMR_T1H_TIM_T1H6 0x40
#define MASK_SMD2_TMR_T1H_TIM_T1H7 0x80

#define MASK_SMD2_TMR_T2L_TIM_T2L0 0x01
#define MASK_SMD2_TMR_T2L_TIM_T2L1 0x02
#define MASK_SMD2_TMR_T2L_TIM_T2L2 0x04
#define MASK_SMD2_TMR_T2L_TIM_T2L3 0x08
#define MASK_SMD2_TMR_T2L_TIM_T2L4 0x10
#define MASK_SMD2_TMR_T2L_TIM_T2L5 0x20
#define MASK_SMD2_TMR_T2L_TIM_T2L6 0x40
#define MASK_SMD2_TMR_T2L_TIM_T2L7 0x80

#define MASK_SMD2_TMR_T2H_TIM_T2H0 0x01
#define MASK_SMD2_TMR_T2H_TIM_T2H1 0x02
#define MASK_SMD2_TMR_T2H_TIM_T2H2 0x04
#define MASK_SMD2_TMR_T2H_TIM_T2H3 0x08
#define MASK_SMD2_TMR_T2H_TIM_T2H4 0x10
#define MASK_SMD2_TMR_T2H_TIM_T2H5 0x20
#define MASK_SMD2_TMR_T2H_TIM_T2H6 0x40
#define MASK_SMD2_TMR_T2H_TIM_T2H7 0x80

#define MASK_SMD2_TMR_T3L_TIM_T3L0 0x01
#define MASK_SMD2_TMR_T3L_TIM_T3L1 0x02
#define MASK_SMD2_TMR_T3L_TIM_T3L2 0x04
#define MASK_SMD2_TMR_T3L_TIM_T3L3 0x08
#define MASK_SMD2_TMR_T3L_TIM_T3L4 0x10
#define MASK_SMD2_TMR_T3L_TIM_T3L5 0x20
#define MASK_SMD2_TMR_T3L_TIM_T3L6 0x40
#define MASK_SMD2_TMR_T3L_TIM_T3L7 0x80

#define MASK_SMD2_TMR_T3H_TIM_T3H0 0x01
#define MASK_SMD2_TMR_T3H_TIM_T3H1 0x02
#define MASK_SMD2_TMR_T3H_TIM_T3H2 0x04
#define MASK_SMD2_TMR_T3H_TIM_T3H3 0x08
#define MASK_SMD2_TMR_T3H_TIM_T3H4 0x10
#define MASK_SMD2_TMR_T3H_TIM_T3H5 0x20
#define MASK_SMD2_TMR_T3H_TIM_T3H6 0x40
#define MASK_SMD2_TMR_T3H_TIM_T3H7 0x80

#define MASK_SMD2_PRM_ID0_NX_STAT0 0x01
#define MASK_SMD2_PRM_ID0_NX_STAT1 0x02
#define MASK_SMD2_PRM_ID0_EDGE0  0x04
#define MASK_SMD2_PRM_ID0_EDGE1  0x08
#define MASK_SMD2_PRM_ID0_CNT_RSTE 0x10
#define MASK_SMD2_PRM_ID0_PULS_EDG 0x20
#define MASK_SMD2_PRM_ID0_HOLD_JMP 0x40
#define MASK_SMD2_PRM_ID0_AND_OR 0x80

#define MASK_SMD2_PRM_ID1_CEDGE0 0x04
#define MASK_SMD2_PRM_ID1_CEDGE1 0x08
#define MASK_SMD2_PRM_ID1_CNT_RSTC 0x10
#define MASK_SMD2_PRM_ID1_PULS_CMP 0x20
#define MASK_SMD2_PRM_ID1_HOLD_EXIT 0x40

#define MASK_SMD2_PRM_ID2_LATCH_RS 0x01

#define MASK_SMD2_PRM_S00_NX_STAT0 0x01
#define MASK_SMD2_PRM_S00_NX_STAT1 0x02
#define MASK_SMD2_PRM_S00_EDGE0  0x04
#define MASK_SMD2_PRM_S00_EDGE1  0x08
#define MASK_SMD2_PRM_S00_CNT_RSTE 0x10
#define MASK_SMD2_PRM_S00_PULS_EDG 0x20
#define MASK_SMD2_PRM_S00_HOLD_JMP 0x40
#define MASK_SMD2_PRM_S00_AND_OR 0x80

#define MASK_SMD2_PRM_S01_CEDGE0 0x04
#define MASK_SMD2_PRM_S01_CEDGE1 0x08
#define MASK_SMD2_PRM_S01_CNT_RSTC 0x10
#define MASK_SMD2_PRM_S01_PULS_CMP 0x20
#define MASK_SMD2_PRM_S01_HOLD_EXIT 0x40

#define MASK_SMD2_PRM_S02_LATCH_RS 0x01

#define MASK_SMD2_PRM_S10_NX_STAT0 0x01
#define MASK_SMD2_PRM_S10_NX_STAT1 0x02
#define MASK_SMD2_PRM_S10_EDGE0  0x04
#define MASK_SMD2_PRM_S10_EDGE1  0x08
#define MASK_SMD2_PRM_S10_CNT_RSTE 0x10
#define MASK_SMD2_PRM_S10_PULS_EDG 0x20
#define MASK_SMD2_PRM_S10_HOLD_JMP 0x40
#define MASK_SMD2_PRM_S10_AND_OR 0x80

#define MASK_SMD2_PRM_S11_CEDGE0 0x04
#define MASK_SMD2_PRM_S11_CEDGE1 0x08
#define MASK_SMD2_PRM_S11_CNT_RSTC 0x10
#define MASK_SMD2_PRM_S11_PULS_CMP 0x20
#define MASK_SMD2_PRM_S11_HOLD_EXIT 0x40

#define MASK_SMD2_PRM_S12_LATCH_RS 0x01

#define MASK_SMD2_PRM_S20_NX_STAT0 0x01
#define MASK_SMD2_PRM_S20_NX_STAT1 0x02
#define MASK_SMD2_PRM_S20_EDGE0  0x04
#define MASK_SMD2_PRM_S20_EDGE1  0x08
#define MASK_SMD2_PRM_S20_CNT_RSTE 0x10
#define MASK_SMD2_PRM_S20_PULS_EDG 0x20
#define MASK_SMD2_PRM_S20_HOLD_JMP 0x40
#define MASK_SMD2_PRM_S20_AND_OR 0x80

#define MASK_SMD2_PRM_S21_CEDGE0 0x04
#define MASK_SMD2_PRM_S21_CEDGE1 0x08
#define MASK_SMD2_PRM_S21_CNT_RSTC 0x10
#define MASK_SMD2_PRM_S21_PULS_CMP 0x20
#define MASK_SMD2_PRM_S21_HOLD_EXIT 0x40

#define MASK_SMD2_PRM_S22_LATCH_RS 0x01

#define MASK_SMD2_PRM_S30_NX_STAT0 0x01
#define MASK_SMD2_PRM_S30_NX_STAT1 0x02
#define MASK_SMD2_PRM_S30_EDGE0  0x04
#define MASK_SMD2_PRM_S30_EDGE1  0x08
#define MASK_SMD2_PRM_S30_CNT_RSTE 0x10
#define MASK_SMD2_PRM_S30_PULS_EDG 0x20
#define MASK_SMD2_PRM_S30_HOLD_JMP 0x40
#define MASK_SMD2_PRM_S30_AND_OR 0x80

#define MASK_SMD2_PRM_S31_CEDGE0 0x04
#define MASK_SMD2_PRM_S31_CEDGE1 0x08
#define MASK_SMD2_PRM_S31_CNT_RSTC 0x10
#define MASK_SMD2_PRM_S31_PULS_CMP 0x20
#define MASK_SMD2_PRM_S31_HOLD_EXIT 0x40

#define MASK_SMD2_PRM_S32_LATCH_RS 0x01

#define MASK_SMD2_CFG_TIM_NUM0   0x02
#define MASK_SMD2_CFG_TIM_NUM1   0x04
#define MASK_SMD2_CFG_TIM_UPD0   0x08
#define MASK_SMD2_CFG_TIM_UPD1   0x10

#define MASK_SMD2_DMP_L_CNT_LO0  0x01
#define MASK_SMD2_DMP_L_CNT_LO1  0x02
#define MASK_SMD2_DMP_L_CNT_LO2  0x04
#define MASK_SMD2_DMP_L_CNT_LO3  0x08
#define MASK_SMD2_DMP_L_CNT_LO4  0x10
#define MASK_SMD2_DMP_L_CNT_LO5  0x20
#define MASK_SMD2_DMP_L_CNT_LO6  0x40
#define MASK_SMD2_DMP_L_CNT_LO7  0x80

#define MASK_SMD2_DMP_H_CNT_LH0  0x01
#define MASK_SMD2_DMP_H_CNT_LH1  0x02
#define MASK_SMD2_DMP_H_CNT_LH2  0x04
#define MASK_SMD2_DMP_H_CNT_LH3  0x08
#define MASK_SMD2_DMP_H_CNT_LH4  0x10
#define MASK_SMD2_DMP_H_CNT_LH5  0x20
#define MASK_SMD2_DMP_H_CNT_LH6  0x40
#define MASK_SMD2_DMP_H_CNT_LH7  0x80

#define MASK_SMD2_GSTS_EX0_DUMP  0x01
#define MASK_SMD2_GSTS_EX1_DUMP  0x02
#define MASK_SMD2_GSTS_EX2_DUMP  0x04
#define MASK_SMD2_GSTS_CNT_FLAG  0x08
#define MASK_SMD2_GSTS_DMP_LK0   0x10
#define MASK_SMD2_GSTS_DMP_LK1   0x20
#define MASK_SMD2_GSTS_EVENT_OV  0x40

#define MASK_SMD2_ISR_CNT_OVER   0x01
#define MASK_SMD2_ISR_EXT0_INT   0x02
#define MASK_SMD2_ISR_EXT1_INT   0x04
#define MASK_SMD2_ISR_EXT2_INT   0x08
#define MASK_SMD2_ISR_STA_S0_IT  0x10
#define MASK_SMD2_ISR_STA_S1_IT  0x20
#define MASK_SMD2_ISR_STA_S2_IT  0x40
#define MASK_SMD2_ISR_STA_S3_IT  0x80

#define MASK_SMD2_IMR_CNT_OV_R   0x01
#define MASK_SMD2_IMR_IT_EXT0    0x02
#define MASK_SMD2_IMR_IT_EXT1    0x04
#define MASK_SMD2_IMR_IT_EXT2    0x08
#define MASK_SMD2_IMR_IT_STA_S0  0x10
#define MASK_SMD2_IMR_IT_STA_S1  0x20
#define MASK_SMD2_IMR_IT_STA_S2  0x40
#define MASK_SMD2_IMR_IT_STA_S3  0x80

#define MASK_SMD2_ISEL_INPUT0_EN 0x01
#define MASK_SMD2_ISEL_INPUT1_EN 0x02
#define MASK_SMD2_ISEL_INPUT2_EN 0x04
#define MASK_SMD2_ISEL_INPUT_LAT 0x08

#define MASK_SMD2_DMP_DMPE_EX0   0x01
#define MASK_SMD2_DMP_DMPE_EX1   0x02
#define MASK_SMD2_DMP_DMPE_EX2   0x04
#define MASK_SMD2_DMP_DMP_EVER   0x08
#define MASK_SMD2_DMP_CPL_IT_GE  0x10

#define MASK_SMD2_FSM_STS_FSM0   0x01
#define MASK_SMD2_FSM_STS_FSM1   0x02
#define MASK_SMD2_FSM_STS_FSM2   0x04
#define MASK_SMD2_FSM_STS_PWM    0x08
#define MASK_SMD2_FSM_STS_EVINP0 0x10
#define MASK_SMD2_FSM_STS_EVINP1 0x20
#define MASK_SMD2_FSM_STS_EVINP2 0x40


/*-------------------------------------------------------------------------
 *      SMED 3 Registers register definitions
 *-----------------------------------------------------------------------*/
/* Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START_CNT   : 1;
  unsigned char FSM_ENA     : 1;
} __BITS_SMD3_CTR;
#endif
__IO_REG8_BIT(SMD3_CTR,    0x55C0, __READ_WRITE, __BITS_SMD3_CTR);

/* Control timer register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIME_T0_VAL : 1;
  unsigned char TIME_T1_VAL : 1;
  unsigned char TIME_T2_VAL : 1;
  unsigned char TIME_T3_VAL : 1;
  unsigned char DITHER_VAL  : 1;
} __BITS_SMD3_CTR_TMR;
#endif
__IO_REG8_BIT(SMD3_CTR_TMR, 0x55C1, __READ_WRITE, __BITS_SMD3_CTR_TMR);

/* Control input register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RS_INSIG0   : 1;
  unsigned char RS_INSIG1   : 1;
  unsigned char RS_INSIG2   : 1;
  unsigned char RAIS_EN     : 1;
  unsigned char EL_INSIG0   : 1;
  unsigned char EL_INSIG1   : 1;
  unsigned char EL_INSIG2   : 1;
  unsigned char EL_EN       : 1;
} __BITS_SMD3_CTR_INP;
#endif
__IO_REG8_BIT(SMD3_CTR_INP, 0x55C2, __READ_WRITE, __BITS_SMD3_CTR_INP);

/* Dithering register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DITH0       : 1;
  unsigned char DITH1       : 1;
  unsigned char DITH2       : 1;
  unsigned char DITH3       : 1;
  unsigned char DITH4       : 1;
  unsigned char DITH5       : 1;
  unsigned char DITH6       : 1;
  unsigned char DITH7       : 1;
} __BITS_SMD3_CTR_DTHR;
#endif
__IO_REG8_BIT(SMD3_CTR_DTHR, 0x55C3, __READ_WRITE, __BITS_SMD3_CTR_DTHR);

/* Time T0 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0L0    : 1;
  unsigned char TIM_T0L1    : 1;
  unsigned char TIM_T0L2    : 1;
  unsigned char TIM_T0L3    : 1;
  unsigned char TIM_T0L4    : 1;
  unsigned char TIM_T0L5    : 1;
  unsigned char TIM_T0L6    : 1;
  unsigned char TIM_T0L7    : 1;
} __BITS_SMD3_TMR_T0L;
#endif
__IO_REG8_BIT(SMD3_TMR_T0L, 0x55C4, __READ_WRITE, __BITS_SMD3_TMR_T0L);

/* Time T0 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0H0    : 1;
  unsigned char TIM_T0H1    : 1;
  unsigned char TIM_T0H2    : 1;
  unsigned char TIM_T0H3    : 1;
  unsigned char TIM_T0H4    : 1;
  unsigned char TIM_T0H5    : 1;
  unsigned char TIM_T0H6    : 1;
  unsigned char TIM_T0H7    : 1;
} __BITS_SMD3_TMR_T0H;
#endif
__IO_REG8_BIT(SMD3_TMR_T0H, 0x55C5, __READ_WRITE, __BITS_SMD3_TMR_T0H);

/* Time T1 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1L0    : 1;
  unsigned char TIM_T1L1    : 1;
  unsigned char TIM_T1L2    : 1;
  unsigned char TIM_T1L3    : 1;
  unsigned char TIM_T1L4    : 1;
  unsigned char TIM_T1L5    : 1;
  unsigned char TIM_T1L6    : 1;
  unsigned char TIM_T1L7    : 1;
} __BITS_SMD3_TMR_T1L;
#endif
__IO_REG8_BIT(SMD3_TMR_T1L, 0x55C6, __READ_WRITE, __BITS_SMD3_TMR_T1L);

/* Time T1 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1H0    : 1;
  unsigned char TIM_T1H1    : 1;
  unsigned char TIM_T1H2    : 1;
  unsigned char TIM_T1H3    : 1;
  unsigned char TIM_T1H4    : 1;
  unsigned char TIM_T1H5    : 1;
  unsigned char TIM_T1H6    : 1;
  unsigned char TIM_T1H7    : 1;
} __BITS_SMD3_TMR_T1H;
#endif
__IO_REG8_BIT(SMD3_TMR_T1H, 0x55C7, __READ_WRITE, __BITS_SMD3_TMR_T1H);

/* Time T2 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2L0    : 1;
  unsigned char TIM_T2L1    : 1;
  unsigned char TIM_T2L2    : 1;
  unsigned char TIM_T2L3    : 1;
  unsigned char TIM_T2L4    : 1;
  unsigned char TIM_T2L5    : 1;
  unsigned char TIM_T2L6    : 1;
  unsigned char TIM_T2L7    : 1;
} __BITS_SMD3_TMR_T2L;
#endif
__IO_REG8_BIT(SMD3_TMR_T2L, 0x55C8, __READ_WRITE, __BITS_SMD3_TMR_T2L);

/* Time T2 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2H0    : 1;
  unsigned char TIM_T2H1    : 1;
  unsigned char TIM_T2H2    : 1;
  unsigned char TIM_T2H3    : 1;
  unsigned char TIM_T2H4    : 1;
  unsigned char TIM_T2H5    : 1;
  unsigned char TIM_T2H6    : 1;
  unsigned char TIM_T2H7    : 1;
} __BITS_SMD3_TMR_T2H;
#endif
__IO_REG8_BIT(SMD3_TMR_T2H, 0x55C9, __READ_WRITE, __BITS_SMD3_TMR_T2H);

/* Time T3 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3L0    : 1;
  unsigned char TIM_T3L1    : 1;
  unsigned char TIM_T3L2    : 1;
  unsigned char TIM_T3L3    : 1;
  unsigned char TIM_T3L4    : 1;
  unsigned char TIM_T3L5    : 1;
  unsigned char TIM_T3L6    : 1;
  unsigned char TIM_T3L7    : 1;
} __BITS_SMD3_TMR_T3L;
#endif
__IO_REG8_BIT(SMD3_TMR_T3L, 0x55CA, __READ_WRITE, __BITS_SMD3_TMR_T3L);

/* Time T3 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3H0    : 1;
  unsigned char TIM_T3H1    : 1;
  unsigned char TIM_T3H2    : 1;
  unsigned char TIM_T3H3    : 1;
  unsigned char TIM_T3H4    : 1;
  unsigned char TIM_T3H5    : 1;
  unsigned char TIM_T3H6    : 1;
  unsigned char TIM_T3H7    : 1;
} __BITS_SMD3_TMR_T3H;
#endif
__IO_REG8_BIT(SMD3_TMR_T3H, 0x55CB, __READ_WRITE, __BITS_SMD3_TMR_T3H);

/* Parameter 0 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD3_PRM_ID0;
#endif
__IO_REG8_BIT(SMD3_PRM_ID0, 0x55CC, __READ_WRITE, __BITS_SMD3_PRM_ID0);

/* Parameter 1 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD3_PRM_ID1;
#endif
__IO_REG8_BIT(SMD3_PRM_ID1, 0x55CD, __READ_WRITE, __BITS_SMD3_PRM_ID1);

/* Parameter 2 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD3_PRM_ID2;
#endif
__IO_REG8_BIT(SMD3_PRM_ID2, 0x55CE, __READ_WRITE, __BITS_SMD3_PRM_ID2);

/* Parameter 0 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD3_PRM_S00;
#endif
__IO_REG8_BIT(SMD3_PRM_S00, 0x55CF, __READ_WRITE, __BITS_SMD3_PRM_S00);

/* Parameter 1 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD3_PRM_S01;
#endif
__IO_REG8_BIT(SMD3_PRM_S01, 0x55D0, __READ_WRITE, __BITS_SMD3_PRM_S01);

/* Parameter 2 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD3_PRM_S02;
#endif
__IO_REG8_BIT(SMD3_PRM_S02, 0x55D1, __READ_WRITE, __BITS_SMD3_PRM_S02);

/* Parameter 0 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD3_PRM_S10;
#endif
__IO_REG8_BIT(SMD3_PRM_S10, 0x55D2, __READ_WRITE, __BITS_SMD3_PRM_S10);

/* Parameter 1 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD3_PRM_S11;
#endif
__IO_REG8_BIT(SMD3_PRM_S11, 0x55D3, __READ_WRITE, __BITS_SMD3_PRM_S11);

/* Parameter 2 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD3_PRM_S12;
#endif
__IO_REG8_BIT(SMD3_PRM_S12, 0x55D4, __READ_WRITE, __BITS_SMD3_PRM_S12);

/* Parameter 0 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD3_PRM_S20;
#endif
__IO_REG8_BIT(SMD3_PRM_S20, 0x55D5, __READ_WRITE, __BITS_SMD3_PRM_S20);

/* Parameter 1 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD3_PRM_S21;
#endif
__IO_REG8_BIT(SMD3_PRM_S21, 0x55D6, __READ_WRITE, __BITS_SMD3_PRM_S21);

/* Parameter 2 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD3_PRM_S22;
#endif
__IO_REG8_BIT(SMD3_PRM_S22, 0x55D7, __READ_WRITE, __BITS_SMD3_PRM_S22);

/* Parameter 0 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD3_PRM_S30;
#endif
__IO_REG8_BIT(SMD3_PRM_S30, 0x55D8, __READ_WRITE, __BITS_SMD3_PRM_S30);

/* Parameter 1 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD3_PRM_S31;
#endif
__IO_REG8_BIT(SMD3_PRM_S31, 0x55D9, __READ_WRITE, __BITS_SMD3_PRM_S31);

/* Parameter 2 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD3_PRM_S32;
#endif
__IO_REG8_BIT(SMD3_PRM_S32, 0x55DA, __READ_WRITE, __BITS_SMD3_PRM_S32);

/* Timer configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TIM_NUM0    : 1;
  unsigned char TIM_NUM1    : 1;
  unsigned char TIM_UPD0    : 1;
  unsigned char TIM_UPD1    : 1;
} __BITS_SMD3_CFG;
#endif
__IO_REG8_BIT(SMD3_CFG,    0x55DB, __READ_WRITE, __BITS_SMD3_CFG);

/* Dump counter lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LO0     : 1;
  unsigned char CNT_LO1     : 1;
  unsigned char CNT_LO2     : 1;
  unsigned char CNT_LO3     : 1;
  unsigned char CNT_LO4     : 1;
  unsigned char CNT_LO5     : 1;
  unsigned char CNT_LO6     : 1;
  unsigned char CNT_LO7     : 1;
} __BITS_SMD3_DMP_L;
#endif
__IO_REG8_BIT(SMD3_DMP_L,  0x55DC, __READ, __BITS_SMD3_DMP_L);

/* Dump counter msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LH0     : 1;
  unsigned char CNT_LH1     : 1;
  unsigned char CNT_LH2     : 1;
  unsigned char CNT_LH3     : 1;
  unsigned char CNT_LH4     : 1;
  unsigned char CNT_LH5     : 1;
  unsigned char CNT_LH6     : 1;
  unsigned char CNT_LH7     : 1;
} __BITS_SMD3_DMP_H;
#endif
__IO_REG8_BIT(SMD3_DMP_H,  0x55DD, __READ, __BITS_SMD3_DMP_H);

/* General status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EX0_DUMP    : 1;
  unsigned char EX1_DUMP    : 1;
  unsigned char EX2_DUMP    : 1;
  unsigned char CNT_FLAG    : 1;
  unsigned char DMP_LK0     : 1;
  unsigned char DMP_LK1     : 1;
  unsigned char EVENT_OV    : 1;
} __BITS_SMD3_GSTS;
#endif
__IO_REG8_BIT(SMD3_GSTS,   0x55DE, __READ_WRITE, __BITS_SMD3_GSTS);

/* Interrupt status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OVER    : 1;
  unsigned char EXT0_INT    : 1;
  unsigned char EXT1_INT    : 1;
  unsigned char EXT2_INT    : 1;
  unsigned char STA_S0_IT   : 1;
  unsigned char STA_S1_IT   : 1;
  unsigned char STA_S2_IT   : 1;
  unsigned char STA_S3_IT   : 1;
} __BITS_SMD3_ISR;
#endif
__IO_REG8_BIT(SMD3_ISR,    0x55DF, __READ_WRITE, __BITS_SMD3_ISR);

/* Interrupt mask register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OV_R    : 1;
  unsigned char IT_EXT0     : 1;
  unsigned char IT_EXT1     : 1;
  unsigned char IT_EXT2     : 1;
  unsigned char IT_STA_S0   : 1;
  unsigned char IT_STA_S1   : 1;
  unsigned char IT_STA_S2   : 1;
  unsigned char IT_STA_S3   : 1;
} __BITS_SMD3_IMR;
#endif
__IO_REG8_BIT(SMD3_IMR,    0x55E0, __READ_WRITE, __BITS_SMD3_IMR);

/* External event control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INPUT0_EN   : 1;
  unsigned char INPUT1_EN   : 1;
  unsigned char INPUT2_EN   : 1;
  unsigned char INPUT_LAT   : 1;
} __BITS_SMD3_ISEL;
#endif
__IO_REG8_BIT(SMD3_ISEL,   0x55E1, __READ_WRITE, __BITS_SMD3_ISEL);

/* Dump enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DMPE_EX0    : 1;
  unsigned char DMPE_EX1    : 1;
  unsigned char DMPE_EX2    : 1;
  unsigned char DMP_EVER    : 1;
  unsigned char CPL_IT_GE   : 1;
} __BITS_SMD3_DMP;
#endif
__IO_REG8_BIT(SMD3_DMP,    0x55E2, __READ_WRITE, __BITS_SMD3_DMP);

/* FSM status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FSM0        : 1;
  unsigned char FSM1        : 1;
  unsigned char FSM2        : 1;
  unsigned char PWM         : 1;
  unsigned char EVINP0      : 1;
  unsigned char EVINP1      : 1;
  unsigned char EVINP2      : 1;
} __BITS_SMD3_FSM_STS;
#endif
__IO_REG8_BIT(SMD3_FSM_STS, 0x55E3, __READ, __BITS_SMD3_FSM_STS);


/*-------------------------------------------------------------------------
 *      SMED 3 Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SMD3_CTR_START_CNT       SMD3_CTR_bit.START_CNT
#define SMD3_CTR_FSM_ENA         SMD3_CTR_bit.FSM_ENA

#define SMD3_CTR_TMR_TIME_T0_VAL SMD3_CTR_TMR_bit.TIME_T0_VAL
#define SMD3_CTR_TMR_TIME_T1_VAL SMD3_CTR_TMR_bit.TIME_T1_VAL
#define SMD3_CTR_TMR_TIME_T2_VAL SMD3_CTR_TMR_bit.TIME_T2_VAL
#define SMD3_CTR_TMR_TIME_T3_VAL SMD3_CTR_TMR_bit.TIME_T3_VAL
#define SMD3_CTR_TMR_DITHER_VAL  SMD3_CTR_TMR_bit.DITHER_VAL

#define SMD3_CTR_INP_RS_INSIG0   SMD3_CTR_INP_bit.RS_INSIG0
#define SMD3_CTR_INP_RS_INSIG1   SMD3_CTR_INP_bit.RS_INSIG1
#define SMD3_CTR_INP_RS_INSIG2   SMD3_CTR_INP_bit.RS_INSIG2
#define SMD3_CTR_INP_RAIS_EN     SMD3_CTR_INP_bit.RAIS_EN
#define SMD3_CTR_INP_EL_INSIG0   SMD3_CTR_INP_bit.EL_INSIG0
#define SMD3_CTR_INP_EL_INSIG1   SMD3_CTR_INP_bit.EL_INSIG1
#define SMD3_CTR_INP_EL_INSIG2   SMD3_CTR_INP_bit.EL_INSIG2
#define SMD3_CTR_INP_EL_EN       SMD3_CTR_INP_bit.EL_EN

#define SMD3_CTR_DTHR_DITH0      SMD3_CTR_DTHR_bit.DITH0
#define SMD3_CTR_DTHR_DITH1      SMD3_CTR_DTHR_bit.DITH1
#define SMD3_CTR_DTHR_DITH2      SMD3_CTR_DTHR_bit.DITH2
#define SMD3_CTR_DTHR_DITH3      SMD3_CTR_DTHR_bit.DITH3
#define SMD3_CTR_DTHR_DITH4      SMD3_CTR_DTHR_bit.DITH4
#define SMD3_CTR_DTHR_DITH5      SMD3_CTR_DTHR_bit.DITH5
#define SMD3_CTR_DTHR_DITH6      SMD3_CTR_DTHR_bit.DITH6
#define SMD3_CTR_DTHR_DITH7      SMD3_CTR_DTHR_bit.DITH7

#define SMD3_TMR_T0L_TIM_T0L0    SMD3_TMR_T0L_bit.TIM_T0L0
#define SMD3_TMR_T0L_TIM_T0L1    SMD3_TMR_T0L_bit.TIM_T0L1
#define SMD3_TMR_T0L_TIM_T0L2    SMD3_TMR_T0L_bit.TIM_T0L2
#define SMD3_TMR_T0L_TIM_T0L3    SMD3_TMR_T0L_bit.TIM_T0L3
#define SMD3_TMR_T0L_TIM_T0L4    SMD3_TMR_T0L_bit.TIM_T0L4
#define SMD3_TMR_T0L_TIM_T0L5    SMD3_TMR_T0L_bit.TIM_T0L5
#define SMD3_TMR_T0L_TIM_T0L6    SMD3_TMR_T0L_bit.TIM_T0L6
#define SMD3_TMR_T0L_TIM_T0L7    SMD3_TMR_T0L_bit.TIM_T0L7

#define SMD3_TMR_T0H_TIM_T0H0    SMD3_TMR_T0H_bit.TIM_T0H0
#define SMD3_TMR_T0H_TIM_T0H1    SMD3_TMR_T0H_bit.TIM_T0H1
#define SMD3_TMR_T0H_TIM_T0H2    SMD3_TMR_T0H_bit.TIM_T0H2
#define SMD3_TMR_T0H_TIM_T0H3    SMD3_TMR_T0H_bit.TIM_T0H3
#define SMD3_TMR_T0H_TIM_T0H4    SMD3_TMR_T0H_bit.TIM_T0H4
#define SMD3_TMR_T0H_TIM_T0H5    SMD3_TMR_T0H_bit.TIM_T0H5
#define SMD3_TMR_T0H_TIM_T0H6    SMD3_TMR_T0H_bit.TIM_T0H6
#define SMD3_TMR_T0H_TIM_T0H7    SMD3_TMR_T0H_bit.TIM_T0H7

#define SMD3_TMR_T1L_TIM_T1L0    SMD3_TMR_T1L_bit.TIM_T1L0
#define SMD3_TMR_T1L_TIM_T1L1    SMD3_TMR_T1L_bit.TIM_T1L1
#define SMD3_TMR_T1L_TIM_T1L2    SMD3_TMR_T1L_bit.TIM_T1L2
#define SMD3_TMR_T1L_TIM_T1L3    SMD3_TMR_T1L_bit.TIM_T1L3
#define SMD3_TMR_T1L_TIM_T1L4    SMD3_TMR_T1L_bit.TIM_T1L4
#define SMD3_TMR_T1L_TIM_T1L5    SMD3_TMR_T1L_bit.TIM_T1L5
#define SMD3_TMR_T1L_TIM_T1L6    SMD3_TMR_T1L_bit.TIM_T1L6
#define SMD3_TMR_T1L_TIM_T1L7    SMD3_TMR_T1L_bit.TIM_T1L7

#define SMD3_TMR_T1H_TIM_T1H0    SMD3_TMR_T1H_bit.TIM_T1H0
#define SMD3_TMR_T1H_TIM_T1H1    SMD3_TMR_T1H_bit.TIM_T1H1
#define SMD3_TMR_T1H_TIM_T1H2    SMD3_TMR_T1H_bit.TIM_T1H2
#define SMD3_TMR_T1H_TIM_T1H3    SMD3_TMR_T1H_bit.TIM_T1H3
#define SMD3_TMR_T1H_TIM_T1H4    SMD3_TMR_T1H_bit.TIM_T1H4
#define SMD3_TMR_T1H_TIM_T1H5    SMD3_TMR_T1H_bit.TIM_T1H5
#define SMD3_TMR_T1H_TIM_T1H6    SMD3_TMR_T1H_bit.TIM_T1H6
#define SMD3_TMR_T1H_TIM_T1H7    SMD3_TMR_T1H_bit.TIM_T1H7

#define SMD3_TMR_T2L_TIM_T2L0    SMD3_TMR_T2L_bit.TIM_T2L0
#define SMD3_TMR_T2L_TIM_T2L1    SMD3_TMR_T2L_bit.TIM_T2L1
#define SMD3_TMR_T2L_TIM_T2L2    SMD3_TMR_T2L_bit.TIM_T2L2
#define SMD3_TMR_T2L_TIM_T2L3    SMD3_TMR_T2L_bit.TIM_T2L3
#define SMD3_TMR_T2L_TIM_T2L4    SMD3_TMR_T2L_bit.TIM_T2L4
#define SMD3_TMR_T2L_TIM_T2L5    SMD3_TMR_T2L_bit.TIM_T2L5
#define SMD3_TMR_T2L_TIM_T2L6    SMD3_TMR_T2L_bit.TIM_T2L6
#define SMD3_TMR_T2L_TIM_T2L7    SMD3_TMR_T2L_bit.TIM_T2L7

#define SMD3_TMR_T2H_TIM_T2H0    SMD3_TMR_T2H_bit.TIM_T2H0
#define SMD3_TMR_T2H_TIM_T2H1    SMD3_TMR_T2H_bit.TIM_T2H1
#define SMD3_TMR_T2H_TIM_T2H2    SMD3_TMR_T2H_bit.TIM_T2H2
#define SMD3_TMR_T2H_TIM_T2H3    SMD3_TMR_T2H_bit.TIM_T2H3
#define SMD3_TMR_T2H_TIM_T2H4    SMD3_TMR_T2H_bit.TIM_T2H4
#define SMD3_TMR_T2H_TIM_T2H5    SMD3_TMR_T2H_bit.TIM_T2H5
#define SMD3_TMR_T2H_TIM_T2H6    SMD3_TMR_T2H_bit.TIM_T2H6
#define SMD3_TMR_T2H_TIM_T2H7    SMD3_TMR_T2H_bit.TIM_T2H7

#define SMD3_TMR_T3L_TIM_T3L0    SMD3_TMR_T3L_bit.TIM_T3L0
#define SMD3_TMR_T3L_TIM_T3L1    SMD3_TMR_T3L_bit.TIM_T3L1
#define SMD3_TMR_T3L_TIM_T3L2    SMD3_TMR_T3L_bit.TIM_T3L2
#define SMD3_TMR_T3L_TIM_T3L3    SMD3_TMR_T3L_bit.TIM_T3L3
#define SMD3_TMR_T3L_TIM_T3L4    SMD3_TMR_T3L_bit.TIM_T3L4
#define SMD3_TMR_T3L_TIM_T3L5    SMD3_TMR_T3L_bit.TIM_T3L5
#define SMD3_TMR_T3L_TIM_T3L6    SMD3_TMR_T3L_bit.TIM_T3L6
#define SMD3_TMR_T3L_TIM_T3L7    SMD3_TMR_T3L_bit.TIM_T3L7

#define SMD3_TMR_T3H_TIM_T3H0    SMD3_TMR_T3H_bit.TIM_T3H0
#define SMD3_TMR_T3H_TIM_T3H1    SMD3_TMR_T3H_bit.TIM_T3H1
#define SMD3_TMR_T3H_TIM_T3H2    SMD3_TMR_T3H_bit.TIM_T3H2
#define SMD3_TMR_T3H_TIM_T3H3    SMD3_TMR_T3H_bit.TIM_T3H3
#define SMD3_TMR_T3H_TIM_T3H4    SMD3_TMR_T3H_bit.TIM_T3H4
#define SMD3_TMR_T3H_TIM_T3H5    SMD3_TMR_T3H_bit.TIM_T3H5
#define SMD3_TMR_T3H_TIM_T3H6    SMD3_TMR_T3H_bit.TIM_T3H6
#define SMD3_TMR_T3H_TIM_T3H7    SMD3_TMR_T3H_bit.TIM_T3H7

#define SMD3_PRM_ID0_NX_STAT0    SMD3_PRM_ID0_bit.NX_STAT0
#define SMD3_PRM_ID0_NX_STAT1    SMD3_PRM_ID0_bit.NX_STAT1
#define SMD3_PRM_ID0_EDGE0       SMD3_PRM_ID0_bit.EDGE0
#define SMD3_PRM_ID0_EDGE1       SMD3_PRM_ID0_bit.EDGE1
#define SMD3_PRM_ID0_CNT_RSTE    SMD3_PRM_ID0_bit.CNT_RSTE
#define SMD3_PRM_ID0_PULS_EDG    SMD3_PRM_ID0_bit.PULS_EDG
#define SMD3_PRM_ID0_HOLD_JMP    SMD3_PRM_ID0_bit.HOLD_JMP
#define SMD3_PRM_ID0_AND_OR      SMD3_PRM_ID0_bit.AND_OR

#define SMD3_PRM_ID1_CEDGE0      SMD3_PRM_ID1_bit.CEDGE0
#define SMD3_PRM_ID1_CEDGE1      SMD3_PRM_ID1_bit.CEDGE1
#define SMD3_PRM_ID1_CNT_RSTC    SMD3_PRM_ID1_bit.CNT_RSTC
#define SMD3_PRM_ID1_PULS_CMP    SMD3_PRM_ID1_bit.PULS_CMP
#define SMD3_PRM_ID1_HOLD_EXIT   SMD3_PRM_ID1_bit.HOLD_EXIT

#define SMD3_PRM_ID2_LATCH_RS    SMD3_PRM_ID2_bit.LATCH_RS

#define SMD3_PRM_S00_NX_STAT0    SMD3_PRM_S00_bit.NX_STAT0
#define SMD3_PRM_S00_NX_STAT1    SMD3_PRM_S00_bit.NX_STAT1
#define SMD3_PRM_S00_EDGE0       SMD3_PRM_S00_bit.EDGE0
#define SMD3_PRM_S00_EDGE1       SMD3_PRM_S00_bit.EDGE1
#define SMD3_PRM_S00_CNT_RSTE    SMD3_PRM_S00_bit.CNT_RSTE
#define SMD3_PRM_S00_PULS_EDG    SMD3_PRM_S00_bit.PULS_EDG
#define SMD3_PRM_S00_HOLD_JMP    SMD3_PRM_S00_bit.HOLD_JMP
#define SMD3_PRM_S00_AND_OR      SMD3_PRM_S00_bit.AND_OR

#define SMD3_PRM_S01_CEDGE0      SMD3_PRM_S01_bit.CEDGE0
#define SMD3_PRM_S01_CEDGE1      SMD3_PRM_S01_bit.CEDGE1
#define SMD3_PRM_S01_CNT_RSTC    SMD3_PRM_S01_bit.CNT_RSTC
#define SMD3_PRM_S01_PULS_CMP    SMD3_PRM_S01_bit.PULS_CMP
#define SMD3_PRM_S01_HOLD_EXIT   SMD3_PRM_S01_bit.HOLD_EXIT

#define SMD3_PRM_S02_LATCH_RS    SMD3_PRM_S02_bit.LATCH_RS

#define SMD3_PRM_S10_NX_STAT0    SMD3_PRM_S10_bit.NX_STAT0
#define SMD3_PRM_S10_NX_STAT1    SMD3_PRM_S10_bit.NX_STAT1
#define SMD3_PRM_S10_EDGE0       SMD3_PRM_S10_bit.EDGE0
#define SMD3_PRM_S10_EDGE1       SMD3_PRM_S10_bit.EDGE1
#define SMD3_PRM_S10_CNT_RSTE    SMD3_PRM_S10_bit.CNT_RSTE
#define SMD3_PRM_S10_PULS_EDG    SMD3_PRM_S10_bit.PULS_EDG
#define SMD3_PRM_S10_HOLD_JMP    SMD3_PRM_S10_bit.HOLD_JMP
#define SMD3_PRM_S10_AND_OR      SMD3_PRM_S10_bit.AND_OR

#define SMD3_PRM_S11_CEDGE0      SMD3_PRM_S11_bit.CEDGE0
#define SMD3_PRM_S11_CEDGE1      SMD3_PRM_S11_bit.CEDGE1
#define SMD3_PRM_S11_CNT_RSTC    SMD3_PRM_S11_bit.CNT_RSTC
#define SMD3_PRM_S11_PULS_CMP    SMD3_PRM_S11_bit.PULS_CMP
#define SMD3_PRM_S11_HOLD_EXIT   SMD3_PRM_S11_bit.HOLD_EXIT

#define SMD3_PRM_S12_LATCH_RS    SMD3_PRM_S12_bit.LATCH_RS

#define SMD3_PRM_S20_NX_STAT0    SMD3_PRM_S20_bit.NX_STAT0
#define SMD3_PRM_S20_NX_STAT1    SMD3_PRM_S20_bit.NX_STAT1
#define SMD3_PRM_S20_EDGE0       SMD3_PRM_S20_bit.EDGE0
#define SMD3_PRM_S20_EDGE1       SMD3_PRM_S20_bit.EDGE1
#define SMD3_PRM_S20_CNT_RSTE    SMD3_PRM_S20_bit.CNT_RSTE
#define SMD3_PRM_S20_PULS_EDG    SMD3_PRM_S20_bit.PULS_EDG
#define SMD3_PRM_S20_HOLD_JMP    SMD3_PRM_S20_bit.HOLD_JMP
#define SMD3_PRM_S20_AND_OR      SMD3_PRM_S20_bit.AND_OR

#define SMD3_PRM_S21_CEDGE0      SMD3_PRM_S21_bit.CEDGE0
#define SMD3_PRM_S21_CEDGE1      SMD3_PRM_S21_bit.CEDGE1
#define SMD3_PRM_S21_CNT_RSTC    SMD3_PRM_S21_bit.CNT_RSTC
#define SMD3_PRM_S21_PULS_CMP    SMD3_PRM_S21_bit.PULS_CMP
#define SMD3_PRM_S21_HOLD_EXIT   SMD3_PRM_S21_bit.HOLD_EXIT

#define SMD3_PRM_S22_LATCH_RS    SMD3_PRM_S22_bit.LATCH_RS

#define SMD3_PRM_S30_NX_STAT0    SMD3_PRM_S30_bit.NX_STAT0
#define SMD3_PRM_S30_NX_STAT1    SMD3_PRM_S30_bit.NX_STAT1
#define SMD3_PRM_S30_EDGE0       SMD3_PRM_S30_bit.EDGE0
#define SMD3_PRM_S30_EDGE1       SMD3_PRM_S30_bit.EDGE1
#define SMD3_PRM_S30_CNT_RSTE    SMD3_PRM_S30_bit.CNT_RSTE
#define SMD3_PRM_S30_PULS_EDG    SMD3_PRM_S30_bit.PULS_EDG
#define SMD3_PRM_S30_HOLD_JMP    SMD3_PRM_S30_bit.HOLD_JMP
#define SMD3_PRM_S30_AND_OR      SMD3_PRM_S30_bit.AND_OR

#define SMD3_PRM_S31_CEDGE0      SMD3_PRM_S31_bit.CEDGE0
#define SMD3_PRM_S31_CEDGE1      SMD3_PRM_S31_bit.CEDGE1
#define SMD3_PRM_S31_CNT_RSTC    SMD3_PRM_S31_bit.CNT_RSTC
#define SMD3_PRM_S31_PULS_CMP    SMD3_PRM_S31_bit.PULS_CMP
#define SMD3_PRM_S31_HOLD_EXIT   SMD3_PRM_S31_bit.HOLD_EXIT

#define SMD3_PRM_S32_LATCH_RS    SMD3_PRM_S32_bit.LATCH_RS

#define SMD3_CFG_TIM_NUM0        SMD3_CFG_bit.TIM_NUM0
#define SMD3_CFG_TIM_NUM1        SMD3_CFG_bit.TIM_NUM1
#define SMD3_CFG_TIM_UPD0        SMD3_CFG_bit.TIM_UPD0
#define SMD3_CFG_TIM_UPD1        SMD3_CFG_bit.TIM_UPD1

#define SMD3_DMP_L_CNT_LO0       SMD3_DMP_L_bit.CNT_LO0
#define SMD3_DMP_L_CNT_LO1       SMD3_DMP_L_bit.CNT_LO1
#define SMD3_DMP_L_CNT_LO2       SMD3_DMP_L_bit.CNT_LO2
#define SMD3_DMP_L_CNT_LO3       SMD3_DMP_L_bit.CNT_LO3
#define SMD3_DMP_L_CNT_LO4       SMD3_DMP_L_bit.CNT_LO4
#define SMD3_DMP_L_CNT_LO5       SMD3_DMP_L_bit.CNT_LO5
#define SMD3_DMP_L_CNT_LO6       SMD3_DMP_L_bit.CNT_LO6
#define SMD3_DMP_L_CNT_LO7       SMD3_DMP_L_bit.CNT_LO7

#define SMD3_DMP_H_CNT_LH0       SMD3_DMP_H_bit.CNT_LH0
#define SMD3_DMP_H_CNT_LH1       SMD3_DMP_H_bit.CNT_LH1
#define SMD3_DMP_H_CNT_LH2       SMD3_DMP_H_bit.CNT_LH2
#define SMD3_DMP_H_CNT_LH3       SMD3_DMP_H_bit.CNT_LH3
#define SMD3_DMP_H_CNT_LH4       SMD3_DMP_H_bit.CNT_LH4
#define SMD3_DMP_H_CNT_LH5       SMD3_DMP_H_bit.CNT_LH5
#define SMD3_DMP_H_CNT_LH6       SMD3_DMP_H_bit.CNT_LH6
#define SMD3_DMP_H_CNT_LH7       SMD3_DMP_H_bit.CNT_LH7

#define SMD3_GSTS_EX0_DUMP       SMD3_GSTS_bit.EX0_DUMP
#define SMD3_GSTS_EX1_DUMP       SMD3_GSTS_bit.EX1_DUMP
#define SMD3_GSTS_EX2_DUMP       SMD3_GSTS_bit.EX2_DUMP
#define SMD3_GSTS_CNT_FLAG       SMD3_GSTS_bit.CNT_FLAG
#define SMD3_GSTS_DMP_LK0        SMD3_GSTS_bit.DMP_LK0
#define SMD3_GSTS_DMP_LK1        SMD3_GSTS_bit.DMP_LK1
#define SMD3_GSTS_EVENT_OV       SMD3_GSTS_bit.EVENT_OV

#define SMD3_ISR_CNT_OVER        SMD3_ISR_bit.CNT_OVER
#define SMD3_ISR_EXT0_INT        SMD3_ISR_bit.EXT0_INT
#define SMD3_ISR_EXT1_INT        SMD3_ISR_bit.EXT1_INT
#define SMD3_ISR_EXT2_INT        SMD3_ISR_bit.EXT2_INT
#define SMD3_ISR_STA_S0_IT       SMD3_ISR_bit.STA_S0_IT
#define SMD3_ISR_STA_S1_IT       SMD3_ISR_bit.STA_S1_IT
#define SMD3_ISR_STA_S2_IT       SMD3_ISR_bit.STA_S2_IT
#define SMD3_ISR_STA_S3_IT       SMD3_ISR_bit.STA_S3_IT

#define SMD3_IMR_CNT_OV_R        SMD3_IMR_bit.CNT_OV_R
#define SMD3_IMR_IT_EXT0         SMD3_IMR_bit.IT_EXT0
#define SMD3_IMR_IT_EXT1         SMD3_IMR_bit.IT_EXT1
#define SMD3_IMR_IT_EXT2         SMD3_IMR_bit.IT_EXT2
#define SMD3_IMR_IT_STA_S0       SMD3_IMR_bit.IT_STA_S0
#define SMD3_IMR_IT_STA_S1       SMD3_IMR_bit.IT_STA_S1
#define SMD3_IMR_IT_STA_S2       SMD3_IMR_bit.IT_STA_S2
#define SMD3_IMR_IT_STA_S3       SMD3_IMR_bit.IT_STA_S3

#define SMD3_ISEL_INPUT0_EN      SMD3_ISEL_bit.INPUT0_EN
#define SMD3_ISEL_INPUT1_EN      SMD3_ISEL_bit.INPUT1_EN
#define SMD3_ISEL_INPUT2_EN      SMD3_ISEL_bit.INPUT2_EN
#define SMD3_ISEL_INPUT_LAT      SMD3_ISEL_bit.INPUT_LAT

#define SMD3_DMP_DMPE_EX0        SMD3_DMP_bit.DMPE_EX0
#define SMD3_DMP_DMPE_EX1        SMD3_DMP_bit.DMPE_EX1
#define SMD3_DMP_DMPE_EX2        SMD3_DMP_bit.DMPE_EX2
#define SMD3_DMP_DMP_EVER        SMD3_DMP_bit.DMP_EVER
#define SMD3_DMP_CPL_IT_GE       SMD3_DMP_bit.CPL_IT_GE

#define SMD3_FSM_STS_FSM0        SMD3_FSM_STS_bit.FSM0
#define SMD3_FSM_STS_FSM1        SMD3_FSM_STS_bit.FSM1
#define SMD3_FSM_STS_FSM2        SMD3_FSM_STS_bit.FSM2
#define SMD3_FSM_STS_PWM         SMD3_FSM_STS_bit.PWM
#define SMD3_FSM_STS_EVINP0      SMD3_FSM_STS_bit.EVINP0
#define SMD3_FSM_STS_EVINP1      SMD3_FSM_STS_bit.EVINP1
#define SMD3_FSM_STS_EVINP2      SMD3_FSM_STS_bit.EVINP2

#endif

/*-------------------------------------------------------------------------
 *      SMED 3 Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SMD3_CTR_START_CNT  0x01
#define MASK_SMD3_CTR_FSM_ENA    0x02

#define MASK_SMD3_CTR_TMR_TIME_T0_VAL 0x01
#define MASK_SMD3_CTR_TMR_TIME_T1_VAL 0x02
#define MASK_SMD3_CTR_TMR_TIME_T2_VAL 0x04
#define MASK_SMD3_CTR_TMR_TIME_T3_VAL 0x08
#define MASK_SMD3_CTR_TMR_DITHER_VAL 0x10

#define MASK_SMD3_CTR_INP_RS_INSIG0 0x01
#define MASK_SMD3_CTR_INP_RS_INSIG1 0x02
#define MASK_SMD3_CTR_INP_RS_INSIG2 0x04
#define MASK_SMD3_CTR_INP_RAIS_EN 0x08
#define MASK_SMD3_CTR_INP_EL_INSIG0 0x10
#define MASK_SMD3_CTR_INP_EL_INSIG1 0x20
#define MASK_SMD3_CTR_INP_EL_INSIG2 0x40
#define MASK_SMD3_CTR_INP_EL_EN  0x80

#define MASK_SMD3_CTR_DTHR_DITH0 0x01
#define MASK_SMD3_CTR_DTHR_DITH1 0x02
#define MASK_SMD3_CTR_DTHR_DITH2 0x04
#define MASK_SMD3_CTR_DTHR_DITH3 0x08
#define MASK_SMD3_CTR_DTHR_DITH4 0x10
#define MASK_SMD3_CTR_DTHR_DITH5 0x20
#define MASK_SMD3_CTR_DTHR_DITH6 0x40
#define MASK_SMD3_CTR_DTHR_DITH7 0x80

#define MASK_SMD3_TMR_T0L_TIM_T0L0 0x01
#define MASK_SMD3_TMR_T0L_TIM_T0L1 0x02
#define MASK_SMD3_TMR_T0L_TIM_T0L2 0x04
#define MASK_SMD3_TMR_T0L_TIM_T0L3 0x08
#define MASK_SMD3_TMR_T0L_TIM_T0L4 0x10
#define MASK_SMD3_TMR_T0L_TIM_T0L5 0x20
#define MASK_SMD3_TMR_T0L_TIM_T0L6 0x40
#define MASK_SMD3_TMR_T0L_TIM_T0L7 0x80

#define MASK_SMD3_TMR_T0H_TIM_T0H0 0x01
#define MASK_SMD3_TMR_T0H_TIM_T0H1 0x02
#define MASK_SMD3_TMR_T0H_TIM_T0H2 0x04
#define MASK_SMD3_TMR_T0H_TIM_T0H3 0x08
#define MASK_SMD3_TMR_T0H_TIM_T0H4 0x10
#define MASK_SMD3_TMR_T0H_TIM_T0H5 0x20
#define MASK_SMD3_TMR_T0H_TIM_T0H6 0x40
#define MASK_SMD3_TMR_T0H_TIM_T0H7 0x80

#define MASK_SMD3_TMR_T1L_TIM_T1L0 0x01
#define MASK_SMD3_TMR_T1L_TIM_T1L1 0x02
#define MASK_SMD3_TMR_T1L_TIM_T1L2 0x04
#define MASK_SMD3_TMR_T1L_TIM_T1L3 0x08
#define MASK_SMD3_TMR_T1L_TIM_T1L4 0x10
#define MASK_SMD3_TMR_T1L_TIM_T1L5 0x20
#define MASK_SMD3_TMR_T1L_TIM_T1L6 0x40
#define MASK_SMD3_TMR_T1L_TIM_T1L7 0x80

#define MASK_SMD3_TMR_T1H_TIM_T1H0 0x01
#define MASK_SMD3_TMR_T1H_TIM_T1H1 0x02
#define MASK_SMD3_TMR_T1H_TIM_T1H2 0x04
#define MASK_SMD3_TMR_T1H_TIM_T1H3 0x08
#define MASK_SMD3_TMR_T1H_TIM_T1H4 0x10
#define MASK_SMD3_TMR_T1H_TIM_T1H5 0x20
#define MASK_SMD3_TMR_T1H_TIM_T1H6 0x40
#define MASK_SMD3_TMR_T1H_TIM_T1H7 0x80

#define MASK_SMD3_TMR_T2L_TIM_T2L0 0x01
#define MASK_SMD3_TMR_T2L_TIM_T2L1 0x02
#define MASK_SMD3_TMR_T2L_TIM_T2L2 0x04
#define MASK_SMD3_TMR_T2L_TIM_T2L3 0x08
#define MASK_SMD3_TMR_T2L_TIM_T2L4 0x10
#define MASK_SMD3_TMR_T2L_TIM_T2L5 0x20
#define MASK_SMD3_TMR_T2L_TIM_T2L6 0x40
#define MASK_SMD3_TMR_T2L_TIM_T2L7 0x80

#define MASK_SMD3_TMR_T2H_TIM_T2H0 0x01
#define MASK_SMD3_TMR_T2H_TIM_T2H1 0x02
#define MASK_SMD3_TMR_T2H_TIM_T2H2 0x04
#define MASK_SMD3_TMR_T2H_TIM_T2H3 0x08
#define MASK_SMD3_TMR_T2H_TIM_T2H4 0x10
#define MASK_SMD3_TMR_T2H_TIM_T2H5 0x20
#define MASK_SMD3_TMR_T2H_TIM_T2H6 0x40
#define MASK_SMD3_TMR_T2H_TIM_T2H7 0x80

#define MASK_SMD3_TMR_T3L_TIM_T3L0 0x01
#define MASK_SMD3_TMR_T3L_TIM_T3L1 0x02
#define MASK_SMD3_TMR_T3L_TIM_T3L2 0x04
#define MASK_SMD3_TMR_T3L_TIM_T3L3 0x08
#define MASK_SMD3_TMR_T3L_TIM_T3L4 0x10
#define MASK_SMD3_TMR_T3L_TIM_T3L5 0x20
#define MASK_SMD3_TMR_T3L_TIM_T3L6 0x40
#define MASK_SMD3_TMR_T3L_TIM_T3L7 0x80

#define MASK_SMD3_TMR_T3H_TIM_T3H0 0x01
#define MASK_SMD3_TMR_T3H_TIM_T3H1 0x02
#define MASK_SMD3_TMR_T3H_TIM_T3H2 0x04
#define MASK_SMD3_TMR_T3H_TIM_T3H3 0x08
#define MASK_SMD3_TMR_T3H_TIM_T3H4 0x10
#define MASK_SMD3_TMR_T3H_TIM_T3H5 0x20
#define MASK_SMD3_TMR_T3H_TIM_T3H6 0x40
#define MASK_SMD3_TMR_T3H_TIM_T3H7 0x80

#define MASK_SMD3_PRM_ID0_NX_STAT0 0x01
#define MASK_SMD3_PRM_ID0_NX_STAT1 0x02
#define MASK_SMD3_PRM_ID0_EDGE0  0x04
#define MASK_SMD3_PRM_ID0_EDGE1  0x08
#define MASK_SMD3_PRM_ID0_CNT_RSTE 0x10
#define MASK_SMD3_PRM_ID0_PULS_EDG 0x20
#define MASK_SMD3_PRM_ID0_HOLD_JMP 0x40
#define MASK_SMD3_PRM_ID0_AND_OR 0x80

#define MASK_SMD3_PRM_ID1_CEDGE0 0x04
#define MASK_SMD3_PRM_ID1_CEDGE1 0x08
#define MASK_SMD3_PRM_ID1_CNT_RSTC 0x10
#define MASK_SMD3_PRM_ID1_PULS_CMP 0x20
#define MASK_SMD3_PRM_ID1_HOLD_EXIT 0x40

#define MASK_SMD3_PRM_ID2_LATCH_RS 0x01

#define MASK_SMD3_PRM_S00_NX_STAT0 0x01
#define MASK_SMD3_PRM_S00_NX_STAT1 0x02
#define MASK_SMD3_PRM_S00_EDGE0  0x04
#define MASK_SMD3_PRM_S00_EDGE1  0x08
#define MASK_SMD3_PRM_S00_CNT_RSTE 0x10
#define MASK_SMD3_PRM_S00_PULS_EDG 0x20
#define MASK_SMD3_PRM_S00_HOLD_JMP 0x40
#define MASK_SMD3_PRM_S00_AND_OR 0x80

#define MASK_SMD3_PRM_S01_CEDGE0 0x04
#define MASK_SMD3_PRM_S01_CEDGE1 0x08
#define MASK_SMD3_PRM_S01_CNT_RSTC 0x10
#define MASK_SMD3_PRM_S01_PULS_CMP 0x20
#define MASK_SMD3_PRM_S01_HOLD_EXIT 0x40

#define MASK_SMD3_PRM_S02_LATCH_RS 0x01

#define MASK_SMD3_PRM_S10_NX_STAT0 0x01
#define MASK_SMD3_PRM_S10_NX_STAT1 0x02
#define MASK_SMD3_PRM_S10_EDGE0  0x04
#define MASK_SMD3_PRM_S10_EDGE1  0x08
#define MASK_SMD3_PRM_S10_CNT_RSTE 0x10
#define MASK_SMD3_PRM_S10_PULS_EDG 0x20
#define MASK_SMD3_PRM_S10_HOLD_JMP 0x40
#define MASK_SMD3_PRM_S10_AND_OR 0x80

#define MASK_SMD3_PRM_S11_CEDGE0 0x04
#define MASK_SMD3_PRM_S11_CEDGE1 0x08
#define MASK_SMD3_PRM_S11_CNT_RSTC 0x10
#define MASK_SMD3_PRM_S11_PULS_CMP 0x20
#define MASK_SMD3_PRM_S11_HOLD_EXIT 0x40

#define MASK_SMD3_PRM_S12_LATCH_RS 0x01

#define MASK_SMD3_PRM_S20_NX_STAT0 0x01
#define MASK_SMD3_PRM_S20_NX_STAT1 0x02
#define MASK_SMD3_PRM_S20_EDGE0  0x04
#define MASK_SMD3_PRM_S20_EDGE1  0x08
#define MASK_SMD3_PRM_S20_CNT_RSTE 0x10
#define MASK_SMD3_PRM_S20_PULS_EDG 0x20
#define MASK_SMD3_PRM_S20_HOLD_JMP 0x40
#define MASK_SMD3_PRM_S20_AND_OR 0x80

#define MASK_SMD3_PRM_S21_CEDGE0 0x04
#define MASK_SMD3_PRM_S21_CEDGE1 0x08
#define MASK_SMD3_PRM_S21_CNT_RSTC 0x10
#define MASK_SMD3_PRM_S21_PULS_CMP 0x20
#define MASK_SMD3_PRM_S21_HOLD_EXIT 0x40

#define MASK_SMD3_PRM_S22_LATCH_RS 0x01

#define MASK_SMD3_PRM_S30_NX_STAT0 0x01
#define MASK_SMD3_PRM_S30_NX_STAT1 0x02
#define MASK_SMD3_PRM_S30_EDGE0  0x04
#define MASK_SMD3_PRM_S30_EDGE1  0x08
#define MASK_SMD3_PRM_S30_CNT_RSTE 0x10
#define MASK_SMD3_PRM_S30_PULS_EDG 0x20
#define MASK_SMD3_PRM_S30_HOLD_JMP 0x40
#define MASK_SMD3_PRM_S30_AND_OR 0x80

#define MASK_SMD3_PRM_S31_CEDGE0 0x04
#define MASK_SMD3_PRM_S31_CEDGE1 0x08
#define MASK_SMD3_PRM_S31_CNT_RSTC 0x10
#define MASK_SMD3_PRM_S31_PULS_CMP 0x20
#define MASK_SMD3_PRM_S31_HOLD_EXIT 0x40

#define MASK_SMD3_PRM_S32_LATCH_RS 0x01

#define MASK_SMD3_CFG_TIM_NUM0   0x02
#define MASK_SMD3_CFG_TIM_NUM1   0x04
#define MASK_SMD3_CFG_TIM_UPD0   0x08
#define MASK_SMD3_CFG_TIM_UPD1   0x10

#define MASK_SMD3_DMP_L_CNT_LO0  0x01
#define MASK_SMD3_DMP_L_CNT_LO1  0x02
#define MASK_SMD3_DMP_L_CNT_LO2  0x04
#define MASK_SMD3_DMP_L_CNT_LO3  0x08
#define MASK_SMD3_DMP_L_CNT_LO4  0x10
#define MASK_SMD3_DMP_L_CNT_LO5  0x20
#define MASK_SMD3_DMP_L_CNT_LO6  0x40
#define MASK_SMD3_DMP_L_CNT_LO7  0x80

#define MASK_SMD3_DMP_H_CNT_LH0  0x01
#define MASK_SMD3_DMP_H_CNT_LH1  0x02
#define MASK_SMD3_DMP_H_CNT_LH2  0x04
#define MASK_SMD3_DMP_H_CNT_LH3  0x08
#define MASK_SMD3_DMP_H_CNT_LH4  0x10
#define MASK_SMD3_DMP_H_CNT_LH5  0x20
#define MASK_SMD3_DMP_H_CNT_LH6  0x40
#define MASK_SMD3_DMP_H_CNT_LH7  0x80

#define MASK_SMD3_GSTS_EX0_DUMP  0x01
#define MASK_SMD3_GSTS_EX1_DUMP  0x02
#define MASK_SMD3_GSTS_EX2_DUMP  0x04
#define MASK_SMD3_GSTS_CNT_FLAG  0x08
#define MASK_SMD3_GSTS_DMP_LK0   0x10
#define MASK_SMD3_GSTS_DMP_LK1   0x20
#define MASK_SMD3_GSTS_EVENT_OV  0x40

#define MASK_SMD3_ISR_CNT_OVER   0x01
#define MASK_SMD3_ISR_EXT0_INT   0x02
#define MASK_SMD3_ISR_EXT1_INT   0x04
#define MASK_SMD3_ISR_EXT2_INT   0x08
#define MASK_SMD3_ISR_STA_S0_IT  0x10
#define MASK_SMD3_ISR_STA_S1_IT  0x20
#define MASK_SMD3_ISR_STA_S2_IT  0x40
#define MASK_SMD3_ISR_STA_S3_IT  0x80

#define MASK_SMD3_IMR_CNT_OV_R   0x01
#define MASK_SMD3_IMR_IT_EXT0    0x02
#define MASK_SMD3_IMR_IT_EXT1    0x04
#define MASK_SMD3_IMR_IT_EXT2    0x08
#define MASK_SMD3_IMR_IT_STA_S0  0x10
#define MASK_SMD3_IMR_IT_STA_S1  0x20
#define MASK_SMD3_IMR_IT_STA_S2  0x40
#define MASK_SMD3_IMR_IT_STA_S3  0x80

#define MASK_SMD3_ISEL_INPUT0_EN 0x01
#define MASK_SMD3_ISEL_INPUT1_EN 0x02
#define MASK_SMD3_ISEL_INPUT2_EN 0x04
#define MASK_SMD3_ISEL_INPUT_LAT 0x08

#define MASK_SMD3_DMP_DMPE_EX0   0x01
#define MASK_SMD3_DMP_DMPE_EX1   0x02
#define MASK_SMD3_DMP_DMPE_EX2   0x04
#define MASK_SMD3_DMP_DMP_EVER   0x08
#define MASK_SMD3_DMP_CPL_IT_GE  0x10

#define MASK_SMD3_FSM_STS_FSM0   0x01
#define MASK_SMD3_FSM_STS_FSM1   0x02
#define MASK_SMD3_FSM_STS_FSM2   0x04
#define MASK_SMD3_FSM_STS_PWM    0x08
#define MASK_SMD3_FSM_STS_EVINP0 0x10
#define MASK_SMD3_FSM_STS_EVINP1 0x20
#define MASK_SMD3_FSM_STS_EVINP2 0x40


/*-------------------------------------------------------------------------
 *      SMED 4 Registers register definitions
 *-----------------------------------------------------------------------*/
/* Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START_CNT   : 1;
  unsigned char FSM_ENA     : 1;
} __BITS_SMD4_CTR;
#endif
__IO_REG8_BIT(SMD4_CTR,    0x5600, __READ_WRITE, __BITS_SMD4_CTR);

/* Control timer register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIME_T0_VAL : 1;
  unsigned char TIME_T1_VAL : 1;
  unsigned char TIME_T2_VAL : 1;
  unsigned char TIME_T3_VAL : 1;
  unsigned char DITHER_VAL  : 1;
} __BITS_SMD4_CTR_TMR;
#endif
__IO_REG8_BIT(SMD4_CTR_TMR, 0x5601, __READ_WRITE, __BITS_SMD4_CTR_TMR);

/* Control input register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RS_INSIG0   : 1;
  unsigned char RS_INSIG1   : 1;
  unsigned char RS_INSIG2   : 1;
  unsigned char RAIS_EN     : 1;
  unsigned char EL_INSIG0   : 1;
  unsigned char EL_INSIG1   : 1;
  unsigned char EL_INSIG2   : 1;
  unsigned char EL_EN       : 1;
} __BITS_SMD4_CTR_INP;
#endif
__IO_REG8_BIT(SMD4_CTR_INP, 0x5602, __READ_WRITE, __BITS_SMD4_CTR_INP);

/* Dithering register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DITH0       : 1;
  unsigned char DITH1       : 1;
  unsigned char DITH2       : 1;
  unsigned char DITH3       : 1;
  unsigned char DITH4       : 1;
  unsigned char DITH5       : 1;
  unsigned char DITH6       : 1;
  unsigned char DITH7       : 1;
} __BITS_SMD4_CTR_DTHR;
#endif
__IO_REG8_BIT(SMD4_CTR_DTHR, 0x5603, __READ_WRITE, __BITS_SMD4_CTR_DTHR);

/* Time T0 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0L0    : 1;
  unsigned char TIM_T0L1    : 1;
  unsigned char TIM_T0L2    : 1;
  unsigned char TIM_T0L3    : 1;
  unsigned char TIM_T0L4    : 1;
  unsigned char TIM_T0L5    : 1;
  unsigned char TIM_T0L6    : 1;
  unsigned char TIM_T0L7    : 1;
} __BITS_SMD4_TMR_T0L;
#endif
__IO_REG8_BIT(SMD4_TMR_T0L, 0x5604, __READ_WRITE, __BITS_SMD4_TMR_T0L);

/* Time T0 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0H0    : 1;
  unsigned char TIM_T0H1    : 1;
  unsigned char TIM_T0H2    : 1;
  unsigned char TIM_T0H3    : 1;
  unsigned char TIM_T0H4    : 1;
  unsigned char TIM_T0H5    : 1;
  unsigned char TIM_T0H6    : 1;
  unsigned char TIM_T0H7    : 1;
} __BITS_SMD4_TMR_T0H;
#endif
__IO_REG8_BIT(SMD4_TMR_T0H, 0x5605, __READ_WRITE, __BITS_SMD4_TMR_T0H);

/* Time T1 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1L0    : 1;
  unsigned char TIM_T1L1    : 1;
  unsigned char TIM_T1L2    : 1;
  unsigned char TIM_T1L3    : 1;
  unsigned char TIM_T1L4    : 1;
  unsigned char TIM_T1L5    : 1;
  unsigned char TIM_T1L6    : 1;
  unsigned char TIM_T1L7    : 1;
} __BITS_SMD4_TMR_T1L;
#endif
__IO_REG8_BIT(SMD4_TMR_T1L, 0x5606, __READ_WRITE, __BITS_SMD4_TMR_T1L);

/* Time T1 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1H0    : 1;
  unsigned char TIM_T1H1    : 1;
  unsigned char TIM_T1H2    : 1;
  unsigned char TIM_T1H3    : 1;
  unsigned char TIM_T1H4    : 1;
  unsigned char TIM_T1H5    : 1;
  unsigned char TIM_T1H6    : 1;
  unsigned char TIM_T1H7    : 1;
} __BITS_SMD4_TMR_T1H;
#endif
__IO_REG8_BIT(SMD4_TMR_T1H, 0x5607, __READ_WRITE, __BITS_SMD4_TMR_T1H);

/* Time T2 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2L0    : 1;
  unsigned char TIM_T2L1    : 1;
  unsigned char TIM_T2L2    : 1;
  unsigned char TIM_T2L3    : 1;
  unsigned char TIM_T2L4    : 1;
  unsigned char TIM_T2L5    : 1;
  unsigned char TIM_T2L6    : 1;
  unsigned char TIM_T2L7    : 1;
} __BITS_SMD4_TMR_T2L;
#endif
__IO_REG8_BIT(SMD4_TMR_T2L, 0x5608, __READ_WRITE, __BITS_SMD4_TMR_T2L);

/* Time T2 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2H0    : 1;
  unsigned char TIM_T2H1    : 1;
  unsigned char TIM_T2H2    : 1;
  unsigned char TIM_T2H3    : 1;
  unsigned char TIM_T2H4    : 1;
  unsigned char TIM_T2H5    : 1;
  unsigned char TIM_T2H6    : 1;
  unsigned char TIM_T2H7    : 1;
} __BITS_SMD4_TMR_T2H;
#endif
__IO_REG8_BIT(SMD4_TMR_T2H, 0x5609, __READ_WRITE, __BITS_SMD4_TMR_T2H);

/* Time T3 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3L0    : 1;
  unsigned char TIM_T3L1    : 1;
  unsigned char TIM_T3L2    : 1;
  unsigned char TIM_T3L3    : 1;
  unsigned char TIM_T3L4    : 1;
  unsigned char TIM_T3L5    : 1;
  unsigned char TIM_T3L6    : 1;
  unsigned char TIM_T3L7    : 1;
} __BITS_SMD4_TMR_T3L;
#endif
__IO_REG8_BIT(SMD4_TMR_T3L, 0x560A, __READ_WRITE, __BITS_SMD4_TMR_T3L);

/* Time T3 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3H0    : 1;
  unsigned char TIM_T3H1    : 1;
  unsigned char TIM_T3H2    : 1;
  unsigned char TIM_T3H3    : 1;
  unsigned char TIM_T3H4    : 1;
  unsigned char TIM_T3H5    : 1;
  unsigned char TIM_T3H6    : 1;
  unsigned char TIM_T3H7    : 1;
} __BITS_SMD4_TMR_T3H;
#endif
__IO_REG8_BIT(SMD4_TMR_T3H, 0x560B, __READ_WRITE, __BITS_SMD4_TMR_T3H);

/* Parameter 0 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD4_PRM_ID0;
#endif
__IO_REG8_BIT(SMD4_PRM_ID0, 0x560C, __READ_WRITE, __BITS_SMD4_PRM_ID0);

/* Parameter 1 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD4_PRM_ID1;
#endif
__IO_REG8_BIT(SMD4_PRM_ID1, 0x560D, __READ_WRITE, __BITS_SMD4_PRM_ID1);

/* Parameter 2 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD4_PRM_ID2;
#endif
__IO_REG8_BIT(SMD4_PRM_ID2, 0x560E, __READ_WRITE, __BITS_SMD4_PRM_ID2);

/* Parameter 0 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD4_PRM_S00;
#endif
__IO_REG8_BIT(SMD4_PRM_S00, 0x560F, __READ_WRITE, __BITS_SMD4_PRM_S00);

/* Parameter 1 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD4_PRM_S01;
#endif
__IO_REG8_BIT(SMD4_PRM_S01, 0x5610, __READ_WRITE, __BITS_SMD4_PRM_S01);

/* Parameter 2 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD4_PRM_S02;
#endif
__IO_REG8_BIT(SMD4_PRM_S02, 0x5611, __READ_WRITE, __BITS_SMD4_PRM_S02);

/* Parameter 0 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD4_PRM_S10;
#endif
__IO_REG8_BIT(SMD4_PRM_S10, 0x5612, __READ_WRITE, __BITS_SMD4_PRM_S10);

/* Parameter 1 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD4_PRM_S11;
#endif
__IO_REG8_BIT(SMD4_PRM_S11, 0x5613, __READ_WRITE, __BITS_SMD4_PRM_S11);

/* Parameter 2 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD4_PRM_S12;
#endif
__IO_REG8_BIT(SMD4_PRM_S12, 0x5614, __READ_WRITE, __BITS_SMD4_PRM_S12);

/* Parameter 0 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD4_PRM_S20;
#endif
__IO_REG8_BIT(SMD4_PRM_S20, 0x5615, __READ_WRITE, __BITS_SMD4_PRM_S20);

/* Parameter 1 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD4_PRM_S21;
#endif
__IO_REG8_BIT(SMD4_PRM_S21, 0x5616, __READ_WRITE, __BITS_SMD4_PRM_S21);

/* Parameter 2 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD4_PRM_S22;
#endif
__IO_REG8_BIT(SMD4_PRM_S22, 0x5617, __READ_WRITE, __BITS_SMD4_PRM_S22);

/* Parameter 0 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD4_PRM_S30;
#endif
__IO_REG8_BIT(SMD4_PRM_S30, 0x5618, __READ_WRITE, __BITS_SMD4_PRM_S30);

/* Parameter 1 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD4_PRM_S31;
#endif
__IO_REG8_BIT(SMD4_PRM_S31, 0x5619, __READ_WRITE, __BITS_SMD4_PRM_S31);

/* Parameter 2 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD4_PRM_S32;
#endif
__IO_REG8_BIT(SMD4_PRM_S32, 0x561A, __READ_WRITE, __BITS_SMD4_PRM_S32);

/* Timer configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TIM_NUM0    : 1;
  unsigned char TIM_NUM1    : 1;
  unsigned char TIM_UPD0    : 1;
  unsigned char TIM_UPD1    : 1;
} __BITS_SMD4_CFG;
#endif
__IO_REG8_BIT(SMD4_CFG,    0x561B, __READ_WRITE, __BITS_SMD4_CFG);

/* Dump counter lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LO0     : 1;
  unsigned char CNT_LO1     : 1;
  unsigned char CNT_LO2     : 1;
  unsigned char CNT_LO3     : 1;
  unsigned char CNT_LO4     : 1;
  unsigned char CNT_LO5     : 1;
  unsigned char CNT_LO6     : 1;
  unsigned char CNT_LO7     : 1;
} __BITS_SMD4_DMP_L;
#endif
__IO_REG8_BIT(SMD4_DMP_L,  0x561C, __READ, __BITS_SMD4_DMP_L);

/* Dump counter msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LH0     : 1;
  unsigned char CNT_LH1     : 1;
  unsigned char CNT_LH2     : 1;
  unsigned char CNT_LH3     : 1;
  unsigned char CNT_LH4     : 1;
  unsigned char CNT_LH5     : 1;
  unsigned char CNT_LH6     : 1;
  unsigned char CNT_LH7     : 1;
} __BITS_SMD4_DMP_H;
#endif
__IO_REG8_BIT(SMD4_DMP_H,  0x561D, __READ, __BITS_SMD4_DMP_H);

/* General status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EX0_DUMP    : 1;
  unsigned char EX1_DUMP    : 1;
  unsigned char EX2_DUMP    : 1;
  unsigned char CNT_FLAG    : 1;
  unsigned char DMP_LK0     : 1;
  unsigned char DMP_LK1     : 1;
  unsigned char EVENT_OV    : 1;
} __BITS_SMD4_GSTS;
#endif
__IO_REG8_BIT(SMD4_GSTS,   0x561E, __READ_WRITE, __BITS_SMD4_GSTS);

/* Interrupt status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OVER    : 1;
  unsigned char EXT0_INT    : 1;
  unsigned char EXT1_INT    : 1;
  unsigned char EXT2_INT    : 1;
  unsigned char STA_S0_IT   : 1;
  unsigned char STA_S1_IT   : 1;
  unsigned char STA_S2_IT   : 1;
  unsigned char STA_S3_IT   : 1;
} __BITS_SMD4_ISR;
#endif
__IO_REG8_BIT(SMD4_ISR,    0x561F, __READ_WRITE, __BITS_SMD4_ISR);

/* Interrupt mask register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OV_R    : 1;
  unsigned char IT_EXT0     : 1;
  unsigned char IT_EXT1     : 1;
  unsigned char IT_EXT2     : 1;
  unsigned char IT_STA_S0   : 1;
  unsigned char IT_STA_S1   : 1;
  unsigned char IT_STA_S2   : 1;
  unsigned char IT_STA_S3   : 1;
} __BITS_SMD4_IMR;
#endif
__IO_REG8_BIT(SMD4_IMR,    0x5620, __READ_WRITE, __BITS_SMD4_IMR);

/* External event control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INPUT0_EN   : 1;
  unsigned char INPUT1_EN   : 1;
  unsigned char INPUT2_EN   : 1;
  unsigned char INPUT_LAT   : 1;
} __BITS_SMD4_ISEL;
#endif
__IO_REG8_BIT(SMD4_ISEL,   0x5621, __READ_WRITE, __BITS_SMD4_ISEL);

/* Dump enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DMPE_EX0    : 1;
  unsigned char DMPE_EX1    : 1;
  unsigned char DMPE_EX2    : 1;
  unsigned char DMP_EVER    : 1;
  unsigned char CPL_IT_GE   : 1;
} __BITS_SMD4_DMP;
#endif
__IO_REG8_BIT(SMD4_DMP,    0x5622, __READ_WRITE, __BITS_SMD4_DMP);

/* FSM status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FSM0        : 1;
  unsigned char FSM1        : 1;
  unsigned char FSM2        : 1;
  unsigned char PWM         : 1;
  unsigned char EVINP0      : 1;
  unsigned char EVINP1      : 1;
  unsigned char EVINP2      : 1;
} __BITS_SMD4_FSM_STS;
#endif
__IO_REG8_BIT(SMD4_FSM_STS, 0x5623, __READ, __BITS_SMD4_FSM_STS);


/*-------------------------------------------------------------------------
 *      SMED 4 Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SMD4_CTR_START_CNT       SMD4_CTR_bit.START_CNT
#define SMD4_CTR_FSM_ENA         SMD4_CTR_bit.FSM_ENA

#define SMD4_CTR_TMR_TIME_T0_VAL SMD4_CTR_TMR_bit.TIME_T0_VAL
#define SMD4_CTR_TMR_TIME_T1_VAL SMD4_CTR_TMR_bit.TIME_T1_VAL
#define SMD4_CTR_TMR_TIME_T2_VAL SMD4_CTR_TMR_bit.TIME_T2_VAL
#define SMD4_CTR_TMR_TIME_T3_VAL SMD4_CTR_TMR_bit.TIME_T3_VAL
#define SMD4_CTR_TMR_DITHER_VAL  SMD4_CTR_TMR_bit.DITHER_VAL

#define SMD4_CTR_INP_RS_INSIG0   SMD4_CTR_INP_bit.RS_INSIG0
#define SMD4_CTR_INP_RS_INSIG1   SMD4_CTR_INP_bit.RS_INSIG1
#define SMD4_CTR_INP_RS_INSIG2   SMD4_CTR_INP_bit.RS_INSIG2
#define SMD4_CTR_INP_RAIS_EN     SMD4_CTR_INP_bit.RAIS_EN
#define SMD4_CTR_INP_EL_INSIG0   SMD4_CTR_INP_bit.EL_INSIG0
#define SMD4_CTR_INP_EL_INSIG1   SMD4_CTR_INP_bit.EL_INSIG1
#define SMD4_CTR_INP_EL_INSIG2   SMD4_CTR_INP_bit.EL_INSIG2
#define SMD4_CTR_INP_EL_EN       SMD4_CTR_INP_bit.EL_EN

#define SMD4_CTR_DTHR_DITH0      SMD4_CTR_DTHR_bit.DITH0
#define SMD4_CTR_DTHR_DITH1      SMD4_CTR_DTHR_bit.DITH1
#define SMD4_CTR_DTHR_DITH2      SMD4_CTR_DTHR_bit.DITH2
#define SMD4_CTR_DTHR_DITH3      SMD4_CTR_DTHR_bit.DITH3
#define SMD4_CTR_DTHR_DITH4      SMD4_CTR_DTHR_bit.DITH4
#define SMD4_CTR_DTHR_DITH5      SMD4_CTR_DTHR_bit.DITH5
#define SMD4_CTR_DTHR_DITH6      SMD4_CTR_DTHR_bit.DITH6
#define SMD4_CTR_DTHR_DITH7      SMD4_CTR_DTHR_bit.DITH7

#define SMD4_TMR_T0L_TIM_T0L0    SMD4_TMR_T0L_bit.TIM_T0L0
#define SMD4_TMR_T0L_TIM_T0L1    SMD4_TMR_T0L_bit.TIM_T0L1
#define SMD4_TMR_T0L_TIM_T0L2    SMD4_TMR_T0L_bit.TIM_T0L2
#define SMD4_TMR_T0L_TIM_T0L3    SMD4_TMR_T0L_bit.TIM_T0L3
#define SMD4_TMR_T0L_TIM_T0L4    SMD4_TMR_T0L_bit.TIM_T0L4
#define SMD4_TMR_T0L_TIM_T0L5    SMD4_TMR_T0L_bit.TIM_T0L5
#define SMD4_TMR_T0L_TIM_T0L6    SMD4_TMR_T0L_bit.TIM_T0L6
#define SMD4_TMR_T0L_TIM_T0L7    SMD4_TMR_T0L_bit.TIM_T0L7

#define SMD4_TMR_T0H_TIM_T0H0    SMD4_TMR_T0H_bit.TIM_T0H0
#define SMD4_TMR_T0H_TIM_T0H1    SMD4_TMR_T0H_bit.TIM_T0H1
#define SMD4_TMR_T0H_TIM_T0H2    SMD4_TMR_T0H_bit.TIM_T0H2
#define SMD4_TMR_T0H_TIM_T0H3    SMD4_TMR_T0H_bit.TIM_T0H3
#define SMD4_TMR_T0H_TIM_T0H4    SMD4_TMR_T0H_bit.TIM_T0H4
#define SMD4_TMR_T0H_TIM_T0H5    SMD4_TMR_T0H_bit.TIM_T0H5
#define SMD4_TMR_T0H_TIM_T0H6    SMD4_TMR_T0H_bit.TIM_T0H6
#define SMD4_TMR_T0H_TIM_T0H7    SMD4_TMR_T0H_bit.TIM_T0H7

#define SMD4_TMR_T1L_TIM_T1L0    SMD4_TMR_T1L_bit.TIM_T1L0
#define SMD4_TMR_T1L_TIM_T1L1    SMD4_TMR_T1L_bit.TIM_T1L1
#define SMD4_TMR_T1L_TIM_T1L2    SMD4_TMR_T1L_bit.TIM_T1L2
#define SMD4_TMR_T1L_TIM_T1L3    SMD4_TMR_T1L_bit.TIM_T1L3
#define SMD4_TMR_T1L_TIM_T1L4    SMD4_TMR_T1L_bit.TIM_T1L4
#define SMD4_TMR_T1L_TIM_T1L5    SMD4_TMR_T1L_bit.TIM_T1L5
#define SMD4_TMR_T1L_TIM_T1L6    SMD4_TMR_T1L_bit.TIM_T1L6
#define SMD4_TMR_T1L_TIM_T1L7    SMD4_TMR_T1L_bit.TIM_T1L7

#define SMD4_TMR_T1H_TIM_T1H0    SMD4_TMR_T1H_bit.TIM_T1H0
#define SMD4_TMR_T1H_TIM_T1H1    SMD4_TMR_T1H_bit.TIM_T1H1
#define SMD4_TMR_T1H_TIM_T1H2    SMD4_TMR_T1H_bit.TIM_T1H2
#define SMD4_TMR_T1H_TIM_T1H3    SMD4_TMR_T1H_bit.TIM_T1H3
#define SMD4_TMR_T1H_TIM_T1H4    SMD4_TMR_T1H_bit.TIM_T1H4
#define SMD4_TMR_T1H_TIM_T1H5    SMD4_TMR_T1H_bit.TIM_T1H5
#define SMD4_TMR_T1H_TIM_T1H6    SMD4_TMR_T1H_bit.TIM_T1H6
#define SMD4_TMR_T1H_TIM_T1H7    SMD4_TMR_T1H_bit.TIM_T1H7

#define SMD4_TMR_T2L_TIM_T2L0    SMD4_TMR_T2L_bit.TIM_T2L0
#define SMD4_TMR_T2L_TIM_T2L1    SMD4_TMR_T2L_bit.TIM_T2L1
#define SMD4_TMR_T2L_TIM_T2L2    SMD4_TMR_T2L_bit.TIM_T2L2
#define SMD4_TMR_T2L_TIM_T2L3    SMD4_TMR_T2L_bit.TIM_T2L3
#define SMD4_TMR_T2L_TIM_T2L4    SMD4_TMR_T2L_bit.TIM_T2L4
#define SMD4_TMR_T2L_TIM_T2L5    SMD4_TMR_T2L_bit.TIM_T2L5
#define SMD4_TMR_T2L_TIM_T2L6    SMD4_TMR_T2L_bit.TIM_T2L6
#define SMD4_TMR_T2L_TIM_T2L7    SMD4_TMR_T2L_bit.TIM_T2L7

#define SMD4_TMR_T2H_TIM_T2H0    SMD4_TMR_T2H_bit.TIM_T2H0
#define SMD4_TMR_T2H_TIM_T2H1    SMD4_TMR_T2H_bit.TIM_T2H1
#define SMD4_TMR_T2H_TIM_T2H2    SMD4_TMR_T2H_bit.TIM_T2H2
#define SMD4_TMR_T2H_TIM_T2H3    SMD4_TMR_T2H_bit.TIM_T2H3
#define SMD4_TMR_T2H_TIM_T2H4    SMD4_TMR_T2H_bit.TIM_T2H4
#define SMD4_TMR_T2H_TIM_T2H5    SMD4_TMR_T2H_bit.TIM_T2H5
#define SMD4_TMR_T2H_TIM_T2H6    SMD4_TMR_T2H_bit.TIM_T2H6
#define SMD4_TMR_T2H_TIM_T2H7    SMD4_TMR_T2H_bit.TIM_T2H7

#define SMD4_TMR_T3L_TIM_T3L0    SMD4_TMR_T3L_bit.TIM_T3L0
#define SMD4_TMR_T3L_TIM_T3L1    SMD4_TMR_T3L_bit.TIM_T3L1
#define SMD4_TMR_T3L_TIM_T3L2    SMD4_TMR_T3L_bit.TIM_T3L2
#define SMD4_TMR_T3L_TIM_T3L3    SMD4_TMR_T3L_bit.TIM_T3L3
#define SMD4_TMR_T3L_TIM_T3L4    SMD4_TMR_T3L_bit.TIM_T3L4
#define SMD4_TMR_T3L_TIM_T3L5    SMD4_TMR_T3L_bit.TIM_T3L5
#define SMD4_TMR_T3L_TIM_T3L6    SMD4_TMR_T3L_bit.TIM_T3L6
#define SMD4_TMR_T3L_TIM_T3L7    SMD4_TMR_T3L_bit.TIM_T3L7

#define SMD4_TMR_T3H_TIM_T3H0    SMD4_TMR_T3H_bit.TIM_T3H0
#define SMD4_TMR_T3H_TIM_T3H1    SMD4_TMR_T3H_bit.TIM_T3H1
#define SMD4_TMR_T3H_TIM_T3H2    SMD4_TMR_T3H_bit.TIM_T3H2
#define SMD4_TMR_T3H_TIM_T3H3    SMD4_TMR_T3H_bit.TIM_T3H3
#define SMD4_TMR_T3H_TIM_T3H4    SMD4_TMR_T3H_bit.TIM_T3H4
#define SMD4_TMR_T3H_TIM_T3H5    SMD4_TMR_T3H_bit.TIM_T3H5
#define SMD4_TMR_T3H_TIM_T3H6    SMD4_TMR_T3H_bit.TIM_T3H6
#define SMD4_TMR_T3H_TIM_T3H7    SMD4_TMR_T3H_bit.TIM_T3H7

#define SMD4_PRM_ID0_NX_STAT0    SMD4_PRM_ID0_bit.NX_STAT0
#define SMD4_PRM_ID0_NX_STAT1    SMD4_PRM_ID0_bit.NX_STAT1
#define SMD4_PRM_ID0_EDGE0       SMD4_PRM_ID0_bit.EDGE0
#define SMD4_PRM_ID0_EDGE1       SMD4_PRM_ID0_bit.EDGE1
#define SMD4_PRM_ID0_CNT_RSTE    SMD4_PRM_ID0_bit.CNT_RSTE
#define SMD4_PRM_ID0_PULS_EDG    SMD4_PRM_ID0_bit.PULS_EDG
#define SMD4_PRM_ID0_HOLD_JMP    SMD4_PRM_ID0_bit.HOLD_JMP
#define SMD4_PRM_ID0_AND_OR      SMD4_PRM_ID0_bit.AND_OR

#define SMD4_PRM_ID1_CEDGE0      SMD4_PRM_ID1_bit.CEDGE0
#define SMD4_PRM_ID1_CEDGE1      SMD4_PRM_ID1_bit.CEDGE1
#define SMD4_PRM_ID1_CNT_RSTC    SMD4_PRM_ID1_bit.CNT_RSTC
#define SMD4_PRM_ID1_PULS_CMP    SMD4_PRM_ID1_bit.PULS_CMP
#define SMD4_PRM_ID1_HOLD_EXIT   SMD4_PRM_ID1_bit.HOLD_EXIT

#define SMD4_PRM_ID2_LATCH_RS    SMD4_PRM_ID2_bit.LATCH_RS

#define SMD4_PRM_S00_NX_STAT0    SMD4_PRM_S00_bit.NX_STAT0
#define SMD4_PRM_S00_NX_STAT1    SMD4_PRM_S00_bit.NX_STAT1
#define SMD4_PRM_S00_EDGE0       SMD4_PRM_S00_bit.EDGE0
#define SMD4_PRM_S00_EDGE1       SMD4_PRM_S00_bit.EDGE1
#define SMD4_PRM_S00_CNT_RSTE    SMD4_PRM_S00_bit.CNT_RSTE
#define SMD4_PRM_S00_PULS_EDG    SMD4_PRM_S00_bit.PULS_EDG
#define SMD4_PRM_S00_HOLD_JMP    SMD4_PRM_S00_bit.HOLD_JMP
#define SMD4_PRM_S00_AND_OR      SMD4_PRM_S00_bit.AND_OR

#define SMD4_PRM_S01_CEDGE0      SMD4_PRM_S01_bit.CEDGE0
#define SMD4_PRM_S01_CEDGE1      SMD4_PRM_S01_bit.CEDGE1
#define SMD4_PRM_S01_CNT_RSTC    SMD4_PRM_S01_bit.CNT_RSTC
#define SMD4_PRM_S01_PULS_CMP    SMD4_PRM_S01_bit.PULS_CMP
#define SMD4_PRM_S01_HOLD_EXIT   SMD4_PRM_S01_bit.HOLD_EXIT

#define SMD4_PRM_S02_LATCH_RS    SMD4_PRM_S02_bit.LATCH_RS

#define SMD4_PRM_S10_NX_STAT0    SMD4_PRM_S10_bit.NX_STAT0
#define SMD4_PRM_S10_NX_STAT1    SMD4_PRM_S10_bit.NX_STAT1
#define SMD4_PRM_S10_EDGE0       SMD4_PRM_S10_bit.EDGE0
#define SMD4_PRM_S10_EDGE1       SMD4_PRM_S10_bit.EDGE1
#define SMD4_PRM_S10_CNT_RSTE    SMD4_PRM_S10_bit.CNT_RSTE
#define SMD4_PRM_S10_PULS_EDG    SMD4_PRM_S10_bit.PULS_EDG
#define SMD4_PRM_S10_HOLD_JMP    SMD4_PRM_S10_bit.HOLD_JMP
#define SMD4_PRM_S10_AND_OR      SMD4_PRM_S10_bit.AND_OR

#define SMD4_PRM_S11_CEDGE0      SMD4_PRM_S11_bit.CEDGE0
#define SMD4_PRM_S11_CEDGE1      SMD4_PRM_S11_bit.CEDGE1
#define SMD4_PRM_S11_CNT_RSTC    SMD4_PRM_S11_bit.CNT_RSTC
#define SMD4_PRM_S11_PULS_CMP    SMD4_PRM_S11_bit.PULS_CMP
#define SMD4_PRM_S11_HOLD_EXIT   SMD4_PRM_S11_bit.HOLD_EXIT

#define SMD4_PRM_S12_LATCH_RS    SMD4_PRM_S12_bit.LATCH_RS

#define SMD4_PRM_S20_NX_STAT0    SMD4_PRM_S20_bit.NX_STAT0
#define SMD4_PRM_S20_NX_STAT1    SMD4_PRM_S20_bit.NX_STAT1
#define SMD4_PRM_S20_EDGE0       SMD4_PRM_S20_bit.EDGE0
#define SMD4_PRM_S20_EDGE1       SMD4_PRM_S20_bit.EDGE1
#define SMD4_PRM_S20_CNT_RSTE    SMD4_PRM_S20_bit.CNT_RSTE
#define SMD4_PRM_S20_PULS_EDG    SMD4_PRM_S20_bit.PULS_EDG
#define SMD4_PRM_S20_HOLD_JMP    SMD4_PRM_S20_bit.HOLD_JMP
#define SMD4_PRM_S20_AND_OR      SMD4_PRM_S20_bit.AND_OR

#define SMD4_PRM_S21_CEDGE0      SMD4_PRM_S21_bit.CEDGE0
#define SMD4_PRM_S21_CEDGE1      SMD4_PRM_S21_bit.CEDGE1
#define SMD4_PRM_S21_CNT_RSTC    SMD4_PRM_S21_bit.CNT_RSTC
#define SMD4_PRM_S21_PULS_CMP    SMD4_PRM_S21_bit.PULS_CMP
#define SMD4_PRM_S21_HOLD_EXIT   SMD4_PRM_S21_bit.HOLD_EXIT

#define SMD4_PRM_S22_LATCH_RS    SMD4_PRM_S22_bit.LATCH_RS

#define SMD4_PRM_S30_NX_STAT0    SMD4_PRM_S30_bit.NX_STAT0
#define SMD4_PRM_S30_NX_STAT1    SMD4_PRM_S30_bit.NX_STAT1
#define SMD4_PRM_S30_EDGE0       SMD4_PRM_S30_bit.EDGE0
#define SMD4_PRM_S30_EDGE1       SMD4_PRM_S30_bit.EDGE1
#define SMD4_PRM_S30_CNT_RSTE    SMD4_PRM_S30_bit.CNT_RSTE
#define SMD4_PRM_S30_PULS_EDG    SMD4_PRM_S30_bit.PULS_EDG
#define SMD4_PRM_S30_HOLD_JMP    SMD4_PRM_S30_bit.HOLD_JMP
#define SMD4_PRM_S30_AND_OR      SMD4_PRM_S30_bit.AND_OR

#define SMD4_PRM_S31_CEDGE0      SMD4_PRM_S31_bit.CEDGE0
#define SMD4_PRM_S31_CEDGE1      SMD4_PRM_S31_bit.CEDGE1
#define SMD4_PRM_S31_CNT_RSTC    SMD4_PRM_S31_bit.CNT_RSTC
#define SMD4_PRM_S31_PULS_CMP    SMD4_PRM_S31_bit.PULS_CMP
#define SMD4_PRM_S31_HOLD_EXIT   SMD4_PRM_S31_bit.HOLD_EXIT

#define SMD4_PRM_S32_LATCH_RS    SMD4_PRM_S32_bit.LATCH_RS

#define SMD4_CFG_TIM_NUM0        SMD4_CFG_bit.TIM_NUM0
#define SMD4_CFG_TIM_NUM1        SMD4_CFG_bit.TIM_NUM1
#define SMD4_CFG_TIM_UPD0        SMD4_CFG_bit.TIM_UPD0
#define SMD4_CFG_TIM_UPD1        SMD4_CFG_bit.TIM_UPD1

#define SMD4_DMP_L_CNT_LO0       SMD4_DMP_L_bit.CNT_LO0
#define SMD4_DMP_L_CNT_LO1       SMD4_DMP_L_bit.CNT_LO1
#define SMD4_DMP_L_CNT_LO2       SMD4_DMP_L_bit.CNT_LO2
#define SMD4_DMP_L_CNT_LO3       SMD4_DMP_L_bit.CNT_LO3
#define SMD4_DMP_L_CNT_LO4       SMD4_DMP_L_bit.CNT_LO4
#define SMD4_DMP_L_CNT_LO5       SMD4_DMP_L_bit.CNT_LO5
#define SMD4_DMP_L_CNT_LO6       SMD4_DMP_L_bit.CNT_LO6
#define SMD4_DMP_L_CNT_LO7       SMD4_DMP_L_bit.CNT_LO7

#define SMD4_DMP_H_CNT_LH0       SMD4_DMP_H_bit.CNT_LH0
#define SMD4_DMP_H_CNT_LH1       SMD4_DMP_H_bit.CNT_LH1
#define SMD4_DMP_H_CNT_LH2       SMD4_DMP_H_bit.CNT_LH2
#define SMD4_DMP_H_CNT_LH3       SMD4_DMP_H_bit.CNT_LH3
#define SMD4_DMP_H_CNT_LH4       SMD4_DMP_H_bit.CNT_LH4
#define SMD4_DMP_H_CNT_LH5       SMD4_DMP_H_bit.CNT_LH5
#define SMD4_DMP_H_CNT_LH6       SMD4_DMP_H_bit.CNT_LH6
#define SMD4_DMP_H_CNT_LH7       SMD4_DMP_H_bit.CNT_LH7

#define SMD4_GSTS_EX0_DUMP       SMD4_GSTS_bit.EX0_DUMP
#define SMD4_GSTS_EX1_DUMP       SMD4_GSTS_bit.EX1_DUMP
#define SMD4_GSTS_EX2_DUMP       SMD4_GSTS_bit.EX2_DUMP
#define SMD4_GSTS_CNT_FLAG       SMD4_GSTS_bit.CNT_FLAG
#define SMD4_GSTS_DMP_LK0        SMD4_GSTS_bit.DMP_LK0
#define SMD4_GSTS_DMP_LK1        SMD4_GSTS_bit.DMP_LK1
#define SMD4_GSTS_EVENT_OV       SMD4_GSTS_bit.EVENT_OV

#define SMD4_ISR_CNT_OVER        SMD4_ISR_bit.CNT_OVER
#define SMD4_ISR_EXT0_INT        SMD4_ISR_bit.EXT0_INT
#define SMD4_ISR_EXT1_INT        SMD4_ISR_bit.EXT1_INT
#define SMD4_ISR_EXT2_INT        SMD4_ISR_bit.EXT2_INT
#define SMD4_ISR_STA_S0_IT       SMD4_ISR_bit.STA_S0_IT
#define SMD4_ISR_STA_S1_IT       SMD4_ISR_bit.STA_S1_IT
#define SMD4_ISR_STA_S2_IT       SMD4_ISR_bit.STA_S2_IT
#define SMD4_ISR_STA_S3_IT       SMD4_ISR_bit.STA_S3_IT

#define SMD4_IMR_CNT_OV_R        SMD4_IMR_bit.CNT_OV_R
#define SMD4_IMR_IT_EXT0         SMD4_IMR_bit.IT_EXT0
#define SMD4_IMR_IT_EXT1         SMD4_IMR_bit.IT_EXT1
#define SMD4_IMR_IT_EXT2         SMD4_IMR_bit.IT_EXT2
#define SMD4_IMR_IT_STA_S0       SMD4_IMR_bit.IT_STA_S0
#define SMD4_IMR_IT_STA_S1       SMD4_IMR_bit.IT_STA_S1
#define SMD4_IMR_IT_STA_S2       SMD4_IMR_bit.IT_STA_S2
#define SMD4_IMR_IT_STA_S3       SMD4_IMR_bit.IT_STA_S3

#define SMD4_ISEL_INPUT0_EN      SMD4_ISEL_bit.INPUT0_EN
#define SMD4_ISEL_INPUT1_EN      SMD4_ISEL_bit.INPUT1_EN
#define SMD4_ISEL_INPUT2_EN      SMD4_ISEL_bit.INPUT2_EN
#define SMD4_ISEL_INPUT_LAT      SMD4_ISEL_bit.INPUT_LAT

#define SMD4_DMP_DMPE_EX0        SMD4_DMP_bit.DMPE_EX0
#define SMD4_DMP_DMPE_EX1        SMD4_DMP_bit.DMPE_EX1
#define SMD4_DMP_DMPE_EX2        SMD4_DMP_bit.DMPE_EX2
#define SMD4_DMP_DMP_EVER        SMD4_DMP_bit.DMP_EVER
#define SMD4_DMP_CPL_IT_GE       SMD4_DMP_bit.CPL_IT_GE

#define SMD4_FSM_STS_FSM0        SMD4_FSM_STS_bit.FSM0
#define SMD4_FSM_STS_FSM1        SMD4_FSM_STS_bit.FSM1
#define SMD4_FSM_STS_FSM2        SMD4_FSM_STS_bit.FSM2
#define SMD4_FSM_STS_PWM         SMD4_FSM_STS_bit.PWM
#define SMD4_FSM_STS_EVINP0      SMD4_FSM_STS_bit.EVINP0
#define SMD4_FSM_STS_EVINP1      SMD4_FSM_STS_bit.EVINP1
#define SMD4_FSM_STS_EVINP2      SMD4_FSM_STS_bit.EVINP2

#endif

/*-------------------------------------------------------------------------
 *      SMED 4 Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SMD4_CTR_START_CNT  0x01
#define MASK_SMD4_CTR_FSM_ENA    0x02

#define MASK_SMD4_CTR_TMR_TIME_T0_VAL 0x01
#define MASK_SMD4_CTR_TMR_TIME_T1_VAL 0x02
#define MASK_SMD4_CTR_TMR_TIME_T2_VAL 0x04
#define MASK_SMD4_CTR_TMR_TIME_T3_VAL 0x08
#define MASK_SMD4_CTR_TMR_DITHER_VAL 0x10

#define MASK_SMD4_CTR_INP_RS_INSIG0 0x01
#define MASK_SMD4_CTR_INP_RS_INSIG1 0x02
#define MASK_SMD4_CTR_INP_RS_INSIG2 0x04
#define MASK_SMD4_CTR_INP_RAIS_EN 0x08
#define MASK_SMD4_CTR_INP_EL_INSIG0 0x10
#define MASK_SMD4_CTR_INP_EL_INSIG1 0x20
#define MASK_SMD4_CTR_INP_EL_INSIG2 0x40
#define MASK_SMD4_CTR_INP_EL_EN  0x80

#define MASK_SMD4_CTR_DTHR_DITH0 0x01
#define MASK_SMD4_CTR_DTHR_DITH1 0x02
#define MASK_SMD4_CTR_DTHR_DITH2 0x04
#define MASK_SMD4_CTR_DTHR_DITH3 0x08
#define MASK_SMD4_CTR_DTHR_DITH4 0x10
#define MASK_SMD4_CTR_DTHR_DITH5 0x20
#define MASK_SMD4_CTR_DTHR_DITH6 0x40
#define MASK_SMD4_CTR_DTHR_DITH7 0x80

#define MASK_SMD4_TMR_T0L_TIM_T0L0 0x01
#define MASK_SMD4_TMR_T0L_TIM_T0L1 0x02
#define MASK_SMD4_TMR_T0L_TIM_T0L2 0x04
#define MASK_SMD4_TMR_T0L_TIM_T0L3 0x08
#define MASK_SMD4_TMR_T0L_TIM_T0L4 0x10
#define MASK_SMD4_TMR_T0L_TIM_T0L5 0x20
#define MASK_SMD4_TMR_T0L_TIM_T0L6 0x40
#define MASK_SMD4_TMR_T0L_TIM_T0L7 0x80

#define MASK_SMD4_TMR_T0H_TIM_T0H0 0x01
#define MASK_SMD4_TMR_T0H_TIM_T0H1 0x02
#define MASK_SMD4_TMR_T0H_TIM_T0H2 0x04
#define MASK_SMD4_TMR_T0H_TIM_T0H3 0x08
#define MASK_SMD4_TMR_T0H_TIM_T0H4 0x10
#define MASK_SMD4_TMR_T0H_TIM_T0H5 0x20
#define MASK_SMD4_TMR_T0H_TIM_T0H6 0x40
#define MASK_SMD4_TMR_T0H_TIM_T0H7 0x80

#define MASK_SMD4_TMR_T1L_TIM_T1L0 0x01
#define MASK_SMD4_TMR_T1L_TIM_T1L1 0x02
#define MASK_SMD4_TMR_T1L_TIM_T1L2 0x04
#define MASK_SMD4_TMR_T1L_TIM_T1L3 0x08
#define MASK_SMD4_TMR_T1L_TIM_T1L4 0x10
#define MASK_SMD4_TMR_T1L_TIM_T1L5 0x20
#define MASK_SMD4_TMR_T1L_TIM_T1L6 0x40
#define MASK_SMD4_TMR_T1L_TIM_T1L7 0x80

#define MASK_SMD4_TMR_T1H_TIM_T1H0 0x01
#define MASK_SMD4_TMR_T1H_TIM_T1H1 0x02
#define MASK_SMD4_TMR_T1H_TIM_T1H2 0x04
#define MASK_SMD4_TMR_T1H_TIM_T1H3 0x08
#define MASK_SMD4_TMR_T1H_TIM_T1H4 0x10
#define MASK_SMD4_TMR_T1H_TIM_T1H5 0x20
#define MASK_SMD4_TMR_T1H_TIM_T1H6 0x40
#define MASK_SMD4_TMR_T1H_TIM_T1H7 0x80

#define MASK_SMD4_TMR_T2L_TIM_T2L0 0x01
#define MASK_SMD4_TMR_T2L_TIM_T2L1 0x02
#define MASK_SMD4_TMR_T2L_TIM_T2L2 0x04
#define MASK_SMD4_TMR_T2L_TIM_T2L3 0x08
#define MASK_SMD4_TMR_T2L_TIM_T2L4 0x10
#define MASK_SMD4_TMR_T2L_TIM_T2L5 0x20
#define MASK_SMD4_TMR_T2L_TIM_T2L6 0x40
#define MASK_SMD4_TMR_T2L_TIM_T2L7 0x80

#define MASK_SMD4_TMR_T2H_TIM_T2H0 0x01
#define MASK_SMD4_TMR_T2H_TIM_T2H1 0x02
#define MASK_SMD4_TMR_T2H_TIM_T2H2 0x04
#define MASK_SMD4_TMR_T2H_TIM_T2H3 0x08
#define MASK_SMD4_TMR_T2H_TIM_T2H4 0x10
#define MASK_SMD4_TMR_T2H_TIM_T2H5 0x20
#define MASK_SMD4_TMR_T2H_TIM_T2H6 0x40
#define MASK_SMD4_TMR_T2H_TIM_T2H7 0x80

#define MASK_SMD4_TMR_T3L_TIM_T3L0 0x01
#define MASK_SMD4_TMR_T3L_TIM_T3L1 0x02
#define MASK_SMD4_TMR_T3L_TIM_T3L2 0x04
#define MASK_SMD4_TMR_T3L_TIM_T3L3 0x08
#define MASK_SMD4_TMR_T3L_TIM_T3L4 0x10
#define MASK_SMD4_TMR_T3L_TIM_T3L5 0x20
#define MASK_SMD4_TMR_T3L_TIM_T3L6 0x40
#define MASK_SMD4_TMR_T3L_TIM_T3L7 0x80

#define MASK_SMD4_TMR_T3H_TIM_T3H0 0x01
#define MASK_SMD4_TMR_T3H_TIM_T3H1 0x02
#define MASK_SMD4_TMR_T3H_TIM_T3H2 0x04
#define MASK_SMD4_TMR_T3H_TIM_T3H3 0x08
#define MASK_SMD4_TMR_T3H_TIM_T3H4 0x10
#define MASK_SMD4_TMR_T3H_TIM_T3H5 0x20
#define MASK_SMD4_TMR_T3H_TIM_T3H6 0x40
#define MASK_SMD4_TMR_T3H_TIM_T3H7 0x80

#define MASK_SMD4_PRM_ID0_NX_STAT0 0x01
#define MASK_SMD4_PRM_ID0_NX_STAT1 0x02
#define MASK_SMD4_PRM_ID0_EDGE0  0x04
#define MASK_SMD4_PRM_ID0_EDGE1  0x08
#define MASK_SMD4_PRM_ID0_CNT_RSTE 0x10
#define MASK_SMD4_PRM_ID0_PULS_EDG 0x20
#define MASK_SMD4_PRM_ID0_HOLD_JMP 0x40
#define MASK_SMD4_PRM_ID0_AND_OR 0x80

#define MASK_SMD4_PRM_ID1_CEDGE0 0x04
#define MASK_SMD4_PRM_ID1_CEDGE1 0x08
#define MASK_SMD4_PRM_ID1_CNT_RSTC 0x10
#define MASK_SMD4_PRM_ID1_PULS_CMP 0x20
#define MASK_SMD4_PRM_ID1_HOLD_EXIT 0x40

#define MASK_SMD4_PRM_ID2_LATCH_RS 0x01

#define MASK_SMD4_PRM_S00_NX_STAT0 0x01
#define MASK_SMD4_PRM_S00_NX_STAT1 0x02
#define MASK_SMD4_PRM_S00_EDGE0  0x04
#define MASK_SMD4_PRM_S00_EDGE1  0x08
#define MASK_SMD4_PRM_S00_CNT_RSTE 0x10
#define MASK_SMD4_PRM_S00_PULS_EDG 0x20
#define MASK_SMD4_PRM_S00_HOLD_JMP 0x40
#define MASK_SMD4_PRM_S00_AND_OR 0x80

#define MASK_SMD4_PRM_S01_CEDGE0 0x04
#define MASK_SMD4_PRM_S01_CEDGE1 0x08
#define MASK_SMD4_PRM_S01_CNT_RSTC 0x10
#define MASK_SMD4_PRM_S01_PULS_CMP 0x20
#define MASK_SMD4_PRM_S01_HOLD_EXIT 0x40

#define MASK_SMD4_PRM_S02_LATCH_RS 0x01

#define MASK_SMD4_PRM_S10_NX_STAT0 0x01
#define MASK_SMD4_PRM_S10_NX_STAT1 0x02
#define MASK_SMD4_PRM_S10_EDGE0  0x04
#define MASK_SMD4_PRM_S10_EDGE1  0x08
#define MASK_SMD4_PRM_S10_CNT_RSTE 0x10
#define MASK_SMD4_PRM_S10_PULS_EDG 0x20
#define MASK_SMD4_PRM_S10_HOLD_JMP 0x40
#define MASK_SMD4_PRM_S10_AND_OR 0x80

#define MASK_SMD4_PRM_S11_CEDGE0 0x04
#define MASK_SMD4_PRM_S11_CEDGE1 0x08
#define MASK_SMD4_PRM_S11_CNT_RSTC 0x10
#define MASK_SMD4_PRM_S11_PULS_CMP 0x20
#define MASK_SMD4_PRM_S11_HOLD_EXIT 0x40

#define MASK_SMD4_PRM_S12_LATCH_RS 0x01

#define MASK_SMD4_PRM_S20_NX_STAT0 0x01
#define MASK_SMD4_PRM_S20_NX_STAT1 0x02
#define MASK_SMD4_PRM_S20_EDGE0  0x04
#define MASK_SMD4_PRM_S20_EDGE1  0x08
#define MASK_SMD4_PRM_S20_CNT_RSTE 0x10
#define MASK_SMD4_PRM_S20_PULS_EDG 0x20
#define MASK_SMD4_PRM_S20_HOLD_JMP 0x40
#define MASK_SMD4_PRM_S20_AND_OR 0x80

#define MASK_SMD4_PRM_S21_CEDGE0 0x04
#define MASK_SMD4_PRM_S21_CEDGE1 0x08
#define MASK_SMD4_PRM_S21_CNT_RSTC 0x10
#define MASK_SMD4_PRM_S21_PULS_CMP 0x20
#define MASK_SMD4_PRM_S21_HOLD_EXIT 0x40

#define MASK_SMD4_PRM_S22_LATCH_RS 0x01

#define MASK_SMD4_PRM_S30_NX_STAT0 0x01
#define MASK_SMD4_PRM_S30_NX_STAT1 0x02
#define MASK_SMD4_PRM_S30_EDGE0  0x04
#define MASK_SMD4_PRM_S30_EDGE1  0x08
#define MASK_SMD4_PRM_S30_CNT_RSTE 0x10
#define MASK_SMD4_PRM_S30_PULS_EDG 0x20
#define MASK_SMD4_PRM_S30_HOLD_JMP 0x40
#define MASK_SMD4_PRM_S30_AND_OR 0x80

#define MASK_SMD4_PRM_S31_CEDGE0 0x04
#define MASK_SMD4_PRM_S31_CEDGE1 0x08
#define MASK_SMD4_PRM_S31_CNT_RSTC 0x10
#define MASK_SMD4_PRM_S31_PULS_CMP 0x20
#define MASK_SMD4_PRM_S31_HOLD_EXIT 0x40

#define MASK_SMD4_PRM_S32_LATCH_RS 0x01

#define MASK_SMD4_CFG_TIM_NUM0   0x02
#define MASK_SMD4_CFG_TIM_NUM1   0x04
#define MASK_SMD4_CFG_TIM_UPD0   0x08
#define MASK_SMD4_CFG_TIM_UPD1   0x10

#define MASK_SMD4_DMP_L_CNT_LO0  0x01
#define MASK_SMD4_DMP_L_CNT_LO1  0x02
#define MASK_SMD4_DMP_L_CNT_LO2  0x04
#define MASK_SMD4_DMP_L_CNT_LO3  0x08
#define MASK_SMD4_DMP_L_CNT_LO4  0x10
#define MASK_SMD4_DMP_L_CNT_LO5  0x20
#define MASK_SMD4_DMP_L_CNT_LO6  0x40
#define MASK_SMD4_DMP_L_CNT_LO7  0x80

#define MASK_SMD4_DMP_H_CNT_LH0  0x01
#define MASK_SMD4_DMP_H_CNT_LH1  0x02
#define MASK_SMD4_DMP_H_CNT_LH2  0x04
#define MASK_SMD4_DMP_H_CNT_LH3  0x08
#define MASK_SMD4_DMP_H_CNT_LH4  0x10
#define MASK_SMD4_DMP_H_CNT_LH5  0x20
#define MASK_SMD4_DMP_H_CNT_LH6  0x40
#define MASK_SMD4_DMP_H_CNT_LH7  0x80

#define MASK_SMD4_GSTS_EX0_DUMP  0x01
#define MASK_SMD4_GSTS_EX1_DUMP  0x02
#define MASK_SMD4_GSTS_EX2_DUMP  0x04
#define MASK_SMD4_GSTS_CNT_FLAG  0x08
#define MASK_SMD4_GSTS_DMP_LK0   0x10
#define MASK_SMD4_GSTS_DMP_LK1   0x20
#define MASK_SMD4_GSTS_EVENT_OV  0x40

#define MASK_SMD4_ISR_CNT_OVER   0x01
#define MASK_SMD4_ISR_EXT0_INT   0x02
#define MASK_SMD4_ISR_EXT1_INT   0x04
#define MASK_SMD4_ISR_EXT2_INT   0x08
#define MASK_SMD4_ISR_STA_S0_IT  0x10
#define MASK_SMD4_ISR_STA_S1_IT  0x20
#define MASK_SMD4_ISR_STA_S2_IT  0x40
#define MASK_SMD4_ISR_STA_S3_IT  0x80

#define MASK_SMD4_IMR_CNT_OV_R   0x01
#define MASK_SMD4_IMR_IT_EXT0    0x02
#define MASK_SMD4_IMR_IT_EXT1    0x04
#define MASK_SMD4_IMR_IT_EXT2    0x08
#define MASK_SMD4_IMR_IT_STA_S0  0x10
#define MASK_SMD4_IMR_IT_STA_S1  0x20
#define MASK_SMD4_IMR_IT_STA_S2  0x40
#define MASK_SMD4_IMR_IT_STA_S3  0x80

#define MASK_SMD4_ISEL_INPUT0_EN 0x01
#define MASK_SMD4_ISEL_INPUT1_EN 0x02
#define MASK_SMD4_ISEL_INPUT2_EN 0x04
#define MASK_SMD4_ISEL_INPUT_LAT 0x08

#define MASK_SMD4_DMP_DMPE_EX0   0x01
#define MASK_SMD4_DMP_DMPE_EX1   0x02
#define MASK_SMD4_DMP_DMPE_EX2   0x04
#define MASK_SMD4_DMP_DMP_EVER   0x08
#define MASK_SMD4_DMP_CPL_IT_GE  0x10

#define MASK_SMD4_FSM_STS_FSM0   0x01
#define MASK_SMD4_FSM_STS_FSM1   0x02
#define MASK_SMD4_FSM_STS_FSM2   0x04
#define MASK_SMD4_FSM_STS_PWM    0x08
#define MASK_SMD4_FSM_STS_EVINP0 0x10
#define MASK_SMD4_FSM_STS_EVINP1 0x20
#define MASK_SMD4_FSM_STS_EVINP2 0x40


/*-------------------------------------------------------------------------
 *      SMED 5 Registers register definitions
 *-----------------------------------------------------------------------*/
/* Control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START_CNT   : 1;
  unsigned char FSM_ENA     : 1;
} __BITS_SMD5_CTR;
#endif
__IO_REG8_BIT(SMD5_CTR,    0x5640, __READ_WRITE, __BITS_SMD5_CTR);

/* Control timer register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIME_T0_VAL : 1;
  unsigned char TIME_T1_VAL : 1;
  unsigned char TIME_T2_VAL : 1;
  unsigned char TIME_T3_VAL : 1;
  unsigned char DITHER_VAL  : 1;
} __BITS_SMD5_CTR_TMR;
#endif
__IO_REG8_BIT(SMD5_CTR_TMR, 0x5641, __READ_WRITE, __BITS_SMD5_CTR_TMR);

/* Control input register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RS_INSIG0   : 1;
  unsigned char RS_INSIG1   : 1;
  unsigned char RS_INSIG2   : 1;
  unsigned char RAIS_EN     : 1;
  unsigned char EL_INSIG0   : 1;
  unsigned char EL_INSIG1   : 1;
  unsigned char EL_INSIG2   : 1;
  unsigned char EL_EN       : 1;
} __BITS_SMD5_CTR_INP;
#endif
__IO_REG8_BIT(SMD5_CTR_INP, 0x5642, __READ_WRITE, __BITS_SMD5_CTR_INP);

/* Dithering register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DITH0       : 1;
  unsigned char DITH1       : 1;
  unsigned char DITH2       : 1;
  unsigned char DITH3       : 1;
  unsigned char DITH4       : 1;
  unsigned char DITH5       : 1;
  unsigned char DITH6       : 1;
  unsigned char DITH7       : 1;
} __BITS_SMD5_CTR_DTHR;
#endif
__IO_REG8_BIT(SMD5_CTR_DTHR, 0x5643, __READ_WRITE, __BITS_SMD5_CTR_DTHR);

/* Time T0 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0L0    : 1;
  unsigned char TIM_T0L1    : 1;
  unsigned char TIM_T0L2    : 1;
  unsigned char TIM_T0L3    : 1;
  unsigned char TIM_T0L4    : 1;
  unsigned char TIM_T0L5    : 1;
  unsigned char TIM_T0L6    : 1;
  unsigned char TIM_T0L7    : 1;
} __BITS_SMD5_TMR_T0L;
#endif
__IO_REG8_BIT(SMD5_TMR_T0L, 0x5644, __READ_WRITE, __BITS_SMD5_TMR_T0L);

/* Time T0 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T0H0    : 1;
  unsigned char TIM_T0H1    : 1;
  unsigned char TIM_T0H2    : 1;
  unsigned char TIM_T0H3    : 1;
  unsigned char TIM_T0H4    : 1;
  unsigned char TIM_T0H5    : 1;
  unsigned char TIM_T0H6    : 1;
  unsigned char TIM_T0H7    : 1;
} __BITS_SMD5_TMR_T0H;
#endif
__IO_REG8_BIT(SMD5_TMR_T0H, 0x5645, __READ_WRITE, __BITS_SMD5_TMR_T0H);

/* Time T1 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1L0    : 1;
  unsigned char TIM_T1L1    : 1;
  unsigned char TIM_T1L2    : 1;
  unsigned char TIM_T1L3    : 1;
  unsigned char TIM_T1L4    : 1;
  unsigned char TIM_T1L5    : 1;
  unsigned char TIM_T1L6    : 1;
  unsigned char TIM_T1L7    : 1;
} __BITS_SMD5_TMR_T1L;
#endif
__IO_REG8_BIT(SMD5_TMR_T1L, 0x5646, __READ_WRITE, __BITS_SMD5_TMR_T1L);

/* Time T1 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T1H0    : 1;
  unsigned char TIM_T1H1    : 1;
  unsigned char TIM_T1H2    : 1;
  unsigned char TIM_T1H3    : 1;
  unsigned char TIM_T1H4    : 1;
  unsigned char TIM_T1H5    : 1;
  unsigned char TIM_T1H6    : 1;
  unsigned char TIM_T1H7    : 1;
} __BITS_SMD5_TMR_T1H;
#endif
__IO_REG8_BIT(SMD5_TMR_T1H, 0x5647, __READ_WRITE, __BITS_SMD5_TMR_T1H);

/* Time T2 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2L0    : 1;
  unsigned char TIM_T2L1    : 1;
  unsigned char TIM_T2L2    : 1;
  unsigned char TIM_T2L3    : 1;
  unsigned char TIM_T2L4    : 1;
  unsigned char TIM_T2L5    : 1;
  unsigned char TIM_T2L6    : 1;
  unsigned char TIM_T2L7    : 1;
} __BITS_SMD5_TMR_T2L;
#endif
__IO_REG8_BIT(SMD5_TMR_T2L, 0x5648, __READ_WRITE, __BITS_SMD5_TMR_T2L);

/* Time T2 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T2H0    : 1;
  unsigned char TIM_T2H1    : 1;
  unsigned char TIM_T2H2    : 1;
  unsigned char TIM_T2H3    : 1;
  unsigned char TIM_T2H4    : 1;
  unsigned char TIM_T2H5    : 1;
  unsigned char TIM_T2H6    : 1;
  unsigned char TIM_T2H7    : 1;
} __BITS_SMD5_TMR_T2H;
#endif
__IO_REG8_BIT(SMD5_TMR_T2H, 0x5649, __READ_WRITE, __BITS_SMD5_TMR_T2H);

/* Time T3 lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3L0    : 1;
  unsigned char TIM_T3L1    : 1;
  unsigned char TIM_T3L2    : 1;
  unsigned char TIM_T3L3    : 1;
  unsigned char TIM_T3L4    : 1;
  unsigned char TIM_T3L5    : 1;
  unsigned char TIM_T3L6    : 1;
  unsigned char TIM_T3L7    : 1;
} __BITS_SMD5_TMR_T3L;
#endif
__IO_REG8_BIT(SMD5_TMR_T3L, 0x564A, __READ_WRITE, __BITS_SMD5_TMR_T3L);

/* Time T3 msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM_T3H0    : 1;
  unsigned char TIM_T3H1    : 1;
  unsigned char TIM_T3H2    : 1;
  unsigned char TIM_T3H3    : 1;
  unsigned char TIM_T3H4    : 1;
  unsigned char TIM_T3H5    : 1;
  unsigned char TIM_T3H6    : 1;
  unsigned char TIM_T3H7    : 1;
} __BITS_SMD5_TMR_T3H;
#endif
__IO_REG8_BIT(SMD5_TMR_T3H, 0x564B, __READ_WRITE, __BITS_SMD5_TMR_T3H);

/* Parameter 0 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD5_PRM_ID0;
#endif
__IO_REG8_BIT(SMD5_PRM_ID0, 0x564C, __READ_WRITE, __BITS_SMD5_PRM_ID0);

/* Parameter 1 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD5_PRM_ID1;
#endif
__IO_REG8_BIT(SMD5_PRM_ID1, 0x564D, __READ_WRITE, __BITS_SMD5_PRM_ID1);

/* Parameter 2 IDLE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD5_PRM_ID2;
#endif
__IO_REG8_BIT(SMD5_PRM_ID2, 0x564E, __READ_WRITE, __BITS_SMD5_PRM_ID2);

/* Parameter 0 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD5_PRM_S00;
#endif
__IO_REG8_BIT(SMD5_PRM_S00, 0x564F, __READ_WRITE, __BITS_SMD5_PRM_S00);

/* Parameter 1 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD5_PRM_S01;
#endif
__IO_REG8_BIT(SMD5_PRM_S01, 0x5650, __READ_WRITE, __BITS_SMD5_PRM_S01);

/* Parameter 2 S0 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD5_PRM_S02;
#endif
__IO_REG8_BIT(SMD5_PRM_S02, 0x5651, __READ_WRITE, __BITS_SMD5_PRM_S02);

/* Parameter 0 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD5_PRM_S10;
#endif
__IO_REG8_BIT(SMD5_PRM_S10, 0x5652, __READ_WRITE, __BITS_SMD5_PRM_S10);

/* Parameter 1 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD5_PRM_S11;
#endif
__IO_REG8_BIT(SMD5_PRM_S11, 0x5653, __READ_WRITE, __BITS_SMD5_PRM_S11);

/* Parameter 2 S1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD5_PRM_S12;
#endif
__IO_REG8_BIT(SMD5_PRM_S12, 0x5654, __READ_WRITE, __BITS_SMD5_PRM_S12);

/* Parameter 0 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD5_PRM_S20;
#endif
__IO_REG8_BIT(SMD5_PRM_S20, 0x5655, __READ_WRITE, __BITS_SMD5_PRM_S20);

/* Parameter 1 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD5_PRM_S21;
#endif
__IO_REG8_BIT(SMD5_PRM_S21, 0x5656, __READ_WRITE, __BITS_SMD5_PRM_S21);

/* Parameter 2 S2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD5_PRM_S22;
#endif
__IO_REG8_BIT(SMD5_PRM_S22, 0x5657, __READ_WRITE, __BITS_SMD5_PRM_S22);

/* Parameter 0 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NX_STAT0    : 1;
  unsigned char NX_STAT1    : 1;
  unsigned char EDGE0       : 1;
  unsigned char EDGE1       : 1;
  unsigned char CNT_RSTE    : 1;
  unsigned char PULS_EDG    : 1;
  unsigned char HOLD_JMP    : 1;
  unsigned char AND_OR      : 1;
} __BITS_SMD5_PRM_S30;
#endif
__IO_REG8_BIT(SMD5_PRM_S30, 0x5658, __READ_WRITE, __BITS_SMD5_PRM_S30);

/* Parameter 1 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char CEDGE0      : 1;
  unsigned char CEDGE1      : 1;
  unsigned char CNT_RSTC    : 1;
  unsigned char PULS_CMP    : 1;
  unsigned char HOLD_EXIT   : 1;
} __BITS_SMD5_PRM_S31;
#endif
__IO_REG8_BIT(SMD5_PRM_S31, 0x5659, __READ_WRITE, __BITS_SMD5_PRM_S31);

/* Parameter 2 S3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LATCH_RS    : 1;
} __BITS_SMD5_PRM_S32;
#endif
__IO_REG8_BIT(SMD5_PRM_S32, 0x565A, __READ_WRITE, __BITS_SMD5_PRM_S32);

/* Timer configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TIM_NUM0    : 1;
  unsigned char TIM_NUM1    : 1;
  unsigned char TIM_UPD0    : 1;
  unsigned char TIM_UPD1    : 1;
} __BITS_SMD5_CFG;
#endif
__IO_REG8_BIT(SMD5_CFG,    0x565B, __READ_WRITE, __BITS_SMD5_CFG);

/* Dump counter lsb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LO0     : 1;
  unsigned char CNT_LO1     : 1;
  unsigned char CNT_LO2     : 1;
  unsigned char CNT_LO3     : 1;
  unsigned char CNT_LO4     : 1;
  unsigned char CNT_LO5     : 1;
  unsigned char CNT_LO6     : 1;
  unsigned char CNT_LO7     : 1;
} __BITS_SMD5_DMP_L;
#endif
__IO_REG8_BIT(SMD5_DMP_L,  0x565C, __READ, __BITS_SMD5_DMP_L);

/* Dump counter msb register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_LH0     : 1;
  unsigned char CNT_LH1     : 1;
  unsigned char CNT_LH2     : 1;
  unsigned char CNT_LH3     : 1;
  unsigned char CNT_LH4     : 1;
  unsigned char CNT_LH5     : 1;
  unsigned char CNT_LH6     : 1;
  unsigned char CNT_LH7     : 1;
} __BITS_SMD5_DMP_H;
#endif
__IO_REG8_BIT(SMD5_DMP_H,  0x565D, __READ, __BITS_SMD5_DMP_H);

/* General status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EX0_DUMP    : 1;
  unsigned char EX1_DUMP    : 1;
  unsigned char EX2_DUMP    : 1;
  unsigned char CNT_FLAG    : 1;
  unsigned char DMP_LK0     : 1;
  unsigned char DMP_LK1     : 1;
  unsigned char EVENT_OV    : 1;
} __BITS_SMD5_GSTS;
#endif
__IO_REG8_BIT(SMD5_GSTS,   0x565E, __READ_WRITE, __BITS_SMD5_GSTS);

/* Interrupt status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OVER    : 1;
  unsigned char EXT0_INT    : 1;
  unsigned char EXT1_INT    : 1;
  unsigned char EXT2_INT    : 1;
  unsigned char STA_S0_IT   : 1;
  unsigned char STA_S1_IT   : 1;
  unsigned char STA_S2_IT   : 1;
  unsigned char STA_S3_IT   : 1;
} __BITS_SMD5_ISR;
#endif
__IO_REG8_BIT(SMD5_ISR,    0x565F, __READ_WRITE, __BITS_SMD5_ISR);

/* Interrupt mask register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT_OV_R    : 1;
  unsigned char IT_EXT0     : 1;
  unsigned char IT_EXT1     : 1;
  unsigned char IT_EXT2     : 1;
  unsigned char IT_STA_S0   : 1;
  unsigned char IT_STA_S1   : 1;
  unsigned char IT_STA_S2   : 1;
  unsigned char IT_STA_S3   : 1;
} __BITS_SMD5_IMR;
#endif
__IO_REG8_BIT(SMD5_IMR,    0x5660, __READ_WRITE, __BITS_SMD5_IMR);

/* External event control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INPUT0_EN   : 1;
  unsigned char INPUT1_EN   : 1;
  unsigned char INPUT2_EN   : 1;
  unsigned char INPUT_LAT   : 1;
} __BITS_SMD5_ISEL;
#endif
__IO_REG8_BIT(SMD5_ISEL,   0x5661, __READ_WRITE, __BITS_SMD5_ISEL);

/* Dump enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DMPE_EX0    : 1;
  unsigned char DMPE_EX1    : 1;
  unsigned char DMPE_EX2    : 1;
  unsigned char DMP_EVER    : 1;
  unsigned char CPL_IT_GE   : 1;
} __BITS_SMD5_DMP;
#endif
__IO_REG8_BIT(SMD5_DMP,    0x5662, __READ_WRITE, __BITS_SMD5_DMP);

/* FSM status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FSM0        : 1;
  unsigned char FSM1        : 1;
  unsigned char FSM2        : 1;
  unsigned char PWM         : 1;
  unsigned char EVINP0      : 1;
  unsigned char EVINP1      : 1;
  unsigned char EVINP2      : 1;
} __BITS_SMD5_FSM_STS;
#endif
__IO_REG8_BIT(SMD5_FSM_STS, 0x5663, __READ, __BITS_SMD5_FSM_STS);


/*-------------------------------------------------------------------------
 *      SMED 5 Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SMD5_CTR_START_CNT       SMD5_CTR_bit.START_CNT
#define SMD5_CTR_FSM_ENA         SMD5_CTR_bit.FSM_ENA

#define SMD5_CTR_TMR_TIME_T0_VAL SMD5_CTR_TMR_bit.TIME_T0_VAL
#define SMD5_CTR_TMR_TIME_T1_VAL SMD5_CTR_TMR_bit.TIME_T1_VAL
#define SMD5_CTR_TMR_TIME_T2_VAL SMD5_CTR_TMR_bit.TIME_T2_VAL
#define SMD5_CTR_TMR_TIME_T3_VAL SMD5_CTR_TMR_bit.TIME_T3_VAL
#define SMD5_CTR_TMR_DITHER_VAL  SMD5_CTR_TMR_bit.DITHER_VAL

#define SMD5_CTR_INP_RS_INSIG0   SMD5_CTR_INP_bit.RS_INSIG0
#define SMD5_CTR_INP_RS_INSIG1   SMD5_CTR_INP_bit.RS_INSIG1
#define SMD5_CTR_INP_RS_INSIG2   SMD5_CTR_INP_bit.RS_INSIG2
#define SMD5_CTR_INP_RAIS_EN     SMD5_CTR_INP_bit.RAIS_EN
#define SMD5_CTR_INP_EL_INSIG0   SMD5_CTR_INP_bit.EL_INSIG0
#define SMD5_CTR_INP_EL_INSIG1   SMD5_CTR_INP_bit.EL_INSIG1
#define SMD5_CTR_INP_EL_INSIG2   SMD5_CTR_INP_bit.EL_INSIG2
#define SMD5_CTR_INP_EL_EN       SMD5_CTR_INP_bit.EL_EN

#define SMD5_CTR_DTHR_DITH0      SMD5_CTR_DTHR_bit.DITH0
#define SMD5_CTR_DTHR_DITH1      SMD5_CTR_DTHR_bit.DITH1
#define SMD5_CTR_DTHR_DITH2      SMD5_CTR_DTHR_bit.DITH2
#define SMD5_CTR_DTHR_DITH3      SMD5_CTR_DTHR_bit.DITH3
#define SMD5_CTR_DTHR_DITH4      SMD5_CTR_DTHR_bit.DITH4
#define SMD5_CTR_DTHR_DITH5      SMD5_CTR_DTHR_bit.DITH5
#define SMD5_CTR_DTHR_DITH6      SMD5_CTR_DTHR_bit.DITH6
#define SMD5_CTR_DTHR_DITH7      SMD5_CTR_DTHR_bit.DITH7

#define SMD5_TMR_T0L_TIM_T0L0    SMD5_TMR_T0L_bit.TIM_T0L0
#define SMD5_TMR_T0L_TIM_T0L1    SMD5_TMR_T0L_bit.TIM_T0L1
#define SMD5_TMR_T0L_TIM_T0L2    SMD5_TMR_T0L_bit.TIM_T0L2
#define SMD5_TMR_T0L_TIM_T0L3    SMD5_TMR_T0L_bit.TIM_T0L3
#define SMD5_TMR_T0L_TIM_T0L4    SMD5_TMR_T0L_bit.TIM_T0L4
#define SMD5_TMR_T0L_TIM_T0L5    SMD5_TMR_T0L_bit.TIM_T0L5
#define SMD5_TMR_T0L_TIM_T0L6    SMD5_TMR_T0L_bit.TIM_T0L6
#define SMD5_TMR_T0L_TIM_T0L7    SMD5_TMR_T0L_bit.TIM_T0L7

#define SMD5_TMR_T0H_TIM_T0H0    SMD5_TMR_T0H_bit.TIM_T0H0
#define SMD5_TMR_T0H_TIM_T0H1    SMD5_TMR_T0H_bit.TIM_T0H1
#define SMD5_TMR_T0H_TIM_T0H2    SMD5_TMR_T0H_bit.TIM_T0H2
#define SMD5_TMR_T0H_TIM_T0H3    SMD5_TMR_T0H_bit.TIM_T0H3
#define SMD5_TMR_T0H_TIM_T0H4    SMD5_TMR_T0H_bit.TIM_T0H4
#define SMD5_TMR_T0H_TIM_T0H5    SMD5_TMR_T0H_bit.TIM_T0H5
#define SMD5_TMR_T0H_TIM_T0H6    SMD5_TMR_T0H_bit.TIM_T0H6
#define SMD5_TMR_T0H_TIM_T0H7    SMD5_TMR_T0H_bit.TIM_T0H7

#define SMD5_TMR_T1L_TIM_T1L0    SMD5_TMR_T1L_bit.TIM_T1L0
#define SMD5_TMR_T1L_TIM_T1L1    SMD5_TMR_T1L_bit.TIM_T1L1
#define SMD5_TMR_T1L_TIM_T1L2    SMD5_TMR_T1L_bit.TIM_T1L2
#define SMD5_TMR_T1L_TIM_T1L3    SMD5_TMR_T1L_bit.TIM_T1L3
#define SMD5_TMR_T1L_TIM_T1L4    SMD5_TMR_T1L_bit.TIM_T1L4
#define SMD5_TMR_T1L_TIM_T1L5    SMD5_TMR_T1L_bit.TIM_T1L5
#define SMD5_TMR_T1L_TIM_T1L6    SMD5_TMR_T1L_bit.TIM_T1L6
#define SMD5_TMR_T1L_TIM_T1L7    SMD5_TMR_T1L_bit.TIM_T1L7

#define SMD5_TMR_T1H_TIM_T1H0    SMD5_TMR_T1H_bit.TIM_T1H0
#define SMD5_TMR_T1H_TIM_T1H1    SMD5_TMR_T1H_bit.TIM_T1H1
#define SMD5_TMR_T1H_TIM_T1H2    SMD5_TMR_T1H_bit.TIM_T1H2
#define SMD5_TMR_T1H_TIM_T1H3    SMD5_TMR_T1H_bit.TIM_T1H3
#define SMD5_TMR_T1H_TIM_T1H4    SMD5_TMR_T1H_bit.TIM_T1H4
#define SMD5_TMR_T1H_TIM_T1H5    SMD5_TMR_T1H_bit.TIM_T1H5
#define SMD5_TMR_T1H_TIM_T1H6    SMD5_TMR_T1H_bit.TIM_T1H6
#define SMD5_TMR_T1H_TIM_T1H7    SMD5_TMR_T1H_bit.TIM_T1H7

#define SMD5_TMR_T2L_TIM_T2L0    SMD5_TMR_T2L_bit.TIM_T2L0
#define SMD5_TMR_T2L_TIM_T2L1    SMD5_TMR_T2L_bit.TIM_T2L1
#define SMD5_TMR_T2L_TIM_T2L2    SMD5_TMR_T2L_bit.TIM_T2L2
#define SMD5_TMR_T2L_TIM_T2L3    SMD5_TMR_T2L_bit.TIM_T2L3
#define SMD5_TMR_T2L_TIM_T2L4    SMD5_TMR_T2L_bit.TIM_T2L4
#define SMD5_TMR_T2L_TIM_T2L5    SMD5_TMR_T2L_bit.TIM_T2L5
#define SMD5_TMR_T2L_TIM_T2L6    SMD5_TMR_T2L_bit.TIM_T2L6
#define SMD5_TMR_T2L_TIM_T2L7    SMD5_TMR_T2L_bit.TIM_T2L7

#define SMD5_TMR_T2H_TIM_T2H0    SMD5_TMR_T2H_bit.TIM_T2H0
#define SMD5_TMR_T2H_TIM_T2H1    SMD5_TMR_T2H_bit.TIM_T2H1
#define SMD5_TMR_T2H_TIM_T2H2    SMD5_TMR_T2H_bit.TIM_T2H2
#define SMD5_TMR_T2H_TIM_T2H3    SMD5_TMR_T2H_bit.TIM_T2H3
#define SMD5_TMR_T2H_TIM_T2H4    SMD5_TMR_T2H_bit.TIM_T2H4
#define SMD5_TMR_T2H_TIM_T2H5    SMD5_TMR_T2H_bit.TIM_T2H5
#define SMD5_TMR_T2H_TIM_T2H6    SMD5_TMR_T2H_bit.TIM_T2H6
#define SMD5_TMR_T2H_TIM_T2H7    SMD5_TMR_T2H_bit.TIM_T2H7

#define SMD5_TMR_T3L_TIM_T3L0    SMD5_TMR_T3L_bit.TIM_T3L0
#define SMD5_TMR_T3L_TIM_T3L1    SMD5_TMR_T3L_bit.TIM_T3L1
#define SMD5_TMR_T3L_TIM_T3L2    SMD5_TMR_T3L_bit.TIM_T3L2
#define SMD5_TMR_T3L_TIM_T3L3    SMD5_TMR_T3L_bit.TIM_T3L3
#define SMD5_TMR_T3L_TIM_T3L4    SMD5_TMR_T3L_bit.TIM_T3L4
#define SMD5_TMR_T3L_TIM_T3L5    SMD5_TMR_T3L_bit.TIM_T3L5
#define SMD5_TMR_T3L_TIM_T3L6    SMD5_TMR_T3L_bit.TIM_T3L6
#define SMD5_TMR_T3L_TIM_T3L7    SMD5_TMR_T3L_bit.TIM_T3L7

#define SMD5_TMR_T3H_TIM_T3H0    SMD5_TMR_T3H_bit.TIM_T3H0
#define SMD5_TMR_T3H_TIM_T3H1    SMD5_TMR_T3H_bit.TIM_T3H1
#define SMD5_TMR_T3H_TIM_T3H2    SMD5_TMR_T3H_bit.TIM_T3H2
#define SMD5_TMR_T3H_TIM_T3H3    SMD5_TMR_T3H_bit.TIM_T3H3
#define SMD5_TMR_T3H_TIM_T3H4    SMD5_TMR_T3H_bit.TIM_T3H4
#define SMD5_TMR_T3H_TIM_T3H5    SMD5_TMR_T3H_bit.TIM_T3H5
#define SMD5_TMR_T3H_TIM_T3H6    SMD5_TMR_T3H_bit.TIM_T3H6
#define SMD5_TMR_T3H_TIM_T3H7    SMD5_TMR_T3H_bit.TIM_T3H7

#define SMD5_PRM_ID0_NX_STAT0    SMD5_PRM_ID0_bit.NX_STAT0
#define SMD5_PRM_ID0_NX_STAT1    SMD5_PRM_ID0_bit.NX_STAT1
#define SMD5_PRM_ID0_EDGE0       SMD5_PRM_ID0_bit.EDGE0
#define SMD5_PRM_ID0_EDGE1       SMD5_PRM_ID0_bit.EDGE1
#define SMD5_PRM_ID0_CNT_RSTE    SMD5_PRM_ID0_bit.CNT_RSTE
#define SMD5_PRM_ID0_PULS_EDG    SMD5_PRM_ID0_bit.PULS_EDG
#define SMD5_PRM_ID0_HOLD_JMP    SMD5_PRM_ID0_bit.HOLD_JMP
#define SMD5_PRM_ID0_AND_OR      SMD5_PRM_ID0_bit.AND_OR

#define SMD5_PRM_ID1_CEDGE0      SMD5_PRM_ID1_bit.CEDGE0
#define SMD5_PRM_ID1_CEDGE1      SMD5_PRM_ID1_bit.CEDGE1
#define SMD5_PRM_ID1_CNT_RSTC    SMD5_PRM_ID1_bit.CNT_RSTC
#define SMD5_PRM_ID1_PULS_CMP    SMD5_PRM_ID1_bit.PULS_CMP
#define SMD5_PRM_ID1_HOLD_EXIT   SMD5_PRM_ID1_bit.HOLD_EXIT

#define SMD5_PRM_ID2_LATCH_RS    SMD5_PRM_ID2_bit.LATCH_RS

#define SMD5_PRM_S00_NX_STAT0    SMD5_PRM_S00_bit.NX_STAT0
#define SMD5_PRM_S00_NX_STAT1    SMD5_PRM_S00_bit.NX_STAT1
#define SMD5_PRM_S00_EDGE0       SMD5_PRM_S00_bit.EDGE0
#define SMD5_PRM_S00_EDGE1       SMD5_PRM_S00_bit.EDGE1
#define SMD5_PRM_S00_CNT_RSTE    SMD5_PRM_S00_bit.CNT_RSTE
#define SMD5_PRM_S00_PULS_EDG    SMD5_PRM_S00_bit.PULS_EDG
#define SMD5_PRM_S00_HOLD_JMP    SMD5_PRM_S00_bit.HOLD_JMP
#define SMD5_PRM_S00_AND_OR      SMD5_PRM_S00_bit.AND_OR

#define SMD5_PRM_S01_CEDGE0      SMD5_PRM_S01_bit.CEDGE0
#define SMD5_PRM_S01_CEDGE1      SMD5_PRM_S01_bit.CEDGE1
#define SMD5_PRM_S01_CNT_RSTC    SMD5_PRM_S01_bit.CNT_RSTC
#define SMD5_PRM_S01_PULS_CMP    SMD5_PRM_S01_bit.PULS_CMP
#define SMD5_PRM_S01_HOLD_EXIT   SMD5_PRM_S01_bit.HOLD_EXIT

#define SMD5_PRM_S02_LATCH_RS    SMD5_PRM_S02_bit.LATCH_RS

#define SMD5_PRM_S10_NX_STAT0    SMD5_PRM_S10_bit.NX_STAT0
#define SMD5_PRM_S10_NX_STAT1    SMD5_PRM_S10_bit.NX_STAT1
#define SMD5_PRM_S10_EDGE0       SMD5_PRM_S10_bit.EDGE0
#define SMD5_PRM_S10_EDGE1       SMD5_PRM_S10_bit.EDGE1
#define SMD5_PRM_S10_CNT_RSTE    SMD5_PRM_S10_bit.CNT_RSTE
#define SMD5_PRM_S10_PULS_EDG    SMD5_PRM_S10_bit.PULS_EDG
#define SMD5_PRM_S10_HOLD_JMP    SMD5_PRM_S10_bit.HOLD_JMP
#define SMD5_PRM_S10_AND_OR      SMD5_PRM_S10_bit.AND_OR

#define SMD5_PRM_S11_CEDGE0      SMD5_PRM_S11_bit.CEDGE0
#define SMD5_PRM_S11_CEDGE1      SMD5_PRM_S11_bit.CEDGE1
#define SMD5_PRM_S11_CNT_RSTC    SMD5_PRM_S11_bit.CNT_RSTC
#define SMD5_PRM_S11_PULS_CMP    SMD5_PRM_S11_bit.PULS_CMP
#define SMD5_PRM_S11_HOLD_EXIT   SMD5_PRM_S11_bit.HOLD_EXIT

#define SMD5_PRM_S12_LATCH_RS    SMD5_PRM_S12_bit.LATCH_RS

#define SMD5_PRM_S20_NX_STAT0    SMD5_PRM_S20_bit.NX_STAT0
#define SMD5_PRM_S20_NX_STAT1    SMD5_PRM_S20_bit.NX_STAT1
#define SMD5_PRM_S20_EDGE0       SMD5_PRM_S20_bit.EDGE0
#define SMD5_PRM_S20_EDGE1       SMD5_PRM_S20_bit.EDGE1
#define SMD5_PRM_S20_CNT_RSTE    SMD5_PRM_S20_bit.CNT_RSTE
#define SMD5_PRM_S20_PULS_EDG    SMD5_PRM_S20_bit.PULS_EDG
#define SMD5_PRM_S20_HOLD_JMP    SMD5_PRM_S20_bit.HOLD_JMP
#define SMD5_PRM_S20_AND_OR      SMD5_PRM_S20_bit.AND_OR

#define SMD5_PRM_S21_CEDGE0      SMD5_PRM_S21_bit.CEDGE0
#define SMD5_PRM_S21_CEDGE1      SMD5_PRM_S21_bit.CEDGE1
#define SMD5_PRM_S21_CNT_RSTC    SMD5_PRM_S21_bit.CNT_RSTC
#define SMD5_PRM_S21_PULS_CMP    SMD5_PRM_S21_bit.PULS_CMP
#define SMD5_PRM_S21_HOLD_EXIT   SMD5_PRM_S21_bit.HOLD_EXIT

#define SMD5_PRM_S22_LATCH_RS    SMD5_PRM_S22_bit.LATCH_RS

#define SMD5_PRM_S30_NX_STAT0    SMD5_PRM_S30_bit.NX_STAT0
#define SMD5_PRM_S30_NX_STAT1    SMD5_PRM_S30_bit.NX_STAT1
#define SMD5_PRM_S30_EDGE0       SMD5_PRM_S30_bit.EDGE0
#define SMD5_PRM_S30_EDGE1       SMD5_PRM_S30_bit.EDGE1
#define SMD5_PRM_S30_CNT_RSTE    SMD5_PRM_S30_bit.CNT_RSTE
#define SMD5_PRM_S30_PULS_EDG    SMD5_PRM_S30_bit.PULS_EDG
#define SMD5_PRM_S30_HOLD_JMP    SMD5_PRM_S30_bit.HOLD_JMP
#define SMD5_PRM_S30_AND_OR      SMD5_PRM_S30_bit.AND_OR

#define SMD5_PRM_S31_CEDGE0      SMD5_PRM_S31_bit.CEDGE0
#define SMD5_PRM_S31_CEDGE1      SMD5_PRM_S31_bit.CEDGE1
#define SMD5_PRM_S31_CNT_RSTC    SMD5_PRM_S31_bit.CNT_RSTC
#define SMD5_PRM_S31_PULS_CMP    SMD5_PRM_S31_bit.PULS_CMP
#define SMD5_PRM_S31_HOLD_EXIT   SMD5_PRM_S31_bit.HOLD_EXIT

#define SMD5_PRM_S32_LATCH_RS    SMD5_PRM_S32_bit.LATCH_RS

#define SMD5_CFG_TIM_NUM0        SMD5_CFG_bit.TIM_NUM0
#define SMD5_CFG_TIM_NUM1        SMD5_CFG_bit.TIM_NUM1
#define SMD5_CFG_TIM_UPD0        SMD5_CFG_bit.TIM_UPD0
#define SMD5_CFG_TIM_UPD1        SMD5_CFG_bit.TIM_UPD1

#define SMD5_DMP_L_CNT_LO0       SMD5_DMP_L_bit.CNT_LO0
#define SMD5_DMP_L_CNT_LO1       SMD5_DMP_L_bit.CNT_LO1
#define SMD5_DMP_L_CNT_LO2       SMD5_DMP_L_bit.CNT_LO2
#define SMD5_DMP_L_CNT_LO3       SMD5_DMP_L_bit.CNT_LO3
#define SMD5_DMP_L_CNT_LO4       SMD5_DMP_L_bit.CNT_LO4
#define SMD5_DMP_L_CNT_LO5       SMD5_DMP_L_bit.CNT_LO5
#define SMD5_DMP_L_CNT_LO6       SMD5_DMP_L_bit.CNT_LO6
#define SMD5_DMP_L_CNT_LO7       SMD5_DMP_L_bit.CNT_LO7

#define SMD5_DMP_H_CNT_LH0       SMD5_DMP_H_bit.CNT_LH0
#define SMD5_DMP_H_CNT_LH1       SMD5_DMP_H_bit.CNT_LH1
#define SMD5_DMP_H_CNT_LH2       SMD5_DMP_H_bit.CNT_LH2
#define SMD5_DMP_H_CNT_LH3       SMD5_DMP_H_bit.CNT_LH3
#define SMD5_DMP_H_CNT_LH4       SMD5_DMP_H_bit.CNT_LH4
#define SMD5_DMP_H_CNT_LH5       SMD5_DMP_H_bit.CNT_LH5
#define SMD5_DMP_H_CNT_LH6       SMD5_DMP_H_bit.CNT_LH6
#define SMD5_DMP_H_CNT_LH7       SMD5_DMP_H_bit.CNT_LH7

#define SMD5_GSTS_EX0_DUMP       SMD5_GSTS_bit.EX0_DUMP
#define SMD5_GSTS_EX1_DUMP       SMD5_GSTS_bit.EX1_DUMP
#define SMD5_GSTS_EX2_DUMP       SMD5_GSTS_bit.EX2_DUMP
#define SMD5_GSTS_CNT_FLAG       SMD5_GSTS_bit.CNT_FLAG
#define SMD5_GSTS_DMP_LK0        SMD5_GSTS_bit.DMP_LK0
#define SMD5_GSTS_DMP_LK1        SMD5_GSTS_bit.DMP_LK1
#define SMD5_GSTS_EVENT_OV       SMD5_GSTS_bit.EVENT_OV

#define SMD5_ISR_CNT_OVER        SMD5_ISR_bit.CNT_OVER
#define SMD5_ISR_EXT0_INT        SMD5_ISR_bit.EXT0_INT
#define SMD5_ISR_EXT1_INT        SMD5_ISR_bit.EXT1_INT
#define SMD5_ISR_EXT2_INT        SMD5_ISR_bit.EXT2_INT
#define SMD5_ISR_STA_S0_IT       SMD5_ISR_bit.STA_S0_IT
#define SMD5_ISR_STA_S1_IT       SMD5_ISR_bit.STA_S1_IT
#define SMD5_ISR_STA_S2_IT       SMD5_ISR_bit.STA_S2_IT
#define SMD5_ISR_STA_S3_IT       SMD5_ISR_bit.STA_S3_IT

#define SMD5_IMR_CNT_OV_R        SMD5_IMR_bit.CNT_OV_R
#define SMD5_IMR_IT_EXT0         SMD5_IMR_bit.IT_EXT0
#define SMD5_IMR_IT_EXT1         SMD5_IMR_bit.IT_EXT1
#define SMD5_IMR_IT_EXT2         SMD5_IMR_bit.IT_EXT2
#define SMD5_IMR_IT_STA_S0       SMD5_IMR_bit.IT_STA_S0
#define SMD5_IMR_IT_STA_S1       SMD5_IMR_bit.IT_STA_S1
#define SMD5_IMR_IT_STA_S2       SMD5_IMR_bit.IT_STA_S2
#define SMD5_IMR_IT_STA_S3       SMD5_IMR_bit.IT_STA_S3

#define SMD5_ISEL_INPUT0_EN      SMD5_ISEL_bit.INPUT0_EN
#define SMD5_ISEL_INPUT1_EN      SMD5_ISEL_bit.INPUT1_EN
#define SMD5_ISEL_INPUT2_EN      SMD5_ISEL_bit.INPUT2_EN
#define SMD5_ISEL_INPUT_LAT      SMD5_ISEL_bit.INPUT_LAT

#define SMD5_DMP_DMPE_EX0        SMD5_DMP_bit.DMPE_EX0
#define SMD5_DMP_DMPE_EX1        SMD5_DMP_bit.DMPE_EX1
#define SMD5_DMP_DMPE_EX2        SMD5_DMP_bit.DMPE_EX2
#define SMD5_DMP_DMP_EVER        SMD5_DMP_bit.DMP_EVER
#define SMD5_DMP_CPL_IT_GE       SMD5_DMP_bit.CPL_IT_GE

#define SMD5_FSM_STS_FSM0        SMD5_FSM_STS_bit.FSM0
#define SMD5_FSM_STS_FSM1        SMD5_FSM_STS_bit.FSM1
#define SMD5_FSM_STS_FSM2        SMD5_FSM_STS_bit.FSM2
#define SMD5_FSM_STS_PWM         SMD5_FSM_STS_bit.PWM
#define SMD5_FSM_STS_EVINP0      SMD5_FSM_STS_bit.EVINP0
#define SMD5_FSM_STS_EVINP1      SMD5_FSM_STS_bit.EVINP1
#define SMD5_FSM_STS_EVINP2      SMD5_FSM_STS_bit.EVINP2

#endif

/*-------------------------------------------------------------------------
 *      SMED 5 Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SMD5_CTR_START_CNT  0x01
#define MASK_SMD5_CTR_FSM_ENA    0x02

#define MASK_SMD5_CTR_TMR_TIME_T0_VAL 0x01
#define MASK_SMD5_CTR_TMR_TIME_T1_VAL 0x02
#define MASK_SMD5_CTR_TMR_TIME_T2_VAL 0x04
#define MASK_SMD5_CTR_TMR_TIME_T3_VAL 0x08
#define MASK_SMD5_CTR_TMR_DITHER_VAL 0x10

#define MASK_SMD5_CTR_INP_RS_INSIG0 0x01
#define MASK_SMD5_CTR_INP_RS_INSIG1 0x02
#define MASK_SMD5_CTR_INP_RS_INSIG2 0x04
#define MASK_SMD5_CTR_INP_RAIS_EN 0x08
#define MASK_SMD5_CTR_INP_EL_INSIG0 0x10
#define MASK_SMD5_CTR_INP_EL_INSIG1 0x20
#define MASK_SMD5_CTR_INP_EL_INSIG2 0x40
#define MASK_SMD5_CTR_INP_EL_EN  0x80

#define MASK_SMD5_CTR_DTHR_DITH0 0x01
#define MASK_SMD5_CTR_DTHR_DITH1 0x02
#define MASK_SMD5_CTR_DTHR_DITH2 0x04
#define MASK_SMD5_CTR_DTHR_DITH3 0x08
#define MASK_SMD5_CTR_DTHR_DITH4 0x10
#define MASK_SMD5_CTR_DTHR_DITH5 0x20
#define MASK_SMD5_CTR_DTHR_DITH6 0x40
#define MASK_SMD5_CTR_DTHR_DITH7 0x80

#define MASK_SMD5_TMR_T0L_TIM_T0L0 0x01
#define MASK_SMD5_TMR_T0L_TIM_T0L1 0x02
#define MASK_SMD5_TMR_T0L_TIM_T0L2 0x04
#define MASK_SMD5_TMR_T0L_TIM_T0L3 0x08
#define MASK_SMD5_TMR_T0L_TIM_T0L4 0x10
#define MASK_SMD5_TMR_T0L_TIM_T0L5 0x20
#define MASK_SMD5_TMR_T0L_TIM_T0L6 0x40
#define MASK_SMD5_TMR_T0L_TIM_T0L7 0x80

#define MASK_SMD5_TMR_T0H_TIM_T0H0 0x01
#define MASK_SMD5_TMR_T0H_TIM_T0H1 0x02
#define MASK_SMD5_TMR_T0H_TIM_T0H2 0x04
#define MASK_SMD5_TMR_T0H_TIM_T0H3 0x08
#define MASK_SMD5_TMR_T0H_TIM_T0H4 0x10
#define MASK_SMD5_TMR_T0H_TIM_T0H5 0x20
#define MASK_SMD5_TMR_T0H_TIM_T0H6 0x40
#define MASK_SMD5_TMR_T0H_TIM_T0H7 0x80

#define MASK_SMD5_TMR_T1L_TIM_T1L0 0x01
#define MASK_SMD5_TMR_T1L_TIM_T1L1 0x02
#define MASK_SMD5_TMR_T1L_TIM_T1L2 0x04
#define MASK_SMD5_TMR_T1L_TIM_T1L3 0x08
#define MASK_SMD5_TMR_T1L_TIM_T1L4 0x10
#define MASK_SMD5_TMR_T1L_TIM_T1L5 0x20
#define MASK_SMD5_TMR_T1L_TIM_T1L6 0x40
#define MASK_SMD5_TMR_T1L_TIM_T1L7 0x80

#define MASK_SMD5_TMR_T1H_TIM_T1H0 0x01
#define MASK_SMD5_TMR_T1H_TIM_T1H1 0x02
#define MASK_SMD5_TMR_T1H_TIM_T1H2 0x04
#define MASK_SMD5_TMR_T1H_TIM_T1H3 0x08
#define MASK_SMD5_TMR_T1H_TIM_T1H4 0x10
#define MASK_SMD5_TMR_T1H_TIM_T1H5 0x20
#define MASK_SMD5_TMR_T1H_TIM_T1H6 0x40
#define MASK_SMD5_TMR_T1H_TIM_T1H7 0x80

#define MASK_SMD5_TMR_T2L_TIM_T2L0 0x01
#define MASK_SMD5_TMR_T2L_TIM_T2L1 0x02
#define MASK_SMD5_TMR_T2L_TIM_T2L2 0x04
#define MASK_SMD5_TMR_T2L_TIM_T2L3 0x08
#define MASK_SMD5_TMR_T2L_TIM_T2L4 0x10
#define MASK_SMD5_TMR_T2L_TIM_T2L5 0x20
#define MASK_SMD5_TMR_T2L_TIM_T2L6 0x40
#define MASK_SMD5_TMR_T2L_TIM_T2L7 0x80

#define MASK_SMD5_TMR_T2H_TIM_T2H0 0x01
#define MASK_SMD5_TMR_T2H_TIM_T2H1 0x02
#define MASK_SMD5_TMR_T2H_TIM_T2H2 0x04
#define MASK_SMD5_TMR_T2H_TIM_T2H3 0x08
#define MASK_SMD5_TMR_T2H_TIM_T2H4 0x10
#define MASK_SMD5_TMR_T2H_TIM_T2H5 0x20
#define MASK_SMD5_TMR_T2H_TIM_T2H6 0x40
#define MASK_SMD5_TMR_T2H_TIM_T2H7 0x80

#define MASK_SMD5_TMR_T3L_TIM_T3L0 0x01
#define MASK_SMD5_TMR_T3L_TIM_T3L1 0x02
#define MASK_SMD5_TMR_T3L_TIM_T3L2 0x04
#define MASK_SMD5_TMR_T3L_TIM_T3L3 0x08
#define MASK_SMD5_TMR_T3L_TIM_T3L4 0x10
#define MASK_SMD5_TMR_T3L_TIM_T3L5 0x20
#define MASK_SMD5_TMR_T3L_TIM_T3L6 0x40
#define MASK_SMD5_TMR_T3L_TIM_T3L7 0x80

#define MASK_SMD5_TMR_T3H_TIM_T3H0 0x01
#define MASK_SMD5_TMR_T3H_TIM_T3H1 0x02
#define MASK_SMD5_TMR_T3H_TIM_T3H2 0x04
#define MASK_SMD5_TMR_T3H_TIM_T3H3 0x08
#define MASK_SMD5_TMR_T3H_TIM_T3H4 0x10
#define MASK_SMD5_TMR_T3H_TIM_T3H5 0x20
#define MASK_SMD5_TMR_T3H_TIM_T3H6 0x40
#define MASK_SMD5_TMR_T3H_TIM_T3H7 0x80

#define MASK_SMD5_PRM_ID0_NX_STAT0 0x01
#define MASK_SMD5_PRM_ID0_NX_STAT1 0x02
#define MASK_SMD5_PRM_ID0_EDGE0  0x04
#define MASK_SMD5_PRM_ID0_EDGE1  0x08
#define MASK_SMD5_PRM_ID0_CNT_RSTE 0x10
#define MASK_SMD5_PRM_ID0_PULS_EDG 0x20
#define MASK_SMD5_PRM_ID0_HOLD_JMP 0x40
#define MASK_SMD5_PRM_ID0_AND_OR 0x80

#define MASK_SMD5_PRM_ID1_CEDGE0 0x04
#define MASK_SMD5_PRM_ID1_CEDGE1 0x08
#define MASK_SMD5_PRM_ID1_CNT_RSTC 0x10
#define MASK_SMD5_PRM_ID1_PULS_CMP 0x20
#define MASK_SMD5_PRM_ID1_HOLD_EXIT 0x40

#define MASK_SMD5_PRM_ID2_LATCH_RS 0x01

#define MASK_SMD5_PRM_S00_NX_STAT0 0x01
#define MASK_SMD5_PRM_S00_NX_STAT1 0x02
#define MASK_SMD5_PRM_S00_EDGE0  0x04
#define MASK_SMD5_PRM_S00_EDGE1  0x08
#define MASK_SMD5_PRM_S00_CNT_RSTE 0x10
#define MASK_SMD5_PRM_S00_PULS_EDG 0x20
#define MASK_SMD5_PRM_S00_HOLD_JMP 0x40
#define MASK_SMD5_PRM_S00_AND_OR 0x80

#define MASK_SMD5_PRM_S01_CEDGE0 0x04
#define MASK_SMD5_PRM_S01_CEDGE1 0x08
#define MASK_SMD5_PRM_S01_CNT_RSTC 0x10
#define MASK_SMD5_PRM_S01_PULS_CMP 0x20
#define MASK_SMD5_PRM_S01_HOLD_EXIT 0x40

#define MASK_SMD5_PRM_S02_LATCH_RS 0x01

#define MASK_SMD5_PRM_S10_NX_STAT0 0x01
#define MASK_SMD5_PRM_S10_NX_STAT1 0x02
#define MASK_SMD5_PRM_S10_EDGE0  0x04
#define MASK_SMD5_PRM_S10_EDGE1  0x08
#define MASK_SMD5_PRM_S10_CNT_RSTE 0x10
#define MASK_SMD5_PRM_S10_PULS_EDG 0x20
#define MASK_SMD5_PRM_S10_HOLD_JMP 0x40
#define MASK_SMD5_PRM_S10_AND_OR 0x80

#define MASK_SMD5_PRM_S11_CEDGE0 0x04
#define MASK_SMD5_PRM_S11_CEDGE1 0x08
#define MASK_SMD5_PRM_S11_CNT_RSTC 0x10
#define MASK_SMD5_PRM_S11_PULS_CMP 0x20
#define MASK_SMD5_PRM_S11_HOLD_EXIT 0x40

#define MASK_SMD5_PRM_S12_LATCH_RS 0x01

#define MASK_SMD5_PRM_S20_NX_STAT0 0x01
#define MASK_SMD5_PRM_S20_NX_STAT1 0x02
#define MASK_SMD5_PRM_S20_EDGE0  0x04
#define MASK_SMD5_PRM_S20_EDGE1  0x08
#define MASK_SMD5_PRM_S20_CNT_RSTE 0x10
#define MASK_SMD5_PRM_S20_PULS_EDG 0x20
#define MASK_SMD5_PRM_S20_HOLD_JMP 0x40
#define MASK_SMD5_PRM_S20_AND_OR 0x80

#define MASK_SMD5_PRM_S21_CEDGE0 0x04
#define MASK_SMD5_PRM_S21_CEDGE1 0x08
#define MASK_SMD5_PRM_S21_CNT_RSTC 0x10
#define MASK_SMD5_PRM_S21_PULS_CMP 0x20
#define MASK_SMD5_PRM_S21_HOLD_EXIT 0x40

#define MASK_SMD5_PRM_S22_LATCH_RS 0x01

#define MASK_SMD5_PRM_S30_NX_STAT0 0x01
#define MASK_SMD5_PRM_S30_NX_STAT1 0x02
#define MASK_SMD5_PRM_S30_EDGE0  0x04
#define MASK_SMD5_PRM_S30_EDGE1  0x08
#define MASK_SMD5_PRM_S30_CNT_RSTE 0x10
#define MASK_SMD5_PRM_S30_PULS_EDG 0x20
#define MASK_SMD5_PRM_S30_HOLD_JMP 0x40
#define MASK_SMD5_PRM_S30_AND_OR 0x80

#define MASK_SMD5_PRM_S31_CEDGE0 0x04
#define MASK_SMD5_PRM_S31_CEDGE1 0x08
#define MASK_SMD5_PRM_S31_CNT_RSTC 0x10
#define MASK_SMD5_PRM_S31_PULS_CMP 0x20
#define MASK_SMD5_PRM_S31_HOLD_EXIT 0x40

#define MASK_SMD5_PRM_S32_LATCH_RS 0x01

#define MASK_SMD5_CFG_TIM_NUM0   0x02
#define MASK_SMD5_CFG_TIM_NUM1   0x04
#define MASK_SMD5_CFG_TIM_UPD0   0x08
#define MASK_SMD5_CFG_TIM_UPD1   0x10

#define MASK_SMD5_DMP_L_CNT_LO0  0x01
#define MASK_SMD5_DMP_L_CNT_LO1  0x02
#define MASK_SMD5_DMP_L_CNT_LO2  0x04
#define MASK_SMD5_DMP_L_CNT_LO3  0x08
#define MASK_SMD5_DMP_L_CNT_LO4  0x10
#define MASK_SMD5_DMP_L_CNT_LO5  0x20
#define MASK_SMD5_DMP_L_CNT_LO6  0x40
#define MASK_SMD5_DMP_L_CNT_LO7  0x80

#define MASK_SMD5_DMP_H_CNT_LH0  0x01
#define MASK_SMD5_DMP_H_CNT_LH1  0x02
#define MASK_SMD5_DMP_H_CNT_LH2  0x04
#define MASK_SMD5_DMP_H_CNT_LH3  0x08
#define MASK_SMD5_DMP_H_CNT_LH4  0x10
#define MASK_SMD5_DMP_H_CNT_LH5  0x20
#define MASK_SMD5_DMP_H_CNT_LH6  0x40
#define MASK_SMD5_DMP_H_CNT_LH7  0x80

#define MASK_SMD5_GSTS_EX0_DUMP  0x01
#define MASK_SMD5_GSTS_EX1_DUMP  0x02
#define MASK_SMD5_GSTS_EX2_DUMP  0x04
#define MASK_SMD5_GSTS_CNT_FLAG  0x08
#define MASK_SMD5_GSTS_DMP_LK0   0x10
#define MASK_SMD5_GSTS_DMP_LK1   0x20
#define MASK_SMD5_GSTS_EVENT_OV  0x40

#define MASK_SMD5_ISR_CNT_OVER   0x01
#define MASK_SMD5_ISR_EXT0_INT   0x02
#define MASK_SMD5_ISR_EXT1_INT   0x04
#define MASK_SMD5_ISR_EXT2_INT   0x08
#define MASK_SMD5_ISR_STA_S0_IT  0x10
#define MASK_SMD5_ISR_STA_S1_IT  0x20
#define MASK_SMD5_ISR_STA_S2_IT  0x40
#define MASK_SMD5_ISR_STA_S3_IT  0x80

#define MASK_SMD5_IMR_CNT_OV_R   0x01
#define MASK_SMD5_IMR_IT_EXT0    0x02
#define MASK_SMD5_IMR_IT_EXT1    0x04
#define MASK_SMD5_IMR_IT_EXT2    0x08
#define MASK_SMD5_IMR_IT_STA_S0  0x10
#define MASK_SMD5_IMR_IT_STA_S1  0x20
#define MASK_SMD5_IMR_IT_STA_S2  0x40
#define MASK_SMD5_IMR_IT_STA_S3  0x80

#define MASK_SMD5_ISEL_INPUT0_EN 0x01
#define MASK_SMD5_ISEL_INPUT1_EN 0x02
#define MASK_SMD5_ISEL_INPUT2_EN 0x04
#define MASK_SMD5_ISEL_INPUT_LAT 0x08

#define MASK_SMD5_DMP_DMPE_EX0   0x01
#define MASK_SMD5_DMP_DMPE_EX1   0x02
#define MASK_SMD5_DMP_DMPE_EX2   0x04
#define MASK_SMD5_DMP_DMP_EVER   0x08
#define MASK_SMD5_DMP_CPL_IT_GE  0x10

#define MASK_SMD5_FSM_STS_FSM0   0x01
#define MASK_SMD5_FSM_STS_FSM1   0x02
#define MASK_SMD5_FSM_STS_FSM2   0x04
#define MASK_SMD5_FSM_STS_PWM    0x08
#define MASK_SMD5_FSM_STS_EVINP0 0x10
#define MASK_SMD5_FSM_STS_EVINP1 0x20
#define MASK_SMD5_FSM_STS_EVINP2 0x40


/*-------------------------------------------------------------------------
 *      System Registers register definitions
 *-----------------------------------------------------------------------*/
/* Global configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWD         : 1;
  unsigned char AL          : 1;
  unsigned char             : 5;
  unsigned char HSIT        : 1;
} __BITS_CFG_GCR;
#endif
__IO_REG8_BIT(CFG_GCR,     0x7F60, __READ_WRITE, __BITS_CFG_GCR);

/* SWIM control status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWIM_PRI    : 1;
  unsigned char OBL         : 1;
  unsigned char RST         : 1;
  unsigned char OSCOFF      : 1;
  unsigned char HS          : 1;
  unsigned char SWIM_DM     : 1;
  unsigned char HALT        : 1;
  unsigned char SAFE_MASK   : 1;
} __BITS_SWIM_CSR;
#endif
__IO_REG8_BIT(SWIM_CSR,    0x7F80, __READ_WRITE, __BITS_SWIM_CSR);


/*-------------------------------------------------------------------------
 *      System Registers bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define CFG_GCR_SWD              CFG_GCR_bit.SWD
#define CFG_GCR_AL               CFG_GCR_bit.AL
#define CFG_GCR_HSIT             CFG_GCR_bit.HSIT

#define SWIM_CSR_SWIM_PRI        SWIM_CSR_bit.SWIM_PRI
#define SWIM_CSR_OBL             SWIM_CSR_bit.OBL
#define SWIM_CSR_RST             SWIM_CSR_bit.RST
#define SWIM_CSR_OSCOFF          SWIM_CSR_bit.OSCOFF
#define SWIM_CSR_HS              SWIM_CSR_bit.HS
#define SWIM_CSR_SWIM_DM         SWIM_CSR_bit.SWIM_DM
#define SWIM_CSR_HALT            SWIM_CSR_bit.HALT
#define SWIM_CSR_SAFE_MASK       SWIM_CSR_bit.SAFE_MASK

#endif

/*-------------------------------------------------------------------------
 *      System Registers bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CFG_GCR_SWD         0x01
#define MASK_CFG_GCR_AL          0x02
#define MASK_CFG_GCR_HSIT        0x80

#define MASK_SWIM_CSR_SWIM_PRI   0x01
#define MASK_SWIM_CSR_OBL        0x02
#define MASK_SWIM_CSR_RST        0x04
#define MASK_SWIM_CSR_OSCOFF     0x08
#define MASK_SWIM_CSR_HS         0x10
#define MASK_SWIM_CSR_SWIM_DM    0x20
#define MASK_SWIM_CSR_HALT       0x40
#define MASK_SWIM_CSR_SAFE_MASK  0x80


/*-------------------------------------------------------------------------
 *      ITC register definitions
 *-----------------------------------------------------------------------*/
/* Interrupt software priority register 0 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 2;
  unsigned char VECT1SPR    : 2;
  unsigned char VECT2SPR    : 2;
  unsigned char VECT3SPR    : 2;
} __BITS_ITC_SPR0;
#endif
__IO_REG8_BIT(ITC_SPR0,    0x7F70, __READ_WRITE, __BITS_ITC_SPR0);

/* Interrupt software priority register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT4SPR    : 2;
  unsigned char VECT5SPR    : 2;
  unsigned char VECT6SPR    : 2;
  unsigned char VECT7SPR    : 2;
} __BITS_ITC_SPR1;
#endif
__IO_REG8_BIT(ITC_SPR1,    0x7F71, __READ_WRITE, __BITS_ITC_SPR1);

/* Interrupt software priority register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT8SPR    : 2;
  unsigned char VECT9SPR    : 2;
  unsigned char VECT10SPR   : 2;
  unsigned char VECT11SPR   : 2;
} __BITS_ITC_SPR2;
#endif
__IO_REG8_BIT(ITC_SPR2,    0x7F72, __READ_WRITE, __BITS_ITC_SPR2);

/* Interrupt software priority register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT12SPR   : 2;
  unsigned char VECT13SPR   : 2;
  unsigned char VECT14SPR   : 2;
  unsigned char VECT15SPR   : 2;
} __BITS_ITC_SPR3;
#endif
__IO_REG8_BIT(ITC_SPR3,    0x7F73, __READ_WRITE, __BITS_ITC_SPR3);

/* Interrupt software priority register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT16SPR   : 2;
  unsigned char VECT17SPR   : 2;
  unsigned char VECT18SPR   : 2;
  unsigned char VECT19SPR   : 2;
} __BITS_ITC_SPR4;
#endif
__IO_REG8_BIT(ITC_SPR4,    0x7F74, __READ_WRITE, __BITS_ITC_SPR4);

/* Interrupt software priority register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT20SPR   : 2;
  unsigned char VECT21SPR   : 2;
  unsigned char VECT22SPR   : 2;
  unsigned char VECT23SPR   : 2;
} __BITS_ITC_SPR5;
#endif
__IO_REG8_BIT(ITC_SPR5,    0x7F75, __READ_WRITE, __BITS_ITC_SPR5);

/* Interrupt software priority register 6 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT24SPR   : 2;
  unsigned char VECT25SPR   : 2;
  unsigned char VECT26SPR   : 2;
  unsigned char VECT27SPR   : 2;
} __BITS_ITC_SPR6;
#endif
__IO_REG8_BIT(ITC_SPR6,    0x7F76, __READ_WRITE, __BITS_ITC_SPR6);

/* Interrupt software priority register 7 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT28SPR   : 2;
  unsigned char VECT29SPR   : 2;
} __BITS_ITC_SPR7;
#endif
__IO_REG8_BIT(ITC_SPR7,    0x7F77, __READ_WRITE, __BITS_ITC_SPR7);


/*-------------------------------------------------------------------------
 *      ITC bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define ITC_SPR0_VECT1SPR        ITC_SPR0_bit.VECT1SPR
#define ITC_SPR0_VECT2SPR        ITC_SPR0_bit.VECT2SPR
#define ITC_SPR0_VECT3SPR        ITC_SPR0_bit.VECT3SPR

#define ITC_SPR1_VECT4SPR        ITC_SPR1_bit.VECT4SPR
#define ITC_SPR1_VECT5SPR        ITC_SPR1_bit.VECT5SPR
#define ITC_SPR1_VECT6SPR        ITC_SPR1_bit.VECT6SPR
#define ITC_SPR1_VECT7SPR        ITC_SPR1_bit.VECT7SPR

#define ITC_SPR2_VECT8SPR        ITC_SPR2_bit.VECT8SPR
#define ITC_SPR2_VECT9SPR        ITC_SPR2_bit.VECT9SPR
#define ITC_SPR2_VECT10SPR       ITC_SPR2_bit.VECT10SPR
#define ITC_SPR2_VECT11SPR       ITC_SPR2_bit.VECT11SPR

#define ITC_SPR3_VECT12SPR       ITC_SPR3_bit.VECT12SPR
#define ITC_SPR3_VECT13SPR       ITC_SPR3_bit.VECT13SPR
#define ITC_SPR3_VECT14SPR       ITC_SPR3_bit.VECT14SPR
#define ITC_SPR3_VECT15SPR       ITC_SPR3_bit.VECT15SPR

#define ITC_SPR4_VECT16SPR       ITC_SPR4_bit.VECT16SPR
#define ITC_SPR4_VECT17SPR       ITC_SPR4_bit.VECT17SPR
#define ITC_SPR4_VECT18SPR       ITC_SPR4_bit.VECT18SPR
#define ITC_SPR4_VECT19SPR       ITC_SPR4_bit.VECT19SPR

#define ITC_SPR5_VECT20SPR       ITC_SPR5_bit.VECT20SPR
#define ITC_SPR5_VECT21SPR       ITC_SPR5_bit.VECT21SPR
#define ITC_SPR5_VECT22SPR       ITC_SPR5_bit.VECT22SPR
#define ITC_SPR5_VECT23SPR       ITC_SPR5_bit.VECT23SPR

#define ITC_SPR6_VECT24SPR       ITC_SPR6_bit.VECT24SPR
#define ITC_SPR6_VECT25SPR       ITC_SPR6_bit.VECT25SPR
#define ITC_SPR6_VECT26SPR       ITC_SPR6_bit.VECT26SPR
#define ITC_SPR6_VECT27SPR       ITC_SPR6_bit.VECT27SPR

#define ITC_SPR7_VECT28SPR       ITC_SPR7_bit.VECT28SPR
#define ITC_SPR7_VECT29SPR       ITC_SPR7_bit.VECT29SPR

#endif

/*-------------------------------------------------------------------------
 *      ITC bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ITC_SPR0_VECT1SPR   0x0C
#define MASK_ITC_SPR0_VECT2SPR   0x30
#define MASK_ITC_SPR0_VECT3SPR   0xC0

#define MASK_ITC_SPR1_VECT4SPR   0x03
#define MASK_ITC_SPR1_VECT5SPR   0x0C
#define MASK_ITC_SPR1_VECT6SPR   0x30
#define MASK_ITC_SPR1_VECT7SPR   0xC0

#define MASK_ITC_SPR2_VECT8SPR   0x03
#define MASK_ITC_SPR2_VECT9SPR   0x0C
#define MASK_ITC_SPR2_VECT10SPR  0x30
#define MASK_ITC_SPR2_VECT11SPR  0xC0

#define MASK_ITC_SPR3_VECT12SPR  0x03
#define MASK_ITC_SPR3_VECT13SPR  0x0C
#define MASK_ITC_SPR3_VECT14SPR  0x30
#define MASK_ITC_SPR3_VECT15SPR  0xC0

#define MASK_ITC_SPR4_VECT16SPR  0x03
#define MASK_ITC_SPR4_VECT17SPR  0x0C
#define MASK_ITC_SPR4_VECT18SPR  0x30
#define MASK_ITC_SPR4_VECT19SPR  0xC0

#define MASK_ITC_SPR5_VECT20SPR  0x03
#define MASK_ITC_SPR5_VECT21SPR  0x0C
#define MASK_ITC_SPR5_VECT22SPR  0x30
#define MASK_ITC_SPR5_VECT23SPR  0xC0

#define MASK_ITC_SPR6_VECT24SPR  0x03
#define MASK_ITC_SPR6_VECT25SPR  0x0C
#define MASK_ITC_SPR6_VECT26SPR  0x30
#define MASK_ITC_SPR6_VECT27SPR  0xC0

#define MASK_ITC_SPR7_VECT28SPR  0x03
#define MASK_ITC_SPR7_VECT29SPR  0x0C


/*-------------------------------------------------------------------------
 *      Interrupt vector numbers
 *
 *  Note: The vector numbers listed in ST's manuals for STM8 are offset
 *        by 2 compared to the vector numbers used by EWSTM8.
 *-----------------------------------------------------------------------*/
#define AWU_vector                            3 /* IRQ No. in STM8 manual:  1 */
#define CLK_CSS_vector                        4 /* IRQ No. in STM8 manual:  2 */
#define CLK_SWITCH_vector                     4 /* IRQ No. in STM8 manual:  2 */
#define GPIO0_INT_vector                      5 /* IRQ No. in STM8 manual:  3 */
#define GPIO1_INT_vector                      5 /* IRQ No. in STM8 manual:  3 */
#define GPIO2_INT_vector                      5 /* IRQ No. in STM8 manual:  3 */
#define GPIO3_INT_vector                      5 /* IRQ No. in STM8 manual:  3 */
#define GPIO4_INT_vector                      5 /* IRQ No. in STM8 manual:  3 */
#define GPIO5_INT_vector                      5 /* IRQ No. in STM8 manual:  3 */
#define DIGIN0_INT_vector                     7 /* IRQ No. in STM8 manual:  5 */
#define DIGIN1_INT_vector                     7 /* IRQ No. in STM8 manual:  5 */
#define DIGIN2_INT_vector                     7 /* IRQ No. in STM8 manual:  5 */
#define DIGIN3_INT_vector                     7 /* IRQ No. in STM8 manual:  5 */
#define DIGIN4_INT_vector                     7 /* IRQ No. in STM8 manual:  5 */
#define DIGIN5_INT_vector                     7 /* IRQ No. in STM8 manual:  5 */
#define SMED0_OVF_vector                      8 /* IRQ No. in STM8 manual:  6 */
#define SMED0_STATE0_vector                   8 /* IRQ No. in STM8 manual:  6 */
#define SMED0_STATE1_vector                   8 /* IRQ No. in STM8 manual:  6 */
#define SMED0_STATE2_vector                   8 /* IRQ No. in STM8 manual:  6 */
#define SMED0_STATE3_vector                   8 /* IRQ No. in STM8 manual:  6 */
#define SMEDO_INSIG0_vector                   8 /* IRQ No. in STM8 manual:  6 */
#define SMEDO_INSIG1_vector                   8 /* IRQ No. in STM8 manual:  6 */
#define SMEDO_INSIG2_vector                   8 /* IRQ No. in STM8 manual:  6 */
#define SMED1_INSIG0_vector                   9 /* IRQ No. in STM8 manual:  7 */
#define SMED1_INSIG1_vector                   9 /* IRQ No. in STM8 manual:  7 */
#define SMED1_INSIG2_vector                   9 /* IRQ No. in STM8 manual:  7 */
#define SMED1_OVF_vector                      9 /* IRQ No. in STM8 manual:  7 */
#define SMED1_STATE0_vector                   9 /* IRQ No. in STM8 manual:  7 */
#define SMED1_STATE1_vector                   9 /* IRQ No. in STM8 manual:  7 */
#define SMED1_STATE2_vector                   9 /* IRQ No. in STM8 manual:  7 */
#define SMED1_STATE3_vector                   9 /* IRQ No. in STM8 manual:  7 */
#define SMED2_INSIG0_vector                  17 /* IRQ No. in STM8 manual: 15 */
#define SMED2_INSIG1_vector                  17 /* IRQ No. in STM8 manual: 15 */
#define SMED2_INSIG2_vector                  17 /* IRQ No. in STM8 manual: 15 */
#define SMED2_OVF_vector                     17 /* IRQ No. in STM8 manual: 15 */
#define SMED2_STATE0_vector                  17 /* IRQ No. in STM8 manual: 15 */
#define SMED2_STATE1_vector                  17 /* IRQ No. in STM8 manual: 15 */
#define SMED2_STATE2_vector                  17 /* IRQ No. in STM8 manual: 15 */
#define SMED2_STATE3_vector                  17 /* IRQ No. in STM8 manual: 15 */
#define SMED3_INSIG0_vector                  18 /* IRQ No. in STM8 manual: 16 */
#define SMED3_INSIG1_vector                  18 /* IRQ No. in STM8 manual: 16 */
#define SMED3_INSIG2_vector                  18 /* IRQ No. in STM8 manual: 16 */
#define SMED3_OVF_vector                     18 /* IRQ No. in STM8 manual: 16 */
#define SMED3_STATE0_vector                  18 /* IRQ No. in STM8 manual: 16 */
#define SMED3_STATE1_vector                  18 /* IRQ No. in STM8 manual: 16 */
#define SMED3_STATE2_vector                  18 /* IRQ No. in STM8 manual: 16 */
#define SMED3_STATE3_vector                  18 /* IRQ No. in STM8 manual: 16 */
#define UART_T_TC_vector                     19 /* IRQ No. in STM8 manual: 17 */
#define UART_T_TXE_vector                    19 /* IRQ No. in STM8 manual: 17 */
#define UART_R_IDLE_vector                   20 /* IRQ No. in STM8 manual: 18 */
#define UART_R_OR_vector                     20 /* IRQ No. in STM8 manual: 18 */
#define UART_R_PE_vector                     20 /* IRQ No. in STM8 manual: 18 */
#define UART_R_RXNE_vector                   20 /* IRQ No. in STM8 manual: 18 */
#define I2C_ADD10_vector                     21 /* IRQ No. in STM8 manual: 19 */
#define I2C_ADDR_vector                      21 /* IRQ No. in STM8 manual: 19 */
#define I2C_AF_vector                        21 /* IRQ No. in STM8 manual: 19 */
#define I2C_ARLO_vector                      21 /* IRQ No. in STM8 manual: 19 */
#define I2C_BERR_vector                      21 /* IRQ No. in STM8 manual: 19 */
#define I2C_BTF_vector                       21 /* IRQ No. in STM8 manual: 19 */
#define I2C_OVR_vector                       21 /* IRQ No. in STM8 manual: 19 */
#define I2C_RXNE_vector                      21 /* IRQ No. in STM8 manual: 19 */
#define I2C_SB_vector                        21 /* IRQ No. in STM8 manual: 19 */
#define I2C_STOPF_vector                     21 /* IRQ No. in STM8 manual: 19 */
#define I2C_TXE_vector                       21 /* IRQ No. in STM8 manual: 19 */
#define ADC_EOC_vector                       24 /* IRQ No. in STM8 manual: 22 */
#define ADC_EOS_vector                       24 /* IRQ No. in STM8 manual: 22 */
#define ADC_SEQ_vector                       24 /* IRQ No. in STM8 manual: 22 */
#define STMR_OVF_vector                      25 /* IRQ No. in STM8 manual: 23 */
#define FLASH_EOP_vector                     26 /* IRQ No. in STM8 manual: 24 */
#define FLASH_WR_PG_DIS_vector               26 /* IRQ No. in STM8 manual: 24 */
#define DALI_ITF_vector                      27 /* IRQ No. in STM8 manual: 25 */
#define DALI_WDGF_vector                     27 /* IRQ No. in STM8 manual: 25 */
#define SMED4_INSIG0_vector                  28 /* IRQ No. in STM8 manual: 26 */
#define SMED4_INSIG1_vector                  28 /* IRQ No. in STM8 manual: 26 */
#define SMED4_INSIG2_vector                  28 /* IRQ No. in STM8 manual: 26 */
#define SMED4_OVF_vector                     28 /* IRQ No. in STM8 manual: 26 */
#define SMED4_STATE0_vector                  28 /* IRQ No. in STM8 manual: 26 */
#define SMED4_STATE1_vector                  28 /* IRQ No. in STM8 manual: 26 */
#define SMED4_STATE2_vector                  28 /* IRQ No. in STM8 manual: 26 */
#define SMED4_STATE3_vector                  28 /* IRQ No. in STM8 manual: 26 */
#define SMED5_INSIG0_vector                  29 /* IRQ No. in STM8 manual: 27 */
#define SMED5_INSIG1_vector                  29 /* IRQ No. in STM8 manual: 27 */
#define SMED5_INSIG2_vector                  29 /* IRQ No. in STM8 manual: 27 */
#define SMED5_OVF_vector                     29 /* IRQ No. in STM8 manual: 27 */
#define SMED5_STATE0_vector                  29 /* IRQ No. in STM8 manual: 27 */
#define SMED5_STATE1_vector                  29 /* IRQ No. in STM8 manual: 27 */
#define SMED5_STATE2_vector                  29 /* IRQ No. in STM8 manual: 27 */
#define SMED5_STATE3_vector                  29 /* IRQ No. in STM8 manual: 27 */

#ifdef __IAR_SYSTEMS_ICC__
#pragma language=restore
#endif

#endif    /* __IOSTNRG288A_H__ */

/*----------------------------------------------
 *      End of file
 *--------------------------------------------*/
