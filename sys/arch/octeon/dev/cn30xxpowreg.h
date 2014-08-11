/*
 * THIS FILE IS AUTOMATICALLY GENERATED
 * DONT EDIT THIS FILE
 */

/*	$OpenBSD: cn30xxpowreg.h,v 1.2 2014/08/11 18:29:56 miod Exp $	*/

/*
 * Copyright (c) 2007 Internet Initiative Japan, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * Cavium Networks OCTEON CN30XX Hardware Reference Manual
 * CN30XX-HM-1.0
 * 5.12 POW Registers
 */

#ifndef _CN30XXPOWREG_H_
#define _CN30XXPOWREG_H_

/* ---- register addresses */

#define	POW_PP_GRP_MSK0				0x0001670000000000ULL
#define	POW_PP_GRP_MSK1				0x0001670000000008ULL
#define	POW_WQ_INT_THR0				0x0001670000000080ULL
#define	POW_WQ_INT_THR1				0x0001670000000088ULL
#define	POW_WQ_INT_THR2				0x0001670000000090ULL
#define	POW_WQ_INT_THR3				0x0001670000000098ULL
#define	POW_WQ_INT_THR4				0x00016700000000a0ULL
#define	POW_WQ_INT_THR5				0x00016700000000a8ULL
#define	POW_WQ_INT_THR6				0x00016700000000b0ULL
#define	POW_WQ_INT_THR7				0x00016700000000b8ULL
#define	POW_WQ_INT_THR8				0x00016700000000c0ULL
#define	POW_WQ_INT_THR9				0x00016700000000c8ULL
#define	POW_WQ_INT_THR10			0x00016700000000d0ULL
#define	POW_WQ_INT_THR11			0x00016700000000d8ULL
#define	POW_WQ_INT_THR12			0x00016700000000e0ULL
#define	POW_WQ_INT_THR13			0x00016700000000e8ULL
#define	POW_WQ_INT_THR14			0x00016700000000f0ULL
#define	POW_WQ_INT_THR15			0x00016700000000f8ULL
#define	POW_WQ_INT_CNT0				0x0001670000000100ULL
#define	POW_WQ_INT_CNT1				0x0001670000000108ULL
#define	POW_WQ_INT_CNT2				0x0001670000000110ULL
#define	POW_WQ_INT_CNT3				0x0001670000000118ULL
#define	POW_WQ_INT_CNT4				0x0001670000000120ULL
#define	POW_WQ_INT_CNT5				0x0001670000000128ULL
#define	POW_WQ_INT_CNT6				0x0001670000000130ULL
#define	POW_WQ_INT_CNT7				0x0001670000000138ULL
#define	POW_WQ_INT_CNT8				0x0001670000000140ULL
#define	POW_WQ_INT_CNT9				0x0001670000000148ULL
#define	POW_WQ_INT_CNT10			0x0001670000000150ULL
#define	POW_WQ_INT_CNT11			0x0001670000000158ULL
#define	POW_WQ_INT_CNT12			0x0001670000000160ULL
#define	POW_WQ_INT_CNT13			0x0001670000000168ULL
#define	POW_WQ_INT_CNT14			0x0001670000000170ULL
#define	POW_WQ_INT_CNT15			0x0001670000000178ULL
#define	POW_QOS_THR0				0x0001670000000180ULL
#define	POW_QOS_THR1				0x0001670000000188ULL
#define	POW_QOS_THR2				0x0001670000000190ULL
#define	POW_QOS_THR3				0x0001670000000198ULL
#define	POW_QOS_THR4				0x00016700000001a0ULL
#define	POW_QOS_THR5				0x00016700000001a8ULL
#define	POW_QOS_THR6				0x00016700000001b0ULL
#define	POW_QOS_THR7				0x00016700000001b8ULL
#define	POW_QOS_RND0				0x00016700000001c0ULL
#define	POW_QOS_RND1				0x00016700000001c8ULL
#define	POW_QOS_RND2				0x00016700000001d0ULL
#define	POW_QOS_RND3				0x00016700000001d8ULL
#define	POW_QOS_RND4				0x00016700000001e0ULL
#define	POW_QOS_RND5				0x00016700000001e8ULL
#define	POW_QOS_RND6				0x00016700000001f0ULL
#define	POW_QOS_RND7				0x00016700000001f8ULL
#define	POW_WQ_INT				0x0001670000000200ULL
#define	POW_WQ_INT_PC				0x0001670000000208ULL
#define	POW_NW_TIM				0x0001670000000210ULL
#define	POW_ECC_ERR				0x0001670000000218ULL
#define	POW_NOS_CNT				0x0001670000000220ULL
#define	POW_WS_PC0				0x0001670000000280ULL
#define	POW_WS_PC1				0x0001670000000288ULL
#define	POW_WS_PC2				0x0001670000000290ULL
#define	POW_WS_PC3				0x0001670000000298ULL
#define	POW_WS_PC4				0x00016700000002a0ULL
#define	POW_WS_PC5				0x00016700000002a8ULL
#define	POW_WS_PC6				0x00016700000002b0ULL
#define	POW_WS_PC7				0x00016700000002b8ULL
#define	POW_WS_PC8				0x00016700000002c0ULL
#define	POW_WS_PC9				0x00016700000002c8ULL
#define	POW_WS_PC10				0x00016700000002d0ULL
#define	POW_WS_PC11				0x00016700000002d8ULL
#define	POW_WS_PC12				0x00016700000002e0ULL
#define	POW_WS_PC13				0x00016700000002e8ULL
#define	POW_WS_PC14				0x00016700000002f0ULL
#define	POW_WS_PC15				0x00016700000002f8ULL
#define	POW_WA_PC0				0x0001670000000300ULL
#define	POW_WA_PC1				0x0001670000000308ULL
#define	POW_WA_PC2				0x0001670000000310ULL
#define	POW_WA_PC3				0x0001670000000318ULL
#define	POW_WA_PC4				0x0001670000000320ULL
#define	POW_WA_PC5				0x0001670000000328ULL
#define	POW_WA_PC6				0x0001670000000330ULL
#define	POW_WA_PC7				0x0001670000000338ULL
#define	POW_IQ_CNT0				0x0001670000000340ULL
#define	POW_IQ_CNT1				0x0001670000000348ULL
#define	POW_IQ_CNT2				0x0001670000000350ULL
#define	POW_IQ_CNT3				0x0001670000000358ULL
#define	POW_IQ_CNT4				0x0001670000000360ULL
#define	POW_IQ_CNT5				0x0001670000000368ULL
#define	POW_IQ_CNT6				0x0001670000000370ULL
#define	POW_IQ_CNT7				0x0001670000000378ULL
#define	POW_WA_COM_PC				0x0001670000000380ULL
#define	POW_IQ_COM_CNT				0x0001670000000388ULL
#define	POW_TS_PC				0x0001670000000390ULL
#define	POW_DS_PC				0x0001670000000398ULL
#define	POW_BIST_STAT				0x00016700000003f8ULL

