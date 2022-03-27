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
static const char *ng0 = "/home/rohitlinux/VERILOG CODES/alu/alu.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {0U, 4294967295U};



static void Always_29_0(char *t0)
{
    char t6[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);

LAB14:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t28, 3);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 3, t2, 3);
    if (t30 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB33:    goto LAB12;

LAB15:    xsi_set_current_line(34, ng0);
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    t31 = (t0 + 1368U);
    t33 = *((char **)t31);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 32, t33, 32);
    t31 = (t0 + 1928);
    xsi_vlogvar_assign_value(t31, t34, 0, 0, 32);
    goto LAB33;

LAB17:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 32, t5, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    goto LAB33;

LAB19:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t3, 32);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB33;

LAB21:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 32, t3, 32);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB33;

LAB23:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB33;

LAB25:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB35;

LAB34:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t6) = t11;
    t3 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB36;

LAB37:
LAB38:    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 | t10);
    *((unsigned int *)t6) = t11;
    t3 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB39;

LAB40:
LAB41:    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 32);
    goto LAB33;

LAB35:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t13 | t14);
    goto LAB34;

LAB36:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t17 | t18);
    t21 = (t4 + 4);
    t22 = (t5 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t35 = (~(t27));
    t36 = (t20 & t24);
    t37 = (t26 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t40 & t38);
    t41 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t41 & t39);
    t42 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t42 & t38);
    t43 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t43 & t39);
    goto LAB38;

LAB39:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t17 | t18);
    t21 = (t4 + 4);
    t22 = (t5 + 4);
    t19 = *((unsigned int *)t21);
    t20 = (~(t19));
    t23 = *((unsigned int *)t4);
    t36 = (t23 & t20);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t37 = (t26 & t25);
    t27 = (~(t36));
    t35 = (~(t37));
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t27);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB41;

}


extern void work_m_05100929534315895307_2725559894_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_05100929534315895307_2725559894", "isim/alu_tb_isim_beh.exe.sim/work/m_05100929534315895307_2725559894.didat");
	xsi_register_executes(pe);
}
