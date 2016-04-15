//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Backend macros for SPheno (not SARAH's version)
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Tomas Gonzalo 
///          (t.e.gonzalo@fys.uio.no)
///  \date 2016 Mar
///
///  *********************************************

#define BACKENDNAME SPheno
#define VERSION 3.3.8
#define SAFE_VERSION 3_3_8

// Begin
LOAD_LIBRARY

// For now, allow only for CMSSM.
BE_ALLOW_MODELS(CMSSM)

// Functions
BE_FUNCTION(SPheno_CalculateSpectrum, void, 
	(Finteger, // n_run
	 Freal8, // delta
	 Flogical, // WriteOut
	 Finteger, // kont
	 Freal8, // tanb
	 Farray<Freal8,1,2>, // vevSM
	 Farray<Freal8,1,2>, // mC
	 Farray<Fcomplex8,1,2,1,2>, // U
	 Farray<Fcomplex8,1,2,1,2>, // V
	 Farray<Freal8,1,4>, // mN
	 Farray<Fcomplex8,1,4,1,4>, // N
	 Farray<Freal8,1,2>, // mS0
	 Farray<Freal8,1,2>, // mS02
	 Farray<Freal8,1,2,1,2>, // RS0
	 Farray<Freal8,1,2>, // mP0
	 Farray<Freal8,1,2>, // mP02
	 Farray<Freal8,1,2,1,2>, // RP0
	 Farray<Freal8,1,2>, // mSpm
	 Farray<Freal8,1,2>, // mSpm2
	 Farray<Fcomplex8,1,2,1,2>, // RSpm
	 Farray<Freal8,1,6>, //mSdown
	 Farray<Freal8,1,6>, // mSdown2
	 Farray<Fcomplex8,1,6,1,6>, // RSdown
	 Farray<Freal8,1,6>, // mSup
	 Farray<Freal8,1,6>, // mSup2
	 Farray<Fcomplex8,1,6,1,6>, // RSup
	 Farray<Freal8,1,6>, // mSlepton
	 Farray<Freal8,1,6>, // mSlepton2
	 Farray<Fcomplex8,1,6,1,6>, // RSlepton
	 Farray<Freal8,1,3>, // mSneut
	 Farray<Freal8,1,3>, // mSneut2
	 Farray<Fcomplex8,1,3,1,3>, // RSneut
	 Freal8, // mGlu
	 Fcomplex8, // PhaseGlu
	 Farray<Freal8,1,3>, // gauge
	 Farray<Fcomplex8,1,3,1,3>, // uL_L
 	 Farray<Fcomplex8,1,3,1,3>, // uL_R
	 Farray<Fcomplex8,1,3,1,3>, // uD_L
	 Farray<Fcomplex8,1,3,1,3>, // uD_R
	 Farray<Fcomplex8,1,3,1,3>, // uU_L
	 Farray<Fcomplex8,1,3,1,3>, // uU_R
	 Farray<Fcomplex8,1,3,1,3>, // Y_l
	 Farray<Fcomplex8,1,3,1,3>, // Y_d
	 Farray<Fcomplex8,1,3,1,3>, // Y_u
	 Farray<Fcomplex8,1,3>, // Mi
	 Farray<Fcomplex8,1,3,1,3>, // A_l
	 Farray<Fcomplex8,1,3,1,3>, // A_d
	 Farray<Fcomplex8,1,3,1,3>, // A_u
	 Farray<Fcomplex8,1,3,1,3>, // M2_E
	 Farray<Fcomplex8,1,3,1,3>, // M2_L
	 Farray<Fcomplex8,1,3,1,3>, // M2_D
	 Farray<Fcomplex8,1,3,1,3>, // M2_Q
	 Farray<Fcomplex8,1,3,1,3>, // M2_U
	 Farray<Freal8,1,2>, // M2_H
	 Fcomplex8, // mu
	 Fcomplex8, // B
	 Freal8 //  m_GUT
	), "__spheno_MOD_calculatespectrum", "SPheno_CalculateSpectrum")