#define POW_BASE				0x0001670000000000ULL
#define POW_SIZE				0x400ULL

#define	POW_PP_GRP_MSK0_OFFSET			0x0ULL
#define	POW_PP_GRP_MSK1_OFFSET			0x8ULL
#define	POW_WQ_INT_THR0_OFFSET			0x80ULL
#define	POW_WQ_INT_THR1_OFFSET			0x88ULL
#define	POW_WQ_INT_THR2_OFFSET			0x90ULL
#define	POW_WQ_INT_THR3_OFFSET			0x98ULL
#define	POW_WQ_INT_THR4_OFFSET			0xa0ULL
#define	POW_WQ_INT_THR5_OFFSET			0xa8ULL
#define	POW_WQ_INT_THR6_OFFSET			0xb0ULL
#define	POW_WQ_INT_THR7_OFFSET			0xb8ULL
#define	POW_WQ_INT_THR8_OFFSET			0xc0ULL
#define	POW_WQ_INT_THR9_OFFSET			0xc8ULL
#define	POW_WQ_INT_THR10_OFFSET			0xd0ULL
#define	POW_WQ_INT_THR11_OFFSET			0xd8ULL
#define	POW_WQ_INT_THR12_OFFSET			0xe0ULL
#define	POW_WQ_INT_THR13_OFFSET			0xe8ULL
#define	POW_WQ_INT_THR14_OFFSET			0xf0ULL
#define	POW_WQ_INT_THR15_OFFSET			0xf8ULL
#define	POW_WQ_INT_CNT0_OFFSET			0x100ULL
#define	POW_WQ_INT_CNT1_OFFSET			0x108ULL
#define	POW_WQ_INT_CNT2_OFFSET			0x110ULL
#define	POW_WQ_INT_CNT3_OFFSET			0x118ULL
#define	POW_WQ_INT_CNT4_OFFSET			0x120ULL
#define	POW_WQ_INT_CNT5_OFFSET			0x128ULL
#define	POW_WQ_INT_CNT6_OFFSET			0x130ULL
#define	POW_WQ_INT_CNT7_OFFSET			0x138ULL
#define	POW_WQ_INT_CNT8_OFFSET			0x140ULL
#define	POW_WQ_INT_CNT9_OFFSET			0x148ULL
#define	POW_WQ_INT_CNT10_OFFSET			0x150ULL
#define	POW_WQ_INT_CNT11_OFFSET			0x158ULL
#define	POW_WQ_INT_CNT12_OFFSET			0x160ULL
#define	POW_WQ_INT_CNT13_OFFSET			0x168ULL
#define	POW_WQ_INT_CNT14_OFFSET			0x170ULL
#define	POW_WQ_INT_CNT15_OFFSET			0x178ULL
#define	POW_QOS_THR0_OFFSET			0x180ULL
#define	POW_QOS_THR1_OFFSET			0x188ULL
#define	POW_QOS_THR2_OFFSET			0x190ULL
#define	POW_QOS_THR3_OFFSET			0x198ULL
#define	POW_QOS_THR4_OFFSET			0x1a0ULL
#define	POW_QOS_THR5_OFFSET			0x1a8ULL
#define	POW_QOS_THR6_OFFSET			0x1b0ULL
#define	POW_QOS_THR7_OFFSET			0x1b8ULL
#define	POW_QOS_RND0_OFFSET			0x1c0ULL
#define	POW_QOS_RND1_OFFSET			0x1c8ULL
#define	POW_QOS_RND2_OFFSET			0x1d0ULL
#define	POW_QOS_RND3_OFFSET			0x1d8ULL
#define	POW_QOS_RND4_OFFSET			0x1e0ULL
#define	POW_QOS_RND5_OFFSET			0x1e8ULL
#define	POW_QOS_RND6_OFFSET			0x1f0ULL
#define	POW_QOS_RND7_OFFSET			0x1f8ULL
#define	POW_WQ_INT_OFFSET			0x200ULL
#define	POW_WQ_INT_PC_OFFSET			0x208ULL
#define	POW_NW_TIM_OFFSET			0x210ULL
#define	POW_ECC_ERR_OFFSET			0x218ULL
#define	POW_NOS_CNT_OFFSET			0x220ULL
#define	POW_WS_PC0_OFFSET			0x280ULL
#define	POW_WS_PC1_OFFSET			0x288ULL
#define	POW_WS_PC2_OFFSET			0x290ULL
#define	POW_WS_PC3_OFFSET			0x298ULL
#define	POW_WS_PC4_OFFSET			0x2a0ULL
#define	POW_WS_PC5_OFFSET			0x2a8ULL
#define	POW_WS_PC6_OFFSET			0x2b0ULL
#define	POW_WS_PC7_OFFSET			0x2b8ULL
#define	POW_WS_PC8_OFFSET			0x2c0ULL
#define	POW_WS_PC9_OFFSET			0x2c8ULL
#define	POW_WS_PC10_OFFSET			0x2d0ULL
#define	POW_WS_PC11_OFFSET			0x2d8ULL
#define	POW_WS_PC12_OFFSET			0x2e0ULL
#define	POW_WS_PC13_OFFSET			0x2e8ULL
#define	POW_WS_PC14_OFFSET			0x2f0ULL
#define	POW_WS_PC15_OFFSET			0x2f8ULL
#define	POW_WA_PC0_OFFSET			0x300ULL
#define	POW_WA_PC1_OFFSET			0x308ULL
#define	POW_WA_PC2_OFFSET			0x310ULL
#define	POW_WA_PC3_OFFSET			0x318ULL
#define	POW_WA_PC4_OFFSET			0x320ULL
#define	POW_WA_PC5_OFFSET			0x328ULL
#define	POW_WA_PC6_OFFSET			0x330ULL
#define	POW_WA_PC7_OFFSET			0x338ULL
#define	POW_IQ_CNT0_OFFSET			0x340ULL
#define	POW_IQ_CNT1_OFFSET			0x348ULL
#define	POW_IQ_CNT2_OFFSET			0x350ULL
#define	POW_IQ_CNT3_OFFSET			0x358ULL
#define	POW_IQ_CNT4_OFFSET			0x360ULL
#define	POW_IQ_CNT5_OFFSET			0x368ULL
#define	POW_IQ_CNT6_OFFSET			0x370ULL
#define	POW_IQ_CNT7_OFFSET			0x378ULL
#define	POW_WA_COM_PC_OFFSET			0x380ULL
#define	POW_IQ_COM_CNT_OFFSET			0x388ULL
#define	POW_TS_PC_OFFSET			0x390ULL
#define	POW_DS_PC_OFFSET			0x398ULL
#define	POW_BIST_STAT_OFFSET			0x3f8ULL

