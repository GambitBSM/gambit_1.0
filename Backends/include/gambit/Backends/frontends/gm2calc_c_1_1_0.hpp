//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend header for the gm2calc backend (C version).
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Anders Kvellestad
///          (anders.kvellestad@nordita.org)
///  \date 2016 March
///
///  *********************************************

#define BACKENDNAME gm2calc_c
#define VERSION 1.1.0
#define SAFE_VERSION 1_1_0

LOAD_LIBRARY

// BE_ALLOW_MODELS(MSSM30atQ, MSSM30atMGUT)

// Functions from gm2_1loop.h
BE_FUNCTION(gm2calc_mssmnofv_calculate_amu_1loop, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_calculate_amu_1loop", "calculate_amu_1loop")
BE_FUNCTION(gm2calc_mssmnofv_calculate_amu_1loop_non_tan_beta_resummed, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_calculate_amu_1loop_non_tan_beta_resummed", "gm2calc_mssmnofv_calculate_amu_1loop_non_tan_beta_resummed")
BE_FUNCTION(gm2calc_mssmnofv_amuChi0, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_amuChi0", "gm2calc_mssmnofv_amuChi0")
BE_FUNCTION(gm2calc_mssmnofv_amuChipm, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_amuChipm", "gm2calc_mssmnofv_amuChipm")

// Functions from gm2_2loop.h
BE_FUNCTION(gm2calc_mssmnofv_calculate_amu_2loop, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_calculate_amu_2loop", "gm2calc_mssmnofv_calculate_amu_2loop")
BE_FUNCTION(gm2calc_mssmnofv_calculate_amu_2loop_non_tan_beta_resummed, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_calculate_amu_2loop_non_tan_beta_resummed", "gm2calc_mssmnofv_calculate_amu_2loop_non_tan_beta_resummed")
BE_FUNCTION(gm2calc_mssmnofv_amu2LFSfapprox, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_amu2LFSfapprox", "gm2calc_mssmnofv_amu2LFSfapprox")
BE_FUNCTION(gm2calc_mssmnofv_amu2LFSfapprox_non_tan_beta_resummed, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_amu2LFSfapprox_non_tan_beta_resummed", "gm2calc_mssmnofv_amu2LFSfapprox_non_tan_beta_resummed")
BE_FUNCTION(gm2calc_mssmnofv_amuChipmPhotonic, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_amuChipmPhotonic", "gm2calc_mssmnofv_amuChipmPhotonic")
BE_FUNCTION(gm2calc_mssmnofv_amuChi0Photonic, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_amuChi0Photonic", "gm2calc_mssmnofv_amuChi0Photonic")
BE_FUNCTION(gm2calc_mssmnofv_amu2LaSferm, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_amu2LaSferm", "gm2calc_mssmnofv_amu2LaSferm")
BE_FUNCTION(gm2calc_mssmnofv_amu2LaCha, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_amu2LaCha", "gm2calc_mssmnofv_amu2LaCha")

// Functions from gm2calc_c::MSSMNoFV_onshell.h
BE_FUNCTION(gm2calc_error_str, const char*, (gm2calc_c::gm2calc_error), "gm2calc_error_str", "gm2calc_error_str")
BE_FUNCTION(gm2calc_mssmnofv_new, gm2calc_c::MSSMNoFV_onshell*, (), "gm2calc_mssmnofv_new", "gm2calc_mssmnofv_new")
BE_FUNCTION(gm2calc_mssmnofv_free, void, (gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_free", "gm2calc_mssmnofv_free")

BE_FUNCTION(gm2calc_mssmnofv_set_alpha_MZ, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_alpha_MZ", "gm2calc_mssmnofv_set_alpha_MZ")
BE_FUNCTION(gm2calc_mssmnofv_set_alpha_thompson, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_alpha_thompson", "gm2calc_mssmnofv_set_alpha_thompson")
BE_FUNCTION(gm2calc_mssmnofv_set_Ae, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double), "gm2calc_mssmnofv_set_Ae", "gm2calc_mssmnofv_set_Ae")
BE_FUNCTION(gm2calc_mssmnofv_set_Au, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double), "gm2calc_mssmnofv_set_Au", "gm2calc_mssmnofv_set_Au")
BE_FUNCTION(gm2calc_mssmnofv_set_Ad, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double), "gm2calc_mssmnofv_set_Ad", "gm2calc_mssmnofv_set_Ad")
BE_FUNCTION(gm2calc_mssmnofv_set_g3, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_g3", "gm2calc_mssmnofv_set_g3")
BE_FUNCTION(gm2calc_mssmnofv_set_MassB, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MassB", "gm2calc_mssmnofv_set_MassB")
BE_FUNCTION(gm2calc_mssmnofv_set_MassWB, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MassWB", "gm2calc_mssmnofv_set_MassWB")
BE_FUNCTION(gm2calc_mssmnofv_set_MassG, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MassG", "gm2calc_mssmnofv_set_MassG")
BE_FUNCTION(gm2calc_mssmnofv_set_mq2, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double), "gm2calc_mssmnofv_set_mq2", "gm2calc_mssmnofv_set_mq2")
BE_FUNCTION(gm2calc_mssmnofv_set_mu2, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double), "gm2calc_mssmnofv_set_mu2", "gm2calc_mssmnofv_set_mu2")
BE_FUNCTION(gm2calc_mssmnofv_set_md2, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double), "gm2calc_mssmnofv_set_md2", "gm2calc_mssmnofv_set_md2")
BE_FUNCTION(gm2calc_mssmnofv_set_ml2, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double), "gm2calc_mssmnofv_set_ml2", "gm2calc_mssmnofv_set_ml2")
BE_FUNCTION(gm2calc_mssmnofv_set_me2, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned, double), "gm2calc_mssmnofv_set_me2", "gm2calc_mssmnofv_set_me2")
BE_FUNCTION(gm2calc_mssmnofv_set_Mu, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_Mu", "gm2calc_mssmnofv_set_Mu")
BE_FUNCTION(gm2calc_mssmnofv_set_TB, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_TB", "gm2calc_mssmnofv_set_TB")
BE_FUNCTION(gm2calc_mssmnofv_set_scale, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_scale", "gm2calc_mssmnofv_set_scale")
BE_FUNCTION(gm2calc_mssmnofv_set_MAh_pole, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MAh_pole", "gm2calc_mssmnofv_set_MAh_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MZ_pole, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MZ_pole", "gm2calc_mssmnofv_set_MZ_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MW_pole, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MW_pole", "gm2calc_mssmnofv_set_MW_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MT_pole, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MT_pole", "gm2calc_mssmnofv_set_MT_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MB_running, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MB_running", "gm2calc_mssmnofv_set_MB_running")
BE_FUNCTION(gm2calc_mssmnofv_set_ML_pole, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_ML_pole", "gm2calc_mssmnofv_set_ML_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MM_pole, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MM_pole", "gm2calc_mssmnofv_set_MM_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MSm_pole, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, double), "gm2calc_mssmnofv_set_MSm_pole", "gm2calc_mssmnofv_set_MSm_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MSvmL_pole, void, (gm2calc_c::MSSMNoFV_onshell*, double), "gm2calc_mssmnofv_set_MSvmL_pole", "gm2calc_mssmnofv_set_MSvmL_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MCha_pole, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, double), "gm2calc_mssmnofv_set_MCha_pole", "gm2calc_mssmnofv_set_MCha_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_MChi_pole, void, (gm2calc_c::MSSMNoFV_onshell*, unsigned, double), "gm2calc_mssmnofv_set_MChi_pole", "gm2calc_mssmnofv_set_MChi_pole")
BE_FUNCTION(gm2calc_mssmnofv_set_verbose_output, void, (gm2calc_c::MSSMNoFV_onshell*, int), "gm2calc_mssmnofv_set_verbose_output", "gm2calc_mssmnofv_set_verbose_output")

BE_FUNCTION(gm2calc_mssmnofv_get_Ae, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_Ae", "gm2calc_mssmnofv_get_Ae")
BE_FUNCTION(gm2calc_mssmnofv_get_Ad, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_Ad", "gm2calc_mssmnofv_get_Ad")
BE_FUNCTION(gm2calc_mssmnofv_get_Au, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_Au", "gm2calc_mssmnofv_get_Au")
BE_FUNCTION(gm2calc_mssmnofv_get_EL, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_EL", "gm2calc_mssmnofv_get_EL")
BE_FUNCTION(gm2calc_mssmnofv_get_EL0, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_EL0", "gm2calc_mssmnofv_get_EL0")
BE_FUNCTION(gm2calc_mssmnofv_get_gY, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_gY", "gm2calc_mssmnofv_get_gY")
BE_FUNCTION(gm2calc_mssmnofv_get_g1, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_g1", "gm2calc_mssmnofv_get_g1")
BE_FUNCTION(gm2calc_mssmnofv_get_g2, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_g2", "gm2calc_mssmnofv_get_g2")
BE_FUNCTION(gm2calc_mssmnofv_get_g3, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_g3", "gm2calc_mssmnofv_get_g3")
BE_FUNCTION(gm2calc_mssmnofv_get_TB, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_TB", "gm2calc_mssmnofv_get_TB")
BE_FUNCTION(gm2calc_mssmnofv_get_MassB, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MassB", "gm2calc_mssmnofv_get_MassB")
BE_FUNCTION(gm2calc_mssmnofv_get_MassWB, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MassWB", "gm2calc_mssmnofv_get_MassWB")
BE_FUNCTION(gm2calc_mssmnofv_get_MassG, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MassG", "gm2calc_mssmnofv_get_MassG")
BE_FUNCTION(gm2calc_mssmnofv_get_Mu, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_Mu", "gm2calc_mssmnofv_get_Mu")
BE_FUNCTION(gm2calc_mssmnofv_get_mq2, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_mq2", "gm2calc_mssmnofv_get_mq2")
BE_FUNCTION(gm2calc_mssmnofv_get_md2, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_md2", "gm2calc_mssmnofv_get_md2")
BE_FUNCTION(gm2calc_mssmnofv_get_mu2, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_mu2", "gm2calc_mssmnofv_get_mu2")
BE_FUNCTION(gm2calc_mssmnofv_get_ml2, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_ml2", "gm2calc_mssmnofv_get_ml2")
BE_FUNCTION(gm2calc_mssmnofv_get_me2, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_me2", "gm2calc_mssmnofv_get_me2")
BE_FUNCTION(gm2calc_mssmnofv_get_vev, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_vev", "gm2calc_mssmnofv_get_vev")
BE_FUNCTION(gm2calc_mssmnofv_get_scale, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_scale", "gm2calc_mssmnofv_get_scale")
BE_FUNCTION(gm2calc_mssmnofv_get_MW, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MW", "gm2calc_mssmnofv_get_MW")
BE_FUNCTION(gm2calc_mssmnofv_get_MZ, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MZ", "gm2calc_mssmnofv_get_MZ")
BE_FUNCTION(gm2calc_mssmnofv_get_ME, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_ME", "gm2calc_mssmnofv_get_ME")
BE_FUNCTION(gm2calc_mssmnofv_get_MM, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MM", "gm2calc_mssmnofv_get_MM")
BE_FUNCTION(gm2calc_mssmnofv_get_ML, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_ML", "gm2calc_mssmnofv_get_ML")
BE_FUNCTION(gm2calc_mssmnofv_get_MU, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MU", "gm2calc_mssmnofv_get_MU")
BE_FUNCTION(gm2calc_mssmnofv_get_MC, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MC", "gm2calc_mssmnofv_get_MC")
BE_FUNCTION(gm2calc_mssmnofv_get_MT, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MT", "gm2calc_mssmnofv_get_MT")
BE_FUNCTION(gm2calc_mssmnofv_get_MD, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MD", "gm2calc_mssmnofv_get_MD")
BE_FUNCTION(gm2calc_mssmnofv_get_MS, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MS", "gm2calc_mssmnofv_get_MS")
BE_FUNCTION(gm2calc_mssmnofv_get_MB, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MB", "gm2calc_mssmnofv_get_MB")
BE_FUNCTION(gm2calc_mssmnofv_get_MBMB, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MBMB", "gm2calc_mssmnofv_get_MBMB")
BE_FUNCTION(gm2calc_mssmnofv_get_MAh, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MAh", "gm2calc_mssmnofv_get_MAh")
BE_FUNCTION(gm2calc_mssmnofv_get_MCha, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned), "gm2calc_mssmnofv_get_MCha", "gm2calc_mssmnofv_get_MCha")
BE_FUNCTION(gm2calc_mssmnofv_get_MChi, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned), "gm2calc_mssmnofv_get_MChi", "gm2calc_mssmnofv_get_MChi")
BE_FUNCTION(gm2calc_mssmnofv_get_MSm, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned), "gm2calc_mssmnofv_get_MSm", "gm2calc_mssmnofv_get_MSm")
BE_FUNCTION(gm2calc_mssmnofv_get_MSvmL, double, (const gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_get_MSvmL", "gm2calc_mssmnofv_get_MSvmL")
BE_FUNCTION(gm2calc_mssmnofv_get_Ye, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_Ye", "gm2calc_mssmnofv_get_Ye")
BE_FUNCTION(gm2calc_mssmnofv_get_Yd, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_Yd", "gm2calc_mssmnofv_get_Yd")
BE_FUNCTION(gm2calc_mssmnofv_get_Yu, double, (const gm2calc_c::MSSMNoFV_onshell*, unsigned, unsigned), "gm2calc_mssmnofv_get_Yu", "gm2calc_mssmnofv_get_Yu")

BE_FUNCTION(gm2calc_mssmnofv_convert_to_onshell, gm2calc_c::gm2calc_error, (gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_convert_to_onshell", "gm2calc_mssmnofv_convert_to_onshell")
BE_FUNCTION(gm2calc_mssmnofv_convert_to_onshell_params, gm2calc_c::gm2calc_error, (gm2calc_c::MSSMNoFV_onshell*, double, unsigned), "gm2calc_mssmnofv_convert_to_onshell_params", "gm2calc_mssmnofv_convert_to_onshell_params")
BE_FUNCTION(gm2calc_mssmnofv_calculate_masses, gm2calc_c::gm2calc_error, (gm2calc_c::MSSMNoFV_onshell*), "gm2calc_mssmnofv_calculate_masses", "gm2calc_mssmnofv_calculate_masses")

// Init function
BE_INI_FUNCTION{}
END_BE_INI_FUNCTION

#include "gambit/Backends/backend_undefs.hpp"
