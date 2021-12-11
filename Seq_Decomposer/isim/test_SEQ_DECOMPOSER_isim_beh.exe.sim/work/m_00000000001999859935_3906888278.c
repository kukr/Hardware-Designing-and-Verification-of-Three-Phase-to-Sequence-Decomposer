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
static const char *ng0 = "F:/BTP/codes/Seq_Decomposer/DC_offset_removal.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {2, 0};



static void Always_39_0(char *t0)
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

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4648);
    *((int *)t2) = 1;
    t3 = (t0 + 4360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
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

LAB7:    xsi_set_current_line(49, ng0);

LAB10:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 14);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3088);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    xsi_vlog_signed_minus(t16, 14, t3, 14, t11, 14);
    t12 = (t0 + 2448);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 14);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3248);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 2);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2608);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 14);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    goto LAB8;

LAB12:    xsi_set_current_line(52, ng0);

LAB21:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 2928);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng1)));
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

LAB37:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB38:    goto LAB20;

LAB14:    xsi_set_current_line(60, ng0);

LAB39:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2928);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
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
        goto LAB40;

LAB41:    if (*((unsigned int *)t14) != 0)
        goto LAB42;

LAB43:    t18 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB44;

LAB45:    memcpy(t35, t17, 8);

LAB46:    t49 = (t35 + 4);
    t68 = *((unsigned int *)t49);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(64, ng0);

LAB57:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2608);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    xsi_vlog_signed_greater(t16, 14, t3, 14, t11, 14);
    t12 = (t16 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB58;

LAB59:
LAB60:
LAB56:    goto LAB20;

LAB16:    xsi_set_current_line(72, ng0);

LAB61:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2928);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
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
        goto LAB62;

LAB63:    if (*((unsigned int *)t14) != 0)
        goto LAB64;

LAB65:    t18 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB66;

LAB67:    memcpy(t35, t17, 8);

LAB68:    t49 = (t35 + 4);
    t68 = *((unsigned int *)t49);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(76, ng0);

LAB79:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2768);
    t5 = (t2 + 56U);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 14, t3, 14, t11, 14);
    t12 = (t16 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB80;

LAB81:
LAB82:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB78:    goto LAB20;

LAB18:    xsi_set_current_line(84, ng0);

LAB83:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2768);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    xsi_vlog_signed_greatereq(t16, 14, t5, 14, t14, 14);
    t15 = (t16 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB84;

LAB85:
LAB86:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 14);
    goto LAB20;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB24:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    t24 = (t0 + 2048U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng1)));
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

LAB36:    xsi_set_current_line(54, ng0);
    t73 = ((char*)((ng3)));
    t74 = (t0 + 3408);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 2);
    goto LAB38;

LAB40:    *((unsigned int *)t17) = 1;
    goto LAB43;

LAB42:    t15 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB43;

LAB44:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng1)));
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
        goto LAB47;

LAB48:    if (*((unsigned int *)t24) != 0)
        goto LAB49;

LAB50:    t36 = *((unsigned int *)t17);
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
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t27) = 1;
    goto LAB50;

LAB49:    t25 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB50;

LAB51:    t47 = *((unsigned int *)t35);
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
    goto LAB53;

LAB54:    xsi_set_current_line(62, ng0);
    t50 = ((char*)((ng4)));
    t67 = (t0 + 3408);
    xsi_vlogvar_assign_value(t67, t50, 0, 0, 2);
    goto LAB56;

LAB58:    xsi_set_current_line(67, ng0);
    t14 = (t0 + 2048U);
    t15 = *((char **)t14);
    t14 = (t0 + 2608);
    xsi_vlogvar_assign_value(t14, t15, 0, 0, 14);
    goto LAB60;

LAB62:    *((unsigned int *)t17) = 1;
    goto LAB65;

LAB64:    t15 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB65;

LAB66:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng1)));
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
        goto LAB69;

LAB70:    if (*((unsigned int *)t24) != 0)
        goto LAB71;

LAB72:    t36 = *((unsigned int *)t17);
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
        goto LAB73;

LAB74:
LAB75:    goto LAB68;

LAB69:    *((unsigned int *)t27) = 1;
    goto LAB72;

LAB71:    t25 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB72;

LAB73:    t47 = *((unsigned int *)t35);
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
    goto LAB75;

LAB76:    xsi_set_current_line(74, ng0);
    t50 = ((char*)((ng5)));
    t67 = (t0 + 3408);
    xsi_vlogvar_assign_value(t67, t50, 0, 0, 2);
    goto LAB78;

LAB80:    xsi_set_current_line(78, ng0);
    t14 = (t0 + 2048U);
    t15 = *((char **)t14);
    t14 = (t0 + 2768);
    xsi_vlogvar_assign_value(t14, t15, 0, 0, 14);
    goto LAB82;

LAB84:    xsi_set_current_line(87, ng0);

LAB87:    xsi_set_current_line(88, ng0);
    t18 = (t0 + 2608);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t24 = (t0 + 2768);
    t25 = (t24 + 56U);
    t28 = *((char **)t25);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t20, 14, t28, 14);
    t34 = ((char*)((ng6)));
    memset(t26, 0, 8);
    xsi_vlog_signed_divide(t26, 32, t17, 32, t34, 32);
    t39 = (t0 + 3088);
    xsi_vlogvar_assign_value(t39, t26, 0, 0, 14);
    goto LAB86;

}


extern void work_m_00000000001999859935_3906888278_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000001999859935_3906888278", "isim/test_SEQ_DECOMPOSER_isim_beh.exe.sim/work/m_00000000001999859935_3906888278.didat");
	xsi_register_executes(pe);
}
