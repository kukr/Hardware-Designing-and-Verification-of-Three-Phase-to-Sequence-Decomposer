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
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0, 0, 0};
static int ng4[] = {31, 0};
static int ng5[] = {1, 0};



static void Always_35_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t26[8];
    char t38[8];
    char t40[16];
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
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    char *t52;
    char *t53;
    char *t54;

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
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t7, 32, t6, 32);
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

LAB17:    memcpy(t4, t38, 8);

LAB18:    t39 = (t0 + 1904);
    xsi_vlogvar_assign_value(t39, t4, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 2064);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 33);
    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t9, 32);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t3, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t6) != 0)
        goto LAB41;

LAB42:    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB43;

LAB44:    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t9) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t5) > 0)
        goto LAB49;

LAB50:    memcpy(t4, t38, 8);

LAB51:    t42 = (t0 + 1744);
    xsi_vlogvar_assign_value(t42, t4, 0, 0, 32);
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
    memset(t26, 0, 8);
    t20 = (t26 + 4);
    t28 = (t27 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    *((unsigned int *)t26) = t30;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB20;

LAB19:    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 4294967295U);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t36 & 4294967295U);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t26, 32, t37, 32);
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 32, t21, 32, t38, 32);
    goto LAB18;

LAB16:    memcpy(t4, t21, 8);
    goto LAB18;

LAB20:    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t26) = (t31 | t32);
    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t20) = (t33 | t34);
    goto LAB19;

LAB22:    xsi_set_current_line(42, ng0);

LAB24:    xsi_set_current_line(43, ng0);
    t15 = (t0 + 1904);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    memset(t5, 0, 8);
    t21 = (t5 + 4);
    t27 = (t20 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t5) = t19;
    t22 = *((unsigned int *)t27);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t28 = (t0 + 2224);
    t37 = (t28 + 56U);
    t39 = *((char **)t37);
    memset(t8, 0, 8);
    t41 = (t8 + 4);
    t42 = (t39 + 4);
    t25 = *((unsigned int *)t39);
    t29 = (t25 >> 0);
    *((unsigned int *)t8) = t29;
    t30 = *((unsigned int *)t42);
    t31 = (t30 >> 0);
    *((unsigned int *)t41) = t31;
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t32 & 2147483647U);
    t33 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t33 & 2147483647U);
    xsi_vlogtype_concat(t40, 33, 32, 2U, t8, 31, t5, 1);
    t43 = (t0 + 2224);
    xsi_vlogvar_assign_value(t43, t40, 0, 0, 33);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 2147483647U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 2147483647U);
    t15 = (t0 + 1904);
    t16 = (t0 + 1904);
    t20 = (t16 + 72U);
    t21 = *((char **)t20);
    t27 = ((char*)((ng4)));
    t28 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t5, t8, t26, ((int*)(t21)), 2, t27, 32, 1, t28, 32, 1);
    t37 = (t5 + 4);
    t18 = *((unsigned int *)t37);
    t44 = (!(t18));
    t39 = (t8 + 4);
    t19 = *((unsigned int *)t39);
    t45 = (!(t19));
    t46 = (t44 && t45);
    t41 = (t26 + 4);
    t22 = *((unsigned int *)t41);
    t47 = (!(t22));
    t48 = (t46 && t47);
    if (t48 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2064);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    xsi_vlog_unsigned_minus(t40, 33, t6, 33, t15, 32);
    t16 = (t0 + 2224);
    xsi_vlogvar_assign_value(t16, t40, 0, 0, 33);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2224);
    t9 = (t7 + 72U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t4, 32, t6, t15, 2, t16, 32, 1);
    t20 = ((char*)((ng5)));
    memset(t5, 0, 8);
    t21 = (t4 + 4);
    t27 = (t20 + 4);
    t10 = *((unsigned int *)t4);
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
        goto LAB30;

LAB27:    if (t23 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t5) = 1;

LAB30:    t37 = (t5 + 4);
    t29 = *((unsigned int *)t37);
    t30 = (~(t29));
    t31 = *((unsigned int *)t5);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1904);
    t6 = (t0 + 1904);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t15, 32, 1);
    t16 = (t4 + 4);
    t10 = *((unsigned int *)t16);
    t44 = (!(t10));
    if (t44 == 1)
        goto LAB37;

LAB38:
LAB33:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t9 = (t0 + 2384);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    goto LAB21;

LAB25:    t23 = *((unsigned int *)t26);
    t49 = (t23 + 0);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t8);
    t50 = (t24 - t25);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(t15, t4, t49, *((unsigned int *)t8), t51);
    goto LAB26;

LAB29:    t28 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(46, ng0);

LAB34:    xsi_set_current_line(47, ng0);
    t39 = ((char*)((ng1)));
    t41 = (t0 + 1904);
    t42 = (t0 + 1904);
    t43 = (t42 + 72U);
    t52 = *((char **)t43);
    t53 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t8, t52, 2, t53, 32, 1);
    t54 = (t8 + 4);
    t34 = *((unsigned int *)t54);
    t44 = (!(t34));
    if (t44 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2064);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    xsi_vlog_unsigned_add(t40, 33, t6, 33, t15, 32);
    t16 = (t0 + 2224);
    xsi_vlogvar_assign_value(t16, t40, 0, 0, 33);
    goto LAB33;

LAB35:    xsi_vlogvar_assign_value(t41, t39, 0, *((unsigned int *)t8), 1);
    goto LAB36;

LAB37:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB38;

LAB39:    *((unsigned int *)t5) = 1;
    goto LAB42;

LAB41:    t7 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB42;

LAB43:    t15 = (t0 + 1904);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    goto LAB44;

LAB45:    t21 = (t0 + 1904);
    t27 = (t21 + 56U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t37 = (t26 + 4);
    t39 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    *((unsigned int *)t26) = t30;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t39) != 0)
        goto LAB53;

LAB52:    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 4294967295U);
    t36 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t36 & 4294967295U);
    t41 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t26, 32, t41, 32);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t4, 32, t20, 32, t38, 32);
    goto LAB51;

LAB49:    memcpy(t4, t20, 8);
    goto LAB51;

LAB53:    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t39);
    *((unsigned int *)t26) = (t31 | t32);
    t33 = *((unsigned int *)t37);
    t34 = *((unsigned int *)t39);
    *((unsigned int *)t37) = (t33 | t34);
    goto LAB52;

}


extern void work_m_00000000000056802400_2465034998_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000000056802400_2465034998", "isim/test_SEQ_DECOMPOSER_isim_beh.exe.sim/work/m_00000000000056802400_2465034998.didat");
	xsi_register_executes(pe);
}