/* ---- register bits */

#define	POW_PP_GRP_MSKX_XXX_63_16		0xffffffffffff0000ULL
#define	POW_PP_GRP_MSKX_GRP_MSK			0x000000000000ffffULL
#define	 POW_PP_GRP_MSKX_GRP_MSK_SHIFT		0

#define	POW_WQ_INT_THRX_XXX_63_29		0xffffffffe0000000ULL
#define	POW_WQ_INT_THRX_TC_EN			0x0000000010000000ULL
#define	POW_WQ_INT_THRX_TC_THR			0x000000000f000000ULL
#define	 POW_WQ_INT_THRX_TC_THR_SHIFT		24
#define	POW_WQ_INT_THRX_XXX_23_18		0x0000000000fc0000ULL
#define	POW_WQ_INT_THRX_DS_THR			0x000000000003f000ULL
#define	 POW_WQ_INT_THRX_DS_THR_SHIFT		12
#define	POW_WQ_INT_THRX_XXX_11_6		0x0000000000000fc0ULL
#define	POW_WQ_INT_THRX_IQ_THR			0x000000000000003fULL
#define	 POW_WQ_INT_THRX_IQ_THR_SHIFT		0

#define	POW_WQ_INT_CNTX_XXX_63_28		0xfffffffff0000000ULL
#define	POW_WQ_INT_CNTX_TC_CNT			0x000000000f000000ULL
#define	 POW_WQ_INT_CNTX_TC_CNT_SHIFT		24
#define	POW_WQ_INT_CNTX_XXX_23_18		0x0000000000fc0000ULL
#define	POW_WQ_INT_CNTX_DS_CNT			0x000000000003f000ULL
#define	 POW_WQ_INT_CNTX_DS_CNT_SHIFT		12
#define	POW_WQ_INT_CNTX_XXX_11_6		0x0000000000000fc0ULL
#define	POW_WQ_INT_CNTX_IQ_CNT			0x000000000000003fULL
#define	 POW_WQ_INT_CNTX_IQ_CNT_SHIFT		0

