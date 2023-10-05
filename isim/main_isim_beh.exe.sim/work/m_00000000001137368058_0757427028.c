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
static const char *ng0 = "E:/ise_project/try_parallel_port/i2c_master.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {9U, 0U};
static const char *ng5 = "%b, %b";
static const char *ng6 = "status, %b, %b";
static const char *ng7 = "\n";
static unsigned int ng8[] = {1U, 0U};
static const char *ng9 = "%b, %b, %b";
static const char *ng10 = "success %b";
static const char *ng11 = "error %b";
static const char *ng12 = "stop %d";
static int ng13[] = {21, 0};
static const char *ng14 = "error %d";



static void Always_140_0(char *t0)
{
    char t6[8];
    char t34[8];
    char t40[16];
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
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 8240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 8560);
    *((int *)t2) = 1;
    t3 = (t0 + 8272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(140, ng0);

LAB5:    xsi_set_current_line(142, ng0);
    t4 = (t0 + 4040U);
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

LAB11:    xsi_set_current_line(152, ng0);

LAB14:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 7160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = (t0 + 608);
    t7 = *((char **)t5);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t7, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB36;

LAB37:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB38;

LAB39:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB40;

LAB41:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB42;

LAB43:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB44;

LAB45:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB46;

LAB47:    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB48;

LAB49:    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB50;

LAB51:    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB52;

LAB53:    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB54;

LAB55:    t2 = (t0 + 3328);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t30 == 1)
        goto LAB58;

LAB59:
LAB61:
LAB60:    xsi_set_current_line(466, ng0);

LAB211:    xsi_set_current_line(467, ng0);
    t2 = xsi_vlog_time(t40, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t40, 64);
    xsi_set_current_line(468, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB62:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(142, ng0);

LAB13:    xsi_set_current_line(143, ng0);
    t28 = (t0 + 608);
    t29 = *((char **)t28);
    t28 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5160U);
    t3 = *((char **)t2);
    t2 = (t0 + 6680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5000U);
    t3 = *((char **)t2);
    t2 = (t0 + 6520);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(155, ng0);

LAB63:    xsi_set_current_line(156, ng0);
    t5 = ((char*)((ng2)));
    t8 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 5320U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB64;

LAB65:
LAB66:    goto LAB62;

LAB18:    xsi_set_current_line(170, ng0);

LAB68:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4520U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng4)));
    xsi_vlogtype_concat(t6, 8, 8, 3U, t5, 4, t7, 3, t2, 1);
    t8 = (t0 + 6360);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB20:    xsi_set_current_line(177, ng0);

LAB69:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB22:    xsi_set_current_line(182, ng0);

LAB70:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 7320);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 472);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB72;

LAB71:    t22 = (t21 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB72;

LAB75:    if (*((unsigned int *)t7) < *((unsigned int *)t21))
        goto LAB73;

LAB74:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(191, ng0);

LAB80:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB78:    goto LAB62;

LAB24:    xsi_set_current_line(199, ng0);

LAB81:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB26:    xsi_set_current_line(204, ng0);

LAB82:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 6360);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t21);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t8) = t14;
    t22 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 6360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t5, 8, t7, 32);
    t8 = (t0 + 6360);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB28:    xsi_set_current_line(212, ng0);

LAB83:    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 4680U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 15U);
    if (t13 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t7) == 0)
        goto LAB88;

LAB90:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;

LAB91:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t21);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(227, ng0);

LAB96:    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(232, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);

LAB94:
LAB86:    goto LAB62;

LAB30:    xsi_set_current_line(236, ng0);

LAB97:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 7320);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 472);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB99;

LAB98:    t22 = (t21 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB99;

LAB102:    if (*((unsigned int *)t7) < *((unsigned int *)t21))
        goto LAB100;

LAB101:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(246, ng0);

LAB107:    xsi_set_current_line(247, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB105:    goto LAB62;

LAB32:    xsi_set_current_line(254, ng0);

LAB108:    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB34:    xsi_set_current_line(259, ng0);

LAB109:    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 6520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t5, 8, t7, 32);
    t8 = (t0 + 6520);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB36:    xsi_set_current_line(266, ng0);

LAB110:    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 4680U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 15U);
    if (t13 != 0)
        goto LAB118;