// Variables
BE_VARIABLE(epsI, Freal8, "__spheno_MOD_epsi",)
BE_VARIABLE(deltaM, Freal8,"__spheno_MOD_deltam",)
BE_VARIABLE(Ylp, Farray<Fcomplex8,1,3,1,3>, "__spheno_MOD_ylp",)
BE_VARIABLE(Ecms, Farray<Freal8,1,100>,  "__spheno_MOD_ecms",)
BE_VARIABLE(Pm, Farray<Freal8,1,100>,  "__spheno_MOD_pm",)
BE_VARIABLE(Pp, Farray<Freal8,1,100>,  "__spheno_MOD_pp",)
BE_VARIABLE(SigSup, Farray<Freal8,1,100,1,6,1,6>, "__spheno_MOD_sigsup",)
BE_VARIABLE(SigSdown, Farray<Freal8,1,100,1,6,1,6>, "__spheno_MOD_sigsdown",)
BE_VARIABLE(SigSle, Farray<Freal8,1,100,1,6,1,6>, "__spheno_MOD_sigsle",)
BE_VARIABLE(SigSn, Farray<Freal8,1,100,1,3,1,3>, "__spheno_MOD_sigsn",)
BE_VARIABLE(SigC, Farray<Freal8,1,100,1,5,1,5>, "__spheno_MOD_sigc",)
BE_VARIABLE(SigChi0, Farray<Freal8,1,100,1,7,1,7>, "__spheno_MOD_sigchi0",)
BE_VARIABLE(SigS0, Farray<Freal8,1,100,1,5>, "__spheno_MOD_sigs0",)
BE_VARIABLE(SigSP, Farray<Freal8,1,100,1,5,1,4>, "__spheno_MOD_sigsp",)
BE_VARIABLE(SigHp, Farray<Freal8,1,100,1,7,1,7>, "__spheno_MOD_sighp",)
BE_VARIABLE(ISR, Farray<Flogical,1,100>, "__spheno_MOD_isr",)
BE_VARIABLE(Beam, Farray<Flocial,1,100>, "__spheno_MOD_beam",)
BE_VARIALBE(BRbtosgamma, Freal8, "__spheno_MOD_brbtosgama",)
BE_VARIABLE(Bs_ll, Farray<Freal8,1,3>, "__spheno_MOD_bs_ll",)
BE_VARIABLE(BrBToSLL, Freal8, "__spheno_MOD_brbtosll",)
BE_VARIABLE(BR_Bu_TauNu, Freal8, "__spheno_MOD_br_bu_taunu",)
BE_VARIABLE(a_e, Freal8, "__spheno_MOD_a_e",)
BE_VARIABLE(a_mu, Freal8, "__spheno_MOD_a_mu",)
BE_VARIABLE(a_tau, Freal8, "__spheno_MOD_a_tau",)
BE_VARIABLE(d_e, Freal8, "__spheno_MOD_d_e",)
BE_VARIABLE(d_mu, Freal8, "__spheno_MOD_d_mu",)
BE_VARIABLE(d_tau, Freal8, "__spheno_MOD_d_tau",)
BE_VARIABLE(BrMutoEGamma, Freal8, "__spheno_MOD_brmutoegamma",)
BE_VARIALBE(BrTautoEGamma, Freal8, "__spheno_MOD_brtautoegamma",)
BE_VARIABLE(BrTautoMuGamma, Freal8, "__spheno_MOD_brtautomugamma",)
BE_VARIABLE(BrMu3e, Freal8,  "__spheno_MOD_brmu3e",)
BE_VARIABLE(BrTau3e, Freal8, "__spheno_MOD_brtau3e")
BE_VARIABLE(BrTau3Mu, Freal8, "__spheno_MOD_brtau3mu",)
BE_VARIABLE(BR_Z_e_mu, Freal8, "__spheno_MOD_br_z_e_mu",)
BE_VARIABLE(BR_Z_e_tau, Freal8, "__spheno_MOD_br_z_e_tau",)
BE_VARIABLE(BR_Z_mu_tau, Freal8, "__spheno_MOD_br_z_mu_tau",)
BE_VARIABLE(BtoSNuNu, Freal8, "__spheno_MOD_btosnunu",)
BE_VARIABLE(epsK, Freal8, "__spheno_MOD_epsk",)
BE_VARIABLE(DeltaMK2, Freal8, "__spheno_MOD_deltamk2",)
BE_VARIABLE(K0toPi0NuNu, Freal8, "__spheno_MOD_k0topi0nunu",)
BE_VARIABLE(KptoPipNuNu, Freal8, "__spheno_MOD_kptopipnunu",)
BE_VARIABLE(Bd_ll, Farray<Freal8,1,3>, "__spheno_MOD_bd_ll",)
BE_VARIABLE(R_Bu_TauNu, Freal8, "__spheno_MOD_r_bu_taunu",)
BE_VARIABLE(DeltaMBd, Fcomplex8, "__spheno_MOD_deltambd",)
BE_VARIABLE(DeltaMBs, Fcomplex8, "__spheno_MOD_deltambs",)
BE_VARIABLE(CalcTBD, Flogical, "__spheno_MOD_calctbd",)
BE_VARIABLE(kont, Finteger, "__spheno_MOD_kont",)
BE_VARIABLE(i1, Finteger, "__spheno_MOD_i1",)
BE_VARIABLE(m_Gut, Freal8, "__spheno_MOD_m_gut",)
BE_VARIABLE(ratioWoM, Freal8, "__spheno_MOD_ratiowom",)
BE_VARIABLE(Q_in, Freal8, "__spheno_MOD_q_in",)
BE_VARIABLE(id_gl, Finteger "__spheno_MOD_id_gl",)
BE_VARIABLE(id_ph, Finteger, "__spheno_MOD_id_ph",)
BE_VARIABLE(id_grav, Finteger, "__spheno_MOD_id_grav",)
BE_VARIABLE(id_Z, Finteger, "__spheno_MOD_id_z",)
BE_VARIABLE(id_W, Finteger, "__spheno_MOD_id_w",)
BE_VARIABLE(id_nu, Farray<Finteger,1,3>, "__spheno_MOD_id_nu",)
BE_VARIABLE(id_l, Farray<Finteger,1,3>, "__spheno_MOD_id_l",)
BE_VARIABLE(id_d, Farray<Finteger,1,3>, "__spheno_MOD_id_d",)
BE_VARIABLE(id_u, Farray<Finteger,1,3>, "__spheno_MOD_id_u",)
BE_VARIABLE(inputFileName, Fstring<60>, "__spheno_MOD_inputfilename",)
BE_VARIABLE(outputFileName, FString<60>, "__spheno_MOD_outputfilename",)

// End
#include "gambit/Backends/backend_undefs.hpp"