#define	POW_QOS_THRX_XXX_63_55			0xff80000000000000ULL
#define	POW_QOS_THRX_DES_CNT			0x007f000000000000ULL
#define	 POW_QOS_THRX_DES_CNT_SHIFT		48
#define	POW_QOS_THRX_XXX_47_43			0x0000f80000000000ULL
#define	POW_QOS_THRX_BUF_CNT			0x000007f000000000ULL
#define	 POW_QOS_THRX_BUF_CNT_SHIFT		36
#define	POW_QOS_THRX_XXX_35_31			0x0000000f80000000ULL
#define	POW_QOS_THRX_FREE_CNT			0x000000007f000000ULL
#define	 POW_QOS_THRX_FREE_CNT_SHIFT		24
#define	POW_QOS_THRX_XXX_23_18			0x0000000000fc0000ULL
#define	POW_QOS_THRX_MAX_THR			0x000000000003f000ULL
#define	 POW_QOS_THRX_MAX_THR_SHIFT		12
#define	POW_QOS_THRX_XXX_11_6			0x0000000000000fc0ULL
#define	POW_QOS_THRX_MIN_THR			0x000000000000003fULL
#define	 POW_QOS_THRX_MIN_THR_SHIFT		0

#define	POW_QOS_RNDX_XXX_63_32			0xffffffff00000000ULL
#define	POW_QOS_RNDX_RND_P3			0x00000000ff000000ULL
#define	 POW_QOS_RNDX_RND_P3_SHIFT		24
#define	POW_QOS_RNDX_RND_P2			0x0000000000ff0000ULL
#define	 POW_QOS_RNDX_RND_P2_SHIFT		16
#define	POW_QOS_RNDX_RND_P1			0x000000000000ff00ULL
#define	 POW_QOS_RNDX_RND_P1_SHIFT		8
#define	POW_QOS_RNDX_RND			0x00000000000000ffULL
#define	 POW_QOS_RNDX_RND_SHIFT			0

#define	POW_WQ_INT_XXX_63_32			0xffffffff00000000ULL
#define	POW_WQ_INT_IQ_DIS			0x00000000ffff0000ULL
#define	 POW_WQ_INT_IQ_DIS_SHIFT		16
#define	POW_WQ_INT_WQ_INT			0x000000000000ffffULL
#define	 POW_WQ_INT_WQ_INT_SHIFT		0

#define	POW_WQ_INT_PC_XXX_63_60			0xf000000000000000ULL
#define	POW_WQ_INT_PC_PC			0x0fffffff00000000ULL
#define	 POW_WQ_INT_PC_PC_SHIFT			32
#define	POW_WQ_INT_PC_XXX_31_28			0x00000000f0000000ULL
#define	POW_WQ_INT_PC_PC_THR			0x000000000fffff00ULL
#define	 POW_WQ_INT_PC_PC_THR_SHIFT		8
#define	POW_WQ_INT_PC_XXX_7_0			0x00000000000000ffULL

#define	POW_NW_TIM_XXX_63_10			0xfffffffffffffc00ULL
#define	POW_NW_TIM_NW_TIM			0x00000000000003ffULL
#define	 POW_NW_TIM_NW_TIM_SHIFT		0

#define	POW_ECC_ERR_XXX_63_45			0xffffe00000000000ULL
#define	POW_ECC_ERR_IOP_IE			0x00001fff00000000ULL
#define	 POW_ECC_ERR_IOP_IE_SHIFT		32
#define	POW_ECC_ERR_XXX_31_29			0x00000000e0000000ULL
#define	POW_ECC_ERR_IOP				0x000000001fff0000ULL
#define	 POW_ECC_ERR_IOP_SHIFT			16
#define	  POW_ECC_ERR_IOP_CSRPEND		(28) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_DBGPEND		(27) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_ADDWORK		(26) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_ILLOP			(25) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_PEND24		(24) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_PEND23		(23) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_PEND22		(22) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_PEND21		(21) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_TAGNULL		(20) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_TAGNULLNULL		(19) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_ORDATOM		(18) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_NULL			(17) << POW_ECC_ERR_IOP_SHIFTULL
#define	  POW_ECC_ERR_IOP_NULLNULL		(16) << POW_ECC_ERR_IOP_SHIFTULL
#define	POW_ECC_ERR_XXX_15_14			0x000000000000c000ULL
#define	POW_ECC_ERR_RPE_IE			0x0000000000002000ULL
#define	POW_ECC_ERR_RPE				0x0000000000001000ULL
#define	POW_ECC_ERR_XXX_11_9			0x0000000000000e00ULL
#define	POW_ECC_ERR_SYN				0x00000000000001f0ULL
#define	 POW_ECC_ERR_SYN_SHIFT			4
#define	POW_ECC_ERR_DBE_IE			0x0000000000000008ULL
#define	POW_ECC_ERR_SBE_IE			0x0000000000000004ULL
#define	POW_ECC_ERR_DBE				0x0000000000000002ULL
#define	POW_ECC_ERR_SBE				0x0000000000000001ULL

