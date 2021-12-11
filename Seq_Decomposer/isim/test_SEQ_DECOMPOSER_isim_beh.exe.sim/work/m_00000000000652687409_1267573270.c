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
static const char *ng0 = "F:/BTP/codes/Seq_Decomposer/test_SEQ_DECOMPOSER.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "adc_samples/v8kf50p0.txt";
static const char *ng4 = "r";
static const char *ng5 = "adc_samples/v8kf50p240.txt";
static const char *ng6 = "adc_samples/v8kf50p120.txt";
static const char *ng7 = "%b\n";
static const char *ng8 = "";
static const char *ng9 = "\tk=%d\tVa=%d, Vb=%d, Vc=%d \tVzero=%d, Vpos=%d, Vneg=%d\tVref_freq=%d\tVzero_freq=%d, Vzero_amp=%d, Vzero_phase=%d\tVpos_freq=%d, Vpos_amp=%d, Vpos_phase=%d\tVneg_freq=%d, Vneg_amp=%d, Vneg_phase=%d";



static void Initial_79_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);

LAB4:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng3, ng4);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng5, ng4);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng6, ng4);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 6656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Always_96_1(char *t0)
{
    char t7[8];
    char t11[8];
    char t20[8];
    char t29[8];
    char t31[8];
    char t40[8];
    char t48[8];
    char t80[8];
    char t92[8];
    char t96[8];
    char t105[8];
    char t113[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;

LAB0:    t1 = (t0 + 7096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 8160);
    *((int *)t2) = 1;
    t3 = (t0 + 7128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 5128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 4488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t7, 0, t10, 0, 14);
    *((int *)t11) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng7, 2, t0, (char)119, t7, 14);
    t12 = (t11 + 4);
    *((int *)t12) = 0;
    t13 = (t0 + 4488);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 14);
    t14 = (t0 + 5608);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t8, 0, 14);
    *((int *)t11) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng7, 2, t0, (char)119, t7, 14);
    t9 = (t11 + 4);
    *((int *)t9) = 0;
    t10 = (t0 + 4648);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 14);
    t12 = (t0 + 5768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4808);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t8, 0, 14);
    *((int *)t11) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng7, 2, t0, (char)119, t7, 14);
    t9 = (t11 + 4);
    *((int *)t9) = 0;
    t10 = (t0 + 4808);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 14);
    t12 = (t0 + 5928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    *((int *)t11) = xsi_vlogfile_feof(*((unsigned int *)t4));
    t5 = (t11 + 4);
    *((int *)t5) = 0;
    memset(t7, 0, 8);
    t6 = (t11 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 & 4294967295U);
    if (t19 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    t8 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;

LAB9:    memset(t20, 0, 8);
    t9 = (t7 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t9) != 0)
        goto LAB12;

LAB13:    t12 = (t20 + 4);
    t26 = *((unsigned int *)t20);
    t27 = *((unsigned int *)t12);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB14;

LAB15:    memcpy(t48, t20, 8);

LAB16:    memset(t80, 0, 8);
    t81 = (t48 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t48);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t81) != 0)
        goto LAB30;

LAB31:    t88 = (t80 + 4);
    t89 = *((unsigned int *)t80);
    t90 = *((unsigned int *)t88);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB32;

LAB33:    memcpy(t113, t80, 8);

LAB34:    t145 = (t113 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (~(t146));
    t148 = *((unsigned int *)t113);
    t149 = (t148 & t147);
    t150 = (t149 != 0);
    if (t150 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(109, ng0);
    xsi_vlog_finish(1);

LAB48:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB12:    t10 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB13;

LAB14:    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t30 = *((char **)t14);
    *((int *)t31) = xsi_vlogfile_feof(*((unsigned int *)t30));
    t32 = (t31 + 4);
    *((int *)t32) = 0;
    memset(t29, 0, 8);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t31);
    t37 = (t36 & t35);
    t38 = (t37 & 4294967295U);
    if (t38 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t33) == 0)
        goto LAB17;

LAB19:    t39 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t39) = 1;

LAB20:    memset(t40, 0, 8);
    t41 = (t29 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t29);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t41) != 0)
        goto LAB23;

LAB24:    t49 = *((unsigned int *)t20);
    t50 = *((unsigned int *)t40);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t52 = (t20 + 4);
    t53 = (t40 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB17:    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t40) = 1;
    goto LAB24;

LAB23:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB24;

