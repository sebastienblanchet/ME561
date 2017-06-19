/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Model/Solver Configuration'.
 */
/* Model_4363cb6f_1_ds.c - body for module Model_4363cb6f_1_ds */

#include "ne_ds.h"
#include "Model_4363cb6f_1_ds.h"
#ifndef struct__NeDynamicSystemTag
#define struct__NeDynamicSystemTag

typedef struct _NeDynamicSystemTag {
  NeDynamicSystem mBase;
  int32_T mRefCnt;
  PmAllocator mAlloc;
  FunData *mFunData[48];
} _NeDynamicSystem;

#else

typedef struct _NeDynamicSystemTag _NeDynamicSystem;

#endif

static int32_T ds_m_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_a_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_a(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_f(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mode(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_zc(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_log(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_assert(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_obs_exp(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_obs_act(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T stub_method(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_expand(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(const NeDynamicSystem *ds);
static NeEquationData s_equation_data[72] = { { "Model.Hydraulic_Pipeline.ch_A",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "Model/Hydraulic Pipeline", 1U, 0U, TRUE,
    1.0, "1" }, { "Model.Hydraulic_Pipeline.ch_A", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/Hydraulic Pipeline", 1U, 1U, FALSE,
    999999.99999999988, "m^3/s" }, { "Model.Hydraulic_Pipeline1.ch_A", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/Hydraulic Pipeline1", 1U, 2U, TRUE, 1.0, "1"
  }, { "Model.Hydraulic_Pipeline1.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline1", 1U, 3U, FALSE, 999999.99999999988, "m^3/s" }, {
    "Model.Hydraulic_Pipeline2.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline2", 1U, 4U, TRUE, 1.0, "1" }, {
    "Model.Hydraulic_Pipeline2.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline2", 1U, 5U, FALSE, 999999.99999999988, "m^3/s" }, {
    "Model.Hydraulic_Pipeline3.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline3", 1U, 6U, TRUE, 1.0, "1" }, {
    "Model.Hydraulic_Pipeline3.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline3", 1U, 7U, FALSE, 999999.99999999988, "m^3/s" }, {
    "Model.Reservoir", 0U, 8, NE_EQUATION_DOMAIN_TIME, "Model/Reservoir", 1U, 8U,
    TRUE, 999999.99999999988, "m^3/s" }, { "Model.Hydraulic_Cap", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/Hydraulic Cap", 1U, 9U, TRUE, 1.0e-5, "Pa" },
  { "Model.Hydraulic_Cap1", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Cap1", 1U, 10U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pressure_Sensor", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pressure Sensor", 1U, 11U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pressure_Sensor", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pressure Sensor", 1U, 12U, TRUE, 1.0, "m^3/s" }, {
    "Model.Hydraulic_Pressure_Sensor", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pressure Sensor", 1U, 13U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pressure_Sensor1", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pressure Sensor1", 1U, 14U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pressure_Sensor1", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pressure Sensor1", 1U, 15U, TRUE, 1.0, "m^3/s" }, {
    "Model.Hydraulic_Pressure_Sensor1", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pressure Sensor1", 1U, 16U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Constant_Flow_Rate_Source", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Constant Flow Rate Source", 1U, 17U, TRUE, 1.0e-5, "Pa" },
    { "Model.Hydraulic_Constant_Flow_Rate_Source", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/Hydraulic Constant Flow Rate Source", 1U,
    18U, TRUE, 999999.99999999988, "m^3/s" }, {
    "Model.Hydraulic_Constant_Flow_Rate_Source", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Constant Flow Rate Source", 1U, 19U, FALSE, 1.0, "W" }, {
    "Model.Elbow.l_res", 0U, 8, NE_EQUATION_DOMAIN_TIME, "Model/Elbow", 1U, 20U,
    TRUE, 1.0e-5, "Pa" }, { "Model.Elbow.l_res", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Elbow", 1U, 21U, FALSE, 1.162487358622446, "1" }, {
    "Model.Elbow1.l_res", 0U, 8, NE_EQUATION_DOMAIN_TIME, "Model/Elbow1", 1U,
    22U, TRUE, 1.0e-5, "Pa" }, { "Model.Elbow1.l_res", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/Elbow1", 1U, 23U, FALSE, 1.162487358622446,
    "1" }, { "Model.T_junction1.l_res_ab", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction1", 1U, 24U, TRUE, 1.0e-5, "Pa" }, {
    "Model.T_junction1.l_res_ab", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction1", 1U, 25U, FALSE, 2.7089708162915591, "1" }, {
    "Model.T_junction1.l_res_aa1", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction1", 1U, 26U, TRUE, 1.0e-5, "Pa" }, {
    "Model.T_junction1.l_res_aa1", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction1", 1U, 27U, FALSE, 2.7089708162915591, "1" }, {
    "Model.T_junction1.l_res_a1b", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction1", 1U, 28U, TRUE, 1.0e-5, "Pa" }, {
    "Model.T_junction1.l_res_a1b", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction1", 1U, 29U, FALSE, 2.7089708162915591, "1" }, {
    "Model.T_junction1.A", 0U, 33, NE_EQUATION_DOMAIN_TIME, "Model/T-junction1",
    0U, 30U, FALSE, 999999.99999999988, "m^3/s" }, { "Model.T_junction1.A1", 0U,
    33, NE_EQUATION_DOMAIN_TIME, "Model/T-junction1", 0U, 30U, FALSE,
    999999.99999999988, "m^3/s" }, { "Model.T_junction1.B", 0U, 33,
    NE_EQUATION_DOMAIN_TIME, "Model/T-junction1", 0U, 30U, FALSE,
    999999.99999999988, "m^3/s" }, { "Model.T_junction2.l_res_ab", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/T-junction2", 1U, 30U, TRUE, 1.0e-5, "Pa" },
  { "Model.T_junction2.l_res_ab", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction2", 1U, 31U, FALSE, 2.7089708162915591, "1" }, {
    "Model.T_junction2.l_res_aa1", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction2", 1U, 32U, TRUE, 1.0e-5, "Pa" }, {
    "Model.T_junction2.l_res_aa1", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction2", 1U, 33U, FALSE, 2.7089708162915591, "1" }, {
    "Model.T_junction2.l_res_a1b", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction2", 1U, 34U, TRUE, 1.0e-5, "Pa" }, {
    "Model.T_junction2.l_res_a1b", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/T-junction2", 1U, 35U, FALSE, 2.7089708162915591, "1" }, {
    "Model.T_junction2.A", 0U, 33, NE_EQUATION_DOMAIN_TIME, "Model/T-junction2",
    0U, 36U, FALSE, 999999.99999999988, "m^3/s" }, { "Model.T_junction2.A1", 0U,
    33, NE_EQUATION_DOMAIN_TIME, "Model/T-junction2", 0U, 36U, FALSE,
    999999.99999999988, "m^3/s" }, { "Model.T_junction2.B", 0U, 33,
    NE_EQUATION_DOMAIN_TIME, "Model/T-junction2", 0U, 36U, FALSE,
    999999.99999999988, "m^3/s" }, { "Model.Hydraulic_Pipeline.tb_A", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/Hydraulic Pipeline", 1U, 36U, TRUE, 1.0e-5,
    "Pa" }, { "Model.Hydraulic_Pipeline.tb_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline", 1U, 37U, FALSE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline", 1U, 38U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline.tb_B", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline", 1U, 39U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline.tb_B", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline", 1U, 40U, FALSE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline.n_int", 0U, 33, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline", 0U, 41U, FALSE, 999999.99999999988, "m^3/s" }, {
    "Model.Hydraulic_Pipeline1.tb_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline1", 1U, 41U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline1.tb_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline1", 1U, 42U, FALSE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline1.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline1", 1U, 43U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline1.tb_B", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline1", 1U, 44U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline1.tb_B", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline1", 1U, 45U, FALSE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline1.n_int", 0U, 33, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline1", 0U, 46U, FALSE, 999999.99999999988, "m^3/s" },
    { "Model.Hydraulic_Pipeline2.tb_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline2", 1U, 46U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline2.tb_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline2", 1U, 47U, FALSE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline2.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline2", 1U, 48U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline2.tb_B", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline2", 1U, 49U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline2.tb_B", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline2", 1U, 50U, FALSE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline2.n_int", 0U, 33, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline2", 0U, 51U, FALSE, 999999.99999999988, "m^3/s" },
    { "Model.Hydraulic_Pipeline3.tb_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline3", 1U, 51U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline3.tb_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline3", 1U, 52U, FALSE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline3.ch_A", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline3", 1U, 53U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline3.tb_B", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline3", 1U, 54U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline3.tb_B", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline3", 1U, 55U, FALSE, 1.0e-5, "Pa" }, {
    "Model.Hydraulic_Pipeline3.n_int", 0U, 33, NE_EQUATION_DOMAIN_TIME,
    "Model/Hydraulic Pipeline3", 0U, 56U, FALSE, 999999.99999999988, "m^3/s" },
    { "Model.Reservoir", 0U, 36, NE_EQUATION_DOMAIN_TIME, "Model/Reservoir", 0U,
    56U, FALSE, 999999.99999999988, "m^3/s" }, { "Model.Reservoir", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/Reservoir", 1U, 56U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Reservoir", 0U, 8, NE_EQUATION_DOMAIN_TIME, "Model/Reservoir", 1U,
    57U, FALSE, 0.33862135203644489, "m^3/s" }, { "Model.Reservoir", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "Model/Reservoir", 1U, 58U, TRUE, 1.0e-5, "Pa" }, {
    "Model.Reservoir", 0U, 8, NE_EQUATION_DOMAIN_TIME, "Model/Reservoir", 1U,
    59U, TRUE, 1.0, "m^3" }, { "Model.Hydraulic_Constant_Flow_Rate_Source_T", 0U,
    33, NE_EQUATION_DOMAIN_TIME, "Model/Hydraulic Constant\nFlow Rate Source",
    0U, 60U, FALSE, 999999.99999999988, "m^3/s" } };

static NeVariableData s_variable_data[72] = { {
    "Hydraulic_Pipeline.ch_A.diameter_incr", 0U, 0, "Model/Hydraulic Pipeline",
    1.0, "m", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_NONE, "Diameter increase" }, {
    "Hydraulic_Pipeline.ch_A.pressure", 0U, 0, "Model/Hydraulic Pipeline",
    100000.0, "bar", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Pressure (gauge)" }, { "Hydraulic_Pipeline1.ch_A.diameter_incr", 0U, 0,
    "Model/Hydraulic Pipeline1", 1.0, "m", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_NONE,
    "Diameter increase" }, { "Hydraulic_Pipeline1.ch_A.pressure", 0U, 0,
    "Model/Hydraulic Pipeline1", 100000.0, "bar", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Pressure (gauge)" }, {
    "Hydraulic_Pipeline2.ch_A.diameter_incr", 0U, 0, "Model/Hydraulic Pipeline2",
    1.0, "m", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_NONE, "Diameter increase" }, {
    "Hydraulic_Pipeline2.ch_A.pressure", 0U, 0, "Model/Hydraulic Pipeline2",
    100000.0, "bar", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Pressure (gauge)" }, { "Hydraulic_Pipeline3.ch_A.diameter_incr", 0U, 0,
    "Model/Hydraulic Pipeline3", 1.0, "m", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_NONE,
    "Diameter increase" }, { "Hydraulic_Pipeline3.ch_A.pressure", 0U, 0,
    "Model/Hydraulic Pipeline3", 100000.0, "bar", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Pressure (gauge)" }, { "Reservoir.volume", 0U, 0,
    "Model/Reservoir", 1.0, "m^3", 0.1892705892, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Fluid volume in the tank" }, { "Elbow.A.p", 0U, 1,
    "Model/Elbow", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure" }, { "Elbow.B.p", 0U, 1, "Model/Elbow", 100000.0, "bar", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, { "Elbow.l_res.flow_rate",
    0U, 0, "Model/Elbow", 1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Flow rate" }, { "Elbow.l_res.pressure_drop", 0U, 0,
    "Model/Elbow", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure differential" }, { "Elbow1.A.p", 0U, 1, "Model/Elbow1", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, { "Elbow1.B.p",
    0U, 1, "Model/Elbow1", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure" }, { "Elbow1.l_res.flow_rate", 0U, 0,
    "Model/Elbow1", 1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Flow rate" }, { "Elbow1.l_res.pressure_drop", 0U, 0,
    "Model/Elbow1", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure differential" }, { "Hydraulic_Cap.P.p", 0U, 1,
    "Model/Hydraulic Cap", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure" }, { "Hydraulic_Cap1.P.p", 0U, 1,
    "Model/Hydraulic Cap1", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure" }, { "Hydraulic_Cap1.p", 0U, 0,
    "Model/Hydraulic Cap1", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure (gauge)" }, { "Hydraulic_Cap.p", 0U, 0,
    "Model/Hydraulic Cap", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure (gauge)" }, {
    "Hydraulic_Constant_Flow_Rate_Source.P.p", 0U, 1,
    "Model/Hydraulic Constant Flow Rate Source", 100000.0, "bar", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Pressure" }, {
    "Hydraulic_Constant_Flow_Rate_Source.flow_rate", 0U, 0,
    "Model/Hydraulic Constant Flow Rate Source", 1.0000000000000002e-6, "cm^3/s",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Flow rate" }, {
    "Hydraulic_Constant_Flow_Rate_Source.power", 0U, 0,
    "Model/Hydraulic Constant Flow Rate Source", 1.0, "W", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Power" }, {
    "Hydraulic_Constant_Flow_Rate_Source.pressure", 0U, 0,
    "Model/Hydraulic Constant Flow Rate Source", 100000.0, "bar", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Pressure differential" }, { "Hydraulic_Fluid.G.p",
    0U, 1, "Model/Hydraulic Fluid", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure" }, { "Hydraulic_Pipeline.ch_A.flow_rate", 0U,
    0, "Model/Hydraulic Pipeline", 1.0000000000000002e-6, "cm^3/s",
    999.99999999999989, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Flow rate into chamber" }, { "Hydraulic_Pipeline.tb_A.B.p", 0U, 1,
    "Model/Hydraulic Pipeline", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure" }, { "Hydraulic_Pipeline.tb_A.p", 0U, 0,
    "Model/Hydraulic Pipeline", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure differential" }, { "Hydraulic_Pipeline.tb_A.q",
    0U, 0, "Model/Hydraulic Pipeline", 1.0000000000000002e-6, "cm^3/s",
    999.99999999999989, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Flow rate" }, {
    "Hydraulic_Pipeline.tb_B.p", 0U, 0, "Model/Hydraulic Pipeline", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure differential" }, {
    "Hydraulic_Pipeline1.ch_A.flow_rate", 0U, 0, "Model/Hydraulic Pipeline1",
    1.0000000000000002e-6, "cm^3/s", 999.99999999999989, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Flow rate into chamber" }, {
    "Hydraulic_Pipeline1.tb_A.B.p", 0U, 1, "Model/Hydraulic Pipeline1", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, {
    "Hydraulic_Pipeline1.tb_A.p", 0U, 0, "Model/Hydraulic Pipeline1", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure differential" }, {
    "Hydraulic_Pipeline1.tb_B.p", 0U, 0, "Model/Hydraulic Pipeline1", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure differential" }, {
    "Hydraulic_Pipeline2.B.p", 0U, 1, "Model/Hydraulic Pipeline2", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, {
    "Hydraulic_Pipeline2.ch_A.flow_rate", 0U, 0, "Model/Hydraulic Pipeline2",
    1.0000000000000002e-6, "cm^3/s", 999.99999999999989, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Flow rate into chamber" }, {
    "Hydraulic_Pipeline2.tb_A.B.p", 0U, 1, "Model/Hydraulic Pipeline2", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, {
    "Hydraulic_Pipeline2.tb_A.p", 0U, 0, "Model/Hydraulic Pipeline2", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure differential" }, {
    "Hydraulic_Pipeline2.tb_B.p", 0U, 0, "Model/Hydraulic Pipeline2", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure differential" }, {
    "Hydraulic_Pipeline2.tb_B.q", 0U, 0, "Model/Hydraulic Pipeline2",
    1.0000000000000002e-6, "cm^3/s", 999.99999999999989, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Flow rate" }, { "Hydraulic_Pipeline3.ch_A.flow_rate", 0U,
    0, "Model/Hydraulic Pipeline3", 1.0000000000000002e-6, "cm^3/s",
    999.99999999999989, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Flow rate into chamber" }, { "Hydraulic_Pipeline3.tb_A.B.p", 0U, 1,
    "Model/Hydraulic Pipeline3", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure" }, { "Hydraulic_Pipeline3.tb_A.p", 0U, 0,
    "Model/Hydraulic Pipeline3", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure differential" }, { "Hydraulic_Pipeline3.tb_B.p",
    0U, 0, "Model/Hydraulic Pipeline3", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure differential" }, { "Hydraulic_Pipeline3.tb_B.q",
    0U, 0, "Model/Hydraulic Pipeline3", 1.0000000000000002e-6, "cm^3/s",
    999.99999999999989, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Flow rate" }, {
    "Hydraulic_Pressure_Sensor.A.p", 0U, 1, "Model/Hydraulic Pressure Sensor",
    100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, {
    "Hydraulic_Pressure_Sensor1.A.p", 0U, 1, "Model/Hydraulic Pressure Sensor1",
    100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, {
    "Hydraulic_Pressure_Sensor1.P", 0U, 2, "Model/Hydraulic Pressure Sensor1",
    100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "P" }, {
    "Hydraulic_Pressure_Sensor1.p", 0U, 0, "Model/Hydraulic Pressure Sensor1",
    100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure differential" }, { "Hydraulic_Pressure_Sensor.P", 0U, 2,
    "Model/Hydraulic Pressure Sensor", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "P" }, { "Hydraulic_Pressure_Sensor.p", 0U, 0,
    "Model/Hydraulic Pressure Sensor", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure differential" }, { "Reservoir.P.q", 0U, 0,
    "Model/Reservoir", 1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "q" }, { "Reservoir.V", 0U, 2, "Model/Reservoir", 1.0,
    "m^3", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "V" }, {
    "Reservoir.flow_rate_P", 0U, 0, "Model/Reservoir", 1.0000000000000002e-6,
    "cm^3/s", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Reservoir net flow rate" },
  { "Reservoir.flow_rate_ret", 0U, 0, "Model/Reservoir", 1.0000000000000002e-6,
    "cm^3/s", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Flow rate through return line" }, { "Reservoir.pressure_diff_ret", 0U, 0,
    "Model/Reservoir", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure loss in return line" }, { "T_junction1.A1.p", 0U, 1,
    "Model/T-junction1", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure" }, { "T_junction1.B.p", 0U, 1, "Model/T-junction1", 100000.0,
    "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, {
    "T_junction1.l_res_a1b.flow_rate", 0U, 0, "Model/T-junction1",
    1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Flow rate" }, { "T_junction1.l_res_a1b.pressure_drop", 0U, 0,
    "Model/T-junction1", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure differential" }, { "T_junction1.l_res_aa1.flow_rate", 0U, 0,
    "Model/T-junction1", 1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Flow rate" }, { "T_junction1.l_res_aa1.pressure_drop",
    0U, 0, "Model/T-junction1", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure differential" }, {
    "T_junction1.l_res_ab.flow_rate", 0U, 0, "Model/T-junction1",
    1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Flow rate" }, { "T_junction1.l_res_ab.pressure_drop", 0U, 0,
    "Model/T-junction1", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure differential" }, { "T_junction2.B.p", 0U, 1, "Model/T-junction2",
    100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Pressure" }, {
    "T_junction2.l_res_a1b.flow_rate", 0U, 0, "Model/T-junction2",
    1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Flow rate" }, { "T_junction2.l_res_a1b.pressure_drop", 0U, 0,
    "Model/T-junction2", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure differential" }, { "T_junction2.l_res_aa1.flow_rate", 0U, 0,
    "Model/T-junction2", 1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Flow rate" }, { "T_junction2.l_res_aa1.pressure_drop",
    0U, 0, "Model/T-junction2", 100000.0, "bar", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Pressure differential" }, {
    "T_junction2.l_res_ab.flow_rate", 0U, 0, "Model/T-junction2",
    1.0000000000000002e-6, "cm^3/s", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Flow rate" }, { "T_junction2.l_res_ab.pressure_drop", 0U, 0,
    "Model/T-junction2", 100000.0, "bar", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Pressure differential" } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[125] = { { "Elbow.A.p", "Model/Elbow",
    1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "Elbow.B.p",
    "Model/Elbow", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" },
  { "Elbow.l_res.A.p", "Model/Elbow", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE,
    FALSE, "Pressure" }, { "Elbow.l_res.B.p", "Model/Elbow", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "Elbow.l_res.flow_rate",
    "Model/Elbow", 1U, 1U, "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Flow rate" }, { "Elbow.l_res.pressure_drop", "Model/Elbow", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, { "Elbow1.A.p",
    "Model/Elbow1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" },
  { "Elbow1.B.p", "Model/Elbow1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "Elbow1.l_res.A.p", "Model/Elbow1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "Elbow1.l_res.B.p",
    "Model/Elbow1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" },
  { "Elbow1.l_res.flow_rate", "Model/Elbow1", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "Elbow1.l_res.pressure_drop", "Model/Elbow1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Cap.P.p", "Model/Hydraulic Cap", 1U, 1U, "bar", NE_INIT_MODE_NONE,
    FALSE, FALSE, "Pressure" }, { "Hydraulic_Cap.p", "Model/Hydraulic Cap", 1U,
    1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure (gauge)" }, {
    "Hydraulic_Cap1.P.p", "Model/Hydraulic Cap1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "Hydraulic_Cap1.p",
    "Model/Hydraulic Cap1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure (gauge)" }, { "Hydraulic_Constant_Flow_Rate_Source.P.p",
    "Model/Hydraulic Constant Flow Rate Source", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Constant_Flow_Rate_Source.T.p",
    "Model/Hydraulic Constant Flow Rate Source", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Constant_Flow_Rate_Source.flow_rate",
    "Model/Hydraulic Constant Flow Rate Source", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "Hydraulic_Constant_Flow_Rate_Source.power",
    "Model/Hydraulic Constant Flow Rate Source", 1U, 1U, "W", NE_INIT_MODE_NONE,
    FALSE, FALSE, "Power" }, { "Hydraulic_Constant_Flow_Rate_Source.pressure",
    "Model/Hydraulic Constant Flow Rate Source", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Fluid.G.p", "Model/Hydraulic Fluid", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "Hydraulic_Pipeline.A.p",
    "Model/Hydraulic Pipeline", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "Hydraulic_Pipeline.B.p", "Model/Hydraulic Pipeline", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline.ch_A.A.p", "Model/Hydraulic Pipeline", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline.ch_A.diameter_incr", "Model/Hydraulic Pipeline", 1U, 1U,
    "m", NE_INIT_MODE_NONE, FALSE, TRUE, "Diameter increase" }, {
    "Hydraulic_Pipeline.ch_A.flow_rate", "Model/Hydraulic Pipeline", 1U, 1U,
    "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate into chamber" }, {
    "Hydraulic_Pipeline.ch_A.pressure", "Model/Hydraulic Pipeline", 1U, 1U,
    "bar", NE_INIT_MODE_MANDATORY, FALSE, TRUE, "Pressure (gauge)" }, {
    "Hydraulic_Pipeline.tb_A.A.p", "Model/Hydraulic Pipeline", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline.tb_A.B.p", "Model/Hydraulic Pipeline", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "Hydraulic_Pipeline.tb_A.p",
    "Model/Hydraulic Pipeline", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure differential" }, { "Hydraulic_Pipeline.tb_A.q",
    "Model/Hydraulic Pipeline", 1U, 1U, "cm^3/s", NE_INIT_MODE_NONE, FALSE,
    FALSE, "Flow rate" }, { "Hydraulic_Pipeline.tb_B.A.p",
    "Model/Hydraulic Pipeline", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "Hydraulic_Pipeline.tb_B.B.p", "Model/Hydraulic Pipeline",
    1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline.tb_B.p", "Model/Hydraulic Pipeline", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pipeline.tb_B.q", "Model/Hydraulic Pipeline", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, { "Hydraulic_Pipeline1.A.p",
    "Model/Hydraulic Pipeline1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "Hydraulic_Pipeline1.B.p", "Model/Hydraulic Pipeline1", 1U,
    1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline1.ch_A.A.p", "Model/Hydraulic Pipeline1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline1.ch_A.diameter_incr", "Model/Hydraulic Pipeline1", 1U,
    1U, "m", NE_INIT_MODE_NONE, FALSE, TRUE, "Diameter increase" }, {
    "Hydraulic_Pipeline1.ch_A.flow_rate", "Model/Hydraulic Pipeline1", 1U, 1U,
    "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate into chamber" }, {
    "Hydraulic_Pipeline1.ch_A.pressure", "Model/Hydraulic Pipeline1", 1U, 1U,
    "bar", NE_INIT_MODE_MANDATORY, FALSE, TRUE, "Pressure (gauge)" }, {
    "Hydraulic_Pipeline1.tb_A.A.p", "Model/Hydraulic Pipeline1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline1.tb_A.B.p", "Model/Hydraulic Pipeline1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline1.tb_A.p", "Model/Hydraulic Pipeline1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pipeline1.tb_A.q", "Model/Hydraulic Pipeline1", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "Hydraulic_Pipeline1.tb_B.A.p", "Model/Hydraulic Pipeline1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline1.tb_B.B.p", "Model/Hydraulic Pipeline1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline1.tb_B.p", "Model/Hydraulic Pipeline1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pipeline1.tb_B.q", "Model/Hydraulic Pipeline1", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, { "Hydraulic_Pipeline2.A.p",
    "Model/Hydraulic Pipeline2", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "Hydraulic_Pipeline2.B.p", "Model/Hydraulic Pipeline2", 1U,
    1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline2.ch_A.A.p", "Model/Hydraulic Pipeline2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline2.ch_A.diameter_incr", "Model/Hydraulic Pipeline2", 1U,
    1U, "m", NE_INIT_MODE_NONE, FALSE, TRUE, "Diameter increase" }, {
    "Hydraulic_Pipeline2.ch_A.flow_rate", "Model/Hydraulic Pipeline2", 1U, 1U,
    "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate into chamber" }, {
    "Hydraulic_Pipeline2.ch_A.pressure", "Model/Hydraulic Pipeline2", 1U, 1U,
    "bar", NE_INIT_MODE_MANDATORY, FALSE, TRUE, "Pressure (gauge)" }, {
    "Hydraulic_Pipeline2.tb_A.A.p", "Model/Hydraulic Pipeline2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline2.tb_A.B.p", "Model/Hydraulic Pipeline2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline2.tb_A.p", "Model/Hydraulic Pipeline2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pipeline2.tb_A.q", "Model/Hydraulic Pipeline2", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "Hydraulic_Pipeline2.tb_B.A.p", "Model/Hydraulic Pipeline2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline2.tb_B.B.p", "Model/Hydraulic Pipeline2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline2.tb_B.p", "Model/Hydraulic Pipeline2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pipeline2.tb_B.q", "Model/Hydraulic Pipeline2", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, { "Hydraulic_Pipeline3.A.p",
    "Model/Hydraulic Pipeline3", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "Hydraulic_Pipeline3.B.p", "Model/Hydraulic Pipeline3", 1U,
    1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline3.ch_A.A.p", "Model/Hydraulic Pipeline3", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline3.ch_A.diameter_incr", "Model/Hydraulic Pipeline3", 1U,
    1U, "m", NE_INIT_MODE_NONE, FALSE, TRUE, "Diameter increase" }, {
    "Hydraulic_Pipeline3.ch_A.flow_rate", "Model/Hydraulic Pipeline3", 1U, 1U,
    "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate into chamber" }, {
    "Hydraulic_Pipeline3.ch_A.pressure", "Model/Hydraulic Pipeline3", 1U, 1U,
    "bar", NE_INIT_MODE_MANDATORY, FALSE, TRUE, "Pressure (gauge)" }, {
    "Hydraulic_Pipeline3.tb_A.A.p", "Model/Hydraulic Pipeline3", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline3.tb_A.B.p", "Model/Hydraulic Pipeline3", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline3.tb_A.p", "Model/Hydraulic Pipeline3", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pipeline3.tb_A.q", "Model/Hydraulic Pipeline3", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "Hydraulic_Pipeline3.tb_B.A.p", "Model/Hydraulic Pipeline3", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline3.tb_B.B.p", "Model/Hydraulic Pipeline3", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pipeline3.tb_B.p", "Model/Hydraulic Pipeline3", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pipeline3.tb_B.q", "Model/Hydraulic Pipeline3", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "Hydraulic_Pressure_Sensor.A.p", "Model/Hydraulic Pressure Sensor", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pressure_Sensor.B.p", "Model/Hydraulic Pressure Sensor", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pressure_Sensor.P", "Model/Hydraulic Pressure Sensor", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "P" }, {
    "Hydraulic_Pressure_Sensor.p", "Model/Hydraulic Pressure Sensor", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pressure_Sensor.q", "Model/Hydraulic Pressure Sensor", 1U, 1U,
    "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "Hydraulic_Pressure_Sensor1.A.p", "Model/Hydraulic Pressure Sensor1", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pressure_Sensor1.B.p", "Model/Hydraulic Pressure Sensor1", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "Hydraulic_Pressure_Sensor1.P", "Model/Hydraulic Pressure Sensor1", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "P" }, {
    "Hydraulic_Pressure_Sensor1.p", "Model/Hydraulic Pressure Sensor1", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "Hydraulic_Pressure_Sensor1.q", "Model/Hydraulic Pressure Sensor1", 1U, 1U,
    "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, { "Reservoir.P.p",
    "Model/Reservoir", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "Reservoir.R.p", "Model/Reservoir", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "Reservoir.V",
    "Model/Reservoir", 1U, 1U, "m^3", NE_INIT_MODE_NONE, FALSE, FALSE, "V" }, {
    "Reservoir.flow_rate_P", "Model/Reservoir", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Reservoir net flow rate" }, {
    "Reservoir.flow_rate_ret", "Model/Reservoir", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate through return line" }, {
    "Reservoir.pressure_diff_ret", "Model/Reservoir", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure loss in return line" }, {
    "Reservoir.volume", "Model/Reservoir", 1U, 1U, "m^3", NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, "Fluid volume in the tank" }, { "T_junction1.A.p",
    "Model/T-junction1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "T_junction1.A1.p", "Model/T-junction1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "T_junction1.B.p",
    "Model/T-junction1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "T_junction1.l_res_a1b.A.p", "Model/T-junction1", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "T_junction1.l_res_a1b.B.p", "Model/T-junction1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "T_junction1.l_res_a1b.flow_rate", "Model/T-junction1", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "T_junction1.l_res_a1b.pressure_drop", "Model/T-junction1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "T_junction1.l_res_aa1.A.p", "Model/T-junction1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "T_junction1.l_res_aa1.B.p",
    "Model/T-junction1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "T_junction1.l_res_aa1.flow_rate", "Model/T-junction1", 1U,
    1U, "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "T_junction1.l_res_aa1.pressure_drop", "Model/T-junction1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "T_junction1.l_res_ab.A.p", "Model/T-junction1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "T_junction1.l_res_ab.B.p",
    "Model/T-junction1", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "T_junction1.l_res_ab.flow_rate", "Model/T-junction1", 1U,
    1U, "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "T_junction1.l_res_ab.pressure_drop", "Model/T-junction1", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "T_junction2.A.p", "Model/T-junction2", 1U, 1U, "bar", NE_INIT_MODE_NONE,
    FALSE, FALSE, "Pressure" }, { "T_junction2.A1.p", "Model/T-junction2", 1U,
    1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "T_junction2.B.p", "Model/T-junction2", 1U, 1U, "bar", NE_INIT_MODE_NONE,
    FALSE, FALSE, "Pressure" }, { "T_junction2.l_res_a1b.A.p",
    "Model/T-junction2", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "T_junction2.l_res_a1b.B.p", "Model/T-junction2", 1U, 1U,
    "bar", NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, {
    "T_junction2.l_res_a1b.flow_rate", "Model/T-junction2", 1U, 1U, "cm^3/s",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "T_junction2.l_res_a1b.pressure_drop", "Model/T-junction2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "T_junction2.l_res_aa1.A.p", "Model/T-junction2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "T_junction2.l_res_aa1.B.p",
    "Model/T-junction2", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "T_junction2.l_res_aa1.flow_rate", "Model/T-junction2", 1U,
    1U, "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "T_junction2.l_res_aa1.pressure_drop", "Model/T-junction2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" }, {
    "T_junction2.l_res_ab.A.p", "Model/T-junction2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure" }, { "T_junction2.l_res_ab.B.p",
    "Model/T-junction2", 1U, 1U, "bar", NE_INIT_MODE_NONE, FALSE, FALSE,
    "Pressure" }, { "T_junction2.l_res_ab.flow_rate", "Model/T-junction2", 1U,
    1U, "cm^3/s", NE_INIT_MODE_NONE, FALSE, FALSE, "Flow rate" }, {
    "T_junction2.l_res_ab.pressure_drop", "Model/T-junction2", 1U, 1U, "bar",
    NE_INIT_MODE_NONE, FALSE, FALSE, "Pressure differential" } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[108] = { { "Model/Elbow", 1U, 0U, "Elbow.l_res",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow", 1U, 1U,
    "Elbow.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow", 1U,
    2U, "Elbow.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow",
    1U, 3U, "Elbow.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/Elbow", 1U, 4U, "Elbow.l_res", "Local Resistance", NE_ZC_TYPE_EITHER
  }, { "Model/Elbow", 1U, 5U, "Elbow.l_res", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/Elbow", 1U, 6U, "Elbow.l_res",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow", 1U, 7U,
    "Elbow.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow", 1U,
    8U, "Elbow.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow",
    1U, 9U, "Elbow.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/Elbow", 1U, 10U, "Elbow.l_res", "Local Resistance", NE_ZC_TYPE_EITHER
  }, { "Model/Elbow", 1U, 11U, "Elbow.l_res", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/Elbow1", 1U, 12U, "Elbow1.l_res",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow1", 1U, 13U,
    "Elbow1.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow1",
    1U, 14U, "Elbow1.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/Elbow1", 1U, 15U, "Elbow1.l_res", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/Elbow1", 1U, 16U, "Elbow1.l_res",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow1", 1U, 17U,
    "Elbow1.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow1",
    1U, 18U, "Elbow1.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/Elbow1", 1U, 19U, "Elbow1.l_res", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/Elbow1", 1U, 20U, "Elbow1.l_res",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow1", 1U, 21U,
    "Elbow1.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/Elbow1",
    1U, 22U, "Elbow1.l_res", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/Elbow1", 1U, 23U, "Elbow1.l_res", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 24U, "T_junction1.l_res_ab",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 25U,
    "T_junction1.l_res_ab", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 26U, "T_junction1.l_res_ab", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 27U, "T_junction1.l_res_ab",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 28U,
    "T_junction1.l_res_ab", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 29U, "T_junction1.l_res_ab", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 30U, "T_junction1.l_res_ab",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 31U,
    "T_junction1.l_res_ab", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 32U, "T_junction1.l_res_ab", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 33U, "T_junction1.l_res_ab",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 34U,
    "T_junction1.l_res_ab", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 35U, "T_junction1.l_res_ab", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 36U, "T_junction1.l_res_aa1",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 37U,
    "T_junction1.l_res_aa1", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 38U, "T_junction1.l_res_aa1", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 39U, "T_junction1.l_res_aa1",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 40U,
    "T_junction1.l_res_aa1", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 41U, "T_junction1.l_res_aa1", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 42U, "T_junction1.l_res_aa1",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 43U,
    "T_junction1.l_res_aa1", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 44U, "T_junction1.l_res_aa1", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 45U, "T_junction1.l_res_aa1",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 46U,
    "T_junction1.l_res_aa1", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 47U, "T_junction1.l_res_aa1", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 48U, "T_junction1.l_res_a1b",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 49U,
    "T_junction1.l_res_a1b", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 50U, "T_junction1.l_res_a1b", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 51U, "T_junction1.l_res_a1b",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 52U,
    "T_junction1.l_res_a1b", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 53U, "T_junction1.l_res_a1b", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 54U, "T_junction1.l_res_a1b",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 55U,
    "T_junction1.l_res_a1b", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 56U, "T_junction1.l_res_a1b", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 57U, "T_junction1.l_res_a1b",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction1", 1U, 58U,
    "T_junction1.l_res_a1b", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction1", 1U, 59U, "T_junction1.l_res_a1b", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 60U, "T_junction2.l_res_ab",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 61U,
    "T_junction2.l_res_ab", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 62U, "T_junction2.l_res_ab", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 63U, "T_junction2.l_res_ab",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 64U,
    "T_junction2.l_res_ab", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 65U, "T_junction2.l_res_ab", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 66U, "T_junction2.l_res_ab",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 67U,
    "T_junction2.l_res_ab", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 68U, "T_junction2.l_res_ab", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 69U, "T_junction2.l_res_ab",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 70U,
    "T_junction2.l_res_ab", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 71U, "T_junction2.l_res_ab", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 72U, "T_junction2.l_res_aa1",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 73U,
    "T_junction2.l_res_aa1", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 74U, "T_junction2.l_res_aa1", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 75U, "T_junction2.l_res_aa1",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 76U,
    "T_junction2.l_res_aa1", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 77U, "T_junction2.l_res_aa1", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 78U, "T_junction2.l_res_aa1",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 79U,
    "T_junction2.l_res_aa1", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 80U, "T_junction2.l_res_aa1", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 81U, "T_junction2.l_res_aa1",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 82U,
    "T_junction2.l_res_aa1", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 83U, "T_junction2.l_res_aa1", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 84U, "T_junction2.l_res_a1b",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 85U,
    "T_junction2.l_res_a1b", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 86U, "T_junction2.l_res_a1b", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 87U, "T_junction2.l_res_a1b",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 88U,
    "T_junction2.l_res_a1b", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 89U, "T_junction2.l_res_a1b", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 90U, "T_junction2.l_res_a1b",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 91U,
    "T_junction2.l_res_a1b", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 92U, "T_junction2.l_res_a1b", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 93U, "T_junction2.l_res_a1b",
    "Local Resistance", NE_ZC_TYPE_EITHER }, { "Model/T-junction2", 1U, 94U,
    "T_junction2.l_res_a1b", "Local Resistance", NE_ZC_TYPE_EITHER }, {
    "Model/T-junction2", 1U, 95U, "T_junction2.l_res_a1b", "Local Resistance",
    NE_ZC_TYPE_EITHER }, { "Model/Hydraulic Pipeline", 1U, 96U,
    "Hydraulic_Pipeline.tb_A", "Hydraulic Resistive Tube", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline", 1U, 97U, "Hydraulic_Pipeline.ch_A",
    "Constant Volume Hydraulic Chamber", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline", 1U, 98U, "Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline1", 1U, 99U, "Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline1", 1U, 100U, "Hydraulic_Pipeline1.ch_A",
    "Constant Volume Hydraulic Chamber", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline1", 1U, 101U, "Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline2", 1U, 102U, "Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline2", 1U, 103U, "Hydraulic_Pipeline2.ch_A",
    "Constant Volume Hydraulic Chamber", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline2", 1U, 104U, "Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline3", 1U, 105U, "Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline3", 1U, 106U, "Hydraulic_Pipeline3.ch_A",
    "Constant Volume Hydraulic Chamber", NE_ZC_TYPE_FALSE }, {
    "Model/Hydraulic Pipeline3", 1U, 107U, "Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", NE_ZC_TYPE_FALSE } };

static NeRange s_range[108] = { {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    91U, 36U, 91U, 50U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    91U, 36U, 91U, 50U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    91U, 36U, 91U, 50U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    91U, 36U, 91U, 50U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL } };

static NeAssertData s_assert_data[197] = { { "Model/Elbow", 1U, 0U,
    "Model.Elbow.l_res", "Local Resistance", FALSE, "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/Elbow", 1U,
    1U, "Model.Elbow.l_res", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/Elbow", 1U,
    2U, "Model.Elbow.l_res", "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/Elbow", 1U, 3U,
    "Model.Elbow.l_res", "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/Elbow", 1U, 4U,
    "Model.Elbow.l_res", "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/Elbow", 1U, 5U,
    "Model.Elbow.l_res", "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/Elbow", 1U, 6U,
    "Model.Elbow.l_res", "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/Elbow", 1U, 7U,
    "Model.Elbow.l_res", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/Elbow", 1U, 8U,
    "Model.Elbow.l_res", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/Elbow1", 1U,
    9U, "Model.Elbow1.l_res", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/Elbow1", 1U,
    10U, "Model.Elbow1.l_res", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/Elbow1", 1U,
    11U, "Model.Elbow1.l_res", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Elbow1", 1U, 12U, "Model.Elbow1.l_res", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Elbow1", 1U, 13U, "Model.Elbow1.l_res", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Elbow1", 1U, 14U, "Model.Elbow1.l_res", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Elbow1", 1U, 15U, "Model.Elbow1.l_res", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Elbow1", 1U, 16U, "Model.Elbow1.l_res", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/Elbow1", 1U,
    17U, "Model.Elbow1.l_res", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction1",
    1U, 18U, "Model.T_junction1.l_res_ab", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction1",
    1U, 19U, "Model.T_junction1.l_res_ab", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction1",
    1U, 20U, "Model.T_junction1.l_res_ab", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 21U, "Model.T_junction1.l_res_ab",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction1", 1U,
    22U, "Model.T_junction1.l_res_ab", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 23U, "Model.T_junction1.l_res_ab",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction1", 1U,
    24U, "Model.T_junction1.l_res_ab", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 25U, "Model.T_junction1.l_res_ab",
    "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction1",
    1U, 26U, "Model.T_junction1.l_res_ab", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction1",
    1U, 27U, "Model.T_junction1.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction1",
    1U, 28U, "Model.T_junction1.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction1",
    1U, 29U, "Model.T_junction1.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 30U, "Model.T_junction1.l_res_aa1",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction1", 1U,
    31U, "Model.T_junction1.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 32U, "Model.T_junction1.l_res_aa1",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction1", 1U,
    33U, "Model.T_junction1.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 34U, "Model.T_junction1.l_res_aa1",
    "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction1",
    1U, 35U, "Model.T_junction1.l_res_aa1", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction1",
    1U, 36U, "Model.T_junction1.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction1",
    1U, 37U, "Model.T_junction1.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction1",
    1U, 38U, "Model.T_junction1.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 39U, "Model.T_junction1.l_res_a1b",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction1", 1U,
    40U, "Model.T_junction1.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 41U, "Model.T_junction1.l_res_a1b",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction1", 1U,
    42U, "Model.T_junction1.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction1", 1U, 43U, "Model.T_junction1.l_res_a1b",
    "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction1",
    1U, 44U, "Model.T_junction1.l_res_a1b", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction2",
    1U, 45U, "Model.T_junction2.l_res_ab", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction2",
    1U, 46U, "Model.T_junction2.l_res_ab", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction2",
    1U, 47U, "Model.T_junction2.l_res_ab", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 48U, "Model.T_junction2.l_res_ab",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction2", 1U,
    49U, "Model.T_junction2.l_res_ab", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 50U, "Model.T_junction2.l_res_ab",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction2", 1U,
    51U, "Model.T_junction2.l_res_ab", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 52U, "Model.T_junction2.l_res_ab",
    "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction2",
    1U, 53U, "Model.T_junction2.l_res_ab", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction2",
    1U, 54U, "Model.T_junction2.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction2",
    1U, 55U, "Model.T_junction2.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction2",
    1U, 56U, "Model.T_junction2.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 57U, "Model.T_junction2.l_res_aa1",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction2", 1U,
    58U, "Model.T_junction2.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 59U, "Model.T_junction2.l_res_aa1",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction2", 1U,
    60U, "Model.T_junction2.l_res_aa1", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 61U, "Model.T_junction2.l_res_aa1",
    "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction2",
    1U, 62U, "Model.T_junction2.l_res_aa1", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction2",
    1U, 63U, "Model.T_junction2.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction2",
    1U, 64U, "Model.T_junction2.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/T-junction2",
    1U, 65U, "Model.T_junction2.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 66U, "Model.T_junction2.l_res_a1b",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction2", 1U,
    67U, "Model.T_junction2.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 68U, "Model.T_junction2.l_res_a1b",
    "Local Resistance", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/T-junction2", 1U,
    69U, "Model.T_junction2.l_res_a1b", "Local Resistance", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/T-junction2", 1U, 70U, "Model.T_junction2.l_res_a1b",
    "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, { "Model/T-junction2",
    1U, 71U, "Model.T_junction2.l_res_a1b", "Local Resistance", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" }, {
    "Model/Hydraulic Pipeline", 1U, 72U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 73U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 74U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 75U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 76U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 77U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 78U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 79U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 80U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 81U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 82U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be positive",
    "equation_language:matrix:PositiveInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 83U, "Model.Hydraulic_Pipeline.tb_A",
    "Hydraulic Resistive Tube", TRUE,
    "Zero or a small negative input is detected, while positive value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNonPositiveInputWarn" }, {
    "Model/Hydraulic Pipeline", 1U, 84U, "Model.Hydraulic_Pipeline.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE,
    "Pressure fell below absolute zero", "" }, { "Model/Hydraulic Pipeline", 1U,
    85U, "Model.Hydraulic_Pipeline.ch_A", "Constant Volume Hydraulic Chamber",
    FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 86U, "Model.Hydraulic_Pipeline.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 87U, "Model.Hydraulic_Pipeline.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 88U, "Model.Hydraulic_Pipeline.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 89U, "Model.Hydraulic_Pipeline.ch_A",
    "Constant Volume Hydraulic Chamber", TRUE,
    "Pressure fell below absolute zero", "" }, { "Model/Hydraulic Pipeline", 1U,
    90U, "Model.Hydraulic_Pipeline.tb_B", "Hydraulic Resistive Tube", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Hydraulic Pipeline", 1U, 91U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 92U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 93U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 94U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 95U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 96U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 97U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 98U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 99U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 100U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be positive",
    "equation_language:matrix:PositiveInputRequired" }, {
    "Model/Hydraulic Pipeline", 1U, 101U, "Model.Hydraulic_Pipeline.tb_B",
    "Hydraulic Resistive Tube", TRUE,
    "Zero or a small negative input is detected, while positive value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNonPositiveInputWarn" }, {
    "Model/Hydraulic Pipeline1", 1U, 102U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 103U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 104U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 105U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 106U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 107U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 108U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 109U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 110U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 111U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 112U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be positive",
    "equation_language:matrix:PositiveInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 113U, "Model.Hydraulic_Pipeline1.tb_A",
    "Hydraulic Resistive Tube", TRUE,
    "Zero or a small negative input is detected, while positive value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNonPositiveInputWarn" }, {
    "Model/Hydraulic Pipeline1", 1U, 114U, "Model.Hydraulic_Pipeline1.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE,
    "Pressure fell below absolute zero", "" }, { "Model/Hydraulic Pipeline1", 1U,
    115U, "Model.Hydraulic_Pipeline1.ch_A", "Constant Volume Hydraulic Chamber",
    FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 116U, "Model.Hydraulic_Pipeline1.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 117U, "Model.Hydraulic_Pipeline1.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 118U, "Model.Hydraulic_Pipeline1.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 119U, "Model.Hydraulic_Pipeline1.ch_A",
    "Constant Volume Hydraulic Chamber", TRUE,
    "Pressure fell below absolute zero", "" }, { "Model/Hydraulic Pipeline1", 1U,
    120U, "Model.Hydraulic_Pipeline1.tb_B", "Hydraulic Resistive Tube", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Hydraulic Pipeline1", 1U, 121U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 122U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 123U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 124U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 125U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 126U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 127U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 128U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 129U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 130U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be positive",
    "equation_language:matrix:PositiveInputRequired" }, {
    "Model/Hydraulic Pipeline1", 1U, 131U, "Model.Hydraulic_Pipeline1.tb_B",
    "Hydraulic Resistive Tube", TRUE,
    "Zero or a small negative input is detected, while positive value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNonPositiveInputWarn" }, {
    "Model/Hydraulic Pipeline2", 1U, 132U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 133U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 134U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 135U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 136U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 137U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 138U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 139U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 140U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 141U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 142U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be positive",
    "equation_language:matrix:PositiveInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 143U, "Model.Hydraulic_Pipeline2.tb_A",
    "Hydraulic Resistive Tube", TRUE,
    "Zero or a small negative input is detected, while positive value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNonPositiveInputWarn" }, {
    "Model/Hydraulic Pipeline2", 1U, 144U, "Model.Hydraulic_Pipeline2.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE,
    "Pressure fell below absolute zero", "" }, { "Model/Hydraulic Pipeline2", 1U,
    145U, "Model.Hydraulic_Pipeline2.ch_A", "Constant Volume Hydraulic Chamber",
    FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 146U, "Model.Hydraulic_Pipeline2.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 147U, "Model.Hydraulic_Pipeline2.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 148U, "Model.Hydraulic_Pipeline2.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 149U, "Model.Hydraulic_Pipeline2.ch_A",
    "Constant Volume Hydraulic Chamber", TRUE,
    "Pressure fell below absolute zero", "" }, { "Model/Hydraulic Pipeline2", 1U,
    150U, "Model.Hydraulic_Pipeline2.tb_B", "Hydraulic Resistive Tube", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Hydraulic Pipeline2", 1U, 151U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 152U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 153U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 154U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 155U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 156U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 157U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 158U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 159U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 160U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be positive",
    "equation_language:matrix:PositiveInputRequired" }, {
    "Model/Hydraulic Pipeline2", 1U, 161U, "Model.Hydraulic_Pipeline2.tb_B",
    "Hydraulic Resistive Tube", TRUE,
    "Zero or a small negative input is detected, while positive value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNonPositiveInputWarn" }, {
    "Model/Hydraulic Pipeline3", 1U, 162U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 163U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 164U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 165U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 166U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 167U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 168U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 169U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 170U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 171U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 172U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", FALSE, "Input must be positive",
    "equation_language:matrix:PositiveInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 173U, "Model.Hydraulic_Pipeline3.tb_A",
    "Hydraulic Resistive Tube", TRUE,
    "Zero or a small negative input is detected, while positive value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNonPositiveInputWarn" }, {
    "Model/Hydraulic Pipeline3", 1U, 174U, "Model.Hydraulic_Pipeline3.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE,
    "Pressure fell below absolute zero", "" }, { "Model/Hydraulic Pipeline3", 1U,
    175U, "Model.Hydraulic_Pipeline3.ch_A", "Constant Volume Hydraulic Chamber",
    FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 176U, "Model.Hydraulic_Pipeline3.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 177U, "Model.Hydraulic_Pipeline3.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 178U, "Model.Hydraulic_Pipeline3.ch_A",
    "Constant Volume Hydraulic Chamber", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 179U, "Model.Hydraulic_Pipeline3.ch_A",
    "Constant Volume Hydraulic Chamber", TRUE,
    "Pressure fell below absolute zero", "" }, { "Model/Hydraulic Pipeline3", 1U,
    180U, "Model.Hydraulic_Pipeline3.tb_B", "Hydraulic Resistive Tube", FALSE,
    "Input must be non zero", "equation_language:matrix:NonZeroInputRequired" },
  { "Model/Hydraulic Pipeline3", 1U, 181U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 182U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 183U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 184U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 185U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 186U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 187U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 188U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 189U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 190U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", FALSE, "Input must be positive",
    "equation_language:matrix:PositiveInputRequired" }, {
    "Model/Hydraulic Pipeline3", 1U, 191U, "Model.Hydraulic_Pipeline3.tb_B",
    "Hydraulic Resistive Tube", TRUE,
    "Zero or a small negative input is detected, while positive value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNonPositiveInputWarn" }, { "Model/Reservoir",
    1U, 192U, "Model.Reservoir", "Reservoir", FALSE,
    "Input must be non negative",
    "equation_language:matrix:NonNegativeInputRequired" }, { "Model/Reservoir",
    1U, 193U, "Model.Reservoir", "Reservoir", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/Reservoir", 1U,
    194U, "Model.Reservoir", "Reservoir", FALSE, "Input must be non zero",
    "equation_language:matrix:NonZeroInputRequired" }, { "Model/Reservoir", 1U,
    195U, "Model.Reservoir", "Reservoir", TRUE, "Reservoir is empty", "" }, {
    "Model/Reservoir", 1U, 196U, "Model.Reservoir", "Reservoir", TRUE,
    "A small negative input is detected, while nonnegative value is expected. Please tighten consistency tolerance and/or check for potential modeling errors.",
    "equation_language:matrix:SmallNegativeInputWarn" } };

static NeRange s_assert_range[197] = { {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 71U, 96U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 76U, 92U, 79U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    91U, 49U, 91U, 51U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 30U, 88U, 45U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 25U, 88U, 29U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 58U, 97U, 61U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    101U, 37U, 101U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 62U, 97U, 68U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    91U, 12U, 91U, 57U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    121U, 71U, 121U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    114U, 27U, 114U, 36U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    122U, 43U, 122U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    96U, 32U, 96U, 36U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    92U, 12U, 92U, 57U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 71U, 96U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 76U, 92U, 79U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    91U, 49U, 91U, 51U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 30U, 88U, 45U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 25U, 88U, 29U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 58U, 97U, 61U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    101U, 37U, 101U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 62U, 97U, 68U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 71U, 96U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 76U, 92U, 79U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    91U, 49U, 91U, 51U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 30U, 88U, 45U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 25U, 88U, 29U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 58U, 97U, 61U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    101U, 37U, 101U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 62U, 97U, 68U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    91U, 12U, 91U, 57U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    121U, 71U, 121U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    114U, 27U, 114U, 36U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    122U, 43U, 122U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    96U, 32U, 96U, 36U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    92U, 12U, 92U, 57U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 71U, 96U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 76U, 92U, 79U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    91U, 49U, 91U, 51U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 30U, 88U, 45U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 25U, 88U, 29U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 58U, 97U, 61U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    101U, 37U, 101U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 62U, 97U, 68U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 71U, 96U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 76U, 92U, 79U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    91U, 49U, 91U, 51U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 30U, 88U, 45U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 25U, 88U, 29U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 58U, 97U, 61U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    101U, 37U, 101U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 62U, 97U, 68U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    91U, 12U, 91U, 57U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    121U, 71U, 121U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    114U, 27U, 114U, 36U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    122U, 43U, 122U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    96U, 32U, 96U, 36U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    92U, 12U, 92U, 57U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 71U, 96U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 76U, 92U, 79U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    91U, 49U, 91U, 51U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 30U, 88U, 45U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 25U, 88U, 29U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 58U, 97U, 61U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    101U, 37U, 101U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 62U, 97U, 68U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 71U, 96U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 76U, 92U, 79U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    91U, 49U, 91U, 51U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 30U, 88U, 45U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 25U, 88U, 29U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 58U, 97U, 61U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    101U, 37U, 101U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 62U, 97U, 68U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    91U, 12U, 91U, 57U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    121U, 71U, 121U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    114U, 27U, 114U, 36U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    122U, 43U, 122U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    96U, 32U, 96U, 36U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    92U, 12U, 92U, 57U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 71U, 96U, 72U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 76U, 92U, 79U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    91U, 49U, 91U, 51U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 30U, 88U, 45U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    88U, 25U, 88U, 29U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 58U, 97U, 61U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    101U, 37U, 101U, 53U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    97U, 62U, 97U, 68U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    96U, 60U, 96U, 65U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    92U, 52U, 92U, 85U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED } };

static NeRange s_equation_range[60] = { {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    103U, 12U, 125U, 43U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    103U, 12U, 125U, 43U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    103U, 12U, 125U, 43U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    103U, 12U, 125U, 43U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    103U, 12U, 125U, 43U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    103U, 12U, 125U, 43U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    103U, 12U, 125U, 43U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    103U, 12U, 125U, 43U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/cap.ssc",
    18U, 5U, 18U, 13U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/cap.ssc",
    18U, 5U, 18U, 13U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sensors/pressure.ssc",
    31U, 5U, 31U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sensors/pressure.ssc",
    32U, 5U, 32U, 6U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sensors/pressure.ssc",
    33U, 5U, 33U, 11U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sensors/pressure.ssc",
    31U, 5U, 31U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sensors/pressure.ssc",
    32U, 5U, 32U, 6U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sensors/pressure.ssc",
    33U, 5U, 33U, 11U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sources/hydraulic_constant_flow_rate_source.ssc",
    33U, 5U, 33U, 26U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sources/hydraulic_constant_flow_rate_source.ssc",
    34U, 5U, 34U, 37U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+sources/hydraulic_constant_flow_rate_source.ssc",
    35U, 5U, 35U, 34U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+local_resistances/local_resistance.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    113U, 9U, 113U, 21U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    90U, 5U, 90U, 20U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    113U, 9U, 113U, 21U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    113U, 9U, 113U, 21U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    90U, 5U, 90U, 20U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    113U, 9U, 113U, 21U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    113U, 9U, 113U, 21U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    90U, 5U, 90U, 20U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    113U, 9U, 113U, 21U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    113U, 9U, 113U, 21U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/constant_chamber.ssc",
    90U, 5U, 90U, 20U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/simscape/library/m/+foundation/+hydraulic/+elements/resistive_tube.ssc",
    113U, 9U, 113U, 21U, NE_RANGE_TYPE_NORMAL }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED }, {
    "C:/Program Files/MATLAB/R2015b/toolbox/physmod/sh/sh/+sh/+utilities/reservoir.sscp",
    0U, 0U, 0U, 0U, NE_RANGE_TYPE_PROTECTED } };

static int32_T ds_m_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mM_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 1;
  out.mJc[2ULL] = 2;
  out.mJc[3ULL] = 3;
  out.mJc[4ULL] = 4;
  out.mJc[5ULL] = 5;
  out.mJc[6ULL] = 6;
  out.mJc[7ULL] = 7;
  out.mJc[8ULL] = 8;
  out.mJc[9ULL] = 9;
  out.mJc[10ULL] = 9;
  out.mJc[11ULL] = 9;
  out.mJc[12ULL] = 9;
  out.mJc[13ULL] = 9;
  out.mJc[14ULL] = 9;
  out.mJc[15ULL] = 9;
  out.mJc[16ULL] = 9;
  out.mJc[17ULL] = 9;
  out.mJc[18ULL] = 9;
  out.mJc[19ULL] = 9;
  out.mJc[20ULL] = 9;
  out.mJc[21ULL] = 9;
  out.mJc[22ULL] = 9;
  out.mJc[23ULL] = 9;
  out.mJc[24ULL] = 9;
  out.mJc[25ULL] = 9;
  out.mJc[26ULL] = 9;
  out.mJc[27ULL] = 9;
  out.mJc[28ULL] = 9;
  out.mJc[29ULL] = 9;
  out.mJc[30ULL] = 9;
  out.mJc[31ULL] = 9;
  out.mJc[32ULL] = 9;
  out.mJc[33ULL] = 9;
  out.mJc[34ULL] = 9;
  out.mJc[35ULL] = 9;
  out.mJc[36ULL] = 9;
  out.mJc[37ULL] = 9;
  out.mJc[38ULL] = 9;
  out.mJc[39ULL] = 9;
  out.mJc[40ULL] = 9;
  out.mJc[41ULL] = 9;
  out.mJc[42ULL] = 9;
  out.mJc[43ULL] = 9;
  out.mJc[44ULL] = 9;
  out.mJc[45ULL] = 9;
  out.mJc[46ULL] = 9;
  out.mJc[47ULL] = 9;
  out.mJc[48ULL] = 9;
  out.mJc[49ULL] = 9;
  out.mJc[50ULL] = 9;
  out.mJc[51ULL] = 9;
  out.mJc[52ULL] = 9;
  out.mJc[53ULL] = 9;
  out.mJc[54ULL] = 9;
  out.mJc[55ULL] = 9;
  out.mJc[56ULL] = 9;
  out.mJc[57ULL] = 9;
  out.mJc[58ULL] = 9;
  out.mJc[59ULL] = 9;
  out.mJc[60ULL] = 9;
  out.mJc[61ULL] = 9;
  out.mJc[62ULL] = 9;
  out.mJc[63ULL] = 9;
  out.mJc[64ULL] = 9;
  out.mJc[65ULL] = 9;
  out.mJc[66ULL] = 9;
  out.mJc[67ULL] = 9;
  out.mJc[68ULL] = 9;
  out.mJc[69ULL] = 9;
  out.mJc[70ULL] = 9;
  out.mJc[71ULL] = 9;
  out.mJc[72ULL] = 9;
  out.mIr[0ULL] = 0;
  out.mIr[1ULL] = 1;
  out.mIr[2ULL] = 2;
  out.mIr[3ULL] = 3;
  out.mIr[4ULL] = 4;
  out.mIr[5ULL] = 5;
  out.mIr[6ULL] = 6;
  out.mIr[7ULL] = 7;
  out.mIr[8ULL] = 8;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out1)
{
  PmRealVector out;
  real_T x[10];
  size_t idx;
  real_T x0[10];
  size_t lv_[9];
  size_t lv_0[9];
  real_T lv_1[9];
  real_T lv_2[72];
  real_T lv_3[72];
  size_t lv_4[73];
  size_t lv_5[10];
  size_t id2_;
  real_T t4;
  real_T t51;
  real_T X_idx_1;
  real_T X_idx_3;
  real_T X_idx_5;
  real_T X_idx_7;
  X_idx_1 = in->mX.mX[1];
  X_idx_3 = in->mX.mX[3];
  X_idx_5 = in->mX.mX[5];
  X_idx_7 = in->mX.mX[7];
  out = out1->mM;
  for (idx = 0ULL; idx < 10ULL; idx++) {
    x[idx] = 0.0;
  }

  x[0ULL] = -1.0;
  t4 = X_idx_1 * 100000.0;
  X_idx_1 = 101325.0 / (t4 + 101325.0 == 0.0 ? 1.0E-16 : t4 + 101325.0);
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    X_idx_1 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    X_idx_1 = pow(X_idx_1, 0.7142857142857143);
  }

  if (X_idx_1 >= 1.7E+308) {
    X_idx_1 = 1.7E+308;
  } else {
    if (X_idx_1 <= -1.7E+308) {
      X_idx_1 = -1.7E+308;
    }
  }

  t51 = (t4 + 101325.0) * 1.4;
  t51 = X_idx_1 * 1.8735432950107121E+9 / (t51 == 0.0 ? 1.0E-16 : t51) * 0.005 +
    1.0;
  X_idx_1 = 101325.0 / (t4 + 101325.0 == 0.0 ? 1.0E-16 : t4 + 101325.0);
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    X_idx_1 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    X_idx_1 = pow(X_idx_1, 0.7142857142857143);
  }

  if (X_idx_1 >= 1.7E+308) {
    X_idx_1 = 1.7E+308;
  } else {
    if (X_idx_1 <= -1.7E+308) {
      X_idx_1 = -1.7E+308;
    }
  }

  t51 = (X_idx_1 * 0.005 + 1.0) * 1.8735432950107121E+9 / (t51 == 0.0 ? 1.0E-16 :
    t51);
  x[1ULL] = -(-(0.0034749998916506382 / (t51 == 0.0 ? 1.0E-16 : t51)));
  x[2ULL] = -1.0;
  X_idx_3 *= 100000.0;
  X_idx_1 = 101325.0 / (X_idx_3 + 101325.0 == 0.0 ? 1.0E-16 : X_idx_3 + 101325.0);
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    X_idx_1 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    X_idx_1 = pow(X_idx_1, 0.7142857142857143);
  }

  if (X_idx_1 >= 1.7E+308) {
    X_idx_1 = 1.7E+308;
  } else {
    if (X_idx_1 <= -1.7E+308) {
      X_idx_1 = -1.7E+308;
    }
  }

  t51 = (X_idx_3 + 101325.0) * 1.4;
  t4 = X_idx_1 * 1.8735432950107121E+9 / (t51 == 0.0 ? 1.0E-16 : t51) * 0.005 +
    1.0;
  X_idx_1 = 101325.0 / (X_idx_3 + 101325.0 == 0.0 ? 1.0E-16 : X_idx_3 + 101325.0);
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    X_idx_1 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    X_idx_1 = pow(X_idx_1, 0.7142857142857143);
  }

  if (X_idx_1 >= 1.7E+308) {
    X_idx_1 = 1.7E+308;
  } else {
    if (X_idx_1 <= -1.7E+308) {
      X_idx_1 = -1.7E+308;
    }
  }

  X_idx_1 = (X_idx_1 * 0.005 + 1.0) * 1.8735432950107121E+9 / (t4 == 0.0 ?
    1.0E-16 : t4);
  x[3ULL] = -(-(0.0017374999458253191 / (X_idx_1 == 0.0 ? 1.0E-16 : X_idx_1)));
  x[4ULL] = -1.0;
  t4 = X_idx_5 * 100000.0;
  X_idx_1 = 101325.0 / (t4 + 101325.0 == 0.0 ? 1.0E-16 : t4 + 101325.0);
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    X_idx_1 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    X_idx_1 = pow(X_idx_1, 0.7142857142857143);
  }

  if (X_idx_1 >= 1.7E+308) {
    X_idx_1 = 1.7E+308;
  } else {
    if (X_idx_1 <= -1.7E+308) {
      X_idx_1 = -1.7E+308;
    }
  }

  t51 = (t4 + 101325.0) * 1.4;
  t51 = X_idx_1 * 1.8735432950107121E+9 / (t51 == 0.0 ? 1.0E-16 : t51) * 0.005 +
    1.0;
  X_idx_1 = 101325.0 / (t4 + 101325.0 == 0.0 ? 1.0E-16 : t4 + 101325.0);
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    X_idx_1 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    X_idx_1 = pow(X_idx_1, 0.7142857142857143);
  }

  if (X_idx_1 >= 1.7E+308) {
    X_idx_1 = 1.7E+308;
  } else {
    if (X_idx_1 <= -1.7E+308) {
      X_idx_1 = -1.7E+308;
    }
  }

  X_idx_1 = (X_idx_1 * 0.005 + 1.0) * 1.8735432950107121E+9 / (t51 == 0.0 ?
    1.0E-16 : t51);
  x[5ULL] = -(-(0.0034749998916506382 / (X_idx_1 == 0.0 ? 1.0E-16 : X_idx_1)));
  x[6ULL] = -1.0;
  t4 = X_idx_7 * 100000.0;
  X_idx_1 = 101325.0 / (t4 + 101325.0 == 0.0 ? 1.0E-16 : t4 + 101325.0);
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    X_idx_1 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    X_idx_1 = pow(X_idx_1, 0.7142857142857143);
  }

  if (X_idx_1 >= 1.7E+308) {
    X_idx_1 = 1.7E+308;
  } else {
    if (X_idx_1 <= -1.7E+308) {
      X_idx_1 = -1.7E+308;
    }
  }

  t51 = (t4 + 101325.0) * 1.4;
  t51 = X_idx_1 * 1.8735432950107121E+9 / (t51 == 0.0 ? 1.0E-16 : t51) * 0.005 +
    1.0;
  X_idx_1 = 101325.0 / (t4 + 101325.0 == 0.0 ? 1.0E-16 : t4 + 101325.0);
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    X_idx_1 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    X_idx_1 = pow(X_idx_1, 0.7142857142857143);
  }

  if (X_idx_1 >= 1.7E+308) {
    X_idx_1 = 1.7E+308;
  } else {
    if (X_idx_1 <= -1.7E+308) {
      X_idx_1 = -1.7E+308;
    }
  }

  X_idx_1 = (X_idx_1 * 0.005 + 1.0) * 1.8735432950107121E+9 / (t51 == 0.0 ?
    1.0E-16 : t51);
  x[7ULL] = -(-(0.0034749998916506382 / (X_idx_1 == 0.0 ? 1.0E-16 : X_idx_1)));
  x[8ULL] = -1.0;
  for (idx = 0ULL; idx < 10ULL; idx++) {
    x0[idx] = 0.0;
  }

  lv_[0] = 0ULL;
  lv_[1] = 1ULL;
  lv_[2] = 2ULL;
  lv_[3] = 3ULL;
  lv_[4] = 4ULL;
  lv_[5] = 5ULL;
  lv_[6] = 6ULL;
  lv_[7] = 7ULL;
  lv_[8] = 8ULL;
  lv_0[0] = 0ULL;
  lv_0[1] = 1ULL;
  lv_0[2] = 2ULL;
  lv_0[3] = 3ULL;
  lv_0[4] = 4ULL;
  lv_0[5] = 5ULL;
  lv_0[6] = 6ULL;
  lv_0[7] = 7ULL;
  lv_0[8] = 8ULL;
  lv_1[0] = 1.0;
  lv_1[1] = 1.0;
  lv_1[2] = 1.0;
  lv_1[3] = 1.0;
  lv_1[4] = 1.0;
  lv_1[5] = 1.0;
  lv_1[6] = 1.0;
  lv_1[7] = 1.0;
  lv_1[8] = 1.0;
  for (idx = 0ULL; idx < 9ULL; idx++) {
    x0[lv_[idx]] += x[lv_0[idx]] * lv_1[idx];
  }

  lv_2[0] = 1.0;
  lv_2[1] = 999999.99999999988;
  lv_2[2] = 1.0;
  lv_2[3] = 999999.99999999988;
  lv_2[4] = 1.0;
  lv_2[5] = 999999.99999999988;
  lv_2[6] = 1.0;
  lv_2[7] = 999999.99999999988;
  lv_2[8] = 999999.99999999988;
  lv_2[9] = 1.0E-5;
  lv_2[10] = 1.0E-5;
  lv_2[11] = 1.0E-5;
  lv_2[12] = 1.0;
  lv_2[13] = 1.0E-5;
  lv_2[14] = 1.0E-5;
  lv_2[15] = 1.0;
  lv_2[16] = 1.0E-5;
  lv_2[17] = 1.0E-5;
  lv_2[18] = 999999.99999999988;
  lv_2[19] = 1.0;
  lv_2[20] = 1.0E-5;
  lv_2[21] = 1.162487358622446;
  lv_2[22] = 1.0E-5;
  lv_2[23] = 1.162487358622446;
  lv_2[24] = 1.0E-5;
  lv_2[25] = 2.7089708162915591;
  lv_2[26] = 1.0E-5;
  lv_2[27] = 2.7089708162915591;
  lv_2[28] = 1.0E-5;
  lv_2[29] = 2.7089708162915591;
  lv_2[30] = 999999.99999999988;
  lv_2[31] = 999999.99999999988;
  lv_2[32] = 999999.99999999988;
  lv_2[33] = 1.0E-5;
  lv_2[34] = 2.7089708162915591;
  lv_2[35] = 1.0E-5;
  lv_2[36] = 2.7089708162915591;
  lv_2[37] = 1.0E-5;
  lv_2[38] = 2.7089708162915591;
  lv_2[39] = 999999.99999999988;
  lv_2[40] = 999999.99999999988;
  lv_2[41] = 999999.99999999988;
  lv_2[42] = 1.0E-5;
  lv_2[43] = 1.0E-5;
  lv_2[44] = 1.0E-5;
  lv_2[45] = 1.0E-5;
  lv_2[46] = 1.0E-5;
  lv_2[47] = 999999.99999999988;
  lv_2[48] = 1.0E-5;
  lv_2[49] = 1.0E-5;
  lv_2[50] = 1.0E-5;
  lv_2[51] = 1.0E-5;
  lv_2[52] = 1.0E-5;
  lv_2[53] = 999999.99999999988;
  lv_2[54] = 1.0E-5;
  lv_2[55] = 1.0E-5;
  lv_2[56] = 1.0E-5;
  lv_2[57] = 1.0E-5;
  lv_2[58] = 1.0E-5;
  lv_2[59] = 999999.99999999988;
  lv_2[60] = 1.0E-5;
  lv_2[61] = 1.0E-5;
  lv_2[62] = 1.0E-5;
  lv_2[63] = 1.0E-5;
  lv_2[64] = 1.0E-5;
  lv_2[65] = 999999.99999999988;
  lv_2[66] = 999999.99999999988;
  lv_2[67] = 1.0E-5;
  lv_2[68] = 0.33862135203644489;
  lv_2[69] = 1.0E-5;
  lv_2[70] = 1.0;
  lv_2[71] = 999999.99999999988;
  lv_3[0] = 1.0;
  lv_3[1] = 100000.0;
  lv_3[2] = 1.0;
  lv_3[3] = 100000.0;
  lv_3[4] = 1.0;
  lv_3[5] = 100000.0;
  lv_3[6] = 1.0;
  lv_3[7] = 100000.0;
  lv_3[8] = 1.0;
  lv_3[9] = 100000.0;
  lv_3[10] = 100000.0;
  lv_3[11] = 1.0000000000000002E-6;
  lv_3[12] = 100000.0;
  lv_3[13] = 100000.0;
  lv_3[14] = 100000.0;
  lv_3[15] = 1.0000000000000002E-6;
  lv_3[16] = 100000.0;
  lv_3[17] = 100000.0;
  lv_3[18] = 100000.0;
  lv_3[19] = 100000.0;
  lv_3[20] = 100000.0;
  lv_3[21] = 100000.0;
  lv_3[22] = 1.0000000000000002E-6;
  lv_3[23] = 1.0;
  lv_3[24] = 100000.0;
  lv_3[25] = 100000.0;
  lv_3[26] = 1.0000000000000002E-6;
  lv_3[27] = 100000.0;
  lv_3[28] = 100000.0;
  lv_3[29] = 1.0000000000000002E-6;
  lv_3[30] = 100000.0;
  lv_3[31] = 1.0000000000000002E-6;
  lv_3[32] = 100000.0;
  lv_3[33] = 100000.0;
  lv_3[34] = 100000.0;
  lv_3[35] = 100000.0;
  lv_3[36] = 1.0000000000000002E-6;
  lv_3[37] = 100000.0;
  lv_3[38] = 100000.0;
  lv_3[39] = 100000.0;
  lv_3[40] = 1.0000000000000002E-6;
  lv_3[41] = 1.0000000000000002E-6;
  lv_3[42] = 100000.0;
  lv_3[43] = 100000.0;
  lv_3[44] = 100000.0;
  lv_3[45] = 1.0000000000000002E-6;
  lv_3[46] = 100000.0;
  lv_3[47] = 100000.0;
  lv_3[48] = 100000.0;
  lv_3[49] = 100000.0;
  lv_3[50] = 100000.0;
  lv_3[51] = 100000.0;
  lv_3[52] = 1.0000000000000002E-6;
  lv_3[53] = 1.0;
  lv_3[54] = 1.0000000000000002E-6;
  lv_3[55] = 1.0000000000000002E-6;
  lv_3[56] = 100000.0;
  lv_3[57] = 100000.0;
  lv_3[58] = 100000.0;
  lv_3[59] = 1.0000000000000002E-6;
  lv_3[60] = 100000.0;
  lv_3[61] = 1.0000000000000002E-6;
  lv_3[62] = 100000.0;
  lv_3[63] = 1.0000000000000002E-6;
  lv_3[64] = 100000.0;
  lv_3[65] = 100000.0;
  lv_3[66] = 1.0000000000000002E-6;
  lv_3[67] = 100000.0;
  lv_3[68] = 1.0000000000000002E-6;
  lv_3[69] = 100000.0;
  lv_3[70] = 1.0000000000000002E-6;
  lv_3[71] = 100000.0;
  lv_4[0] = 0ULL;
  lv_4[1] = 1ULL;
  lv_4[2] = 2ULL;
  lv_4[3] = 3ULL;
  lv_4[4] = 4ULL;
  lv_4[5] = 5ULL;
  lv_4[6] = 6ULL;
  lv_4[7] = 7ULL;
  lv_4[8] = 8ULL;
  lv_4[9] = 9ULL;
  lv_4[10] = 9ULL;
  lv_4[11] = 9ULL;
  lv_4[12] = 9ULL;
  lv_4[13] = 9ULL;
  lv_4[14] = 9ULL;
  lv_4[15] = 9ULL;
  lv_4[16] = 9ULL;
  lv_4[17] = 9ULL;
  lv_4[18] = 9ULL;
  lv_4[19] = 9ULL;
  lv_4[20] = 9ULL;
  lv_4[21] = 9ULL;
  lv_4[22] = 9ULL;
  lv_4[23] = 9ULL;
  lv_4[24] = 9ULL;
  lv_4[25] = 9ULL;
  lv_4[26] = 9ULL;
  lv_4[27] = 9ULL;
  lv_4[28] = 9ULL;
  lv_4[29] = 9ULL;
  lv_4[30] = 9ULL;
  lv_4[31] = 9ULL;
  lv_4[32] = 9ULL;
  lv_4[33] = 9ULL;
  lv_4[34] = 9ULL;
  lv_4[35] = 9ULL;
  lv_4[36] = 9ULL;
  lv_4[37] = 9ULL;
  lv_4[38] = 9ULL;
  lv_4[39] = 9ULL;
  lv_4[40] = 9ULL;
  lv_4[41] = 9ULL;
  lv_4[42] = 9ULL;
  lv_4[43] = 9ULL;
  lv_4[44] = 9ULL;
  lv_4[45] = 9ULL;
  lv_4[46] = 9ULL;
  lv_4[47] = 9ULL;
  lv_4[48] = 9ULL;
  lv_4[49] = 9ULL;
  lv_4[50] = 9ULL;
  lv_4[51] = 9ULL;
  lv_4[52] = 9ULL;
  lv_4[53] = 9ULL;
  lv_4[54] = 9ULL;
  lv_4[55] = 9ULL;
  lv_4[56] = 9ULL;
  lv_4[57] = 9ULL;
  lv_4[58] = 9ULL;
  lv_4[59] = 9ULL;
  lv_4[60] = 9ULL;
  lv_4[61] = 9ULL;
  lv_4[62] = 9ULL;
  lv_4[63] = 9ULL;
  lv_4[64] = 9ULL;
  lv_4[65] = 9ULL;
  lv_4[66] = 9ULL;
  lv_4[67] = 9ULL;
  lv_4[68] = 9ULL;
  lv_4[69] = 9ULL;
  lv_4[70] = 9ULL;
  lv_4[71] = 9ULL;
  lv_4[72] = 9ULL;
  lv_5[0] = 0ULL;
  lv_5[1] = 1ULL;
  lv_5[2] = 2ULL;
  lv_5[3] = 3ULL;
  lv_5[4] = 4ULL;
  lv_5[5] = 5ULL;
  lv_5[6] = 6ULL;
  lv_5[7] = 7ULL;
  lv_5[8] = 8ULL;
  lv_5[9] = 0ULL;
  for (idx = 0ULL; idx < 72ULL; idx++) {
    for (id2_ = lv_4[idx]; id2_ < lv_4[idx + 1ULL]; id2_++) {
      out.mX[id2_] = x0[id2_] * lv_2[lv_5[id2_]] * lv_3[idx];
    }
  }

  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmBoolVector out;
  (void)in;
  out = out1->mVMM;
  out.mX[0] = false;
  out.mX[1] = true;
  out.mX[2] = false;
  out.mX[3] = true;
  out.mX[4] = false;
  out.mX[5] = true;
  out.mX[6] = false;
  out.mX[7] = true;
  out.mX[8] = false;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mDXM_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 1;
  out.mJc[2ULL] = 2;
  out.mJc[3ULL] = 3;
  out.mJc[4ULL] = 4;
  out.mJc[5ULL] = 5;
  out.mJc[6ULL] = 6;
  out.mJc[7ULL] = 7;
  out.mJc[8ULL] = 8;
  out.mJc[9ULL] = 8;
  out.mJc[10ULL] = 8;
  out.mJc[11ULL] = 8;
  out.mJc[12ULL] = 8;
  out.mJc[13ULL] = 8;
  out.mJc[14ULL] = 8;
  out.mJc[15ULL] = 8;
  out.mJc[16ULL] = 8;
  out.mJc[17ULL] = 8;
  out.mJc[18ULL] = 8;
  out.mJc[19ULL] = 8;
  out.mJc[20ULL] = 8;
  out.mJc[21ULL] = 8;
  out.mJc[22ULL] = 8;
  out.mJc[23ULL] = 8;
  out.mJc[24ULL] = 8;
  out.mJc[25ULL] = 8;
  out.mJc[26ULL] = 8;
  out.mJc[27ULL] = 8;
  out.mJc[28ULL] = 8;
  out.mJc[29ULL] = 8;
  out.mJc[30ULL] = 8;
  out.mJc[31ULL] = 8;
  out.mJc[32ULL] = 8;
  out.mJc[33ULL] = 8;
  out.mJc[34ULL] = 8;
  out.mJc[35ULL] = 8;
  out.mJc[36ULL] = 8;
  out.mJc[37ULL] = 8;
  out.mJc[38ULL] = 8;
  out.mJc[39ULL] = 8;
  out.mJc[40ULL] = 8;
  out.mJc[41ULL] = 8;
  out.mJc[42ULL] = 8;
  out.mJc[43ULL] = 8;
  out.mJc[44ULL] = 8;
  out.mJc[45ULL] = 8;
  out.mJc[46ULL] = 8;
  out.mJc[47ULL] = 8;
  out.mJc[48ULL] = 8;
  out.mJc[49ULL] = 8;
  out.mJc[50ULL] = 8;
  out.mJc[51ULL] = 8;
  out.mJc[52ULL] = 8;
  out.mJc[53ULL] = 8;
  out.mJc[54ULL] = 8;
  out.mJc[55ULL] = 8;
  out.mJc[56ULL] = 8;
  out.mJc[57ULL] = 8;
  out.mJc[58ULL] = 8;
  out.mJc[59ULL] = 8;
  out.mJc[60ULL] = 8;
  out.mJc[61ULL] = 8;
  out.mJc[62ULL] = 8;
  out.mJc[63ULL] = 8;
  out.mJc[64ULL] = 8;
  out.mJc[65ULL] = 8;
  out.mJc[66ULL] = 8;
  out.mJc[67ULL] = 8;
  out.mJc[68ULL] = 8;
  out.mJc[69ULL] = 8;
  out.mJc[70ULL] = 8;
  out.mJc[71ULL] = 8;
  out.mJc[72ULL] = 8;
  out.mIr[0ULL] = 1;
  out.mIr[1ULL] = 1;
  out.mIr[2ULL] = 3;
  out.mIr[3ULL] = 3;
  out.mIr[4ULL] = 5;
  out.mIr[5ULL] = 5;
  out.mIr[6ULL] = 7;
  out.mIr[7ULL] = 7;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmRealVector out;
  real_T x[8];
  real_T lv_[9];
  real_T lv_0[72];
  size_t lv_1[8];
  size_t lv_2[73];
  size_t lv_3[8];
  size_t id1_;
  size_t id2_;
  real_T t0;
  real_T t4;
  real_T t8;
  real_T t11;
  real_T t77;
  real_T t79;
  real_T t88;
  real_T t92;
  real_T t93;
  real_T X_idx_1;
  real_T X_idx_3;
  real_T X_idx_5;
  real_T X_idx_7;
  X_idx_1 = in->mX.mX[1];
  X_idx_3 = in->mX.mX[3];
  X_idx_5 = in->mX.mX[5];
  X_idx_7 = in->mX.mX[7];
  out = out1->mDXM;
  t0 = X_idx_1 * 100000.0;
  X_idx_1 = 101325.0 / (t0 + 101325.0 == 0.0 ? 1.0E-16 : t0 + 101325.0);
  t4 = (t0 + 101325.0) * 1.4;
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    t77 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    t77 = pow(X_idx_1, 0.7142857142857143);
  }

  if (t77 >= 1.7E+308) {
    t77 = 1.7E+308;
  } else {
    if (t77 <= -1.7E+308) {
      t77 = -1.7E+308;
    }
  }

  t8 = t77 * 0.005 + 1.0;
  if (X_idx_1 < 0.0 && -0.2857142857142857 != floor(-0.2857142857142857)) {
    t79 = -pow(-X_idx_1, -0.2857142857142857);
  } else {
    t79 = pow(X_idx_1, -0.2857142857142857);
  }

  if (t79 >= 1.7E+308) {
    t79 = 1.7E+308;
  } else {
    if (t79 <= -1.7E+308) {
      t79 = -1.7E+308;
    }
  }

  t11 = t77 * 1.8735432950107121E+9 / (t4 == 0.0 ? 1.0E-16 : t4) * 0.005 + 1.0;
  X_idx_1 = (t0 + 101325.0) * (t0 + 101325.0);
  X_idx_1 = t79 * 0.7142857142857143 * (-101325.0 / (X_idx_1 == 0.0 ? 1.0E-16 :
    X_idx_1));
  t0 = t8 * 1.8735432950107121E+9 / (t11 == 0.0 ? 1.0E-16 : t11);
  t79 = t4 * t4;
  t88 = t11 * t11;
  t92 = t0 * t0;
  t93 = t0 * t0;
  x[0ULL] = -(-(-(0.0034749998916506382 * ((X_idx_1 * t11 *
    9.3677164750535619E+6 - t8 * ((X_idx_1 * t4 * 1.8735432950107121E+9 - t77 *
    2.622960613014997E+9) / (t79 == 0.0 ? 1.0E-16 : t79)) *
    9.3677164750535619E+6) / (t88 == 0.0 ? 1.0E-16 : t88))) / (t92 == 0.0 ?
    1.0E-16 : t92)));
  x[1ULL] = -(-(0.0 * t0 / (t93 == 0.0 ? 1.0E-16 : t93)));
  t0 = X_idx_3 * 100000.0;
  X_idx_1 = 101325.0 / (t0 + 101325.0 == 0.0 ? 1.0E-16 : t0 + 101325.0);
  t4 = (t0 + 101325.0) * 1.4;
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    t77 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    t77 = pow(X_idx_1, 0.7142857142857143);
  }

  if (t77 >= 1.7E+308) {
    t77 = 1.7E+308;
  } else {
    if (t77 <= -1.7E+308) {
      t77 = -1.7E+308;
    }
  }

  t8 = t77 * 0.005 + 1.0;
  if (X_idx_1 < 0.0 && -0.2857142857142857 != floor(-0.2857142857142857)) {
    t79 = -pow(-X_idx_1, -0.2857142857142857);
  } else {
    t79 = pow(X_idx_1, -0.2857142857142857);
  }

  if (t79 >= 1.7E+308) {
    t79 = 1.7E+308;
  } else {
    if (t79 <= -1.7E+308) {
      t79 = -1.7E+308;
    }
  }

  t11 = t77 * 1.8735432950107121E+9 / (t4 == 0.0 ? 1.0E-16 : t4) * 0.005 + 1.0;
  X_idx_1 = (t0 + 101325.0) * (t0 + 101325.0);
  X_idx_1 = t79 * 0.7142857142857143 * (-101325.0 / (X_idx_1 == 0.0 ? 1.0E-16 :
    X_idx_1));
  t0 = t8 * 1.8735432950107121E+9 / (t11 == 0.0 ? 1.0E-16 : t11);
  t79 = t4 * t4;
  t88 = t11 * t11;
  t92 = t0 * t0;
  t93 = t0 * t0;
  x[2ULL] = -(-(-(0.0017374999458253191 * ((X_idx_1 * t11 *
    9.3677164750535619E+6 - t8 * ((X_idx_1 * t4 * 1.8735432950107121E+9 - t77 *
    2.622960613014997E+9) / (t79 == 0.0 ? 1.0E-16 : t79)) *
    9.3677164750535619E+6) / (t88 == 0.0 ? 1.0E-16 : t88))) / (t92 == 0.0 ?
    1.0E-16 : t92)));
  x[3ULL] = -(-(0.0 * t0 / (t93 == 0.0 ? 1.0E-16 : t93)));
  t0 = X_idx_5 * 100000.0;
  X_idx_1 = 101325.0 / (t0 + 101325.0 == 0.0 ? 1.0E-16 : t0 + 101325.0);
  t4 = (t0 + 101325.0) * 1.4;
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    t77 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    t77 = pow(X_idx_1, 0.7142857142857143);
  }

  if (t77 >= 1.7E+308) {
    t77 = 1.7E+308;
  } else {
    if (t77 <= -1.7E+308) {
      t77 = -1.7E+308;
    }
  }

  t8 = t77 * 0.005 + 1.0;
  if (X_idx_1 < 0.0 && -0.2857142857142857 != floor(-0.2857142857142857)) {
    t79 = -pow(-X_idx_1, -0.2857142857142857);
  } else {
    t79 = pow(X_idx_1, -0.2857142857142857);
  }

  if (t79 >= 1.7E+308) {
    t79 = 1.7E+308;
  } else {
    if (t79 <= -1.7E+308) {
      t79 = -1.7E+308;
    }
  }

  t11 = t77 * 1.8735432950107121E+9 / (t4 == 0.0 ? 1.0E-16 : t4) * 0.005 + 1.0;
  X_idx_1 = (t0 + 101325.0) * (t0 + 101325.0);
  X_idx_1 = t79 * 0.7142857142857143 * (-101325.0 / (X_idx_1 == 0.0 ? 1.0E-16 :
    X_idx_1));
  t0 = t8 * 1.8735432950107121E+9 / (t11 == 0.0 ? 1.0E-16 : t11);
  t79 = t4 * t4;
  t88 = t11 * t11;
  t92 = t0 * t0;
  t93 = t0 * t0;
  x[4ULL] = -(-(-(0.0034749998916506382 * ((X_idx_1 * t11 *
    9.3677164750535619E+6 - t8 * ((X_idx_1 * t4 * 1.8735432950107121E+9 - t77 *
    2.622960613014997E+9) / (t79 == 0.0 ? 1.0E-16 : t79)) *
    9.3677164750535619E+6) / (t88 == 0.0 ? 1.0E-16 : t88))) / (t92 == 0.0 ?
    1.0E-16 : t92)));
  x[5ULL] = -(-(0.0 * t0 / (t93 == 0.0 ? 1.0E-16 : t93)));
  t0 = X_idx_7 * 100000.0;
  X_idx_1 = 101325.0 / (t0 + 101325.0 == 0.0 ? 1.0E-16 : t0 + 101325.0);
  t4 = (t0 + 101325.0) * 1.4;
  if (X_idx_1 < 0.0 && 0.7142857142857143 != floor(0.7142857142857143)) {
    t77 = -pow(-X_idx_1, 0.7142857142857143);
  } else {
    t77 = pow(X_idx_1, 0.7142857142857143);
  }

  if (t77 >= 1.7E+308) {
    t77 = 1.7E+308;
  } else {
    if (t77 <= -1.7E+308) {
      t77 = -1.7E+308;
    }
  }

  t8 = t77 * 0.005 + 1.0;
  if (X_idx_1 < 0.0 && -0.2857142857142857 != floor(-0.2857142857142857)) {
    t79 = -pow(-X_idx_1, -0.2857142857142857);
  } else {
    t79 = pow(X_idx_1, -0.2857142857142857);
  }

  if (t79 >= 1.7E+308) {
    t79 = 1.7E+308;
  } else {
    if (t79 <= -1.7E+308) {
      t79 = -1.7E+308;
    }
  }

  t11 = t77 * 1.8735432950107121E+9 / (t4 == 0.0 ? 1.0E-16 : t4) * 0.005 + 1.0;
  X_idx_1 = (t0 + 101325.0) * (t0 + 101325.0);
  X_idx_1 = t79 * 0.7142857142857143 * (-101325.0 / (X_idx_1 == 0.0 ? 1.0E-16 :
    X_idx_1));
  t0 = t8 * 1.8735432950107121E+9 / (t11 == 0.0 ? 1.0E-16 : t11);
  t79 = t4 * t4;
  t88 = t11 * t11;
  t92 = t0 * t0;
  t93 = t0 * t0;
  x[6ULL] = -(-(-(0.0034749998916506382 * ((X_idx_1 * t11 *
    9.3677164750535619E+6 - t8 * ((X_idx_1 * t4 * 1.8735432950107121E+9 - t77 *
    2.622960613014997E+9) / (t79 == 0.0 ? 1.0E-16 : t79)) *
    9.3677164750535619E+6) / (t88 == 0.0 ? 1.0E-16 : t88))) / (t92 == 0.0 ?
    1.0E-16 : t92)));
  x[7ULL] = -(-(0.0 * t0 / (t93 == 0.0 ? 1.0E-16 : t93)));
  lv_[0] = 1.0;
  lv_[1] = 9.9999999999999985E+10;
  lv_[2] = 1.0;
  lv_[3] = 9.9999999999999985E+10;
  lv_[4] = 1.0;
  lv_[5] = 9.9999999999999985E+10;
  lv_[6] = 1.0;
  lv_[7] = 9.9999999999999985E+10;
  lv_[8] = 999999.99999999988;
  lv_0[0] = 1.0;
  lv_0[1] = 100000.0;
  lv_0[2] = 1.0;
  lv_0[3] = 100000.0;
  lv_0[4] = 1.0;
  lv_0[5] = 100000.0;
  lv_0[6] = 1.0;
  lv_0[7] = 100000.0;
  lv_0[8] = 1.0;
  lv_0[9] = 100000.0;
  lv_0[10] = 100000.0;
  lv_0[11] = 1.0000000000000002E-6;
  lv_0[12] = 100000.0;
  lv_0[13] = 100000.0;
  lv_0[14] = 100000.0;
  lv_0[15] = 1.0000000000000002E-6;
  lv_0[16] = 100000.0;
  lv_0[17] = 100000.0;
  lv_0[18] = 100000.0;
  lv_0[19] = 100000.0;
  lv_0[20] = 100000.0;
  lv_0[21] = 100000.0;
  lv_0[22] = 1.0000000000000002E-6;
  lv_0[23] = 1.0;
  lv_0[24] = 100000.0;
  lv_0[25] = 100000.0;
  lv_0[26] = 1.0000000000000002E-6;
  lv_0[27] = 100000.0;
  lv_0[28] = 100000.0;
  lv_0[29] = 1.0000000000000002E-6;
  lv_0[30] = 100000.0;
  lv_0[31] = 1.0000000000000002E-6;
  lv_0[32] = 100000.0;
  lv_0[33] = 100000.0;
  lv_0[34] = 100000.0;
  lv_0[35] = 100000.0;
  lv_0[36] = 1.0000000000000002E-6;
  lv_0[37] = 100000.0;
  lv_0[38] = 100000.0;
  lv_0[39] = 100000.0;
  lv_0[40] = 1.0000000000000002E-6;
  lv_0[41] = 1.0000000000000002E-6;
  lv_0[42] = 100000.0;
  lv_0[43] = 100000.0;
  lv_0[44] = 100000.0;
  lv_0[45] = 1.0000000000000002E-6;
  lv_0[46] = 100000.0;
  lv_0[47] = 100000.0;
  lv_0[48] = 100000.0;
  lv_0[49] = 100000.0;
  lv_0[50] = 100000.0;
  lv_0[51] = 100000.0;
  lv_0[52] = 1.0000000000000002E-6;
  lv_0[53] = 1.0;
  lv_0[54] = 1.0000000000000002E-6;
  lv_0[55] = 1.0000000000000002E-6;
  lv_0[56] = 100000.0;
  lv_0[57] = 100000.0;
  lv_0[58] = 100000.0;
  lv_0[59] = 1.0000000000000002E-6;
  lv_0[60] = 100000.0;
  lv_0[61] = 1.0000000000000002E-6;
  lv_0[62] = 100000.0;
  lv_0[63] = 1.0000000000000002E-6;
  lv_0[64] = 100000.0;
  lv_0[65] = 100000.0;
  lv_0[66] = 1.0000000000000002E-6;
  lv_0[67] = 100000.0;
  lv_0[68] = 1.0000000000000002E-6;
  lv_0[69] = 100000.0;
  lv_0[70] = 1.0000000000000002E-6;
  lv_0[71] = 100000.0;
  lv_1[0] = 1ULL;
  lv_1[1] = 0ULL;
  lv_1[2] = 3ULL;
  lv_1[3] = 2ULL;
  lv_1[4] = 5ULL;
  lv_1[5] = 4ULL;
  lv_1[6] = 7ULL;
  lv_1[7] = 6ULL;
  lv_2[0] = 0ULL;
  lv_2[1] = 1ULL;
  lv_2[2] = 2ULL;
  lv_2[3] = 3ULL;
  lv_2[4] = 4ULL;
  lv_2[5] = 5ULL;
  lv_2[6] = 6ULL;
  lv_2[7] = 7ULL;
  lv_2[8] = 8ULL;
  lv_2[9] = 8ULL;
  lv_2[10] = 8ULL;
  lv_2[11] = 8ULL;
  lv_2[12] = 8ULL;
  lv_2[13] = 8ULL;
  lv_2[14] = 8ULL;
  lv_2[15] = 8ULL;
  lv_2[16] = 8ULL;
  lv_2[17] = 8ULL;
  lv_2[18] = 8ULL;
  lv_2[19] = 8ULL;
  lv_2[20] = 8ULL;
  lv_2[21] = 8ULL;
  lv_2[22] = 8ULL;
  lv_2[23] = 8ULL;
  lv_2[24] = 8ULL;
  lv_2[25] = 8ULL;
  lv_2[26] = 8ULL;
  lv_2[27] = 8ULL;
  lv_2[28] = 8ULL;
  lv_2[29] = 8ULL;
  lv_2[30] = 8ULL;
  lv_2[31] = 8ULL;
  lv_2[32] = 8ULL;
  lv_2[33] = 8ULL;
  lv_2[34] = 8ULL;
  lv_2[35] = 8ULL;
  lv_2[36] = 8ULL;
  lv_2[37] = 8ULL;
  lv_2[38] = 8ULL;
  lv_2[39] = 8ULL;
  lv_2[40] = 8ULL;
  lv_2[41] = 8ULL;
  lv_2[42] = 8ULL;
  lv_2[43] = 8ULL;
  lv_2[44] = 8ULL;
  lv_2[45] = 8ULL;
  lv_2[46] = 8ULL;
  lv_2[47] = 8ULL;
  lv_2[48] = 8ULL;
  lv_2[49] = 8ULL;
  lv_2[50] = 8ULL;
  lv_2[51] = 8ULL;
  lv_2[52] = 8ULL;
  lv_2[53] = 8ULL;
  lv_2[54] = 8ULL;
  lv_2[55] = 8ULL;
  lv_2[56] = 8ULL;
  lv_2[57] = 8ULL;
  lv_2[58] = 8ULL;
  lv_2[59] = 8ULL;
  lv_2[60] = 8ULL;
  lv_2[61] = 8ULL;
  lv_2[62] = 8ULL;
  lv_2[63] = 8ULL;
  lv_2[64] = 8ULL;
  lv_2[65] = 8ULL;
  lv_2[66] = 8ULL;
  lv_2[67] = 8ULL;
  lv_2[68] = 8ULL;
  lv_2[69] = 8ULL;
  lv_2[70] = 8ULL;
  lv_2[71] = 8ULL;
  lv_2[72] = 8ULL;
  lv_3[0] = 1ULL;
  lv_3[1] = 1ULL;
  lv_3[2] = 3ULL;
  lv_3[3] = 3ULL;
  lv_3[4] = 5ULL;
  lv_3[5] = 5ULL;
  lv_3[6] = 7ULL;
  lv_3[7] = 7ULL;
  for (id1_ = 0ULL; id1_ < 72ULL; id1_++) {
    for (id2_ = lv_2[id1_]; id2_ < lv_2[id1_ + 1ULL]; id2_++) {
      out.mX[id2_] = x[lv_1[id2_]] * lv_[lv_3[id2_]] * lv_0[id1_];
    }
  }

  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mDUM_P;
  out.mJc[0ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mDTM_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_a_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mA_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 0;
  out.mJc[2ULL] = 1;
  out.mJc[3ULL] = 1;
  out.mJc[4ULL] = 2;
  out.mJc[5ULL] = 2;
  out.mJc[6ULL] = 3;
  out.mJc[7ULL] = 3;
  out.mJc[8ULL] = 4;
  out.mJc[9ULL] = 5;
  out.mJc[10ULL] = 7;
  out.mJc[11ULL] = 9;
  out.mJc[12ULL] = 11;
  out.mJc[13ULL] = 12;
  out.mJc[14ULL] = 14;
  out.mJc[15ULL] = 16;
  out.mJc[16ULL] = 18;
  out.mJc[17ULL] = 19;
  out.mJc[18ULL] = 21;
  out.mJc[19ULL] = 23;
  out.mJc[20ULL] = 24;
  out.mJc[21ULL] = 25;
  out.mJc[22ULL] = 28;
  out.mJc[23ULL] = 30;
  out.mJc[24ULL] = 30;
  out.mJc[25ULL] = 31;
  out.mJc[26ULL] = 33;
  out.mJc[27ULL] = 34;
  out.mJc[28ULL] = 37;
  out.mJc[29ULL] = 38;
  out.mJc[30ULL] = 40;
  out.mJc[31ULL] = 41;
  out.mJc[32ULL] = 42;
  out.mJc[33ULL] = 45;
  out.mJc[34ULL] = 46;
  out.mJc[35ULL] = 47;
  out.mJc[36ULL] = 49;
  out.mJc[37ULL] = 50;
  out.mJc[38ULL] = 53;
  out.mJc[39ULL] = 54;
  out.mJc[40ULL] = 55;
  out.mJc[41ULL] = 57;
  out.mJc[42ULL] = 58;
  out.mJc[43ULL] = 61;
  out.mJc[44ULL] = 62;
  out.mJc[45ULL] = 63;
  out.mJc[46ULL] = 65;
  out.mJc[47ULL] = 68;
  out.mJc[48ULL] = 71;
  out.mJc[49ULL] = 72;
  out.mJc[50ULL] = 74;
  out.mJc[51ULL] = 75;
  out.mJc[52ULL] = 77;
  out.mJc[53ULL] = 79;
  out.mJc[54ULL] = 80;
  out.mJc[55ULL] = 82;
  out.mJc[56ULL] = 84;
  out.mJc[57ULL] = 85;
  out.mJc[58ULL] = 88;
  out.mJc[59ULL] = 91;
  out.mJc[60ULL] = 93;
  out.mJc[61ULL] = 94;
  out.mJc[62ULL] = 96;
  out.mJc[63ULL] = 97;
  out.mJc[64ULL] = 99;
  out.mJc[65ULL] = 100;
  out.mJc[66ULL] = 103;
  out.mJc[67ULL] = 105;
  out.mJc[68ULL] = 106;
  out.mJc[69ULL] = 108;
  out.mJc[70ULL] = 109;
  out.mJc[71ULL] = 111;
  out.mJc[72ULL] = 112;
  out.mIr[0ULL] = 44;
  out.mIr[1ULL] = 50;
  out.mIr[2ULL] = 56;
  out.mIr[3ULL] = 62;
  out.mIr[4ULL] = 70;
  out.mIr[5ULL] = 20;
  out.mIr[6ULL] = 45;
  out.mIr[7ULL] = 20;
  out.mIr[8ULL] = 48;
  out.mIr[9ULL] = 47;
  out.mIr[10ULL] = 53;
  out.mIr[11ULL] = 20;
  out.mIr[12ULL] = 22;
  out.mIr[13ULL] = 51;
  out.mIr[14ULL] = 22;
  out.mIr[15ULL] = 54;
  out.mIr[16ULL] = 53;
  out.mIr[17ULL] = 59;
  out.mIr[18ULL] = 22;
  out.mIr[19ULL] = 9;
  out.mIr[20ULL] = 11;
  out.mIr[21ULL] = 10;
  out.mIr[22ULL] = 14;
  out.mIr[23ULL] = 10;
  out.mIr[24ULL] = 9;
  out.mIr[25ULL] = 17;
  out.mIr[26ULL] = 35;
  out.mIr[27ULL] = 37;
  out.mIr[28ULL] = 40;
  out.mIr[29ULL] = 71;
  out.mIr[30ULL] = 17;
  out.mIr[31ULL] = 17;
  out.mIr[32ULL] = 67;
  out.mIr[33ULL] = 47;
  out.mIr[34ULL] = 42;
  out.mIr[35ULL] = 44;
  out.mIr[36ULL] = 45;
  out.mIr[37ULL] = 42;
  out.mIr[38ULL] = 41;
  out.mIr[39ULL] = 47;
  out.mIr[40ULL] = 45;
  out.mIr[41ULL] = 53;
  out.mIr[42ULL] = 48;
  out.mIr[43ULL] = 50;
  out.mIr[44ULL] = 51;
  out.mIr[45ULL] = 48;
  out.mIr[46ULL] = 51;
  out.mIr[47ULL] = 57;
  out.mIr[48ULL] = 60;
  out.mIr[49ULL] = 59;
  out.mIr[50ULL] = 54;
  out.mIr[51ULL] = 56;
  out.mIr[52ULL] = 57;
  out.mIr[53ULL] = 54;
  out.mIr[54ULL] = 57;
  out.mIr[55ULL] = 59;
  out.mIr[56ULL] = 65;
  out.mIr[57ULL] = 65;
  out.mIr[58ULL] = 60;
  out.mIr[59ULL] = 62;
  out.mIr[60ULL] = 63;
  out.mIr[61ULL] = 60;
  out.mIr[62ULL] = 63;
  out.mIr[63ULL] = 31;
  out.mIr[64ULL] = 65;
  out.mIr[65ULL] = 11;
  out.mIr[66ULL] = 33;
  out.mIr[67ULL] = 35;
  out.mIr[68ULL] = 14;
  out.mIr[69ULL] = 24;
  out.mIr[70ULL] = 26;
  out.mIr[71ULL] = 16;
  out.mIr[72ULL] = 14;
  out.mIr[73ULL] = 16;
  out.mIr[74ULL] = 13;
  out.mIr[75ULL] = 11;
  out.mIr[76ULL] = 13;
  out.mIr[77ULL] = 66;
  out.mIr[78ULL] = 71;
  out.mIr[79ULL] = 70;
  out.mIr[80ULL] = 8;
  out.mIr[81ULL] = 66;
  out.mIr[82ULL] = 32;
  out.mIr[83ULL] = 66;
  out.mIr[84ULL] = 67;
  out.mIr[85ULL] = 26;
  out.mIr[86ULL] = 28;
  out.mIr[87ULL] = 63;
  out.mIr[88ULL] = 24;
  out.mIr[89ULL] = 28;
  out.mIr[90ULL] = 67;
  out.mIr[91ULL] = 31;
  out.mIr[92ULL] = 32;
  out.mIr[93ULL] = 28;
  out.mIr[94ULL] = 30;
  out.mIr[95ULL] = 31;
  out.mIr[96ULL] = 26;
  out.mIr[97ULL] = 30;
  out.mIr[98ULL] = 32;
  out.mIr[99ULL] = 24;
  out.mIr[100ULL] = 33;
  out.mIr[101ULL] = 37;
  out.mIr[102ULL] = 42;
  out.mIr[103ULL] = 40;
  out.mIr[104ULL] = 41;
  out.mIr[105ULL] = 37;
  out.mIr[106ULL] = 39;
  out.mIr[107ULL] = 40;
  out.mIr[108ULL] = 35;
  out.mIr[109ULL] = 39;
  out.mIr[110ULL] = 41;
  out.mIr[111ULL] = 33;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_a(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out1)
{
  PmRealVector out;
  (void)in;
  out = out1->mA;
  out.mX[0ULL] = -1.0;
  out.mX[1ULL] = -1.0;
  out.mX[2ULL] = -1.0;
  out.mX[3ULL] = -1.0;
  out.mX[4ULL] = -1.0;
  out.mX[5ULL] = -1.0;
  out.mX[6ULL] = 1.0;
  out.mX[7ULL] = 1.0;
  out.mX[8ULL] = -1.0;
  out.mX[9ULL] = 1.0;
  out.mX[10ULL] = -1.0;
  out.mX[11ULL] = 1.0;
  out.mX[12ULL] = -1.0;
  out.mX[13ULL] = 1.0;
  out.mX[14ULL] = 1.0;
  out.mX[15ULL] = -1.0;
  out.mX[16ULL] = 1.0;
  out.mX[17ULL] = -1.0;
  out.mX[18ULL] = 1.0;
  out.mX[19ULL] = 1.0;
  out.mX[20ULL] = 1.0;
  out.mX[21ULL] = 1.0;
  out.mX[22ULL] = 1.0;
  out.mX[23ULL] = -1.0;
  out.mX[24ULL] = -1.0;
  out.mX[25ULL] = 1.0;
  out.mX[26ULL] = 1.0;
  out.mX[27ULL] = -1.0;
  out.mX[28ULL] = -1.0;
  out.mX[29ULL] = 1.0;
  out.mX[30ULL] = 1.0;
  out.mX[31ULL] = -1.0;
  out.mX[32ULL] = 1.0;
  out.mX[33ULL] = 1.0;
  out.mX[34ULL] = 1.0;
  out.mX[35ULL] = 1.0;
  out.mX[36ULL] = -1.0;
  out.mX[37ULL] = 1.0;
  out.mX[38ULL] = 1.0;
  out.mX[39ULL] = -1.0;
  out.mX[40ULL] = 1.0;
  out.mX[41ULL] = 1.0;
  out.mX[42ULL] = 1.0;
  out.mX[43ULL] = 1.0;
  out.mX[44ULL] = -1.0;
  out.mX[45ULL] = 1.0;
  out.mX[46ULL] = 1.0;
  out.mX[47ULL] = 1.0;
  out.mX[48ULL] = -1.0;
  out.mX[49ULL] = 1.0;
  out.mX[50ULL] = 1.0;
  out.mX[51ULL] = 1.0;
  out.mX[52ULL] = -1.0;
  out.mX[53ULL] = 1.0;
  out.mX[54ULL] = 1.0;
  out.mX[55ULL] = 1.0;
  out.mX[56ULL] = -1.0;
  out.mX[57ULL] = 1.0;
  out.mX[58ULL] = 1.0;
  out.mX[59ULL] = 1.0;
  out.mX[60ULL] = -1.0;
  out.mX[61ULL] = 1.0;
  out.mX[62ULL] = 1.0;
  out.mX[63ULL] = -1.0;
  out.mX[64ULL] = 1.0;
  out.mX[65ULL] = -1.0;
  out.mX[66ULL] = -1.0;
  out.mX[67ULL] = -1.0;
  out.mX[68ULL] = -1.0;
  out.mX[69ULL] = -1.0;
  out.mX[70ULL] = -1.0;
  out.mX[71ULL] = 1.0;
  out.mX[72ULL] = 1.0;
  out.mX[73ULL] = -1.0;
  out.mX[74ULL] = 1.0;
  out.mX[75ULL] = 1.0;
  out.mX[76ULL] = -1.0;
  out.mX[77ULL] = 1.0;
  out.mX[78ULL] = 1.0;
  out.mX[79ULL] = 1.0;
  out.mX[80ULL] = -1.0;
  out.mX[81ULL] = -1.0;
  out.mX[82ULL] = 1.0;
  out.mX[83ULL] = 1.0;
  out.mX[84ULL] = 1.0;
  out.mX[85ULL] = 1.0;
  out.mX[86ULL] = -1.0;
  out.mX[87ULL] = 1.0;
  out.mX[88ULL] = 1.0;
  out.mX[89ULL] = 1.0;
  out.mX[90ULL] = -1.0;
  out.mX[91ULL] = 1.0;
  out.mX[92ULL] = -1.0;
  out.mX[93ULL] = 1.0;
  out.mX[94ULL] = 1.0;
  out.mX[95ULL] = -1.0;
  out.mX[96ULL] = 1.0;
  out.mX[97ULL] = 1.0;
  out.mX[98ULL] = -1.0;
  out.mX[99ULL] = 1.0;
  out.mX[100ULL] = 1.0;
  out.mX[101ULL] = 1.0;
  out.mX[102ULL] = -1.0;
  out.mX[103ULL] = 1.0;
  out.mX[104ULL] = -1.0;
  out.mX[105ULL] = 1.0;
  out.mX[106ULL] = 1.0;
  out.mX[107ULL] = -1.0;
  out.mX[108ULL] = 1.0;
  out.mX[109ULL] = 1.0;
  out.mX[110ULL] = -1.0;
  out.mX[111ULL] = 1.0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mB_P;
  out.mJc[0ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mC_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_f(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out1)
{
  PmRealVector out;
  int32_T M[204];
  real_T x[72];
  size_t idx;
  int32_T localMode[24];
  int32_T localMode0[24];
  int32_T localMode1[24];
  int32_T localMode2[24];
  int32_T localMode3[24];
  int32_T localMode4[24];
  int32_T localMode5[24];
  int32_T localMode6[24];
  real_T lv_[72];
  real_T t5;
  real_T t23;
  real_T t41;
  real_T X_idx_26;
  real_T X_idx_31;
  real_T X_idx_36;
  real_T X_idx_41;
  real_T X_idx_22;
  real_T X_idx_24;
  real_T X_idx_23;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_63;
  real_T X_idx_64;
  real_T X_idx_61;
  real_T X_idx_62;
  real_T X_idx_59;
  real_T X_idx_60;
  real_T X_idx_70;
  real_T X_idx_71;
  real_T X_idx_68;
  real_T X_idx_69;
  real_T X_idx_66;
  real_T X_idx_67;
  real_T X_idx_29;
  real_T X_idx_28;
  real_T X_idx_30;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_38;
  real_T X_idx_40;
  real_T X_idx_39;
  real_T X_idx_43;
  real_T X_idx_45;
  real_T X_idx_44;
  real_T X_idx_55;
  real_T X_idx_56;
  real_T X_idx_25;
  int32_T in_idx_0;
  int32_T in_idx_1;
  int32_T in_idx_2;
  int32_T in_idx_3;
  int32_T in_idx_4;
  int32_T in_idx_5;
  int32_T in_idx_6;
  int32_T in_idx_7;
  int32_T in_idx_8;
  int32_T in_idx_9;
  int32_T in_idx_10;
  int32_T in_idx_11;
  int32_T in_idx_12;
  int32_T in_idx_13;
  int32_T in_idx_14;
  int32_T in_idx_15;
  int32_T in_idx_16;
  int32_T in_idx_17;
  int32_T in_idx_18;
  int32_T in_idx_19;
  int32_T in_idx_20;
  int32_T in_idx_21;
  int32_T in_idx_22;
  int32_T in_idx_23;
  int32_T in_idx_24;
  int32_T in_idx_25;
  int32_T in_idx_26;
  int32_T in_idx_27;
  int32_T in_idx_28;
  int32_T in_idx_29;
  int32_T in_idx_30;
  int32_T in_idx_31;
  int32_T in_idx_32;
  int32_T in_idx_33;
  int32_T in_idx_34;
  int32_T in_idx_35;
  int32_T in_idx_36;
  int32_T in_idx_37;
  int32_T in_idx_38;
  int32_T in_idx_39;
  int32_T in_idx_40;
  int32_T in_idx_41;
  int32_T in_idx_42;
  int32_T in_idx_43;
  int32_T in_idx_44;
  int32_T in_idx_45;
  int32_T in_idx_46;
  int32_T in_idx_47;
  int32_T in_idx_48;
  int32_T in_idx_49;
  int32_T in_idx_50;
  int32_T in_idx_51;
  int32_T in_idx_52;
  int32_T in_idx_53;
  int32_T in_idx_54;
  int32_T in_idx_55;
  int32_T in_idx_56;
  int32_T in_idx_57;
  int32_T in_idx_58;
  int32_T in_idx_59;
  int32_T in_idx_60;
  int32_T in_idx_61;
  int32_T in_idx_62;
  int32_T in_idx_63;
  int32_T in_idx_64;
  int32_T in_idx_65;
  int32_T in_idx_66;
  int32_T in_idx_67;
  int32_T in_idx_68;
  int32_T in_idx_69;
  int32_T in_idx_70;
  int32_T in_idx_71;
  int32_T in_idx_72;
  int32_T in_idx_73;
  int32_T in_idx_74;
  int32_T in_idx_75;
  int32_T in_idx_76;
  int32_T in_idx_77;
  int32_T in_idx_78;
  int32_T in_idx_79;
  int32_T in_idx_80;
  int32_T in_idx_81;
  int32_T in_idx_82;
  int32_T in_idx_83;
  int32_T in_idx_84;
  int32_T in_idx_85;
  int32_T in_idx_86;
  int32_T in_idx_87;
  int32_T in_idx_88;
  int32_T in_idx_89;
  int32_T in_idx_90;
  int32_T in_idx_91;
  int32_T in_idx_92;
  int32_T in_idx_93;
  int32_T in_idx_94;
  int32_T in_idx_95;
  int32_T in_idx_96;
  int32_T in_idx_97;
  int32_T in_idx_98;
  int32_T in_idx_99;
  int32_T in_idx_100;
  int32_T in_idx_101;
  int32_T in_idx_102;
  int32_T in_idx_103;
  int32_T in_idx_104;
  int32_T in_idx_105;
  int32_T in_idx_106;
  int32_T in_idx_107;
  int32_T in_idx_108;
  int32_T in_idx_109;
  int32_T in_idx_110;
  int32_T in_idx_111;
  int32_T in_idx_112;
  int32_T in_idx_113;
  int32_T in_idx_114;
  int32_T in_idx_115;
  int32_T in_idx_116;
  int32_T in_idx_117;
  int32_T in_idx_118;
  int32_T in_idx_119;
  int32_T in_idx_120;
  int32_T in_idx_121;
  int32_T in_idx_122;
  int32_T in_idx_123;
  int32_T in_idx_124;
  int32_T in_idx_125;
  int32_T in_idx_126;
  int32_T in_idx_127;
  int32_T in_idx_128;
  int32_T in_idx_129;
  int32_T in_idx_130;
  int32_T in_idx_131;
  int32_T in_idx_132;
  int32_T in_idx_133;
  int32_T in_idx_134;
  int32_T in_idx_135;
  int32_T in_idx_136;
  int32_T in_idx_137;
  int32_T in_idx_138;
  int32_T in_idx_139;
  int32_T in_idx_140;
  int32_T in_idx_141;
  int32_T in_idx_142;
  int32_T in_idx_143;
  int32_T in_idx_144;
  int32_T in_idx_145;
  int32_T in_idx_146;
  int32_T in_idx_147;
  int32_T in_idx_148;
  int32_T in_idx_149;
  int32_T in_idx_150;
  int32_T in_idx_151;
  int32_T in_idx_152;
  int32_T in_idx_153;
  int32_T in_idx_154;
  int32_T in_idx_155;
  int32_T in_idx_156;
  int32_T in_idx_157;
  int32_T in_idx_158;
  int32_T in_idx_159;
  int32_T in_idx_160;
  int32_T in_idx_161;
  int32_T in_idx_162;
  int32_T in_idx_163;
  int32_T in_idx_164;
  int32_T in_idx_165;
  int32_T in_idx_166;
  int32_T in_idx_167;
  int32_T in_idx_168;
  int32_T in_idx_169;
  int32_T in_idx_170;
  int32_T in_idx_171;
  int32_T in_idx_172;
  int32_T in_idx_173;
  int32_T in_idx_174;
  int32_T in_idx_175;
  int32_T in_idx_176;
  int32_T in_idx_177;
  int32_T in_idx_178;
  int32_T in_idx_179;
  int32_T in_idx_180;
  int32_T in_idx_181;
  int32_T in_idx_182;
  int32_T in_idx_183;
  int32_T in_idx_184;
  int32_T in_idx_185;
  int32_T in_idx_186;
  int32_T in_idx_187;
  int32_T in_idx_188;
  int32_T in_idx_189;
  int32_T in_idx_190;
  int32_T in_idx_191;
  int32_T in_idx_192;
  int32_T in_idx_193;
  int32_T in_idx_194;
  int32_T in_idx_195;
  int32_T in_idx_196;
  int32_T in_idx_197;
  int32_T in_idx_198;
  int32_T in_idx_199;
  int32_T in_idx_200;
  int32_T in_idx_201;
  int32_T in_idx_202;
  int32_T in_idx_203;
  in_idx_0 = in->mM.mX[0];
  in_idx_1 = in->mM.mX[1];
  in_idx_2 = in->mM.mX[2];
  in_idx_3 = in->mM.mX[3];
  in_idx_4 = in->mM.mX[4];
  in_idx_5 = in->mM.mX[5];
  in_idx_6 = in->mM.mX[6];
  in_idx_7 = in->mM.mX[7];
  in_idx_8 = in->mM.mX[8];
  in_idx_9 = in->mM.mX[9];
  in_idx_10 = in->mM.mX[10];
  in_idx_11 = in->mM.mX[11];
  in_idx_12 = in->mM.mX[12];
  in_idx_13 = in->mM.mX[13];
  in_idx_14 = in->mM.mX[14];
  in_idx_15 = in->mM.mX[15];
  in_idx_16 = in->mM.mX[16];
  in_idx_17 = in->mM.mX[17];
  in_idx_18 = in->mM.mX[18];
  in_idx_19 = in->mM.mX[19];
  in_idx_20 = in->mM.mX[20];
  in_idx_21 = in->mM.mX[21];
  in_idx_22 = in->mM.mX[22];
  in_idx_23 = in->mM.mX[23];
  in_idx_24 = in->mM.mX[24];
  in_idx_25 = in->mM.mX[25];
  in_idx_26 = in->mM.mX[26];
  in_idx_27 = in->mM.mX[27];
  in_idx_28 = in->mM.mX[28];
  in_idx_29 = in->mM.mX[29];
  in_idx_30 = in->mM.mX[30];
  in_idx_31 = in->mM.mX[31];
  in_idx_32 = in->mM.mX[32];
  in_idx_33 = in->mM.mX[33];
  in_idx_34 = in->mM.mX[34];
  in_idx_35 = in->mM.mX[35];
  in_idx_36 = in->mM.mX[36];
  in_idx_37 = in->mM.mX[37];
  in_idx_38 = in->mM.mX[38];
  in_idx_39 = in->mM.mX[39];
  in_idx_40 = in->mM.mX[40];
  in_idx_41 = in->mM.mX[41];
  in_idx_42 = in->mM.mX[42];
  in_idx_43 = in->mM.mX[43];
  in_idx_44 = in->mM.mX[44];
  in_idx_45 = in->mM.mX[45];
  in_idx_46 = in->mM.mX[46];
  in_idx_47 = in->mM.mX[47];
  in_idx_48 = in->mM.mX[48];
  in_idx_49 = in->mM.mX[49];
  in_idx_50 = in->mM.mX[50];
  in_idx_51 = in->mM.mX[51];
  in_idx_52 = in->mM.mX[52];
  in_idx_53 = in->mM.mX[53];
  in_idx_54 = in->mM.mX[54];
  in_idx_55 = in->mM.mX[55];
  in_idx_56 = in->mM.mX[56];
  in_idx_57 = in->mM.mX[57];
  in_idx_58 = in->mM.mX[58];
  in_idx_59 = in->mM.mX[59];
  in_idx_60 = in->mM.mX[60];
  in_idx_61 = in->mM.mX[61];
  in_idx_62 = in->mM.mX[62];
  in_idx_63 = in->mM.mX[63];
  in_idx_64 = in->mM.mX[64];
  in_idx_65 = in->mM.mX[65];
  in_idx_66 = in->mM.mX[66];
  in_idx_67 = in->mM.mX[67];
  in_idx_68 = in->mM.mX[68];
  in_idx_69 = in->mM.mX[69];
  in_idx_70 = in->mM.mX[70];
  in_idx_71 = in->mM.mX[71];
  in_idx_72 = in->mM.mX[72];
  in_idx_73 = in->mM.mX[73];
  in_idx_74 = in->mM.mX[74];
  in_idx_75 = in->mM.mX[75];
  in_idx_76 = in->mM.mX[76];
  in_idx_77 = in->mM.mX[77];
  in_idx_78 = in->mM.mX[78];
  in_idx_79 = in->mM.mX[79];
  in_idx_80 = in->mM.mX[80];
  in_idx_81 = in->mM.mX[81];
  in_idx_82 = in->mM.mX[82];
  in_idx_83 = in->mM.mX[83];
  in_idx_84 = in->mM.mX[84];
  in_idx_85 = in->mM.mX[85];
  in_idx_86 = in->mM.mX[86];
  in_idx_87 = in->mM.mX[87];
  in_idx_88 = in->mM.mX[88];
  in_idx_89 = in->mM.mX[89];
  in_idx_90 = in->mM.mX[90];
  in_idx_91 = in->mM.mX[91];
  in_idx_92 = in->mM.mX[92];
  in_idx_93 = in->mM.mX[93];
  in_idx_94 = in->mM.mX[94];
  in_idx_95 = in->mM.mX[95];
  in_idx_96 = in->mM.mX[96];
  in_idx_97 = in->mM.mX[97];
  in_idx_98 = in->mM.mX[98];
  in_idx_99 = in->mM.mX[99];
  in_idx_100 = in->mM.mX[100];
  in_idx_101 = in->mM.mX[101];
  in_idx_102 = in->mM.mX[102];
  in_idx_103 = in->mM.mX[103];
  in_idx_104 = in->mM.mX[104];
  in_idx_105 = in->mM.mX[105];
  in_idx_106 = in->mM.mX[106];
  in_idx_107 = in->mM.mX[107];
  in_idx_108 = in->mM.mX[108];
  in_idx_109 = in->mM.mX[109];
  in_idx_110 = in->mM.mX[110];
  in_idx_111 = in->mM.mX[111];
  in_idx_112 = in->mM.mX[112];
  in_idx_113 = in->mM.mX[113];
  in_idx_114 = in->mM.mX[114];
  in_idx_115 = in->mM.mX[115];
  in_idx_116 = in->mM.mX[116];
  in_idx_117 = in->mM.mX[117];
  in_idx_118 = in->mM.mX[118];
  in_idx_119 = in->mM.mX[119];
  in_idx_120 = in->mM.mX[120];
  in_idx_121 = in->mM.mX[121];
  in_idx_122 = in->mM.mX[122];
  in_idx_123 = in->mM.mX[123];
  in_idx_124 = in->mM.mX[124];
  in_idx_125 = in->mM.mX[125];
  in_idx_126 = in->mM.mX[126];
  in_idx_127 = in->mM.mX[127];
  in_idx_128 = in->mM.mX[128];
  in_idx_129 = in->mM.mX[129];
  in_idx_130 = in->mM.mX[130];
  in_idx_131 = in->mM.mX[131];
  in_idx_132 = in->mM.mX[132];
  in_idx_133 = in->mM.mX[133];
  in_idx_134 = in->mM.mX[134];
  in_idx_135 = in->mM.mX[135];
  in_idx_136 = in->mM.mX[136];
  in_idx_137 = in->mM.mX[137];
  in_idx_138 = in->mM.mX[138];
  in_idx_139 = in->mM.mX[139];
  in_idx_140 = in->mM.mX[140];
  in_idx_141 = in->mM.mX[141];
  in_idx_142 = in->mM.mX[142];
  in_idx_143 = in->mM.mX[143];
  in_idx_144 = in->mM.mX[144];
  in_idx_145 = in->mM.mX[145];
  in_idx_146 = in->mM.mX[146];
  in_idx_147 = in->mM.mX[147];
  in_idx_148 = in->mM.mX[148];
  in_idx_149 = in->mM.mX[149];
  in_idx_150 = in->mM.mX[150];
  in_idx_151 = in->mM.mX[151];
  in_idx_152 = in->mM.mX[152];
  in_idx_153 = in->mM.mX[153];
  in_idx_154 = in->mM.mX[154];
  in_idx_155 = in->mM.mX[155];
  in_idx_156 = in->mM.mX[156];
  in_idx_157 = in->mM.mX[157];
  in_idx_158 = in->mM.mX[158];
  in_idx_159 = in->mM.mX[159];
  in_idx_160 = in->mM.mX[160];
  in_idx_161 = in->mM.mX[161];
  in_idx_162 = in->mM.mX[162];
  in_idx_163 = in->mM.mX[163];
  in_idx_164 = in->mM.mX[164];
  in_idx_165 = in->mM.mX[165];
  in_idx_166 = in->mM.mX[166];
  in_idx_167 = in->mM.mX[167];
  in_idx_168 = in->mM.mX[168];
  in_idx_169 = in->mM.mX[169];
  in_idx_170 = in->mM.mX[170];
  in_idx_171 = in->mM.mX[171];
  in_idx_172 = in->mM.mX[172];
  in_idx_173 = in->mM.mX[173];
  in_idx_174 = in->mM.mX[174];
  in_idx_175 = in->mM.mX[175];
  in_idx_176 = in->mM.mX[176];
  in_idx_177 = in->mM.mX[177];
  in_idx_178 = in->mM.mX[178];
  in_idx_179 = in->mM.mX[179];
  in_idx_180 = in->mM.mX[180];
  in_idx_181 = in->mM.mX[181];
  in_idx_182 = in->mM.mX[182];
  in_idx_183 = in->mM.mX[183];
  in_idx_184 = in->mM.mX[184];
  in_idx_185 = in->mM.mX[185];
  in_idx_186 = in->mM.mX[186];
  in_idx_187 = in->mM.mX[187];
  in_idx_188 = in->mM.mX[188];
  in_idx_189 = in->mM.mX[189];
  in_idx_190 = in->mM.mX[190];
  in_idx_191 = in->mM.mX[191];
  in_idx_192 = in->mM.mX[192];
  in_idx_193 = in->mM.mX[193];
  in_idx_194 = in->mM.mX[194];
  in_idx_195 = in->mM.mX[195];
  in_idx_196 = in->mM.mX[196];
  in_idx_197 = in->mM.mX[197];
  in_idx_198 = in->mM.mX[198];
  in_idx_199 = in->mM.mX[199];
  in_idx_200 = in->mM.mX[200];
  in_idx_201 = in->mM.mX[201];
  in_idx_202 = in->mM.mX[202];
  in_idx_203 = in->mM.mX[203];
  M[0] = in_idx_0;
  M[1] = in_idx_1;
  M[2] = in_idx_2;
  M[3] = in_idx_3;
  M[4] = in_idx_4;
  M[5] = in_idx_5;
  M[6] = in_idx_6;
  M[7] = in_idx_7;
  M[8] = in_idx_8;
  M[9] = in_idx_9;
  M[10] = in_idx_10;
  M[11] = in_idx_11;
  M[12] = in_idx_12;
  M[13] = in_idx_13;
  M[14] = in_idx_14;
  M[15] = in_idx_15;
  M[16] = in_idx_16;
  M[17] = in_idx_17;
  M[18] = in_idx_18;
  M[19] = in_idx_19;
  M[20] = in_idx_20;
  M[21] = in_idx_21;
  M[22] = in_idx_22;
  M[23] = in_idx_23;
  M[24] = in_idx_24;
  M[25] = in_idx_25;
  M[26] = in_idx_26;
  M[27] = in_idx_27;
  M[28] = in_idx_28;
  M[29] = in_idx_29;
  M[30] = in_idx_30;
  M[31] = in_idx_31;
  M[32] = in_idx_32;
  M[33] = in_idx_33;
  M[34] = in_idx_34;
  M[35] = in_idx_35;
  M[36] = in_idx_36;
  M[37] = in_idx_37;
  M[38] = in_idx_38;
  M[39] = in_idx_39;
  M[40] = in_idx_40;
  M[41] = in_idx_41;
  M[42] = in_idx_42;
  M[43] = in_idx_43;
  M[44] = in_idx_44;
  M[45] = in_idx_45;
  M[46] = in_idx_46;
  M[47] = in_idx_47;
  M[48] = in_idx_48;
  M[49] = in_idx_49;
  M[50] = in_idx_50;
  M[51] = in_idx_51;
  M[52] = in_idx_52;
  M[53] = in_idx_53;
  M[54] = in_idx_54;
  M[55] = in_idx_55;
  M[56] = in_idx_56;
  M[57] = in_idx_57;
  M[58] = in_idx_58;
  M[59] = in_idx_59;
  M[60] = in_idx_60;
  M[61] = in_idx_61;
  M[62] = in_idx_62;
  M[63] = in_idx_63;
  M[64] = in_idx_64;
  M[65] = in_idx_65;
  M[66] = in_idx_66;
  M[67] = in_idx_67;
  M[68] = in_idx_68;
  M[69] = in_idx_69;
  M[70] = in_idx_70;
  M[71] = in_idx_71;
  M[72] = in_idx_72;
  M[73] = in_idx_73;
  M[74] = in_idx_74;
  M[75] = in_idx_75;
  M[76] = in_idx_76;
  M[77] = in_idx_77;
  M[78] = in_idx_78;
  M[79] = in_idx_79;
  M[80] = in_idx_80;
  M[81] = in_idx_81;
  M[82] = in_idx_82;
  M[83] = in_idx_83;
  M[84] = in_idx_84;
  M[85] = in_idx_85;
  M[86] = in_idx_86;
  M[87] = in_idx_87;
  M[88] = in_idx_88;
  M[89] = in_idx_89;
  M[90] = in_idx_90;
  M[91] = in_idx_91;
  M[92] = in_idx_92;
  M[93] = in_idx_93;
  M[94] = in_idx_94;
  M[95] = in_idx_95;
  M[96] = in_idx_96;
  M[97] = in_idx_97;
  M[98] = in_idx_98;
  M[99] = in_idx_99;
  M[100] = in_idx_100;
  M[101] = in_idx_101;
  M[102] = in_idx_102;
  M[103] = in_idx_103;
  M[104] = in_idx_104;
  M[105] = in_idx_105;
  M[106] = in_idx_106;
  M[107] = in_idx_107;
  M[108] = in_idx_108;
  M[109] = in_idx_109;
  M[110] = in_idx_110;
  M[111] = in_idx_111;
  M[112] = in_idx_112;
  M[113] = in_idx_113;
  M[114] = in_idx_114;
  M[115] = in_idx_115;
  M[116] = in_idx_116;
  M[117] = in_idx_117;
  M[118] = in_idx_118;
  M[119] = in_idx_119;
  M[120] = in_idx_120;
  M[121] = in_idx_121;
  M[122] = in_idx_122;
  M[123] = in_idx_123;
  M[124] = in_idx_124;
  M[125] = in_idx_125;
  M[126] = in_idx_126;
  M[127] = in_idx_127;
  M[128] = in_idx_128;
  M[129] = in_idx_129;
  M[130] = in_idx_130;
  M[131] = in_idx_131;
  M[132] = in_idx_132;
  M[133] = in_idx_133;
  M[134] = in_idx_134;
  M[135] = in_idx_135;
  M[136] = in_idx_136;
  M[137] = in_idx_137;
  M[138] = in_idx_138;
  M[139] = in_idx_139;
  M[140] = in_idx_140;
  M[141] = in_idx_141;
  M[142] = in_idx_142;
  M[143] = in_idx_143;
  M[144] = in_idx_144;
  M[145] = in_idx_145;
  M[146] = in_idx_146;
  M[147] = in_idx_147;
  M[148] = in_idx_148;
  M[149] = in_idx_149;
  M[150] = in_idx_150;
  M[151] = in_idx_151;
  M[152] = in_idx_152;
  M[153] = in_idx_153;
  M[154] = in_idx_154;
  M[155] = in_idx_155;
  M[156] = in_idx_156;
  M[157] = in_idx_157;
  M[158] = in_idx_158;
  M[159] = in_idx_159;
  M[160] = in_idx_160;
  M[161] = in_idx_161;
  M[162] = in_idx_162;
  M[163] = in_idx_163;
  M[164] = in_idx_164;
  M[165] = in_idx_165;
  M[166] = in_idx_166;
  M[167] = in_idx_167;
  M[168] = in_idx_168;
  M[169] = in_idx_169;
  M[170] = in_idx_170;
  M[171] = in_idx_171;
  M[172] = in_idx_172;
  M[173] = in_idx_173;
  M[174] = in_idx_174;
  M[175] = in_idx_175;
  M[176] = in_idx_176;
  M[177] = in_idx_177;
  M[178] = in_idx_178;
  M[179] = in_idx_179;
  M[180] = in_idx_180;
  M[181] = in_idx_181;
  M[182] = in_idx_182;
  M[183] = in_idx_183;
  M[184] = in_idx_184;
  M[185] = in_idx_185;
  M[186] = in_idx_186;
  M[187] = in_idx_187;
  M[188] = in_idx_188;
  M[189] = in_idx_189;
  M[190] = in_idx_190;
  M[191] = in_idx_191;
  M[192] = in_idx_192;
  M[193] = in_idx_193;
  M[194] = in_idx_194;
  M[195] = in_idx_195;
  M[196] = in_idx_196;
  M[197] = in_idx_197;
  M[198] = in_idx_198;
  M[199] = in_idx_199;
  M[200] = in_idx_200;
  M[201] = in_idx_201;
  M[202] = in_idx_202;
  M[203] = in_idx_203;
  X_idx_11 = in->mX.mX[11];
  X_idx_12 = in->mX.mX[12];
  X_idx_15 = in->mX.mX[15];
  X_idx_16 = in->mX.mX[16];
  X_idx_22 = in->mX.mX[22];
  X_idx_23 = in->mX.mX[23];
  X_idx_24 = in->mX.mX[24];
  X_idx_25 = in->mX.mX[25];
  X_idx_26 = in->mX.mX[26];
  X_idx_28 = in->mX.mX[28];
  X_idx_29 = in->mX.mX[29];
  X_idx_30 = in->mX.mX[30];
  X_idx_31 = in->mX.mX[31];
  X_idx_33 = in->mX.mX[33];
  X_idx_34 = in->mX.mX[34];
  X_idx_36 = in->mX.mX[36];
  X_idx_38 = in->mX.mX[38];
  X_idx_39 = in->mX.mX[39];
  X_idx_40 = in->mX.mX[40];
  X_idx_41 = in->mX.mX[41];
  X_idx_43 = in->mX.mX[43];
  X_idx_44 = in->mX.mX[44];
  X_idx_45 = in->mX.mX[45];
  X_idx_55 = in->mX.mX[55];
  X_idx_56 = in->mX.mX[56];
  X_idx_59 = in->mX.mX[59];
  X_idx_60 = in->mX.mX[60];
  X_idx_61 = in->mX.mX[61];
  X_idx_62 = in->mX.mX[62];
  X_idx_63 = in->mX.mX[63];
  X_idx_64 = in->mX.mX[64];
  X_idx_66 = in->mX.mX[66];
  X_idx_67 = in->mX.mX[67];
  X_idx_68 = in->mX.mX[68];
  X_idx_69 = in->mX.mX[69];
  X_idx_70 = in->mX.mX[70];
  X_idx_71 = in->mX.mX[71];
  out = out1->mF;
  for (idx = 0ULL; idx < 72ULL; idx++) {
    x[idx] = 0.0;
  }

  x[0ULL] = 0.0;
  t5 = X_idx_26 * 1.0000000000000002E-6;
  x[1ULL] = t5;
  x[2ULL] = 0.0;
  t23 = X_idx_31 * 1.0000000000000002E-6;
  x[3ULL] = t23;
  x[4ULL] = 0.0;
  t41 = X_idx_36 * 1.0000000000000002E-6;
  x[5ULL] = t41;
  x[6ULL] = 0.0;
  X_idx_36 = X_idx_41 * 1.0000000000000002E-6;
  x[7ULL] = X_idx_36;
  x[18ULL] = 6.30901964E-5 - X_idx_22 * 1.0000000000000002E-6;
  x[19ULL] = X_idx_23 - X_idx_24 * 100000.0 * (X_idx_22 * 1.0000000000000002E-6);
  memcpy(&localMode[0], &M[0], 96U);
  X_idx_22 = X_idx_11 * 1.0000000000000002E-6;
  t23 = X_idx_12 * 100000.0;
  X_idx_36 = t23 * t23 + 3785.0949311220775;
  if (X_idx_36 < 0.0) {
    t41 = -sqrt(-X_idx_36);
  } else {
    t41 = sqrt(X_idx_36);
  }

  if (t41 < 0.0) {
    X_idx_41 = -sqrt(-t41);
  } else {
    X_idx_41 = sqrt(t41);
  }

  t5 = t23 * t23 + 3785.0949311220775;
  if (t5 < 0.0) {
    X_idx_31 = -sqrt(-t5);
  } else {
    X_idx_31 = sqrt(t5);
  }

  if (X_idx_31 < 0.0) {
    X_idx_36 = -sqrt(-X_idx_31);
  } else {
    X_idx_36 = sqrt(X_idx_31);
  }

  x[21ULL] = X_idx_22 >= 0.0 ? X_idx_22 - t23 * 6.7473145244466244E-5 /
    (X_idx_36 == 0.0 ? 1.0E-16 : X_idx_36) : X_idx_22 - t23 *
    6.7473145244466244E-5 / (X_idx_41 == 0.0 ? 1.0E-16 : X_idx_41);
  memcpy(&localMode0[0], &M[24], 96U);
  X_idx_36 = X_idx_15 * 1.0000000000000002E-6;
  X_idx_22 = X_idx_16 * 100000.0;
  t5 = X_idx_22 * X_idx_22 + 3785.0949311220775;
  if (t5 < 0.0) {
    X_idx_31 = -sqrt(-t5);
  } else {
    X_idx_31 = sqrt(t5);
  }

  if (X_idx_31 < 0.0) {
    t41 = -sqrt(-X_idx_31);
  } else {
    t41 = sqrt(X_idx_31);
  }

  X_idx_41 = X_idx_22 * X_idx_22 + 3785.0949311220775;
  if (X_idx_41 < 0.0) {
    t23 = -sqrt(-X_idx_41);
  } else {
    t23 = sqrt(X_idx_41);
  }

  if (t23 < 0.0) {
    X_idx_26 = -sqrt(-t23);
  } else {
    X_idx_26 = sqrt(t23);
  }

  x[23ULL] = X_idx_36 >= 0.0 ? X_idx_36 - X_idx_22 * 6.7473145244466244E-5 /
    (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26) : X_idx_36 - X_idx_22 *
    6.7473145244466244E-5 / (t41 == 0.0 ? 1.0E-16 : t41);
  memcpy(&localMode1[0], &M[48], 96U);
  t5 = X_idx_63 * 1.0000000000000002E-6;
  X_idx_26 = X_idx_64 * 100000.0;
  X_idx_31 = X_idx_26 * X_idx_26 + 46247.8416472108;
  if (X_idx_31 < 0.0) {
    X_idx_36 = -sqrt(-X_idx_31);
  } else {
    X_idx_36 = sqrt(X_idx_31);
  }

  if (X_idx_36 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_36);
  } else {
    X_idx_22 = sqrt(X_idx_36);
  }

  t41 = X_idx_26 * X_idx_26 + 46247.8416472108;
  if (t41 < 0.0) {
    X_idx_41 = -sqrt(-t41);
  } else {
    X_idx_41 = sqrt(t41);
  }

  if (X_idx_41 < 0.0) {
    t23 = -sqrt(-X_idx_41);
  } else {
    t23 = sqrt(X_idx_41);
  }

  x[25ULL] = t5 >= 0.0 ? t5 - X_idx_26 * 5.4133803345444954E-5 / (t23 == 0.0 ?
    1.0E-16 : t23) : t5 - X_idx_26 * 5.4133803345444954E-5 / (X_idx_22 == 0.0 ?
    1.0E-16 : X_idx_22);
  memcpy(&localMode2[0], &M[72], 96U);
  X_idx_22 = X_idx_61 * 1.0000000000000002E-6;
  X_idx_31 = X_idx_62 * 100000.0;
  X_idx_36 = X_idx_31 * X_idx_31 + 46247.8416472108;
  if (X_idx_36 < 0.0) {
    t41 = -sqrt(-X_idx_36);
  } else {
    t41 = sqrt(X_idx_36);
  }

  if (t41 < 0.0) {
    X_idx_26 = -sqrt(-t41);
  } else {
    X_idx_26 = sqrt(t41);
  }

  X_idx_41 = X_idx_31 * X_idx_31 + 46247.8416472108;
  if (X_idx_41 < 0.0) {
    t23 = -sqrt(-X_idx_41);
  } else {
    t23 = sqrt(X_idx_41);
  }

  if (t23 < 0.0) {
    t5 = -sqrt(-t23);
  } else {
    t5 = sqrt(t23);
  }

  x[27ULL] = X_idx_22 >= 0.0 ? X_idx_22 - X_idx_31 * 5.4133803345444954E-5 / (t5
    == 0.0 ? 1.0E-16 : t5) : X_idx_22 - X_idx_31 * 5.4133803345444954E-5 /
    (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26);
  memcpy(&localMode3[0], &M[96], 96U);
  X_idx_36 = X_idx_59 * 1.0000000000000002E-6;
  X_idx_22 = X_idx_60 * 100000.0;
  t41 = X_idx_22 * X_idx_22 + 46247.8416472108;
  if (t41 < 0.0) {
    X_idx_41 = -sqrt(-t41);
  } else {
    X_idx_41 = sqrt(t41);
  }

  if (X_idx_41 < 0.0) {
    X_idx_26 = -sqrt(-X_idx_41);
  } else {
    X_idx_26 = sqrt(X_idx_41);
  }

  t23 = X_idx_22 * X_idx_22 + 46247.8416472108;
  if (t23 < 0.0) {
    t5 = -sqrt(-t23);
  } else {
    t5 = sqrt(t23);
  }

  if (t5 < 0.0) {
    X_idx_31 = -sqrt(-t5);
  } else {
    X_idx_31 = sqrt(t5);
  }

  x[29ULL] = X_idx_36 >= 0.0 ? X_idx_36 - X_idx_22 * 5.4133803345444954E-5 /
    (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31) : X_idx_36 - X_idx_22 *
    5.4133803345444954E-5 / (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26);
  memcpy(&localMode4[0], &M[120], 96U);
  t41 = X_idx_70 * 1.0000000000000002E-6;
  X_idx_22 = X_idx_71 * 100000.0;
  X_idx_41 = X_idx_22 * X_idx_22 + 46247.8416472108;
  if (X_idx_41 < 0.0) {
    t23 = -sqrt(-X_idx_41);
  } else {
    t23 = sqrt(X_idx_41);
  }

  if (t23 < 0.0) {
    X_idx_26 = -sqrt(-t23);
  } else {
    X_idx_26 = sqrt(t23);
  }

  t5 = X_idx_22 * X_idx_22 + 46247.8416472108;
  if (t5 < 0.0) {
    X_idx_31 = -sqrt(-t5);
  } else {
    X_idx_31 = sqrt(t5);
  }

  if (X_idx_31 < 0.0) {
    X_idx_36 = -sqrt(-X_idx_31);
  } else {
    X_idx_36 = sqrt(X_idx_31);
  }

  x[34ULL] = t41 >= 0.0 ? t41 - X_idx_22 * 5.4133803345444954E-5 / (X_idx_36 ==
    0.0 ? 1.0E-16 : X_idx_36) : t41 - X_idx_22 * 5.4133803345444954E-5 /
    (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26);
  memcpy(&localMode5[0], &M[144], 96U);
  t41 = X_idx_68 * 1.0000000000000002E-6;
  X_idx_22 = X_idx_69 * 100000.0;
  X_idx_41 = X_idx_22 * X_idx_22 + 46247.8416472108;
  if (X_idx_41 < 0.0) {
    t23 = -sqrt(-X_idx_41);
  } else {
    t23 = sqrt(X_idx_41);
  }

  if (t23 < 0.0) {
    X_idx_26 = -sqrt(-t23);
  } else {
    X_idx_26 = sqrt(t23);
  }

  t5 = X_idx_22 * X_idx_22 + 46247.8416472108;
  if (t5 < 0.0) {
    X_idx_31 = -sqrt(-t5);
  } else {
    X_idx_31 = sqrt(t5);
  }

  if (X_idx_31 < 0.0) {
    X_idx_36 = -sqrt(-X_idx_31);
  } else {
    X_idx_36 = sqrt(X_idx_31);
  }

  x[36ULL] = t41 >= 0.0 ? t41 - X_idx_22 * 5.4133803345444954E-5 / (X_idx_36 ==
    0.0 ? 1.0E-16 : X_idx_36) : t41 - X_idx_22 * 5.4133803345444954E-5 /
    (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26);
  memcpy(&localMode6[0], &M[168], 96U);
  t5 = X_idx_66 * 1.0000000000000002E-6;
  X_idx_22 = X_idx_67 * 100000.0;
  X_idx_41 = X_idx_22 * X_idx_22 + 46247.8416472108;
  if (X_idx_41 < 0.0) {
    t23 = -sqrt(-X_idx_41);
  } else {
    t23 = sqrt(X_idx_41);
  }

  if (t23 < 0.0) {
    X_idx_26 = -sqrt(-t23);
  } else {
    X_idx_26 = sqrt(t23);
  }

  X_idx_41 = X_idx_22 * X_idx_22 + 46247.8416472108;
  if (X_idx_41 < 0.0) {
    X_idx_41 = -sqrt(-X_idx_41);
  } else {
    X_idx_41 = sqrt(X_idx_41);
  }

  if (X_idx_41 < 0.0) {
    X_idx_41 = -sqrt(-X_idx_41);
  } else {
    X_idx_41 = sqrt(X_idx_41);
  }

  x[38ULL] = t5 >= 0.0 ? t5 - X_idx_22 * 5.4133803345444954E-5 / (X_idx_41 ==
    0.0 ? 1.0E-16 : X_idx_41) : t5 - X_idx_22 * 5.4133803345444954E-5 /
    (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26);
  t5 = X_idx_29 * 1.0000000000000002E-6;
  X_idx_31 = t5 >= 0.0 ? 1.0 : -1.0;
  X_idx_36 = 7.6751803075053254E+6;
  X_idx_26 = t5 * X_idx_31 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  X_idx_41 = 6.9 / (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26) +
    1.4237685041404136E-6;
  X_idx_41 = log10(X_idx_41 <= 2.5E-308 ? 2.5E-308 : X_idx_41) * -1.8;
  X_idx_41 *= X_idx_41;
  X_idx_41 = (X_idx_26 <= 200.0 ? 0.0 : 1.0 / (X_idx_41 == 0.0 ? 1.0E-16 :
    X_idx_41)) * 2.024 / 0.038099999999999995 / 1.2998093762025389E-6 / 2.0;
  x[43ULL] = X_idx_28 * 100000.0 - (X_idx_26 <= 2000.0 ? X_idx_36 * t5 :
    X_idx_26 <= 4000.0 ? X_idx_36 * t5 + (X_idx_26 <= 2000.0 ? 0.0 : X_idx_26 <=
    4000.0 ? (X_idx_26 - 2000.0) / 2000.0 * ((X_idx_26 - 2000.0) / 2000.0) * 3.0
    - (X_idx_26 - 2000.0) / 2000.0 * ((X_idx_26 - 2000.0) / 2000.0) * ((X_idx_26
    - 2000.0) / 2000.0) * 2.0 : 1.0) * (X_idx_41 * t5 * t5 * X_idx_31 * 887.1 -
    X_idx_36 * t5) : X_idx_41 * t5 * t5 * X_idx_31 * 887.1);
  X_idx_22 = X_idx_11 * 1.0000000000000002E-6;
  t41 = X_idx_22 >= 0.0 ? 1.0 : -1.0;
  X_idx_41 = 7.6751803075053254E+6;
  t23 = X_idx_22 * t41 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t5 = 6.9 / (t23 == 0.0 ? 1.0E-16 : t23) + 1.4237685041404136E-6;
  X_idx_31 = log10(t5 <= 2.5E-308 ? 2.5E-308 : t5) * -1.8;
  X_idx_36 = X_idx_31 * X_idx_31;
  X_idx_26 = (t23 <= 200.0 ? 0.0 : 1.0 / (X_idx_36 == 0.0 ? 1.0E-16 : X_idx_36))
    * 2.024 / 0.038099999999999995 / 1.2998093762025389E-6 / 2.0;
  x[46ULL] = X_idx_30 * 100000.0 - (t23 <= 2000.0 ? X_idx_41 * X_idx_22 : t23 <=
    4000.0 ? X_idx_41 * X_idx_22 + (t23 <= 2000.0 ? 0.0 : t23 <= 4000.0 ? (t23 -
    2000.0) / 2000.0 * ((t23 - 2000.0) / 2000.0) * 3.0 - (t23 - 2000.0) / 2000.0
    * ((t23 - 2000.0) / 2000.0) * ((t23 - 2000.0) / 2000.0) * 2.0 : 1.0) *
    (X_idx_26 * X_idx_22 * X_idx_22 * t41 * 887.1 - X_idx_41 * X_idx_22) :
    X_idx_26 * X_idx_22 * X_idx_22 * t41 * 887.1);
  X_idx_41 = X_idx_11 * 1.0000000000000002E-6;
  t23 = X_idx_41 >= 0.0 ? 1.0 : -1.0;
  X_idx_22 = 4.7856114367943285E+6;
  t41 = X_idx_41 * t23 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t5 = 6.9 / (t41 == 0.0 ? 1.0E-16 : t41) + 1.4237685041404136E-6;
  X_idx_31 = log10(t5 <= 2.5E-308 ? 2.5E-308 : t5) * -1.8;
  X_idx_36 = X_idx_31 * X_idx_31;
  X_idx_26 = (t41 <= 200.0 ? 0.0 : 1.0 / (X_idx_36 == 0.0 ? 1.0E-16 : X_idx_36))
    * 1.262 / 0.038099999999999995 / 1.2998093762025389E-6 / 2.0;
  x[49ULL] = X_idx_33 * 100000.0 - (t41 <= 2000.0 ? X_idx_22 * X_idx_41 : t41 <=
    4000.0 ? X_idx_22 * X_idx_41 + (t41 <= 2000.0 ? 0.0 : t41 <= 4000.0 ? (t41 -
    2000.0) / 2000.0 * ((t41 - 2000.0) / 2000.0) * 3.0 - (t41 - 2000.0) / 2000.0
    * ((t41 - 2000.0) / 2000.0) * ((t41 - 2000.0) / 2000.0) * 2.0 : 1.0) *
    (X_idx_26 * X_idx_41 * X_idx_41 * t23 * 887.1 - X_idx_22 * X_idx_41) :
    X_idx_26 * X_idx_41 * X_idx_41 * t23 * 887.1);
  X_idx_22 = X_idx_15 * 1.0000000000000002E-6;
  t41 = X_idx_22 >= 0.0 ? 1.0 : -1.0;
  t5 = 4.7856114367943285E+6;
  X_idx_31 = X_idx_22 * t41 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  X_idx_36 = 6.9 / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31) +
    1.4237685041404136E-6;
  X_idx_26 = log10(X_idx_36 <= 2.5E-308 ? 2.5E-308 : X_idx_36) * -1.8;
  X_idx_41 = X_idx_26 * X_idx_26;
  t23 = (X_idx_31 <= 200.0 ? 0.0 : 1.0 / (X_idx_41 == 0.0 ? 1.0E-16 : X_idx_41))
    * 1.262 / 0.038099999999999995 / 1.2998093762025389E-6 / 2.0;
  x[52ULL] = X_idx_34 * 100000.0 - (X_idx_31 <= 2000.0 ? t5 * X_idx_22 :
    X_idx_31 <= 4000.0 ? t5 * X_idx_22 + (X_idx_31 <= 2000.0 ? 0.0 : X_idx_31 <=
    4000.0 ? (X_idx_31 - 2000.0) / 2000.0 * ((X_idx_31 - 2000.0) / 2000.0) * 3.0
    - (X_idx_31 - 2000.0) / 2000.0 * ((X_idx_31 - 2000.0) / 2000.0) * ((X_idx_31
    - 2000.0) / 2000.0) * 2.0 : 1.0) * (t23 * X_idx_22 * X_idx_22 * t41 * 887.1
    - t5 * X_idx_22) : t23 * X_idx_22 * X_idx_22 * t41 * 887.1);
  X_idx_22 = X_idx_15 * 1.0000000000000002E-6;
  t41 = X_idx_22 >= 0.0 ? 1.0 : -1.0;
  X_idx_36 = 7.6751803075053254E+6;
  X_idx_26 = X_idx_22 * t41 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  X_idx_41 = 6.9 / (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26) +
    1.4237685041404136E-6;
  t23 = log10(X_idx_41 <= 2.5E-308 ? 2.5E-308 : X_idx_41) * -1.8;
  t5 = t23 * t23;
  X_idx_31 = (X_idx_26 <= 200.0 ? 0.0 : 1.0 / (t5 == 0.0 ? 1.0E-16 : t5)) *
    2.024 / 0.038099999999999995 / 1.2998093762025389E-6 / 2.0;
  x[55ULL] = X_idx_38 * 100000.0 - (X_idx_26 <= 2000.0 ? X_idx_36 * X_idx_22 :
    X_idx_26 <= 4000.0 ? X_idx_36 * X_idx_22 + (X_idx_26 <= 2000.0 ? 0.0 :
    X_idx_26 <= 4000.0 ? (X_idx_26 - 2000.0) / 2000.0 * ((X_idx_26 - 2000.0) /
    2000.0) * 3.0 - (X_idx_26 - 2000.0) / 2000.0 * ((X_idx_26 - 2000.0) / 2000.0)
    * ((X_idx_26 - 2000.0) / 2000.0) * 2.0 : 1.0) * (X_idx_31 * X_idx_22 *
    X_idx_22 * t41 * 887.1 - X_idx_36 * X_idx_22) : X_idx_31 * X_idx_22 *
    X_idx_22 * t41 * 887.1);
  X_idx_41 = X_idx_40 * 1.0000000000000002E-6;
  t23 = X_idx_41 >= 0.0 ? 1.0 : -1.0;
  X_idx_22 = 7.6751803075053254E+6;
  t41 = X_idx_41 * t23 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t5 = 6.9 / (t41 == 0.0 ? 1.0E-16 : t41) + 1.4237685041404136E-6;
  X_idx_31 = log10(t5 <= 2.5E-308 ? 2.5E-308 : t5) * -1.8;
  X_idx_36 = X_idx_31 * X_idx_31;
  X_idx_26 = (t41 <= 200.0 ? 0.0 : 1.0 / (X_idx_36 == 0.0 ? 1.0E-16 : X_idx_36))
    * 2.024 / 0.038099999999999995 / 1.2998093762025389E-6 / 2.0;
  x[58ULL] = X_idx_39 * 100000.0 - (t41 <= 2000.0 ? X_idx_22 * X_idx_41 : t41 <=
    4000.0 ? X_idx_22 * X_idx_41 + (t41 <= 2000.0 ? 0.0 : t41 <= 4000.0 ? (t41 -
    2000.0) / 2000.0 * ((t41 - 2000.0) / 2000.0) * 3.0 - (t41 - 2000.0) / 2000.0
    * ((t41 - 2000.0) / 2000.0) * ((t41 - 2000.0) / 2000.0) * 2.0 : 1.0) *
    (X_idx_26 * X_idx_41 * X_idx_41 * t23 * 887.1 - X_idx_22 * X_idx_41) :
    X_idx_26 * X_idx_41 * X_idx_41 * t23 * 887.1);
  X_idx_36 = X_idx_40 * 1.0000000000000002E-6;
  X_idx_26 = X_idx_36 >= 0.0 ? 1.0 : -1.0;
  X_idx_41 = 7.6751803075053254E+6;
  t23 = X_idx_36 * X_idx_26 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t5 = 6.9 / (t23 == 0.0 ? 1.0E-16 : t23) + 1.4237685041404136E-6;
  X_idx_31 = log10(t5 <= 2.5E-308 ? 2.5E-308 : t5) * -1.8;
  t5 = X_idx_31 * X_idx_31;
  t5 = (t23 <= 200.0 ? 0.0 : 1.0 / (t5 == 0.0 ? 1.0E-16 : t5)) * 2.024 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0;
  x[61ULL] = X_idx_43 * 100000.0 - (t23 <= 2000.0 ? X_idx_41 * X_idx_36 : t23 <=
    4000.0 ? X_idx_41 * X_idx_36 + (t23 <= 2000.0 ? 0.0 : t23 <= 4000.0 ? (t23 -
    2000.0) / 2000.0 * ((t23 - 2000.0) / 2000.0) * 3.0 - (t23 - 2000.0) / 2000.0
    * ((t23 - 2000.0) / 2000.0) * ((t23 - 2000.0) / 2000.0) * 2.0 : 1.0) * (t5 *
    X_idx_36 * X_idx_36 * X_idx_26 * 887.1 - X_idx_41 * X_idx_36) : t5 *
    X_idx_36 * X_idx_36 * X_idx_26 * 887.1);
  X_idx_36 = X_idx_45 * 1.0000000000000002E-6;
  X_idx_26 = X_idx_36 >= 0.0 ? 1.0 : -1.0;
  X_idx_41 = 7.6751803075053254E+6;
  t23 = X_idx_36 * X_idx_26 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t5 = 6.9 / (t23 == 0.0 ? 1.0E-16 : t23) + 1.4237685041404136E-6;
  X_idx_31 = log10(t5 <= 2.5E-308 ? 2.5E-308 : t5) * -1.8;
  t5 = X_idx_31 * X_idx_31;
  t5 = (t23 <= 200.0 ? 0.0 : 1.0 / (t5 == 0.0 ? 1.0E-16 : t5)) * 2.024 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0;
  x[64ULL] = X_idx_44 * 100000.0 - (t23 <= 2000.0 ? X_idx_41 * X_idx_36 : t23 <=
    4000.0 ? X_idx_41 * X_idx_36 + (t23 <= 2000.0 ? 0.0 : t23 <= 4000.0 ? (t23 -
    2000.0) / 2000.0 * ((t23 - 2000.0) / 2000.0) * 3.0 - (t23 - 2000.0) / 2000.0
    * ((t23 - 2000.0) / 2000.0) * ((t23 - 2000.0) / 2000.0) * 2.0 : 1.0) * (t5 *
    X_idx_36 * X_idx_36 * X_idx_26 * 887.1 - X_idx_41 * X_idx_36) : t5 *
    X_idx_36 * X_idx_36 * X_idx_26 * 887.1);
  X_idx_31 = X_idx_56 * 100000.0;
  t5 = X_idx_31 * X_idx_31 + 11.290976964651074;
  if (t5 < 0.0) {
    t5 = -sqrt(-t5);
  } else {
    t5 = sqrt(t5);
  }

  if (t5 < 0.0) {
    t5 = -sqrt(-t5);
  } else {
    t5 = sqrt(t5);
  }

  x[68ULL] = X_idx_55 * 1.0000000000000002E-6 - X_idx_31 * 5.4133803345444954E-5
    / (t5 == 0.0 ? 1.0E-16 : t5);
  x[69ULL] = X_idx_25 * 100000.0;
  lv_[0] = 1.0;
  lv_[1] = 999999.99999999988;
  lv_[2] = 1.0;
  lv_[3] = 999999.99999999988;
  lv_[4] = 1.0;
  lv_[5] = 999999.99999999988;
  lv_[6] = 1.0;
  lv_[7] = 999999.99999999988;
  lv_[8] = 999999.99999999988;
  lv_[9] = 1.0E-5;
  lv_[10] = 1.0E-5;
  lv_[11] = 1.0E-5;
  lv_[12] = 1.0;
  lv_[13] = 1.0E-5;
  lv_[14] = 1.0E-5;
  lv_[15] = 1.0;
  lv_[16] = 1.0E-5;
  lv_[17] = 1.0E-5;
  lv_[18] = 999999.99999999988;
  lv_[19] = 1.0;
  lv_[20] = 1.0E-5;
  lv_[21] = 1.162487358622446;
  lv_[22] = 1.0E-5;
  lv_[23] = 1.162487358622446;
  lv_[24] = 1.0E-5;
  lv_[25] = 2.7089708162915591;
  lv_[26] = 1.0E-5;
  lv_[27] = 2.7089708162915591;
  lv_[28] = 1.0E-5;
  lv_[29] = 2.7089708162915591;
  lv_[30] = 999999.99999999988;
  lv_[31] = 999999.99999999988;
  lv_[32] = 999999.99999999988;
  lv_[33] = 1.0E-5;
  lv_[34] = 2.7089708162915591;
  lv_[35] = 1.0E-5;
  lv_[36] = 2.7089708162915591;
  lv_[37] = 1.0E-5;
  lv_[38] = 2.7089708162915591;
  lv_[39] = 999999.99999999988;
  lv_[40] = 999999.99999999988;
  lv_[41] = 999999.99999999988;
  lv_[42] = 1.0E-5;
  lv_[43] = 1.0E-5;
  lv_[44] = 1.0E-5;
  lv_[45] = 1.0E-5;
  lv_[46] = 1.0E-5;
  lv_[47] = 999999.99999999988;
  lv_[48] = 1.0E-5;
  lv_[49] = 1.0E-5;
  lv_[50] = 1.0E-5;
  lv_[51] = 1.0E-5;
  lv_[52] = 1.0E-5;
  lv_[53] = 999999.99999999988;
  lv_[54] = 1.0E-5;
  lv_[55] = 1.0E-5;
  lv_[56] = 1.0E-5;
  lv_[57] = 1.0E-5;
  lv_[58] = 1.0E-5;
  lv_[59] = 999999.99999999988;
  lv_[60] = 1.0E-5;
  lv_[61] = 1.0E-5;
  lv_[62] = 1.0E-5;
  lv_[63] = 1.0E-5;
  lv_[64] = 1.0E-5;
  lv_[65] = 999999.99999999988;
  lv_[66] = 999999.99999999988;
  lv_[67] = 1.0E-5;
  lv_[68] = 0.33862135203644489;
  lv_[69] = 1.0E-5;
  lv_[70] = 1.0;
  lv_[71] = 999999.99999999988;
  for (idx = 0ULL; idx < 72ULL; idx++) {
    out.mX[idx] = lv_[idx] * x[idx];
  }

  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmBoolVector out;
  boolean_T x[72];
  size_t idx;
  (void)in;
  out = out1->mVMF;
  for (idx = 0ULL; idx < 72ULL; idx++) {
    x[idx] = false;
  }

  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = x[8];
  out.mX[9] = x[9];
  out.mX[10] = x[10];
  out.mX[11] = x[11];
  out.mX[12] = x[12];
  out.mX[13] = x[13];
  out.mX[14] = x[14];
  out.mX[15] = x[15];
  out.mX[16] = x[16];
  out.mX[17] = x[17];
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = x[20];
  out.mX[21] = true;
  out.mX[22] = x[22];
  out.mX[23] = true;
  out.mX[24] = x[24];
  out.mX[25] = true;
  out.mX[26] = x[26];
  out.mX[27] = true;
  out.mX[28] = x[28];
  out.mX[29] = true;
  out.mX[30] = x[30];
  out.mX[31] = x[31];
  out.mX[32] = x[32];
  out.mX[33] = x[33];
  out.mX[34] = true;
  out.mX[35] = x[35];
  out.mX[36] = true;
  out.mX[37] = x[37];
  out.mX[38] = true;
  out.mX[39] = x[39];
  out.mX[40] = x[40];
  out.mX[41] = x[41];
  out.mX[42] = x[42];
  out.mX[43] = true;
  out.mX[44] = x[44];
  out.mX[45] = x[45];
  out.mX[46] = true;
  out.mX[47] = x[47];
  out.mX[48] = x[48];
  out.mX[49] = true;
  out.mX[50] = x[50];
  out.mX[51] = x[51];
  out.mX[52] = true;
  out.mX[53] = x[53];
  out.mX[54] = x[54];
  out.mX[55] = true;
  out.mX[56] = x[56];
  out.mX[57] = x[57];
  out.mX[58] = true;
  out.mX[59] = x[59];
  out.mX[60] = x[60];
  out.mX[61] = true;
  out.mX[62] = x[62];
  out.mX[63] = x[63];
  out.mX[64] = true;
  out.mX[65] = x[65];
  out.mX[66] = x[66];
  out.mX[67] = x[67];
  out.mX[68] = true;
  out.mX[69] = true;
  out.mX[70] = x[70];
  out.mX[71] = x[71];
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmBoolVector out;
  boolean_T x[72];
  size_t idx;
  (void)in;
  out = out1->mSLF;
  for (idx = 0ULL; idx < 72ULL; idx++) {
    x[idx] = false;
  }

  out.mX[0] = x[0];
  out.mX[1] = x[1];
  out.mX[2] = x[2];
  out.mX[3] = x[3];
  out.mX[4] = x[4];
  out.mX[5] = x[5];
  out.mX[6] = x[6];
  out.mX[7] = x[7];
  out.mX[8] = x[8];
  out.mX[9] = x[9];
  out.mX[10] = x[10];
  out.mX[11] = x[11];
  out.mX[12] = x[12];
  out.mX[13] = x[13];
  out.mX[14] = x[14];
  out.mX[15] = x[15];
  out.mX[16] = x[16];
  out.mX[17] = x[17];
  out.mX[18] = x[18];
  out.mX[19] = x[19];
  out.mX[20] = x[20];
  out.mX[21] = x[21];
  out.mX[22] = x[22];
  out.mX[23] = x[23];
  out.mX[24] = x[24];
  out.mX[25] = x[25];
  out.mX[26] = x[26];
  out.mX[27] = x[27];
  out.mX[28] = x[28];
  out.mX[29] = x[29];
  out.mX[30] = x[30];
  out.mX[31] = x[31];
  out.mX[32] = x[32];
  out.mX[33] = x[33];
  out.mX[34] = x[34];
  out.mX[35] = x[35];
  out.mX[36] = x[36];
  out.mX[37] = x[37];
  out.mX[38] = x[38];
  out.mX[39] = x[39];
  out.mX[40] = x[40];
  out.mX[41] = x[41];
  out.mX[42] = x[42];
  out.mX[43] = x[43];
  out.mX[44] = x[44];
  out.mX[45] = x[45];
  out.mX[46] = x[46];
  out.mX[47] = x[47];
  out.mX[48] = x[48];
  out.mX[49] = x[49];
  out.mX[50] = x[50];
  out.mX[51] = x[51];
  out.mX[52] = x[52];
  out.mX[53] = x[53];
  out.mX[54] = x[54];
  out.mX[55] = x[55];
  out.mX[56] = x[56];
  out.mX[57] = x[57];
  out.mX[58] = x[58];
  out.mX[59] = x[59];
  out.mX[60] = x[60];
  out.mX[61] = x[61];
  out.mX[62] = x[62];
  out.mX[63] = x[63];
  out.mX[64] = x[64];
  out.mX[65] = x[65];
  out.mX[66] = x[66];
  out.mX[67] = x[67];
  out.mX[68] = x[68];
  out.mX[69] = x[69];
  out.mX[70] = x[70];
  out.mX[71] = x[71];
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_dxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mDXF_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 2;
  out.mJc[2ULL] = 4;
  out.mJc[3ULL] = 6;
  out.mJc[4ULL] = 8;
  out.mJc[5ULL] = 10;
  out.mJc[6ULL] = 12;
  out.mJc[7ULL] = 14;
  out.mJc[8ULL] = 16;
  out.mJc[9ULL] = 16;
  out.mJc[10ULL] = 16;
  out.mJc[11ULL] = 16;
  out.mJc[12ULL] = 19;
  out.mJc[13ULL] = 20;
  out.mJc[14ULL] = 20;
  out.mJc[15ULL] = 20;
  out.mJc[16ULL] = 23;
  out.mJc[17ULL] = 24;
  out.mJc[18ULL] = 24;
  out.mJc[19ULL] = 24;
  out.mJc[20ULL] = 24;
  out.mJc[21ULL] = 24;
  out.mJc[22ULL] = 24;
  out.mJc[23ULL] = 26;
  out.mJc[24ULL] = 27;
  out.mJc[25ULL] = 28;
  out.mJc[26ULL] = 29;
  out.mJc[27ULL] = 30;
  out.mJc[28ULL] = 30;
  out.mJc[29ULL] = 31;
  out.mJc[30ULL] = 32;
  out.mJc[31ULL] = 33;
  out.mJc[32ULL] = 34;
  out.mJc[33ULL] = 34;
  out.mJc[34ULL] = 35;
  out.mJc[35ULL] = 36;
  out.mJc[36ULL] = 36;
  out.mJc[37ULL] = 37;
  out.mJc[38ULL] = 37;
  out.mJc[39ULL] = 38;
  out.mJc[40ULL] = 39;
  out.mJc[41ULL] = 41;
  out.mJc[42ULL] = 42;
  out.mJc[43ULL] = 42;
  out.mJc[44ULL] = 43;
  out.mJc[45ULL] = 44;
  out.mJc[46ULL] = 45;
  out.mJc[47ULL] = 45;
  out.mJc[48ULL] = 45;
  out.mJc[49ULL] = 45;
  out.mJc[50ULL] = 45;
  out.mJc[51ULL] = 45;
  out.mJc[52ULL] = 45;
  out.mJc[53ULL] = 45;
  out.mJc[54ULL] = 45;
  out.mJc[55ULL] = 45;
  out.mJc[56ULL] = 46;
  out.mJc[57ULL] = 47;
  out.mJc[58ULL] = 47;
  out.mJc[59ULL] = 47;
  out.mJc[60ULL] = 48;
  out.mJc[61ULL] = 49;
  out.mJc[62ULL] = 50;
  out.mJc[63ULL] = 51;
  out.mJc[64ULL] = 52;
  out.mJc[65ULL] = 53;
  out.mJc[66ULL] = 53;
  out.mJc[67ULL] = 54;
  out.mJc[68ULL] = 55;
  out.mJc[69ULL] = 56;
  out.mJc[70ULL] = 57;
  out.mJc[71ULL] = 58;
  out.mJc[72ULL] = 59;
  out.mIr[0ULL] = 0;
  out.mIr[1ULL] = 1;
  out.mIr[2ULL] = 0;
  out.mIr[3ULL] = 1;
  out.mIr[4ULL] = 2;
  out.mIr[5ULL] = 3;
  out.mIr[6ULL] = 2;
  out.mIr[7ULL] = 3;
  out.mIr[8ULL] = 4;
  out.mIr[9ULL] = 5;
  out.mIr[10ULL] = 4;
  out.mIr[11ULL] = 5;
  out.mIr[12ULL] = 6;
  out.mIr[13ULL] = 7;
  out.mIr[14ULL] = 6;
  out.mIr[15ULL] = 7;
  out.mIr[16ULL] = 21;
  out.mIr[17ULL] = 46;
  out.mIr[18ULL] = 49;
  out.mIr[19ULL] = 21;
  out.mIr[20ULL] = 23;
  out.mIr[21ULL] = 52;
  out.mIr[22ULL] = 55;
  out.mIr[23ULL] = 23;
  out.mIr[24ULL] = 18;
  out.mIr[25ULL] = 19;
  out.mIr[26ULL] = 19;
  out.mIr[27ULL] = 19;
  out.mIr[28ULL] = 69;
  out.mIr[29ULL] = 1;
  out.mIr[30ULL] = 43;
  out.mIr[31ULL] = 43;
  out.mIr[32ULL] = 46;
  out.mIr[33ULL] = 3;
  out.mIr[34ULL] = 49;
  out.mIr[35ULL] = 52;
  out.mIr[36ULL] = 5;
  out.mIr[37ULL] = 55;
  out.mIr[38ULL] = 58;
  out.mIr[39ULL] = 58;
  out.mIr[40ULL] = 61;
  out.mIr[41ULL] = 7;
  out.mIr[42ULL] = 61;
  out.mIr[43ULL] = 64;
  out.mIr[44ULL] = 64;
  out.mIr[45ULL] = 68;
  out.mIr[46ULL] = 68;
  out.mIr[47ULL] = 29;
  out.mIr[48ULL] = 29;
  out.mIr[49ULL] = 27;
  out.mIr[50ULL] = 27;
  out.mIr[51ULL] = 25;
  out.mIr[52ULL] = 25;
  out.mIr[53ULL] = 38;
  out.mIr[54ULL] = 38;
  out.mIr[55ULL] = 36;
  out.mIr[56ULL] = 36;
  out.mIr[57ULL] = 34;
  out.mIr[58ULL] = 34;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_dxf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmRealVector out;
  int32_T M[204];
  real_T x[60];
  size_t idx;
  int32_T localMode[24];
  int32_T localMode0[24];
  int32_T localMode1[24];
  int32_T localMode2[24];
  int32_T localMode3[24];
  int32_T localMode4[24];
  int32_T localMode5[24];
  int32_T localMode6[24];
  real_T x0[60];
  size_t lv_[59];
  size_t lv_0[59];
  real_T lv_1[59];
  real_T lv_2[72];
  real_T lv_3[72];
  size_t lv_4[73];
  size_t lv_5[60];
  size_t id2_;
  real_T t134;
  real_T t135;
  real_T t137;
  real_T t138;
  boolean_T t616;
  real_T t879;
  real_T t880;
  real_T t881;
  real_T t882;
  real_T t984;
  real_T t987;
  real_T X_idx_24;
  real_T X_idx_22;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_63;
  real_T X_idx_64;
  real_T X_idx_61;
  real_T X_idx_62;
  real_T X_idx_59;
  real_T X_idx_60;
  real_T X_idx_70;
  real_T X_idx_71;
  real_T X_idx_68;
  real_T X_idx_69;
  real_T X_idx_66;
  real_T X_idx_67;
  real_T X_idx_29;
  real_T X_idx_40;
  real_T X_idx_45;
  real_T X_idx_56;
  int32_T in_idx_0;
  int32_T in_idx_1;
  int32_T in_idx_2;
  int32_T in_idx_3;
  int32_T in_idx_4;
  int32_T in_idx_5;
  int32_T in_idx_6;
  int32_T in_idx_7;
  int32_T in_idx_8;
  int32_T in_idx_9;
  int32_T in_idx_10;
  int32_T in_idx_11;
  int32_T in_idx_12;
  int32_T in_idx_13;
  int32_T in_idx_14;
  int32_T in_idx_15;
  int32_T in_idx_16;
  int32_T in_idx_17;
  int32_T in_idx_18;
  int32_T in_idx_19;
  int32_T in_idx_20;
  int32_T in_idx_21;
  int32_T in_idx_22;
  int32_T in_idx_23;
  int32_T in_idx_24;
  int32_T in_idx_25;
  int32_T in_idx_26;
  int32_T in_idx_27;
  int32_T in_idx_28;
  int32_T in_idx_29;
  int32_T in_idx_30;
  int32_T in_idx_31;
  int32_T in_idx_32;
  int32_T in_idx_33;
  int32_T in_idx_34;
  int32_T in_idx_35;
  int32_T in_idx_36;
  int32_T in_idx_37;
  int32_T in_idx_38;
  int32_T in_idx_39;
  int32_T in_idx_40;
  int32_T in_idx_41;
  int32_T in_idx_42;
  int32_T in_idx_43;
  int32_T in_idx_44;
  int32_T in_idx_45;
  int32_T in_idx_46;
  int32_T in_idx_47;
  int32_T in_idx_48;
  int32_T in_idx_49;
  int32_T in_idx_50;
  int32_T in_idx_51;
  int32_T in_idx_52;
  int32_T in_idx_53;
  int32_T in_idx_54;
  int32_T in_idx_55;
  int32_T in_idx_56;
  int32_T in_idx_57;
  int32_T in_idx_58;
  int32_T in_idx_59;
  int32_T in_idx_60;
  int32_T in_idx_61;
  int32_T in_idx_62;
  int32_T in_idx_63;
  int32_T in_idx_64;
  int32_T in_idx_65;
  int32_T in_idx_66;
  int32_T in_idx_67;
  int32_T in_idx_68;
  int32_T in_idx_69;
  int32_T in_idx_70;
  int32_T in_idx_71;
  int32_T in_idx_72;
  int32_T in_idx_73;
  int32_T in_idx_74;
  int32_T in_idx_75;
  int32_T in_idx_76;
  int32_T in_idx_77;
  int32_T in_idx_78;
  int32_T in_idx_79;
  int32_T in_idx_80;
  int32_T in_idx_81;
  int32_T in_idx_82;
  int32_T in_idx_83;
  int32_T in_idx_84;
  int32_T in_idx_85;
  int32_T in_idx_86;
  int32_T in_idx_87;
  int32_T in_idx_88;
  int32_T in_idx_89;
  int32_T in_idx_90;
  int32_T in_idx_91;
  int32_T in_idx_92;
  int32_T in_idx_93;
  int32_T in_idx_94;
  int32_T in_idx_95;
  int32_T in_idx_96;
  int32_T in_idx_97;
  int32_T in_idx_98;
  int32_T in_idx_99;
  int32_T in_idx_100;
  int32_T in_idx_101;
  int32_T in_idx_102;
  int32_T in_idx_103;
  int32_T in_idx_104;
  int32_T in_idx_105;
  int32_T in_idx_106;
  int32_T in_idx_107;
  int32_T in_idx_108;
  int32_T in_idx_109;
  int32_T in_idx_110;
  int32_T in_idx_111;
  int32_T in_idx_112;
  int32_T in_idx_113;
  int32_T in_idx_114;
  int32_T in_idx_115;
  int32_T in_idx_116;
  int32_T in_idx_117;
  int32_T in_idx_118;
  int32_T in_idx_119;
  int32_T in_idx_120;
  int32_T in_idx_121;
  int32_T in_idx_122;
  int32_T in_idx_123;
  int32_T in_idx_124;
  int32_T in_idx_125;
  int32_T in_idx_126;
  int32_T in_idx_127;
  int32_T in_idx_128;
  int32_T in_idx_129;
  int32_T in_idx_130;
  int32_T in_idx_131;
  int32_T in_idx_132;
  int32_T in_idx_133;
  int32_T in_idx_134;
  int32_T in_idx_135;
  int32_T in_idx_136;
  int32_T in_idx_137;
  int32_T in_idx_138;
  int32_T in_idx_139;
  int32_T in_idx_140;
  int32_T in_idx_141;
  int32_T in_idx_142;
  int32_T in_idx_143;
  int32_T in_idx_144;
  int32_T in_idx_145;
  int32_T in_idx_146;
  int32_T in_idx_147;
  int32_T in_idx_148;
  int32_T in_idx_149;
  int32_T in_idx_150;
  int32_T in_idx_151;
  int32_T in_idx_152;
  int32_T in_idx_153;
  int32_T in_idx_154;
  int32_T in_idx_155;
  int32_T in_idx_156;
  int32_T in_idx_157;
  int32_T in_idx_158;
  int32_T in_idx_159;
  int32_T in_idx_160;
  int32_T in_idx_161;
  int32_T in_idx_162;
  int32_T in_idx_163;
  int32_T in_idx_164;
  int32_T in_idx_165;
  int32_T in_idx_166;
  int32_T in_idx_167;
  int32_T in_idx_168;
  int32_T in_idx_169;
  int32_T in_idx_170;
  int32_T in_idx_171;
  int32_T in_idx_172;
  int32_T in_idx_173;
  int32_T in_idx_174;
  int32_T in_idx_175;
  int32_T in_idx_176;
  int32_T in_idx_177;
  int32_T in_idx_178;
  int32_T in_idx_179;
  int32_T in_idx_180;
  int32_T in_idx_181;
  int32_T in_idx_182;
  int32_T in_idx_183;
  int32_T in_idx_184;
  int32_T in_idx_185;
  int32_T in_idx_186;
  int32_T in_idx_187;
  int32_T in_idx_188;
  int32_T in_idx_189;
  int32_T in_idx_190;
  int32_T in_idx_191;
  int32_T in_idx_192;
  int32_T in_idx_193;
  int32_T in_idx_194;
  int32_T in_idx_195;
  int32_T in_idx_196;
  int32_T in_idx_197;
  int32_T in_idx_198;
  int32_T in_idx_199;
  int32_T in_idx_200;
  int32_T in_idx_201;
  int32_T in_idx_202;
  int32_T in_idx_203;
  in_idx_0 = in->mM.mX[0];
  in_idx_1 = in->mM.mX[1];
  in_idx_2 = in->mM.mX[2];
  in_idx_3 = in->mM.mX[3];
  in_idx_4 = in->mM.mX[4];
  in_idx_5 = in->mM.mX[5];
  in_idx_6 = in->mM.mX[6];
  in_idx_7 = in->mM.mX[7];
  in_idx_8 = in->mM.mX[8];
  in_idx_9 = in->mM.mX[9];
  in_idx_10 = in->mM.mX[10];
  in_idx_11 = in->mM.mX[11];
  in_idx_12 = in->mM.mX[12];
  in_idx_13 = in->mM.mX[13];
  in_idx_14 = in->mM.mX[14];
  in_idx_15 = in->mM.mX[15];
  in_idx_16 = in->mM.mX[16];
  in_idx_17 = in->mM.mX[17];
  in_idx_18 = in->mM.mX[18];
  in_idx_19 = in->mM.mX[19];
  in_idx_20 = in->mM.mX[20];
  in_idx_21 = in->mM.mX[21];
  in_idx_22 = in->mM.mX[22];
  in_idx_23 = in->mM.mX[23];
  in_idx_24 = in->mM.mX[24];
  in_idx_25 = in->mM.mX[25];
  in_idx_26 = in->mM.mX[26];
  in_idx_27 = in->mM.mX[27];
  in_idx_28 = in->mM.mX[28];
  in_idx_29 = in->mM.mX[29];
  in_idx_30 = in->mM.mX[30];
  in_idx_31 = in->mM.mX[31];
  in_idx_32 = in->mM.mX[32];
  in_idx_33 = in->mM.mX[33];
  in_idx_34 = in->mM.mX[34];
  in_idx_35 = in->mM.mX[35];
  in_idx_36 = in->mM.mX[36];
  in_idx_37 = in->mM.mX[37];
  in_idx_38 = in->mM.mX[38];
  in_idx_39 = in->mM.mX[39];
  in_idx_40 = in->mM.mX[40];
  in_idx_41 = in->mM.mX[41];
  in_idx_42 = in->mM.mX[42];
  in_idx_43 = in->mM.mX[43];
  in_idx_44 = in->mM.mX[44];
  in_idx_45 = in->mM.mX[45];
  in_idx_46 = in->mM.mX[46];
  in_idx_47 = in->mM.mX[47];
  in_idx_48 = in->mM.mX[48];
  in_idx_49 = in->mM.mX[49];
  in_idx_50 = in->mM.mX[50];
  in_idx_51 = in->mM.mX[51];
  in_idx_52 = in->mM.mX[52];
  in_idx_53 = in->mM.mX[53];
  in_idx_54 = in->mM.mX[54];
  in_idx_55 = in->mM.mX[55];
  in_idx_56 = in->mM.mX[56];
  in_idx_57 = in->mM.mX[57];
  in_idx_58 = in->mM.mX[58];
  in_idx_59 = in->mM.mX[59];
  in_idx_60 = in->mM.mX[60];
  in_idx_61 = in->mM.mX[61];
  in_idx_62 = in->mM.mX[62];
  in_idx_63 = in->mM.mX[63];
  in_idx_64 = in->mM.mX[64];
  in_idx_65 = in->mM.mX[65];
  in_idx_66 = in->mM.mX[66];
  in_idx_67 = in->mM.mX[67];
  in_idx_68 = in->mM.mX[68];
  in_idx_69 = in->mM.mX[69];
  in_idx_70 = in->mM.mX[70];
  in_idx_71 = in->mM.mX[71];
  in_idx_72 = in->mM.mX[72];
  in_idx_73 = in->mM.mX[73];
  in_idx_74 = in->mM.mX[74];
  in_idx_75 = in->mM.mX[75];
  in_idx_76 = in->mM.mX[76];
  in_idx_77 = in->mM.mX[77];
  in_idx_78 = in->mM.mX[78];
  in_idx_79 = in->mM.mX[79];
  in_idx_80 = in->mM.mX[80];
  in_idx_81 = in->mM.mX[81];
  in_idx_82 = in->mM.mX[82];
  in_idx_83 = in->mM.mX[83];
  in_idx_84 = in->mM.mX[84];
  in_idx_85 = in->mM.mX[85];
  in_idx_86 = in->mM.mX[86];
  in_idx_87 = in->mM.mX[87];
  in_idx_88 = in->mM.mX[88];
  in_idx_89 = in->mM.mX[89];
  in_idx_90 = in->mM.mX[90];
  in_idx_91 = in->mM.mX[91];
  in_idx_92 = in->mM.mX[92];
  in_idx_93 = in->mM.mX[93];
  in_idx_94 = in->mM.mX[94];
  in_idx_95 = in->mM.mX[95];
  in_idx_96 = in->mM.mX[96];
  in_idx_97 = in->mM.mX[97];
  in_idx_98 = in->mM.mX[98];
  in_idx_99 = in->mM.mX[99];
  in_idx_100 = in->mM.mX[100];
  in_idx_101 = in->mM.mX[101];
  in_idx_102 = in->mM.mX[102];
  in_idx_103 = in->mM.mX[103];
  in_idx_104 = in->mM.mX[104];
  in_idx_105 = in->mM.mX[105];
  in_idx_106 = in->mM.mX[106];
  in_idx_107 = in->mM.mX[107];
  in_idx_108 = in->mM.mX[108];
  in_idx_109 = in->mM.mX[109];
  in_idx_110 = in->mM.mX[110];
  in_idx_111 = in->mM.mX[111];
  in_idx_112 = in->mM.mX[112];
  in_idx_113 = in->mM.mX[113];
  in_idx_114 = in->mM.mX[114];
  in_idx_115 = in->mM.mX[115];
  in_idx_116 = in->mM.mX[116];
  in_idx_117 = in->mM.mX[117];
  in_idx_118 = in->mM.mX[118];
  in_idx_119 = in->mM.mX[119];
  in_idx_120 = in->mM.mX[120];
  in_idx_121 = in->mM.mX[121];
  in_idx_122 = in->mM.mX[122];
  in_idx_123 = in->mM.mX[123];
  in_idx_124 = in->mM.mX[124];
  in_idx_125 = in->mM.mX[125];
  in_idx_126 = in->mM.mX[126];
  in_idx_127 = in->mM.mX[127];
  in_idx_128 = in->mM.mX[128];
  in_idx_129 = in->mM.mX[129];
  in_idx_130 = in->mM.mX[130];
  in_idx_131 = in->mM.mX[131];
  in_idx_132 = in->mM.mX[132];
  in_idx_133 = in->mM.mX[133];
  in_idx_134 = in->mM.mX[134];
  in_idx_135 = in->mM.mX[135];
  in_idx_136 = in->mM.mX[136];
  in_idx_137 = in->mM.mX[137];
  in_idx_138 = in->mM.mX[138];
  in_idx_139 = in->mM.mX[139];
  in_idx_140 = in->mM.mX[140];
  in_idx_141 = in->mM.mX[141];
  in_idx_142 = in->mM.mX[142];
  in_idx_143 = in->mM.mX[143];
  in_idx_144 = in->mM.mX[144];
  in_idx_145 = in->mM.mX[145];
  in_idx_146 = in->mM.mX[146];
  in_idx_147 = in->mM.mX[147];
  in_idx_148 = in->mM.mX[148];
  in_idx_149 = in->mM.mX[149];
  in_idx_150 = in->mM.mX[150];
  in_idx_151 = in->mM.mX[151];
  in_idx_152 = in->mM.mX[152];
  in_idx_153 = in->mM.mX[153];
  in_idx_154 = in->mM.mX[154];
  in_idx_155 = in->mM.mX[155];
  in_idx_156 = in->mM.mX[156];
  in_idx_157 = in->mM.mX[157];
  in_idx_158 = in->mM.mX[158];
  in_idx_159 = in->mM.mX[159];
  in_idx_160 = in->mM.mX[160];
  in_idx_161 = in->mM.mX[161];
  in_idx_162 = in->mM.mX[162];
  in_idx_163 = in->mM.mX[163];
  in_idx_164 = in->mM.mX[164];
  in_idx_165 = in->mM.mX[165];
  in_idx_166 = in->mM.mX[166];
  in_idx_167 = in->mM.mX[167];
  in_idx_168 = in->mM.mX[168];
  in_idx_169 = in->mM.mX[169];
  in_idx_170 = in->mM.mX[170];
  in_idx_171 = in->mM.mX[171];
  in_idx_172 = in->mM.mX[172];
  in_idx_173 = in->mM.mX[173];
  in_idx_174 = in->mM.mX[174];
  in_idx_175 = in->mM.mX[175];
  in_idx_176 = in->mM.mX[176];
  in_idx_177 = in->mM.mX[177];
  in_idx_178 = in->mM.mX[178];
  in_idx_179 = in->mM.mX[179];
  in_idx_180 = in->mM.mX[180];
  in_idx_181 = in->mM.mX[181];
  in_idx_182 = in->mM.mX[182];
  in_idx_183 = in->mM.mX[183];
  in_idx_184 = in->mM.mX[184];
  in_idx_185 = in->mM.mX[185];
  in_idx_186 = in->mM.mX[186];
  in_idx_187 = in->mM.mX[187];
  in_idx_188 = in->mM.mX[188];
  in_idx_189 = in->mM.mX[189];
  in_idx_190 = in->mM.mX[190];
  in_idx_191 = in->mM.mX[191];
  in_idx_192 = in->mM.mX[192];
  in_idx_193 = in->mM.mX[193];
  in_idx_194 = in->mM.mX[194];
  in_idx_195 = in->mM.mX[195];
  in_idx_196 = in->mM.mX[196];
  in_idx_197 = in->mM.mX[197];
  in_idx_198 = in->mM.mX[198];
  in_idx_199 = in->mM.mX[199];
  in_idx_200 = in->mM.mX[200];
  in_idx_201 = in->mM.mX[201];
  in_idx_202 = in->mM.mX[202];
  in_idx_203 = in->mM.mX[203];
  M[0] = in_idx_0;
  M[1] = in_idx_1;
  M[2] = in_idx_2;
  M[3] = in_idx_3;
  M[4] = in_idx_4;
  M[5] = in_idx_5;
  M[6] = in_idx_6;
  M[7] = in_idx_7;
  M[8] = in_idx_8;
  M[9] = in_idx_9;
  M[10] = in_idx_10;
  M[11] = in_idx_11;
  M[12] = in_idx_12;
  M[13] = in_idx_13;
  M[14] = in_idx_14;
  M[15] = in_idx_15;
  M[16] = in_idx_16;
  M[17] = in_idx_17;
  M[18] = in_idx_18;
  M[19] = in_idx_19;
  M[20] = in_idx_20;
  M[21] = in_idx_21;
  M[22] = in_idx_22;
  M[23] = in_idx_23;
  M[24] = in_idx_24;
  M[25] = in_idx_25;
  M[26] = in_idx_26;
  M[27] = in_idx_27;
  M[28] = in_idx_28;
  M[29] = in_idx_29;
  M[30] = in_idx_30;
  M[31] = in_idx_31;
  M[32] = in_idx_32;
  M[33] = in_idx_33;
  M[34] = in_idx_34;
  M[35] = in_idx_35;
  M[36] = in_idx_36;
  M[37] = in_idx_37;
  M[38] = in_idx_38;
  M[39] = in_idx_39;
  M[40] = in_idx_40;
  M[41] = in_idx_41;
  M[42] = in_idx_42;
  M[43] = in_idx_43;
  M[44] = in_idx_44;
  M[45] = in_idx_45;
  M[46] = in_idx_46;
  M[47] = in_idx_47;
  M[48] = in_idx_48;
  M[49] = in_idx_49;
  M[50] = in_idx_50;
  M[51] = in_idx_51;
  M[52] = in_idx_52;
  M[53] = in_idx_53;
  M[54] = in_idx_54;
  M[55] = in_idx_55;
  M[56] = in_idx_56;
  M[57] = in_idx_57;
  M[58] = in_idx_58;
  M[59] = in_idx_59;
  M[60] = in_idx_60;
  M[61] = in_idx_61;
  M[62] = in_idx_62;
  M[63] = in_idx_63;
  M[64] = in_idx_64;
  M[65] = in_idx_65;
  M[66] = in_idx_66;
  M[67] = in_idx_67;
  M[68] = in_idx_68;
  M[69] = in_idx_69;
  M[70] = in_idx_70;
  M[71] = in_idx_71;
  M[72] = in_idx_72;
  M[73] = in_idx_73;
  M[74] = in_idx_74;
  M[75] = in_idx_75;
  M[76] = in_idx_76;
  M[77] = in_idx_77;
  M[78] = in_idx_78;
  M[79] = in_idx_79;
  M[80] = in_idx_80;
  M[81] = in_idx_81;
  M[82] = in_idx_82;
  M[83] = in_idx_83;
  M[84] = in_idx_84;
  M[85] = in_idx_85;
  M[86] = in_idx_86;
  M[87] = in_idx_87;
  M[88] = in_idx_88;
  M[89] = in_idx_89;
  M[90] = in_idx_90;
  M[91] = in_idx_91;
  M[92] = in_idx_92;
  M[93] = in_idx_93;
  M[94] = in_idx_94;
  M[95] = in_idx_95;
  M[96] = in_idx_96;
  M[97] = in_idx_97;
  M[98] = in_idx_98;
  M[99] = in_idx_99;
  M[100] = in_idx_100;
  M[101] = in_idx_101;
  M[102] = in_idx_102;
  M[103] = in_idx_103;
  M[104] = in_idx_104;
  M[105] = in_idx_105;
  M[106] = in_idx_106;
  M[107] = in_idx_107;
  M[108] = in_idx_108;
  M[109] = in_idx_109;
  M[110] = in_idx_110;
  M[111] = in_idx_111;
  M[112] = in_idx_112;
  M[113] = in_idx_113;
  M[114] = in_idx_114;
  M[115] = in_idx_115;
  M[116] = in_idx_116;
  M[117] = in_idx_117;
  M[118] = in_idx_118;
  M[119] = in_idx_119;
  M[120] = in_idx_120;
  M[121] = in_idx_121;
  M[122] = in_idx_122;
  M[123] = in_idx_123;
  M[124] = in_idx_124;
  M[125] = in_idx_125;
  M[126] = in_idx_126;
  M[127] = in_idx_127;
  M[128] = in_idx_128;
  M[129] = in_idx_129;
  M[130] = in_idx_130;
  M[131] = in_idx_131;
  M[132] = in_idx_132;
  M[133] = in_idx_133;
  M[134] = in_idx_134;
  M[135] = in_idx_135;
  M[136] = in_idx_136;
  M[137] = in_idx_137;
  M[138] = in_idx_138;
  M[139] = in_idx_139;
  M[140] = in_idx_140;
  M[141] = in_idx_141;
  M[142] = in_idx_142;
  M[143] = in_idx_143;
  M[144] = in_idx_144;
  M[145] = in_idx_145;
  M[146] = in_idx_146;
  M[147] = in_idx_147;
  M[148] = in_idx_148;
  M[149] = in_idx_149;
  M[150] = in_idx_150;
  M[151] = in_idx_151;
  M[152] = in_idx_152;
  M[153] = in_idx_153;
  M[154] = in_idx_154;
  M[155] = in_idx_155;
  M[156] = in_idx_156;
  M[157] = in_idx_157;
  M[158] = in_idx_158;
  M[159] = in_idx_159;
  M[160] = in_idx_160;
  M[161] = in_idx_161;
  M[162] = in_idx_162;
  M[163] = in_idx_163;
  M[164] = in_idx_164;
  M[165] = in_idx_165;
  M[166] = in_idx_166;
  M[167] = in_idx_167;
  M[168] = in_idx_168;
  M[169] = in_idx_169;
  M[170] = in_idx_170;
  M[171] = in_idx_171;
  M[172] = in_idx_172;
  M[173] = in_idx_173;
  M[174] = in_idx_174;
  M[175] = in_idx_175;
  M[176] = in_idx_176;
  M[177] = in_idx_177;
  M[178] = in_idx_178;
  M[179] = in_idx_179;
  M[180] = in_idx_180;
  M[181] = in_idx_181;
  M[182] = in_idx_182;
  M[183] = in_idx_183;
  M[184] = in_idx_184;
  M[185] = in_idx_185;
  M[186] = in_idx_186;
  M[187] = in_idx_187;
  M[188] = in_idx_188;
  M[189] = in_idx_189;
  M[190] = in_idx_190;
  M[191] = in_idx_191;
  M[192] = in_idx_192;
  M[193] = in_idx_193;
  M[194] = in_idx_194;
  M[195] = in_idx_195;
  M[196] = in_idx_196;
  M[197] = in_idx_197;
  M[198] = in_idx_198;
  M[199] = in_idx_199;
  M[200] = in_idx_200;
  M[201] = in_idx_201;
  M[202] = in_idx_202;
  M[203] = in_idx_203;
  X_idx_11 = in->mX.mX[11];
  X_idx_12 = in->mX.mX[12];
  X_idx_15 = in->mX.mX[15];
  X_idx_16 = in->mX.mX[16];
  X_idx_22 = in->mX.mX[22];
  X_idx_24 = in->mX.mX[24];
  X_idx_29 = in->mX.mX[29];
  X_idx_40 = in->mX.mX[40];
  X_idx_45 = in->mX.mX[45];
  X_idx_56 = in->mX.mX[56];
  X_idx_59 = in->mX.mX[59];
  X_idx_60 = in->mX.mX[60];
  X_idx_61 = in->mX.mX[61];
  X_idx_62 = in->mX.mX[62];
  X_idx_63 = in->mX.mX[63];
  X_idx_64 = in->mX.mX[64];
  X_idx_66 = in->mX.mX[66];
  X_idx_67 = in->mX.mX[67];
  X_idx_68 = in->mX.mX[68];
  X_idx_69 = in->mX.mX[69];
  X_idx_70 = in->mX.mX[70];
  X_idx_71 = in->mX.mX[71];
  out = out1->mDXF;
  for (idx = 0ULL; idx < 60ULL; idx++) {
    x[idx] = 0.0;
  }

  x[0ULL] = 0.0;
  x[1ULL] = 0.0;
  x[2ULL] = 1.0;
  x[3ULL] = -0.0;
  x[4ULL] = -0.0;
  x[5ULL] = 0.0;
  x[6ULL] = 0.0;
  x[7ULL] = 1.0;
  x[8ULL] = -0.0;
  x[9ULL] = -0.0;
  x[10ULL] = 0.0;
  x[11ULL] = 0.0;
  x[12ULL] = 1.0;
  x[13ULL] = -0.0;
  x[14ULL] = -0.0;
  x[15ULL] = 0.0;
  x[16ULL] = 0.0;
  x[17ULL] = 1.0;
  x[18ULL] = -0.0;
  x[19ULL] = -0.0;
  x[20ULL] = -1.0;
  x[21ULL] = -(X_idx_22 * 1.0000000000000002E-6);
  x[22ULL] = -(X_idx_24 * 100000.0);
  x[23ULL] = 1.0;
  memcpy(&localMode[0], &M[0], 96U);
  t134 = X_idx_11 * 1.0000000000000002E-6;
  t135 = X_idx_12 * 100000.0;
  t137 = t135 * t135 + 3785.0949311220775;
  t138 = t135 * t135 + 3785.0949311220775;
  if (t138 < 0.0) {
    X_idx_24 = -sqrt(-t138);
  } else {
    X_idx_24 = sqrt(t138);
  }

  if (t138 < 0.0) {
    X_idx_22 = -sqrt(-t138);
  } else {
    X_idx_22 = sqrt(t138);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t879 = X_idx_24 * X_idx_22;
  if (t137 < 0.0) {
    X_idx_24 = -sqrt(-t137);
  } else {
    X_idx_24 = sqrt(t137);
  }

  if (t137 < 0.0) {
    X_idx_22 = -sqrt(-t137);
  } else {
    X_idx_22 = sqrt(t137);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t880 = X_idx_24 * X_idx_22;
  if (t138 < 0.0) {
    X_idx_22 = -sqrt(-t138);
  } else {
    X_idx_22 = sqrt(t138);
  }

  if (X_idx_22 < 0.0) {
    X_idx_12 = -sqrt(-X_idx_22);
  } else {
    X_idx_12 = sqrt(X_idx_22);
  }

  if (t138 < 0.0) {
    X_idx_22 = -sqrt(-t138);
  } else {
    X_idx_22 = sqrt(t138);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t138 < 0.0) {
    X_idx_22 = -sqrt(-t138);
  } else {
    X_idx_22 = sqrt(t138);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t984 = X_idx_24 * X_idx_22;
  if (t137 < 0.0) {
    X_idx_22 = -sqrt(-t137);
  } else {
    X_idx_22 = sqrt(t137);
  }

  if (X_idx_22 < 0.0) {
    t987 = -sqrt(-X_idx_22);
  } else {
    t987 = sqrt(X_idx_22);
  }

  if (t137 < 0.0) {
    X_idx_22 = -sqrt(-t137);
  } else {
    X_idx_22 = sqrt(t137);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t137 < 0.0) {
    X_idx_22 = -sqrt(-t137);
  } else {
    X_idx_22 = sqrt(t137);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  X_idx_22 *= X_idx_24;
  x[24ULL] = 1.0;
  x[25ULL] = t134 >= 0.0 ? -((t987 * 6.7473145244466244E-5 - t135 * (1.0 / (t880
    == 0.0 ? 1.0E-16 : t880)) * t135 * 3.3736572622233122E-5) / (X_idx_22 == 0.0
    ? 1.0E-16 : X_idx_22)) : -((X_idx_12 * 6.7473145244466244E-5 - t135 * (1.0 /
    (t879 == 0.0 ? 1.0E-16 : t879)) * t135 * 3.3736572622233122E-5) / (t984 ==
    0.0 ? 1.0E-16 : t984));
  memcpy(&localMode0[0], &M[24], 96U);
  t138 = X_idx_15 * 1.0000000000000002E-6;
  t984 = X_idx_16 * 100000.0;
  t987 = t984 * t984 + 3785.0949311220775;
  t135 = t984 * t984 + 3785.0949311220775;
  if (t135 < 0.0) {
    X_idx_24 = -sqrt(-t135);
  } else {
    X_idx_24 = sqrt(t135);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t881 = X_idx_24 * X_idx_22;
  if (t987 < 0.0) {
    X_idx_24 = -sqrt(-t987);
  } else {
    X_idx_24 = sqrt(t987);
  }

  if (t987 < 0.0) {
    X_idx_22 = -sqrt(-t987);
  } else {
    X_idx_22 = sqrt(t987);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t882 = X_idx_24 * X_idx_22;
  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_12 = -sqrt(-X_idx_22);
  } else {
    X_idx_12 = sqrt(X_idx_22);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t879 = X_idx_24 * X_idx_22;
  if (t987 < 0.0) {
    X_idx_22 = -sqrt(-t987);
  } else {
    X_idx_22 = sqrt(t987);
  }

  if (X_idx_22 < 0.0) {
    t137 = -sqrt(-X_idx_22);
  } else {
    t137 = sqrt(X_idx_22);
  }

  if (t987 < 0.0) {
    X_idx_22 = -sqrt(-t987);
  } else {
    X_idx_22 = sqrt(t987);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t987 < 0.0) {
    X_idx_22 = -sqrt(-t987);
  } else {
    X_idx_22 = sqrt(t987);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  X_idx_22 *= X_idx_24;
  x[26ULL] = 1.0;
  x[27ULL] = t138 >= 0.0 ? -((t137 * 6.7473145244466244E-5 - t984 * (1.0 / (t882
    == 0.0 ? 1.0E-16 : t882)) * t984 * 3.3736572622233122E-5) / (X_idx_22 == 0.0
    ? 1.0E-16 : X_idx_22)) : -((X_idx_12 * 6.7473145244466244E-5 - t984 * (1.0 /
    (t881 == 0.0 ? 1.0E-16 : t881)) * t984 * 3.3736572622233122E-5) / (t879 ==
    0.0 ? 1.0E-16 : t879));
  memcpy(&localMode1[0], &M[48], 96U);
  t138 = X_idx_63 * 1.0000000000000002E-6;
  t135 = X_idx_64 * 100000.0;
  t879 = t135 * t135 + 46247.8416472108;
  t881 = t135 * t135 + 46247.8416472108;
  if (t881 < 0.0) {
    t882 = -sqrt(-t881);
  } else {
    t882 = sqrt(t881);
  }

  if (t881 < 0.0) {
    t137 = -sqrt(-t881);
  } else {
    t137 = sqrt(t881);
  }

  if (t137 < 0.0) {
    t987 = -sqrt(-t137);
  } else {
    t987 = sqrt(t137);
  }

  t984 = t882 * t987;
  if (t879 < 0.0) {
    X_idx_24 = -sqrt(-t879);
  } else {
    X_idx_24 = sqrt(t879);
  }

  if (t879 < 0.0) {
    t880 = -sqrt(-t879);
  } else {
    t880 = sqrt(t879);
  }

  if (t880 < 0.0) {
    X_idx_22 = -sqrt(-t880);
  } else {
    X_idx_22 = sqrt(t880);
  }

  t882 = X_idx_24 * X_idx_22;
  if (t881 < 0.0) {
    X_idx_22 = -sqrt(-t881);
  } else {
    X_idx_22 = sqrt(t881);
  }

  if (X_idx_22 < 0.0) {
    X_idx_12 = -sqrt(-X_idx_22);
  } else {
    X_idx_12 = sqrt(X_idx_22);
  }

  if (t881 < 0.0) {
    X_idx_22 = -sqrt(-t881);
  } else {
    X_idx_22 = sqrt(t881);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t881 < 0.0) {
    X_idx_22 = -sqrt(-t881);
  } else {
    X_idx_22 = sqrt(t881);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t987 = X_idx_24 * X_idx_22;
  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    t137 = -sqrt(-X_idx_22);
  } else {
    t137 = sqrt(X_idx_22);
  }

  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  X_idx_22 *= X_idx_24;
  x[28ULL] = 1.0;
  x[29ULL] = t138 >= 0.0 ? -((t137 * 5.4133803345444954E-5 - t135 * (1.0 / (t882
    == 0.0 ? 1.0E-16 : t882)) * t135 * 2.7066901672722477E-5) / (X_idx_22 == 0.0
    ? 1.0E-16 : X_idx_22)) : -((X_idx_12 * 5.4133803345444954E-5 - t135 * (1.0 /
    (t984 == 0.0 ? 1.0E-16 : t984)) * t135 * 2.7066901672722477E-5) / (t987 ==
    0.0 ? 1.0E-16 : t987));
  memcpy(&localMode2[0], &M[72], 96U);
  X_idx_64 = X_idx_61 * 1.0000000000000002E-6;
  X_idx_63 = X_idx_62 * 100000.0;
  t134 = X_idx_63 * X_idx_63 + 46247.8416472108;
  t137 = X_idx_63 * X_idx_63 + 46247.8416472108;
  if (t137 < 0.0) {
    X_idx_12 = -sqrt(-t137);
  } else {
    X_idx_12 = sqrt(t137);
  }

  if (t137 < 0.0) {
    X_idx_22 = -sqrt(-t137);
  } else {
    X_idx_22 = sqrt(t137);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  X_idx_16 = X_idx_12 * X_idx_24;
  if (t134 < 0.0) {
    t879 = -sqrt(-t134);
  } else {
    t879 = sqrt(t134);
  }

  if (t134 < 0.0) {
    t882 = -sqrt(-t134);
  } else {
    t882 = sqrt(t134);
  }

  if (t882 < 0.0) {
    t880 = -sqrt(-t882);
  } else {
    t880 = sqrt(t882);
  }

  t880 *= t879;
  if (t137 < 0.0) {
    X_idx_22 = -sqrt(-t137);
  } else {
    X_idx_22 = sqrt(t137);
  }

  if (X_idx_22 < 0.0) {
    t882 = -sqrt(-X_idx_22);
  } else {
    t882 = sqrt(X_idx_22);
  }

  if (t137 < 0.0) {
    t881 = -sqrt(-t137);
  } else {
    t881 = sqrt(t137);
  }

  if (t881 < 0.0) {
    X_idx_22 = -sqrt(-t881);
  } else {
    X_idx_22 = sqrt(t881);
  }

  if (t137 < 0.0) {
    t984 = -sqrt(-t137);
  } else {
    t984 = sqrt(t137);
  }

  if (t984 < 0.0) {
    t135 = -sqrt(-t984);
  } else {
    t135 = sqrt(t984);
  }

  t987 = X_idx_22 * t135;
  if (t134 < 0.0) {
    t138 = -sqrt(-t134);
  } else {
    t138 = sqrt(t134);
  }

  if (t138 < 0.0) {
    t137 = -sqrt(-t138);
  } else {
    t137 = sqrt(t138);
  }

  if (t134 < 0.0) {
    X_idx_22 = -sqrt(-t134);
  } else {
    X_idx_22 = sqrt(t134);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t134 < 0.0) {
    X_idx_22 = -sqrt(-t134);
  } else {
    X_idx_22 = sqrt(t134);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  X_idx_12 = X_idx_24 * X_idx_22;
  x[30ULL] = 1.0;
  x[31ULL] = X_idx_64 >= 0.0 ? -((t137 * 5.4133803345444954E-5 - X_idx_63 * (1.0
    / (t880 == 0.0 ? 1.0E-16 : t880)) * X_idx_63 * 2.7066901672722477E-5) /
    (X_idx_12 == 0.0 ? 1.0E-16 : X_idx_12)) : -((t882 * 5.4133803345444954E-5 -
    X_idx_63 * (1.0 / (X_idx_16 == 0.0 ? 1.0E-16 : X_idx_16)) * X_idx_63 *
    2.7066901672722477E-5) / (t987 == 0.0 ? 1.0E-16 : t987));
  memcpy(&localMode3[0], &M[96], 96U);
  X_idx_63 = X_idx_59 * 1.0000000000000002E-6;
  X_idx_16 = X_idx_60 * 100000.0;
  t135 = X_idx_16 * X_idx_16 + 46247.8416472108;
  t879 = X_idx_16 * X_idx_16 + 46247.8416472108;
  if (t879 < 0.0) {
    X_idx_12 = -sqrt(-t879);
  } else {
    X_idx_12 = sqrt(t879);
  }

  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  t134 = X_idx_12 * X_idx_24;
  if (t135 < 0.0) {
    t137 = -sqrt(-t135);
  } else {
    t137 = sqrt(t135);
  }

  if (t135 < 0.0) {
    t882 = -sqrt(-t135);
  } else {
    t882 = sqrt(t135);
  }

  if (t882 < 0.0) {
    t880 = -sqrt(-t882);
  } else {
    t880 = sqrt(t882);
  }

  t882 = t137 * t880;
  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    t138 = -sqrt(-X_idx_22);
  } else {
    t138 = sqrt(X_idx_22);
  }

  if (t879 < 0.0) {
    t987 = -sqrt(-t879);
  } else {
    t987 = sqrt(t879);
  }

  if (t987 < 0.0) {
    X_idx_12 = -sqrt(-t987);
  } else {
    X_idx_12 = sqrt(t987);
  }

  if (t879 < 0.0) {
    t879 = -sqrt(-t879);
  } else {
    t879 = sqrt(t879);
  }

  if (t879 < 0.0) {
    t881 = -sqrt(-t879);
  } else {
    t881 = sqrt(t879);
  }

  t987 = X_idx_12 * t881;
  if (t135 < 0.0) {
    t984 = -sqrt(-t135);
  } else {
    t984 = sqrt(t135);
  }

  if (t984 < 0.0) {
    t137 = -sqrt(-t984);
  } else {
    t137 = sqrt(t984);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t135 = X_idx_24 * X_idx_22;
  x[32ULL] = 1.0;
  x[33ULL] = X_idx_63 >= 0.0 ? -((t137 * 5.4133803345444954E-5 - X_idx_16 * (1.0
    / (t882 == 0.0 ? 1.0E-16 : t882)) * X_idx_16 * 2.7066901672722477E-5) /
    (t135 == 0.0 ? 1.0E-16 : t135)) : -((t138 * 5.4133803345444954E-5 - X_idx_16
    * (1.0 / (t134 == 0.0 ? 1.0E-16 : t134)) * X_idx_16 * 2.7066901672722477E-5)
    / (t987 == 0.0 ? 1.0E-16 : t987));
  memcpy(&localMode4[0], &M[120], 96U);
  X_idx_16 = X_idx_70 * 1.0000000000000002E-6;
  t134 = X_idx_71 * 100000.0;
  t135 = t134 * t134 + 46247.8416472108;
  t879 = t134 * t134 + 46247.8416472108;
  if (t879 < 0.0) {
    t880 = -sqrt(-t879);
  } else {
    t880 = sqrt(t879);
  }

  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  t880 *= X_idx_24;
  if (t135 < 0.0) {
    t137 = -sqrt(-t135);
  } else {
    t137 = sqrt(t135);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t882 = t137 * X_idx_22;
  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    X_idx_12 = -sqrt(-X_idx_22);
  } else {
    X_idx_12 = sqrt(X_idx_22);
  }

  if (t879 < 0.0) {
    t987 = -sqrt(-t879);
  } else {
    t987 = sqrt(t879);
  }

  if (t987 < 0.0) {
    t138 = -sqrt(-t987);
  } else {
    t138 = sqrt(t987);
  }

  if (t879 < 0.0) {
    t879 = -sqrt(-t879);
  } else {
    t879 = sqrt(t879);
  }

  if (t879 < 0.0) {
    t881 = -sqrt(-t879);
  } else {
    t881 = sqrt(t879);
  }

  t987 = t138 * t881;
  if (t135 < 0.0) {
    t984 = -sqrt(-t135);
  } else {
    t984 = sqrt(t135);
  }

  if (t984 < 0.0) {
    t137 = -sqrt(-t984);
  } else {
    t137 = sqrt(t984);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t135 = X_idx_24 * X_idx_22;
  x[34ULL] = 1.0;
  x[35ULL] = X_idx_16 >= 0.0 ? -((t137 * 5.4133803345444954E-5 - t134 * (1.0 /
    (t882 == 0.0 ? 1.0E-16 : t882)) * t134 * 2.7066901672722477E-5) / (t135 ==
    0.0 ? 1.0E-16 : t135)) : -((X_idx_12 * 5.4133803345444954E-5 - t134 * (1.0 /
    (t880 == 0.0 ? 1.0E-16 : t880)) * t134 * 2.7066901672722477E-5) / (t987 ==
    0.0 ? 1.0E-16 : t987));
  memcpy(&localMode5[0], &M[144], 96U);
  X_idx_16 = X_idx_68 * 1.0000000000000002E-6;
  t134 = X_idx_69 * 100000.0;
  t135 = t134 * t134 + 46247.8416472108;
  t879 = t134 * t134 + 46247.8416472108;
  if (t879 < 0.0) {
    t880 = -sqrt(-t879);
  } else {
    t880 = sqrt(t879);
  }

  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  t882 = t880 * X_idx_24;
  if (t135 < 0.0) {
    t137 = -sqrt(-t135);
  } else {
    t137 = sqrt(t135);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t984 = t137 * X_idx_22;
  if (t879 < 0.0) {
    X_idx_22 = -sqrt(-t879);
  } else {
    X_idx_22 = sqrt(t879);
  }

  if (X_idx_22 < 0.0) {
    t881 = -sqrt(-X_idx_22);
  } else {
    t881 = sqrt(X_idx_22);
  }

  if (t879 < 0.0) {
    t987 = -sqrt(-t879);
  } else {
    t987 = sqrt(t879);
  }

  if (t987 < 0.0) {
    t138 = -sqrt(-t987);
  } else {
    t138 = sqrt(t987);
  }

  if (t879 < 0.0) {
    t879 = -sqrt(-t879);
  } else {
    t879 = sqrt(t879);
  }

  if (t879 < 0.0) {
    t880 = -sqrt(-t879);
  } else {
    t880 = sqrt(t879);
  }

  X_idx_12 = t138 * t880;
  if (t135 < 0.0) {
    t880 = -sqrt(-t135);
  } else {
    t880 = sqrt(t135);
  }

  if (t880 < 0.0) {
    t137 = -sqrt(-t880);
  } else {
    t137 = sqrt(t880);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t880 = X_idx_24 * X_idx_22;
  x[36ULL] = 1.0;
  x[37ULL] = X_idx_16 >= 0.0 ? -((t137 * 5.4133803345444954E-5 - t134 * (1.0 /
    (t984 == 0.0 ? 1.0E-16 : t984)) * t134 * 2.7066901672722477E-5) / (t880 ==
    0.0 ? 1.0E-16 : t880)) : -((t881 * 5.4133803345444954E-5 - t134 * (1.0 /
    (t882 == 0.0 ? 1.0E-16 : t882)) * t134 * 2.7066901672722477E-5) / (X_idx_12 ==
    0.0 ? 1.0E-16 : X_idx_12));
  memcpy(&localMode6[0], &M[168], 96U);
  t134 = X_idx_66 * 1.0000000000000002E-6;
  t882 = X_idx_67 * 100000.0;
  t135 = t882 * t882 + 46247.8416472108;
  X_idx_12 = t882 * t882 + 46247.8416472108;
  if (X_idx_12 < 0.0) {
    t880 = -sqrt(-X_idx_12);
  } else {
    t880 = sqrt(X_idx_12);
  }

  if (X_idx_12 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_12);
  } else {
    X_idx_22 = sqrt(X_idx_12);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  t138 = t880 * X_idx_24;
  if (t135 < 0.0) {
    t137 = -sqrt(-t135);
  } else {
    t137 = sqrt(t135);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t984 = t137 * X_idx_22;
  if (X_idx_12 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_12);
  } else {
    X_idx_22 = sqrt(X_idx_12);
  }

  if (X_idx_22 < 0.0) {
    t879 = -sqrt(-X_idx_22);
  } else {
    t879 = sqrt(X_idx_22);
  }

  if (X_idx_12 < 0.0) {
    t987 = -sqrt(-X_idx_12);
  } else {
    t987 = sqrt(X_idx_12);
  }

  if (t987 < 0.0) {
    t881 = -sqrt(-t987);
  } else {
    t881 = sqrt(t987);
  }

  if (X_idx_12 < 0.0) {
    t880 = -sqrt(-X_idx_12);
  } else {
    t880 = sqrt(X_idx_12);
  }

  if (t880 < 0.0) {
    t880 = -sqrt(-t880);
  } else {
    t880 = sqrt(t880);
  }

  X_idx_12 = t881 * t880;
  if (t135 < 0.0) {
    t880 = -sqrt(-t135);
  } else {
    t880 = sqrt(t135);
  }

  if (t880 < 0.0) {
    t137 = -sqrt(-t880);
  } else {
    t137 = sqrt(t880);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_24 = -sqrt(-X_idx_22);
  } else {
    X_idx_24 = sqrt(X_idx_22);
  }

  if (t135 < 0.0) {
    X_idx_22 = -sqrt(-t135);
  } else {
    X_idx_22 = sqrt(t135);
  }

  if (X_idx_22 < 0.0) {
    X_idx_22 = -sqrt(-X_idx_22);
  } else {
    X_idx_22 = sqrt(X_idx_22);
  }

  t880 = X_idx_24 * X_idx_22;
  x[38ULL] = 1.0;
  x[39ULL] = t134 >= 0.0 ? -((t137 * 5.4133803345444954E-5 - t882 * (1.0 / (t984
    == 0.0 ? 1.0E-16 : t984)) * t882 * 2.7066901672722477E-5) / (t880 == 0.0 ?
    1.0E-16 : t880)) : -((t879 * 5.4133803345444954E-5 - t882 * (1.0 / (t138 ==
    0.0 ? 1.0E-16 : t138)) * t882 * 2.7066901672722477E-5) / (X_idx_12 == 0.0 ?
    1.0E-16 : X_idx_12));
  t137 = X_idx_29 * 1.0000000000000002E-6;
  t987 = t137 >= 0.0 ? 1.0 : -1.0;
  t879 = t137 * t987 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t881 = 7.6751803075053254E+6;
  t616 = t879 <= 200.0;
  t880 = t987 * 4.3437498645632981E-5 / 1.2998093762025389E-6 *
    0.00022107788705467982 / 4.8875432144561768E-8;
  t138 = (t879 - 2000.0) / 2000.0;
  t984 = 6.9 / (t879 == 0.0 ? 1.0E-16 : t879) + 1.4237685041404136E-6;
  X_idx_24 = log10(t984 <= 2.5E-308 ? 2.5E-308 : t984) * -1.8 * (log10(t984 <=
    2.5E-308 ? 2.5E-308 : t984) * -1.8);
  X_idx_12 = t880 * 2000.0 / 4.0E+6;
  t882 = (t616 ? 0.0 : 1.0 / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24)) * 2.024 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0 * 887.1;
  t135 = t879 * t879;
  X_idx_22 = -(log10(t984 <= 2.5E-308 ? 2.5E-308 : t984) * -1.8 *
               (0.43429448190325176 / (t984 == 0.0 ? 1.0E-16 : t984) * (-(t880 *
    6.9) / (t135 == 0.0 ? 1.0E-16 : t135))) * -3.6);
  t880 = X_idx_24 * X_idx_24;
  X_idx_22 = ((t616 ? 0.0 : X_idx_22 / (t880 == 0.0 ? 1.0E-16 : t880)) * 2.024 *
              0.038099999999999995 / 0.0014516099999999997 *
              1.2998093762025389E-6 / 1.6895044144640333E-12 * 2.0 / 4.0 * t137 *
              887.1 + t882) * t137;
  x[40ULL] = -(t879 <= 2000.0 ? t881 : t879 <= 4000.0 ? t881 + ((t879 <= 2000.0 ?
    0.0 : t879 <= 4000.0 ? t138 * X_idx_12 * 6.0 - t138 * t138 * X_idx_12 * 6.0 :
    0.0) * (t882 * t137 * t137 * t987 - t881 * t137) + (t879 <= 2000.0 ? 0.0 :
    t879 <= 4000.0 ? t138 * t138 * 3.0 - t138 * t138 * t138 * 2.0 : 1.0) *
    ((X_idx_22 + t882 * t137) * t987 - t881)) : (X_idx_22 + t882 * t137) * t987);
  x[41ULL] = 1.0;
  t137 = X_idx_11 * 1.0000000000000002E-6;
  t987 = t137 >= 0.0 ? 1.0 : -1.0;
  t879 = t137 * t987 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t881 = 7.6751803075053254E+6;
  t616 = t879 <= 200.0;
  t880 = t987 * 4.3437498645632981E-5 / 1.2998093762025389E-6 *
    0.00022107788705467982 / 4.8875432144561768E-8;
  t984 = (t879 - 2000.0) / 2000.0;
  t138 = 6.9 / (t879 == 0.0 ? 1.0E-16 : t879) + 1.4237685041404136E-6;
  X_idx_24 = log10(t138 <= 2.5E-308 ? 2.5E-308 : t138) * -1.8 * (log10(t138 <=
    2.5E-308 ? 2.5E-308 : t138) * -1.8);
  t135 = t880 * 2000.0 / 4.0E+6;
  t882 = (t616 ? 0.0 : 1.0 / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24)) * 2.024 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0 * 887.1;
  X_idx_12 = t879 * t879;
  X_idx_22 = -(log10(t138 <= 2.5E-308 ? 2.5E-308 : t138) * -1.8 *
               (0.43429448190325176 / (t138 == 0.0 ? 1.0E-16 : t138) * (-(t880 *
    6.9) / (X_idx_12 == 0.0 ? 1.0E-16 : X_idx_12))) * -3.6);
  t880 = X_idx_24 * X_idx_24;
  X_idx_22 = ((t616 ? 0.0 : X_idx_22 / (t880 == 0.0 ? 1.0E-16 : t880)) * 2.024 *
              0.038099999999999995 / 0.0014516099999999997 *
              1.2998093762025389E-6 / 1.6895044144640333E-12 * 2.0 / 4.0 * t137 *
              887.1 + t882) * t137;
  x[42ULL] = -(t879 <= 2000.0 ? t881 : t879 <= 4000.0 ? t881 + ((t879 <= 2000.0 ?
    0.0 : t879 <= 4000.0 ? t984 * t135 * 6.0 - t984 * t984 * t135 * 6.0 : 0.0) *
    (t882 * t137 * t137 * t987 - t881 * t137) + (t879 <= 2000.0 ? 0.0 : t879 <=
    4000.0 ? t984 * t984 * 3.0 - t984 * t984 * t984 * 2.0 : 1.0) * ((X_idx_22 +
    t882 * t137) * t987 - t881)) : (X_idx_22 + t882 * t137) * t987);
  x[43ULL] = 1.0;
  X_idx_12 = X_idx_11 * 1.0000000000000002E-6;
  t987 = X_idx_12 >= 0.0 ? 1.0 : -1.0;
  t879 = X_idx_12 * t987 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t881 = 4.7856114367943285E+6;
  t616 = t879 <= 200.0;
  X_idx_22 = t987 * 4.3437498645632981E-5 / 1.2998093762025389E-6 *
    0.00022107788705467982 / 4.8875432144561768E-8;
  t984 = (t879 - 2000.0) / 2000.0;
  X_idx_24 = 6.9 / (t879 == 0.0 ? 1.0E-16 : t879) + 1.4237685041404136E-6;
  t882 = log10(X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8 * (log10
    (X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8);
  t135 = X_idx_22 * 2000.0 / 4.0E+6;
  t138 = (t616 ? 0.0 : 1.0 / (t882 == 0.0 ? 1.0E-16 : t882)) * 1.262 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0 * 887.1;
  t137 = t879 * t879;
  t880 = -(log10(X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8 *
           (0.43429448190325176 / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24) *
            (-(X_idx_22 * 6.9) / (t137 == 0.0 ? 1.0E-16 : t137))) * -3.6);
  X_idx_22 = t882 * t882;
  t880 = ((t616 ? 0.0 : t880 / (X_idx_22 == 0.0 ? 1.0E-16 : X_idx_22)) * 1.262 *
          0.038099999999999995 / 0.0014516099999999997 * 1.2998093762025389E-6 /
          1.6895044144640333E-12 * 2.0 / 4.0 * X_idx_12 * 887.1 + t138) *
    X_idx_12;
  x[44ULL] = -(t879 <= 2000.0 ? t881 : t879 <= 4000.0 ? t881 + ((t879 <= 2000.0 ?
    0.0 : t879 <= 4000.0 ? t984 * t135 * 6.0 - t984 * t984 * t135 * 6.0 : 0.0) *
    (t138 * X_idx_12 * X_idx_12 * t987 - t881 * X_idx_12) + (t879 <= 2000.0 ?
    0.0 : t879 <= 4000.0 ? t984 * t984 * 3.0 - t984 * t984 * t984 * 2.0 : 1.0) *
    ((t880 + t138 * X_idx_12) * t987 - t881)) : (t880 + t138 * X_idx_12) * t987);
  x[45ULL] = 1.0;
  X_idx_12 = X_idx_15 * 1.0000000000000002E-6;
  t882 = X_idx_12 >= 0.0 ? 1.0 : -1.0;
  t879 = X_idx_12 * t882 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t881 = 4.7856114367943285E+6;
  t616 = t879 <= 200.0;
  X_idx_22 = t882 * 4.3437498645632981E-5 / 1.2998093762025389E-6 *
    0.00022107788705467982 / 4.8875432144561768E-8;
  t984 = (t879 - 2000.0) / 2000.0;
  X_idx_24 = 6.9 / (t879 == 0.0 ? 1.0E-16 : t879) + 1.4237685041404136E-6;
  t987 = log10(X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8 * (log10
    (X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8);
  t135 = X_idx_22 * 2000.0 / 4.0E+6;
  t138 = (t616 ? 0.0 : 1.0 / (t987 == 0.0 ? 1.0E-16 : t987)) * 1.262 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0 * 887.1;
  t137 = t879 * t879;
  t880 = -(log10(X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8 *
           (0.43429448190325176 / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24) *
            (-(X_idx_22 * 6.9) / (t137 == 0.0 ? 1.0E-16 : t137))) * -3.6);
  X_idx_22 = t987 * t987;
  t137 = ((t616 ? 0.0 : t880 / (X_idx_22 == 0.0 ? 1.0E-16 : X_idx_22)) * 1.262 *
          0.038099999999999995 / 0.0014516099999999997 * 1.2998093762025389E-6 /
          1.6895044144640333E-12 * 2.0 / 4.0 * X_idx_12 * 887.1 + t138) *
    X_idx_12;
  x[46ULL] = -(t879 <= 2000.0 ? t881 : t879 <= 4000.0 ? t881 + ((t879 <= 2000.0 ?
    0.0 : t879 <= 4000.0 ? t984 * t135 * 6.0 - t984 * t984 * t135 * 6.0 : 0.0) *
    (t138 * X_idx_12 * X_idx_12 * t882 - t881 * X_idx_12) + (t879 <= 2000.0 ?
    0.0 : t879 <= 4000.0 ? t984 * t984 * 3.0 - t984 * t984 * t984 * 2.0 : 1.0) *
    ((t137 + t138 * X_idx_12) * t882 - t881)) : (t137 + t138 * X_idx_12) * t882);
  x[47ULL] = 1.0;
  t137 = X_idx_15 * 1.0000000000000002E-6;
  t881 = t137 >= 0.0 ? 1.0 : -1.0;
  t984 = t137 * t881 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t135 = 7.6751803075053254E+6;
  t616 = t984 <= 200.0;
  t880 = t881 * 4.3437498645632981E-5 / 1.2998093762025389E-6 *
    0.00022107788705467982 / 4.8875432144561768E-8;
  t138 = (t984 - 2000.0) / 2000.0;
  t879 = 6.9 / (t984 == 0.0 ? 1.0E-16 : t984) + 1.4237685041404136E-6;
  X_idx_24 = log10(t879 <= 2.5E-308 ? 2.5E-308 : t879) * -1.8 * (log10(t879 <=
    2.5E-308 ? 2.5E-308 : t879) * -1.8);
  X_idx_12 = t880 * 2000.0 / 4.0E+6;
  t882 = (t616 ? 0.0 : 1.0 / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24)) * 2.024 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0 * 887.1;
  X_idx_22 = t984 * t984;
  X_idx_22 = -(log10(t879 <= 2.5E-308 ? 2.5E-308 : t879) * -1.8 *
               (0.43429448190325176 / (t879 == 0.0 ? 1.0E-16 : t879) * (-(t880 *
    6.9) / (X_idx_22 == 0.0 ? 1.0E-16 : X_idx_22))) * -3.6);
  t987 = X_idx_24 * X_idx_24;
  X_idx_24 = ((t616 ? 0.0 : X_idx_22 / (t987 == 0.0 ? 1.0E-16 : t987)) * 2.024 *
              0.038099999999999995 / 0.0014516099999999997 *
              1.2998093762025389E-6 / 1.6895044144640333E-12 * 2.0 / 4.0 * t137 *
              887.1 + t882) * t137;
  x[48ULL] = -(t984 <= 2000.0 ? t135 : t984 <= 4000.0 ? t135 + ((t984 <= 2000.0 ?
    0.0 : t984 <= 4000.0 ? t138 * X_idx_12 * 6.0 - t138 * t138 * X_idx_12 * 6.0 :
    0.0) * (t882 * t137 * t137 * t881 - t135 * t137) + (t984 <= 2000.0 ? 0.0 :
    t984 <= 4000.0 ? t138 * t138 * 3.0 - t138 * t138 * t138 * 2.0 : 1.0) *
    ((X_idx_24 + t882 * t137) * t881 - t135)) : (X_idx_24 + t882 * t137) * t881);
  x[49ULL] = 1.0;
  t987 = X_idx_40 * 1.0000000000000002E-6;
  t879 = t987 >= 0.0 ? 1.0 : -1.0;
  t881 = t987 * t879 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t984 = 7.6751803075053254E+6;
  t616 = t881 <= 200.0;
  t880 = t879 * 4.3437498645632981E-5 / 1.2998093762025389E-6 *
    0.00022107788705467982 / 4.8875432144561768E-8;
  t135 = (t881 - 2000.0) / 2000.0;
  X_idx_22 = 6.9 / (t881 == 0.0 ? 1.0E-16 : t881) + 1.4237685041404136E-6;
  t137 = log10(X_idx_22 <= 2.5E-308 ? 2.5E-308 : X_idx_22) * -1.8 * (log10
    (X_idx_22 <= 2.5E-308 ? 2.5E-308 : X_idx_22) * -1.8);
  t138 = t880 * 2000.0 / 4.0E+6;
  X_idx_12 = (t616 ? 0.0 : 1.0 / (t137 == 0.0 ? 1.0E-16 : t137)) * 2.024 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0 * 887.1;
  X_idx_24 = t881 * t881;
  X_idx_24 = -(log10(X_idx_22 <= 2.5E-308 ? 2.5E-308 : X_idx_22) * -1.8 *
               (0.43429448190325176 / (X_idx_22 == 0.0 ? 1.0E-16 : X_idx_22) * (
    -(t880 * 6.9) / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24))) * -3.6);
  X_idx_22 = t137 * t137;
  t880 = ((t616 ? 0.0 : X_idx_24 / (X_idx_22 == 0.0 ? 1.0E-16 : X_idx_22)) *
          2.024 * 0.038099999999999995 / 0.0014516099999999997 *
          1.2998093762025389E-6 / 1.6895044144640333E-12 * 2.0 / 4.0 * t987 *
          887.1 + X_idx_12) * t987;
  x[50ULL] = -(t881 <= 2000.0 ? t984 : t881 <= 4000.0 ? t984 + ((t881 <= 2000.0 ?
    0.0 : t881 <= 4000.0 ? t135 * t138 * 6.0 - t135 * t135 * t138 * 6.0 : 0.0) *
    (X_idx_12 * t987 * t987 * t879 - t984 * t987) + (t881 <= 2000.0 ? 0.0 : t881
    <= 4000.0 ? t135 * t135 * 3.0 - t135 * t135 * t135 * 2.0 : 1.0) * ((t880 +
    X_idx_12 * t987) * t879 - t984)) : (t880 + X_idx_12 * t987) * t879);
  x[51ULL] = 1.0;
  t987 = X_idx_40 * 1.0000000000000002E-6;
  t879 = t987 >= 0.0 ? 1.0 : -1.0;
  t881 = t987 * t879 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t984 = 7.6751803075053254E+6;
  t616 = t881 <= 200.0;
  X_idx_22 = t879 * 4.3437498645632981E-5 / 1.2998093762025389E-6 *
    0.00022107788705467982 / 4.8875432144561768E-8;
  t135 = (t881 - 2000.0) / 2000.0;
  X_idx_24 = 6.9 / (t881 == 0.0 ? 1.0E-16 : t881) + 1.4237685041404136E-6;
  t880 = log10(X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8 * (log10
    (X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8);
  t138 = X_idx_22 * 2000.0 / 4.0E+6;
  X_idx_12 = (t616 ? 0.0 : 1.0 / (t880 == 0.0 ? 1.0E-16 : t880)) * 2.024 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0 * 887.1;
  t137 = t881 * t881;
  X_idx_22 = -(log10(X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8 *
               (0.43429448190325176 / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24) * (
    -(X_idx_22 * 6.9) / (t137 == 0.0 ? 1.0E-16 : t137))) * -3.6);
  t137 = t880 * t880;
  t880 = ((t616 ? 0.0 : X_idx_22 / (t137 == 0.0 ? 1.0E-16 : t137)) * 2.024 *
          0.038099999999999995 / 0.0014516099999999997 * 1.2998093762025389E-6 /
          1.6895044144640333E-12 * 2.0 / 4.0 * t987 * 887.1 + X_idx_12) * t987;
  x[52ULL] = -(t881 <= 2000.0 ? t984 : t881 <= 4000.0 ? t984 + ((t881 <= 2000.0 ?
    0.0 : t881 <= 4000.0 ? t135 * t138 * 6.0 - t135 * t135 * t138 * 6.0 : 0.0) *
    (X_idx_12 * t987 * t987 * t879 - t984 * t987) + (t881 <= 2000.0 ? 0.0 : t881
    <= 4000.0 ? t135 * t135 * 3.0 - t135 * t135 * t135 * 2.0 : 1.0) * ((t880 +
    X_idx_12 * t987) * t879 - t984)) : (t880 + X_idx_12 * t987) * t879);
  x[53ULL] = 1.0;
  t879 = X_idx_45 * 1.0000000000000002E-6;
  t881 = t879 >= 0.0 ? 1.0 : -1.0;
  t984 = t879 * t881 * 0.038099999999999995 / 0.0011400918279693697 /
    0.00022107788705467982;
  t135 = 7.6751803075053254E+6;
  t616 = t984 <= 200.0;
  X_idx_22 = t881 * 4.3437498645632981E-5 / 1.2998093762025389E-6 *
    0.00022107788705467982 / 4.8875432144561768E-8;
  t138 = (t984 - 2000.0) / 2000.0;
  X_idx_24 = 6.9 / (t984 == 0.0 ? 1.0E-16 : t984) + 1.4237685041404136E-6;
  t137 = log10(X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8 * (log10
    (X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8);
  X_idx_12 = X_idx_22 * 2000.0 / 4.0E+6;
  t882 = (t616 ? 0.0 : 1.0 / (t137 == 0.0 ? 1.0E-16 : t137)) * 2.024 /
    0.038099999999999995 / 1.2998093762025389E-6 / 2.0 * 887.1;
  t880 = t984 * t984;
  t987 = -(log10(X_idx_24 <= 2.5E-308 ? 2.5E-308 : X_idx_24) * -1.8 *
           (0.43429448190325176 / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24) *
            (-(X_idx_22 * 6.9) / (t880 == 0.0 ? 1.0E-16 : t880))) * -3.6);
  t137 *= t137;
  t137 = ((t616 ? 0.0 : t987 / (t137 == 0.0 ? 1.0E-16 : t137)) * 2.024 *
          0.038099999999999995 / 0.0014516099999999997 * 1.2998093762025389E-6 /
          1.6895044144640333E-12 * 2.0 / 4.0 * t879 * 887.1 + t882) * t879;
  x[54ULL] = -(t984 <= 2000.0 ? t135 : t984 <= 4000.0 ? t135 + ((t984 <= 2000.0 ?
    0.0 : t984 <= 4000.0 ? t138 * X_idx_12 * 6.0 - t138 * t138 * X_idx_12 * 6.0 :
    0.0) * (t882 * t879 * t879 * t881 - t135 * t879) + (t984 <= 2000.0 ? 0.0 :
    t984 <= 4000.0 ? t138 * t138 * 3.0 - t138 * t138 * t138 * 2.0 : 1.0) *
    ((t137 + t882 * t879) * t881 - t135)) : (t137 + t882 * t879) * t881);
  x[55ULL] = 1.0;
  t879 = X_idx_56 * 100000.0;
  t987 = t879 * t879 + 11.290976964651074;
  if (t987 < 0.0) {
    t880 = -sqrt(-t987);
  } else {
    t880 = sqrt(t987);
  }

  if (t987 < 0.0) {
    t137 = -sqrt(-t987);
  } else {
    t137 = sqrt(t987);
  }

  if (t137 < 0.0) {
    t137 = -sqrt(-t137);
  } else {
    t137 = sqrt(t137);
  }

  X_idx_22 = t880 * t137;
  if (t987 < 0.0) {
    t137 = -sqrt(-t987);
  } else {
    t137 = sqrt(t987);
  }

  if (t137 < 0.0) {
    X_idx_24 = -sqrt(-t137);
  } else {
    X_idx_24 = sqrt(t137);
  }

  if (t987 < 0.0) {
    t137 = -sqrt(-t987);
  } else {
    t137 = sqrt(t987);
  }

  if (t137 < 0.0) {
    t880 = -sqrt(-t137);
  } else {
    t880 = sqrt(t137);
  }

  if (t987 < 0.0) {
    t137 = -sqrt(-t987);
  } else {
    t137 = sqrt(t987);
  }

  if (t137 < 0.0) {
    t137 = -sqrt(-t137);
  } else {
    t137 = sqrt(t137);
  }

  t137 *= t880;
  x[56ULL] = 1.0;
  x[57ULL] = -((X_idx_24 * 5.4133803345444954E-5 - t879 * (1.0 / (X_idx_22 ==
    0.0 ? 1.0E-16 : X_idx_22)) * t879 * 2.7066901672722477E-5) / (t137 == 0.0 ?
    1.0E-16 : t137));
  x[58ULL] = 1.0;
  for (idx = 0ULL; idx < 60ULL; idx++) {
    x0[idx] = 0.0;
  }

  lv_[0] = 0ULL;
  lv_[1] = 1ULL;
  lv_[2] = 2ULL;
  lv_[3] = 3ULL;
  lv_[4] = 4ULL;
  lv_[5] = 5ULL;
  lv_[6] = 6ULL;
  lv_[7] = 7ULL;
  lv_[8] = 8ULL;
  lv_[9] = 9ULL;
  lv_[10] = 10ULL;
  lv_[11] = 11ULL;
  lv_[12] = 12ULL;
  lv_[13] = 13ULL;
  lv_[14] = 14ULL;
  lv_[15] = 15ULL;
  lv_[16] = 16ULL;
  lv_[17] = 17ULL;
  lv_[18] = 18ULL;
  lv_[19] = 19ULL;
  lv_[20] = 20ULL;
  lv_[21] = 21ULL;
  lv_[22] = 22ULL;
  lv_[23] = 23ULL;
  lv_[24] = 24ULL;
  lv_[25] = 25ULL;
  lv_[26] = 26ULL;
  lv_[27] = 27ULL;
  lv_[28] = 28ULL;
  lv_[29] = 29ULL;
  lv_[30] = 30ULL;
  lv_[31] = 31ULL;
  lv_[32] = 32ULL;
  lv_[33] = 33ULL;
  lv_[34] = 34ULL;
  lv_[35] = 35ULL;
  lv_[36] = 36ULL;
  lv_[37] = 37ULL;
  lv_[38] = 38ULL;
  lv_[39] = 39ULL;
  lv_[40] = 40ULL;
  lv_[41] = 41ULL;
  lv_[42] = 42ULL;
  lv_[43] = 43ULL;
  lv_[44] = 44ULL;
  lv_[45] = 45ULL;
  lv_[46] = 46ULL;
  lv_[47] = 47ULL;
  lv_[48] = 48ULL;
  lv_[49] = 49ULL;
  lv_[50] = 50ULL;
  lv_[51] = 51ULL;
  lv_[52] = 52ULL;
  lv_[53] = 53ULL;
  lv_[54] = 54ULL;
  lv_[55] = 55ULL;
  lv_[56] = 56ULL;
  lv_[57] = 57ULL;
  lv_[58] = 58ULL;
  lv_0[0] = 1ULL;
  lv_0[1] = 4ULL;
  lv_0[2] = 0ULL;
  lv_0[3] = 3ULL;
  lv_0[4] = 6ULL;
  lv_0[5] = 9ULL;
  lv_0[6] = 5ULL;
  lv_0[7] = 8ULL;
  lv_0[8] = 11ULL;
  lv_0[9] = 14ULL;
  lv_0[10] = 10ULL;
  lv_0[11] = 13ULL;
  lv_0[12] = 16ULL;
  lv_0[13] = 19ULL;
  lv_0[14] = 15ULL;
  lv_0[15] = 18ULL;
  lv_0[16] = 24ULL;
  lv_0[17] = 42ULL;
  lv_0[18] = 44ULL;
  lv_0[19] = 25ULL;
  lv_0[20] = 26ULL;
  lv_0[21] = 46ULL;
  lv_0[22] = 48ULL;
  lv_0[23] = 27ULL;
  lv_0[24] = 20ULL;
  lv_0[25] = 22ULL;
  lv_0[26] = 23ULL;
  lv_0[27] = 21ULL;
  lv_0[28] = 58ULL;
  lv_0[29] = 2ULL;
  lv_0[30] = 41ULL;
  lv_0[31] = 40ULL;
  lv_0[32] = 43ULL;
  lv_0[33] = 7ULL;
  lv_0[34] = 45ULL;
  lv_0[35] = 47ULL;
  lv_0[36] = 12ULL;
  lv_0[37] = 49ULL;
  lv_0[38] = 51ULL;
  lv_0[39] = 50ULL;
  lv_0[40] = 52ULL;
  lv_0[41] = 17ULL;
  lv_0[42] = 53ULL;
  lv_0[43] = 55ULL;
  lv_0[44] = 54ULL;
  lv_0[45] = 56ULL;
  lv_0[46] = 57ULL;
  lv_0[47] = 32ULL;
  lv_0[48] = 33ULL;
  lv_0[49] = 30ULL;
  lv_0[50] = 31ULL;
  lv_0[51] = 28ULL;
  lv_0[52] = 29ULL;
  lv_0[53] = 38ULL;
  lv_0[54] = 39ULL;
  lv_0[55] = 36ULL;
  lv_0[56] = 37ULL;
  lv_0[57] = 34ULL;
  lv_0[58] = 35ULL;
  lv_1[0] = 1.0;
  lv_1[1] = 1.0;
  lv_1[2] = 1.0;
  lv_1[3] = 1.0;
  lv_1[4] = 1.0;
  lv_1[5] = 1.0;
  lv_1[6] = 1.0;
  lv_1[7] = 1.0;
  lv_1[8] = 1.0;
  lv_1[9] = 1.0;
  lv_1[10] = 1.0;
  lv_1[11] = 1.0;
  lv_1[12] = 1.0;
  lv_1[13] = 1.0;
  lv_1[14] = 1.0;
  lv_1[15] = 1.0;
  lv_1[16] = 1.0;
  lv_1[17] = 1.0;
  lv_1[18] = 1.0;
  lv_1[19] = 1.0;
  lv_1[20] = 1.0;
  lv_1[21] = 1.0;
  lv_1[22] = 1.0;
  lv_1[23] = 1.0;
  lv_1[24] = 1.0;
  lv_1[25] = 1.0;
  lv_1[26] = 1.0;
  lv_1[27] = 1.0;
  lv_1[28] = 1.0;
  lv_1[29] = 1.0;
  lv_1[30] = 1.0;
  lv_1[31] = 1.0;
  lv_1[32] = 1.0;
  lv_1[33] = 1.0;
  lv_1[34] = 1.0;
  lv_1[35] = 1.0;
  lv_1[36] = 1.0;
  lv_1[37] = 1.0;
  lv_1[38] = 1.0;
  lv_1[39] = 1.0;
  lv_1[40] = 1.0;
  lv_1[41] = 1.0;
  lv_1[42] = 1.0;
  lv_1[43] = 1.0;
  lv_1[44] = 1.0;
  lv_1[45] = 1.0;
  lv_1[46] = 1.0;
  lv_1[47] = 1.0;
  lv_1[48] = 1.0;
  lv_1[49] = 1.0;
  lv_1[50] = 1.0;
  lv_1[51] = 1.0;
  lv_1[52] = 1.0;
  lv_1[53] = 1.0;
  lv_1[54] = 1.0;
  lv_1[55] = 1.0;
  lv_1[56] = 1.0;
  lv_1[57] = 1.0;
  lv_1[58] = 1.0;
  for (idx = 0ULL; idx < 59ULL; idx++) {
    x0[lv_[idx]] += x[lv_0[idx]] * lv_1[idx];
  }

  lv_2[0] = 1.0;
  lv_2[1] = 999999.99999999988;
  lv_2[2] = 1.0;
  lv_2[3] = 999999.99999999988;
  lv_2[4] = 1.0;
  lv_2[5] = 999999.99999999988;
  lv_2[6] = 1.0;
  lv_2[7] = 999999.99999999988;
  lv_2[8] = 999999.99999999988;
  lv_2[9] = 1.0E-5;
  lv_2[10] = 1.0E-5;
  lv_2[11] = 1.0E-5;
  lv_2[12] = 1.0;
  lv_2[13] = 1.0E-5;
  lv_2[14] = 1.0E-5;
  lv_2[15] = 1.0;
  lv_2[16] = 1.0E-5;
  lv_2[17] = 1.0E-5;
  lv_2[18] = 999999.99999999988;
  lv_2[19] = 1.0;
  lv_2[20] = 1.0E-5;
  lv_2[21] = 1.162487358622446;
  lv_2[22] = 1.0E-5;
  lv_2[23] = 1.162487358622446;
  lv_2[24] = 1.0E-5;
  lv_2[25] = 2.7089708162915591;
  lv_2[26] = 1.0E-5;
  lv_2[27] = 2.7089708162915591;
  lv_2[28] = 1.0E-5;
  lv_2[29] = 2.7089708162915591;
  lv_2[30] = 999999.99999999988;
  lv_2[31] = 999999.99999999988;
  lv_2[32] = 999999.99999999988;
  lv_2[33] = 1.0E-5;
  lv_2[34] = 2.7089708162915591;
  lv_2[35] = 1.0E-5;
  lv_2[36] = 2.7089708162915591;
  lv_2[37] = 1.0E-5;
  lv_2[38] = 2.7089708162915591;
  lv_2[39] = 999999.99999999988;
  lv_2[40] = 999999.99999999988;
  lv_2[41] = 999999.99999999988;
  lv_2[42] = 1.0E-5;
  lv_2[43] = 1.0E-5;
  lv_2[44] = 1.0E-5;
  lv_2[45] = 1.0E-5;
  lv_2[46] = 1.0E-5;
  lv_2[47] = 999999.99999999988;
  lv_2[48] = 1.0E-5;
  lv_2[49] = 1.0E-5;
  lv_2[50] = 1.0E-5;
  lv_2[51] = 1.0E-5;
  lv_2[52] = 1.0E-5;
  lv_2[53] = 999999.99999999988;
  lv_2[54] = 1.0E-5;
  lv_2[55] = 1.0E-5;
  lv_2[56] = 1.0E-5;
  lv_2[57] = 1.0E-5;
  lv_2[58] = 1.0E-5;
  lv_2[59] = 999999.99999999988;
  lv_2[60] = 1.0E-5;
  lv_2[61] = 1.0E-5;
  lv_2[62] = 1.0E-5;
  lv_2[63] = 1.0E-5;
  lv_2[64] = 1.0E-5;
  lv_2[65] = 999999.99999999988;
  lv_2[66] = 999999.99999999988;
  lv_2[67] = 1.0E-5;
  lv_2[68] = 0.33862135203644489;
  lv_2[69] = 1.0E-5;
  lv_2[70] = 1.0;
  lv_2[71] = 999999.99999999988;
  lv_3[0] = 1.0;
  lv_3[1] = 100000.0;
  lv_3[2] = 1.0;
  lv_3[3] = 100000.0;
  lv_3[4] = 1.0;
  lv_3[5] = 100000.0;
  lv_3[6] = 1.0;
  lv_3[7] = 100000.0;
  lv_3[8] = 1.0;
  lv_3[9] = 100000.0;
  lv_3[10] = 100000.0;
  lv_3[11] = 1.0000000000000002E-6;
  lv_3[12] = 100000.0;
  lv_3[13] = 100000.0;
  lv_3[14] = 100000.0;
  lv_3[15] = 1.0000000000000002E-6;
  lv_3[16] = 100000.0;
  lv_3[17] = 100000.0;
  lv_3[18] = 100000.0;
  lv_3[19] = 100000.0;
  lv_3[20] = 100000.0;
  lv_3[21] = 100000.0;
  lv_3[22] = 1.0000000000000002E-6;
  lv_3[23] = 1.0;
  lv_3[24] = 100000.0;
  lv_3[25] = 100000.0;
  lv_3[26] = 1.0000000000000002E-6;
  lv_3[27] = 100000.0;
  lv_3[28] = 100000.0;
  lv_3[29] = 1.0000000000000002E-6;
  lv_3[30] = 100000.0;
  lv_3[31] = 1.0000000000000002E-6;
  lv_3[32] = 100000.0;
  lv_3[33] = 100000.0;
  lv_3[34] = 100000.0;
  lv_3[35] = 100000.0;
  lv_3[36] = 1.0000000000000002E-6;
  lv_3[37] = 100000.0;
  lv_3[38] = 100000.0;
  lv_3[39] = 100000.0;
  lv_3[40] = 1.0000000000000002E-6;
  lv_3[41] = 1.0000000000000002E-6;
  lv_3[42] = 100000.0;
  lv_3[43] = 100000.0;
  lv_3[44] = 100000.0;
  lv_3[45] = 1.0000000000000002E-6;
  lv_3[46] = 100000.0;
  lv_3[47] = 100000.0;
  lv_3[48] = 100000.0;
  lv_3[49] = 100000.0;
  lv_3[50] = 100000.0;
  lv_3[51] = 100000.0;
  lv_3[52] = 1.0000000000000002E-6;
  lv_3[53] = 1.0;
  lv_3[54] = 1.0000000000000002E-6;
  lv_3[55] = 1.0000000000000002E-6;
  lv_3[56] = 100000.0;
  lv_3[57] = 100000.0;
  lv_3[58] = 100000.0;
  lv_3[59] = 1.0000000000000002E-6;
  lv_3[60] = 100000.0;
  lv_3[61] = 1.0000000000000002E-6;
  lv_3[62] = 100000.0;
  lv_3[63] = 1.0000000000000002E-6;
  lv_3[64] = 100000.0;
  lv_3[65] = 100000.0;
  lv_3[66] = 1.0000000000000002E-6;
  lv_3[67] = 100000.0;
  lv_3[68] = 1.0000000000000002E-6;
  lv_3[69] = 100000.0;
  lv_3[70] = 1.0000000000000002E-6;
  lv_3[71] = 100000.0;
  lv_4[0] = 0ULL;
  lv_4[1] = 2ULL;
  lv_4[2] = 4ULL;
  lv_4[3] = 6ULL;
  lv_4[4] = 8ULL;
  lv_4[5] = 10ULL;
  lv_4[6] = 12ULL;
  lv_4[7] = 14ULL;
  lv_4[8] = 16ULL;
  lv_4[9] = 16ULL;
  lv_4[10] = 16ULL;
  lv_4[11] = 16ULL;
  lv_4[12] = 19ULL;
  lv_4[13] = 20ULL;
  lv_4[14] = 20ULL;
  lv_4[15] = 20ULL;
  lv_4[16] = 23ULL;
  lv_4[17] = 24ULL;
  lv_4[18] = 24ULL;
  lv_4[19] = 24ULL;
  lv_4[20] = 24ULL;
  lv_4[21] = 24ULL;
  lv_4[22] = 24ULL;
  lv_4[23] = 26ULL;
  lv_4[24] = 27ULL;
  lv_4[25] = 28ULL;
  lv_4[26] = 29ULL;
  lv_4[27] = 30ULL;
  lv_4[28] = 30ULL;
  lv_4[29] = 31ULL;
  lv_4[30] = 32ULL;
  lv_4[31] = 33ULL;
  lv_4[32] = 34ULL;
  lv_4[33] = 34ULL;
  lv_4[34] = 35ULL;
  lv_4[35] = 36ULL;
  lv_4[36] = 36ULL;
  lv_4[37] = 37ULL;
  lv_4[38] = 37ULL;
  lv_4[39] = 38ULL;
  lv_4[40] = 39ULL;
  lv_4[41] = 41ULL;
  lv_4[42] = 42ULL;
  lv_4[43] = 42ULL;
  lv_4[44] = 43ULL;
  lv_4[45] = 44ULL;
  lv_4[46] = 45ULL;
  lv_4[47] = 45ULL;
  lv_4[48] = 45ULL;
  lv_4[49] = 45ULL;
  lv_4[50] = 45ULL;
  lv_4[51] = 45ULL;
  lv_4[52] = 45ULL;
  lv_4[53] = 45ULL;
  lv_4[54] = 45ULL;
  lv_4[55] = 45ULL;
  lv_4[56] = 46ULL;
  lv_4[57] = 47ULL;
  lv_4[58] = 47ULL;
  lv_4[59] = 47ULL;
  lv_4[60] = 48ULL;
  lv_4[61] = 49ULL;
  lv_4[62] = 50ULL;
  lv_4[63] = 51ULL;
  lv_4[64] = 52ULL;
  lv_4[65] = 53ULL;
  lv_4[66] = 53ULL;
  lv_4[67] = 54ULL;
  lv_4[68] = 55ULL;
  lv_4[69] = 56ULL;
  lv_4[70] = 57ULL;
  lv_4[71] = 58ULL;
  lv_4[72] = 59ULL;
  lv_5[0] = 0ULL;
  lv_5[1] = 1ULL;
  lv_5[2] = 0ULL;
  lv_5[3] = 1ULL;
  lv_5[4] = 2ULL;
  lv_5[5] = 3ULL;
  lv_5[6] = 2ULL;
  lv_5[7] = 3ULL;
  lv_5[8] = 4ULL;
  lv_5[9] = 5ULL;
  lv_5[10] = 4ULL;
  lv_5[11] = 5ULL;
  lv_5[12] = 6ULL;
  lv_5[13] = 7ULL;
  lv_5[14] = 6ULL;
  lv_5[15] = 7ULL;
  lv_5[16] = 21ULL;
  lv_5[17] = 46ULL;
  lv_5[18] = 49ULL;
  lv_5[19] = 21ULL;
  lv_5[20] = 23ULL;
  lv_5[21] = 52ULL;
  lv_5[22] = 55ULL;
  lv_5[23] = 23ULL;
  lv_5[24] = 18ULL;
  lv_5[25] = 19ULL;
  lv_5[26] = 19ULL;
  lv_5[27] = 19ULL;
  lv_5[28] = 69ULL;
  lv_5[29] = 1ULL;
  lv_5[30] = 43ULL;
  lv_5[31] = 43ULL;
  lv_5[32] = 46ULL;
  lv_5[33] = 3ULL;
  lv_5[34] = 49ULL;
  lv_5[35] = 52ULL;
  lv_5[36] = 5ULL;
  lv_5[37] = 55ULL;
  lv_5[38] = 58ULL;
  lv_5[39] = 58ULL;
  lv_5[40] = 61ULL;
  lv_5[41] = 7ULL;
  lv_5[42] = 61ULL;
  lv_5[43] = 64ULL;
  lv_5[44] = 64ULL;
  lv_5[45] = 68ULL;
  lv_5[46] = 68ULL;
  lv_5[47] = 29ULL;
  lv_5[48] = 29ULL;
  lv_5[49] = 27ULL;
  lv_5[50] = 27ULL;
  lv_5[51] = 25ULL;
  lv_5[52] = 25ULL;
  lv_5[53] = 38ULL;
  lv_5[54] = 38ULL;
  lv_5[55] = 36ULL;
  lv_5[56] = 36ULL;
  lv_5[57] = 34ULL;
  lv_5[58] = 34ULL;
  lv_5[59] = 0ULL;
  for (idx = 0ULL; idx < 72ULL; idx++) {
    for (id2_ = lv_4[idx]; id2_ < lv_4[idx + 1ULL]; id2_++) {
      out.mX[id2_] = x0[id2_] * lv_2[lv_5[id2_]] * lv_3[idx];
    }
  }

  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mDUF_P;
  out.mJc[0ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mDTF_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mDDF_P;
  out.mJc[0ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mTDUF_P;
  out.mJc[0ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_tdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mTDXF_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 2;
  out.mJc[2ULL] = 5;
  out.mJc[3ULL] = 7;
  out.mJc[4ULL] = 10;
  out.mJc[5ULL] = 12;
  out.mJc[6ULL] = 15;
  out.mJc[7ULL] = 17;
  out.mJc[8ULL] = 20;
  out.mJc[9ULL] = 21;
  out.mJc[10ULL] = 23;
  out.mJc[11ULL] = 25;
  out.mJc[12ULL] = 30;
  out.mJc[13ULL] = 32;
  out.mJc[14ULL] = 34;
  out.mJc[15ULL] = 36;
  out.mJc[16ULL] = 41;
  out.mJc[17ULL] = 43;
  out.mJc[18ULL] = 45;
  out.mJc[19ULL] = 47;
  out.mJc[20ULL] = 48;
  out.mJc[21ULL] = 49;
  out.mJc[22ULL] = 52;
  out.mJc[23ULL] = 56;
  out.mJc[24ULL] = 57;
  out.mJc[25ULL] = 59;
  out.mJc[26ULL] = 62;
  out.mJc[27ULL] = 64;
  out.mJc[28ULL] = 67;
  out.mJc[29ULL] = 69;
  out.mJc[30ULL] = 72;
  out.mJc[31ULL] = 74;
  out.mJc[32ULL] = 76;
  out.mJc[33ULL] = 79;
  out.mJc[34ULL] = 81;
  out.mJc[35ULL] = 83;
  out.mJc[36ULL] = 85;
  out.mJc[37ULL] = 87;
  out.mJc[38ULL] = 90;
  out.mJc[39ULL] = 92;
  out.mJc[40ULL] = 94;
  out.mJc[41ULL] = 98;
  out.mJc[42ULL] = 100;
  out.mJc[43ULL] = 103;
  out.mJc[44ULL] = 105;
  out.mJc[45ULL] = 107;
  out.mJc[46ULL] = 110;
  out.mJc[47ULL] = 113;
  out.mJc[48ULL] = 116;
  out.mJc[49ULL] = 117;
  out.mJc[50ULL] = 119;
  out.mJc[51ULL] = 120;
  out.mJc[52ULL] = 122;
  out.mJc[53ULL] = 124;
  out.mJc[54ULL] = 125;
  out.mJc[55ULL] = 127;
  out.mJc[56ULL] = 130;
  out.mJc[57ULL] = 132;
  out.mJc[58ULL] = 135;
  out.mJc[59ULL] = 138;
  out.mJc[60ULL] = 141;
  out.mJc[61ULL] = 143;
  out.mJc[62ULL] = 146;
  out.mJc[63ULL] = 148;
  out.mJc[64ULL] = 151;
  out.mJc[65ULL] = 153;
  out.mJc[66ULL] = 156;
  out.mJc[67ULL] = 159;
  out.mJc[68ULL] = 161;
  out.mJc[69ULL] = 164;
  out.mJc[70ULL] = 166;
  out.mJc[71ULL] = 169;
  out.mJc[72ULL] = 171;
  out.mIr[0ULL] = 0;
  out.mIr[1ULL] = 1;
  out.mIr[2ULL] = 0;
  out.mIr[3ULL] = 1;
  out.mIr[4ULL] = 44;
  out.mIr[5ULL] = 2;
  out.mIr[6ULL] = 3;
  out.mIr[7ULL] = 2;
  out.mIr[8ULL] = 3;
  out.mIr[9ULL] = 50;
  out.mIr[10ULL] = 4;
  out.mIr[11ULL] = 5;
  out.mIr[12ULL] = 4;
  out.mIr[13ULL] = 5;
  out.mIr[14ULL] = 56;
  out.mIr[15ULL] = 6;
  out.mIr[16ULL] = 7;
  out.mIr[17ULL] = 6;
  out.mIr[18ULL] = 7;
  out.mIr[19ULL] = 62;
  out.mIr[20ULL] = 70;
  out.mIr[21ULL] = 20;
  out.mIr[22ULL] = 45;
  out.mIr[23ULL] = 20;
  out.mIr[24ULL] = 48;
  out.mIr[25ULL] = 21;
  out.mIr[26ULL] = 46;
  out.mIr[27ULL] = 47;
  out.mIr[28ULL] = 49;
  out.mIr[29ULL] = 53;
  out.mIr[30ULL] = 20;
  out.mIr[31ULL] = 21;
  out.mIr[32ULL] = 22;
  out.mIr[33ULL] = 51;
  out.mIr[34ULL] = 22;
  out.mIr[35ULL] = 54;
  out.mIr[36ULL] = 23;
  out.mIr[37ULL] = 52;
  out.mIr[38ULL] = 53;
  out.mIr[39ULL] = 55;
  out.mIr[40ULL] = 59;
  out.mIr[41ULL] = 22;
  out.mIr[42ULL] = 23;
  out.mIr[43ULL] = 9;
  out.mIr[44ULL] = 11;
  out.mIr[45ULL] = 10;
  out.mIr[46ULL] = 14;
  out.mIr[47ULL] = 10;
  out.mIr[48ULL] = 9;
  out.mIr[49ULL] = 17;
  out.mIr[50ULL] = 35;
  out.mIr[51ULL] = 37;
  out.mIr[52ULL] = 18;
  out.mIr[53ULL] = 19;
  out.mIr[54ULL] = 40;
  out.mIr[55ULL] = 71;
  out.mIr[56ULL] = 19;
  out.mIr[57ULL] = 17;
  out.mIr[58ULL] = 19;
  out.mIr[59ULL] = 17;
  out.mIr[60ULL] = 67;
  out.mIr[61ULL] = 69;
  out.mIr[62ULL] = 1;
  out.mIr[63ULL] = 47;
  out.mIr[64ULL] = 42;
  out.mIr[65ULL] = 44;
  out.mIr[66ULL] = 45;
  out.mIr[67ULL] = 42;
  out.mIr[68ULL] = 43;
  out.mIr[69ULL] = 41;
  out.mIr[70ULL] = 43;
  out.mIr[71ULL] = 47;
  out.mIr[72ULL] = 45;
  out.mIr[73ULL] = 46;
  out.mIr[74ULL] = 3;
  out.mIr[75ULL] = 53;
  out.mIr[76ULL] = 48;
  out.mIr[77ULL] = 50;
  out.mIr[78ULL] = 51;
  out.mIr[79ULL] = 48;
  out.mIr[80ULL] = 49;
  out.mIr[81ULL] = 51;
  out.mIr[82ULL] = 52;
  out.mIr[83ULL] = 57;
  out.mIr[84ULL] = 60;
  out.mIr[85ULL] = 5;
  out.mIr[86ULL] = 59;
  out.mIr[87ULL] = 54;
  out.mIr[88ULL] = 56;
  out.mIr[89ULL] = 57;
  out.mIr[90ULL] = 54;
  out.mIr[91ULL] = 55;
  out.mIr[92ULL] = 57;
  out.mIr[93ULL] = 58;
  out.mIr[94ULL] = 58;
  out.mIr[95ULL] = 59;
  out.mIr[96ULL] = 61;
  out.mIr[97ULL] = 65;
  out.mIr[98ULL] = 7;
  out.mIr[99ULL] = 65;
  out.mIr[100ULL] = 60;
  out.mIr[101ULL] = 62;
  out.mIr[102ULL] = 63;
  out.mIr[103ULL] = 60;
  out.mIr[104ULL] = 61;
  out.mIr[105ULL] = 63;
  out.mIr[106ULL] = 64;
  out.mIr[107ULL] = 31;
  out.mIr[108ULL] = 64;
  out.mIr[109ULL] = 65;
  out.mIr[110ULL] = 11;
  out.mIr[111ULL] = 33;
  out.mIr[112ULL] = 35;
  out.mIr[113ULL] = 14;
  out.mIr[114ULL] = 24;
  out.mIr[115ULL] = 26;
  out.mIr[116ULL] = 16;
  out.mIr[117ULL] = 14;
  out.mIr[118ULL] = 16;
  out.mIr[119ULL] = 13;
  out.mIr[120ULL] = 11;
  out.mIr[121ULL] = 13;
  out.mIr[122ULL] = 66;
  out.mIr[123ULL] = 71;
  out.mIr[124ULL] = 70;
  out.mIr[125ULL] = 8;
  out.mIr[126ULL] = 66;
  out.mIr[127ULL] = 32;
  out.mIr[128ULL] = 66;
  out.mIr[129ULL] = 68;
  out.mIr[130ULL] = 67;
  out.mIr[131ULL] = 68;
  out.mIr[132ULL] = 26;
  out.mIr[133ULL] = 28;
  out.mIr[134ULL] = 63;
  out.mIr[135ULL] = 24;
  out.mIr[136ULL] = 28;
  out.mIr[137ULL] = 67;
  out.mIr[138ULL] = 29;
  out.mIr[139ULL] = 31;
  out.mIr[140ULL] = 32;
  out.mIr[141ULL] = 28;
  out.mIr[142ULL] = 29;
  out.mIr[143ULL] = 27;
  out.mIr[144ULL] = 30;
  out.mIr[145ULL] = 31;
  out.mIr[146ULL] = 26;
  out.mIr[147ULL] = 27;
  out.mIr[148ULL] = 25;
  out.mIr[149ULL] = 30;
  out.mIr[150ULL] = 32;
  out.mIr[151ULL] = 24;
  out.mIr[152ULL] = 25;
  out.mIr[153ULL] = 33;
  out.mIr[154ULL] = 37;
  out.mIr[155ULL] = 42;
  out.mIr[156ULL] = 38;
  out.mIr[157ULL] = 40;
  out.mIr[158ULL] = 41;
  out.mIr[159ULL] = 37;
  out.mIr[160ULL] = 38;
  out.mIr[161ULL] = 36;
  out.mIr[162ULL] = 39;
  out.mIr[163ULL] = 40;
  out.mIr[164ULL] = 35;
  out.mIr[165ULL] = 36;
  out.mIr[166ULL] = 34;
  out.mIr[167ULL] = 39;
  out.mIr[168ULL] = 41;
  out.mIr[169ULL] = 33;
  out.mIr[170ULL] = 34;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_mode(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out1)
{
  PmIntVector out;
  int32_T M[204];
  int32_T localMode[24];
  int32_T retv[24];
  size_t idx;
  int32_T localMode0[24];
  int32_T retv0[24];
  int32_T localMode1[24];
  int32_T retv1[24];
  int32_T localMode2[24];
  int32_T retv2[24];
  int32_T localMode3[24];
  int32_T retv3[24];
  int32_T localMode4[24];
  int32_T retv4[24];
  int32_T localMode5[24];
  int32_T retv5[24];
  int32_T localMode6[24];
  int32_T retv6[24];
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t50;
  real_T t51;
  real_T t52;
  real_T t53;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T X_idx_11;
  real_T X_idx_15;
  real_T X_idx_29;
  real_T X_idx_1;
  real_T X_idx_3;
  real_T X_idx_5;
  real_T X_idx_40;
  real_T X_idx_7;
  real_T X_idx_45;
  int32_T in_idx_0;
  int32_T in_idx_1;
  int32_T in_idx_2;
  int32_T in_idx_3;
  int32_T in_idx_4;
  int32_T in_idx_5;
  int32_T in_idx_6;
  int32_T in_idx_7;
  int32_T in_idx_8;
  int32_T in_idx_9;
  int32_T in_idx_10;
  int32_T in_idx_11;
  int32_T in_idx_12;
  int32_T in_idx_13;
  int32_T in_idx_14;
  int32_T in_idx_15;
  int32_T in_idx_16;
  int32_T in_idx_17;
  int32_T in_idx_18;
  int32_T in_idx_19;
  int32_T in_idx_20;
  int32_T in_idx_21;
  int32_T in_idx_22;
  int32_T in_idx_23;
  int32_T in_idx_24;
  int32_T in_idx_25;
  int32_T in_idx_26;
  int32_T in_idx_27;
  int32_T in_idx_28;
  int32_T in_idx_29;
  int32_T in_idx_30;
  int32_T in_idx_31;
  int32_T in_idx_32;
  int32_T in_idx_33;
  int32_T in_idx_34;
  int32_T in_idx_35;
  int32_T in_idx_36;
  int32_T in_idx_37;
  int32_T in_idx_38;
  int32_T in_idx_39;
  int32_T in_idx_40;
  int32_T in_idx_41;
  int32_T in_idx_42;
  int32_T in_idx_43;
  int32_T in_idx_44;
  int32_T in_idx_45;
  int32_T in_idx_46;
  int32_T in_idx_47;
  int32_T in_idx_48;
  int32_T in_idx_49;
  int32_T in_idx_50;
  int32_T in_idx_51;
  int32_T in_idx_52;
  int32_T in_idx_53;
  int32_T in_idx_54;
  int32_T in_idx_55;
  int32_T in_idx_56;
  int32_T in_idx_57;
  int32_T in_idx_58;
  int32_T in_idx_59;
  int32_T in_idx_60;
  int32_T in_idx_61;
  int32_T in_idx_62;
  int32_T in_idx_63;
  int32_T in_idx_64;
  int32_T in_idx_65;
  int32_T in_idx_66;
  int32_T in_idx_67;
  int32_T in_idx_68;
  int32_T in_idx_69;
  int32_T in_idx_70;
  int32_T in_idx_71;
  int32_T in_idx_72;
  int32_T in_idx_73;
  int32_T in_idx_74;
  int32_T in_idx_75;
  int32_T in_idx_76;
  int32_T in_idx_77;
  int32_T in_idx_78;
  int32_T in_idx_79;
  int32_T in_idx_80;
  int32_T in_idx_81;
  int32_T in_idx_82;
  int32_T in_idx_83;
  int32_T in_idx_84;
  int32_T in_idx_85;
  int32_T in_idx_86;
  int32_T in_idx_87;
  int32_T in_idx_88;
  int32_T in_idx_89;
  int32_T in_idx_90;
  int32_T in_idx_91;
  int32_T in_idx_92;
  int32_T in_idx_93;
  int32_T in_idx_94;
  int32_T in_idx_95;
  int32_T in_idx_96;
  int32_T in_idx_97;
  int32_T in_idx_98;
  int32_T in_idx_99;
  int32_T in_idx_100;
  int32_T in_idx_101;
  int32_T in_idx_102;
  int32_T in_idx_103;
  int32_T in_idx_104;
  int32_T in_idx_105;
  int32_T in_idx_106;
  int32_T in_idx_107;
  int32_T in_idx_108;
  int32_T in_idx_109;
  int32_T in_idx_110;
  int32_T in_idx_111;
  int32_T in_idx_112;
  int32_T in_idx_113;
  int32_T in_idx_114;
  int32_T in_idx_115;
  int32_T in_idx_116;
  int32_T in_idx_117;
  int32_T in_idx_118;
  int32_T in_idx_119;
  int32_T in_idx_120;
  int32_T in_idx_121;
  int32_T in_idx_122;
  int32_T in_idx_123;
  int32_T in_idx_124;
  int32_T in_idx_125;
  int32_T in_idx_126;
  int32_T in_idx_127;
  int32_T in_idx_128;
  int32_T in_idx_129;
  int32_T in_idx_130;
  int32_T in_idx_131;
  int32_T in_idx_132;
  int32_T in_idx_133;
  int32_T in_idx_134;
  int32_T in_idx_135;
  int32_T in_idx_136;
  int32_T in_idx_137;
  int32_T in_idx_138;
  int32_T in_idx_139;
  int32_T in_idx_140;
  int32_T in_idx_141;
  int32_T in_idx_142;
  int32_T in_idx_143;
  int32_T in_idx_144;
  int32_T in_idx_145;
  int32_T in_idx_146;
  int32_T in_idx_147;
  int32_T in_idx_148;
  int32_T in_idx_149;
  int32_T in_idx_150;
  int32_T in_idx_151;
  int32_T in_idx_152;
  int32_T in_idx_153;
  int32_T in_idx_154;
  int32_T in_idx_155;
  int32_T in_idx_156;
  int32_T in_idx_157;
  int32_T in_idx_158;
  int32_T in_idx_159;
  int32_T in_idx_160;
  int32_T in_idx_161;
  int32_T in_idx_162;
  int32_T in_idx_163;
  int32_T in_idx_164;
  int32_T in_idx_165;
  int32_T in_idx_166;
  int32_T in_idx_167;
  int32_T in_idx_168;
  int32_T in_idx_169;
  int32_T in_idx_170;
  int32_T in_idx_171;
  int32_T in_idx_172;
  int32_T in_idx_173;
  int32_T in_idx_174;
  int32_T in_idx_175;
  int32_T in_idx_176;
  int32_T in_idx_177;
  int32_T in_idx_178;
  int32_T in_idx_179;
  int32_T in_idx_180;
  int32_T in_idx_181;
  int32_T in_idx_182;
  int32_T in_idx_183;
  int32_T in_idx_184;
  int32_T in_idx_185;
  int32_T in_idx_186;
  int32_T in_idx_187;
  int32_T in_idx_188;
  int32_T in_idx_189;
  int32_T in_idx_190;
  int32_T in_idx_191;
  int32_T in_idx_192;
  int32_T in_idx_193;
  int32_T in_idx_194;
  int32_T in_idx_195;
  int32_T in_idx_196;
  int32_T in_idx_197;
  int32_T in_idx_198;
  int32_T in_idx_199;
  int32_T in_idx_200;
  int32_T in_idx_201;
  int32_T in_idx_202;
  int32_T in_idx_203;
  in_idx_0 = in->mM.mX[0];
  in_idx_1 = in->mM.mX[1];
  in_idx_2 = in->mM.mX[2];
  in_idx_3 = in->mM.mX[3];
  in_idx_4 = in->mM.mX[4];
  in_idx_5 = in->mM.mX[5];
  in_idx_6 = in->mM.mX[6];
  in_idx_7 = in->mM.mX[7];
  in_idx_8 = in->mM.mX[8];
  in_idx_9 = in->mM.mX[9];
  in_idx_10 = in->mM.mX[10];
  in_idx_11 = in->mM.mX[11];
  in_idx_12 = in->mM.mX[12];
  in_idx_13 = in->mM.mX[13];
  in_idx_14 = in->mM.mX[14];
  in_idx_15 = in->mM.mX[15];
  in_idx_16 = in->mM.mX[16];
  in_idx_17 = in->mM.mX[17];
  in_idx_18 = in->mM.mX[18];
  in_idx_19 = in->mM.mX[19];
  in_idx_20 = in->mM.mX[20];
  in_idx_21 = in->mM.mX[21];
  in_idx_22 = in->mM.mX[22];
  in_idx_23 = in->mM.mX[23];
  in_idx_24 = in->mM.mX[24];
  in_idx_25 = in->mM.mX[25];
  in_idx_26 = in->mM.mX[26];
  in_idx_27 = in->mM.mX[27];
  in_idx_28 = in->mM.mX[28];
  in_idx_29 = in->mM.mX[29];
  in_idx_30 = in->mM.mX[30];
  in_idx_31 = in->mM.mX[31];
  in_idx_32 = in->mM.mX[32];
  in_idx_33 = in->mM.mX[33];
  in_idx_34 = in->mM.mX[34];
  in_idx_35 = in->mM.mX[35];
  in_idx_36 = in->mM.mX[36];
  in_idx_37 = in->mM.mX[37];
  in_idx_38 = in->mM.mX[38];
  in_idx_39 = in->mM.mX[39];
  in_idx_40 = in->mM.mX[40];
  in_idx_41 = in->mM.mX[41];
  in_idx_42 = in->mM.mX[42];
  in_idx_43 = in->mM.mX[43];
  in_idx_44 = in->mM.mX[44];
  in_idx_45 = in->mM.mX[45];
  in_idx_46 = in->mM.mX[46];
  in_idx_47 = in->mM.mX[47];
  in_idx_48 = in->mM.mX[48];
  in_idx_49 = in->mM.mX[49];
  in_idx_50 = in->mM.mX[50];
  in_idx_51 = in->mM.mX[51];
  in_idx_52 = in->mM.mX[52];
  in_idx_53 = in->mM.mX[53];
  in_idx_54 = in->mM.mX[54];
  in_idx_55 = in->mM.mX[55];
  in_idx_56 = in->mM.mX[56];
  in_idx_57 = in->mM.mX[57];
  in_idx_58 = in->mM.mX[58];
  in_idx_59 = in->mM.mX[59];
  in_idx_60 = in->mM.mX[60];
  in_idx_61 = in->mM.mX[61];
  in_idx_62 = in->mM.mX[62];
  in_idx_63 = in->mM.mX[63];
  in_idx_64 = in->mM.mX[64];
  in_idx_65 = in->mM.mX[65];
  in_idx_66 = in->mM.mX[66];
  in_idx_67 = in->mM.mX[67];
  in_idx_68 = in->mM.mX[68];
  in_idx_69 = in->mM.mX[69];
  in_idx_70 = in->mM.mX[70];
  in_idx_71 = in->mM.mX[71];
  in_idx_72 = in->mM.mX[72];
  in_idx_73 = in->mM.mX[73];
  in_idx_74 = in->mM.mX[74];
  in_idx_75 = in->mM.mX[75];
  in_idx_76 = in->mM.mX[76];
  in_idx_77 = in->mM.mX[77];
  in_idx_78 = in->mM.mX[78];
  in_idx_79 = in->mM.mX[79];
  in_idx_80 = in->mM.mX[80];
  in_idx_81 = in->mM.mX[81];
  in_idx_82 = in->mM.mX[82];
  in_idx_83 = in->mM.mX[83];
  in_idx_84 = in->mM.mX[84];
  in_idx_85 = in->mM.mX[85];
  in_idx_86 = in->mM.mX[86];
  in_idx_87 = in->mM.mX[87];
  in_idx_88 = in->mM.mX[88];
  in_idx_89 = in->mM.mX[89];
  in_idx_90 = in->mM.mX[90];
  in_idx_91 = in->mM.mX[91];
  in_idx_92 = in->mM.mX[92];
  in_idx_93 = in->mM.mX[93];
  in_idx_94 = in->mM.mX[94];
  in_idx_95 = in->mM.mX[95];
  in_idx_96 = in->mM.mX[96];
  in_idx_97 = in->mM.mX[97];
  in_idx_98 = in->mM.mX[98];
  in_idx_99 = in->mM.mX[99];
  in_idx_100 = in->mM.mX[100];
  in_idx_101 = in->mM.mX[101];
  in_idx_102 = in->mM.mX[102];
  in_idx_103 = in->mM.mX[103];
  in_idx_104 = in->mM.mX[104];
  in_idx_105 = in->mM.mX[105];
  in_idx_106 = in->mM.mX[106];
  in_idx_107 = in->mM.mX[107];
  in_idx_108 = in->mM.mX[108];
  in_idx_109 = in->mM.mX[109];
  in_idx_110 = in->mM.mX[110];
  in_idx_111 = in->mM.mX[111];
  in_idx_112 = in->mM.mX[112];
  in_idx_113 = in->mM.mX[113];
  in_idx_114 = in->mM.mX[114];
  in_idx_115 = in->mM.mX[115];
  in_idx_116 = in->mM.mX[116];
  in_idx_117 = in->mM.mX[117];
  in_idx_118 = in->mM.mX[118];
  in_idx_119 = in->mM.mX[119];
  in_idx_120 = in->mM.mX[120];
  in_idx_121 = in->mM.mX[121];
  in_idx_122 = in->mM.mX[122];
  in_idx_123 = in->mM.mX[123];
  in_idx_124 = in->mM.mX[124];
  in_idx_125 = in->mM.mX[125];
  in_idx_126 = in->mM.mX[126];
  in_idx_127 = in->mM.mX[127];
  in_idx_128 = in->mM.mX[128];
  in_idx_129 = in->mM.mX[129];
  in_idx_130 = in->mM.mX[130];
  in_idx_131 = in->mM.mX[131];
  in_idx_132 = in->mM.mX[132];
  in_idx_133 = in->mM.mX[133];
  in_idx_134 = in->mM.mX[134];
  in_idx_135 = in->mM.mX[135];
  in_idx_136 = in->mM.mX[136];
  in_idx_137 = in->mM.mX[137];
  in_idx_138 = in->mM.mX[138];
  in_idx_139 = in->mM.mX[139];
  in_idx_140 = in->mM.mX[140];
  in_idx_141 = in->mM.mX[141];
  in_idx_142 = in->mM.mX[142];
  in_idx_143 = in->mM.mX[143];
  in_idx_144 = in->mM.mX[144];
  in_idx_145 = in->mM.mX[145];
  in_idx_146 = in->mM.mX[146];
  in_idx_147 = in->mM.mX[147];
  in_idx_148 = in->mM.mX[148];
  in_idx_149 = in->mM.mX[149];
  in_idx_150 = in->mM.mX[150];
  in_idx_151 = in->mM.mX[151];
  in_idx_152 = in->mM.mX[152];
  in_idx_153 = in->mM.mX[153];
  in_idx_154 = in->mM.mX[154];
  in_idx_155 = in->mM.mX[155];
  in_idx_156 = in->mM.mX[156];
  in_idx_157 = in->mM.mX[157];
  in_idx_158 = in->mM.mX[158];
  in_idx_159 = in->mM.mX[159];
  in_idx_160 = in->mM.mX[160];
  in_idx_161 = in->mM.mX[161];
  in_idx_162 = in->mM.mX[162];
  in_idx_163 = in->mM.mX[163];
  in_idx_164 = in->mM.mX[164];
  in_idx_165 = in->mM.mX[165];
  in_idx_166 = in->mM.mX[166];
  in_idx_167 = in->mM.mX[167];
  in_idx_168 = in->mM.mX[168];
  in_idx_169 = in->mM.mX[169];
  in_idx_170 = in->mM.mX[170];
  in_idx_171 = in->mM.mX[171];
  in_idx_172 = in->mM.mX[172];
  in_idx_173 = in->mM.mX[173];
  in_idx_174 = in->mM.mX[174];
  in_idx_175 = in->mM.mX[175];
  in_idx_176 = in->mM.mX[176];
  in_idx_177 = in->mM.mX[177];
  in_idx_178 = in->mM.mX[178];
  in_idx_179 = in->mM.mX[179];
  in_idx_180 = in->mM.mX[180];
  in_idx_181 = in->mM.mX[181];
  in_idx_182 = in->mM.mX[182];
  in_idx_183 = in->mM.mX[183];
  in_idx_184 = in->mM.mX[184];
  in_idx_185 = in->mM.mX[185];
  in_idx_186 = in->mM.mX[186];
  in_idx_187 = in->mM.mX[187];
  in_idx_188 = in->mM.mX[188];
  in_idx_189 = in->mM.mX[189];
  in_idx_190 = in->mM.mX[190];
  in_idx_191 = in->mM.mX[191];
  in_idx_192 = in->mM.mX[192];
  in_idx_193 = in->mM.mX[193];
  in_idx_194 = in->mM.mX[194];
  in_idx_195 = in->mM.mX[195];
  in_idx_196 = in->mM.mX[196];
  in_idx_197 = in->mM.mX[197];
  in_idx_198 = in->mM.mX[198];
  in_idx_199 = in->mM.mX[199];
  in_idx_200 = in->mM.mX[200];
  in_idx_201 = in->mM.mX[201];
  in_idx_202 = in->mM.mX[202];
  in_idx_203 = in->mM.mX[203];
  M[0] = in_idx_0;
  M[1] = in_idx_1;
  M[2] = in_idx_2;
  M[3] = in_idx_3;
  M[4] = in_idx_4;
  M[5] = in_idx_5;
  M[6] = in_idx_6;
  M[7] = in_idx_7;
  M[8] = in_idx_8;
  M[9] = in_idx_9;
  M[10] = in_idx_10;
  M[11] = in_idx_11;
  M[12] = in_idx_12;
  M[13] = in_idx_13;
  M[14] = in_idx_14;
  M[15] = in_idx_15;
  M[16] = in_idx_16;
  M[17] = in_idx_17;
  M[18] = in_idx_18;
  M[19] = in_idx_19;
  M[20] = in_idx_20;
  M[21] = in_idx_21;
  M[22] = in_idx_22;
  M[23] = in_idx_23;
  M[24] = in_idx_24;
  M[25] = in_idx_25;
  M[26] = in_idx_26;
  M[27] = in_idx_27;
  M[28] = in_idx_28;
  M[29] = in_idx_29;
  M[30] = in_idx_30;
  M[31] = in_idx_31;
  M[32] = in_idx_32;
  M[33] = in_idx_33;
  M[34] = in_idx_34;
  M[35] = in_idx_35;
  M[36] = in_idx_36;
  M[37] = in_idx_37;
  M[38] = in_idx_38;
  M[39] = in_idx_39;
  M[40] = in_idx_40;
  M[41] = in_idx_41;
  M[42] = in_idx_42;
  M[43] = in_idx_43;
  M[44] = in_idx_44;
  M[45] = in_idx_45;
  M[46] = in_idx_46;
  M[47] = in_idx_47;
  M[48] = in_idx_48;
  M[49] = in_idx_49;
  M[50] = in_idx_50;
  M[51] = in_idx_51;
  M[52] = in_idx_52;
  M[53] = in_idx_53;
  M[54] = in_idx_54;
  M[55] = in_idx_55;
  M[56] = in_idx_56;
  M[57] = in_idx_57;
  M[58] = in_idx_58;
  M[59] = in_idx_59;
  M[60] = in_idx_60;
  M[61] = in_idx_61;
  M[62] = in_idx_62;
  M[63] = in_idx_63;
  M[64] = in_idx_64;
  M[65] = in_idx_65;
  M[66] = in_idx_66;
  M[67] = in_idx_67;
  M[68] = in_idx_68;
  M[69] = in_idx_69;
  M[70] = in_idx_70;
  M[71] = in_idx_71;
  M[72] = in_idx_72;
  M[73] = in_idx_73;
  M[74] = in_idx_74;
  M[75] = in_idx_75;
  M[76] = in_idx_76;
  M[77] = in_idx_77;
  M[78] = in_idx_78;
  M[79] = in_idx_79;
  M[80] = in_idx_80;
  M[81] = in_idx_81;
  M[82] = in_idx_82;
  M[83] = in_idx_83;
  M[84] = in_idx_84;
  M[85] = in_idx_85;
  M[86] = in_idx_86;
  M[87] = in_idx_87;
  M[88] = in_idx_88;
  M[89] = in_idx_89;
  M[90] = in_idx_90;
  M[91] = in_idx_91;
  M[92] = in_idx_92;
  M[93] = in_idx_93;
  M[94] = in_idx_94;
  M[95] = in_idx_95;
  M[96] = in_idx_96;
  M[97] = in_idx_97;
  M[98] = in_idx_98;
  M[99] = in_idx_99;
  M[100] = in_idx_100;
  M[101] = in_idx_101;
  M[102] = in_idx_102;
  M[103] = in_idx_103;
  M[104] = in_idx_104;
  M[105] = in_idx_105;
  M[106] = in_idx_106;
  M[107] = in_idx_107;
  M[108] = in_idx_108;
  M[109] = in_idx_109;
  M[110] = in_idx_110;
  M[111] = in_idx_111;
  M[112] = in_idx_112;
  M[113] = in_idx_113;
  M[114] = in_idx_114;
  M[115] = in_idx_115;
  M[116] = in_idx_116;
  M[117] = in_idx_117;
  M[118] = in_idx_118;
  M[119] = in_idx_119;
  M[120] = in_idx_120;
  M[121] = in_idx_121;
  M[122] = in_idx_122;
  M[123] = in_idx_123;
  M[124] = in_idx_124;
  M[125] = in_idx_125;
  M[126] = in_idx_126;
  M[127] = in_idx_127;
  M[128] = in_idx_128;
  M[129] = in_idx_129;
  M[130] = in_idx_130;
  M[131] = in_idx_131;
  M[132] = in_idx_132;
  M[133] = in_idx_133;
  M[134] = in_idx_134;
  M[135] = in_idx_135;
  M[136] = in_idx_136;
  M[137] = in_idx_137;
  M[138] = in_idx_138;
  M[139] = in_idx_139;
  M[140] = in_idx_140;
  M[141] = in_idx_141;
  M[142] = in_idx_142;
  M[143] = in_idx_143;
  M[144] = in_idx_144;
  M[145] = in_idx_145;
  M[146] = in_idx_146;
  M[147] = in_idx_147;
  M[148] = in_idx_148;
  M[149] = in_idx_149;
  M[150] = in_idx_150;
  M[151] = in_idx_151;
  M[152] = in_idx_152;
  M[153] = in_idx_153;
  M[154] = in_idx_154;
  M[155] = in_idx_155;
  M[156] = in_idx_156;
  M[157] = in_idx_157;
  M[158] = in_idx_158;
  M[159] = in_idx_159;
  M[160] = in_idx_160;
  M[161] = in_idx_161;
  M[162] = in_idx_162;
  M[163] = in_idx_163;
  M[164] = in_idx_164;
  M[165] = in_idx_165;
  M[166] = in_idx_166;
  M[167] = in_idx_167;
  M[168] = in_idx_168;
  M[169] = in_idx_169;
  M[170] = in_idx_170;
  M[171] = in_idx_171;
  M[172] = in_idx_172;
  M[173] = in_idx_173;
  M[174] = in_idx_174;
  M[175] = in_idx_175;
  M[176] = in_idx_176;
  M[177] = in_idx_177;
  M[178] = in_idx_178;
  M[179] = in_idx_179;
  M[180] = in_idx_180;
  M[181] = in_idx_181;
  M[182] = in_idx_182;
  M[183] = in_idx_183;
  M[184] = in_idx_184;
  M[185] = in_idx_185;
  M[186] = in_idx_186;
  M[187] = in_idx_187;
  M[188] = in_idx_188;
  M[189] = in_idx_189;
  M[190] = in_idx_190;
  M[191] = in_idx_191;
  M[192] = in_idx_192;
  M[193] = in_idx_193;
  M[194] = in_idx_194;
  M[195] = in_idx_195;
  M[196] = in_idx_196;
  M[197] = in_idx_197;
  M[198] = in_idx_198;
  M[199] = in_idx_199;
  M[200] = in_idx_200;
  M[201] = in_idx_201;
  M[202] = in_idx_202;
  M[203] = in_idx_203;
  X_idx_1 = in->mX.mX[1];
  X_idx_3 = in->mX.mX[3];
  X_idx_5 = in->mX.mX[5];
  X_idx_7 = in->mX.mX[7];
  X_idx_11 = in->mX.mX[11];
  X_idx_15 = in->mX.mX[15];
  X_idx_29 = in->mX.mX[29];
  X_idx_40 = in->mX.mX[40];
  X_idx_45 = in->mX.mX[45];
  out = out1->mMODE;
  memcpy(&localMode[0], &M[0], 96U);
  in_idx_0 = 0;
  in_idx_1 = 0;
  in_idx_2 = 0;
  in_idx_3 = 0;
  in_idx_4 = 0;
  in_idx_5 = 0;
  in_idx_6 = 0;
  in_idx_7 = 0;
  in_idx_8 = 0;
  in_idx_9 = 0;
  in_idx_10 = 0;
  in_idx_11 = 0;
  t45 = 0.0;
  t46 = 0.0;
  t47 = 0.0;
  t48 = 0.0;
  t49 = 0.0;
  t50 = 0.0;
  t51 = 0.0;
  t52 = 0.0;
  t53 = 0.0;
  t54 = 0.0;
  t55 = 0.0;
  t56 = 0.0;
  retv[0] = in_idx_0;
  retv[1] = in_idx_1;
  retv[2] = in_idx_2;
  retv[3] = in_idx_3;
  retv[4] = in_idx_4;
  retv[5] = in_idx_5;
  retv[6] = in_idx_6;
  retv[7] = in_idx_7;
  retv[8] = in_idx_8;
  retv[9] = in_idx_9;
  retv[10] = in_idx_10;
  retv[11] = in_idx_11;
  retv[12] = (int32_T)(t45 == 0.0);
  retv[13] = (int32_T)(t46 == 0.0);
  retv[14] = (int32_T)(t47 == 0.0);
  retv[15] = (int32_T)(t48 == 0.0);
  retv[16] = (int32_T)(t49 == 0.0);
  retv[17] = (int32_T)(t50 == 0.0);
  retv[18] = (int32_T)(t51 == 0.0);
  retv[19] = (int32_T)(t52 == 0.0);
  retv[20] = (int32_T)(t53 == 0.0);
  retv[21] = (int32_T)(t54 == 0.0);
  retv[22] = (int32_T)(t55 == 0.0);
  retv[23] = (int32_T)(t56 == 0.0);
  for (idx = 0ULL; idx < 24ULL; idx++) {
    out.mX[idx] = retv[idx];
  }

  memcpy(&localMode0[0], &M[24], 96U);
  in_idx_0 = 0;
  in_idx_1 = 0;
  in_idx_2 = 0;
  in_idx_3 = 0;
  in_idx_4 = 0;
  in_idx_5 = 0;
  in_idx_6 = 0;
  in_idx_7 = 0;
  in_idx_8 = 0;
  in_idx_9 = 0;
  in_idx_10 = 0;
  in_idx_11 = 0;
  t45 = 0.0;
  t46 = 0.0;
  t47 = 0.0;
  t48 = 0.0;
  t49 = 0.0;
  t50 = 0.0;
  t51 = 0.0;
  t52 = 0.0;
  t53 = 0.0;
  t54 = 0.0;
  t55 = 0.0;
  t56 = 0.0;
  retv0[0] = in_idx_0;
  retv0[1] = in_idx_1;
  retv0[2] = in_idx_2;
  retv0[3] = in_idx_3;
  retv0[4] = in_idx_4;
  retv0[5] = in_idx_5;
  retv0[6] = in_idx_6;
  retv0[7] = in_idx_7;
  retv0[8] = in_idx_8;
  retv0[9] = in_idx_9;
  retv0[10] = in_idx_10;
  retv0[11] = in_idx_11;
  retv0[12] = (int32_T)(t45 == 0.0);
  retv0[13] = (int32_T)(t46 == 0.0);
  retv0[14] = (int32_T)(t47 == 0.0);
  retv0[15] = (int32_T)(t48 == 0.0);
  retv0[16] = (int32_T)(t49 == 0.0);
  retv0[17] = (int32_T)(t50 == 0.0);
  retv0[18] = (int32_T)(t51 == 0.0);
  retv0[19] = (int32_T)(t52 == 0.0);
  retv0[20] = (int32_T)(t53 == 0.0);
  retv0[21] = (int32_T)(t54 == 0.0);
  retv0[22] = (int32_T)(t55 == 0.0);
  retv0[23] = (int32_T)(t56 == 0.0);
  for (idx = 0ULL; idx < 24ULL; idx++) {
    out.mX[idx + 24ULL] = retv0[idx];
  }

  memcpy(&localMode1[0], &M[48], 96U);
  in_idx_0 = 0;
  in_idx_1 = 0;
  in_idx_2 = 0;
  in_idx_3 = 0;
  in_idx_4 = 0;
  in_idx_5 = 0;
  in_idx_6 = 0;
  in_idx_7 = 0;
  in_idx_8 = 0;
  in_idx_9 = 0;
  in_idx_10 = 0;
  in_idx_11 = 0;
  t45 = 0.0;
  t46 = 0.0;
  t47 = 0.0;
  t48 = 0.0;
  t49 = 0.0;
  t50 = 0.0;
  t51 = 0.0;
  t52 = 0.0;
  t53 = 0.0;
  t54 = 0.0;
  t55 = 0.0;
  t56 = 0.0;
  retv1[0] = in_idx_0;
  retv1[1] = in_idx_1;
  retv1[2] = in_idx_2;
  retv1[3] = in_idx_3;
  retv1[4] = in_idx_4;
  retv1[5] = in_idx_5;
  retv1[6] = in_idx_6;
  retv1[7] = in_idx_7;
  retv1[8] = in_idx_8;
  retv1[9] = in_idx_9;
  retv1[10] = in_idx_10;
  retv1[11] = in_idx_11;
  retv1[12] = (int32_T)(t45 == 0.0);
  retv1[13] = (int32_T)(t46 == 0.0);
  retv1[14] = (int32_T)(t47 == 0.0);
  retv1[15] = (int32_T)(t48 == 0.0);
  retv1[16] = (int32_T)(t49 == 0.0);
  retv1[17] = (int32_T)(t50 == 0.0);
  retv1[18] = (int32_T)(t51 == 0.0);
  retv1[19] = (int32_T)(t52 == 0.0);
  retv1[20] = (int32_T)(t53 == 0.0);
  retv1[21] = (int32_T)(t54 == 0.0);
  retv1[22] = (int32_T)(t55 == 0.0);
  retv1[23] = (int32_T)(t56 == 0.0);
  for (idx = 0ULL; idx < 24ULL; idx++) {
    out.mX[idx + 48ULL] = retv1[idx];
  }

  memcpy(&localMode2[0], &M[72], 96U);
  in_idx_0 = 0;
  in_idx_1 = 0;
  in_idx_2 = 0;
  in_idx_3 = 0;
  in_idx_4 = 0;
  in_idx_5 = 0;
  in_idx_6 = 0;
  in_idx_7 = 0;
  in_idx_8 = 0;
  in_idx_9 = 0;
  in_idx_10 = 0;
  in_idx_11 = 0;
  t45 = 0.0;
  t46 = 0.0;
  t47 = 0.0;
  t48 = 0.0;
  t49 = 0.0;
  t50 = 0.0;
  t51 = 0.0;
  t52 = 0.0;
  t53 = 0.0;
  t54 = 0.0;
  t55 = 0.0;
  t56 = 0.0;
  retv2[0] = in_idx_0;
  retv2[1] = in_idx_1;
  retv2[2] = in_idx_2;
  retv2[3] = in_idx_3;
  retv2[4] = in_idx_4;
  retv2[5] = in_idx_5;
  retv2[6] = in_idx_6;
  retv2[7] = in_idx_7;
  retv2[8] = in_idx_8;
  retv2[9] = in_idx_9;
  retv2[10] = in_idx_10;
  retv2[11] = in_idx_11;
  retv2[12] = (int32_T)(t45 == 0.0);
  retv2[13] = (int32_T)(t46 == 0.0);
  retv2[14] = (int32_T)(t47 == 0.0);
  retv2[15] = (int32_T)(t48 == 0.0);
  retv2[16] = (int32_T)(t49 == 0.0);
  retv2[17] = (int32_T)(t50 == 0.0);
  retv2[18] = (int32_T)(t51 == 0.0);
  retv2[19] = (int32_T)(t52 == 0.0);
  retv2[20] = (int32_T)(t53 == 0.0);
  retv2[21] = (int32_T)(t54 == 0.0);
  retv2[22] = (int32_T)(t55 == 0.0);
  retv2[23] = (int32_T)(t56 == 0.0);
  for (idx = 0ULL; idx < 24ULL; idx++) {
    out.mX[idx + 72ULL] = retv2[idx];
  }

  memcpy(&localMode3[0], &M[96], 96U);
  in_idx_0 = 0;
  in_idx_1 = 0;
  in_idx_2 = 0;
  in_idx_3 = 0;
  in_idx_4 = 0;
  in_idx_5 = 0;
  in_idx_6 = 0;
  in_idx_7 = 0;
  in_idx_8 = 0;
  in_idx_9 = 0;
  in_idx_10 = 0;
  in_idx_11 = 0;
  t45 = 0.0;
  t46 = 0.0;
  t47 = 0.0;
  t48 = 0.0;
  t49 = 0.0;
  t50 = 0.0;
  t51 = 0.0;
  t52 = 0.0;
  t53 = 0.0;
  t54 = 0.0;
  t55 = 0.0;
  t56 = 0.0;
  retv3[0] = in_idx_0;
  retv3[1] = in_idx_1;
  retv3[2] = in_idx_2;
  retv3[3] = in_idx_3;
  retv3[4] = in_idx_4;
  retv3[5] = in_idx_5;
  retv3[6] = in_idx_6;
  retv3[7] = in_idx_7;
  retv3[8] = in_idx_8;
  retv3[9] = in_idx_9;
  retv3[10] = in_idx_10;
  retv3[11] = in_idx_11;
  retv3[12] = (int32_T)(t45 == 0.0);
  retv3[13] = (int32_T)(t46 == 0.0);
  retv3[14] = (int32_T)(t47 == 0.0);
  retv3[15] = (int32_T)(t48 == 0.0);
  retv3[16] = (int32_T)(t49 == 0.0);
  retv3[17] = (int32_T)(t50 == 0.0);
  retv3[18] = (int32_T)(t51 == 0.0);
  retv3[19] = (int32_T)(t52 == 0.0);
  retv3[20] = (int32_T)(t53 == 0.0);
  retv3[21] = (int32_T)(t54 == 0.0);
  retv3[22] = (int32_T)(t55 == 0.0);
  retv3[23] = (int32_T)(t56 == 0.0);
  for (idx = 0ULL; idx < 24ULL; idx++) {
    out.mX[idx + 96ULL] = retv3[idx];
  }

  memcpy(&localMode4[0], &M[120], 96U);
  in_idx_0 = 0;
  in_idx_1 = 0;
  in_idx_2 = 0;
  in_idx_3 = 0;
  in_idx_4 = 0;
  in_idx_5 = 0;
  in_idx_6 = 0;
  in_idx_7 = 0;
  in_idx_8 = 0;
  in_idx_9 = 0;
  in_idx_10 = 0;
  in_idx_11 = 0;
  t45 = 0.0;
  t46 = 0.0;
  t47 = 0.0;
  t48 = 0.0;
  t49 = 0.0;
  t50 = 0.0;
  t51 = 0.0;
  t52 = 0.0;
  t53 = 0.0;
  t54 = 0.0;
  t55 = 0.0;
  t56 = 0.0;
  retv4[0] = in_idx_0;
  retv4[1] = in_idx_1;
  retv4[2] = in_idx_2;
  retv4[3] = in_idx_3;
  retv4[4] = in_idx_4;
  retv4[5] = in_idx_5;
  retv4[6] = in_idx_6;
  retv4[7] = in_idx_7;
  retv4[8] = in_idx_8;
  retv4[9] = in_idx_9;
  retv4[10] = in_idx_10;
  retv4[11] = in_idx_11;
  retv4[12] = (int32_T)(t45 == 0.0);
  retv4[13] = (int32_T)(t46 == 0.0);
  retv4[14] = (int32_T)(t47 == 0.0);
  retv4[15] = (int32_T)(t48 == 0.0);
  retv4[16] = (int32_T)(t49 == 0.0);
  retv4[17] = (int32_T)(t50 == 0.0);
  retv4[18] = (int32_T)(t51 == 0.0);
  retv4[19] = (int32_T)(t52 == 0.0);
  retv4[20] = (int32_T)(t53 == 0.0);
  retv4[21] = (int32_T)(t54 == 0.0);
  retv4[22] = (int32_T)(t55 == 0.0);
  retv4[23] = (int32_T)(t56 == 0.0);
  for (idx = 0ULL; idx < 24ULL; idx++) {
    out.mX[idx + 120ULL] = retv4[idx];
  }

  memcpy(&localMode5[0], &M[144], 96U);
  in_idx_0 = 0;
  in_idx_1 = 0;
  in_idx_2 = 0;
  in_idx_3 = 0;
  in_idx_4 = 0;
  in_idx_5 = 0;
  in_idx_6 = 0;
  in_idx_7 = 0;
  in_idx_8 = 0;
  in_idx_9 = 0;
  in_idx_10 = 0;
  in_idx_11 = 0;
  t45 = 0.0;
  t46 = 0.0;
  t47 = 0.0;
  t48 = 0.0;
  t49 = 0.0;
  t50 = 0.0;
  t51 = 0.0;
  t52 = 0.0;
  t53 = 0.0;
  t54 = 0.0;
  t55 = 0.0;
  t56 = 0.0;
  retv5[0] = in_idx_0;
  retv5[1] = in_idx_1;
  retv5[2] = in_idx_2;
  retv5[3] = in_idx_3;
  retv5[4] = in_idx_4;
  retv5[5] = in_idx_5;
  retv5[6] = in_idx_6;
  retv5[7] = in_idx_7;
  retv5[8] = in_idx_8;
  retv5[9] = in_idx_9;
  retv5[10] = in_idx_10;
  retv5[11] = in_idx_11;
  retv5[12] = (int32_T)(t45 == 0.0);
  retv5[13] = (int32_T)(t46 == 0.0);
  retv5[14] = (int32_T)(t47 == 0.0);
  retv5[15] = (int32_T)(t48 == 0.0);
  retv5[16] = (int32_T)(t49 == 0.0);
  retv5[17] = (int32_T)(t50 == 0.0);
  retv5[18] = (int32_T)(t51 == 0.0);
  retv5[19] = (int32_T)(t52 == 0.0);
  retv5[20] = (int32_T)(t53 == 0.0);
  retv5[21] = (int32_T)(t54 == 0.0);
  retv5[22] = (int32_T)(t55 == 0.0);
  retv5[23] = (int32_T)(t56 == 0.0);
  for (idx = 0ULL; idx < 24ULL; idx++) {
    out.mX[idx + 144ULL] = retv5[idx];
  }

  memcpy(&localMode6[0], &M[168], 96U);
  in_idx_0 = 0;
  in_idx_1 = 0;
  in_idx_2 = 0;
  in_idx_3 = 0;
  in_idx_4 = 0;
  in_idx_5 = 0;
  in_idx_6 = 0;
  in_idx_7 = 0;
  in_idx_8 = 0;
  in_idx_9 = 0;
  in_idx_10 = 0;
  in_idx_11 = 0;
  t45 = 0.0;
  t46 = 0.0;
  t47 = 0.0;
  t48 = 0.0;
  t49 = 0.0;
  t50 = 0.0;
  t51 = 0.0;
  t52 = 0.0;
  t53 = 0.0;
  t54 = 0.0;
  t55 = 0.0;
  t56 = 0.0;
  retv6[0] = in_idx_0;
  retv6[1] = in_idx_1;
  retv6[2] = in_idx_2;
  retv6[3] = in_idx_3;
  retv6[4] = in_idx_4;
  retv6[5] = in_idx_5;
  retv6[6] = in_idx_6;
  retv6[7] = in_idx_7;
  retv6[8] = in_idx_8;
  retv6[9] = in_idx_9;
  retv6[10] = in_idx_10;
  retv6[11] = in_idx_11;
  retv6[12] = (int32_T)(t45 == 0.0);
  retv6[13] = (int32_T)(t46 == 0.0);
  retv6[14] = (int32_T)(t47 == 0.0);
  retv6[15] = (int32_T)(t48 == 0.0);
  retv6[16] = (int32_T)(t49 == 0.0);
  retv6[17] = (int32_T)(t50 == 0.0);
  retv6[18] = (int32_T)(t51 == 0.0);
  retv6[19] = (int32_T)(t52 == 0.0);
  retv6[20] = (int32_T)(t53 == 0.0);
  retv6[21] = (int32_T)(t54 == 0.0);
  retv6[22] = (int32_T)(t55 == 0.0);
  retv6[23] = (int32_T)(t56 == 0.0);
  for (idx = 0ULL; idx < 24ULL; idx++) {
    out.mX[idx + 168ULL] = retv6[idx];
  }

  t45 = X_idx_29 * 1.0000000000000002E-6;
  t45 = t45 * (t45 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[192ULL] = (int32_T)(6.9 / (t45 == 0.0 ? 1.0E-16 : t45) +
    1.4237685041404136E-6 > -1.0E-9);
  out.mX[193ULL] = (int32_T)(X_idx_1 * 100000.0 > -101325.0);
  t45 = X_idx_11 * 1.0000000000000002E-6;
  t45 = t45 * (t45 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[194ULL] = (int32_T)(6.9 / (t45 == 0.0 ? 1.0E-16 : t45) +
    1.4237685041404136E-6 > -1.0E-9);
  t45 = X_idx_11 * 1.0000000000000002E-6;
  t45 = t45 * (t45 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[195ULL] = (int32_T)(6.9 / (t45 == 0.0 ? 1.0E-16 : t45) +
    1.4237685041404136E-6 > -1.0E-9);
  out.mX[196ULL] = (int32_T)(X_idx_3 * 100000.0 > -101325.0);
  t45 = X_idx_15 * 1.0000000000000002E-6;
  t45 = t45 * (t45 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[197ULL] = (int32_T)(6.9 / (t45 == 0.0 ? 1.0E-16 : t45) +
    1.4237685041404136E-6 > -1.0E-9);
  t45 = X_idx_15 * 1.0000000000000002E-6;
  t45 = t45 * (t45 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[198ULL] = (int32_T)(6.9 / (t45 == 0.0 ? 1.0E-16 : t45) +
    1.4237685041404136E-6 > -1.0E-9);
  out.mX[199ULL] = (int32_T)(X_idx_5 * 100000.0 > -101325.0);
  t45 = X_idx_40 * 1.0000000000000002E-6;
  t45 = t45 * (t45 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[200ULL] = (int32_T)(6.9 / (t45 == 0.0 ? 1.0E-16 : t45) +
    1.4237685041404136E-6 > -1.0E-9);
  t45 = X_idx_40 * 1.0000000000000002E-6;
  t45 = t45 * (t45 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[201ULL] = (int32_T)(6.9 / (t45 == 0.0 ? 1.0E-16 : t45) +
    1.4237685041404136E-6 > -1.0E-9);
  out.mX[202ULL] = (int32_T)(X_idx_7 * 100000.0 > -101325.0);
  t45 = X_idx_45 * 1.0000000000000002E-6;
  t45 = t45 * (t45 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[203ULL] = (int32_T)(6.9 / (t45 == 0.0 ? 1.0E-16 : t45) +
    1.4237685041404136E-6 > -1.0E-9);
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_zc(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out1)
{
  PmRealVector out;
  int32_T M[204];
  int32_T localMode[24];
  real_T retv[12];
  size_t idx;
  int32_T localMode0[24];
  real_T retv0[12];
  int32_T localMode1[24];
  real_T retv1[12];
  int32_T localMode2[24];
  real_T retv2[12];
  int32_T localMode3[24];
  real_T retv3[12];
  int32_T localMode4[24];
  real_T retv4[12];
  int32_T localMode5[24];
  real_T retv5[12];
  int32_T localMode6[24];
  real_T retv6[12];
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T X_idx_11;
  real_T X_idx_15;
  real_T X_idx_29;
  real_T X_idx_1;
  real_T X_idx_3;
  real_T X_idx_5;
  real_T X_idx_40;
  real_T X_idx_7;
  real_T X_idx_45;
  int32_T in_idx_0;
  int32_T in_idx_1;
  int32_T in_idx_2;
  int32_T in_idx_3;
  int32_T in_idx_4;
  int32_T in_idx_5;
  int32_T in_idx_6;
  int32_T in_idx_7;
  int32_T in_idx_8;
  int32_T in_idx_9;
  int32_T in_idx_10;
  int32_T in_idx_11;
  int32_T in_idx_12;
  int32_T in_idx_13;
  int32_T in_idx_14;
  int32_T in_idx_15;
  int32_T in_idx_16;
  int32_T in_idx_17;
  int32_T in_idx_18;
  int32_T in_idx_19;
  int32_T in_idx_20;
  int32_T in_idx_21;
  int32_T in_idx_22;
  int32_T in_idx_23;
  int32_T in_idx_24;
  int32_T in_idx_25;
  int32_T in_idx_26;
  int32_T in_idx_27;
  int32_T in_idx_28;
  int32_T in_idx_29;
  int32_T in_idx_30;
  int32_T in_idx_31;
  int32_T in_idx_32;
  int32_T in_idx_33;
  int32_T in_idx_34;
  int32_T in_idx_35;
  int32_T in_idx_36;
  int32_T in_idx_37;
  int32_T in_idx_38;
  int32_T in_idx_39;
  int32_T in_idx_40;
  int32_T in_idx_41;
  int32_T in_idx_42;
  int32_T in_idx_43;
  int32_T in_idx_44;
  int32_T in_idx_45;
  int32_T in_idx_46;
  int32_T in_idx_47;
  int32_T in_idx_48;
  int32_T in_idx_49;
  int32_T in_idx_50;
  int32_T in_idx_51;
  int32_T in_idx_52;
  int32_T in_idx_53;
  int32_T in_idx_54;
  int32_T in_idx_55;
  int32_T in_idx_56;
  int32_T in_idx_57;
  int32_T in_idx_58;
  int32_T in_idx_59;
  int32_T in_idx_60;
  int32_T in_idx_61;
  int32_T in_idx_62;
  int32_T in_idx_63;
  int32_T in_idx_64;
  int32_T in_idx_65;
  int32_T in_idx_66;
  int32_T in_idx_67;
  int32_T in_idx_68;
  int32_T in_idx_69;
  int32_T in_idx_70;
  int32_T in_idx_71;
  int32_T in_idx_72;
  int32_T in_idx_73;
  int32_T in_idx_74;
  int32_T in_idx_75;
  int32_T in_idx_76;
  int32_T in_idx_77;
  int32_T in_idx_78;
  int32_T in_idx_79;
  int32_T in_idx_80;
  int32_T in_idx_81;
  int32_T in_idx_82;
  int32_T in_idx_83;
  int32_T in_idx_84;
  int32_T in_idx_85;
  int32_T in_idx_86;
  int32_T in_idx_87;
  int32_T in_idx_88;
  int32_T in_idx_89;
  int32_T in_idx_90;
  int32_T in_idx_91;
  int32_T in_idx_92;
  int32_T in_idx_93;
  int32_T in_idx_94;
  int32_T in_idx_95;
  int32_T in_idx_96;
  int32_T in_idx_97;
  int32_T in_idx_98;
  int32_T in_idx_99;
  int32_T in_idx_100;
  int32_T in_idx_101;
  int32_T in_idx_102;
  int32_T in_idx_103;
  int32_T in_idx_104;
  int32_T in_idx_105;
  int32_T in_idx_106;
  int32_T in_idx_107;
  int32_T in_idx_108;
  int32_T in_idx_109;
  int32_T in_idx_110;
  int32_T in_idx_111;
  int32_T in_idx_112;
  int32_T in_idx_113;
  int32_T in_idx_114;
  int32_T in_idx_115;
  int32_T in_idx_116;
  int32_T in_idx_117;
  int32_T in_idx_118;
  int32_T in_idx_119;
  int32_T in_idx_120;
  int32_T in_idx_121;
  int32_T in_idx_122;
  int32_T in_idx_123;
  int32_T in_idx_124;
  int32_T in_idx_125;
  int32_T in_idx_126;
  int32_T in_idx_127;
  int32_T in_idx_128;
  int32_T in_idx_129;
  int32_T in_idx_130;
  int32_T in_idx_131;
  int32_T in_idx_132;
  int32_T in_idx_133;
  int32_T in_idx_134;
  int32_T in_idx_135;
  int32_T in_idx_136;
  int32_T in_idx_137;
  int32_T in_idx_138;
  int32_T in_idx_139;
  int32_T in_idx_140;
  int32_T in_idx_141;
  int32_T in_idx_142;
  int32_T in_idx_143;
  int32_T in_idx_144;
  int32_T in_idx_145;
  int32_T in_idx_146;
  int32_T in_idx_147;
  int32_T in_idx_148;
  int32_T in_idx_149;
  int32_T in_idx_150;
  int32_T in_idx_151;
  int32_T in_idx_152;
  int32_T in_idx_153;
  int32_T in_idx_154;
  int32_T in_idx_155;
  int32_T in_idx_156;
  int32_T in_idx_157;
  int32_T in_idx_158;
  int32_T in_idx_159;
  int32_T in_idx_160;
  int32_T in_idx_161;
  int32_T in_idx_162;
  int32_T in_idx_163;
  int32_T in_idx_164;
  int32_T in_idx_165;
  int32_T in_idx_166;
  int32_T in_idx_167;
  int32_T in_idx_168;
  int32_T in_idx_169;
  int32_T in_idx_170;
  int32_T in_idx_171;
  int32_T in_idx_172;
  int32_T in_idx_173;
  int32_T in_idx_174;
  int32_T in_idx_175;
  int32_T in_idx_176;
  int32_T in_idx_177;
  int32_T in_idx_178;
  int32_T in_idx_179;
  int32_T in_idx_180;
  int32_T in_idx_181;
  int32_T in_idx_182;
  int32_T in_idx_183;
  int32_T in_idx_184;
  int32_T in_idx_185;
  int32_T in_idx_186;
  int32_T in_idx_187;
  int32_T in_idx_188;
  int32_T in_idx_189;
  int32_T in_idx_190;
  int32_T in_idx_191;
  int32_T in_idx_192;
  int32_T in_idx_193;
  int32_T in_idx_194;
  int32_T in_idx_195;
  int32_T in_idx_196;
  int32_T in_idx_197;
  int32_T in_idx_198;
  int32_T in_idx_199;
  int32_T in_idx_200;
  int32_T in_idx_201;
  int32_T in_idx_202;
  int32_T in_idx_203;
  in_idx_0 = in->mM.mX[0];
  in_idx_1 = in->mM.mX[1];
  in_idx_2 = in->mM.mX[2];
  in_idx_3 = in->mM.mX[3];
  in_idx_4 = in->mM.mX[4];
  in_idx_5 = in->mM.mX[5];
  in_idx_6 = in->mM.mX[6];
  in_idx_7 = in->mM.mX[7];
  in_idx_8 = in->mM.mX[8];
  in_idx_9 = in->mM.mX[9];
  in_idx_10 = in->mM.mX[10];
  in_idx_11 = in->mM.mX[11];
  in_idx_12 = in->mM.mX[12];
  in_idx_13 = in->mM.mX[13];
  in_idx_14 = in->mM.mX[14];
  in_idx_15 = in->mM.mX[15];
  in_idx_16 = in->mM.mX[16];
  in_idx_17 = in->mM.mX[17];
  in_idx_18 = in->mM.mX[18];
  in_idx_19 = in->mM.mX[19];
  in_idx_20 = in->mM.mX[20];
  in_idx_21 = in->mM.mX[21];
  in_idx_22 = in->mM.mX[22];
  in_idx_23 = in->mM.mX[23];
  in_idx_24 = in->mM.mX[24];
  in_idx_25 = in->mM.mX[25];
  in_idx_26 = in->mM.mX[26];
  in_idx_27 = in->mM.mX[27];
  in_idx_28 = in->mM.mX[28];
  in_idx_29 = in->mM.mX[29];
  in_idx_30 = in->mM.mX[30];
  in_idx_31 = in->mM.mX[31];
  in_idx_32 = in->mM.mX[32];
  in_idx_33 = in->mM.mX[33];
  in_idx_34 = in->mM.mX[34];
  in_idx_35 = in->mM.mX[35];
  in_idx_36 = in->mM.mX[36];
  in_idx_37 = in->mM.mX[37];
  in_idx_38 = in->mM.mX[38];
  in_idx_39 = in->mM.mX[39];
  in_idx_40 = in->mM.mX[40];
  in_idx_41 = in->mM.mX[41];
  in_idx_42 = in->mM.mX[42];
  in_idx_43 = in->mM.mX[43];
  in_idx_44 = in->mM.mX[44];
  in_idx_45 = in->mM.mX[45];
  in_idx_46 = in->mM.mX[46];
  in_idx_47 = in->mM.mX[47];
  in_idx_48 = in->mM.mX[48];
  in_idx_49 = in->mM.mX[49];
  in_idx_50 = in->mM.mX[50];
  in_idx_51 = in->mM.mX[51];
  in_idx_52 = in->mM.mX[52];
  in_idx_53 = in->mM.mX[53];
  in_idx_54 = in->mM.mX[54];
  in_idx_55 = in->mM.mX[55];
  in_idx_56 = in->mM.mX[56];
  in_idx_57 = in->mM.mX[57];
  in_idx_58 = in->mM.mX[58];
  in_idx_59 = in->mM.mX[59];
  in_idx_60 = in->mM.mX[60];
  in_idx_61 = in->mM.mX[61];
  in_idx_62 = in->mM.mX[62];
  in_idx_63 = in->mM.mX[63];
  in_idx_64 = in->mM.mX[64];
  in_idx_65 = in->mM.mX[65];
  in_idx_66 = in->mM.mX[66];
  in_idx_67 = in->mM.mX[67];
  in_idx_68 = in->mM.mX[68];
  in_idx_69 = in->mM.mX[69];
  in_idx_70 = in->mM.mX[70];
  in_idx_71 = in->mM.mX[71];
  in_idx_72 = in->mM.mX[72];
  in_idx_73 = in->mM.mX[73];
  in_idx_74 = in->mM.mX[74];
  in_idx_75 = in->mM.mX[75];
  in_idx_76 = in->mM.mX[76];
  in_idx_77 = in->mM.mX[77];
  in_idx_78 = in->mM.mX[78];
  in_idx_79 = in->mM.mX[79];
  in_idx_80 = in->mM.mX[80];
  in_idx_81 = in->mM.mX[81];
  in_idx_82 = in->mM.mX[82];
  in_idx_83 = in->mM.mX[83];
  in_idx_84 = in->mM.mX[84];
  in_idx_85 = in->mM.mX[85];
  in_idx_86 = in->mM.mX[86];
  in_idx_87 = in->mM.mX[87];
  in_idx_88 = in->mM.mX[88];
  in_idx_89 = in->mM.mX[89];
  in_idx_90 = in->mM.mX[90];
  in_idx_91 = in->mM.mX[91];
  in_idx_92 = in->mM.mX[92];
  in_idx_93 = in->mM.mX[93];
  in_idx_94 = in->mM.mX[94];
  in_idx_95 = in->mM.mX[95];
  in_idx_96 = in->mM.mX[96];
  in_idx_97 = in->mM.mX[97];
  in_idx_98 = in->mM.mX[98];
  in_idx_99 = in->mM.mX[99];
  in_idx_100 = in->mM.mX[100];
  in_idx_101 = in->mM.mX[101];
  in_idx_102 = in->mM.mX[102];
  in_idx_103 = in->mM.mX[103];
  in_idx_104 = in->mM.mX[104];
  in_idx_105 = in->mM.mX[105];
  in_idx_106 = in->mM.mX[106];
  in_idx_107 = in->mM.mX[107];
  in_idx_108 = in->mM.mX[108];
  in_idx_109 = in->mM.mX[109];
  in_idx_110 = in->mM.mX[110];
  in_idx_111 = in->mM.mX[111];
  in_idx_112 = in->mM.mX[112];
  in_idx_113 = in->mM.mX[113];
  in_idx_114 = in->mM.mX[114];
  in_idx_115 = in->mM.mX[115];
  in_idx_116 = in->mM.mX[116];
  in_idx_117 = in->mM.mX[117];
  in_idx_118 = in->mM.mX[118];
  in_idx_119 = in->mM.mX[119];
  in_idx_120 = in->mM.mX[120];
  in_idx_121 = in->mM.mX[121];
  in_idx_122 = in->mM.mX[122];
  in_idx_123 = in->mM.mX[123];
  in_idx_124 = in->mM.mX[124];
  in_idx_125 = in->mM.mX[125];
  in_idx_126 = in->mM.mX[126];
  in_idx_127 = in->mM.mX[127];
  in_idx_128 = in->mM.mX[128];
  in_idx_129 = in->mM.mX[129];
  in_idx_130 = in->mM.mX[130];
  in_idx_131 = in->mM.mX[131];
  in_idx_132 = in->mM.mX[132];
  in_idx_133 = in->mM.mX[133];
  in_idx_134 = in->mM.mX[134];
  in_idx_135 = in->mM.mX[135];
  in_idx_136 = in->mM.mX[136];
  in_idx_137 = in->mM.mX[137];
  in_idx_138 = in->mM.mX[138];
  in_idx_139 = in->mM.mX[139];
  in_idx_140 = in->mM.mX[140];
  in_idx_141 = in->mM.mX[141];
  in_idx_142 = in->mM.mX[142];
  in_idx_143 = in->mM.mX[143];
  in_idx_144 = in->mM.mX[144];
  in_idx_145 = in->mM.mX[145];
  in_idx_146 = in->mM.mX[146];
  in_idx_147 = in->mM.mX[147];
  in_idx_148 = in->mM.mX[148];
  in_idx_149 = in->mM.mX[149];
  in_idx_150 = in->mM.mX[150];
  in_idx_151 = in->mM.mX[151];
  in_idx_152 = in->mM.mX[152];
  in_idx_153 = in->mM.mX[153];
  in_idx_154 = in->mM.mX[154];
  in_idx_155 = in->mM.mX[155];
  in_idx_156 = in->mM.mX[156];
  in_idx_157 = in->mM.mX[157];
  in_idx_158 = in->mM.mX[158];
  in_idx_159 = in->mM.mX[159];
  in_idx_160 = in->mM.mX[160];
  in_idx_161 = in->mM.mX[161];
  in_idx_162 = in->mM.mX[162];
  in_idx_163 = in->mM.mX[163];
  in_idx_164 = in->mM.mX[164];
  in_idx_165 = in->mM.mX[165];
  in_idx_166 = in->mM.mX[166];
  in_idx_167 = in->mM.mX[167];
  in_idx_168 = in->mM.mX[168];
  in_idx_169 = in->mM.mX[169];
  in_idx_170 = in->mM.mX[170];
  in_idx_171 = in->mM.mX[171];
  in_idx_172 = in->mM.mX[172];
  in_idx_173 = in->mM.mX[173];
  in_idx_174 = in->mM.mX[174];
  in_idx_175 = in->mM.mX[175];
  in_idx_176 = in->mM.mX[176];
  in_idx_177 = in->mM.mX[177];
  in_idx_178 = in->mM.mX[178];
  in_idx_179 = in->mM.mX[179];
  in_idx_180 = in->mM.mX[180];
  in_idx_181 = in->mM.mX[181];
  in_idx_182 = in->mM.mX[182];
  in_idx_183 = in->mM.mX[183];
  in_idx_184 = in->mM.mX[184];
  in_idx_185 = in->mM.mX[185];
  in_idx_186 = in->mM.mX[186];
  in_idx_187 = in->mM.mX[187];
  in_idx_188 = in->mM.mX[188];
  in_idx_189 = in->mM.mX[189];
  in_idx_190 = in->mM.mX[190];
  in_idx_191 = in->mM.mX[191];
  in_idx_192 = in->mM.mX[192];
  in_idx_193 = in->mM.mX[193];
  in_idx_194 = in->mM.mX[194];
  in_idx_195 = in->mM.mX[195];
  in_idx_196 = in->mM.mX[196];
  in_idx_197 = in->mM.mX[197];
  in_idx_198 = in->mM.mX[198];
  in_idx_199 = in->mM.mX[199];
  in_idx_200 = in->mM.mX[200];
  in_idx_201 = in->mM.mX[201];
  in_idx_202 = in->mM.mX[202];
  in_idx_203 = in->mM.mX[203];
  M[0] = in_idx_0;
  M[1] = in_idx_1;
  M[2] = in_idx_2;
  M[3] = in_idx_3;
  M[4] = in_idx_4;
  M[5] = in_idx_5;
  M[6] = in_idx_6;
  M[7] = in_idx_7;
  M[8] = in_idx_8;
  M[9] = in_idx_9;
  M[10] = in_idx_10;
  M[11] = in_idx_11;
  M[12] = in_idx_12;
  M[13] = in_idx_13;
  M[14] = in_idx_14;
  M[15] = in_idx_15;
  M[16] = in_idx_16;
  M[17] = in_idx_17;
  M[18] = in_idx_18;
  M[19] = in_idx_19;
  M[20] = in_idx_20;
  M[21] = in_idx_21;
  M[22] = in_idx_22;
  M[23] = in_idx_23;
  M[24] = in_idx_24;
  M[25] = in_idx_25;
  M[26] = in_idx_26;
  M[27] = in_idx_27;
  M[28] = in_idx_28;
  M[29] = in_idx_29;
  M[30] = in_idx_30;
  M[31] = in_idx_31;
  M[32] = in_idx_32;
  M[33] = in_idx_33;
  M[34] = in_idx_34;
  M[35] = in_idx_35;
  M[36] = in_idx_36;
  M[37] = in_idx_37;
  M[38] = in_idx_38;
  M[39] = in_idx_39;
  M[40] = in_idx_40;
  M[41] = in_idx_41;
  M[42] = in_idx_42;
  M[43] = in_idx_43;
  M[44] = in_idx_44;
  M[45] = in_idx_45;
  M[46] = in_idx_46;
  M[47] = in_idx_47;
  M[48] = in_idx_48;
  M[49] = in_idx_49;
  M[50] = in_idx_50;
  M[51] = in_idx_51;
  M[52] = in_idx_52;
  M[53] = in_idx_53;
  M[54] = in_idx_54;
  M[55] = in_idx_55;
  M[56] = in_idx_56;
  M[57] = in_idx_57;
  M[58] = in_idx_58;
  M[59] = in_idx_59;
  M[60] = in_idx_60;
  M[61] = in_idx_61;
  M[62] = in_idx_62;
  M[63] = in_idx_63;
  M[64] = in_idx_64;
  M[65] = in_idx_65;
  M[66] = in_idx_66;
  M[67] = in_idx_67;
  M[68] = in_idx_68;
  M[69] = in_idx_69;
  M[70] = in_idx_70;
  M[71] = in_idx_71;
  M[72] = in_idx_72;
  M[73] = in_idx_73;
  M[74] = in_idx_74;
  M[75] = in_idx_75;
  M[76] = in_idx_76;
  M[77] = in_idx_77;
  M[78] = in_idx_78;
  M[79] = in_idx_79;
  M[80] = in_idx_80;
  M[81] = in_idx_81;
  M[82] = in_idx_82;
  M[83] = in_idx_83;
  M[84] = in_idx_84;
  M[85] = in_idx_85;
  M[86] = in_idx_86;
  M[87] = in_idx_87;
  M[88] = in_idx_88;
  M[89] = in_idx_89;
  M[90] = in_idx_90;
  M[91] = in_idx_91;
  M[92] = in_idx_92;
  M[93] = in_idx_93;
  M[94] = in_idx_94;
  M[95] = in_idx_95;
  M[96] = in_idx_96;
  M[97] = in_idx_97;
  M[98] = in_idx_98;
  M[99] = in_idx_99;
  M[100] = in_idx_100;
  M[101] = in_idx_101;
  M[102] = in_idx_102;
  M[103] = in_idx_103;
  M[104] = in_idx_104;
  M[105] = in_idx_105;
  M[106] = in_idx_106;
  M[107] = in_idx_107;
  M[108] = in_idx_108;
  M[109] = in_idx_109;
  M[110] = in_idx_110;
  M[111] = in_idx_111;
  M[112] = in_idx_112;
  M[113] = in_idx_113;
  M[114] = in_idx_114;
  M[115] = in_idx_115;
  M[116] = in_idx_116;
  M[117] = in_idx_117;
  M[118] = in_idx_118;
  M[119] = in_idx_119;
  M[120] = in_idx_120;
  M[121] = in_idx_121;
  M[122] = in_idx_122;
  M[123] = in_idx_123;
  M[124] = in_idx_124;
  M[125] = in_idx_125;
  M[126] = in_idx_126;
  M[127] = in_idx_127;
  M[128] = in_idx_128;
  M[129] = in_idx_129;
  M[130] = in_idx_130;
  M[131] = in_idx_131;
  M[132] = in_idx_132;
  M[133] = in_idx_133;
  M[134] = in_idx_134;
  M[135] = in_idx_135;
  M[136] = in_idx_136;
  M[137] = in_idx_137;
  M[138] = in_idx_138;
  M[139] = in_idx_139;
  M[140] = in_idx_140;
  M[141] = in_idx_141;
  M[142] = in_idx_142;
  M[143] = in_idx_143;
  M[144] = in_idx_144;
  M[145] = in_idx_145;
  M[146] = in_idx_146;
  M[147] = in_idx_147;
  M[148] = in_idx_148;
  M[149] = in_idx_149;
  M[150] = in_idx_150;
  M[151] = in_idx_151;
  M[152] = in_idx_152;
  M[153] = in_idx_153;
  M[154] = in_idx_154;
  M[155] = in_idx_155;
  M[156] = in_idx_156;
  M[157] = in_idx_157;
  M[158] = in_idx_158;
  M[159] = in_idx_159;
  M[160] = in_idx_160;
  M[161] = in_idx_161;
  M[162] = in_idx_162;
  M[163] = in_idx_163;
  M[164] = in_idx_164;
  M[165] = in_idx_165;
  M[166] = in_idx_166;
  M[167] = in_idx_167;
  M[168] = in_idx_168;
  M[169] = in_idx_169;
  M[170] = in_idx_170;
  M[171] = in_idx_171;
  M[172] = in_idx_172;
  M[173] = in_idx_173;
  M[174] = in_idx_174;
  M[175] = in_idx_175;
  M[176] = in_idx_176;
  M[177] = in_idx_177;
  M[178] = in_idx_178;
  M[179] = in_idx_179;
  M[180] = in_idx_180;
  M[181] = in_idx_181;
  M[182] = in_idx_182;
  M[183] = in_idx_183;
  M[184] = in_idx_184;
  M[185] = in_idx_185;
  M[186] = in_idx_186;
  M[187] = in_idx_187;
  M[188] = in_idx_188;
  M[189] = in_idx_189;
  M[190] = in_idx_190;
  M[191] = in_idx_191;
  M[192] = in_idx_192;
  M[193] = in_idx_193;
  M[194] = in_idx_194;
  M[195] = in_idx_195;
  M[196] = in_idx_196;
  M[197] = in_idx_197;
  M[198] = in_idx_198;
  M[199] = in_idx_199;
  M[200] = in_idx_200;
  M[201] = in_idx_201;
  M[202] = in_idx_202;
  M[203] = in_idx_203;
  X_idx_1 = in->mX.mX[1];
  X_idx_3 = in->mX.mX[3];
  X_idx_5 = in->mX.mX[5];
  X_idx_7 = in->mX.mX[7];
  X_idx_11 = in->mX.mX[11];
  X_idx_15 = in->mX.mX[15];
  X_idx_29 = in->mX.mX[29];
  X_idx_40 = in->mX.mX[40];
  X_idx_45 = in->mX.mX[45];
  out = out1->mZC;
  memcpy(&localMode[0], &M[0], 96U);
  t21 = 0.0;
  t22 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t25 = 0.0;
  t26 = 0.0;
  t27 = 0.0;
  t28 = 0.0;
  t29 = 0.0;
  t30 = 0.0;
  t31 = 0.0;
  t32 = 0.0;
  retv[0] = t21;
  retv[1] = t22;
  retv[2] = t23;
  retv[3] = t24;
  retv[4] = t25;
  retv[5] = t26;
  retv[6] = t27;
  retv[7] = t28;
  retv[8] = t29;
  retv[9] = t30;
  retv[10] = t31;
  retv[11] = t32;
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx] = retv[idx];
  }

  memcpy(&localMode0[0], &M[24], 96U);
  t21 = 0.0;
  t22 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t25 = 0.0;
  t26 = 0.0;
  t27 = 0.0;
  t28 = 0.0;
  t29 = 0.0;
  t30 = 0.0;
  t31 = 0.0;
  t32 = 0.0;
  retv0[0] = t21;
  retv0[1] = t22;
  retv0[2] = t23;
  retv0[3] = t24;
  retv0[4] = t25;
  retv0[5] = t26;
  retv0[6] = t27;
  retv0[7] = t28;
  retv0[8] = t29;
  retv0[9] = t30;
  retv0[10] = t31;
  retv0[11] = t32;
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 12ULL] = retv0[idx];
  }

  memcpy(&localMode1[0], &M[48], 96U);
  t21 = 0.0;
  t22 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t25 = 0.0;
  t26 = 0.0;
  t27 = 0.0;
  t28 = 0.0;
  t29 = 0.0;
  t30 = 0.0;
  t31 = 0.0;
  t32 = 0.0;
  retv1[0] = t21;
  retv1[1] = t22;
  retv1[2] = t23;
  retv1[3] = t24;
  retv1[4] = t25;
  retv1[5] = t26;
  retv1[6] = t27;
  retv1[7] = t28;
  retv1[8] = t29;
  retv1[9] = t30;
  retv1[10] = t31;
  retv1[11] = t32;
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 24ULL] = retv1[idx];
  }

  memcpy(&localMode2[0], &M[72], 96U);
  t21 = 0.0;
  t22 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t25 = 0.0;
  t26 = 0.0;
  t27 = 0.0;
  t28 = 0.0;
  t29 = 0.0;
  t30 = 0.0;
  t31 = 0.0;
  t32 = 0.0;
  retv2[0] = t21;
  retv2[1] = t22;
  retv2[2] = t23;
  retv2[3] = t24;
  retv2[4] = t25;
  retv2[5] = t26;
  retv2[6] = t27;
  retv2[7] = t28;
  retv2[8] = t29;
  retv2[9] = t30;
  retv2[10] = t31;
  retv2[11] = t32;
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 36ULL] = retv2[idx];
  }

  memcpy(&localMode3[0], &M[96], 96U);
  t21 = 0.0;
  t22 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t25 = 0.0;
  t26 = 0.0;
  t27 = 0.0;
  t28 = 0.0;
  t29 = 0.0;
  t30 = 0.0;
  t31 = 0.0;
  t32 = 0.0;
  retv3[0] = t21;
  retv3[1] = t22;
  retv3[2] = t23;
  retv3[3] = t24;
  retv3[4] = t25;
  retv3[5] = t26;
  retv3[6] = t27;
  retv3[7] = t28;
  retv3[8] = t29;
  retv3[9] = t30;
  retv3[10] = t31;
  retv3[11] = t32;
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 48ULL] = retv3[idx];
  }

  memcpy(&localMode4[0], &M[120], 96U);
  t21 = 0.0;
  t22 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t25 = 0.0;
  t26 = 0.0;
  t27 = 0.0;
  t28 = 0.0;
  t29 = 0.0;
  t30 = 0.0;
  t31 = 0.0;
  t32 = 0.0;
  retv4[0] = t21;
  retv4[1] = t22;
  retv4[2] = t23;
  retv4[3] = t24;
  retv4[4] = t25;
  retv4[5] = t26;
  retv4[6] = t27;
  retv4[7] = t28;
  retv4[8] = t29;
  retv4[9] = t30;
  retv4[10] = t31;
  retv4[11] = t32;
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 60ULL] = retv4[idx];
  }

  memcpy(&localMode5[0], &M[144], 96U);
  t21 = 0.0;
  t22 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t25 = 0.0;
  t26 = 0.0;
  t27 = 0.0;
  t28 = 0.0;
  t29 = 0.0;
  t30 = 0.0;
  t31 = 0.0;
  t32 = 0.0;
  retv5[0] = t21;
  retv5[1] = t22;
  retv5[2] = t23;
  retv5[3] = t24;
  retv5[4] = t25;
  retv5[5] = t26;
  retv5[6] = t27;
  retv5[7] = t28;
  retv5[8] = t29;
  retv5[9] = t30;
  retv5[10] = t31;
  retv5[11] = t32;
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 72ULL] = retv5[idx];
  }

  memcpy(&localMode6[0], &M[168], 96U);
  t21 = 0.0;
  t22 = 0.0;
  t23 = 0.0;
  t24 = 0.0;
  t25 = 0.0;
  t26 = 0.0;
  t27 = 0.0;
  t28 = 0.0;
  t29 = 0.0;
  t30 = 0.0;
  t31 = 0.0;
  t32 = 0.0;
  retv6[0] = t21;
  retv6[1] = t22;
  retv6[2] = t23;
  retv6[3] = t24;
  retv6[4] = t25;
  retv6[5] = t26;
  retv6[6] = t27;
  retv6[7] = t28;
  retv6[8] = t29;
  retv6[9] = t30;
  retv6[10] = t31;
  retv6[11] = t32;
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 84ULL] = retv6[idx];
  }

  t21 = X_idx_29 * 1.0000000000000002E-6;
  t21 = t21 * (t21 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[96ULL] = 6.9 / (t21 == 0.0 ? 1.0E-16 : t21) + 1.4237685041404136E-6 -
    -1.0E-9;
  out.mX[97ULL] = X_idx_1 * 100000.0 - -101325.0;
  t21 = X_idx_11 * 1.0000000000000002E-6;
  t21 = t21 * (t21 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[98ULL] = 6.9 / (t21 == 0.0 ? 1.0E-16 : t21) + 1.4237685041404136E-6 -
    -1.0E-9;
  t21 = X_idx_11 * 1.0000000000000002E-6;
  t21 = t21 * (t21 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[99ULL] = 6.9 / (t21 == 0.0 ? 1.0E-16 : t21) + 1.4237685041404136E-6 -
    -1.0E-9;
  out.mX[100ULL] = X_idx_3 * 100000.0 - -101325.0;
  t21 = X_idx_15 * 1.0000000000000002E-6;
  t21 = t21 * (t21 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[101ULL] = 6.9 / (t21 == 0.0 ? 1.0E-16 : t21) + 1.4237685041404136E-6 -
    -1.0E-9;
  t21 = X_idx_15 * 1.0000000000000002E-6;
  t21 = t21 * (t21 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[102ULL] = 6.9 / (t21 == 0.0 ? 1.0E-16 : t21) + 1.4237685041404136E-6 -
    -1.0E-9;
  out.mX[103ULL] = X_idx_5 * 100000.0 - -101325.0;
  t21 = X_idx_40 * 1.0000000000000002E-6;
  t21 = t21 * (t21 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[104ULL] = 6.9 / (t21 == 0.0 ? 1.0E-16 : t21) + 1.4237685041404136E-6 -
    -1.0E-9;
  t21 = X_idx_40 * 1.0000000000000002E-6;
  t21 = t21 * (t21 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[105ULL] = 6.9 / (t21 == 0.0 ? 1.0E-16 : t21) + 1.4237685041404136E-6 -
    -1.0E-9;
  out.mX[106ULL] = X_idx_7 * 100000.0 - -101325.0;
  t21 = X_idx_45 * 1.0000000000000002E-6;
  t21 = t21 * (t21 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  out.mX[107ULL] = 6.9 / (t21 == 0.0 ? 1.0E-16 : t21) + 1.4237685041404136E-6 -
    -1.0E-9;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_log(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out1)
{
  PmRealVector out;
  real_T X_idx_9;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_20;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_21;
  real_T X_idx_25;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_65;
  real_T X_idx_27;
  real_T X_idx_0;
  real_T X_idx_26;
  real_T X_idx_1;
  real_T X_idx_28;
  real_T X_idx_29;
  real_T X_idx_30;
  real_T X_idx_32;
  real_T X_idx_2;
  real_T X_idx_31;
  real_T X_idx_3;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_35;
  real_T X_idx_37;
  real_T X_idx_4;
  real_T X_idx_36;
  real_T X_idx_5;
  real_T X_idx_38;
  real_T X_idx_39;
  real_T X_idx_40;
  real_T X_idx_57;
  real_T X_idx_42;
  real_T X_idx_6;
  real_T X_idx_41;
  real_T X_idx_7;
  real_T X_idx_43;
  real_T X_idx_44;
  real_T X_idx_45;
  real_T X_idx_46;
  real_T X_idx_50;
  real_T X_idx_51;
  real_T X_idx_47;
  real_T X_idx_48;
  real_T X_idx_49;
  real_T X_idx_58;
  real_T X_idx_53;
  real_T X_idx_54;
  real_T X_idx_55;
  real_T X_idx_56;
  real_T X_idx_8;
  real_T X_idx_59;
  real_T X_idx_60;
  real_T X_idx_61;
  real_T X_idx_62;
  real_T X_idx_63;
  real_T X_idx_64;
  real_T X_idx_66;
  real_T X_idx_67;
  real_T X_idx_68;
  real_T X_idx_69;
  real_T X_idx_70;
  real_T X_idx_71;
  X_idx_0 = in->mX.mX[0];
  X_idx_1 = in->mX.mX[1];
  X_idx_2 = in->mX.mX[2];
  X_idx_3 = in->mX.mX[3];
  X_idx_4 = in->mX.mX[4];
  X_idx_5 = in->mX.mX[5];
  X_idx_6 = in->mX.mX[6];
  X_idx_7 = in->mX.mX[7];
  X_idx_8 = in->mX.mX[8];
  X_idx_9 = in->mX.mX[9];
  X_idx_10 = in->mX.mX[10];
  X_idx_11 = in->mX.mX[11];
  X_idx_12 = in->mX.mX[12];
  X_idx_13 = in->mX.mX[13];
  X_idx_14 = in->mX.mX[14];
  X_idx_15 = in->mX.mX[15];
  X_idx_16 = in->mX.mX[16];
  X_idx_17 = in->mX.mX[17];
  X_idx_18 = in->mX.mX[18];
  X_idx_19 = in->mX.mX[19];
  X_idx_20 = in->mX.mX[20];
  X_idx_21 = in->mX.mX[21];
  X_idx_22 = in->mX.mX[22];
  X_idx_23 = in->mX.mX[23];
  X_idx_24 = in->mX.mX[24];
  X_idx_25 = in->mX.mX[25];
  X_idx_26 = in->mX.mX[26];
  X_idx_27 = in->mX.mX[27];
  X_idx_28 = in->mX.mX[28];
  X_idx_29 = in->mX.mX[29];
  X_idx_30 = in->mX.mX[30];
  X_idx_31 = in->mX.mX[31];
  X_idx_32 = in->mX.mX[32];
  X_idx_33 = in->mX.mX[33];
  X_idx_34 = in->mX.mX[34];
  X_idx_35 = in->mX.mX[35];
  X_idx_36 = in->mX.mX[36];
  X_idx_37 = in->mX.mX[37];
  X_idx_38 = in->mX.mX[38];
  X_idx_39 = in->mX.mX[39];
  X_idx_40 = in->mX.mX[40];
  X_idx_41 = in->mX.mX[41];
  X_idx_42 = in->mX.mX[42];
  X_idx_43 = in->mX.mX[43];
  X_idx_44 = in->mX.mX[44];
  X_idx_45 = in->mX.mX[45];
  X_idx_46 = in->mX.mX[46];
  X_idx_47 = in->mX.mX[47];
  X_idx_48 = in->mX.mX[48];
  X_idx_49 = in->mX.mX[49];
  X_idx_50 = in->mX.mX[50];
  X_idx_51 = in->mX.mX[51];
  X_idx_53 = in->mX.mX[53];
  X_idx_54 = in->mX.mX[54];
  X_idx_55 = in->mX.mX[55];
  X_idx_56 = in->mX.mX[56];
  X_idx_57 = in->mX.mX[57];
  X_idx_58 = in->mX.mX[58];
  X_idx_59 = in->mX.mX[59];
  X_idx_60 = in->mX.mX[60];
  X_idx_61 = in->mX.mX[61];
  X_idx_62 = in->mX.mX[62];
  X_idx_63 = in->mX.mX[63];
  X_idx_64 = in->mX.mX[64];
  X_idx_65 = in->mX.mX[65];
  X_idx_66 = in->mX.mX[66];
  X_idx_67 = in->mX.mX[67];
  X_idx_68 = in->mX.mX[68];
  X_idx_69 = in->mX.mX[69];
  X_idx_70 = in->mX.mX[70];
  X_idx_71 = in->mX.mX[71];
  out = out1->mLOG;
  out.mX[0ULL] = X_idx_9 * 100000.0;
  out.mX[1ULL] = X_idx_10 * 100000.0;
  out.mX[2ULL] = X_idx_9 * 100000.0;
  out.mX[3ULL] = X_idx_10 * 100000.0;
  out.mX[4ULL] = X_idx_11 * 1.0000000000000002E-6;
  out.mX[5ULL] = X_idx_12 * 100000.0;
  out.mX[6ULL] = X_idx_13 * 100000.0;
  out.mX[7ULL] = X_idx_14 * 100000.0;
  out.mX[8ULL] = X_idx_13 * 100000.0;
  out.mX[9ULL] = X_idx_14 * 100000.0;
  out.mX[10ULL] = X_idx_15 * 1.0000000000000002E-6;
  out.mX[11ULL] = X_idx_16 * 100000.0;
  out.mX[12ULL] = X_idx_17 * 100000.0;
  out.mX[13ULL] = X_idx_20 * 100000.0;
  out.mX[14ULL] = X_idx_18 * 100000.0;
  out.mX[15ULL] = X_idx_19 * 100000.0;
  out.mX[16ULL] = X_idx_21 * 100000.0;
  out.mX[17ULL] = X_idx_25 * 100000.0;
  out.mX[18ULL] = X_idx_22 * 1.0000000000000002E-6;
  out.mX[19ULL] = X_idx_23;
  out.mX[20ULL] = X_idx_24 * 100000.0;
  out.mX[21ULL] = X_idx_25 * 100000.0;
  out.mX[22ULL] = X_idx_65 * 100000.0;
  out.mX[23ULL] = X_idx_9 * 100000.0;
  out.mX[24ULL] = X_idx_27 * 100000.0;
  out.mX[25ULL] = X_idx_0;
  out.mX[26ULL] = X_idx_26 * 1.0000000000000002E-6;
  out.mX[27ULL] = X_idx_1 * 100000.0;
  out.mX[28ULL] = X_idx_65 * 100000.0;
  out.mX[29ULL] = X_idx_27 * 100000.0;
  out.mX[30ULL] = X_idx_28 * 100000.0;
  out.mX[31ULL] = X_idx_29 * 1.0000000000000002E-6;
  out.mX[32ULL] = X_idx_27 * 100000.0;
  out.mX[33ULL] = X_idx_9 * 100000.0;
  out.mX[34ULL] = X_idx_30 * 100000.0;
  out.mX[35ULL] = X_idx_11 * 1.0000000000000002E-6;
  out.mX[36ULL] = X_idx_10 * 100000.0;
  out.mX[37ULL] = X_idx_13 * 100000.0;
  out.mX[38ULL] = X_idx_32 * 100000.0;
  out.mX[39ULL] = X_idx_2;
  out.mX[40ULL] = X_idx_31 * 1.0000000000000002E-6;
  out.mX[41ULL] = X_idx_3 * 100000.0;
  out.mX[42ULL] = X_idx_10 * 100000.0;
  out.mX[43ULL] = X_idx_32 * 100000.0;
  out.mX[44ULL] = X_idx_33 * 100000.0;
  out.mX[45ULL] = X_idx_11 * 1.0000000000000002E-6;
  out.mX[46ULL] = X_idx_32 * 100000.0;
  out.mX[47ULL] = X_idx_13 * 100000.0;
  out.mX[48ULL] = X_idx_34 * 100000.0;
  out.mX[49ULL] = X_idx_15 * 1.0000000000000002E-6;
  out.mX[50ULL] = X_idx_14 * 100000.0;
  out.mX[51ULL] = X_idx_35 * 100000.0;
  out.mX[52ULL] = X_idx_37 * 100000.0;
  out.mX[53ULL] = X_idx_4;
  out.mX[54ULL] = X_idx_36 * 1.0000000000000002E-6;
  out.mX[55ULL] = X_idx_5 * 100000.0;
  out.mX[56ULL] = X_idx_14 * 100000.0;
  out.mX[57ULL] = X_idx_37 * 100000.0;
  out.mX[58ULL] = X_idx_38 * 100000.0;
  out.mX[59ULL] = X_idx_15 * 1.0000000000000002E-6;
  out.mX[60ULL] = X_idx_37 * 100000.0;
  out.mX[61ULL] = X_idx_35 * 100000.0;
  out.mX[62ULL] = X_idx_39 * 100000.0;
  out.mX[63ULL] = X_idx_40 * 1.0000000000000002E-6;
  out.mX[64ULL] = X_idx_35 * 100000.0;
  out.mX[65ULL] = X_idx_57 * 100000.0;
  out.mX[66ULL] = X_idx_42 * 100000.0;
  out.mX[67ULL] = X_idx_6;
  out.mX[68ULL] = X_idx_41 * 1.0000000000000002E-6;
  out.mX[69ULL] = X_idx_7 * 100000.0;
  out.mX[70ULL] = X_idx_35 * 100000.0;
  out.mX[71ULL] = X_idx_42 * 100000.0;
  out.mX[72ULL] = X_idx_43 * 100000.0;
  out.mX[73ULL] = X_idx_40 * 1.0000000000000002E-6;
  out.mX[74ULL] = X_idx_42 * 100000.0;
  out.mX[75ULL] = X_idx_57 * 100000.0;
  out.mX[76ULL] = X_idx_44 * 100000.0;
  out.mX[77ULL] = X_idx_45 * 1.0000000000000002E-6;
  out.mX[78ULL] = X_idx_46 * 100000.0;
  out.mX[79ULL] = X_idx_17 * 100000.0;
  out.mX[80ULL] = X_idx_50 * 100000.0;
  out.mX[81ULL] = X_idx_51 * 100000.0;
  out.mX[82ULL] = 0.0;
  out.mX[83ULL] = X_idx_47 * 100000.0;
  out.mX[84ULL] = X_idx_18 * 100000.0;
  out.mX[85ULL] = X_idx_48 * 100000.0;
  out.mX[86ULL] = X_idx_49 * 100000.0;
  out.mX[87ULL] = 0.0;
  out.mX[88ULL] = X_idx_25 * 100000.0;
  out.mX[89ULL] = X_idx_58 * 100000.0;
  out.mX[90ULL] = X_idx_53;
  out.mX[91ULL] = X_idx_54 * 1.0000000000000002E-6;
  out.mX[92ULL] = X_idx_55 * 1.0000000000000002E-6;
  out.mX[93ULL] = X_idx_56 * 100000.0;
  out.mX[94ULL] = X_idx_8;
  out.mX[95ULL] = X_idx_47 * 100000.0;
  out.mX[96ULL] = X_idx_57 * 100000.0;
  out.mX[97ULL] = X_idx_58 * 100000.0;
  out.mX[98ULL] = X_idx_57 * 100000.0;
  out.mX[99ULL] = X_idx_58 * 100000.0;
  out.mX[100ULL] = X_idx_59 * 1.0000000000000002E-6;
  out.mX[101ULL] = X_idx_60 * 100000.0;
  out.mX[102ULL] = X_idx_47 * 100000.0;
  out.mX[103ULL] = X_idx_57 * 100000.0;
  out.mX[104ULL] = X_idx_61 * 1.0000000000000002E-6;
  out.mX[105ULL] = X_idx_62 * 100000.0;
  out.mX[106ULL] = X_idx_47 * 100000.0;
  out.mX[107ULL] = X_idx_58 * 100000.0;
  out.mX[108ULL] = X_idx_63 * 1.0000000000000002E-6;
  out.mX[109ULL] = X_idx_64 * 100000.0;
  out.mX[110ULL] = X_idx_46 * 100000.0;
  out.mX[111ULL] = X_idx_21 * 100000.0;
  out.mX[112ULL] = X_idx_65 * 100000.0;
  out.mX[113ULL] = X_idx_21 * 100000.0;
  out.mX[114ULL] = X_idx_65 * 100000.0;
  out.mX[115ULL] = X_idx_66 * 1.0000000000000002E-6;
  out.mX[116ULL] = X_idx_67 * 100000.0;
  out.mX[117ULL] = X_idx_46 * 100000.0;
  out.mX[118ULL] = X_idx_21 * 100000.0;
  out.mX[119ULL] = X_idx_68 * 1.0000000000000002E-6;
  out.mX[120ULL] = X_idx_69 * 100000.0;
  out.mX[121ULL] = X_idx_46 * 100000.0;
  out.mX[122ULL] = X_idx_65 * 100000.0;
  out.mX[123ULL] = X_idx_70 * 1.0000000000000002E-6;
  out.mX[124ULL] = X_idx_71 * 100000.0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_assert(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out1)
{
  PmIntVector out;
  int32_T retv[9];
  size_t idx;
  int32_T retv0[9];
  int32_T retv1[9];
  int32_T retv2[9];
  int32_T retv3[9];
  int32_T retv4[9];
  int32_T retv5[9];
  int32_T retv6[9];
  int32_T retv7[12];
  int32_T retv9[12];
  int32_T retv10[12];
  int32_T retv12[12];
  int32_T retv13[12];
  int32_T retv15[12];
  int32_T retv16[12];
  int32_T retv18[12];
  real_T t0;
  boolean_T t88;
  real_T X_idx_11;
  real_T X_idx_15;
  real_T X_idx_63;
  real_T X_idx_61;
  real_T X_idx_59;
  real_T X_idx_70;
  real_T X_idx_68;
  real_T X_idx_66;
  int32_T M_idx_192;
  real_T X_idx_29;
  int32_T M_idx_193;
  int32_T M_idx_194;
  int32_T M_idx_195;
  int32_T M_idx_196;
  int32_T M_idx_197;
  int32_T M_idx_198;
  int32_T M_idx_199;
  int32_T M_idx_200;
  real_T X_idx_40;
  int32_T M_idx_201;
  int32_T M_idx_202;
  int32_T M_idx_203;
  real_T X_idx_45;
  real_T X_idx_8;
  M_idx_192 = in->mM.mX[192];
  M_idx_193 = in->mM.mX[193];
  M_idx_194 = in->mM.mX[194];
  M_idx_195 = in->mM.mX[195];
  M_idx_196 = in->mM.mX[196];
  M_idx_197 = in->mM.mX[197];
  M_idx_198 = in->mM.mX[198];
  M_idx_199 = in->mM.mX[199];
  M_idx_200 = in->mM.mX[200];
  M_idx_201 = in->mM.mX[201];
  M_idx_202 = in->mM.mX[202];
  M_idx_203 = in->mM.mX[203];
  X_idx_8 = in->mX.mX[8];
  X_idx_11 = in->mX.mX[11];
  X_idx_15 = in->mX.mX[15];
  X_idx_29 = in->mX.mX[29];
  X_idx_40 = in->mX.mX[40];
  X_idx_45 = in->mX.mX[45];
  X_idx_59 = in->mX.mX[59];
  X_idx_61 = in->mX.mX[61];
  X_idx_63 = in->mX.mX[63];
  X_idx_66 = in->mX.mX[66];
  X_idx_68 = in->mX.mX[68];
  X_idx_70 = in->mX.mX[70];
  out = out1->mASSERT;
  t0 = X_idx_11 * 1.0000000000000002E-6;
  retv[0] = 1;
  retv[1] = 1;
  retv[2] = 1;
  retv[3] = 1;
  retv[4] = 1;
  retv[5] = 1;
  retv[6] = 1;
  retv[7] = (int32_T)((t0 >= 0.0 ? 1.0 : 1.0) != 0.0);
  retv[8] = (int32_T)((!(t0 >= 0.0) ? 1.0 : 1.0) != 0.0);
  for (idx = 0ULL; idx < 9ULL; idx++) {
    out.mX[idx] = retv[idx];
  }

  t0 = X_idx_15 * 1.0000000000000002E-6;
  retv0[0] = 1;
  retv0[1] = 1;
  retv0[2] = 1;
  retv0[3] = 1;
  retv0[4] = 1;
  retv0[5] = 1;
  retv0[6] = 1;
  retv0[7] = (int32_T)((t0 >= 0.0 ? 1.0 : 1.0) != 0.0);
  retv0[8] = (int32_T)((!(t0 >= 0.0) ? 1.0 : 1.0) != 0.0);
  for (idx = 0ULL; idx < 9ULL; idx++) {
    out.mX[idx + 9ULL] = retv0[idx];
  }

  t0 = X_idx_63 * 1.0000000000000002E-6;
  retv1[0] = 1;
  retv1[1] = 1;
  retv1[2] = 1;
  retv1[3] = 1;
  retv1[4] = 1;
  retv1[5] = 1;
  retv1[6] = 1;
  retv1[7] = (int32_T)((t0 >= 0.0 ? 1.0 : 1.0) != 0.0);
  retv1[8] = (int32_T)((!(t0 >= 0.0) ? 1.0 : 1.0) != 0.0);
  for (idx = 0ULL; idx < 9ULL; idx++) {
    out.mX[idx + 18ULL] = retv1[idx];
  }

  t0 = X_idx_61 * 1.0000000000000002E-6;
  retv2[0] = 1;
  retv2[1] = 1;
  retv2[2] = 1;
  retv2[3] = 1;
  retv2[4] = 1;
  retv2[5] = 1;
  retv2[6] = 1;
  retv2[7] = (int32_T)((t0 >= 0.0 ? 1.0 : 1.0) != 0.0);
  retv2[8] = (int32_T)((!(t0 >= 0.0) ? 1.0 : 1.0) != 0.0);
  for (idx = 0ULL; idx < 9ULL; idx++) {
    out.mX[idx + 27ULL] = retv2[idx];
  }

  t0 = X_idx_59 * 1.0000000000000002E-6;
  retv3[0] = 1;
  retv3[1] = 1;
  retv3[2] = 1;
  retv3[3] = 1;
  retv3[4] = 1;
  retv3[5] = 1;
  retv3[6] = 1;
  retv3[7] = (int32_T)((t0 >= 0.0 ? 1.0 : 1.0) != 0.0);
  retv3[8] = (int32_T)((!(t0 >= 0.0) ? 1.0 : 1.0) != 0.0);
  for (idx = 0ULL; idx < 9ULL; idx++) {
    out.mX[idx + 36ULL] = retv3[idx];
  }

  t0 = X_idx_70 * 1.0000000000000002E-6;
  retv4[0] = 1;
  retv4[1] = 1;
  retv4[2] = 1;
  retv4[3] = 1;
  retv4[4] = 1;
  retv4[5] = 1;
  retv4[6] = 1;
  retv4[7] = (int32_T)((t0 >= 0.0 ? 1.0 : 1.0) != 0.0);
  retv4[8] = (int32_T)((!(t0 >= 0.0) ? 1.0 : 1.0) != 0.0);
  for (idx = 0ULL; idx < 9ULL; idx++) {
    out.mX[idx + 45ULL] = retv4[idx];
  }

  t0 = X_idx_68 * 1.0000000000000002E-6;
  retv5[0] = 1;
  retv5[1] = 1;
  retv5[2] = 1;
  retv5[3] = 1;
  retv5[4] = 1;
  retv5[5] = 1;
  retv5[6] = 1;
  retv5[7] = (int32_T)((t0 >= 0.0 ? 1.0 : 1.0) != 0.0);
  retv5[8] = (int32_T)((!(t0 >= 0.0) ? 1.0 : 1.0) != 0.0);
  for (idx = 0ULL; idx < 9ULL; idx++) {
    out.mX[idx + 54ULL] = retv5[idx];
  }

  t0 = X_idx_66 * 1.0000000000000002E-6;
  retv6[0] = 1;
  retv6[1] = 1;
  retv6[2] = 1;
  retv6[3] = 1;
  retv6[4] = 1;
  retv6[5] = 1;
  retv6[6] = 1;
  retv6[7] = (int32_T)((t0 >= 0.0 ? 1.0 : 1.0) != 0.0);
  retv6[8] = (int32_T)((!(t0 >= 0.0) ? 1.0 : 1.0) != 0.0);
  for (idx = 0ULL; idx < 9ULL; idx++) {
    out.mX[idx + 63ULL] = retv6[idx];
  }

  t0 = X_idx_29 * 1.0000000000000002E-6;
  t0 = t0 * (t0 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  t88 = !(t0 <= 2000.0) && !(t0 <= 200.0);
  retv7[0] = 1;
  retv7[1] = 1;
  retv7[2] = 1;
  retv7[3] = 1;
  retv7[4] = 1;
  retv7[5] = 1;
  retv7[6] = 1;
  retv7[7] = 1;
  retv7[8] = 1;
  retv7[9] = 1;
  retv7[10] = (int32_T)((t88 ? (real_T)(M_idx_192 != 0) : 1.0) != 0.0);
  retv7[11] = (int32_T)((t88 ? (real_T)(6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 > 0.0 || 6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 <= -1.0E-9) : 1.0) != 0.0);
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 72ULL] = retv7[idx];
  }

  out.mX[84ULL] = (int32_T)(M_idx_193 != 0);
  out.mX[85ULL] = 1;
  out.mX[86ULL] = 1;
  out.mX[87ULL] = 1;
  out.mX[88ULL] = 1;
  out.mX[89ULL] = 1;
  t0 = X_idx_11 * 1.0000000000000002E-6;
  t0 = t0 * (t0 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  t88 = !(t0 <= 2000.0) && !(t0 <= 200.0);
  retv9[0] = 1;
  retv9[1] = 1;
  retv9[2] = 1;
  retv9[3] = 1;
  retv9[4] = 1;
  retv9[5] = 1;
  retv9[6] = 1;
  retv9[7] = 1;
  retv9[8] = 1;
  retv9[9] = 1;
  retv9[10] = (int32_T)((t88 ? (real_T)(M_idx_194 != 0) : 1.0) != 0.0);
  retv9[11] = (int32_T)((t88 ? (real_T)(6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 > 0.0 || 6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 <= -1.0E-9) : 1.0) != 0.0);
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 90ULL] = retv9[idx];
  }

  t0 = X_idx_11 * 1.0000000000000002E-6;
  t0 = t0 * (t0 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  t88 = !(t0 <= 2000.0) && !(t0 <= 200.0);
  retv10[0] = 1;
  retv10[1] = 1;
  retv10[2] = 1;
  retv10[3] = 1;
  retv10[4] = 1;
  retv10[5] = 1;
  retv10[6] = 1;
  retv10[7] = 1;
  retv10[8] = 1;
  retv10[9] = 1;
  retv10[10] = (int32_T)((t88 ? (real_T)(M_idx_195 != 0) : 1.0) != 0.0);
  retv10[11] = (int32_T)((t88 ? (real_T)(6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 > 0.0 || 6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 <= -1.0E-9) : 1.0) != 0.0);
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 102ULL] = retv10[idx];
  }

  out.mX[114ULL] = (int32_T)(M_idx_196 != 0);
  out.mX[115ULL] = 1;
  out.mX[116ULL] = 1;
  out.mX[117ULL] = 1;
  out.mX[118ULL] = 1;
  out.mX[119ULL] = 1;
  t0 = X_idx_15 * 1.0000000000000002E-6;
  t0 = t0 * (t0 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  t88 = !(t0 <= 2000.0) && !(t0 <= 200.0);
  retv12[0] = 1;
  retv12[1] = 1;
  retv12[2] = 1;
  retv12[3] = 1;
  retv12[4] = 1;
  retv12[5] = 1;
  retv12[6] = 1;
  retv12[7] = 1;
  retv12[8] = 1;
  retv12[9] = 1;
  retv12[10] = (int32_T)((t88 ? (real_T)(M_idx_197 != 0) : 1.0) != 0.0);
  retv12[11] = (int32_T)((t88 ? (real_T)(6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 > 0.0 || 6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 <= -1.0E-9) : 1.0) != 0.0);
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 120ULL] = retv12[idx];
  }

  t0 = X_idx_15 * 1.0000000000000002E-6;
  t0 = t0 * (t0 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  t88 = !(t0 <= 2000.0) && !(t0 <= 200.0);
  retv13[0] = 1;
  retv13[1] = 1;
  retv13[2] = 1;
  retv13[3] = 1;
  retv13[4] = 1;
  retv13[5] = 1;
  retv13[6] = 1;
  retv13[7] = 1;
  retv13[8] = 1;
  retv13[9] = 1;
  retv13[10] = (int32_T)((t88 ? (real_T)(M_idx_198 != 0) : 1.0) != 0.0);
  retv13[11] = (int32_T)((t88 ? (real_T)(6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 > 0.0 || 6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 <= -1.0E-9) : 1.0) != 0.0);
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 132ULL] = retv13[idx];
  }

  out.mX[144ULL] = (int32_T)(M_idx_199 != 0);
  out.mX[145ULL] = 1;
  out.mX[146ULL] = 1;
  out.mX[147ULL] = 1;
  out.mX[148ULL] = 1;
  out.mX[149ULL] = 1;
  t0 = X_idx_40 * 1.0000000000000002E-6;
  t0 = t0 * (t0 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  t88 = !(t0 <= 2000.0) && !(t0 <= 200.0);
  retv15[0] = 1;
  retv15[1] = 1;
  retv15[2] = 1;
  retv15[3] = 1;
  retv15[4] = 1;
  retv15[5] = 1;
  retv15[6] = 1;
  retv15[7] = 1;
  retv15[8] = 1;
  retv15[9] = 1;
  retv15[10] = (int32_T)((t88 ? (real_T)(M_idx_200 != 0) : 1.0) != 0.0);
  retv15[11] = (int32_T)((t88 ? (real_T)(6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 > 0.0 || 6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 <= -1.0E-9) : 1.0) != 0.0);
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 150ULL] = retv15[idx];
  }

  t0 = X_idx_40 * 1.0000000000000002E-6;
  t0 = t0 * (t0 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  t88 = !(t0 <= 2000.0) && !(t0 <= 200.0);
  retv16[0] = 1;
  retv16[1] = 1;
  retv16[2] = 1;
  retv16[3] = 1;
  retv16[4] = 1;
  retv16[5] = 1;
  retv16[6] = 1;
  retv16[7] = 1;
  retv16[8] = 1;
  retv16[9] = 1;
  retv16[10] = (int32_T)((t88 ? (real_T)(M_idx_201 != 0) : 1.0) != 0.0);
  retv16[11] = (int32_T)((t88 ? (real_T)(6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 > 0.0 || 6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 <= -1.0E-9) : 1.0) != 0.0);
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 162ULL] = retv16[idx];
  }

  out.mX[174ULL] = (int32_T)(M_idx_202 != 0);
  out.mX[175ULL] = 1;
  out.mX[176ULL] = 1;
  out.mX[177ULL] = 1;
  out.mX[178ULL] = 1;
  out.mX[179ULL] = 1;
  t0 = X_idx_45 * 1.0000000000000002E-6;
  t0 = t0 * (t0 >= 0.0 ? 1.0 : -1.0) * 0.038099999999999995 /
    0.0011400918279693697 / 0.00022107788705467982;
  t88 = !(t0 <= 2000.0) && !(t0 <= 200.0);
  retv18[0] = 1;
  retv18[1] = 1;
  retv18[2] = 1;
  retv18[3] = 1;
  retv18[4] = 1;
  retv18[5] = 1;
  retv18[6] = 1;
  retv18[7] = 1;
  retv18[8] = 1;
  retv18[9] = 1;
  retv18[10] = (int32_T)((t88 ? (real_T)(M_idx_203 != 0) : 1.0) != 0.0);
  retv18[11] = (int32_T)((t88 ? (real_T)(6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 > 0.0 || 6.9 / (t0 == 0.0 ? 1.0E-16 : t0) +
    1.4237685041404136E-6 <= -1.0E-9) : 1.0) != 0.0);
  for (idx = 0ULL; idx < 12ULL; idx++) {
    out.mX[idx + 180ULL] = retv18[idx];
  }

  out.mX[192ULL] = 1;
  out.mX[193ULL] = 1;
  out.mX[194ULL] = 1;
  out.mX[195ULL] = (int32_T)(X_idx_8 >= 0.0);
  out.mX[196ULL] = 1;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_obs_exp(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out1)
{
  PmRealVector out;
  (void)in;
  out = out1->mOBS_EXP;
  out.mX[0ULL] = 0.0;
  out.mX[1ULL] = 0.0;
  out.mX[2ULL] = 0.0;
  out.mX[3ULL] = 0.0;
  out.mX[4ULL] = 0.0;
  out.mX[5ULL] = 0.0;
  out.mX[6ULL] = 0.0;
  out.mX[7ULL] = 0.0;
  out.mX[8ULL] = 0.0;
  out.mX[9ULL] = 0.0;
  out.mX[10ULL] = 0.0;
  out.mX[11ULL] = 0.0;
  out.mX[12ULL] = 0.0;
  out.mX[13ULL] = 0.0;
  out.mX[14ULL] = 0.0;
  out.mX[15ULL] = 0.0;
  out.mX[16ULL] = 0.0;
  out.mX[17ULL] = 0.0;
  out.mX[18ULL] = 0.0;
  out.mX[19ULL] = 0.0;
  out.mX[20ULL] = 0.0;
  out.mX[21ULL] = 0.0;
  out.mX[22ULL] = 0.0;
  out.mX[23ULL] = 0.0;
  out.mX[24ULL] = 0.0;
  out.mX[25ULL] = 0.0;
  out.mX[26ULL] = 999.99999999999989;
  out.mX[27ULL] = 0.0;
  out.mX[28ULL] = 0.0;
  out.mX[29ULL] = 0.0;
  out.mX[30ULL] = 0.0;
  out.mX[31ULL] = 999.99999999999989;
  out.mX[32ULL] = 0.0;
  out.mX[33ULL] = 0.0;
  out.mX[34ULL] = 0.0;
  out.mX[35ULL] = 999.99999999999989;
  out.mX[36ULL] = 0.0;
  out.mX[37ULL] = 0.0;
  out.mX[38ULL] = 0.0;
  out.mX[39ULL] = 0.0;
  out.mX[40ULL] = 999.99999999999989;
  out.mX[41ULL] = 0.0;
  out.mX[42ULL] = 0.0;
  out.mX[43ULL] = 0.0;
  out.mX[44ULL] = 0.0;
  out.mX[45ULL] = 999.99999999999989;
  out.mX[46ULL] = 0.0;
  out.mX[47ULL] = 0.0;
  out.mX[48ULL] = 0.0;
  out.mX[49ULL] = 999.99999999999989;
  out.mX[50ULL] = 0.0;
  out.mX[51ULL] = 0.0;
  out.mX[52ULL] = 0.0;
  out.mX[53ULL] = 0.0;
  out.mX[54ULL] = 999.99999999999989;
  out.mX[55ULL] = 0.0;
  out.mX[56ULL] = 0.0;
  out.mX[57ULL] = 0.0;
  out.mX[58ULL] = 0.0;
  out.mX[59ULL] = 999.99999999999989;
  out.mX[60ULL] = 0.0;
  out.mX[61ULL] = 0.0;
  out.mX[62ULL] = 0.0;
  out.mX[63ULL] = 999.99999999999989;
  out.mX[64ULL] = 0.0;
  out.mX[65ULL] = 0.0;
  out.mX[66ULL] = 0.0;
  out.mX[67ULL] = 0.0;
  out.mX[68ULL] = 999.99999999999989;
  out.mX[69ULL] = 0.0;
  out.mX[70ULL] = 0.0;
  out.mX[71ULL] = 0.0;
  out.mX[72ULL] = 0.0;
  out.mX[73ULL] = 999.99999999999989;
  out.mX[74ULL] = 0.0;
  out.mX[75ULL] = 0.0;
  out.mX[76ULL] = 0.0;
  out.mX[77ULL] = 999.99999999999989;
  out.mX[78ULL] = 0.0;
  out.mX[79ULL] = 0.0;
  out.mX[80ULL] = 0.0;
  out.mX[81ULL] = 0.0;
  out.mX[82ULL] = 999.99999999999989;
  out.mX[83ULL] = 0.0;
  out.mX[84ULL] = 0.0;
  out.mX[85ULL] = 0.0;
  out.mX[86ULL] = 0.0;
  out.mX[87ULL] = 999.99999999999989;
  out.mX[88ULL] = 0.0;
  out.mX[89ULL] = 0.0;
  out.mX[90ULL] = 0.0;
  out.mX[91ULL] = 0.0;
  out.mX[92ULL] = 0.0;
  out.mX[93ULL] = 0.0;
  out.mX[94ULL] = 0.1892705892;
  out.mX[95ULL] = 0.0;
  out.mX[96ULL] = 0.0;
  out.mX[97ULL] = 0.0;
  out.mX[98ULL] = 0.0;
  out.mX[99ULL] = 0.0;
  out.mX[100ULL] = 0.0;
  out.mX[101ULL] = 0.0;
  out.mX[102ULL] = 0.0;
  out.mX[103ULL] = 0.0;
  out.mX[104ULL] = 0.0;
  out.mX[105ULL] = 0.0;
  out.mX[106ULL] = 0.0;
  out.mX[107ULL] = 0.0;
  out.mX[108ULL] = 0.0;
  out.mX[109ULL] = 0.0;
  out.mX[110ULL] = 0.0;
  out.mX[111ULL] = 0.0;
  out.mX[112ULL] = 0.0;
  out.mX[113ULL] = 0.0;
  out.mX[114ULL] = 0.0;
  out.mX[115ULL] = 0.0;
  out.mX[116ULL] = 0.0;
  out.mX[117ULL] = 0.0;
  out.mX[118ULL] = 0.0;
  out.mX[119ULL] = 0.0;
  out.mX[120ULL] = 0.0;
  out.mX[121ULL] = 0.0;
  out.mX[122ULL] = 0.0;
  out.mX[123ULL] = 0.0;
  out.mX[124ULL] = 0.0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_obs_act(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out1)
{
  PmRealVector out;
  real_T X_idx_9;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_20;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_21;
  real_T X_idx_25;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_65;
  real_T X_idx_27;
  real_T X_idx_0;
  real_T X_idx_26;
  real_T X_idx_1;
  real_T X_idx_28;
  real_T X_idx_29;
  real_T X_idx_30;
  real_T X_idx_32;
  real_T X_idx_2;
  real_T X_idx_31;
  real_T X_idx_3;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_35;
  real_T X_idx_37;
  real_T X_idx_4;
  real_T X_idx_36;
  real_T X_idx_5;
  real_T X_idx_38;
  real_T X_idx_39;
  real_T X_idx_40;
  real_T X_idx_57;
  real_T X_idx_42;
  real_T X_idx_6;
  real_T X_idx_41;
  real_T X_idx_7;
  real_T X_idx_43;
  real_T X_idx_44;
  real_T X_idx_45;
  real_T X_idx_46;
  real_T X_idx_50;
  real_T X_idx_51;
  real_T X_idx_47;
  real_T X_idx_48;
  real_T X_idx_49;
  real_T X_idx_58;
  real_T X_idx_53;
  real_T X_idx_54;
  real_T X_idx_55;
  real_T X_idx_56;
  real_T X_idx_8;
  real_T X_idx_59;
  real_T X_idx_60;
  real_T X_idx_61;
  real_T X_idx_62;
  real_T X_idx_63;
  real_T X_idx_64;
  real_T X_idx_66;
  real_T X_idx_67;
  real_T X_idx_68;
  real_T X_idx_69;
  real_T X_idx_70;
  real_T X_idx_71;
  X_idx_0 = in->mX.mX[0];
  X_idx_1 = in->mX.mX[1];
  X_idx_2 = in->mX.mX[2];
  X_idx_3 = in->mX.mX[3];
  X_idx_4 = in->mX.mX[4];
  X_idx_5 = in->mX.mX[5];
  X_idx_6 = in->mX.mX[6];
  X_idx_7 = in->mX.mX[7];
  X_idx_8 = in->mX.mX[8];
  X_idx_9 = in->mX.mX[9];
  X_idx_10 = in->mX.mX[10];
  X_idx_11 = in->mX.mX[11];
  X_idx_12 = in->mX.mX[12];
  X_idx_13 = in->mX.mX[13];
  X_idx_14 = in->mX.mX[14];
  X_idx_15 = in->mX.mX[15];
  X_idx_16 = in->mX.mX[16];
  X_idx_17 = in->mX.mX[17];
  X_idx_18 = in->mX.mX[18];
  X_idx_19 = in->mX.mX[19];
  X_idx_20 = in->mX.mX[20];
  X_idx_21 = in->mX.mX[21];
  X_idx_22 = in->mX.mX[22];
  X_idx_23 = in->mX.mX[23];
  X_idx_24 = in->mX.mX[24];
  X_idx_25 = in->mX.mX[25];
  X_idx_26 = in->mX.mX[26];
  X_idx_27 = in->mX.mX[27];
  X_idx_28 = in->mX.mX[28];
  X_idx_29 = in->mX.mX[29];
  X_idx_30 = in->mX.mX[30];
  X_idx_31 = in->mX.mX[31];
  X_idx_32 = in->mX.mX[32];
  X_idx_33 = in->mX.mX[33];
  X_idx_34 = in->mX.mX[34];
  X_idx_35 = in->mX.mX[35];
  X_idx_36 = in->mX.mX[36];
  X_idx_37 = in->mX.mX[37];
  X_idx_38 = in->mX.mX[38];
  X_idx_39 = in->mX.mX[39];
  X_idx_40 = in->mX.mX[40];
  X_idx_41 = in->mX.mX[41];
  X_idx_42 = in->mX.mX[42];
  X_idx_43 = in->mX.mX[43];
  X_idx_44 = in->mX.mX[44];
  X_idx_45 = in->mX.mX[45];
  X_idx_46 = in->mX.mX[46];
  X_idx_47 = in->mX.mX[47];
  X_idx_48 = in->mX.mX[48];
  X_idx_49 = in->mX.mX[49];
  X_idx_50 = in->mX.mX[50];
  X_idx_51 = in->mX.mX[51];
  X_idx_53 = in->mX.mX[53];
  X_idx_54 = in->mX.mX[54];
  X_idx_55 = in->mX.mX[55];
  X_idx_56 = in->mX.mX[56];
  X_idx_57 = in->mX.mX[57];
  X_idx_58 = in->mX.mX[58];
  X_idx_59 = in->mX.mX[59];
  X_idx_60 = in->mX.mX[60];
  X_idx_61 = in->mX.mX[61];
  X_idx_62 = in->mX.mX[62];
  X_idx_63 = in->mX.mX[63];
  X_idx_64 = in->mX.mX[64];
  X_idx_65 = in->mX.mX[65];
  X_idx_66 = in->mX.mX[66];
  X_idx_67 = in->mX.mX[67];
  X_idx_68 = in->mX.mX[68];
  X_idx_69 = in->mX.mX[69];
  X_idx_70 = in->mX.mX[70];
  X_idx_71 = in->mX.mX[71];
  out = out1->mOBS_ACT;
  out.mX[0ULL] = X_idx_9;
  out.mX[1ULL] = X_idx_10;
  out.mX[2ULL] = X_idx_9;
  out.mX[3ULL] = X_idx_10;
  out.mX[4ULL] = X_idx_11;
  out.mX[5ULL] = X_idx_12;
  out.mX[6ULL] = X_idx_13;
  out.mX[7ULL] = X_idx_14;
  out.mX[8ULL] = X_idx_13;
  out.mX[9ULL] = X_idx_14;
  out.mX[10ULL] = X_idx_15;
  out.mX[11ULL] = X_idx_16;
  out.mX[12ULL] = X_idx_17;
  out.mX[13ULL] = X_idx_20;
  out.mX[14ULL] = X_idx_18;
  out.mX[15ULL] = X_idx_19;
  out.mX[16ULL] = X_idx_21;
  out.mX[17ULL] = X_idx_25;
  out.mX[18ULL] = X_idx_22;
  out.mX[19ULL] = X_idx_23;
  out.mX[20ULL] = X_idx_24;
  out.mX[21ULL] = X_idx_25;
  out.mX[22ULL] = X_idx_65;
  out.mX[23ULL] = X_idx_9;
  out.mX[24ULL] = X_idx_27;
  out.mX[25ULL] = X_idx_0;
  out.mX[26ULL] = X_idx_26;
  out.mX[27ULL] = X_idx_1;
  out.mX[28ULL] = X_idx_65;
  out.mX[29ULL] = X_idx_27;
  out.mX[30ULL] = X_idx_28;
  out.mX[31ULL] = X_idx_29;
  out.mX[32ULL] = X_idx_27;
  out.mX[33ULL] = X_idx_9;
  out.mX[34ULL] = X_idx_30;
  out.mX[35ULL] = X_idx_11;
  out.mX[36ULL] = X_idx_10;
  out.mX[37ULL] = X_idx_13;
  out.mX[38ULL] = X_idx_32;
  out.mX[39ULL] = X_idx_2;
  out.mX[40ULL] = X_idx_31;
  out.mX[41ULL] = X_idx_3;
  out.mX[42ULL] = X_idx_10;
  out.mX[43ULL] = X_idx_32;
  out.mX[44ULL] = X_idx_33;
  out.mX[45ULL] = X_idx_11;
  out.mX[46ULL] = X_idx_32;
  out.mX[47ULL] = X_idx_13;
  out.mX[48ULL] = X_idx_34;
  out.mX[49ULL] = X_idx_15;
  out.mX[50ULL] = X_idx_14;
  out.mX[51ULL] = X_idx_35;
  out.mX[52ULL] = X_idx_37;
  out.mX[53ULL] = X_idx_4;
  out.mX[54ULL] = X_idx_36;
  out.mX[55ULL] = X_idx_5;
  out.mX[56ULL] = X_idx_14;
  out.mX[57ULL] = X_idx_37;
  out.mX[58ULL] = X_idx_38;
  out.mX[59ULL] = X_idx_15;
  out.mX[60ULL] = X_idx_37;
  out.mX[61ULL] = X_idx_35;
  out.mX[62ULL] = X_idx_39;
  out.mX[63ULL] = X_idx_40;
  out.mX[64ULL] = X_idx_35;
  out.mX[65ULL] = X_idx_57;
  out.mX[66ULL] = X_idx_42;
  out.mX[67ULL] = X_idx_6;
  out.mX[68ULL] = X_idx_41;
  out.mX[69ULL] = X_idx_7;
  out.mX[70ULL] = X_idx_35;
  out.mX[71ULL] = X_idx_42;
  out.mX[72ULL] = X_idx_43;
  out.mX[73ULL] = X_idx_40;
  out.mX[74ULL] = X_idx_42;
  out.mX[75ULL] = X_idx_57;
  out.mX[76ULL] = X_idx_44;
  out.mX[77ULL] = X_idx_45;
  out.mX[78ULL] = X_idx_46;
  out.mX[79ULL] = X_idx_17;
  out.mX[80ULL] = X_idx_50;
  out.mX[81ULL] = X_idx_51;
  out.mX[82ULL] = 0.0;
  out.mX[83ULL] = X_idx_47;
  out.mX[84ULL] = X_idx_18;
  out.mX[85ULL] = X_idx_48;
  out.mX[86ULL] = X_idx_49;
  out.mX[87ULL] = 0.0;
  out.mX[88ULL] = X_idx_25;
  out.mX[89ULL] = X_idx_58;
  out.mX[90ULL] = X_idx_53;
  out.mX[91ULL] = X_idx_54;
  out.mX[92ULL] = X_idx_55;
  out.mX[93ULL] = X_idx_56;
  out.mX[94ULL] = X_idx_8;
  out.mX[95ULL] = X_idx_47;
  out.mX[96ULL] = X_idx_57;
  out.mX[97ULL] = X_idx_58;
  out.mX[98ULL] = X_idx_57;
  out.mX[99ULL] = X_idx_58;
  out.mX[100ULL] = X_idx_59;
  out.mX[101ULL] = X_idx_60;
  out.mX[102ULL] = X_idx_47;
  out.mX[103ULL] = X_idx_57;
  out.mX[104ULL] = X_idx_61;
  out.mX[105ULL] = X_idx_62;
  out.mX[106ULL] = X_idx_47;
  out.mX[107ULL] = X_idx_58;
  out.mX[108ULL] = X_idx_63;
  out.mX[109ULL] = X_idx_64;
  out.mX[110ULL] = X_idx_46;
  out.mX[111ULL] = X_idx_21;
  out.mX[112ULL] = X_idx_65;
  out.mX[113ULL] = X_idx_21;
  out.mX[114ULL] = X_idx_65;
  out.mX[115ULL] = X_idx_66;
  out.mX[116ULL] = X_idx_67;
  out.mX[117ULL] = X_idx_46;
  out.mX[118ULL] = X_idx_21;
  out.mX[119ULL] = X_idx_68;
  out.mX[120ULL] = X_idx_69;
  out.mX[121ULL] = X_idx_46;
  out.mX[122ULL] = X_idx_65;
  out.mX[123ULL] = X_idx_70;
  out.mX[124ULL] = X_idx_71;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out1)
{
  PmRealVector out;
  (void)in;
  out = out1->mQX;
  out.mX[0ULL] = 3.0000000000000005E-6;
  out.mX[1ULL] = 3.0000000000000005E-6;
  out.mX[2ULL] = 1.0000000000000002E-6;
  out.mX[3ULL] = 1.0000000000000002E-6;
  out.mX[4ULL] = 1.0000000000000002E-6;
  out.mX[5ULL] = 1.0000000000000002E-6;
  out.mX[6ULL] = 1.0000000000000002E-6;
  out.mX[7ULL] = 2.0000000000000003E-6;
  out.mX[8ULL] = 1.0000000000000002E-6;
  out.mX[9ULL] = 1.0000000000000002E-6;
  out.mX[10ULL] = 1.0000000000000002E-6;
  out.mX[11ULL] = 1.0000000000000002E-6;
  out.mX[12ULL] = 1.0000000000000002E-6;
  out.mX[13ULL] = 1.0000000000000002E-6;
  out.mX[14ULL] = 1.0000000000000002E-6;
  out.mX[15ULL] = 1.0000000000000002E-6;
  out.mX[16ULL] = 1.0000000000000002E-6;
  out.mX[17ULL] = 1.0000000000000002E-6;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mQX_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 0;
  out.mJc[2ULL] = 0;
  out.mJc[3ULL] = 0;
  out.mJc[4ULL] = 0;
  out.mJc[5ULL] = 0;
  out.mJc[6ULL] = 0;
  out.mJc[7ULL] = 0;
  out.mJc[8ULL] = 0;
  out.mJc[9ULL] = 0;
  out.mJc[10ULL] = 0;
  out.mJc[11ULL] = 0;
  out.mJc[12ULL] = 1;
  out.mJc[13ULL] = 1;
  out.mJc[14ULL] = 1;
  out.mJc[15ULL] = 1;
  out.mJc[16ULL] = 2;
  out.mJc[17ULL] = 2;
  out.mJc[18ULL] = 2;
  out.mJc[19ULL] = 2;
  out.mJc[20ULL] = 2;
  out.mJc[21ULL] = 2;
  out.mJc[22ULL] = 2;
  out.mJc[23ULL] = 3;
  out.mJc[24ULL] = 3;
  out.mJc[25ULL] = 3;
  out.mJc[26ULL] = 3;
  out.mJc[27ULL] = 4;
  out.mJc[28ULL] = 4;
  out.mJc[29ULL] = 4;
  out.mJc[30ULL] = 5;
  out.mJc[31ULL] = 5;
  out.mJc[32ULL] = 6;
  out.mJc[33ULL] = 6;
  out.mJc[34ULL] = 6;
  out.mJc[35ULL] = 6;
  out.mJc[36ULL] = 6;
  out.mJc[37ULL] = 7;
  out.mJc[38ULL] = 7;
  out.mJc[39ULL] = 7;
  out.mJc[40ULL] = 7;
  out.mJc[41ULL] = 8;
  out.mJc[42ULL] = 9;
  out.mJc[43ULL] = 9;
  out.mJc[44ULL] = 9;
  out.mJc[45ULL] = 9;
  out.mJc[46ULL] = 10;
  out.mJc[47ULL] = 10;
  out.mJc[48ULL] = 10;
  out.mJc[49ULL] = 10;
  out.mJc[50ULL] = 10;
  out.mJc[51ULL] = 10;
  out.mJc[52ULL] = 10;
  out.mJc[53ULL] = 10;
  out.mJc[54ULL] = 10;
  out.mJc[55ULL] = 11;
  out.mJc[56ULL] = 12;
  out.mJc[57ULL] = 12;
  out.mJc[58ULL] = 12;
  out.mJc[59ULL] = 12;
  out.mJc[60ULL] = 13;
  out.mJc[61ULL] = 13;
  out.mJc[62ULL] = 14;
  out.mJc[63ULL] = 14;
  out.mJc[64ULL] = 15;
  out.mJc[65ULL] = 15;
  out.mJc[66ULL] = 15;
  out.mJc[67ULL] = 16;
  out.mJc[68ULL] = 16;
  out.mJc[69ULL] = 17;
  out.mJc[70ULL] = 17;
  out.mJc[71ULL] = 18;
  out.mJc[72ULL] = 18;
  out.mIr[0ULL] = 11;
  out.mIr[1ULL] = 15;
  out.mIr[2ULL] = 22;
  out.mIr[3ULL] = 26;
  out.mIr[4ULL] = 29;
  out.mIr[5ULL] = 31;
  out.mIr[6ULL] = 36;
  out.mIr[7ULL] = 40;
  out.mIr[8ULL] = 41;
  out.mIr[9ULL] = 45;
  out.mIr[10ULL] = 54;
  out.mIr[11ULL] = 55;
  out.mIr[12ULL] = 59;
  out.mIr[13ULL] = 61;
  out.mIr[14ULL] = 63;
  out.mIr[15ULL] = 66;
  out.mIr[16ULL] = 68;
  out.mIr[17ULL] = 70;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mQU_P;
  out.mJc[0ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mQT_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out1)
{
  PmSparsityPattern out;
  (void)in;
  out = out1->mQ1_P;
  out.mJc[0ULL] = 0;
  out.mJc[1ULL] = 0;
  (void) ds;
  (void) in;
  return 0;
}

static int32_T stub_method(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out)
{
  (void)ds;
  (void)in;
  (void)out;
  return 0;
}

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 72;
  out->mM_P.mNumRow = 72;
  out->mM_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mM_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 9;
  out->mM.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 9;
  out->mVMM.mX = (boolean_T *)allocator->mCallocFcn(allocator, sizeof(boolean_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 72;
  out->mDXM_P.mNumRow = 9;
  out->mDXM_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mDXM_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 8;
  out->mDXM.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 0;
  out->mDUM_P.mNumRow = 9;
  out->mDUM_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDUM_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 9;
  out->mDTM_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 72;
  out->mA_P.mNumRow = 72;
  out->mA_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mA_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    112);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 112;
  out->mA.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 112);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 0;
  out->mB_P.mNumRow = 72;
  out->mB_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T), 1);
  out->mB_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 0;
  out->mB.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 72;
  out->mC_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T), 2);
  out->mC_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 72;
  out->mF.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 72);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 72;
  out->mVMF.mX = (boolean_T *)allocator->mCallocFcn(allocator, sizeof(boolean_T),
    72);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 72;
  out->mSLF.mX = (boolean_T *)allocator->mCallocFcn(allocator, sizeof(boolean_T),
    72);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 72;
  out->mDXF_P.mNumRow = 72;
  out->mDXF_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mDXF_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    59);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 59;
  out->mDXF.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 59);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 0;
  out->mDUF_P.mNumRow = 72;
  out->mDUF_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDUF_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 0;
  out->mDUF.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 72;
  out->mDTF_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 72;
  out->mDDF_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 0;
  out->mTDUF_P.mNumRow = 72;
  out->mTDUF_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mTDUF_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 72;
  out->mTDXF_P.mNumRow = 72;
  out->mTDXF_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mTDXF_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    171);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 0;
  out->mICR.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 0;
  out->mICR_IM.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 0;
  out->mICR_ID.mX = (boolean_T *)allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 0;
  out->mDXICR.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 72;
  out->mDXICR_P.mNumRow = 0;
  out->mDXICR_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mDXICR_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 0;
  out->mTDUICR_P.mNumRow = 0;
  out->mTDUICR_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mTDUICR_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 0;
  out->mMDUY_P.mNumRow = 0;
  out->mMDUY_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mMDUY_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 72;
  out->mMDXY_P.mNumRow = 0;
  out->mMDXY_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mMDXY_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 0;
  out->mTDUY_P.mNumRow = 0;
  out->mTDUY_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mTDUY_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 72;
  out->mTDXY_P.mNumRow = 0;
  out->mTDXY_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mTDXY_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 0;
  out->mY.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 72;
  out->mDXY_P.mNumRow = 0;
  out->mDXY_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mDXY_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 0;
  out->mDXY.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 0;
  out->mDUY_P.mNumRow = 0;
  out->mDUY_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDUY_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 0;
  out->mDUY.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 0;
  out->mDTY_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 204;
  out->mMODE.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    204);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 108;
  out->mZC.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 108);
  return out;
}

static NeDsMethodOutput *ds_output_cache(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE.mN = 0;
  out->mCACHE.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 125;
  out->mLOG.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 125);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 197;
  out->mASSERT.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    197);
  return out;
}

static NeDsMethodOutput *ds_output_expand(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEXPAND.mN = 0;
  out->mEXPAND.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 72;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof
    (int32_T), 73);
  out->mDXDELT_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 0;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDUDELT_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 125;
  out->mOBS_EXP.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T),
    125);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 125;
  out->mOBS_ACT.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T),
    125);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 18;
  out->mQX.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 18);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *)allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 72;
  out->mQX_P.mNumRow = 72;
  out->mQX_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  out->mQX_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    18);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 0;
  out->mQU_P.mNumRow = 72;
  out->mQU_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mQU_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 72;
  out->mQT_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *)allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 72;
  out->mQ1_P.mJc = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *)allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(const NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

NeDynamicSystem *Model_4363cb6f_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn(allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 72;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 9;
  ds->mNumEquations = 72;
  ds->mNumICResiduals = 0;
  ds->mNumModes = 204;
  ds->mNumMajorModes = 0;
  ds->mNumCache = 0;
  ds->mNumObservables = 125;
  ds->mNumObservableElements = 125;
  ds->mNumZcs = 108;
  ds->mNumAsserts = 197;
  ds->mNumAssertRanges = 197;
  ds->mNumRanges = 108;
  ds->mNumEquationRanges = 60;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = 1;
  ds->mIsOutputSwitchedLinear = 1;
  ds->mNewCompiler = 0;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 0;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 0;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mMethods[NE_DS_METHOD_M_P] = ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_A_P] = ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_DXF_P] = ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_ICR] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_DXICR] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_CACHE] = ds_output_cache;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_SFO] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_EXPAND] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_EXPAND] = ds_output_expand;
  ds->mMethods[NE_DS_METHOD_DEL_T] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_DP_L] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = stub_method;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* parameters */
  ds->mLogicalParameters = NULL;
  ds->mIntegerParameters = NULL;
  ds->mIndexParameters = NULL;
  ds->mRealParameters = NULL;
  return (NeDynamicSystem *)_ds;
}