#define	POW_NOS_CNT_XXX_63_7			0xffffffffffffff80ULL
#define	POW_NOS_CNT_NOS_CNT			0x000000000000007fULL
#define	 POW_NOS_CNT_NOS_CNT_SHIFT		0

#define	POW_WS_PC0_XXX_63_32			0xffffffff00000000ULL
#define	POW_WS_PC0_WS_PC			0x00000000ffffffffULL
#define	 POW_WS_PC0_WS_PC_SHIFT			0

#define	POW_WA_PC0_XXX_63_32			0xffffffff00000000ULL
#define	POW_WA_PC0_WA_PC			0x00000000ffffffffULL
#define	 POW_WA_PC0_WA_PC_SHIFT			0

#define	POW_IQ_CNT0_XXX_63_32			0xffffffff00000000ULL
#define	POW_IQ_CNT0_IQ_CNT			0x00000000ffffffffULL
#define	 POW_IQ_CNT0_IQ_CNT_SHIFT		0

#define	POW_WA_COM_PC_XXX_63_32			0xffffffff00000000ULL
#define	POW_WA_COM_PC_WA_PC			0x00000000ffffffffULL
#define	 POW_WA_COM_PC_WA_PC_SHIFT		0

#define	POW_WQ_COM_CNT_XXX_63_32		0xffffffff00000000ULL
#define	POW_WQ_COM_CNT_IQ_CNT			0x00000000ffffffffULL
#define	 POW_WQ_COM_CNT_IQ_CNT_SHIFT		0

#define	POW_TS_PC_XXX_63_32			0xffffffff00000000ULL
#define	POW_TS_PC_TS_PC				0x00000000ffffffffULL
#define	 POW_TS_PC_TS_PC_SHIFT			0

#define	POW_DS_PC_XXX_63_32			0xffffffff00000000ULL
#define	POW_DS_PC_DS_PC				0x00000000ffffffffULL
#define	 POW_DS_PC_DS_PC_SHIFT			0

#define	POW_BIST_STAT_XXX_63_7			0xfffffffffffe0000ULL
#define	POW_BIST_STAT_PP			0x0000000000010000ULL
#define	POW_BIST_STAT_XXX_15_9			0x000000000000fe00ULL
#define	POW_BIST_STAT_CAM			0x0000000000000100ULL
#define	POW_BIST_STAT_NBT1			0x0000000000000080ULL
#define	POW_BIST_STAT_NBT0			0x0000000000000040ULL
#define	POW_BIST_STAT_IDX			0x0000000000000020ULL
#define	POW_BIST_STAT_FIDX			0x0000000000000010ULL
#define	POW_BIST_STAT_NBR1			0x0000000000000008ULL
#define	POW_BIST_STAT_NBR0			0x0000000000000004ULL
#define	POW_BIST_STAT_PEND			0x0000000000000002ULL
#define	POW_BIST_STAT_ADR			0x0000000000000001ULL

/* ---- pow operations */ 

/* pow operations base */ 
#define POW_OPERATION_BASE_IO_BIT		0x0001000000000000ULL
#define POW_OPERATION_BASE_MAJOR_DID		0x0000f80000000000ULL
#define POW_OPERATION_BASE_SUB_DID		0x0000070000000000ULL
#define	POW_OPERATION_BASE_IO_BIT_SHIFT	48
#define	POW_OPERATION_BASE_MAJOR_DID_SHIFT	43
#define	POW_OPERATION_BASE_SUB_DID_SHIFT	40

/* get work load  (subid = 0) */
#define POW_GET_WORK_LOAD_WAIT			0x0000000000000008ULL
#define POW_GET_WORK_LOAD_2_0			0x0000000000000007ULL
#define	POW_GET_WORK_LOAD_WAIT_SHIFT	3
#define	POW_GET_WORK_LOAD_2_0_SHIFT	0

#define POW_GET_WORK_LOAD_RESULT_NO_WORK	0x8000000000000000ULL
#define POW_GET_WORK_LOAD_RESULT_62_40		0x7fffff0000000000ULL
#define POW_GET_WORK_LOAD_RESULT_ADDR		0x000000ffffffffffULL

/* pow status load (subid = 1) */
#define POW_STATUS_LOAD_COREID			0x00000000000003c0ULL
#define POW_STATUS_LOAD_GET_REV			0x0000000000000020ULL
#define POW_STATUS_LOAD_GET_CUR			0x0000000000000010ULL
#define POW_STATUS_LOAD_GET_WQP			0x0000000000000008ULL
#define POW_STATUS_LOAD_GET_2_0			0x0000000000000007ULL
#define	POW_STATUS_LOAD_COREID_SHIFT	6
#define	POW_STATUS_LOAD_GET_REV_SHIFT	5
#define	POW_STATUS_LOAD_GET_CUR_SHIFT	4
#define	POW_STATUS_LOAD_GET_WQP_SHIFT	3
#define	POW_STATUS_LOAD_GET_2_0_SHIFT	0

