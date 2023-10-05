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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    simprims_ver_m_00000000003359274523_2662658903_init();
    simprims_ver_m_00000000001255213976_2021654676_init();
    simprims_ver_m_00000000001255213976_3226743947_init();
    simprims_ver_m_00000000003690504506_1236628566_init();
    simprims_ver_m_00000000000237972898_3218428928_init();
    simprims_ver_m_00000000000648012491_3151998091_init();
    simprims_ver_u_00000000001790370653_1131516744_init();
    simprims_ver_m_00000000000452859522_3752318385_init();
    simprims_ver_m_00000000000126354981_0818475687_init();
    simprims_ver_m_00000000000126354981_1080494567_init();
    simprims_ver_m_00000000002872589513_3118641787_init();
    simprims_ver_m_00000000002872589513_2309584270_init();
    simprims_ver_m_00000000003402595666_4128580998_init();
    simprims_ver_m_00000000002231714667_4272833816_init();
    simprims_ver_m_00000000002872589513_1752281125_init();
    simprims_ver_m_00000000003468226314_1214892732_init();
    simprims_ver_m_00000000002231714667_0527859891_init();
    simprims_ver_m_00000000003378901902_2165445904_init();
    simprims_ver_m_00000000002895147581_4190339329_init();
    simprims_ver_m_00000000000710743255_1864135740_init();
    simprims_ver_m_00000000003378901902_1623904443_init();
    simprims_ver_m_00000000002787266980_1769774224_init();
    simprims_ver_m_00000000003402595666_0399368237_init();
    simprims_ver_m_00000000000710743255_2395255191_init();
    work_m_00000000002963392096_0286164271_init();
    work_m_00000000004269654929_0750423891_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004269654929_0750423891");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
