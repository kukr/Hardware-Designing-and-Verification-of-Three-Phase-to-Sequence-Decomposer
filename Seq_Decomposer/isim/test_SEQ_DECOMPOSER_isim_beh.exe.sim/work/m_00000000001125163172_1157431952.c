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
static const char *ng0 = "F:/BTP/codes/Seq_Decomposer/SEQ_DECOMPOSER.v";
static int ng1[] = {25000, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};



static void Cont_54_0(char *t0)
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

LAB0:    t1 = (t0 + 7464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9136);
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
    xsi_driver_vfirst_trans(t3, 0, 23);

LAB1:    return;
}

static void Cont_55_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 7712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2784U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t2 = (t0 + 9200);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t8, 0, 8);
    t9 = 16777215U;
    t10 = t9;
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t9 = (t9 & t12);
    t13 = *((unsigned int *)t11);
    t10 = (t10 & t13);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 | t9);
    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 | t10);
    xsi_driver_vfirst_trans(t2, 0, 23);
    t17 = (t0 + 9024);
    *((int *)t17) = 1;

LAB1:    return;
}

static void Cont_56_2(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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

LAB0:    t1 = (t0 + 7960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4544U);
    t3 = *((char **)t2);
    t2 = (t0 + 4384U);
    t4 = *((char **)t2);
    t2 = (t0 + 4704U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 24, t4, 24, t5, 24);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 24, t3, 24, t6, 24);
    t2 = (t0 + 9264);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 16777215U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t2, 0, 23);
    t20 = (t0 + 9040);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_57_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t21[8];
    char t22[8];
    char t26[8];
    char t27[8];
    char t42[8];
    char t53[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 8208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2784U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t2))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t10) != 0)
        goto LAB11;

LAB12:    t17 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB13;

LAB14:    t68 = *((unsigned int *)t4);
    t69 = (~(t68));
    t70 = *((unsigned int *)t17);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t17) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t72, 8);

LAB21:    t73 = (t0 + 9328);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t77, 0, 8);
    t78 = 255U;
    t79 = t78;
    t80 = (t3 + 4);
    t81 = *((unsigned int *)t3);
    t78 = (t78 & t81);
    t82 = *((unsigned int *)t80);
    t79 = (t79 & t82);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 | t78);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 | t79);
    xsi_driver_vfirst_trans(t73, 0, 7);
    t86 = (t0 + 9056);
    *((int *)t86) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB12;

LAB13:    t23 = (t0 + 4864U);
    t24 = *((char **)t23);
    t23 = (t0 + 4704U);
    t25 = *((char **)t23);
    t23 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_divide(t26, 32, t25, 24, t23, 32);
    memset(t27, 0, 8);
    t28 = (t24 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB23;

LAB22:    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t24) > *((unsigned int *)t26))
        goto LAB24;

LAB25:    memset(t22, 0, 8);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t31) != 0)
        goto LAB29;

LAB30:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t22);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB31;

LAB32:    t54 = *((unsigned int *)t22);
    t55 = (~(t54));
    t56 = *((unsigned int *)t38);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t38) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t22) > 0)
        goto LAB37;

LAB38:    memcpy(t21, t58, 8);

LAB39:    goto LAB14;

LAB15:    t72 = ((char*)((ng4)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t21, 32, t72, 32);
    goto LAB21;

LAB19:    memcpy(t3, t21, 8);
    goto LAB21;

LAB23:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t27) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t22) = 1;
    goto LAB30;

LAB29:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB30;

LAB31:    t43 = (t0 + 4384U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 255U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 255U);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t42, 32, t52, 32);
    goto LAB32;

LAB33:    t59 = (t0 + 4384U);
    t60 = *((char **)t59);
    memset(t58, 0, 8);
    t59 = (t58 + 4);
    t61 = (t60 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (t62 >> 0);
    *((unsigned int *)t58) = t63;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 0);
    *((unsigned int *)t59) = t65;
    t66 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t66 & 255U);
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 255U);
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t21, 32, t53, 32, t58, 32);
    goto LAB39;

LAB37:    memcpy(t21, t53, 8);
    goto LAB39;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 9392);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 8704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng5)));
    t3 = (t0 + 9456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
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
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}


extern void work_m_00000000001125163172_1157431952_init()
{
	static char *pe[] = {(void *)Cont_54_0,(void *)Cont_55_1,(void *)Cont_56_2,(void *)Cont_57_3,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000001125163172_1157431952", "isim/test_SEQ_DECOMPOSER_isim_beh.exe.sim/work/m_00000000001125163172_1157431952.didat");
	xsi_register_executes(pe);
}
