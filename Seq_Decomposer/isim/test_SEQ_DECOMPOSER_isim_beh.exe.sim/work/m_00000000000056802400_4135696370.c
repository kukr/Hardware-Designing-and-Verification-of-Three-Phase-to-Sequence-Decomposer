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
static const char *ng0 = "F:/BTP/codes/Seq_Decomposer/division.v";
static int ng1[] = {0, 0, 0, 0};
static unsigned int ng2[] = {1U, 0U, 0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {35, 0};
static int ng5[] = {1, 0};



static void Always_35_0(char *t0)
{
    char t4[16];
    char t5[8];
    char t8[16];
    char t26[16];
    char t28[16];
    char t30[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t6 = (t0 + 1184U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    xsi_vlog_signed_greater(t8, 36, t7, 36, t6, 32);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t9) != 0)
        goto LAB8;

LAB9:    t16 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB10;

LAB11:    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t16);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t16) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t28, 16);

LAB18:    t29 = (t0 + 1904);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 36);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 2064);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 36);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 37);
    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t6, 32, t9, 32);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_signed_greater(t8, 36, t3, 36, t2, 32);
    memset(t5, 0, 8);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t6) != 0)
        goto LAB39;

LAB40:    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB41;

LAB42:    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t9) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t5) > 0)
        goto LAB47;

LAB48:    memcpy(t4, t28, 16);

LAB49:    t32 = (t0 + 1744);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 36);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 1184U);
    t21 = *((char **)t20);
    goto LAB11;

LAB12:    t20 = (t0 + 1184U);
    t27 = *((char **)t20);
    xsi_vlogtype_unsigned_bit_neg(t26, 36, t27, 36);
    t20 = ((char*)((ng2)));
    xsi_vlog_unsigned_add(t28, 36, t26, 36, t20, 36);
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 36, t21, 36, t28, 36);
    goto LAB18;

LAB16:    memcpy(t4, t21, 16);
    goto LAB18;

LAB20:    xsi_set_current_line(42, ng0);

LAB22:    xsi_set_current_line(43, ng0);
    t15 = (t0 + 1904);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t27 = (t20 + 8);
    t29 = (t20 + 12);
    t17 = *((unsigned int *)t27);
    t18 = (t17 >> 3);
    t19 = (t18 & 1);
    *((unsigned int *)t30) = t19;
    t22 = *((unsigned int *)t29);
    t23 = (t22 >> 3);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t31 = (t0 + 2224);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_get_part_select_value(t8, 35, t33, 34, 0);
    xsi_vlogtype_concat(t4, 37, 36, 2U, t8, 35, t30, 1);
    t34 = (t0 + 2224);
    xsi_vlogvar_assign_value(t34, t4, 0, 0, 37);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t4, 35, t6, 34, 0);
    t7 = (t0 + 1904);
    t9 = (t0 + 1904);
    t15 = (t9 + 72U);
    t16 = *((char **)t15);
    t20 = ((char*)((ng4)));
    t21 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t5, t30, t35, ((int*)(t16)), 2, t20, 32, 1, t21, 32, 1);
    t27 = (t5 + 4);
    t10 = *((unsigned int *)t27);
    t36 = (!(t10));
    t29 = (t30 + 4);
    t11 = *((unsigned int *)t29);
    t37 = (!(t11));
    t38 = (t36 && t37);
    t31 = (t35 + 4);
    t12 = *((unsigned int *)t31);
    t39 = (!(t12));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2064);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    xsi_vlog_unsigned_minus(t4, 37, t6, 37, t15, 36);
    t16 = (t0 + 2224);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 37);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2224);
    t9 = (t7 + 72U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t5, 32, t6, t15, 2, t16, 32, 1);
    t20 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t21 = (t5 + 4);
    t27 = (t20 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t21);
    t14 = *((unsigned int *)t27);
    t17 = (t13 ^ t14);
    t18 = (t12 | t17);
    t19 = *((unsigned int *)t21);
    t22 = *((unsigned int *)t27);
    t23 = (t19 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB28;

LAB25:    if (t23 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t30) = 1;

LAB28:    t31 = (t30 + 4);
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t30);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1904);
    t6 = (t0 + 1904);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t5, t9, 2, t15, 32, 1);
    t16 = (t5 + 4);
    t10 = *((unsigned int *)t16);
    t36 = (!(t10));
    if (t36 == 1)
        goto LAB35;

LAB36:
LAB31:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t9 = (t0 + 2384);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 32);
    goto LAB19;

LAB23:    t13 = *((unsigned int *)t35);
    t41 = (t13 + 0);
    t14 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t30);
    t42 = (t14 - t17);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t7, t4, t41, *((unsigned int *)t30), t43);
    goto LAB24;

LAB27:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(46, ng0);

LAB32:    xsi_set_current_line(47, ng0);
    t32 = ((char*)((ng3)));
    t33 = (t0 + 1904);
    t34 = (t0 + 1904);
    t49 = (t34 + 72U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t35, t50, 2, t51, 32, 1);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t36 = (!(t53));
    if (t36 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2064);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    xsi_vlog_unsigned_add(t4, 37, t6, 37, t15, 36);
    t16 = (t0 + 2224);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 37);
    goto LAB31;

LAB33:    xsi_vlogvar_assign_value(t33, t32, 0, *((unsigned int *)t35), 1);
    goto LAB34;

LAB35:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB36;

LAB37:    *((unsigned int *)t5) = 1;
    goto LAB40;

LAB39:    t7 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB40;

LAB41:    t15 = (t0 + 1904);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    goto LAB42;

LAB43:    t21 = (t0 + 1904);
    t27 = (t21 + 56U);
    t29 = *((char **)t27);
    xsi_vlogtype_unsigned_bit_neg(t26, 36, t29, 36);
    t31 = ((char*)((ng2)));
    xsi_vlog_unsigned_add(t28, 36, t26, 36, t31, 36);
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t4, 36, t20, 36, t28, 36);
    goto LAB49;

LAB47:    memcpy(t4, t20, 16);
    goto LAB49;

}


extern void work_m_00000000000056802400_4135696370_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000000056802400_4135696370", "isim/test_SEQ_DECOMPOSER_isim_beh.exe.sim/work/m_00000000000056802400_4135696370.didat");
	xsi_register_executes(pe);
}