/* get_cur = 0 and get_wqp = 0 ("pend_tag") */
#define POW_STATUS_LOAD_RESULT_PEND_TAG_XXX_63_62		0xc000000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_SWITCH		0x2000000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_SWITCH_FULL	0x1000000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_SWITCH_NULL	0x0800000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_DESCHED		0x0400000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_DESCHED_SWITCH	0x0200000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_NOSCHED		0x0100000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_NEW_WORK		0x0080000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_NEW_WORK_WAIT	0x0040000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_NULL_RD		0x0020000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_NOSCHED_CLR	0x0010000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_XXX_51		0x0008000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_INDEX		0x0007ff0000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_GRP		0x000000f000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_XXX_35_34		0x0000000c00000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_TYPE		0x0000000300000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_TAG_PEND_TAG		0x00000000ffffffffULL

/* get_cur = 0 and get_wqp = 1 ("pend_wqp") */
#define POW_STATUS_LOAD_RESULT_PEND_WQP_XXX_63_62		0xc000000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_SWITCH		0x2000000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_SWITCH_FULL	0x1000000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_SWITCH_NULL	0x0800000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_DESCHED		0x0400000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_DESCHED_SWITCH	0x0200000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_NOSCHED		0x0100000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_NEW_WORK		0x0080000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_NEW_WORK_WAIT	0x0040000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_NULL_RD		0x0020000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_NOSCHED_CLR	0x0010000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_XXX_51		0x0008000000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_INDEX		0x0007ff0000000000ULL
#define POW_STATUS_LOAD_RESULT_PEND_WQP_PEND_WQP		0x0000000fffffffffULL

/* get_cur = 1 and get_wqp = 0 and get_rev = 0 ("cur_tag_next") */
#define POW_STATUS_LOAD_RESULT_CUR_TAG_NEXT_XXX_63_62		0xc000000000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_NEXT_LINK_INDEX		0x3ff8000000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_NEXT_INDEX		0x0007ff0000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_NEXT_GRP			0x000000f000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_NEXT_HEAD		0x0000000800000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_NEXT_TAIL		0x0000000400000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_NEXT_TAG_TYPE		0x0000000300000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_NEXT_TAG			0x00000000ffffffffULL

/* get_cur = 1 and get_wqp = 0 and get_rev = 1 ("cur_tag_prev") */
#define POW_STATUS_LOAD_RESULT_CUR_TAG_PREV_XXX_63_62		0xc000000000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_PREV_REVLINK_INDEX	0x3ff8000000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_PREV_INDEX		0x0007ff0000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_PREV_GRP			0x000000f000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_PREV_HEAD		0x0000000800000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_PREV_TAIL		0x0000000400000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_PREV_TAG_TYPE		0x0000000300000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_TAG_PREV_TAG			0x00000000ffffffffULL

/* get_cur = 1 and get_wqp = 1 and get_rev = 0 ("cur_wqp_next") */
#define POW_STATUS_LOAD_RESULT_CUR_WQP_NEXT_XXX_63_62		0xc000000000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_WQP_NEXT_LINK_INDEX		0x3ff8000000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_WQP_NEXT_INDEX		0x0007ff0000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_WQP_NEXT_GRP			0x000000f000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_WQP_NEXT_WQP			0x0000000fffffffffULL

/* get_cur = 1 and get_wqp = 1 and get_rev = 1 ("cur_wqp_prev") */
#define POW_STATUS_LOAD_RESULT_CUR_WQP_PREV_XXX_63_62		0xc000000000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_WQP_PREV_REVLINK_INDEX	0x3ff8000000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_WQP_PREV_INDEX		0x0007ff0000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_WQP_PREV_GRP			0x000000f000000000ULL
#define POW_STATUS_LOAD_RESULT_CUR_WQP_PREV_WQP			0x0000000fffffffffULL

/* pow memory load (subid = 2) */
#define POW_MEMORY_LOAD_INDEX		0x000000000000ffe0ULL
#define POW_MEMORY_LOAD_GET_DES		0x0000000000000010ULL
#define POW_MEMORY_LOAD_GET_WQP		0x0000000000000008ULL
#define POW_MEMORY_LOAD_2_0		0x0000000000000007ULL
#define	POW_MEMORY_LOAD_GET_DES_SHIFT	4
#define	POW_MEMORY_LOAD_INDEX_SHIFT	5
#define	POW_MEMORY_LOAD_2_0_SHIFT	0
#define	POW_MEMORY_LOAD_GET_WQP_SHIFT	3

