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
static const char *ng0 = "F:/BTP/codes/Seq_Decomposer/PHASE_measure.v";
static int ng1[] = {360, 0};
static int ng2[] = {32, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};



static void Cont_37_0(char *t0)
{
    char t6[8];
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
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 4904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t2, 32, t5, 8);
    t7 = (t0 + 6080);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 65535U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 15);
    t20 = (t0 + 5968);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_38_1(char *t0)
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

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6144);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void Always_40_2(char *t0)
{
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
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5984);
    *((int *)t2) = 1;
    t3 = (t0 + 5432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
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

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);
    t11 = (t0 + 3184);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_48_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t26[8];
    char t27[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
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
    char *t75;
    char *t76;

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6000);
    *((int *)t2) = 1;
    t3 = (t0 + 5680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 3184);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = xsi_vlog_unsigned_case_compare(t6, 2, t9, 2);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t10 = xsi_vlog_unsigned_case_compare(t6, 2, t4, 2);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t10 = xsi_vlog_unsigned_case_compare(t6, 2, t4, 2);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t10 = xsi_vlog_unsigned_case_compare(t6, 2, t4, 2);
    if (t10 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 3824);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 14);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 3984);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 14);
    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);

LAB16:    xsi_set_current_line(52, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2704);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    goto LAB15;

LAB9:    xsi_set_current_line(56, ng0);
    t5 = (t0 + 3824);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_greatereq(t13, 32, t8, 14, t9, 32);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t11) != 0)
        goto LAB19;

LAB20:    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB21;

LAB22:    memcpy(t35, t14, 8);

LAB23:    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB15;

LAB11:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 3984);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_greatereq(t13, 32, t8, 14, t9, 32);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t11) != 0)
        goto LAB37;

LAB38:    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB39;

LAB40:    memcpy(t35, t14, 8);

LAB41:    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(65, ng0);

LAB52:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 8, t5, 32);
    t7 = (t0 + 2704);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 8);

LAB51:    goto LAB15;

LAB13:    xsi_set_current_line(68, ng0);

LAB53:    xsi_set_current_line(70, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 1824U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t5, 32, t8, 16);
    t7 = (t0 + 2544);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 16);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    goto LAB15;

LAB17:    *((unsigned int *)t14) = 1;
    goto LAB20;

LAB19:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB20;

LAB21:    t24 = (t0 + 1504U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_less(t26, 32, t25, 14, t24, 32);
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t28) != 0)
        goto LAB26;

LAB27:    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t14 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB23;

LAB24:    *((unsigned int *)t27) = 1;
    goto LAB27;

LAB26:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB27;

LAB28:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t14 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t14);
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
    goto LAB30;

LAB31:    xsi_set_current_line(57, ng0);

LAB34:    xsi_set_current_line(58, ng0);
    t73 = ((char*)((ng3)));
    t74 = (t0 + 2704);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 8);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    goto LAB33;

LAB35:    *((unsigned int *)t14) = 1;
    goto LAB38;

LAB37:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB38;

LAB39:    t24 = (t0 + 1664U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_less(t26, 32, t25, 14, t24, 32);
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t28) != 0)
        goto LAB44;

LAB45:    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t14 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB41;

LAB42:    *((unsigned int *)t27) = 1;
    goto LAB45;

LAB44:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB45;

LAB46:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t14 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t14);
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
    goto LAB48;

LAB49:    xsi_set_current_line(63, ng0);
    t73 = (t0 + 3664);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t0 + 3024);
    xsi_vlogvar_assign_value(t76, t75, 0, 0, 2);
    goto LAB51;

}


extern void work_m_00000000002206909764_0943983644_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_38_1,(void *)Always_40_2,(void *)Always_48_3};
	xsi_register_didat("work_m_00000000002206909764_0943983644", "isim/test_SEQ_DECOMPOSER_isim_beh.exe.sim/work/m_00000000002206909764_0943983644.didat");
	xsi_register_executes(pe);
}
