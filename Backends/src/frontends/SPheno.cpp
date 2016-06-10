//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SPheno 3.3.8 backend
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Tomas Gonzalo
///  \date 2016 Apr, May, June
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/SPheno.hpp"
#include "gambit/Elements/slhaea_helpers.hpp"
#include "gambit/Elements/spectrum_factories.hpp"
#include "gambit/Models/SimpleSpectra/MSSMSimpleSpec.hpp"

// Convenience functions (definition)
BE_NAMESPACE
{

  // Run SPheno
  int run_SPheno(Spectrum &spectrum, const SMInputs &sminputs, const std::map<str, safe_ptr<double> >& Param)
  {

    ReadingData(sminputs, Param);

    *epsI = pow(10,-5);
    *deltaM = pow(10,-3);
    *CalcTBD = false;
    *ratioWoM = 0;
   

    Initialize_MSSM(*GenerationMixing, *id_gl, *id_ph, *id_Z, *id_W, *id_nu, *id_l, *id_d, *id_u, *id_grav);
   
    // Variables needed to get masses of sparticles
    Farray_Freal8_1_2 mChiPm;
    Farray_Freal8_1_2 mChiPm2;
    Farray_Freal8_1_4 mChi0;
    Farray_Freal8_1_4 mChi02;
    Farray_Freal8_1_2 mS0;
    Farray_Freal8_1_2 mS02;
    Farray_Freal8_1_2 mP0;
    Farray_Freal8_1_2 mP02;
    Farray_Freal8_1_2 mSpm;
    Farray_Freal8_1_2 mSpm2;
    Farray_Freal8_1_6 mSdown;
    Farray_Freal8_1_6 mSdown2;
    Farray_Freal8_1_6 mSup;
    Farray_Freal8_1_6 mSup2;
    Farray_Freal8_1_6 mSlepton;
    Farray_Freal8_1_6 mSlepton2;
    Farray_Freal8_1_3 mSneut;
    Farray_Freal8_1_3 mSneut2;
    Freal8 mGlu;
 

    CalculateSpectrum(*n_run, *delta_mass, *WriteOut, *kont, *tanb, *vevSM, mChiPm, *U, *V, mChi0, *N, mS0, mS02, *RS0, mP0, mP02, *RP0, mSpm, mSpm2, *RSpm, mSdown, mSdown2, *RSdown, mSup, mSup2, *RSup, mSlepton, mSlepton2, *RSlepton, mSneut, mSneut2, *RSneut, mGlu, *PhaseGlu, *gauge, *uL_L, *uL_R, *uD_L, *uD_R, *uU_L, *uU_R, *Y_l, *Y_d, *Y_u, *Mi, *A_l, *A_d, *A_u, *M2_E, *M2_L, *M2_D, *M2_Q, *M2_U, *M2_H, *mu, *B, *m_GUT);


    if(!*kont)
    {
      for(int i=1; i<=2; i++)
      {
        (*ChiPm)(i).m = mChiPm(i);
        (*ChiPm)(i).m2 = pow(mChiPm(i),2);
        (*S0)(i).m = mS0(i);
        (*S0)(i).m2 = mS02(i);
        (*P0)(i).m = mP0(i);
        (*P0)(i).m2 = mP02(i);
        (*Spm)(i).m = mSpm(i);
        (*Spm)(i).m2 = mSpm2(i);
      }
      for(int i=1; i<=3; i++)
      {
        (*Sneut)(i).m = mSneut(i);
        (*Sneut)(i).m2 = mSneut2(i);
      }
      for(int i=1; i<=4; i++)
      {
        (*Chi0)(i).m = mChi0(i);
        (*Chi0)(i).m2 = pow(mChi0(i),2);
      }
      for(int i=1; i<=6; i++)
      {
        (*Sdown)(i).m = mSdown(i);
        (*Sdown)(i).m2 = mSdown2(i);
        (*Sup)(i).m = mSup(i);
        (*Sup)(i).m2 = mSup2(i);
        (*Slepton)(i).m = mSlepton(i);
        (*Slepton)(i).m2 = mSlepton2(i);
      }
      Glu->m = mGlu;
      Glu->m2 = pow(mGlu,2);

      *Q_in = sqrt(GetRenormalizationScale());

      spectrum = Spectrum_Out(Param);

      // TODO
      //Low_Energy_Constraints_MSSM(*Q_in, *gauge, *Y_l, *Y_d, *Y_u, *A_l, *A_d, *A_u, *Mi, *mu, *M2_E, *M2_L, *M2_D, *M2_Q, *M2_U, *M2_H, *B, *tanb_Q, mP02, mS02, mSpm2, *CKM, *kont, *GenerationMixing, *rho_parameter, *DeltaMBd, *BRBtosgamma, *Bs_ll, *Bd_ll, *BrBToSLL, *BtoSNuNu, *BR_Bu_TauNu, *R_Bu_TauNu, *epsK, *DeltaMK2, *K0toPi0NuNu, *KptoPipNuNu, *a_e, *a_mu, *a_tau, *d_e, *d_mu, *d_tau, *BrMutoEGamma, *BrTautoEGamma, *BrTautoMuGamma, *BrMu3e, *BrTau3e, *BrTau3Mu, *BR_Z_e_mu, *BR_Z_e_tau, *BR_Z_mu_tau)
      // reorder state identification if necessary
      // TODO: Swap Order

      // Calculation of the branching ratios and widths provided L_BR is set .TRUE. (default) and that the routine Sugra has finished correctly (kont.eq.0) 
      if(*L_BR and !*kont)
      {
        if(*HighScaleModel == "SUGRA")
        {  
          // TODO
          //CalculateBR_MSSM(*n_nu, *id_nu, *n_l, *id_l, *n_d, *id_d, *n_u, *id_u, *n_Z, *id_Z, *n_W, *id_W, *n_Snu, *n_Sle, *n_Sd, *n_Su, *n_N, *n_C, *n_g, *n_S0, *n_P0, *n_Spm, *id_grav, *id_gl, *id_ph, *gauge, *Glu, *PhaseGlu, *ChiPm, *U, *V, *Chi0, *N, *Sneut, *RSneut, *Slepton, *RSlepton, *Sup, *RSup, *Sdown, *RSdown, *uL_L, *uL_R, *uD_L, *uD_R, *uU_L, *uU_R, *S0, *RS0, *P0, *RP0, *Spm, *RSpm, *epsI, *deltaM, *CalcTBD, *ratioWoM, *Y_d, *A_d, *Y_l, *A_l, *Y_u, *A_u, *mu, *vevSM, *F_GMSB, *m32, *grav_fac);
        }
        else
        {
          // TODO: NMSSM, etc
        }
      }

      // Calculation of the cross sections in e+ e- annihilation provided L_Cs is set .TRUE. (default) and that the routine Sugra has finished correctly (kont.eq.0).  In the case that the file CrossSections.in does not exist, the following default values are used: Ecms = 500 GeV, Pm = Pp = 0, ISR = .TRUE.
      if(*L_CS and !*kont)
      {
        for(int i=1; i<=3; i++)
          for(int j=1; j<=3; j++)
          {
            (*Ylp)(i,j).re = (*Y_l)(i,j).re / (*gauge)(2);
            (*Ylp)(i,j).im = (*Y_l)(i,j).im / (*gauge)(2);
          }
        // TODO: Ecms check
        // TODO: Cross Sections
      }
      
    }
   
    if(*kont != 0)
    {
      std::stringstream msg;
      msg << ErrorHandling(*kont);
      logger() << msg.str() << EOM;
      std::cout << msg.str() << std::endl;
      invalid_point().raise(msg.str());
    }


    return *kont;   
 
  }

  Spectrum Spectrum_Out(const std::map<str, safe_ptr<double> >& input_Param)
  {

    SLHAstruct slha;

    Freal8 Q = sqrt(GetRenormalizationScale());
    Farray_Freal8_1_3 Yu, Yd, Yl;

    // General information
    SLHAea_add_block(slha, "SPhenoINFO");
    if(*TwoLoopRGE)
      SLHAea_add(slha, "SPhenoINFO", 1, 2, "# using 2-loop RGES");
    else
      SLHAea_add(slha, "SPhenoINFO", 1, 1, "# using 1-loop RGES");
    if(*YukScen)
      SLHAea_add(slha, "SPhenoINFO", 2, 1, "# using running masses for boundary conditions at mZ");
    else 
      SLHAea_add(slha, "SPhenoINFO", 2, 2, "# using pole masses for boundary conditions at mZ");

    // model information
    if(*HighScaleModel == "mSUGRA")
    {
      SLHAea_add_block(slha, "MODSEL");
      slha["MODSEL"][""] << 1 << 1 << "# mSUGRA model";
      if(*GenerationMixing)
        slha["MODSEL"][""] << 6 << 3 << "# switching on flavour violation";

      SLHAea_add_block(slha, "MINPAR");
      if(input_Param.find("M0") != input_Param.end())
        slha["MINPAR"][""] << 1 << *input_Param.at("M0") << "# m0"; 
      if(input_Param.find("M12") != input_Param.end())
        slha["MINPAR"][""] << 2 << *input_Param.at("M12") << "# m12";
      slha["MINPAR"][""] << 3 << *input_Param.at("TanBeta") << "# tanb at m_Z";
      slha["MINPAR"][""] << 4 << *input_Param.at("SignMu") << "# cos(phase_mu)";
      if(input_Param.find("A0") != input_Param.end())
        slha["MINPAR"][""] << 5 << *input_Param.at("A0") << "# A0";

      SLHAea_add_block(slha, "GAUGE", *m_GUT);
      slha["GAUGE"][""] << 1 << (*gauge_0)(1) << "# g'(M_GUT)^DRbar";
      slha["GAUGE"][""] << 2 << (*gauge_0)(2) << "# g(M_GUT)^DRbar";
      slha["GAUGE"][""] << 3 << (*gauge_0)(3) << "# g3(M_GUT)^DRbar";

      if(*GenerationMixing)
      {
        // Missing
      }
      else
      {
        for(int i=1; i<=3; i++)
        {
          Yu(i) = (*Y_u_0)(i,i).re;
          Yd(i) = (*Y_d_0)(i,i).re;
          Yl(i) = (*Y_l_0)(i,i).re;
        }
      }

      SLHAea_add_block(slha, "Yu", *m_GUT);
      slha["Yu"][""] << 1 << 1 << Yu(1) << "# Y_u(M_GUT)^DRbar";
      slha["Yu"][""] << 2 << 2 << Yu(2) << "# Y_c(M_GUT)^DRbar";
      slha["Yu"][""] << 3 << 3 << Yu(3) << "# Y_t(M_GUT)^DRbar";

      SLHAea_add_block(slha, "Yd", *m_GUT);
      slha["Yd"][""] << 1 << 1 << Yd(1) << "# Y_d(M_GUT)^DRbar";
      slha["Yd"][""] << 2 << 2 << Yd(2) << "# Y_s(M_GUT)^DRbar";
      slha["Yd"][""] << 3 << 3 << Yd(3) << "# Y_b(M_GUT)^DRbar";

      SLHAea_add_block(slha, "Ye", *m_GUT);
      slha["Ye"][""] << 1 << 1 << Yl(1) << "# Y_e(M_GUT)^DRbar";
      slha["Ye"][""] << 2 << 2 << Yl(2) << "# Y_mu(M_GUT)^DRbar";
      slha["Ye"][""] << 3 << 3 << Yl(3) << "# Y_tau(M_GUT)^DRbar";


    }

    if(*HighScaleModel == "SUGRA")
    {
      SLHAea_add_block(slha, "EXTPAR");
      if(input_Param.find("Qin") != input_Param.end())
        slha["EXTPAR"][""] << 0 << *input_Param.at("Qin") << "# scale Q where the parameters below are defined";
      slha["EXTPAR"][""] << 1 << *input_Param.at("M1") << "# M_1";
      slha["EXTPAR"][""] << 2 << *input_Param.at("M2") << "# M_2";
      slha["EXTPAR"][""] << 3 << *input_Param.at("M3") << "# M_3";
      slha["EXTPAR"][""] << 11 << *input_Param.at("Au_33") << "# A_t";
      slha["EXTPAR"][""] << 12 << *input_Param.at("Ad_33") << "# A_b";
      slha["EXTPAR"][""] << 13 << *input_Param.at("Ae_33") << "# A_l";
      slha["EXTPAR"][""] << 21 << *input_Param.at("mHd2") << "# m_Hd^2";
      slha["EXTPAR"][""] << 22 << *input_Param.at("mHd2") << "# m_Hu^2";
      slha["EXTPAR"][""] << 31 << sqrt(*input_Param.at("ml2_11")) << "# M_(L,11)";
      slha["EXTPAR"][""] << 32 << sqrt(*input_Param.at("ml2_22")) << "# M_(L,22)";
      slha["EXTPAR"][""] << 33 << sqrt(*input_Param.at("ml2_33")) << "# M_(L,33)";
      slha["EXTPAR"][""] << 34 << sqrt(*input_Param.at("me2_11")) << "# M_(E,11)";
      slha["EXTPAR"][""] << 35 << sqrt(*input_Param.at("me2_22")) << "# M_(E,22)";
      slha["EXTPAR"][""] << 36 << sqrt(*input_Param.at("me2_33")) << "# M_(E,33)";
      slha["EXTPAR"][""] << 41 << sqrt(*input_Param.at("mq2_11")) << "# M_(Q,11)";
      slha["EXTPAR"][""] << 42 << sqrt(*input_Param.at("mq2_22")) << "# M_(Q,22)";
      slha["EXTPAR"][""] << 43 << sqrt(*input_Param.at("mq2_33")) << "# M_(Q,33)";
      slha["EXTPAR"][""] << 44 << sqrt(*input_Param.at("mu2_11")) << "# M_(U,11)";
      slha["EXTPAR"][""] << 45 << sqrt(*input_Param.at("mu2_22")) << "# M_(U,22)";
      slha["EXTPAR"][""] << 46 << sqrt(*input_Param.at("mu2_33")) << "# M_(U,33)";
      slha["EXTPAR"][""] << 47 << sqrt(*input_Param.at("md2_11")) << "# M_(D,11)";
      slha["EXTPAR"][""] << 48 << sqrt(*input_Param.at("md2_22")) << "# M_(D,22)";
      slha["EXTPAR"][""] << 49 << sqrt(*input_Param.at("md2_33")) << "# M_(D,33)";
    }

    // parameters + masses for SPheno.spc
    SLHAea_add_block(slha, "SMINPUTS");
    slha["SMINPUTS"][""] << 1 << 1.0 / Alpha_MSbar(*mZ, *mW) << "# alpha_em^-1(MZ)^MSbar";
    slha["SMINPUTS"][""] << 2 << *G_F << "# G_mu [GeV^-2]";
    slha["SMINPUTS"][""] << 3 << *AlphaS_mZ << "# alpha_s(MZ)^MSbar";
    slha["SMINPUTS"][""] << 4 << *mZ << "# m_Z(pole)";
    slha["SMINPUTS"][""] << 5 << (*mf_d)(3) << "# m_b(m_b), MSbar";
    slha["SMINPUTS"][""] << 6 << (*mf_u)(3) << "# m_t(pole)";
    slha["SMINPUTS"][""] << 7 << (*mf_l)(3) << "# m_tau(pole)";
    slha["SMINPUTS"][""] << 8 << (*mf_nu)(3) << "# m_nu_3";
    slha["SMINPUTS"][""] << 11 << (*mf_l)(1) << "# m_e(pole)";
    slha["SMINPUTS"][""] << 12 << (*mf_nu)(1) << "# m_nu_1";
    slha["SMINPUTS"][""] << 13 << (*mf_l)(2) << "# m_muon(pole)";
    slha["SMINPUTS"][""] << 14 << (*mf_nu)(2) << "# m_nu_2";
    slha["SMINPUTS"][""] << 21 << (*mf_d)(1) << "# m_d(2 GeV), MSbar";
    slha["SMINPUTS"][""] << 22 << (*mf_u)(1) << "# m_u(2 GeV), MSbar";
    slha["SMINPUTS"][""] << 23 << (*mf_d)(2) << "# m_s(2 GeV), MSbar";
    slha["SMINPUTS"][""] << 24 << (*mf_u)(2) << "# m_c(m_c), MSbar";

    Farray_Fcomplex16_1_3_1_3 Al_pmns, Ad_sckm, Au_sckm;
    Farray_Fcomplex16_1_3_1_3 M2D_sckm, M2U_sckm, M2Q_sckm, M2E_pmns, M2L_pmns;
    Farray_Fcomplex16_1_6_1_6 RUsq_ckm, RDsq_ckm, RSl_pmns;
    Farray_Fcomplex16_1_3_1_3 RSn_pmns;

    if(*GenerationMixing)
    {
      // missing
    }
    else
    {
      for(int i=1; i<=3; i++)
      {
        Yu(i) = (*Y_u)(i,i).re;
        Yd(i) = (*Y_d)(i,i).re;
        Yl(i) = (*Y_l)(i,i).re;
      }

      Al_pmns = *A_l;
      Ad_sckm = *A_d;
      Au_sckm = *A_u;

      M2D_sckm = *M2_D;
      M2U_sckm = *M2_U;
      M2Q_sckm = *M2_Q;
      M2E_pmns = *M2_E;
      M2L_pmns = *M2_L;

      RUsq_ckm = *RSup;
      RDsq_ckm = *RSdown;
 
      RSn_pmns = *RSneut;
      RSl_pmns = *RSlepton;      
    }

    SLHAea_add_block(slha, "GAUGE", Q);
    slha["GAUGE"][""] << 1 << (*gauge)(1) << "# g'(Q)^DRbar";
    slha["GAUGE"][""] << 2 << (*gauge)(2) << "# g(Q)^DRbar";
    slha["GAUGE"][""] << 3 << (*gauge)(3) << "# g3(Q)^DRbar";

    SLHAea_add_block(slha, "Yu", Q);
    slha["Yu"][""] << 1 << 1 << Yu(1) << "# Y_u(Q)^DRbar";
    slha["Yu"][""] << 2 << 2 << Yu(2) << "# Y_c(Q)^DRbar";
    slha["Yu"][""] << 3 << 3 << Yu(3) << "# Y_t(Q)^DRbar";

    SLHAea_add_block(slha, "Yd", Q);
    slha["Yd"][""] << 1 << 1 << Yd(1) << "# Y_d(Q)^DRbar";
    slha["Yd"][""] << 2 << 2 << Yd(2) << "# Y_s(Q)^DRbar";
    slha["Yd"][""] << 3 << 3 << Yd(3) << "# Y_b(Q)^DRbar";

    SLHAea_add_block(slha, "Ye", Q);
    slha["Ye"][""] << 1 << 1 << Yl(1) << "# Y_e(Q)^DRbar";
    slha["Ye"][""] << 2 << 2 << Yl(2) << "# Y_mu(Q)^DRbar";
    slha["Ye"][""] << 3 << 3 << Yl(3) << "# Y_tau(Q)^DRbar";

    if(*GenerationMixing)
    {
      //missing
    }
    else
    {
      SLHAea_add_block(slha, "Au", Q);
      if((*Y_u)(1,1).abs() > 0)
        slha["Au"][""] << 1 << 1 << (Au_sckm(1,1)/(*Y_u)(1,1)).re << "# A_u(Q)^DRbar";
      if((*Y_u)(2,2).abs() > 0)
        slha["Au"][""] << 2 << 2 << (Au_sckm(2,2)/(*Y_u)(2,2)).re << "# A_c(Q)^DRbar";
      if((*Y_u)(3,3).abs() > 0)
        slha["Au"][""] << 3 << 3 << (Au_sckm(3,3)/(*Y_u)(3,3)).re << "# A_t(Q)^DRbar";
      if(Au_sckm(1,1).im != 0 or Au_sckm(2,2).im != 0 or Au_sckm(3,3).im != 0)
      {
        SLHAea_add_block(slha, "IMAu", Q);
        if((*Y_u)(1,1).abs() > 0)
          slha["IMAu"][""] << 1 << 1 << (Au_sckm(1,1)/(*Y_u)(1,1)).im << "# Im(A_u)(Q)^DRbar";
        if((*Y_u)(2,2).abs() > 0)
          slha["IMAu"][""] << 2 << 2 << (Au_sckm(2,2)/(*Y_u)(2,2)).im << "# Im(A_c)(Q)^DRbar";
        if((*Y_u)(3,3).abs() > 0)
          slha["IMAu"][""] << 3 << 3 << (Au_sckm(3,3)/(*Y_u)(3,3)).im << "# Im(A_t)(Q)^DRbar";
      }
   
      SLHAea_add_block(slha, "Ad", Q);
      if((*Y_d)(1,1).abs() > 0)
        slha["Ad"][""] << 1 << 1 << (Ad_sckm(1,1)/(*Y_d)(1,1)).re << "# A_d(Q)^DRbar";
      if((*Y_u)(2,2).abs() > 0)
        slha["Ad"][""] << 2 << 2 << (Ad_sckm(2,2)/(*Y_d)(2,2)).re << "# A_s(Q)^DRbar";
      if((*Y_u)(3,3).abs() > 0)
        slha["Ad"][""] << 3 << 3 << (Ad_sckm(3,3)/(*Y_d)(3,3)).re << "# A_b(Q)^DRbar";
      if(Ad_sckm(1,1).im != 0 or Ad_sckm(2,2).im != 0 or Ad_sckm(3,3).im != 0)
      {
        SLHAea_add_block(slha, "IMAd", Q);
        if((*Y_d)(1,1).abs() > 0)
          slha["IMAd"][""] << 1 << 1 << (Ad_sckm(1,1)/(*Y_d)(1,1)).im << "# Im(A_d)(Q)^DRbar";
        if((*Y_d)(2,2).abs() > 0)
          slha["IMAd"][""] << 2 << 2 << (Ad_sckm(2,2)/(*Y_d)(2,2)).im << "# Im(A_s)(Q)^DRbar";
        if((*Y_d)(3,3).abs() > 0)
          slha["IMAd"][""] << 3 << 3 << (Ad_sckm(3,3)/(*Y_d)(3,3)).im << "# Im(A_b)(Q)^DRbar";
      }
     
      SLHAea_add_block(slha, "Ae", Q);
      if((*Y_l)(1,1).abs() > 0)
        slha["Ae"][""] << 1 << 1 << (Al_pmns(1,1)/(*Y_l)(1,1)).re << "# A_e(Q)^DRbar";
      if((*Y_l)(2,2).abs() > 0)
        slha["Ae"][""] << 2 << 2 << (Al_pmns(2,2)/(*Y_l)(2,2)).re << "# A_mu(Q)^DRbar";
      if((*Y_l)(3,3).abs() > 0)
        slha["Ae"][""] << 3 << 3 << (Al_pmns(3,3)/(*Y_l)(3,3)).re << "# A_tau(Q)^DRbar";
      if(Al_pmns(1,1).im != 0 or Al_pmns(2,2).im != 0 or Al_pmns(3,3).im != 0)
      {
        SLHAea_add_block(slha, "IMAe", Q);
        if((*Y_l)(1,1).abs() > 0)
          slha["IMAe"][""] << 1 << 1 << (Al_pmns(1,1)/(*Y_l)(1,1)).im << "# Im(A_e)(Q)^DRbar";
        if((*Y_l)(2,2).abs() > 0)
          slha["IMAe"][""] << 2 << 2 << (Al_pmns(2,2)/(*Y_l)(2,2)).im << "# Im(A_mu)(Q)^DRbar";
        if((*Y_l)(3,3).abs() > 0)
          slha["IMAe"][""] << 3 << 3 << (Al_pmns(3,3)/(*Y_l)(3,3)).im << "# Im(A_tau)(Q)^DRbar";
      }
    
    }

    SLHAea_add_block(slha, "MSOFT", Q);
    slha["MSOFT"][""] << 1 << (*Mi)(1).re << "# M_1";
    slha["MSOFT"][""] << 2 << (*Mi)(2).re << "# M_2";
    slha["MSOFT"][""] << 3 << (*Mi)(3).re << "# M_3";
    slha["MSOFT"][""] << 21 << (*M2_H)(1) << "# M^2_(H,d)";
    slha["MSOFT"][""] << 22 << (*M2_H)(2) << "# M^2_(H,u)";
 
    slha["MSOFT"][""] << 31 << sqrt(M2L_pmns(1,1).re) << "# M_(L,11)";
    slha["MSOFT"][""] << 32 << sqrt(M2L_pmns(2,2).re) << "# M_(L,22)";
    slha["MSOFT"][""] << 33 << sqrt(M2L_pmns(3,3).re) << "# M_(L,33)";
    slha["MSOFT"][""] << 34 << sqrt(M2E_pmns(1,1).re) << "# M_(E,11)";
    slha["MSOFT"][""] << 35 << sqrt(M2E_pmns(2,2).re) << "# M_(E,22)";
    slha["MSOFT"][""] << 36 << sqrt(M2E_pmns(3,3).re) << "# M_(E,33)";
    slha["MSOFT"][""] << 41 << sqrt(M2Q_sckm(1,1).re) << "# M_(Q,11)";
    slha["MSOFT"][""] << 42 << sqrt(M2Q_sckm(2,2).re) << "# M_(Q,22)";
    slha["MSOFT"][""] << 43 << sqrt(M2Q_sckm(3,3).re) << "# M_(Q,33)";
    slha["MSOFT"][""] << 44 << sqrt(M2U_sckm(1,1).re) << "# M_(U,11)";
    slha["MSOFT"][""] << 45 << sqrt(M2U_sckm(2,2).re) << "# M_(U,22)";
    slha["MSOFT"][""] << 46 << sqrt(M2U_sckm(3,3).re) << "# M_(U,33)";
    slha["MSOFT"][""] << 47 << sqrt(M2D_sckm(1,1).re) << "# M_(D,11)";
    slha["MSOFT"][""] << 48 << sqrt(M2D_sckm(2,2).re) << "# M_(D,22)";
    slha["MSOFT"][""] << 49 << sqrt(M2D_sckm(3,3).re) << "# M_(D,33)";

    if((*Mi)(1).im != 0 or (*Mi)(2).im != 0 or (*Mi)(3).im != 0)
    {
      SLHAea_add_block(slha, "IMMSOFT", Q);
      slha["IMMSOFT"][""] << 1 << (*Mi)(1).im << "# M_1";
      slha["IMMSOFT"][""] << 2 << (*Mi)(2).im << "# M_2";
      slha["IMMSOFT"][""] << 3 << (*Mi)(3).im << "# M_3";
    }

    SLHAea_add_block(slha, "MASS");
    slha["MASS"][""] << 6 << (*mf_u)(3) << "# m_t(pole)";
    slha["MASS"][""] << 23 << *mZ << "# m_Z(pole)";
    slha["MASS"][""] << 24 << *mW << "# m_W(pole)";
    slha["MASS"][""] << 15 << (*mf_l)(3) << "# m_tau(pole)";

    slha["MASS"][""] << 25 << (*S0)(1).m << "# h0";
    slha["MASS"][""] << 35 << (*S0)(2).m << "# H0";
    slha["MASS"][""] << 36 << (*P0)(2).m << "# A0";
    slha["MASS"][""] << 37 << (*Spm)(2).m << "# H+";

    // squarks
    if(*GenerationMixing)
    {
      // missing
    }
    else
    {
      if((*RSdown)(1,1).abs() > 0.5)
      {
        slha["MASS"][""] << 1000001 << (*Sdown)(1).m << "# ~d_L";
        slha["MASS"][""] << 2000001 << (*Sdown)(2).m << "# ~d_R";
      }
      else
      {
        slha["MASS"][""] << 1000001 << (*Sdown)(2).m << "# ~d_L";
        slha["MASS"][""] << 2000001 << (*Sdown)(1).m << "# ~d_R";
      }
      if((*RSup)(1,1).abs() > 0.5)
      {
        slha["MASS"][""] << 1000002 << (*Sup)(1).m << "# ~u_L";
        slha["MASS"][""] << 2000002 << (*Sup)(2).m << "# ~u_R";
      }
      else
      {
        slha["MASS"][""] << 1000002 << (*Sup)(2).m << "# ~u_L";
        slha["MASS"][""] << 2000002 << (*Sup)(1).m << "# ~u_R";
      }
      if((*RSdown)(3,3).abs() > 0.5)
      {
        slha["MASS"][""] << 1000003 << (*Sdown)(3).m << "# ~s_L";
        slha["MASS"][""] << 2000003 << (*Sdown)(4).m << "# ~s_R";
      }
      else
      {
        slha["MASS"][""] << 1000003 << (*Sdown)(4).m << "# ~s_L";
        slha["MASS"][""] << 2000003 << (*Sdown)(3).m << "# ~s_R";
      }
      if((*RSup)(3,3).abs() > 0.5)
      {
        slha["MASS"][""] << 1000004 << (*Sup)(3).m << "# ~c_L";
        slha["MASS"][""] << 2000004 << (*Sup)(4).m << "# ~c_R";
      }
      else
      {
        slha["MASS"][""] << 1000004 << (*Sup)(4).m << "# ~c_L";
        slha["MASS"][""] << 2000004 << (*Sup)(3).m << "# ~c_R";
      }
      slha["MASS"][""] << 1000005 << (*Sdown)(5).m << "# ~b_1";
      slha["MASS"][""] << 2000005 << (*Sdown)(6).m << "# ~b_2";
      slha["MASS"][""] << 1000006 << (*Sup)(5).m << "# ~t_1";
      slha["MASS"][""] << 2000006 << (*Sup)(6).m << "# ~t_2";

    }

    // sleptons
    if(*GenerationMixing)
    {
      // missing
    }
    else
    {
      if((*RSlepton)(1,1).abs() > 0.5)
      {
        slha["MASS"][""] << 1000011 << (*Slepton)(1).m << "# ~e_L-";
        slha["MASS"][""] << 2000011 << (*Slepton)(2).m << "# ~e_R-";
      } 
      else
      {
        slha["MASS"][""] << 1000011 << (*Slepton)(2).m << "# ~e_L-";
        slha["MASS"][""] << 2000011 << (*Slepton)(1).m << "# ~e_R-";
      }
      slha["MASS"][""] << 1000012 << (*Sneut)(1).m << "# ~nu_eL";
      if((*RSlepton)(3,3).abs() > 0.5)
      {
        slha["MASS"][""] << 1000013 << (*Slepton)(3).m << "# ~mu_L-";
        slha["MASS"][""] << 2000013 << (*Slepton)(4).m << "# ~mu_R-";
      }
      else
      {
        slha["MASS"][""] << 1000013 << (*Slepton)(4).m << "# ~mu_L-";
        slha["MASS"][""] << 2000013 << (*Slepton)(3).m << "# ~mu_R-";
      }
      slha["MASS"][""] << 1000014 << (*Sneut)(2).m << "# ~nu_muL";
      slha["MASS"][""] << 1000015 << (*Slepton)(5).m << "# ~tau_1-";
      slha["MASS"][""] << 2000015 << (*Slepton)(6).m << "# ~tau_2-";
      slha["MASS"][""] << 1000016 << (*Sneut)(3).m << "# ~nu_tauL";
    }

    // gauginos/higssinos
    slha["MASS"][""] << 1000021 << Glu->m << "# ~g";

    Farray_Freal8_1_4 mNr;
    Farray_Fcomplex16_1_4_1_4 Nr;

    for(int i=1; i<=4; i++)
    {
      Freal8 sum = 0;
      for(int j=1; j<=4; j++)
        sum += (*N)(i,j).re;
      if(sum == 0)
      {
        mNr(i) = -(*Chi0)(i).m;
        for(int j=1; j<=4; j++)
          Nr(i,j).re = (*N)(i,j).im;
      }
      else
      {
        mNr(i) = (*Chi0)(i).m;
        for(int j=1; j<=4; j++)
          Nr(i,j) = (*N)(i,j);
      }
    }
    slha["MASS"][""] << 1000022 << mNr(1) << "# ~chi_10";
    slha["MASS"][""] << 1000023 << mNr(2) << "# ~chi_20";
    slha["MASS"][""] << 1000025 << mNr(3) << "# ~chi_30";
    slha["MASS"][""] << 1000035 << mNr(4) << "# ~chi_40";
    slha["MASS"][""] << 1000024 << (*ChiPm)(1).m << "# ~chi_1+";
    slha["MASS"][""] << 1000037 << (*ChiPm)(2).m << "# ~chi_2+";

    // Mixing matrices
    SLHAea_add_block(slha, "ALPHA");
    slha["ALPHA"][""] << -asin((*RS0)(1,1)) << "# alpha";

    SLHAea_add_block(slha, "HMIX", Q);
    slha["HMIX"][""] << 1 << mu->re << "# mu";
    slha["HMIX"][""] << 2 << *tanb_Q << "# tan[beta](Q)";
    slha["HMIX"][""] << 3 << *vev_Q << "# v(Q)";
    slha["HMIX"][""] << 4 << *mA2_Q << "# m^2_A(Q)";

    if(mu->im != 0)
    {
      SLHAea_add_block(slha, "IMHMIX", Q);
      slha["IMHMIX"][""] << 1 << mu->im << "# Im(mu)";
    }

    if(*GenerationMixing)
    {
      // missing
    }
    else
    {
      SLHAea_add_block(slha, "STOPMIX");
      for(int i=1; i<=2; i++)
        for(int j=1; j<=2; j++)
        {
          slha["STOPMIX"][""] << i << j << RUsq_ckm(i+4,j+4).re << "# R_st(" << i << "," << j << ")";
          if(RUsq_ckm(i+4,j+4).im != 0)
          {
            SLHAea_check_block(slha, "IMSTOPMIX", i, true);
            slha["IMSTOPMIX"][""] << i << j << RUsq_ckm(i+4,j+4).im << "# Im(R_st)(" << i << "," << j << ")";
          }
        }

      SLHAea_add_block(slha, "SBOTMIX");
      for(int i=1; i<=2; i++)
        for(int j=1; j<=2; j++)
        {
          slha["SBOTMIX"][""] << i << j << RDsq_ckm(i+4,j+4).re << "# R_sb(" << i << "," << j << ")";
          if(RDsq_ckm(i+4,j+4).im != 0)
          {
            SLHAea_check_block(slha, "IMSBOTMIX", i, true);
            slha["IMSBOTMIX"][""] << i << j << RDsq_ckm(i+4,j+4).im << "# Im(R_sb)(" << i << "," << j << ")";
          }
        }

      SLHAea_add_block(slha, "STAUMIX");
      for(int i=1; i<=2; i++)
        for(int j=1; j<=2; j++)
        {
          slha["STAUMIX"][""] << i << j << RSl_pmns(i+4,j+4).re << "# R_sta(" << i << "," << j << ")";
          if(RSl_pmns(i+4,j+4).im != 0)
          {
            SLHAea_check_block(slha, "IMSBOTMIX", i, true);
            slha["IMSBOTMIX"][""] << i << j << RSl_pmns(i+4,j+4).im << "# Im(R_sta)(" << i << "," << j << ")";
          }
        }
    }   

    SLHAea_add_block(slha, "NMIX");
    for(int i=1; i<=4; i++)
      for(int j=1; j<=4; j++)
      {
        slha["NMIX"][""] << i << j << Nr(i,j).re << "# N(" << i << j << ")";
        if(Nr(i,j).im != 0)
        {
          SLHAea_check_block(slha, "IMNMIX", i, true);
          slha["IMNMIX"][""] << i << j << Nr(i,j).im << "# Im(N)(" << i << j << ")";
        }
      }

    SLHAea_add_block(slha, "UMIX");
    for(int i=1; i<=2; i++)
      for(int j=1; j<=2; j++)
      {
        slha["UMIX"][""] << i << j << (*U)(i,j).re << "# U(" << i << j << ")";
        if((*U)(i,j).im != 0)
        {
          SLHAea_check_block(slha, "IMUMIX", i, true);
          slha["IMUMIX"][""] << i << j << (*U)(i,j).im << "# Im(U)(" << i << j << ")";
        }
      }
          

    SLHAea_add_block(slha, "VMIX");
    for(int i=1; i<=2; i++)
      for(int j=1; j<=2; j++)
      {
        slha["VMIX"][""] << i << j << (*V)(i,j).re << "# V(" << i << j << ")";
        if((*V)(i,j).im != 0)
        {
          SLHAea_check_block(slha, "IMVMIX", i, true);
          slha["IMVMIX"][""] << i << j << (*V)(i,j).im << "# Im(V)(" << i << j << ")";
        }
      }

    // Missing Low Energy Observables

    // Create Spectrum object from the slhaea object
    Spectrum spectrum = spectrum_from_SLHAea<MSSMSimpleSpec, SLHAstruct>(slha, slha);    

    return spectrum;

  }

  // Function to read data from the Gambit inputs and fill SPheno internal variables
  void ReadingData(const SMInputs &sminputs, const std::map<str, safe_ptr<double> > &Param)
  {
      
    InitializeStandardModel(sminputs); 
    InitializeLoopFunctions();

    //*ErrorLevel = -1;
    *GenerationMixing = false;
    *L_BR = false;
    *L_CS = false;

    Set_All_Parameters_0();

    // necessary to exclude right handed neutrinos from RGEs
    // is set to positive in the corresponding model
    *MNuR = -1E-9;

    // take highest precision, will be change at a later stage (already taken from SPHENOINPUT
    *TwoLoopRGE = true;
    
    // these variables are only used in GMSB and will be set correctly below
    *F_GMSB = 1E12;
    *m32 = 1E10;

    *kont = 0;
 
    // Block SMINPUTS
    // Already in InitializeStandardModel
   
    // Block MINPAR
    if(*HighScaleModel == "mSUGRA")
    {
      // M0
      for(int i=1; i<=3; i++)
        (*M2D_0_sckm)(i,i) = pow(*Param.at("M0"),2);
      *M2E_0_pmns = *M2D_0_sckm;
      *M2L_0_pmns = *M2D_0_sckm;
      *M2_R_0 = *M2D_0_sckm;
      *M2Q_0_sckm = *M2D_0_sckm;
      *M2U_0_sckm = *M2D_0_sckm;
      for(int i=1; i<=2; i++)
        (*M2_H_0)(i) = pow(*Param.at("M0"),2);
      *M2_T_0 = *M2_H_0;
      // M12
      for(int i=1; i<=3; i++)
        (*Mi_0)(i) = *Param.at("M12");
      // TanBeta
      *tanb = *Param.at("TanBeta");
      // SignMu
      *phase_mu = *Param.at("SignMu");
      // A0
      for(int i=1; i<=3; i++)
        (*AoY_d_0)(i,i) = *Param.at("A0"); 
      *AoY_l_0 = *AoY_d_0;
      *AoY_u_0 = *AoY_d_0;
      *AoY_nu_0 = *AoY_d_0;
      *AoT_0 = *AoY_d_0;
      for(int i=1; i<=2; i++)
        (*Aolam12_0)(i) = (*AoY_d_0)(1,1);
    }
    else if(*HighScaleModel == "GMSB")
    {
      // Lambda
      *Lambda = *Param.at("Lambda");
      // M_M
      *MLambdaS = *Param.at("MLambdaS");
      // SignMu
      *phase_mu = *Param.at("SignMu");
      // n_5
      *n5plets = *Param.at("n5");
      // n_10
      *n10plets = 0;
      // grav_fac
      *grav_fac = *Param.at("grav_fac");
      // TanBeta
      *tanb = *Param.at("TanBeta");
    }
    else if(*HighScaleModel == "AMSB")
    {
      // M0
      *M0_amsb = *Param.at("M0");
      // M32
      *M_32 = *Param.at("M32");
      // SignMu
      *phase_mu = *Param.at("SignMu");
      // TanBeta
      *tanb = *Param.at("TanBeta");

    }
    else if(*HighScaleModel == "SUGRA")
    {
      // TanBeta
      *tanb = *Param.at("TanBeta");
      // SignMu
      *phase_mu = *Param.at("SignMu");
    }
    // Missing pars 7 - 10

    // Block EXTPAR
    if(*HighScaleModel == "SUGRA")
    {
      // Scale of input parameters
      if(Param.find("Qin") != Param.end())
      {
        SetGUTScale(*Param.at("Qin"));
      }
      // M_1
      (*Mi)(1).re = *Param.at("M1");
      (*Mi_0)(1).re = *Param.at("M1");
      // M_2
      (*Mi)(2).re = *Param.at("M2");
      (*Mi_0)(2).re = *Param.at("M2");
      // M_3
      (*Mi)(3).re = *Param.at("M3");
      (*Mi_0)(3).re = *Param.at("M3");
      // tanb
      // in GAMBIT tanb is always at mZ
      //*tanb_Q = *Param.at("TanBeta");
      *tanb_in_at_Q = false;
       
      for(int i=1; i<=3; i++)
        for(int j=1; j<=3; j++)
        {
          // A_u, Block TUIN
          std::stringstream parname;
          parname << "Au_" << i << j;
          (*Au_0_sckm)(i,j).re = *Param.at(parname.str());
          (*Au_sckm)(j,i).re = *Param.at(parname.str());
          // A_d, Block TDIN
          parname.str(std::string());
          parname << "Ad_" << i << j; 
          (*Ad_0_sckm)(i,j).re = *Param.at(parname.str());
          (*Ad_sckm)(j,i).re = *Param.at(parname.str());
          // A_l, Block TEIN
          parname.str(std::string());
          parname << "Ae_" << i << j;
          (*Al_0_pmns)(i,j).re = *Param.at(parname.str());
          (*Al_pmns)(j,i).re = *Param.at(parname.str());
        } 

      // A_t
      (*AoY_u)(3,3).re = *Param.at("Au_33");
      *At_save = (*AoY_u)(3,3);
      *AoY_u_0 = *AoY_u;
      // A_b
      (*AoY_d)(3,3).re = *Param.at("Ad_33");
      *Ab_save = (*AoY_d)(3,3);
      *AoY_d_0 = *AoY_d;
      // A_tau
      (*AoY_l)(3,3).re = *Param.at("Ae_33");
      *Atau_save = (*AoY_l)(3,3);
      *AoY_l_0 = *AoY_l;
       
      // M^2_Hd
      (*M2_H)(1) = *Param.at("mHd2");
      (*M2_H_0)(1) = *Param.at("mHd2");
      // M^2_Hu
      (*M2_H)(2) = *Param.at("mHu2");
      (*M2_H_0)(2) = *Param.at("mHu2");
      // mu, not in GAMBIT input
      // M^2_A(Q), not in GAMBIT input
      // m_A, pole mass, not in GAMBIT input
      for(int i=1; i<=3; i++)
        for(int j=i; j<=3; j++)
        {
          // M^2_L, Block MSL2
          std::stringstream parname;
          parname << "ml2_" << i << j;
          (*M2L_pmns)(i,j) = *Param.at(parname.str());
          (*M2L_pmns)(j,i) = *Param.at(parname.str());
          // M^2_E, Block MSE2
          parname.str(std::string());
          parname << "me2_" << i << j;
          (*M2E_pmns)(i,j) = *Param.at(parname.str());
          (*M2E_pmns)(j,i) = *Param.at(parname.str());
          // M^2_Q, Block MSQ2
          parname.str(std::string());
          parname << "mq2_" << i << j;
          (*M2Q_sckm)(i,j) = *Param.at(parname.str());
          (*M2Q_sckm)(j,i) = *Param.at(parname.str());
          // M^2_U, Block MSU2
          parname.str(std::string());
          parname << "mu2_" << i << j;
          (*M2U_sckm)(i,j) = *Param.at(parname.str());
          (*M2U_sckm)(j,i) = *Param.at(parname.str());
          // M^2_D, Block MSD2
          parname.str(std::string());
          parname << "md2_" << i << j;
          (*M2D_sckm)(i,j) = *Param.at(parname.str());
          (*M2D_sckm)(j,i) = *Param.at(parname.str());
        }
      *M2L_0_pmns = *M2L_pmns;
      *M2E_0_pmns = *M2E_pmns;
      *M2Q_0_sckm = *M2Q_sckm;
      *M2U_0_sckm = *M2U_sckm;
      *M2D_0_sckm = *M2D_sckm;
    }

    // TODO: NMSSM

    // TODO: R-parity breaking

    // Block SPHENOINPUT
    // Already in BE_INI_FUNCTION 

    // Block SPINFO, nothing to do here

    // No other blocks are relevant at this stage

    // now some checks and additional settings
    if(phase_mu->re == 0 and (mu->abs() > 0)) 
    {
      *phase_mu = *mu;
      phase_mu->re /= mu->abs();
      phase_mu->im /= mu->abs();
    }

    if(*SPA_convention)
    {
      backend_warning().raise(LOCAL_INFO,"SPheno Warning: in case of SPA conventions, tan(beta) should be given at 1 TeV.");
    }

    // recalculate quantities to be sure
    *gmZ = *gamZ * *mZ;
    *gmZ2 = pow(*gmZ, 2);

    // W-boson, first rough estimate
    *mW2 = *mZ2 * (0.5 + sqrt(0.25 - *Alpha_mZ*M_PI / (sqrt(2) * *G_F * *mZ2))) / 0.985;
    *mW = sqrt(*mW2); 	// mass
    *gamW = 2.06;	// width
    *gamW2 = pow(*gamW, 2);
    *gmW = *gamW * *mW;
    *gmW2 = pow(*gmW, 2);
    
    // the running fermion masses at m_Z need to be recalculated
    *Alpha_mZ = Alpha_MSbar(*mZ, *mW);
    CalculateRunningMasses(*mf_l, *mf_d, *mf_u, *Q_light_quarks, *Alpha_mZ, *AlphaS_mZ, *mZ, *mf_l_mZ, *mf_d_mZ, *mf_u_mZ, *kont);
    
    // TODO: SUGRA_NuR and SEESAW

    // TODO: External_spectrum

    // TODO: l_pmns

    // check if T_f and A_f given, if yes, then A_f gets overwritten
    if((*Au_sckm)(3,3).abs() != 0)
    {
      At_save->re = 0;
      At_save->im = 0;
    }
    if((*Ad_sckm)(3,3).abs() != 0)
    {
      Ab_save->re = 0;
      Ab_save->im = 0;
    }
    if((*Al_pmns)(3,3).abs() != 0)
    {
      Atau_save->re = 0;
      Atau_save->im = 0;
    }
 
  }

  void InitializeStandardModel(const SMInputs &sminputs)
  {

    *kont = 0;

    // Contributions to alpha(m_Z), based on F. Jegerlehner, hep-ph/0310234 and Fanchiotti, Kniehl, Sirlin PRD 48 (1993) 307
    *Delta_Alpha_Lepton = 0.04020;
    *Delta_Alpha_Hadron = 0.027651;

    // Z-boson
    *mZ = sminputs.mZ;    	// mass
    *gamZ = 2.4952;		// width, values henceforth from StandardModel.f90 
    (*BrZqq)(1) = 0.156;	// branching ratio in d \bar{d}
    (*BrZqq)(2) = 0.156;	// branching ratio in s \bar{s}
    (*BrZqq)(3) = 0.151;	// branching ratio in b \bar{b}
    (*BrZqq)(4) = 0.116;	// branching ratio in u \bar{u}
    (*BrZqq)(5) = 0.12;		// branching ratio in c \bar{c} 
    (*BrZll)(1) = 0.0336;	// branching ratio in e+ e-
    (*BrZll)(2) = 0.0336;	// branching ratio in mu+ mu-
    (*BrZll)(3) = 0.0338;	// branching ratio in tau+ tau-
    *BrZinv = 0.2;		// invisible branching ratio
    
    *mZ2 = *mZ * *mZ;
    *gamZ2 = *gamZ * *gamZ;
    *gmZ = *gamZ * *mZ;
    *gmZ2 = *gmZ * *gmZ;
    
    // W-boson
    *mW = 80.385;
    *gamW = 2.085;
    (*BrWqq)(1) = 0.35;
    (*BrWqq)(2) = 0.35;
    for(int i=1; i<=3; i++)
      (*BrWln)(i) = 0.1;

    *mW2 = pow(*mW, 2);
    *gamW2 = pow(*gamW, 2);
    *gmW = *gamW * *mW;
    *gmW2 = pow(*gmW, 2);
    
    // lepton masses: e, muon, tau
    (*mf_l)(1) = sminputs.mE;
    (*mf_l)(2) = sminputs.mMu;
    (*mf_l)(3) = sminputs.mTau;
  
    // default for neutrino masses
    (*mf_nu)(1) = 0.0;
    (*mf_nu)(2) = 0.0;
    (*mf_nu)(3) = 0.0;

    // scale where masses of light quarks are defined [in GeV]
    (*Q_light_quarks) = 2;

    // up-quark masses: u, c, t
    (*mf_u)(1) = sminputs.mU;     
    (*mf_u)(2) = sminputs.mCmC;
    (*mf_u)(3) = sminputs.mT;

    // down-quark masses: d, s, b
    (*mf_d)(1) = sminputs.mD;
    (*mf_d)(2) = sminputs.mS;
    (*mf_d)(3) = sminputs.mBmB;

    for(int i=1; i<=3; i++)
    {
       (*mf_l2)(i) = pow((*mf_l)(i),2);
       (*mf_u2)(i) = pow((*mf_u)(i),2);
       (*mf_d2)(i) = pow((*mf_d)(i),2);
    }

    // couplings: Alpha(Q=0), Alpha(mZ), Alpha_S(mZ), Fermi constant G_F
    if(*Alpha == 1.0)
      *Alpha = 1.0/137.03599974;
    else
    {
      // TODO: Warning
    }
    *Alpha_mZ = 1.0/sminputs.alphainv;
    *Alpha_mZ_MS = *Alpha_mZ; // from SMINPUTS
    *MZ_input = true;
    *AlphaS_mZ = sminputs.alphaS; 
    *G_F = sminputs.GF;

    // for ISR correction in e+e- annihilation
    *KFactorLee = 1.0 + (M_PI/3.0 - 1.0/(2*M_PI))*(*Alpha);

    // CKM matrix
    *lam_wolf = sminputs.CKM.lambda;
    *A_wolf = sminputs.CKM.A;
    *rho_wolf = sminputs.CKM.rhobar;
    *eta_wolf = sminputs.CKM.etabar;
      
    float s12 = sminputs.CKM.lambda;
    float s23 = pow(s12,2) * sminputs.CKM.A;
    float s13 = s23 * sminputs.CKM.lambda * sqrt(pow(sminputs.CKM.etabar,2) + pow(sminputs.CKM.rhobar,2));
    float phase = atan(sminputs.CKM.etabar/sminputs.CKM.rhobar);

    float c12 = sqrt(1.0 - pow(s12,2));
    float c23 = sqrt(1.0 - pow(s23,2));
    float c13 = sqrt(1.0 - pow(s13,2));

    std::complex<float> i = -1;
    i = sqrt(i);

    (*CKM)(1,1) = c12 * c13;
    (*CKM)(1,2) = s12 * c13;
    (*CKM)(1,3) = s13 * exp(-i * phase);
    (*CKM)(2,1) = -s12*c23 -c12*s23*s13 * exp(i * phase);
    (*CKM)(2,2) = c12*c23 -s12*s23*s13 * exp(i * phase );
    (*CKM)(2,3) = s23 * c13;
    (*CKM)(3,1) = s12*s23 -c12*c23*s13 * exp(i * phase );
    (*CKM)(3,2) = -c12*s23 - s12*c23*s13 * exp( i * phase );
    (*CKM)(3,3) = c23 * c13;

    CalculateRunningMasses(*mf_l, *mf_d, *mf_u, *Q_light_quarks, *Alpha_mZ, *AlphaS_mZ, *mZ, *mf_l_mZ, *mf_d_mZ, *mf_u_mZ, *kont);

  }  

  // Function that handles errors
  str ErrorHandling(const int &kont)
  {

    switch(kont)
    {
      case -1: return "Problem in OdeInt, stepsize smaller than minimum.";
      case -2: return "Problem in OdeInt, max val > 10^36.";
      case -3: return "Proglem in OdeInt, too many steps.";
      case -4: return "Proglem in OdeIntB, boundary condition not fulfilled.";
      case -5: return "Problem in OdeIntB, stepsize smaller than minimum.";
      case -6: return "Problem in OdeIntB, max val > 10^36.";
      case -7: return "Problem in OdeIntB, too many steps.";
      case -8: return "Problem in OdeIntC, boundary condition not fullfilled.";
      case -9: return "Problem in OdeIntC, stepsize smaller than minimum.";
      case -10: return "Problem in OdeIntC, max val > 10^36.";
      case -11: return "Problem in OdeIntC, too many steps.";
      case -12: return "Problem in rkqs, stepsize undeflow.";
      case -13: return "Error in Subroutine ComplexEigenSystem. Dimensions do not match.";
      case -14: return "Potential numerical problems in routine ComplexEigenSystem.";
      case -15: return "Error in Subroutine RealEigenSystem. Dimensions do not match.";
      case -16: return "Potential numerical problems in routine RealEigenSystem.";
      case -17: return "Error in tqli.";
      case -18: return "Problem in tqli, too many iterations.";
      case -19: return "Function DGAUSS ... too high accuracy required.";
      case -20: return "Subroutine DGaussInt ... Too high accuracy required.";
      case -21: return "Problem in function kappa.";
      case -24: return "Singular matrix in routine GaussJ.";
      case -27: return "Problem in bsstep, stepsize undeflow.";
      case -28: return "Routine pzextr: probable misuse, too much extrapolation";
      case -29: return "Routine rzextr: probable misuse, too much extrapolation";
      case -30: return "Error in Subroutine RealEigenSystem. Matrix contains NaN.";
      case -31: return  "Error in Subroutine ComplexEigenSystem. Matrix contains NaN.";
      case -101: return "Problem in routine CalculateRunningMasses: Qlow > mb(mb).";
      case -102: return "Problem in routine CalculateRunningMasses: Max(Qlow, mb(mb)) > Qmax.";
      case -201: return"Warning from Subroutine ChargedScalarMassEps1nt, a mass squared is negative.";
      case -202: return "Warning from Subroutine ChargedScalarMassEps3, a mass squared is negative.";
      case -203: return"Warning from Subroutine ChargedScalarMassLam3nt, a mass squared is negative.";
      case -204: return "Severe Warning from routine CharginoMass3. Abs(h_tau)**2 < 0. Taking the square root from the negative.";
      case -205: return "Severe Warning from routine CharginoMass5. Abs(h_tau)**2 < 0. Taking the square root from the negative.";
      case -206: return "Warning from Subroutine PseudoScalarMassEps1nT, a mass squared is negative.";
      case -207: return "Warning from Subroutine PseudoScalarMassEps3nT, a mass squared is negative.";
      case -208: return "Warning from Subroutine PseudoScalarMassMSSMnT, a mass squared is negative.";
      case -210: return "Warning from Subroutine ScalarMassEps1nT, a mass squared is negative.";
      case -211: return "Warning form Subroutine ScalarMassEps3nT, a mass squared is negative.";
      case -212: return "Warning from ScalarMassMSSMeff, m_h^2. Setting m_h to the sqrt(abs(m^2_h)).";
      case -213: return "Warning from Subroutine ScalarMassMSSMnT, a mass squared is negative.";
      case -214: return "L*k*tanbq*mu = 0 in routine ScalarMassNMSSMeff.";
      case -215: return "m^2_{S_1^0} < 0 in routine ScalarMassNMSSMeff.";
      case -216: return "m^2_{P_1^0} < 0 in routine ScalarMassNMSSMeff.";
      case -217: return "m^2_{S^+} < 0 in routine ScalarMassNMSSMeff.";
      case -219: return "Warning from routine SdwonMass3Lam. In the calculation of the masses occurred a negative mass squared.";
      case -220: return "Warning from routine SfermionMass1. In the calculation of the masses occurred a negative mass squared.";
      case -221: return "Warning from routine SfermionMass1. In the calculation of the masses occurred a negative mass squared.";
      case -222: return "Warning from routine SfermionMass1mssm. In the calculation of the masses occurred a negative mass squared.";
      case -223: return "Warning from routine SfermionMass3mssm. In the calculation of the masses occurred a negative mass squared.";
      case -224: return "Warning from routine SquarkMass3Eps. In the calculation of the masses occurred a negative mass squared.";
      case -225: return "Error in subroutine TreeMassesEps1. mSneutrino^2 <= 0. Setting it to 10.";
      case -226: return "Warning from TreeMassesMSSM. mSneut2 < 0. Set to its modulus.";
      case -227: return "Warning from TreeMassesMSSM. mP02 < 0. Set to its modulus.";
      case -228: return "Warning from TreeMassesMSSM. mSpm2 < 0. Set to its modulus.";
      case -229: return "Warning from TreeMassesMSSM2. mSneut2 < 0. Set to 0.";
      case -230: return "Warning from TreeMassesMSSM2. mP02 < 0. Set to its modulus.";
      case -231: return "Warning from TreeMassesMSSM2. mSpm2 < 0. Set to its modulus.";
      case -232: return "Warning from TreeMassesMSSM3. mSneut2 < 0. Set to 0.";
      case -233: return "Warning from TreeMassesNMSSM. mSneut2 < 0. Set to its modulus.";
      
      case -302: return "Routine LesHouches Input: unknown entry for Block MODSEL.";
      case -303: return "Routine LesHouches Input: model must be specified before parameters.";
      case -304: return "Routine LesHouches Input: unknown entry for Block MINPAR.";
      case -305: return "Routine LesHouches Input: model has not been specified completly.";
      case -306: return "Routine LesHouches Input: a serious error has been part of the input.";
      case -307: return "Routine LesHouches Input: Higgs sector has not been fully specified.";
      case -308: return "Routine ReadMatrixC: indices exceed the given boundaries.";
      case -309: return "Routine ReadMatrixR: indices exceed the given boundaries.";
      case -310: return "Routine ReadVectorC: index exceeds the given boundaries.";
      case -311: return "Routine ReadVectorR: index exceeds the given boundaries.";
      case -312: return "Routine ReadMatrixC: indices exceed the given boundaries";
      case -401: return "Routine BoundaryEW: negative scalar mass squared as input.";
      case -402: return "Routine BoundaryEW: m^2_Z(m_Z) < 0.";
      case -403: return "Routine BoundaryEW: sin^2(θ_DR) < 0.";
      case -404: return "Routine BoundaryEW: m^2_W < 0.";
      case -405: return "Routine BoundaryEW: either m_(l_D R)/m_l < 0.1 or m_(l_D R)/m_l > 10.";
      case -406: return "Routine BoundaryEW: either m_(d_D R)/m_u < 0.1 or m_(d_D R)/m_d > 10.";
      case -407: return "Routine BoundaryEW: either m_(u_D R)/m_d < 0.1 or m_(u_D R)/m_u > 10.";
      case -408: return "Routine RunRGE: entering non-perturbative regime.";
      case -409: return "Routine RunRGE: nor g_1 = g_ 2 at M_GUT neither any other unification.";
      case -410: return "Routine RunRGE: entering non-perturbative regime at M_GUT.";
      case -411: return "Routine RunRGE: entering non-perturbative regime at M_(H_3).";
      case -412: return "Routine Sugra: run did not converge.";
      case -413: return "Routine Calculate_Gi_Yi: m^2_Z(m_Z) < 0.";
      case -414: return "Routine Calculate_Gi_Yi: too many iterations to calculate m_b(m_b) in the MS scheme.";
      case -415: return "Routine Sugra: |μ|^2 < 0 at m_Z.";
      case -501: return "Negative mass squared in routine SleptonMass_1L.";
      case -502: return "p^2 iteration did not converge in routine SleptonMass_1L.";
      case -503: return "Negative mass squared in routine SneutrinoMass_1L.";
      case -504: return "p^2 iteration did not converge in routine SneutrinoMass_1L.";
      case -505: return "Negative mass squared in routine SquarkMass_1L.";
      case -506: return "p^2 iteration did not converge in routine SquarkMass_1L.";
      case -507: return "m^2_(h^0) < 0 in routine LoopMassesMSSM.";
      case -508: return "m^2_(A^0) < 0 in routine LoopMassesMSSM.";
      case -509: return "m^2_(H^+) < 0 in routine LoopMassesMSSM.";
      case -510: return "|μ|^2 > 10^20 in routine LoopMassesMSSM.";
      case -511: return "|μ|^2 < 0 in routine LoopMassesMSSM.";
      case -512: return "m^2_Z(m_Z)^2 < 0 in routine LoopMassesMSSM.";
      case -513: return "m^2_(h^0) < 0 in routine LoopMassesMSSM_2.";
      case -514: return "m^2_(A^0) < 0 in routine LoopMassesMSSM_2.";
      case -515: return "m^2_(H^+) < 0 in routine LoopMassesMSSM_2.";
      case -516: return "|μ|^2 > 10^20 in routine LoopMassesMSSM_2.";
      case -517: return "|μ|^2 < 0 in routine LoopMassesMSSM_2.";
      case -518: return "m^2_Z(m_Z)^2 < 0 in routine LoopMassesMSSM_2.";
      case -519: return "m^2_(h^0) < 0 in routine LoopMassesMSSM_3.";
      case -520: return "m^2_(A^0) < 0 in routine LoopMassesMSSM_3.";
      case -521: return "m^2_(H^+) < 0 in routine LoopMassesMSSM_3.";
      case -522: return "|μ|^2 > 10^20 in routine LoopMassesMSSM_3.";
      case -523: return "|μ|^2 < 0 in routine LoopMassesMSSM_3.";
      case -524: return "m^2_Z(m_Z)^2 < 0 in routine LoopMassesMSSM_3.";
      case -525: return "Negative mass squared in routine Sigma_SM_chirally enhanced.";
      case -601: return "Routine PiPseudoScalar2: m^2_(~t) < 0.";
      case -602: return "Routine PiPseudoScalar2: m^2_(~b < 0.";
      case -603: return "Routine PiPseudoScalar2: m^2_(~τ) < 0.";
      case -604: return "Routine PiScalar2: m^2_(~t) < 0.";
      case -605: return "Routine PiScalar2: m^2_(~b) < 0.";
      case -606: return "Routine PiScalar2: m^2_(~τ) < 0.";
      case -607: return "Routine Two Loop Tadpoles: m^2_(~t) < 0.";
      case -608: return "Routine Two Loop Tadpoles: m^2_(~b) < 0.";
      case -609: return "Routine Two Loop Tadpoles: m^2_(~τ) < 0.";
      case -1001: return "The size of the arrays do not match in routine ComplexEigenSystems_DP.";
      case -1002: return "Potential numerical problems in routine ComplexEigenSystems_DP.";
      case -1003: return "The size of the arrays do not match in routine ComplexEigenSystems_QP.";
      case -1004: return "Potential numerical problems in routine ComplexEigenSystems_QP.";
      case -1005: return "The size of the arrays do not match in routine RealEigenSystems_DP.";
      case -1006: return "Potential numerical problems in routine RealEigenSystems_ DP.";
      case -1007: return "The size of the arrays do not match in routine RealEigenSystems_QP.";
      case -1008: return "The size of the arrays do not match in routine Tqli_QP.";
      case -1009: return "Too many iterations in routine Tqli_QP.";
      case -1010: return "Too many iterations in routine Tql2_QP.";
    }

    return "Unspecified error";

  }
  
}