LAB116:    if (*((unsigned int *)t7) == 0)
        goto LAB115;

LAB117:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;

LAB118:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t21);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(282, ng0);

LAB123:    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(285, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(286, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4520U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t6, 8, 8, 3U, t3, 4, t5, 3, t2, 1);
    t7 = (t0 + 6360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(288, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);

LAB121:
LAB113:    goto LAB62;

LAB38:    xsi_set_current_line(292, ng0);

LAB124:    xsi_set_current_line(293, ng0);
    t2 = (t0 + 4360U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(312, ng0);

LAB139:    xsi_set_current_line(313, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB141;

LAB140:    t21 = (t8 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB141;

LAB144:    if (*((unsigned int *)t5) < *((unsigned int *)t8))
        goto LAB142;

LAB143:    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(322, ng0);

LAB149:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB147:
LAB127:    goto LAB62;

LAB40:    xsi_set_current_line(331, ng0);

LAB150:    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(333, ng0);
    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB42:    xsi_set_current_line(336, ng0);

LAB151:    xsi_set_current_line(337, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(338, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(339, ng0);
    t2 = (t0 + 6360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t5, 8, t7, 32);
    t8 = (t0 + 6360);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(340, ng0);
    t2 = (t0 + 6680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t5, 8, t7, 32);
    t8 = (t0 + 6680);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(341, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB44:    xsi_set_current_line(344, ng0);

LAB152:    xsi_set_current_line(345, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(346, ng0);
    t2 = (t0 + 4680U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(352, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 15U);
    if (t13 != 0)
        goto LAB160;

LAB158:    if (*((unsigned int *)t7) == 0)
        goto LAB157;

LAB159:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;

LAB160:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t21);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(360, ng0);

LAB165:    xsi_set_current_line(361, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(362, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(363, ng0);
    t2 = (t0 + 4360U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB166;

LAB167:    xsi_set_current_line(366, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB168:    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(368, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(369, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);

LAB163:
LAB155:    goto LAB62;

LAB46:    xsi_set_current_line(375, ng0);

LAB169:    xsi_set_current_line(376, ng0);
    t2 = (t0 + 7320);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 472);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB171;

LAB170:    t22 = (t21 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB171;

LAB174:    if (*((unsigned int *)t7) < *((unsigned int *)t21))
        goto LAB172;

LAB173:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB175;

LAB176:    xsi_set_current_line(385, ng0);

LAB179:    xsi_set_current_line(386, ng0);
    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(387, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(389, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(390, ng0);
    t2 = (t0 + 6840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB181;

LAB180:    if (t18 != 0)
        goto LAB182;

LAB183:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB184;

LAB185:    xsi_set_current_line(393, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB186:
LAB177:    goto LAB62;

LAB48:    xsi_set_current_line(397, ng0);

LAB187:    xsi_set_current_line(400, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB50:    xsi_set_current_line(404, ng0);

LAB188:    xsi_set_current_line(405, ng0);
    t2 = (t0 + 4680U);
    t5 = *((char **)t2);
    t2 = (t0 + 6840);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t34, 0, 8);
    t21 = (t34 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 1);
    *((unsigned int *)t34) = t10;
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 1);
    *((unsigned int *)t21) = t12;
    t13 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t13 & 127U);
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t14 & 127U);
    xsi_vlogtype_concat(t6, 8, 8, 2U, t34, 7, t5, 1);
    t28 = (t0 + 6840);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(406, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(407, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(408, ng0);
    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB52:    xsi_set_current_line(411, ng0);

LAB189:    xsi_set_current_line(412, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(416, ng0);
    t2 = (t0 + 6840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB191;

LAB190:    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB191;

LAB194:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB193;

LAB192:    *((unsigned int *)t6) = 1;

LAB193:    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB195;

LAB196:    xsi_set_current_line(423, ng0);

LAB199:    xsi_set_current_line(424, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(425, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(426, ng0);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7000);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 6840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t5, 8);

LAB197:    xsi_set_current_line(429, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 15U);
    if (t13 != 0)
        goto LAB203;

LAB201:    if (*((unsigned int *)t7) == 0)
        goto LAB200;

LAB202:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;

LAB203:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t21);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB204;

LAB205:
LAB206:    goto LAB62;

LAB54:    xsi_set_current_line(440, ng0);

LAB208:    xsi_set_current_line(441, ng0);
    t2 = xsi_vlog_time(t40, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t40, 64);
    xsi_set_current_line(442, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(443, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(444, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(445, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(446, ng0);
    t2 = (t0 + 3328);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB56:    xsi_set_current_line(449, ng0);

LAB209:    xsi_set_current_line(451, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(452, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(453, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(454, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(455, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB62;

LAB58:    xsi_set_current_line(458, ng0);

LAB210:    xsi_set_current_line(459, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(460, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(461, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB62;

LAB64:    xsi_set_current_line(158, ng0);

LAB67:    xsi_set_current_line(159, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5160U);
    t3 = *((char **)t2);
    t2 = (t0 + 6680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 5000U);
    t3 = *((char **)t2);
    t2 = (t0 + 6520);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB66;

LAB72:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB74;

LAB73:    *((unsigned int *)t6) = 1;
    goto LAB74;

LAB76:    xsi_set_current_line(184, ng0);

LAB79:    xsi_set_current_line(185, ng0);
    t31 = (t0 + 6360);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t14 = *((unsigned int *)t33);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t34) = t16;
    t17 = *((unsigned int *)t36);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t35) = t19;
    t37 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t37, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 6360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 6360);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t6 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t28);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t22) = t14;
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t5, 8, (char)118, t6, 1);
    goto LAB78;

LAB84:    xsi_set_current_line(215, ng0);

LAB87:    xsi_set_current_line(216, ng0);
    t5 = (t0 + 3192);
    t7 = *((char **)t5);
    t5 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7000);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4680U);
    t3 = *((char **)t2);
    t2 = (t0 + 6200);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t3, 1, (char)118, t7, 1);
    goto LAB86;

LAB88:    *((unsigned int *)t6) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(221, ng0);

LAB95:    xsi_set_current_line(222, ng0);
    t22 = (t0 + 7320);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng1)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t29, 4, t31, 32);
    t32 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t32, t34, 0, 0, 4, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB94;

LAB99:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB101;

LAB100:    *((unsigned int *)t6) = 1;
    goto LAB101;

LAB103:    xsi_set_current_line(238, ng0);

LAB106:    xsi_set_current_line(239, ng0);
    t31 = (t0 + 6520);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t14 = *((unsigned int *)t33);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t34) = t16;
    t17 = *((unsigned int *)t36);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t35) = t19;
    t37 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t37, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 6520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 6520);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t6 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t28);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t22) = t14;
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t5, 8, (char)118, t6, 1);
    goto LAB105;

LAB111:    xsi_set_current_line(269, ng0);

LAB114:    xsi_set_current_line(270, ng0);
    t5 = (t0 + 3192);
    t7 = *((char **)t5);
    t5 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7000);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 4680U);
    t3 = *((char **)t2);
    t2 = (t0 + 6200);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t3, 1, (char)118, t7, 1);
    goto LAB113;

LAB115:    *((unsigned int *)t6) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(275, ng0);

LAB122:    xsi_set_current_line(277, ng0);
    t22 = (t0 + 7320);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng1)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t29, 4, t31, 32);
    t32 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t32, t34, 0, 0, 4, 0LL);
    xsi_set_current_line(278, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB121;

LAB125:    xsi_set_current_line(294, ng0);

LAB128:    xsi_set_current_line(295, ng0);
    t7 = (t0 + 7320);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 472);
    t28 = *((char **)t22);
    memset(t6, 0, 8);
    t22 = (t21 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB130;

LAB129:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB130;

LAB133:    if (*((unsigned int *)t21) < *((unsigned int *)t28))
        goto LAB131;

LAB132:    t32 = (t6 + 4);
    t14 = *((unsigned int *)t32);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB134;

LAB135:    xsi_set_current_line(304, ng0);

LAB138:    xsi_set_current_line(305, ng0);
    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB136:    goto LAB127;

LAB130:    t31 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB132;

LAB131:    *((unsigned int *)t6) = 1;
    goto LAB132;

LAB134:    xsi_set_current_line(296, ng0);

LAB137:    xsi_set_current_line(297, ng0);
    t33 = (t0 + 6360);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t37 = (t34 + 4);
    t38 = (t36 + 4);
    t19 = *((unsigned int *)t36);
    t20 = (t19 >> 7);
    t23 = (t20 & 1);
    *((unsigned int *)t34) = t23;
    t24 = *((unsigned int *)t38);
    t25 = (t24 >> 7);
    t26 = (t25 & 1);
    *((unsigned int *)t37) = t26;
    t39 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t39, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(301, ng0);
    t2 = (t0 + 6360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 6360);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t6 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t28);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t22) = t14;
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t5, 8, (char)118, t6, 1);
    goto LAB136;

LAB141:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB143;

LAB142:    *((unsigned int *)t6) = 1;
    goto LAB143;

LAB145:    xsi_set_current_line(314, ng0);

LAB148:    xsi_set_current_line(315, ng0);
    t29 = (t0 + 6680);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    memset(t34, 0, 8);
    t33 = (t34 + 4);
    t35 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t34) = t16;
    t17 = *((unsigned int *)t35);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t33) = t19;
    t36 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t36, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(319, ng0);
    t2 = (t0 + 6680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 6680);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t6 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t28);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t22) = t14;
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)118, t5, 8, (char)118, t6, 1);
    goto LAB147;

