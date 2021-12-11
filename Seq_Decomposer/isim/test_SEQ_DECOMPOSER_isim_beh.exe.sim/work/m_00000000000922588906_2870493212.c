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
static const char *ng0 = "F:/BTP/codes/Seq_Decomposer/SCE_module.v";
static int ng1[] = {3000, 0};
static int ng2[] = {0, 0};



static void Cont_39_0(char *t0)
{
    char t6[8];
    char t12[8];
    char t13[8];
    char t19[8];
    char t20[8];
    char t27[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 6184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 4944);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t3, 14, t5, 12);
    t7 = (t0 + 4304);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1664U);
    t11 = *((char **)t10);
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t9, 16, t11, 14);
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t6, 32, t12, 32);
    t10 = (t0 + 4784);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 4144);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t15, 16, t18, 14);
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t13, 32, t19, 32);
    t21 = (t0 + 4464);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 3984);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    xsi_vlog_signed_multiply(t27, 32, t23, 16, t26, 14);
    t28 = (t0 + 4624);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 1824U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    xsi_vlog_signed_multiply(t33, 32, t30, 16, t32, 14);
    memset(t34, 0, 8);
    xsi_vlog_signed_add(t34, 32, t27, 32, t33, 32);
    memset(t35, 0, 8);
    xsi_vlog_signed_minus(t35, 32, t20, 32, t34, 32);
    t31 = (t0 + 7624);
    t36 = (t31 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t35, 8);
    xsi_driver_vfirst_trans(t31, 0, 31);
    t40 = (t0 + 7496);
    *((int *)t40) = 1;

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char t6[8];
    char t13[8];
    char t14[8];
    char t20[8];
    char t21[8];
    char t26[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 6432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 4944);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t3, 14, t5, 12);
    t7 = (t0 + 4784);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3984);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t9, 16, t12, 14);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t13, 32);
    t15 = (t0 + 4304);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 1824U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    xsi_vlog_signed_multiply(t20, 32, t17, 16, t19, 14);
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t14, 32, t20, 32);
    t18 = (t0 + 4624);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 1664U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_multiply(t26, 32, t23, 16, t25, 14);
    t24 = (t0 + 4464);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 4144);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    xsi_vlog_signed_multiply(t32, 32, t28, 16, t31, 14);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t26, 32, t32, 32);
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t21, 32, t33, 32);
    t35 = (t0 + 7688);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t34, 8);
    xsi_driver_vfirst_trans(t35, 0, 31);
    t40 = (t0 + 7512);
    *((int *)t40) = 1;

LAB1:    return;
}

static void Cont_41_2(char *t0)
{
    char t5[8];
    char t7[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 6680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 1664U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 14, t4, 14);
    t2 = (t0 + 1824U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 14);
    t2 = (t0 + 4944);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t7, 32, t9, 12);
    t11 = (t0 + 7752);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 8);
    xsi_driver_vfirst_trans(t11, 0, 31);
    t16 = (t0 + 7528);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_42_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Always_52_4(char *t0)
{
    char t13[8];
    char t14[8];
    char t23[8];
    char t24[8];
    char t32[8];
    char t70[8];
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;

LAB0:    t1 = (t0 + 7176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 7544);
    *((int *)t2) = 1;
    t3 = (t0 + 7208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(61, ng0);

LAB10:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 5264);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_signed_greatereq(t13, 32, t3, 32, t5, 32);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t11) != 0)
        goto LAB13;

LAB14:    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB15;

LAB16:    memcpy(t32, t14, 8);

LAB17:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t0 + 5264);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_signed_greatereq(t13, 32, t3, 32, t5, 32);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t11) != 0)
        goto LAB30;

LAB31:    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB32;

LAB33:    memcpy(t32, t14, 8);

LAB34:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5264);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_signed_greatereq(t13, 32, t3, 32, t5, 32);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t11) != 0)
        goto LAB47;

LAB48:    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB49;

LAB50:    memcpy(t32, t14, 8);

LAB51:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 3824);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 14);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 3984);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 14);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 4144);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 14);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3824);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 14);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    goto LAB8;

LAB11:    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB15:    t19 = (t0 + 1984U);
    t20 = *((char **)t19);
    t19 = (t0 + 5104);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    xsi_vlog_signed_leq(t23, 32, t20, 32, t22, 32);
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t25) != 0)
        goto LAB20;

LAB21:    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t24);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t14 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t24) = 1;
    goto LAB21;

LAB20:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB22:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t14 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t14);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB24;

LAB25:    xsi_set_current_line(64, ng0);
    t71 = (t0 + 1984U);
    t72 = *((char **)t71);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 0);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 16383U);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 16383U);
    t80 = (t0 + 3504);
    xsi_vlogvar_assign_value(t80, t70, 0, 0, 14);
    goto LAB27;

LAB28:    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB30:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB31;

LAB32:    t19 = (t0 + 2144U);
    t20 = *((char **)t19);
    t19 = (t0 + 5104);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    xsi_vlog_signed_leq(t23, 32, t20, 32, t22, 32);
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t25) != 0)
        goto LAB37;

LAB38:    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t24);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t14 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t24) = 1;
    goto LAB38;

LAB37:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB38;

LAB39:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t14 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t14);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB41;

LAB42:    xsi_set_current_line(66, ng0);
    t71 = (t0 + 2144U);
    t72 = *((char **)t71);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 0);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 16383U);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 16383U);
    t80 = (t0 + 3664);
    xsi_vlogvar_assign_value(t80, t70, 0, 0, 14);
    goto LAB44;

LAB45:    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB47:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB48;

LAB49:    t19 = (t0 + 2304U);
    t20 = *((char **)t19);
    t19 = (t0 + 5104);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    xsi_vlog_signed_leq(t23, 32, t20, 32, t22, 32);
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t25) != 0)
        goto LAB54;

LAB55:    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t24);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t14 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB51;

LAB52:    *((unsigned int *)t24) = 1;
    goto LAB55;

LAB54:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB55;

LAB56:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t14 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t14);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB58;

LAB59:    xsi_set_current_line(68, ng0);
    t71 = (t0 + 2304U);
    t72 = *((char **)t71);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 0);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 16383U);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 16383U);
    t80 = (t0 + 3344);
    xsi_vlogvar_assign_value(t80, t70, 0, 0, 14);
    goto LAB61;

}


extern void work_m_00000000000922588906_2870493212_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_40_1,(void *)Cont_41_2,(void *)Cont_42_3,(void *)Always_52_4};
	xsi_register_didat("work_m_00000000000922588906_2870493212", "isim/test_SEQ_DECOMPOSER_isim_beh.exe.sim/work/m_00000000000922588906_2870493212.didat");
	xsi_register_executes(pe);
}