END_BE_NAMESPACE

// Initialisation function (definition)
BE_INI_FUNCTION
{

    // Dump all internal output 
    //*ErrCan = 0; 

    Set_All_Parameters_0();

    // Set up model, same as Block MODSEL
    if((*ModelInUse)("CMSSM"))
    {
      *HighScaleModel = "mSUGRA";
      SetHighScaleModel("SUGRA");
    }
    else
    {
      *HighScaleModel = "SUGRA";
      SetHighScaleModel("SUGRA");
    }

    // Set up options, same as BLOCK SPHENOINPUT
    // 1
    *ErrorLevel = runOptions->getValueOrDef<Finteger>(-1, "ErrorLevel");
    // GAMBIT: keep error level always 0 (print every warning), let GAMBIT handle errors
    *ErrorLevel = 0;

    // 2
    *SPA_convention = runOptions->getValueOrDef<Flogical>(true, "SPA_convention");
    SetRGEScale(1E6);

    // 3
    *External_Spectrum = runOptions->getValueOrDef<Flogical>(false, "External_Spectrum");
    *External_Higgs = runOptions->getValueOrDef<Flogical>(false, "External_Higgs");

    // 4
    // TODO: private variable, cannot import
    //*Use_Flavour_States = runOptions->getValueOrDef<Flogical>(false, "Use_Flavour_States");

    // 5
    *FermionMassResummation = runOptions->getValueOrDef<Flogical>(true, "FermionMassResummation");

    // 6
    *Ynu_at_MR3 = runOptions->getValueOrDef<Flogical>(false, "Ynu_at_MR3");
    *Fixed_Nu_Yukawas = !runOptions->getValueOrDef<Flogical>(true, "Fixed_Nu_Yukawas");

    // 7
    *Only_1loop_Higgsmass = runOptions->getValueOrDef<Flogical>(false, "Only_1loop_Higgsmass");

    // 8, Calculates Masses for extra scales if required
    *Calc_Mass = runOptions->getValueOrDef<Flogical>(false, "Calc_Mass");

    // 9, Use old version of BoundaryEW
    *UseNewBoundaryEW = runOptions->getValueOrDef<Flogical>(true, "UseNewBoundaryEW");

    // 10, use old version to calculate scale
    *UseNewScale = runOptions->getValueOrDef<Flogical>(true, "UseNewScale");

    // 11, whether to calculate branching ratios or not
    *L_BR = runOptions->getValueOrDef<Flogical>(false, "L_BR");

    // 12, minimal value such that a branching ratio is written out
    Freal8 BrMin = runOptions->getValueOrDef<Freal8>(0.0, "BRMin");
    if(BrMin > 0.0)
      SetWriteMinBr(BrMin);

    // 13, whether the output of h-> V V* should be folded with branching ratios of the V*
    // TODO: private variable, cannot import
    //*BR_Higgs_with_offshell_V = runOptions->getValueOrDef<Flogical>(false, "BR_Higgs_with_offshell_V");

    // 21, whether to calculate cross sections or not
    *L_CS = runOptions->getValueOrDef<Flogical>(false, "L_CS");

    // 22, CMS energy
    // TODO: Perhaps there is the option of setting more than one Ecms
    static int p_max = 100;
    static Finteger p_act = 0;
    p_act ++;
    if(p_act <= p_max)
      (*Ecms)(p_act) = runOptions->getValueOrDef<Freal8>(0.0, "Ecms");
    else
      backend_error().raise(LOCAL_INFO, "The number of required points for the calculation of cross sections exceeds the maximum");

    // 23, polarisation of incoming e- beam
    if(p_act <= p_max)
      (*Pm)(p_act) = runOptions->getValueOrDef<Freal8>(0.0, "Pm");
    if((*Pm)(p_act) > 1)
    {
      backend_error().raise(LOCAL_INFO, "e- beam polarisation has to be between -1 and 1");
      (*Pm)(p_act) = 0;
    }

    // 24, polarisation of incoming e+ beam
    if(p_act <= p_max)
      (*Pp)(p_act) = runOptions->getValueOrDef<Freal8>(0.0, "Pp");
    if((*Pp)(p_act) > 1)
    {
      backend_error().raise(LOCAL_INFO, "e+ beam polarisation has to be between -1 and 1");
      (*Pp)(p_act) = 0;
    }

    // 25, caluclate initial state radiation
    if(p_act <= p_max)
      (*ISR)(p_act) = runOptions->getValueOrDef<Flogical>(false, "ISR");

    // 26, minimal value such that a cross section is written out
    Freal8 SigMin = runOptions->getValueOrDef<Freal8>(0.0, "SigMin");
    if(SigMin > 0.0)
      SetWriteMinSig(SigMin);

    // 31, setting a fixed GUT scale
    Freal8 GUTScale = runOptions->getValueOrDef<Freal8>(0.0, "GUTScale");
    if(GUTScale > 0.0)
       SetGUTScale(byVal(GUTScale)); 

    // 32, requires strict unification
    Flogical StrictUnification = runOptions->getValueOrDef<Flogical>(false, "StrictUnification");
    if(StrictUnification)
      SetStrictUnification(StrictUnification);

    // 34, precision of mass calculation
    *delta_mass = runOptions->getValueOrDef<Freal8>(0.00001, "delta_mass");

    // 35, maximal number of iterations
    *n_run = runOptions->getValueOrDef<Finteger>(40, "n_run");

    // 36, write out debug information
    *WriteOut = runOptions->getValueOrDef<Flogical>(false, "WriteOut");

    // 37, if = 1 -> CKM through V_u, if = 2 CKM through V_d
    Finteger YukawaScheme = runOptions->getValueOrDef<Finteger>(0, "YukawaScheme");
    if(YukawaScheme > 0)
      SetYukawaScheme(YukawaScheme);   
    
    // 38, set looplevel of RGEs
    *TwoLoopRGE = runOptions->getValueOrDef<Flogical>(false, "TwoLoopRGE");

    // 39, write additional SLHA1 file
    // GABMIT: Always false, no file output
    *Write_SLHA1 = false;

    // 40, alpha(0)
    // TODO: default
    *Alpha = 1.0 / runOptions->getValueOrDef<Freal8>(1, "Alpha");

    // 41, Z-boson width
    // TODO: default
    *gamZ = runOptions->getValueOrDef<Freal8>(0, "gamZ");

    // 42, W-boson width
    // TODO: default
    *gamW = runOptions->getValueOrDef<Freal8>(0, "gamW");

    // 80, exit for sure with non-zero value if problem occurs
    *Non_Zero_Exit = runOptions->getValueOrDef<Flogical>(false, "Non_Zero_Exit");

    // 81, quick and dirty way to implement model by Suchita Kulkarni
    *Model_Suchita = runOptions->getValueOrDef<Flogical>(false, "Model_Suchita");

    // 90, add R-parity at low energies
    *Add_RParity = runOptions->getValueOrDef<Flogical>(false, "Add_RParity");

    // 91, fit RP parameters such that neutrino data are ok
    *L_Fit_RP_Parameters = runOptions->getValueOrDef<Flogical>(false, "L_Fit_RP_Parameters");

    // 92, for Pythia input
    // TODO: private variable, cannot import
    // *L_RP_Pythia = runOptions->getValueOrDef<Flogical>(false, "L_RP_Pythia");

    // 93, calculates cross sectionin case of RP, only partially implemented
    *L_CSrp = runOptions->getValueOrDef<Flogical>(false, "L_CSrp");

    // 94, io_RP
    // TODO: private variable, cannot import
    // *io_RP = runOptions->getValueOrDef<Finteger>(0, "io_RP");

    // 99, MADGraph output style, some additional information
    // TODO: private variable, cannot import
    // GAMBIT: always false, no file output
    // *MADGraph_style = false;
 
    // 100, use bsstep instead of rkqs
    Flogical bsstep = runOptions->getValueOrDef<Flogical>(false, "Use_bsstep_instead_of_rkqs");
    if(bsstep)
      Set_Use_bsstep_instead_of_rkqs(bsstep);    

    // 101, use rzextr instead of pzextr
    Flogical rzextr = runOptions->getValueOrDef<Flogical>(false, "Use_rzextr_instead_of_pzextr");
    if(rzextr)
      Set_Use_rzextr_instead_of_pzextr(rzextr);

    // 110, write ouput for LHC observables
    // TODO: private variable, cannot import
    // *LWrite_LHC_Observables = runOptions->getValueOrDef<Flogical>(false, "LWrite_LHC_Observables");
   
}
END_BE_INI_FUNCTION