/* get_des = 0 and get_wqp = 0 ("tag") */
#define POW_MEMORY_LOAD_RESULT_TAG_XXX_63_51			0xfff8000000000000ULL
#define POW_MEMORY_LOAD_RESULT_TAG_NEXT_INDEX			0x0007ff0000000000ULL
#define POW_MEMORY_LOAD_RESULT_TAG_GRP				0x000000f000000000ULL
#define POW_MEMORY_LOAD_RESULT_TAG_XXX_35			0x0000000800000000ULL
#define POW_MEMORY_LOAD_RESULT_TAG_TAIL				0x0000000400000000ULL
#define POW_MEMORY_LOAD_RESULT_TAG_TAG_TYPE			0x0000000300000000ULL
#define POW_MEMORY_LOAD_RESULT_TAG_TAG				0x00000000ffffffffULL

/* get_des = 0 and get_wqp = 1 ("wqp") */
#define POW_MEMORY_LOAD_RESULT_WQP_XXX_63_51			0xfff8000000000000ULL
#define POW_MEMORY_LOAD_RESULT_WQP_NEXT_INDEX			0x0007ff0000000000ULL
#define POW_MEMORY_LOAD_RESULT_WQP_GRP				0x000000f000000000ULL
#define POW_MEMORY_LOAD_RESULT_WQP_WQP				0x0000000fffffffffULL

/* get_des = 1 ("desched") */
#define POW_MEMORY_LOAD_RESULT_DESCHED_XXX_63_51		0xfff8000000000000ULL
#define POW_MEMORY_LOAD_RESULT_DESCHED_FWD_INDEX		0x0007ff0000000000ULL
#define POW_MEMORY_LOAD_RESULT_DESCHED_GRP			0x000000f000000000ULL
#define POW_MEMORY_LOAD_RESULT_DESCHED_NOSCHED			0x0000000800000000ULL
#define POW_MEMORY_LOAD_RESULT_DESCHED_PEND_SWITCH		0x0000000400000000ULL
#define POW_MEMORY_LOAD_RESULT_DESCHED_PEND_TYPE		0x0000000300000000ULL
#define POW_MEMORY_LOAD_RESULT_DESCHED_PEND_TAG			0x00000000ffffffffULL

/* pow index/pointer load (subid = 3) */
#define POW_IDXPTR_LOAD_QOSGRP			0x00000000000001e0ULL
#define POW_IDXPTR_LOAD_GET_DES_GET_TAIL	0x0000000000000010ULL
#define POW_IDXPTR_LOAD_GET_RMT			0x0000000000000008ULL
#define POW_IDXPTR_LOAD_2_0			0x0000000000000007ULL
#define	POW_IDXPTR_LOAD_GET_DES_GET_TAIL_SHIFT	4
#define	POW_IDXPTR_LOAD_QOSGRP_SHIFT	5
#define	POW_IDXPTR_LOAD_2_0_SHIFT	0
#define	POW_IDXPTR_LOAD_GET_RMT_SHIFT	3

/* get_rmt = 0 and get_des_get_tail = 0 ("qos") */
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_XXX_63_52		0xfff0000000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_FREE_VAL		0x0008000000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_FREE_ONE		0x0004000000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_XXX_49		0x0002000000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_FREE_HEAD		0x0001ffc000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_XXX_37		0x0000002000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_FREE_TAIL		0x0000001ffc000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_LOC_VAL		0x0000000002000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_LOC_ONE		0x0000000001000000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_XXX_23		0x0000000000800000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_LOC_HEAD		0x00000000007ff000ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_XXX_11		0x0000000000000800ULL
#define POW_IDXPTR_LOAD_RESULT_QOS_FREE_LOC_LOC_TAIL		0x00000000000007ffULL

/* get_rmt = 0 and get_des_get_tail = 1 ("desched") */
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_XXX_63_52	0xfff0000000000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_NOSCHED_VAL	0x0008000000000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_NOSCHED_ONE	0x0004000000000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_XXX_49		0x0002000000000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_NOSCHED_HEAD	0x0001ffc000000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_XXX_37		0x0000002000000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_NOSCHED_TAIL	0x0000001ffc000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_DES_VAL		0x0000000002000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_DES_ONE		0x0000000001000000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_XXX_23		0x0000000000800000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_DES_HEAD		0x00000000007ff000ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_XXX_11		0x0000000000000800ULL
#define POW_IDXPTR_LOAD_RESULT_GRP_NOSCHED_DES_DES_TAIL		0x00000000000007ffULL

/* get_rmt = 1 and get_des_get_tail = 0 ("remote_head") */
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_HEAD_XXX_63_39	0xffffff8000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_HEAD_RMT_IS_HEAD	0x0000004000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_HEAD_RMT_VAL	0x0000002000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_HEAD_RMT_ONE	0x0000001000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_HEAD_RMT_HEAD	0x0000000fffffffffULL

/* get_rmt = 1 and get_des_get_tail = 1 ("remote_tail") */
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_TAIL_XXX_63_39	0xffffff8000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_TAIL_RMT_IS_HEAD	0x0000004000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_TAIL_RMT_VAL	0x0000002000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_TAIL_RMT_ONE	0x0000001000000000ULL
#define POW_IDXPTR_LOAD_RESULT_QUEUE_REMOTE_TAIL_RMT_TAIL	0x0000000fffffffffULL

