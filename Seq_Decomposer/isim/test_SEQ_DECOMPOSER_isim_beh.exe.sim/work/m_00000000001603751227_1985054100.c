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
static const char *ng0 = "F:/BTP/codes/Seq_Decomposer/FREQ_measure.v";
static int ng1[] = {800000, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void NetDecl_38_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 16777215U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 23U);

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t27[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3248);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t31 = *((unsigned int *)t4);
    t32 = (~(t31));
    t33 = *((unsigned int *)t19);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t35 = (t0 + 5624);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t39, 0, 8);
    t40 = 16777215U;
    t41 = t40;
    t42 = (t3 + 4);
    t43 = *((unsigned int *)t3);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t42);
    t41 = (t41 & t44);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 | t40);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t47 | t41);
    xsi_driver_vfirst_trans(t35, 0, 23);
    t48 = (t0 + 5464);
    *((int *)t48) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = (t0 + 3248);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng3)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t25, 16, t26, 32);
    t28 = (t0 + 2208U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_multiply(t30, 32, t27, 32, t29, 8);
    goto LAB14;

LAB15:    t28 = ((char*)((ng3)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t30, 32, t28, 32);
    goto LAB21;

LAB19:    memcpy(t3, t30, 8);
    goto LAB21;

}

static void Always_46_2(char *t0)
{
    char t16[8];
    char t17[8];
    char t26[8];
    char t27[8];
    char t35[8];
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
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    t3 = (t0 + 5176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);

LAB10:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 14);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3568);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 2);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 16);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB8;

LAB12:    xsi_set_current_line(58, ng0);

LAB21:    xsi_set_current_line(59, ng0);
    t11 = (t0 + 3408);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t14, 14, t15, 32);
    memset(t17, 0, 8);
    t18 = (t16 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t18) != 0)
        goto LAB24;

LAB25:    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB26;

LAB27:    memcpy(t35, t17, 8);

LAB28:    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(62, ng0);

LAB39:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB38:    goto LAB20;

LAB14:    xsi_set_current_line(69, ng0);

LAB40:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 3408);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_greatereq(t16, 32, t11, 14, t12, 32);
    memset(t17, 0, 8);
    t14 = (t16 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t14) != 0)
        goto LAB43;

LAB44:    t18 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB45;

LAB46:    memcpy(t35, t17, 8);

LAB47:    t49 = (t35 + 4);
    t68 = *((unsigned int *)t49);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(73, ng0);

LAB58:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 16, t11, 32);
    t12 = (t0 + 3248);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 16);

LAB57:    goto LAB20;

LAB16:    xsi_set_current_line(80, ng0);

LAB59:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 3408);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t11, 14, t12, 32);
    memset(t17, 0, 8);
    t14 = (t16 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t14) != 0)
        goto LAB62;

LAB63:    t18 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB64;

LAB65:    memcpy(t35, t17, 8);

LAB66:    t49 = (t35 + 4);
    t68 = *((unsigned int *)t49);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(84, ng0);

LAB77:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 16, t11, 32);
    t12 = (t0 + 3248);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 16);

LAB76:    goto LAB20;

LAB18:    xsi_set_current_line(91, ng0);

LAB78:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2368U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 65535U);
    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 65535U);
    t12 = (t0 + 3088);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 16);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB20;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB24:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    t24 = (t0 + 2048U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng2)));
    memset(t26, 0, 8);
    xsi_vlog_signed_greatereq(t26, 32, t25, 14, t24, 32);
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t28) != 0)
        goto LAB31;

LAB32:    t36 = *((unsigned int *)t17);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t17 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t27) = 1;
    goto LAB32;

LAB31:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB32;

LAB33:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t17 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t17);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB35;

LAB36:    xsi_set_current_line(60, ng0);
    t73 = ((char*)((ng5)));
    t74 = (t0 + 3728);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 2);
    goto LAB38;

LAB41:    *((unsigned int *)t17) = 1;
    goto LAB44;

LAB43:    t15 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB44;

LAB45:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng2)));
    memset(t26, 0, 8);
    xsi_vlog_signed_less(t26, 32, t20, 14, t19, 32);
    memset(t27, 0, 8);
    t24 = (t26 + 4);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t24) != 0)
        goto LAB50;

LAB51:    t36 = *((unsigned int *)t17);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t28 = (t17 + 4);
    t34 = (t27 + 4);
    t39 = (t35 + 4);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t39);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t27) = 1;
    goto LAB51;

LAB50:    t25 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB51;

LAB52:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t35) = (t47 | t48);
    t40 = (t17 + 4);
    t41 = (t27 + 4);
    t51 = *((unsigned int *)t17);
    t52 = (~(t51));
    t53 = *((unsigned int *)t40);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t41);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t63 & t61);
    t64 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB54;

LAB55:    xsi_set_current_line(71, ng0);
    t50 = ((char*)((ng6)));
    t67 = (t0 + 3728);
    xsi_vlogvar_assign_value(t67, t50, 0, 0, 2);
    goto LAB57;

LAB60:    *((unsigned int *)t17) = 1;
    goto LAB63;

LAB62:    t15 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB63;

LAB64:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng2)));
    memset(t26, 0, 8);
    xsi_vlog_signed_greatereq(t26, 32, t20, 14, t19, 32);
    memset(t27, 0, 8);
    t24 = (t26 + 4);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t24) != 0)
        goto LAB69;

LAB70:    t36 = *((unsigned int *)t17);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t28 = (t17 + 4);
    t34 = (t27 + 4);
    t39 = (t35 + 4);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t39);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB66;

LAB67:    *((unsigned int *)t27) = 1;
    goto LAB70;

LAB69:    t25 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB70;

LAB71:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t35) = (t47 | t48);
    t40 = (t17 + 4);
    t41 = (t27 + 4);
    t51 = *((unsigned int *)t17);
    t52 = (~(t51));
    t53 = *((unsigned int *)t40);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t41);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t63 & t61);
    t64 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB73;

LAB74:    xsi_set_current_line(82, ng0);
    t50 = ((char*)((ng7)));
    t67 = (t0 + 3728);
    xsi_vlogvar_assign_value(t67, t50, 0, 0, 2);
    goto LAB76;

}


extern void work_m_00000000001603751227_1985054100_init()
{
	static char *pe[] = {(void *)NetDecl_38_0,(void *)Cont_40_1,(void *)Always_46_2};
	xsi_register_didat("work_m_00000000001603751227_1985054100", "isim/test_SEQ_DECOMPOSER_isim_beh.exe.sim/work/m_00000000001603751227_1985054100.didat");
	xsi_register_executes(pe);
}
