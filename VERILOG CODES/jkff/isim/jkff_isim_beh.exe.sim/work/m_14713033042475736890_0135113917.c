/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/rohitlinux/VERILOG CODES/jkff/jkff.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};



static void Always_27_0(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB9:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB20:
LAB8:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t11) == 0)
        goto LAB27;

LAB29:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB30:    t15 = (t14 + 4);
    t16 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    *((unsigned int *)t14) = t19;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB32;

LAB31:    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 1U);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 1U);
    t17 = (t0 + 1928);
    xsi_vlogvar_assign_value(t17, t14, 0, 0, 1);
    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB20;

LAB12:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB20;

LAB14:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB20;

LAB16:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t14, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t12) == 0)
        goto LAB21;

LAB23:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;

LAB24:    t16 = (t14 + 4);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    t19 = (~(t18));
    *((unsigned int *)t14) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB26;

LAB25:    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t0 + 1768);
    xsi_vlogvar_assign_value(t26, t14, 0, 0, 1);
    goto LAB20;

LAB21:    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB26:    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t14) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB25;

LAB27:    *((unsigned int *)t14) = 1;
    goto LAB30;

LAB32:    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t14) = (t20 | t21);
    t22 = *((unsigned int *)t15);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t22 | t23);
    goto LAB31;

}


extern void work_m_14713033042475736890_0135113917_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_14713033042475736890_0135113917", "isim/jkff_isim_beh.exe.sim/work/m_14713033042475736890_0135113917.didat");
	xsi_register_executes(pe);
}
