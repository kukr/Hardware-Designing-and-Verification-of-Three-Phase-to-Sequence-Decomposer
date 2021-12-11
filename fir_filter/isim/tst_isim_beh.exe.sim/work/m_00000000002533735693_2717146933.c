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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/shubh/Google Drive/Cirriculum4_1/BTP/FIR/fir_filter/module_fir.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {5U, 0U};
static int ng12[] = {5, 0};



static void Initial_116_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(117, ng0);

LAB2:    xsi_set_current_line(118, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2632);
    t5 = (t0 + 2632);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2632);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(119, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2632);
    t5 = (t0 + 2632);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2632);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(120, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2632);
    t5 = (t0 + 2632);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2632);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(121, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2632);
    t5 = (t0 + 2632);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2632);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(122, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 2632);
    t5 = (t0 + 2632);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2632);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(123, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 2632);
    t5 = (t0 + 2632);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2632);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

}

static void Initial_134_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(135, ng0);

LAB2:    xsi_set_current_line(136, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2952);
    t5 = (t0 + 2952);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2952);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(137, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2952);
    t5 = (t0 + 2952);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2952);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(138, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2952);
    t5 = (t0 + 2952);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2952);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(139, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2952);
    t5 = (t0 + 2952);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2952);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(140, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 2952);
    t5 = (t0 + 2952);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2952);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(141, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 2952);
    t5 = (t0 + 2952);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2952);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

}

static void Always_147_2(char *t0)
{
    char t15[8];
    char t16[8];
    char t17[8];
    char t38[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t37;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(148, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4336);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(149, ng0);
    t6 = (t0 + 2072U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(158, ng0);

LAB18:    xsi_set_current_line(159, ng0);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 768);
    t3 = *((char **)t2);
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB19:    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greatereq(t15, 32, t4, 32, t5, 32);
    t6 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = (t0 + 2952);
    t4 = (t0 + 2952);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2952);
    t13 = (t7 + 64U);
    t14 = *((char **)t13);
    t18 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t15, t16, t6, t14, 2, 1, t18, 32, 1);
    t19 = (t15 + 4);
    t8 = *((unsigned int *)t19);
    t28 = (!(t8));
    t20 = (t16 + 4);
    t9 = *((unsigned int *)t20);
    t31 = (!(t9));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(166, ng0);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB27:    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 768);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_leq(t15, 32, t4, 32, t6, 32);
    t5 = (t15 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB28;

LAB29:
LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4336);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(150, ng0);

LAB11:    xsi_set_current_line(151, ng0);
    xsi_set_current_line(151, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 3112);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB12:    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 768);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_leq(t15, 32, t4, 32, t6, 32);
    t5 = (t15 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    goto LAB10;

LAB13:    xsi_set_current_line(152, ng0);

LAB15:    xsi_set_current_line(153, ng0);
    t7 = ((char*)((ng2)));
    t13 = (t0 + 2952);
    t14 = (t0 + 2952);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2952);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3112);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t16, t17, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t17 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t6 = (t0 + 3112);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 32);
    goto LAB12;

LAB16:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t17);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t13, t7, 0, *((unsigned int *)t17), t36);
    goto LAB17;

LAB20:    xsi_set_current_line(160, ng0);

LAB22:    xsi_set_current_line(161, ng0);
    t7 = (t0 + 2952);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t18 = (t0 + 2952);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2952);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 3112);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t29 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t26, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t16, 8, t14, t20, t23, 2, 1, t17, 32, 1);
    t37 = (t0 + 2952);
    t40 = (t0 + 2952);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 2952);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t46 = (t0 + 3112);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t38, t39, t42, t45, 2, 1, t48, 32, 1);
    t49 = (t38 + 4);
    t27 = *((unsigned int *)t49);
    t28 = (!(t27));
    t50 = (t39 + 4);
    t30 = *((unsigned int *)t50);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t4, 32, t5, 32);
    t6 = (t0 + 3112);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 32);
    goto LAB19;

LAB23:    t33 = *((unsigned int *)t38);
    t34 = *((unsigned int *)t39);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t37, t16, 0, *((unsigned int *)t39), t36);
    goto LAB24;

LAB25:    t10 = *((unsigned int *)t15);
    t11 = *((unsigned int *)t16);
    t35 = (t10 - t11);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t16), t36);
    goto LAB26;

LAB28:    xsi_set_current_line(167, ng0);

LAB30:    xsi_set_current_line(168, ng0);
    t7 = (t0 + 2792);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t18 = (t0 + 2952);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2952);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2952);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t29 = (t0 + 3112);
    t37 = (t29 + 56U);
    t40 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t16, 16, t20, t23, t26, 2, 1, t40, 32, 1);
    t41 = (t0 + 2632);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t0 + 2632);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 2632);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 3112);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t17, 8, t43, t46, t49, 2, 1, t52, 32, 1);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_rshift(t38, 16, t16, 16, t17, 8);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 16, t14, 16, t38, 16);
    t53 = (t0 + 2792);
    xsi_vlogvar_assign_value(t53, t39, 0, 0, 16);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t6 = (t0 + 3112);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 32);
    goto LAB27;

}

static void Cont_175_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 5112);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002533735693_2717146933_init()
{
	static char *pe[] = {(void *)Initial_116_0,(void *)Initial_134_1,(void *)Always_147_2,(void *)Cont_175_3};
	xsi_register_didat("work_m_00000000002533735693_2717146933", "isim/tst_isim_beh.exe.sim/work/m_00000000002533735693_2717146933.didat");
	xsi_register_executes(pe);
}
