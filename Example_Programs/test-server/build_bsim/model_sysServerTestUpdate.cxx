/*
 * Generated by Bluespec Compiler, version 2024.07-4-g6f298148 (build 6f298148)
 * 
 * On Sat Oct  5 22:24:02 CST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_sysServerTestUpdate.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_sysServerTestUpdate::MODEL_sysServerTestUpdate()
{
  sysServerTestUpdate_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_sysServerTestUpdate()
{
  MODEL_sysServerTestUpdate *model = new MODEL_sysServerTestUpdate();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_sysServerTestUpdate &INST_top = *((MOD_sysServerTestUpdate *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_idx_9_ULT_6___d70;
	 tUInt8 DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d74;
	 tUInt8 DEF_INST_top_DEF_NOT_idx_9_ULT_6_0_5_AND_NOT_svr_abort_whas__0__ETC___d96;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38_ETC___d168;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38_ETC___d152;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_in_empty_6_OR_svr_fifo_in_do_deq_whas_ETC___d156;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d160;
	 tUInt8 DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d182;
	 tUInt8 DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d186;
	 tUInt8 DEF_INST_top_DEF_svr_abort_whas__0_AND_svr_abort_wget__1___d22;
	 tUInt8 DEF_INST_top_DEF_NOT_svr_start_wire_whas__3_4_OR_NOT_svr_start__ETC___d27;
	 tUInt8 DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44;
	 tUInt8 DEF_INST_top_DEF_NOT_svr_fifo_in_empty_6___d47;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48;
	 tUInt8 DEF_INST_top_DEF_svr_abort_whas__0_AND_svr_abort_wget__1_2_OR_s_ETC___d54;
	 tUInt8 DEF_INST_top_DEF_NOT_start_wire_whas__18_19_OR_NOT_start_wire_w_ETC___d122;
	 tUInt8 DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16___d117;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139;
	 tUInt8 DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d146;
	 tUInt8 DEF_INST_top_DEF_NOT_svr_fifo_out_empty_2___d99;
	 tUInt8 DEF_INST_top_DEF_svr_state_mkFSMstate_read__0_EQ_7___d53;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read__42_EQ_6___d145;
	 tUInt8 DEF_INST_top_DEF_abort_wget____d116;
	 tUInt8 DEF_INST_top_DEF_abort_whas____d115;
	 tUInt8 DEF_INST_top_DEF_start_reg__h34062;
	 tUInt8 DEF_INST_top_DEF_running__h34148;
	 tUInt8 DEF_INST_top_DEF_start_wire_wget____d120;
	 tUInt8 DEF_INST_top_DEF_start_wire_whas____d118;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_in_do_deq_whas____d3;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_in_do_enq_whas____d4;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_in_rvr_read____d150;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_out_do_deq_whas____d11;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_out_do_enq_whas____d12;
	 tUInt8 DEF_INST_top_DEF_svr_fifo_out_rvr_read____d93;
	 tUInt8 DEF_INST_top_DEF_svr_start_wire_wget____d25;
	 tUInt8 DEF_INST_top_DEF_svr_start_wire_whas____d23;
	 tUInt8 DEF_INST_top_DEF_svr_start_reg__h17559;
	 tUInt8 DEF_INST_top_DEF_svr_abort_wget____d21;
	 tUInt8 DEF_INST_top_DEF_svr_abort_whas____d20;
	 tUInt8 DEF_INST_top_DEF_svr_state_fired__h17561;
	 tUInt8 DEF_INST_top_DEF_start_reg_1__h31865;
	 tUInt8 DEF_INST_top_DEF_state_fired__h31867;
	 tUInt8 DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read____d142;
	 DEF_INST_top_DEF_state_mkFSMstate_read____d142 = INST_top.INST_state_mkFSMstate.METH_read();
	 DEF_INST_top_DEF_svr_fifo_in_rvr_read____d150 = INST_top.INST_svr_fifo_in_rvr.METH_read();
	 INST_top.DEF_svr_fifo_in_empty__h18048 = INST_top.INST_svr_fifo_in_empty.METH_read();
	 DEF_INST_top_DEF_abort_whas____d115 = INST_top.INST_abort.METH_whas();
	 DEF_INST_top_DEF_abort_wget____d116 = INST_top.INST_abort.METH_wget();
	 DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139 = !DEF_INST_top_DEF_abort_whas____d115 || !DEF_INST_top_DEF_abort_wget____d116;
	 DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38_ETC___d152 = DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139 && DEF_INST_top_DEF_state_mkFSMstate_read____d142 == (tUInt8)1u;
	 INST_top.DEF_CAN_FIRE_RL_action_l48c19_T = INST_top.DEF_svr_fifo_in_empty__h18048 && (DEF_INST_top_DEF_svr_fifo_in_rvr_read____d150 && DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38_ETC___d152);
	 INST_top.DEF_WILL_FIRE_RL_action_l48c19_T = INST_top.DEF_CAN_FIRE_RL_action_l48c19_T;
	 DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38_ETC___d168 = DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139 && DEF_INST_top_DEF_state_mkFSMstate_read____d142 == (tUInt8)3u;
	 INST_top.DEF_CAN_FIRE_RL_action_l49c19_T = INST_top.DEF_svr_fifo_in_empty__h18048 && (DEF_INST_top_DEF_svr_fifo_in_rvr_read____d150 && DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38_ETC___d168);
	 INST_top.DEF_WILL_FIRE_RL_action_l49c19_T = INST_top.DEF_CAN_FIRE_RL_action_l49c19_T;
	 INST_top.DEF_CAN_FIRE_RL_action_l50c8 = DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139 && DEF_INST_top_DEF_state_mkFSMstate_read____d142 == (tUInt8)5u;
	 INST_top.DEF_WILL_FIRE_RL_action_l50c8 = INST_top.DEF_CAN_FIRE_RL_action_l50c8;
	 DEF_INST_top_DEF_state_fired__h31867 = INST_top.INST_state_fired.METH_read();
	 DEF_INST_top_DEF_start_reg_1__h31865 = INST_top.INST_start_reg_1.METH_read();
	 DEF_INST_top_DEF_running__h34148 = INST_top.INST_running.METH_read();
	 DEF_INST_top_DEF_start_reg__h34062 = INST_top.INST_start_reg.METH_read();
	 DEF_INST_top_DEF_state_mkFSMstate_read__42_EQ_6___d145 = DEF_INST_top_DEF_state_mkFSMstate_read____d142 == (tUInt8)6u;
	 DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16___d117 = DEF_INST_top_DEF_abort_whas____d115 && DEF_INST_top_DEF_abort_wget____d116;
	 DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d146 = (DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16___d117 || DEF_INST_top_DEF_state_mkFSMstate_read____d142 == (tUInt8)0u) || DEF_INST_top_DEF_state_mkFSMstate_read__42_EQ_6___d145;
	 DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d182 = DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d146 && (!DEF_INST_top_DEF_start_reg_1__h31865 || DEF_INST_top_DEF_state_fired__h31867);
	 DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d186 = DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d182 && !DEF_INST_top_DEF_start_reg__h34062;
	 INST_top.DEF_CAN_FIRE_RL_auto_finish = DEF_INST_top_DEF_running__h34148 && DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d186;
	 INST_top.DEF_WILL_FIRE_RL_auto_finish = INST_top.DEF_CAN_FIRE_RL_auto_finish;
	 INST_top.DEF_CAN_FIRE_RL_auto_start = DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d186 && !DEF_INST_top_DEF_running__h34148;
	 INST_top.DEF_WILL_FIRE_RL_auto_start = INST_top.DEF_CAN_FIRE_RL_auto_start;
	 INST_top.DEF_CAN_FIRE_RL_fsm_start = DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d182 && DEF_INST_top_DEF_start_reg__h34062;
	 INST_top.DEF_WILL_FIRE_RL_fsm_start = INST_top.DEF_CAN_FIRE_RL_fsm_start;
	 INST_top.DEF_CAN_FIRE_RL_restart = (DEF_INST_top_DEF_start_reg_1__h31865 && !DEF_INST_top_DEF_state_fired__h31867) && DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139;
	 INST_top.DEF_WILL_FIRE_RL_restart = INST_top.DEF_CAN_FIRE_RL_restart;
	 INST_top.DEF_CAN_FIRE_RL_start_reg__dreg_update = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_start_reg__dreg_update = INST_top.DEF_CAN_FIRE_RL_start_reg__dreg_update;
	 INST_top.DEF_CAN_FIRE_RL_state_every = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_state_every = INST_top.DEF_CAN_FIRE_RL_state_every;
	 INST_top.DEF_CAN_FIRE_RL_state_fired__dreg_update = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_state_fired__dreg_update = INST_top.DEF_CAN_FIRE_RL_state_fired__dreg_update;
	 DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 = INST_top.INST_svr_state_mkFSMstate.METH_read();
	 DEF_INST_top_DEF_svr_state_fired__h17561 = INST_top.INST_svr_state_fired.METH_read();
	 DEF_INST_top_DEF_svr_abort_whas____d20 = INST_top.INST_svr_abort.METH_whas();
	 DEF_INST_top_DEF_svr_abort_wget____d21 = INST_top.INST_svr_abort.METH_wget();
	 DEF_INST_top_DEF_svr_start_reg__h17559 = INST_top.INST_svr_start_reg.METH_read();
	 DEF_INST_top_DEF_svr_state_mkFSMstate_read__0_EQ_7___d53 = DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 == (tUInt8)7u;
	 DEF_INST_top_DEF_svr_abort_whas__0_AND_svr_abort_wget__1___d22 = DEF_INST_top_DEF_svr_abort_whas____d20 && DEF_INST_top_DEF_svr_abort_wget____d21;
	 DEF_INST_top_DEF_svr_abort_whas__0_AND_svr_abort_wget__1_2_OR_s_ETC___d54 = (DEF_INST_top_DEF_svr_abort_whas__0_AND_svr_abort_wget__1___d22 || DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 == (tUInt8)0u) || DEF_INST_top_DEF_svr_state_mkFSMstate_read__0_EQ_7___d53;
	 INST_top.DEF_CAN_FIRE_RL_svr_fsm_start = (DEF_INST_top_DEF_svr_abort_whas__0_AND_svr_abort_wget__1_2_OR_s_ETC___d54 && (!DEF_INST_top_DEF_svr_start_reg__h17559 || DEF_INST_top_DEF_svr_state_fired__h17561)) && INST_top.INST_svr_enabled.METH_read();
	 INST_top.DEF_WILL_FIRE_RL_svr_fsm_start = INST_top.DEF_CAN_FIRE_RL_svr_fsm_start;
	 DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44 = !DEF_INST_top_DEF_svr_abort_whas____d20 || !DEF_INST_top_DEF_svr_abort_wget____d21;
	 INST_top.DEF_CAN_FIRE_RL_svr_restart = (DEF_INST_top_DEF_svr_start_reg__h17559 && !DEF_INST_top_DEF_svr_state_fired__h17561) && DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44;
	 INST_top.DEF_WILL_FIRE_RL_svr_restart = INST_top.DEF_CAN_FIRE_RL_svr_restart;
	 INST_top.DEF_CAN_FIRE_RL_svr_start_reg__dreg_update = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_svr_start_reg__dreg_update = INST_top.DEF_CAN_FIRE_RL_svr_start_reg__dreg_update;
	 INST_top.DEF_CAN_FIRE_RL_svr_state_every = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_svr_state_every = INST_top.DEF_CAN_FIRE_RL_svr_state_every;
	 INST_top.DEF_CAN_FIRE_RL_svr_state_fired__dreg_update = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_svr_state_fired__dreg_update = INST_top.DEF_CAN_FIRE_RL_svr_state_fired__dreg_update;
	 INST_top.DEF_CAN_FIRE___me_check_11 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_11 = INST_top.DEF_CAN_FIRE___me_check_11;
	 INST_top.DEF_CAN_FIRE___me_check_12 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_12 = INST_top.DEF_CAN_FIRE___me_check_12;
	 INST_top.DEF_CAN_FIRE___me_check_14 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_14 = INST_top.DEF_CAN_FIRE___me_check_14;
	 INST_top.DEF_CAN_FIRE___me_check_13 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_13 = INST_top.DEF_CAN_FIRE___me_check_13;
	 INST_top.DEF_CAN_FIRE___me_check_15 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_15 = INST_top.DEF_CAN_FIRE___me_check_15;
	 INST_top.DEF_CAN_FIRE___me_check_16 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_16 = INST_top.DEF_CAN_FIRE___me_check_16;
	 INST_top.DEF_CAN_FIRE___me_check_29 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_29 = INST_top.DEF_CAN_FIRE___me_check_29;
	 INST_top.DEF_CAN_FIRE___me_check_26 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_26 = INST_top.DEF_CAN_FIRE___me_check_26;
	 INST_top.DEF_CAN_FIRE___me_check_32 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_32 = INST_top.DEF_CAN_FIRE___me_check_32;
	 if (INST_top.DEF_WILL_FIRE_RL_action_l48c19_T)
	   INST_top.RL_action_l48c19_T();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l49c19_T)
	   INST_top.RL_action_l49c19_T();
	 INST_top.DEF_svr_fifo_in_bypass_enq_whas____d1 = INST_top.INST_svr_fifo_in_bypass_enq.METH_whas();
	 DEF_INST_top_DEF_NOT_svr_fifo_in_empty_6___d47 = !(INST_top.DEF_svr_fifo_in_empty__h18048);
	 DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48 = INST_top.DEF_svr_fifo_in_bypass_enq_whas____d1 || DEF_INST_top_DEF_NOT_svr_fifo_in_empty_6___d47;
	 INST_top.DEF_CAN_FIRE_RL_svr_action_f_init_l20c13 = DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48 && (DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44 && DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 == (tUInt8)1u);
	 INST_top.DEF_WILL_FIRE_RL_svr_action_f_init_l20c13 = INST_top.DEF_CAN_FIRE_RL_svr_action_f_init_l20c13;
	 INST_top.DEF_CAN_FIRE_RL_svr_action_f_update_l20c13 = DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48 && (DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44 && DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 == (tUInt8)5u);
	 INST_top.DEF_WILL_FIRE_RL_svr_action_f_update_l20c13 = INST_top.DEF_CAN_FIRE_RL_svr_action_f_update_l20c13;
	 INST_top.DEF_b__h7673 = INST_top.INST_idx.METH_read();
	 DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d74 = DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44 && (DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 == (tUInt8)2u || DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 == (tUInt8)6u);
	 DEF_INST_top_DEF_idx_9_ULT_6___d70 = (INST_top.DEF_b__h7673) < (tUInt8)6u;
	 INST_top.DEF_CAN_FIRE_RL_svr_action_l22c19 = DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48 && (DEF_INST_top_DEF_idx_9_ULT_6___d70 && DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d74);
	 INST_top.DEF_WILL_FIRE_RL_svr_action_l22c19 = INST_top.DEF_CAN_FIRE_RL_svr_action_l22c19;
	 INST_top.DEF_CAN_FIRE_RL_svr_action_l28c19 = DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48 && (DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44 && DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 == (tUInt8)4u);
	 INST_top.DEF_WILL_FIRE_RL_svr_action_l28c19 = INST_top.DEF_CAN_FIRE_RL_svr_action_l28c19;
	 INST_top.DEF_CAN_FIRE_RL_svr_action_l23c19 = DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48 && (DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44 && DEF_INST_top_DEF_svr_state_mkFSMstate_read____d50 == (tUInt8)3u);
	 INST_top.DEF_WILL_FIRE_RL_svr_action_l23c19 = INST_top.DEF_CAN_FIRE_RL_svr_action_l23c19;
	 DEF_INST_top_DEF_svr_fifo_out_rvr_read____d93 = INST_top.INST_svr_fifo_out_rvr.METH_read();
	 INST_top.DEF_svr_fifo_out_empty__h20030 = INST_top.INST_svr_fifo_out_empty.METH_read();
	 DEF_INST_top_DEF_NOT_idx_9_ULT_6_0_5_AND_NOT_svr_abort_whas__0__ETC___d96 = !DEF_INST_top_DEF_idx_9_ULT_6___d70 && DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d74;
	 INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_T = INST_top.DEF_svr_fifo_out_empty__h20030 && ((DEF_INST_top_DEF_svr_fifo_out_rvr_read____d93 && DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48) && DEF_INST_top_DEF_NOT_idx_9_ULT_6_0_5_AND_NOT_svr_abort_whas__0__ETC___d96);
	 INST_top.DEF_WILL_FIRE_RL_svr_action_l34c13_T = INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_T;
	 INST_top.DEF_CAN_FIRE_RL_svr_fifo_in_write_data = INST_top.DEF_svr_fifo_in_bypass_enq_whas____d1;
	 INST_top.DEF_WILL_FIRE_RL_svr_fifo_in_write_data = INST_top.DEF_CAN_FIRE_RL_svr_fifo_in_write_data;
	 if (INST_top.DEF_WILL_FIRE_RL_action_l50c8)
	   INST_top.RL_action_l50c8();
	 if (INST_top.DEF_WILL_FIRE_RL_auto_start)
	   INST_top.RL_auto_start();
	 if (INST_top.DEF_WILL_FIRE_RL_fsm_start)
	   INST_top.RL_fsm_start();
	 if (INST_top.DEF_WILL_FIRE_RL_restart)
	   INST_top.RL_restart();
	 DEF_INST_top_DEF_start_wire_whas____d118 = INST_top.INST_start_wire.METH_whas();
	 DEF_INST_top_DEF_start_wire_wget____d120 = INST_top.INST_start_wire.METH_wget();
	 INST_top.DEF_CAN_FIRE_RL_action_l47c8 = ((DEF_INST_top_DEF_start_wire_whas____d118 && DEF_INST_top_DEF_start_wire_wget____d120) && DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16_17_OR_state__ETC___d146) && !((INST_top.DEF_CAN_FIRE_RL_action_l50c8 || INST_top.DEF_CAN_FIRE_RL_action_l49c19_T) || INST_top.DEF_CAN_FIRE_RL_action_l48c19_T);
	 INST_top.DEF_WILL_FIRE_RL_action_l47c8 = INST_top.DEF_CAN_FIRE_RL_action_l47c8;
	 DEF_INST_top_DEF_NOT_start_wire_whas__18_19_OR_NOT_start_wire_w_ETC___d122 = !DEF_INST_top_DEF_start_wire_whas____d118 || !DEF_INST_top_DEF_start_wire_wget____d120;
	 INST_top.DEF_CAN_FIRE_RL_idle_l46c5 = (DEF_INST_top_DEF_NOT_start_wire_whas__18_19_OR_NOT_start_wire_w_ETC___d122 && (DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139 && DEF_INST_top_DEF_state_mkFSMstate_read__42_EQ_6___d145)) && !((INST_top.DEF_CAN_FIRE_RL_action_l50c8 || INST_top.DEF_CAN_FIRE_RL_action_l49c19_T) || INST_top.DEF_CAN_FIRE_RL_action_l48c19_T);
	 INST_top.DEF_WILL_FIRE_RL_idle_l46c5 = INST_top.DEF_CAN_FIRE_RL_idle_l46c5;
	 INST_top.DEF_CAN_FIRE_RL_state_handle_abort = (DEF_INST_top_DEF_abort_whas__15_AND_abort_wget__16___d117 && DEF_INST_top_DEF_NOT_start_wire_whas__18_19_OR_NOT_start_wire_w_ETC___d122) && !((INST_top.DEF_CAN_FIRE_RL_action_l50c8 || INST_top.DEF_CAN_FIRE_RL_action_l49c19_T) || (INST_top.DEF_CAN_FIRE_RL_action_l48c19_T || INST_top.DEF_CAN_FIRE_RL_restart));
	 INST_top.DEF_WILL_FIRE_RL_state_handle_abort = INST_top.DEF_CAN_FIRE_RL_state_handle_abort;
	 if (INST_top.DEF_WILL_FIRE_RL_action_l47c8)
	   INST_top.RL_action_l47c8();
	 if (INST_top.DEF_WILL_FIRE_RL_auto_finish)
	   INST_top.RL_auto_finish();
	 if (INST_top.DEF_WILL_FIRE_RL_idle_l46c5)
	   INST_top.RL_idle_l46c5();
	 if (INST_top.DEF_WILL_FIRE_RL_start_reg__dreg_update)
	   INST_top.RL_start_reg__dreg_update();
	 if (INST_top.DEF_WILL_FIRE_RL_state_handle_abort)
	   INST_top.RL_state_handle_abort();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_action_f_init_l20c13)
	   INST_top.RL_svr_action_f_init_l20c13();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_action_f_update_l20c13)
	   INST_top.RL_svr_action_f_update_l20c13();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_action_l23c19)
	   INST_top.RL_svr_action_l23c19();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_action_l22c19)
	   INST_top.RL_svr_action_l22c19();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_action_l28c19)
	   INST_top.RL_svr_action_l28c19();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_action_l34c13_T)
	   INST_top.RL_svr_action_l34c13_T();
	 INST_top.DEF_svr_fifo_out_bypass_enq_whas____d9 = INST_top.INST_svr_fifo_out_bypass_enq.METH_whas();
	 DEF_INST_top_DEF_NOT_svr_fifo_out_empty_2___d99 = !(INST_top.DEF_svr_fifo_out_empty__h20030);
	 DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d160 = DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48 && (INST_top.DEF_svr_fifo_out_bypass_enq_whas____d9 || DEF_INST_top_DEF_NOT_svr_fifo_out_empty_2___d99);
	 INST_top.DEF_CAN_FIRE_RL_action_l48c19_1 = (DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d160 && (DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139 && DEF_INST_top_DEF_state_mkFSMstate_read____d142 == (tUInt8)2u)) && !((((INST_top.DEF_CAN_FIRE_RL_auto_finish || INST_top.DEF_CAN_FIRE_RL_auto_start) || (INST_top.DEF_CAN_FIRE_RL_fsm_start || INST_top.DEF_CAN_FIRE_RL_idle_l46c5)) || ((INST_top.DEF_CAN_FIRE_RL_action_l50c8 || INST_top.DEF_CAN_FIRE_RL_action_l49c19_T) || (INST_top.DEF_CAN_FIRE_RL_action_l48c19_T || INST_top.DEF_CAN_FIRE_RL_action_l47c8))) || INST_top.DEF_CAN_FIRE_RL_state_handle_abort);
	 INST_top.DEF_WILL_FIRE_RL_action_l48c19_1 = INST_top.DEF_CAN_FIRE_RL_action_l48c19_1;
	 INST_top.DEF_CAN_FIRE_RL_action_l49c19_1 = (DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d160 && (DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38___d139 && DEF_INST_top_DEF_state_mkFSMstate_read____d142 == (tUInt8)4u)) && !((((INST_top.DEF_CAN_FIRE_RL_auto_finish || INST_top.DEF_CAN_FIRE_RL_auto_start) || (INST_top.DEF_CAN_FIRE_RL_fsm_start || INST_top.DEF_CAN_FIRE_RL_idle_l46c5)) || ((INST_top.DEF_CAN_FIRE_RL_action_l50c8 || INST_top.DEF_CAN_FIRE_RL_action_l49c19_T) || (INST_top.DEF_CAN_FIRE_RL_action_l48c19_T || INST_top.DEF_CAN_FIRE_RL_action_l47c8))) || INST_top.DEF_CAN_FIRE_RL_state_handle_abort);
	 INST_top.DEF_WILL_FIRE_RL_action_l49c19_1 = INST_top.DEF_CAN_FIRE_RL_action_l49c19_1;
	 INST_top.DEF_CAN_FIRE_RL_svr_fifo_out_write_data = INST_top.DEF_svr_fifo_out_bypass_enq_whas____d9;
	 INST_top.DEF_WILL_FIRE_RL_svr_fifo_out_write_data = INST_top.DEF_CAN_FIRE_RL_svr_fifo_out_write_data;
	 if (INST_top.DEF_WILL_FIRE_RL_svr_fsm_start)
	   INST_top.RL_svr_fsm_start();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l48c19_1)
	   INST_top.RL_action_l48c19_1();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l49c19_1)
	   INST_top.RL_action_l49c19_1();
	 DEF_INST_top_DEF_svr_fifo_in_do_deq_whas____d3 = INST_top.INST_svr_fifo_in_do_deq.METH_whas();
	 DEF_INST_top_DEF_svr_fifo_in_empty_6_OR_svr_fifo_in_do_deq_whas_ETC___d156 = (INST_top.DEF_svr_fifo_in_empty__h18048 || DEF_INST_top_DEF_svr_fifo_in_do_deq_whas____d3) && DEF_INST_top_DEF_svr_fifo_in_rvr_read____d150;
	 INST_top.DEF_CAN_FIRE_RL_action_l48c19_F = (DEF_INST_top_DEF_NOT_svr_fifo_in_empty_6___d47 && (DEF_INST_top_DEF_svr_fifo_in_empty_6_OR_svr_fifo_in_do_deq_whas_ETC___d156 && DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38_ETC___d152)) && !((((INST_top.DEF_CAN_FIRE_RL_auto_finish || INST_top.DEF_CAN_FIRE_RL_auto_start) || (INST_top.DEF_CAN_FIRE_RL_fsm_start || INST_top.DEF_CAN_FIRE_RL_idle_l46c5)) || ((INST_top.DEF_CAN_FIRE_RL_action_l50c8 || INST_top.DEF_CAN_FIRE_RL_action_l49c19_1) || (INST_top.DEF_CAN_FIRE_RL_action_l49c19_T || INST_top.DEF_CAN_FIRE_RL_action_l48c19_1))) || ((INST_top.DEF_CAN_FIRE_RL_action_l48c19_T || INST_top.DEF_CAN_FIRE_RL_action_l47c8) || INST_top.DEF_CAN_FIRE_RL_state_handle_abort));
	 INST_top.DEF_WILL_FIRE_RL_action_l48c19_F = INST_top.DEF_CAN_FIRE_RL_action_l48c19_F;
	 INST_top.DEF_CAN_FIRE_RL_action_l49c19_F = (DEF_INST_top_DEF_NOT_svr_fifo_in_empty_6___d47 && (DEF_INST_top_DEF_svr_fifo_in_empty_6_OR_svr_fifo_in_do_deq_whas_ETC___d156 && DEF_INST_top_DEF_NOT_abort_whas__15_37_OR_NOT_abort_wget__16_38_ETC___d168)) && !((((INST_top.DEF_CAN_FIRE_RL_auto_finish || INST_top.DEF_CAN_FIRE_RL_auto_start) || (INST_top.DEF_CAN_FIRE_RL_fsm_start || INST_top.DEF_CAN_FIRE_RL_idle_l46c5)) || ((INST_top.DEF_CAN_FIRE_RL_action_l50c8 || INST_top.DEF_CAN_FIRE_RL_action_l49c19_1) || (INST_top.DEF_CAN_FIRE_RL_action_l49c19_T || INST_top.DEF_CAN_FIRE_RL_action_l48c19_1))) || ((INST_top.DEF_CAN_FIRE_RL_action_l48c19_T || INST_top.DEF_CAN_FIRE_RL_action_l47c8) || INST_top.DEF_CAN_FIRE_RL_state_handle_abort));
	 INST_top.DEF_WILL_FIRE_RL_action_l49c19_F = INST_top.DEF_CAN_FIRE_RL_action_l49c19_F;
	 DEF_INST_top_DEF_svr_fifo_out_do_deq_whas____d11 = INST_top.INST_svr_fifo_out_do_deq.METH_whas();
	 INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_F = (DEF_INST_top_DEF_NOT_svr_fifo_out_empty_2___d99 && ((((INST_top.DEF_svr_fifo_out_empty__h20030 || DEF_INST_top_DEF_svr_fifo_out_do_deq_whas____d11) && DEF_INST_top_DEF_svr_fifo_out_rvr_read____d93) && DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48) && DEF_INST_top_DEF_NOT_idx_9_ULT_6_0_5_AND_NOT_svr_abort_whas__0__ETC___d96)) && !(((INST_top.DEF_CAN_FIRE_RL_svr_fsm_start || INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_T) || (INST_top.DEF_CAN_FIRE_RL_svr_action_f_update_l20c13 || INST_top.DEF_CAN_FIRE_RL_svr_action_l28c19)) || ((INST_top.DEF_CAN_FIRE_RL_svr_action_l23c19 || INST_top.DEF_CAN_FIRE_RL_svr_action_l22c19) || INST_top.DEF_CAN_FIRE_RL_svr_action_f_init_l20c13));
	 INST_top.DEF_WILL_FIRE_RL_svr_action_l34c13_F = INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_F;
	 if (INST_top.DEF_WILL_FIRE_RL_svr_restart)
	   INST_top.RL_svr_restart();
	 DEF_INST_top_DEF_svr_start_wire_whas____d23 = INST_top.INST_svr_start_wire.METH_whas();
	 DEF_INST_top_DEF_svr_start_wire_wget____d25 = INST_top.INST_svr_start_wire.METH_wget();
	 INST_top.DEF_CAN_FIRE_RL_svr_action_l19c13 = (DEF_INST_top_DEF_svr_fifo_in_bypass_enq_whas_OR_NOT_svr_fifo_in_ETC___d48 && ((DEF_INST_top_DEF_svr_start_wire_whas____d23 && DEF_INST_top_DEF_svr_start_wire_wget____d25) && DEF_INST_top_DEF_svr_abort_whas__0_AND_svr_abort_wget__1_2_OR_s_ETC___d54)) && !(((INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_T || INST_top.DEF_CAN_FIRE_RL_svr_action_f_update_l20c13) || (INST_top.DEF_CAN_FIRE_RL_svr_action_l28c19 || INST_top.DEF_CAN_FIRE_RL_svr_action_l23c19)) || (INST_top.DEF_CAN_FIRE_RL_svr_action_l22c19 || INST_top.DEF_CAN_FIRE_RL_svr_action_f_init_l20c13));
	 INST_top.DEF_WILL_FIRE_RL_svr_action_l19c13 = INST_top.DEF_CAN_FIRE_RL_svr_action_l19c13;
	 DEF_INST_top_DEF_NOT_svr_start_wire_whas__3_4_OR_NOT_svr_start__ETC___d27 = !DEF_INST_top_DEF_svr_start_wire_whas____d23 || !DEF_INST_top_DEF_svr_start_wire_wget____d25;
	 INST_top.DEF_CAN_FIRE_RL_svr_idle_l18c10 = (DEF_INST_top_DEF_NOT_svr_start_wire_whas__3_4_OR_NOT_svr_start__ETC___d27 && (DEF_INST_top_DEF_NOT_svr_abort_whas__0_2_OR_NOT_svr_abort_wget__ETC___d44 && DEF_INST_top_DEF_svr_state_mkFSMstate_read__0_EQ_7___d53)) && !(((INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_T || INST_top.DEF_CAN_FIRE_RL_svr_action_f_update_l20c13) || (INST_top.DEF_CAN_FIRE_RL_svr_action_l28c19 || INST_top.DEF_CAN_FIRE_RL_svr_action_l23c19)) || (INST_top.DEF_CAN_FIRE_RL_svr_action_l22c19 || INST_top.DEF_CAN_FIRE_RL_svr_action_f_init_l20c13));
	 INST_top.DEF_WILL_FIRE_RL_svr_idle_l18c10 = INST_top.DEF_CAN_FIRE_RL_svr_idle_l18c10;
	 INST_top.DEF_CAN_FIRE_RL_svr_state_handle_abort = (DEF_INST_top_DEF_svr_abort_whas__0_AND_svr_abort_wget__1___d22 && DEF_INST_top_DEF_NOT_svr_start_wire_whas__3_4_OR_NOT_svr_start__ETC___d27) && !(((INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_T || INST_top.DEF_CAN_FIRE_RL_svr_action_f_update_l20c13) || (INST_top.DEF_CAN_FIRE_RL_svr_action_l28c19 || INST_top.DEF_CAN_FIRE_RL_svr_action_l23c19)) || ((INST_top.DEF_CAN_FIRE_RL_svr_action_l22c19 || INST_top.DEF_CAN_FIRE_RL_svr_action_f_init_l20c13) || INST_top.DEF_CAN_FIRE_RL_svr_restart));
	 INST_top.DEF_WILL_FIRE_RL_svr_state_handle_abort = INST_top.DEF_CAN_FIRE_RL_svr_state_handle_abort;
	 if (INST_top.DEF_WILL_FIRE_RL_svr_action_l19c13)
	   INST_top.RL_svr_action_l19c13();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l48c19_F)
	   INST_top.RL_action_l48c19_F();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l49c19_F)
	   INST_top.RL_action_l49c19_F();
	 DEF_INST_top_DEF_svr_fifo_in_do_enq_whas____d4 = INST_top.INST_svr_fifo_in_do_enq.METH_whas();
	 INST_top.DEF_CAN_FIRE_RL_svr_fifo_in_empty_fifo = DEF_INST_top_DEF_svr_fifo_in_do_deq_whas____d3 && !DEF_INST_top_DEF_svr_fifo_in_do_enq_whas____d4;
	 INST_top.DEF_WILL_FIRE_RL_svr_fifo_in_empty_fifo = INST_top.DEF_CAN_FIRE_RL_svr_fifo_in_empty_fifo;
	 INST_top.DEF_CAN_FIRE_RL_svr_fifo_in_fill_fifo = (DEF_INST_top_DEF_svr_fifo_in_do_enq_whas____d4 && !DEF_INST_top_DEF_svr_fifo_in_do_deq_whas____d3) && !(INST_top.DEF_CAN_FIRE_RL_action_l49c19_F || INST_top.DEF_CAN_FIRE_RL_action_l48c19_F);
	 INST_top.DEF_WILL_FIRE_RL_svr_fifo_in_fill_fifo = INST_top.DEF_CAN_FIRE_RL_svr_fifo_in_fill_fifo;
	 if (INST_top.DEF_WILL_FIRE_RL_state_every)
	   INST_top.RL_state_every();
	 if (INST_top.DEF_WILL_FIRE_RL_state_fired__dreg_update)
	   INST_top.RL_state_fired__dreg_update();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_fifo_in_write_data)
	   INST_top.RL_svr_fifo_in_write_data();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_start_reg__dreg_update)
	   INST_top.RL_svr_start_reg__dreg_update();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_state_handle_abort)
	   INST_top.RL_svr_state_handle_abort();
	 if (INST_top.DEF_WILL_FIRE___me_check_26)
	   INST_top.__me_check_26();
	 if (INST_top.DEF_WILL_FIRE___me_check_29)
	   INST_top.__me_check_29();
	 if (INST_top.DEF_WILL_FIRE___me_check_32)
	   INST_top.__me_check_32();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_action_l34c13_F)
	   INST_top.RL_svr_action_l34c13_F();
	 DEF_INST_top_DEF_svr_fifo_out_do_enq_whas____d12 = INST_top.INST_svr_fifo_out_do_enq.METH_whas();
	 INST_top.DEF_CAN_FIRE_RL_svr_fifo_out_empty_fifo = DEF_INST_top_DEF_svr_fifo_out_do_deq_whas____d11 && !DEF_INST_top_DEF_svr_fifo_out_do_enq_whas____d12;
	 INST_top.DEF_WILL_FIRE_RL_svr_fifo_out_empty_fifo = INST_top.DEF_CAN_FIRE_RL_svr_fifo_out_empty_fifo;
	 INST_top.DEF_CAN_FIRE_RL_svr_fifo_out_fill_fifo = (DEF_INST_top_DEF_svr_fifo_out_do_enq_whas____d12 && !DEF_INST_top_DEF_svr_fifo_out_do_deq_whas____d11) && !(INST_top.DEF_CAN_FIRE_RL_svr_action_l34c13_F);
	 INST_top.DEF_WILL_FIRE_RL_svr_fifo_out_fill_fifo = INST_top.DEF_CAN_FIRE_RL_svr_fifo_out_fill_fifo;
	 if (INST_top.DEF_WILL_FIRE_RL_svr_fifo_in_empty_fifo)
	   INST_top.RL_svr_fifo_in_empty_fifo();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_fifo_in_fill_fifo)
	   INST_top.RL_svr_fifo_in_fill_fifo();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_fifo_out_empty_fifo)
	   INST_top.RL_svr_fifo_out_empty_fifo();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_fifo_out_fill_fifo)
	   INST_top.RL_svr_fifo_out_fill_fifo();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_fifo_out_write_data)
	   INST_top.RL_svr_fifo_out_write_data();
	 if (INST_top.DEF_WILL_FIRE___me_check_11)
	   INST_top.__me_check_11();
	 if (INST_top.DEF_WILL_FIRE___me_check_12)
	   INST_top.__me_check_12();
	 if (INST_top.DEF_WILL_FIRE___me_check_13)
	   INST_top.__me_check_13();
	 if (INST_top.DEF_WILL_FIRE___me_check_14)
	   INST_top.__me_check_14();
	 if (INST_top.DEF_WILL_FIRE___me_check_15)
	   INST_top.__me_check_15();
	 if (INST_top.DEF_WILL_FIRE___me_check_16)
	   INST_top.__me_check_16();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_idle_l18c10)
	   INST_top.RL_svr_idle_l18c10();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_state_every)
	   INST_top.RL_svr_state_every();
	 if (INST_top.DEF_WILL_FIRE_RL_svr_state_fired__dreg_update)
	   INST_top.RL_svr_state_fired__dreg_update();
	 INST_top.INST_state_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_state_overlap_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_state_set_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_start_reg_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_state_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_state_overlap_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_state_set_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_start_reg_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_fifo_out_bypass_enq.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_fifo_out_do_enq.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_fifo_out_do_deq.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_fifo_in_bypass_enq.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_fifo_in_do_enq.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_svr_fifo_in_do_deq.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_svr_enabled.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_svr_fifo_in_empty.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_svr_fifo_out_empty.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_svr_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_svr_state_mkFSMstate.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_svr_state_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_svr_state_can_overlap.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_results_0.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_results_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_start_reg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_mkFSMstate.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_can_overlap.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_running.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_sysServerTestUpdate::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  sysServerTestUpdate_instance = new MOD_sysServerTestUpdate(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (sysServerTestUpdate_instance->INST_svr_fifo_in_do_deq.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_fifo_in_do_enq.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_fifo_in_bypass_enq.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_fifo_out_do_deq.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_fifo_out_do_enq.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_fifo_out_bypass_enq.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_start_wire.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_start_reg_1.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_abort.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_state_set_pw.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_state_overlap_pw.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_svr_state_fired_1.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_start_wire.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_start_reg_2.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_abort.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_state_set_pw.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_state_overlap_pw.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->INST_state_fired_1.set_clk_0)("CLK");
  (sysServerTestUpdate_instance->set_clk_0)("CLK");
}
void MODEL_sysServerTestUpdate::destroy_model()
{
  delete sysServerTestUpdate_instance;
  sysServerTestUpdate_instance = NULL;
}
void MODEL_sysServerTestUpdate::reset_model(bool asserted)
{
  (sysServerTestUpdate_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_sysServerTestUpdate::get_instance()
{
  return sysServerTestUpdate_instance;
}

/* Fill in version numbers */
void MODEL_sysServerTestUpdate::get_version(char const **name, char const **build)
{
  *name = "2024.07-4-g6f298148";
  *build = "6f298148";
}

/* Get the model creation time */
time_t MODEL_sysServerTestUpdate::get_creation_time()
{
  
  /* Sat Oct  5 14:24:02 UTC 2024 */
  return 1728138242llu;
}

/* State dumping function */
void MODEL_sysServerTestUpdate::dump_state()
{
  (sysServerTestUpdate_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_sysServerTestUpdate & sysServerTestUpdate_backing(tSimStateHdl simHdl)
{
  static MOD_sysServerTestUpdate *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_sysServerTestUpdate(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_sysServerTestUpdate::dump_VCD_defs()
{
  (sysServerTestUpdate_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_sysServerTestUpdate::dump_VCD(tVCDDumpType dt)
{
  (sysServerTestUpdate_instance->dump_VCD)(dt,
					   vcd_depth(sim_hdl),
					   sysServerTestUpdate_backing(sim_hdl));
}
