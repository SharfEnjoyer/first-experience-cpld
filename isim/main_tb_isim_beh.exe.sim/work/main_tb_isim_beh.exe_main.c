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
    uni9000_ver_m_00000000002707301588_3746715216_init();
    uni9000_ver_m_00000000002183634680_1735969574_init();
    uni9000_ver_m_00000000000829403950_0784449685_init();
    work_m_00000000001137368058_0757427028_init();
    work_m_00000000004116474137_0286164271_init();
    work_m_00000000004269654929_0750423891_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004269654929_0750423891");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