LAB153:    xsi_set_current_line(347, ng0);

LAB156:    xsi_set_current_line(348, ng0);
    t5 = (t0 + 3192);
    t7 = *((char **)t5);
    t5 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(349, ng0);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7000);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(350, ng0);
    t2 = (t0 + 4680U);
    t3 = *((char **)t2);
    t2 = (t0 + 6200);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t3, 1, (char)118, t7, 1);
    goto LAB155;

LAB157:    *((unsigned int *)t6) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(353, ng0);

LAB164:    xsi_set_current_line(355, ng0);
    t22 = (t0 + 7320);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng1)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t29, 4, t31, 32);
    t32 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t32, t34, 0, 0, 4, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB163;

LAB166:    xsi_set_current_line(364, ng0);
    t5 = (t0 + 2648);
    t7 = *((char **)t5);
    t5 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 8, 0LL);
    goto LAB168;

LAB171:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB173;

LAB172:    *((unsigned int *)t6) = 1;
    goto LAB173;

LAB175:    xsi_set_current_line(377, ng0);

LAB178:    xsi_set_current_line(379, ng0);
    t31 = (t0 + 6840);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng1)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_lshift(t34, 8, t33, 8, t35, 32);
    t36 = (t0 + 6840);
    xsi_vlogvar_wait_assign_value(t36, t34, 0, 0, 8, 0LL);
    xsi_set_current_line(380, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(381, ng0);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(382, ng0);
    t2 = (t0 + 6840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 6840);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t6 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t28);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t22) = t14;
    t29 = (t0 + 4680U);
    t31 = *((char **)t29);
    xsi_vlogfile_write(1, 0, 0, ng9, 4, t0, (char)118, t5, 8, (char)118, t6, 1, (char)118, t31, 1);
    goto LAB177;