/* pow index/pointer load (subid = 2) */
#define POW_NULL_RD_LOAD_39_3			0x000000fffffffff8ULL
#define POW_NULL_RD_LOAD_2_0			0x0000000000000007ULL
#define	POW_NULL_RD_LOAD_2_0_SHIFT	0
#define	POW_NULL_RD_LOAD_39_3_SHIFT	3

#define POW_NULL_RD_LOAD_RESULT_63_2		0xfffffffffffffffcULL
#define POW_NULL_RD_LOAD_RESULT_STATUS		0x0000000000000003ULL

/* pow store operations */

#define POW_PHY_ADDR_STORE_ADDR			0x0000000fffffffffULL
#define	POW_PHY_ADDR_STORE_ADDR_SHIFT	0

#define POW_STORE_DATA_NO_SCHED			0x8000000000000000ULL
#define POW_STORE_DATA_62_61			0x6000000000000000ULL
#define POW_STORE_DATA_INDEX			0x1fff000000000000ULL
#define POW_STORE_DATA_OP			0x0000f00000000000ULL
#define POW_STORE_DATA_43_42			0x00000c0000000000ULL
#define POW_STORE_DATA_QOS			0x0000038000000000ULL
#define POW_STORE_DATA_GRP			0x0000007800000000ULL
#define POW_STORE_DATA_TYPE			0x0000000700000000ULL
#define POW_STORE_DATA_TAG			0x00000000ffffffffULL
#define	POW_STORE_DATA_NO_SCHED_SHIFT	63
#define	POW_STORE_DATA_62_61_SHIFT	61
#define	POW_STORE_DATA_INDEX_SHIFT	48
#define	POW_STORE_DATA_OP_SHIFT	44
#define	POW_STORE_DATA_43_42_SHIFT	42
#define	POW_STORE_DATA_QOS_SHIFT	39
#define	POW_STORE_DATA_GRP_SHIFT	35
#define	POW_STORE_DATA_TYPE_SHIFT	32
#define	POW_STORE_DATA_TAG_SHIFT	0

/* pow iobdma operations */ 

/* pow iobdma operations base*/ 
#define POW_IOBDMA_BASE_SCRADDR			0xff00000000000000ULL
#define POW_IOBDMA_BASE_LEN			0x00ff000000000000ULL
#define POW_IOBDMA_BASE_MAJOR_DID		0x0000f80000000000ULL
#define POW_IOBDMA_BASE_SUB_DID			0x0000070000000000ULL
#define POW_IOBDMA_BASE_39_0			0x000000ffffffffffULL
#define	POW_IOBDMA_BASE_SCRADDR_SHIFT	56
#define	POW_IOBDMA_BASE_SUB_DID_SHIFT	40
#define	POW_IOBDMA_BASE_39_0_SHIFT	0
#define	POW_IOBDMA_BASE_LEN_SHIFT	48
#define	POW_IOBDMA_BASE_MAJOR_DID_SHIFT	43

/* pow iobdma get work (subid = 0) */ 
#define POW_IOBDMA_GET_WORK_39_4		0x000000ffffffffffULL
#define POW_IOBDMA_GET_WORK_WAIT		0x0000000000000008ULL
#define POW_IOBDMA_GET_WORK_2_0			0x0000000000000007ULL
#define	POW_IOBDMA_GET_WORK_39_4_SHIFT	0
#define	POW_IOBDMA_GET_WORK_2_0_SHIFT	0
#define	POW_IOBDMA_GET_WORK_WAIT_SHIFT	3

#define POW_IOBDMA_GET_WORK_RESULT_NO_WORK	0x8000000000000000ULL
#define POW_IOBDMA_GET_WORK_RESULT_62_40	0x7fffff0000000000ULL
#define POW_IOBDMA_GET_WORK_RESULT_ADDR		0x000000ffffffffffULL

/* pow iobdma null rd (subid = 4) */
#define POW_IOBDMA_NULL_RD_39_0			0x000000ffffffffffULL
#define	POW_IOBDMA_NULL_RD_39_0_SHIFT	0

#define POW_IOBDMA_NULL_RD_RESULT_63_2		0xfffffffffffffffcULL
#define POW_IOBDMA_NULL_RD_RESULT_STATUS	0x0000000000000003ULL

/* ------------------------------------------------------------------------- */

/* Work Queue Entry */

#define	POW_WQE_WORD0_XXX_63_40			0xffffff0000000000ULL
#define	POW_WQE_WORD0_NEXT			0x000000ffffffffffULL
#define	POW_WQE_WORD0_NEXT_SHIFT	0

#define	POW_WQE_WORD1_XXX_63_42			0xfffffc0000000000ULL
#define	POW_WQE_WORD1_QOS			0x0000038000000000ULL
#define	POW_WQE_WORD1_GRP			0x0000007800000000ULL
#define	POW_WQE_WORD1_TT			0x0000000700000000ULL
#define	POW_WQE_WORD1_TAG			0x00000000ffffffffULL
#define	POW_WQE_WORD1_GRP_SHIFT	35
#define	POW_WQE_WORD1_QOS_SHIFT	39
#define	POW_WQE_WORD1_TT_SHIFT	32
#define	POW_WQE_WORD1_TAG_SHIFT	0

#endif /* _CN30XXPOWREG_H_ */