LAB25:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t20 + 4);
    t63 = (t40 + 4);
    t64 = *((unsigned int *)t20);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & t75);
    goto LAB27;

LAB28:    *((unsigned int *)t80) = 1;
    goto LAB31;

LAB30:    t87 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB31;

LAB32:    t93 = (t0 + 5448);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    *((int *)t96) = xsi_vlogfile_feof(*((unsigned int *)t95));
    t97 = (t96 + 4);
    *((int *)t97) = 0;
    memset(t92, 0, 8);
    t98 = (t96 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t96);
    t102 = (t101 & t100);
    t103 = (t102 & 4294967295U);
    if (t103 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t98) == 0)
        goto LAB35;

LAB37:    t104 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t104) = 1;

LAB38:    memset(t105, 0, 8);
    t106 = (t92 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t92);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t106) != 0)
        goto LAB41;

LAB42:    t114 = *((unsigned int *)t80);
    t115 = *((unsigned int *)t105);
    t116 = (t114 & t115);
    *((unsigned int *)t113) = t116;
    t117 = (t80 + 4);
    t118 = (t105 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB35:    *((unsigned int *)t92) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t105) = 1;
    goto LAB42;

LAB41:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB42;

LAB43:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t80 + 4);
    t128 = (t105 + 4);
    t129 = *((unsigned int *)t80);
    t130 = (~(t129));
    t131 = *((unsigned int *)t127);
    t132 = (~(t131));
    t133 = *((unsigned int *)t105);
    t134 = (~(t133));
    t135 = *((unsigned int *)t128);
    t136 = (~(t135));
    t137 = (t130 & t132);
    t138 = (t134 & t136);
    t139 = (~(t137));
    t140 = (~(t138));
    t141 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t141 & t139);
    t142 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t142 & t140);
    t143 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t143 & t139);
    t144 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t144 & t140);
    goto LAB45;

LAB46:    xsi_set_current_line(103, ng0);

LAB49:    xsi_set_current_line(104, ng0);
    t151 = (t0 + 4488);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    t154 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t154, t153, 0, 0, 14, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 14, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 14, 0LL);
    goto LAB48;

}

static void Always_112_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 7344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 7152);
    xsi_process_wait(t2, 500LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);
    t4 = (t0 + 3688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3688);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_113_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 7400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 4968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4968);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_117_4(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 8176);
    *((int *)t2) = 1;
    t3 = (t0 + 7872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng8, 2, t0, (char)118, t4, 64);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    t6 = (t0 + 4008);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4168);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 4328);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = (t0 + 1528U);
    t18 = *((char **)t16);
    t16 = (t0 + 1688U);
    t19 = *((char **)t16);
    t16 = (t0 + 1848U);
    t20 = *((char **)t16);
    t16 = (t0 + 2168U);
    t21 = *((char **)t16);
    t16 = (t0 + 2008U);
    t22 = *((char **)t16);
    t16 = (t0 + 2328U);
    t23 = *((char **)t16);
    t16 = (t0 + 2648U);
    t24 = *((char **)t16);
    t16 = (t0 + 2488U);
    t25 = *((char **)t16);
    t16 = (t0 + 2808U);
    t26 = *((char **)t16);
    t16 = (t0 + 3128U);
    t27 = *((char **)t16);
    t16 = (t0 + 2968U);
    t28 = *((char **)t16);
    t16 = (t0 + 3288U);
    t29 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng9, 18, t0, (char)118, t7, 8, (char)119, t9, 14, (char)119, t12, 14, (char)119, t15, 14, (char)119, t17, 14, (char)119, t18, 14, (char)119, t19, 14, (char)118, t20, 16, (char)118, t21, 16, (char)118, t22, 14, (char)118, t23, 16, (char)118, t24, 16, (char)118, t25, 14, (char)118, t26, 16, (char)118, t27, 16, (char)118, t28, 14, (char)118, t29, 16);
    goto LAB2;

}


extern void work_m_00000000000652687409_1267573270_init()
{
	static char *pe[] = {(void *)Initial_79_0,(void *)Always_96_1,(void *)Always_112_2,(void *)Always_113_3,(void *)Always_117_4};
	xsi_register_didat("work_m_00000000000652687409_1267573270", "isim/test_SEQ_DECOMPOSER_isim_beh.exe.sim/work/m_00000000000652687409_1267573270.didat");
	xsi_register_executes(pe);
}