LAB181:    *((unsigned int *)t6) = 1;
    goto LAB183;

LAB182:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB183;

LAB184:    xsi_set_current_line(391, ng0);
    t29 = ((char*)((ng2)));
    t31 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t31, t29, 0, 0, 1, 0LL);
    goto LAB186;

LAB191:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB193;

LAB195:    xsi_set_current_line(417, ng0);

LAB198:    xsi_set_current_line(418, ng0);
    t29 = (t0 + 3192);
    t31 = *((char **)t29);
    t29 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(419, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(420, ng0);
    t2 = (t0 + 6840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)118, t5, 8);
    goto LAB197;

LAB200:    *((unsigned int *)t6) = 1;
    goto LAB203;

LAB204:    xsi_set_current_line(430, ng0);

LAB207:    xsi_set_current_line(431, ng0);
    t22 = ((char*)((ng1)));
    t28 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 1, 0LL);
    xsi_set_current_line(432, ng0);
    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(433, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB206;

}


extern void work_m_00000000001137368058_0757427028_init()
{
	static char *pe[] = {(void *)Always_140_0};
	xsi_register_didat("work_m_00000000001137368058_0757427028", "isim/main_isim_beh.exe.sim/work/m_00000000001137368058_0757427028.didat");
	xsi_register_executes(pe);
}
