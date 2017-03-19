//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module FlavBit
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Nazila Mahmoudi
///  \date 2013 Oct
///  \date 2014
///  \date 2015 Feb
///  \date 2016 Jul
///
///  \author Marcin Chrzaszcz
///  \date 2015 May
///  \date 2015 July
///  \date 2015 August
///  \date 2016 July
///  \date 2016 August
///  \date 2016 October
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
///
///  \author Pat Scott
///          p.scott@imperial.ac.uk
///  \date 2015 May, June
///  \date 2016 Aug
///
///  *********************************************

#include <string>
#include <iostream>
#include <fstream>
#include <map>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/FlavBit/FlavBit_rollcall.hpp"
#include "gambit/FlavBit/FlavBit_types.hpp"
#include "gambit/Elements/spectrum.hpp"
#include "gambit/FlavBit/flav_obs.hpp"
#include "gambit/cmake/cmake_variables.hpp"

#include "gambit/Utils/statistics.hpp"


#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/triangular.hpp>
#include <boost/numeric/ublas/lu.hpp>
#include <boost/numeric/ublas/io.hpp>

#define FLAVBIT_DEBUG
#define FLAVBIT_DEBUG_LL

#define Nobs_BKll 2
#define Nobs_BKsll 30
#define Nobs_Bsphill 6


namespace Gambit
{

  namespace FlavBit
  {

    using namespace std;
    namespace ublas = boost::numeric::ublas;

    // **************************************************
    /// Non-rollcalled helper functions unknown to GAMBIT
    // **************************************************

    const bool flav_debug =
    #ifdef FLAVBIT_DEBUG
      true;
    #else
      false;
    #endif

    const bool flav_debug_LL =
    #ifdef FLAVBIT_DEBUG_LL
      true;
    #else
      false;
    #endif

    template<class T>
    bool InvertMatrix (const ublas::matrix<T>& input, ublas::matrix<T>& inverse)
    {
      using namespace boost::numeric::ublas;
      typedef permutation_matrix<std::size_t> pmatrix;
      // create a working copy of the input
      matrix<T> A(input);
      // create a permutation matrix for the LU-factorization
      pmatrix pm(A.size1());

      // perform LU-factorization
      int res = lu_factorize(A,pm);
      if( res != 0 ) return false;

      // create identity matrix of "inverse"
      inverse.assign(ublas::identity_matrix<T>(A.size1()));

      // backsubstitute to get the inverse
      lu_substitute(A, pm, inverse);

      return true;
    }


    // *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    // *************************************************
    void SI_fill(struct parameters &result)
    {
      namespace myPipe = Pipes::SI_fill;
      using namespace myPipe;
      using namespace std;


      if(ModelInUse("WC"))
	{
	  //BEreq::Init_param(&result);
	  result.SM=1;  // needed according to Nazila
	  result.Re_DeltaC7=*Param["Re_DeltaC7"];
	  result.Re_DeltaC9=*Param["Re_DeltaC9"];
	  result.Re_DeltaC10=*Param["Re_DeltaC10"];

	  result.Im_DeltaC7=*Param["Im_DeltaC7"];
	  result.Im_DeltaC9=*Param["Im_DeltaC9"];
	  result.Im_DeltaC10=*Param["Im_DeltaC10"];

	  result.Re_DeltaCQ1=*Param["Re_DeltaCQ1"];
	  result.Re_DeltaCQ2=*Param["Re_DeltaCQ2"];

	  result.Im_DeltaCQ1=*Param["Im_DeltaCQ1"];
	  result.Im_DeltaCQ2=*Param["Im_DeltaCQ2"];


	  // now SM inputs
	  // Access the pipes for this function to get model and parameter information, and dependencies

	  // Get SLHA2 SMINPUTS values
	  const SMInputs& spectrum = *(Dep::SMINPUTS);

	  result.mass_W=spectrum.mW;
	  result.inv_alpha_em=spectrum.alphainv;
	  result.Gfermi=spectrum.GF;
	  result.alphas_MZ=spectrum.alphaS;
	  result.mass_Z=spectrum.mZ;
	  result.mass_b=spectrum.mBmB;
	  result.mass_top_pole=spectrum.mT;
	  result.mass_tau=spectrum.mTau;
	  result.mass_nutau2=spectrum.mNu3;
	  result.mass_e=spectrum.mE;
	  result.mass_nue=spectrum.mNu1;
	  result.mass_mu=spectrum.mMu;
	  result.mass_numu2=spectrum.mNu2;
	  result.mass_d=spectrum.mD;
	  result.mass_u=spectrum.mU;
	  result.mass_s=spectrum.mS;
	  result.mass_c=spectrum.mCmC;
	  result.mass_b_1S=2.348147*2.;  // In principle this should come from the spectrum object, but it can't do masses in the 1S scheme atm...

	  result.CKM_lambda=spectrum.CKM.lambda;
	  result.CKM_A=spectrum.CKM.A;
	  result.CKM_rhobar=spectrum.CKM.rhobar;
	  result.CKM_etabar=spectrum.CKM.etabar;

	  result.Vtb=Spectrum::Wolf2V_tb(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);
	  result.Vcb=Spectrum::Wolf2V_cb(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);
	  result.Vub=Spectrum::Wolf2V_ub(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);

	  result.Vts=Spectrum::Wolf2V_ts(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);
	  result.Vcs=Spectrum::Wolf2V_cs(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);
	  result.Vus=Spectrum::Wolf2V_us(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);

	  result.Vtd=Spectrum::Wolf2V_td(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);
	  result.Vcd=Spectrum::Wolf2V_cd(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);
	  result.Vud=Spectrum::Wolf2V_ud(result.CKM_lambda, result.CKM_A, result.CKM_rhobar, result.CKM_etabar);

    // FIXME these all need to come from/be included in Elements/include/gambit/Elements/numerical_constants.hpp
	  result.m_Bs=5.366770;
	  result.m_B=5.27926;
	  result.m_Bd=5.27958;
	  result.mass_b_pole=4.791059;
	  result.life_pi=2.6033e-8;
	  result.life_K=1.2380e-8;
	  result.life_B=1.638e-12;
	  result.life_Bs=1.512e-12;
	  result.life_Bd=1.519e-12;
	  result.life_D=1.040e-12;
	  result.life_Ds=5.e-13;
	  result.f_B=0.1905;
	  result.f_Bs=0.2277;
	  result.f_Ds=0.2486;
	  result.f_D=0.2135;
	  result.f_K=0.156;
	  result.fK_fpi=1.193;
	  result.f_Kstar_par=0.216;
	  result.f_Kstar_perp=0.163;
	  result.f_phi_par=0.235;
	  result.f_phi_perp=0.191;
	  result.m_pi=0.13957;
	  result.m_K=0.493677;
	  result.m_K0=0.497614;
	  result.m_Kstar=0.89166;
	  result.m_Kstar0=0.89581;
	  result.m_D0=1.86484;
	  result.m_D=1.86961;
	  result.m_Dstar=2.01027;
	  result.m_Dstar0=2.00697;
	  result.m_Ds=1.9683;
	  result.m_phi=1.019461;
	  result.a1perp=0.04;
	  result.a2perp=0.10;
	  result.a1par=0.06;
	  result.a2par=0.16;
	  result.a1K=0.06;
	  result.a2K=0.25;
	  result.a1phi_perp=0.;
	  result.a1phi_par=0.;
	  result.a2phi_perp=0.14;
	  result.a2phi_par=0.23;
	  result.zeta3A=0.032;
	  result.zeta3V=0.013;
	  result.wA10=-2.1;
	  result.deltatp=0.16;
	  result.deltatm=-0.16;
	  result.deltatp_phi=0.33;
	  result.deltatm_phi=0.;
	  result.lambda_Bp=0.46;
	  result.lambda_Bsp=0.46;
	  result.rho1=0.06;
	  result.lambda2=0.12;
	  result.fullFF=1;

    // FIXME these need to come from the spectrum object!!!  They are already set - why are they overwritten here?
	  result.CKM_lambda=0.22537;
	  result.CKM_A=0.814;
	  result.CKM_rhobar=0.117;
	  result.CKM_etabar=0.353;

    // FIXME these needs to come from the spectrum object! They are already set - why are they overwritten here?
	  result.mass_u = 2.3e-3;
	  result.mass_d = 4.8e-3;
	  result.mass_s = 0.095;
	  result.mass_c = 1.275;
	  result.mass_b = 4.18;
	  result.mass_top_pole = 173.34;

    // FIXME these need to come from the spectrum object!!!
	  result.mass_e = 0.511e-3;
	  result.mass_mu= 0.105658;
	  result.mass_tau_pole=1.77682;
	  result.mass_tau=result.mass_tau_pole;

    // FIXME these need to come from the spectrum object!!!  They are already set - why are they overwritten here?
	  result.mass_Z=91.1876;
	  result.alphas_MZ=0.1185;
	  result.mass_W=80.385;

    // FIXME this needs to come from the spectrum object (the model-conditional dep needs to be on SM_spectrum, not SMINPUTS)!!!
	  result.mass_h0=125.;

    // FIXME these need to come from the spectrum object!!!
	  result.gp=result.gp_Q=3.57458e-1;
	  result.g2=result.g2_Q=6.51908e-1;
	  result.inv_alpha_em=1.27916e2;
	  result.Gfermi=1.16637000e-5;

    // FIXME these need to come from the decay table (need to add a dep on the decay table or on the W and Z widths individually)!!!
	  result.width_Z=2.4952;
	  result.width_W=2.085;

	  double mtmt=BEreq::mt_mt(&result);
	  result.mtmt=mtmt;

	  //	  BEreq::slha_adjust(&result);
	  if(flav_debug) cout<<"Finished SI_fill"<<endl;

	  //result.model=4;// WC are 4

	  return;
	}





      // Obtain SLHAea object from spectrum
      SLHAstruct spectrum = Dep::MSSM_spectrum->getSLHAea(2);

      // Add the MODSEL block if it is not provided by the spectrum object.
      SLHAea_add(spectrum,"MODSEL",1, 0, "General MSSM", false);

      BEreq::Init_param(&result);

      int ie,je;

      if(!spectrum["MODSEL"].empty())
      {
        if(spectrum["MODSEL"][1].is_data_line()) result.model=SLHAea::to<int>(spectrum["MODSEL"][1][1]);
        if(spectrum["MODSEL"][3].is_data_line()) result.NMSSM=SLHAea::to<int>(spectrum["MODSEL"][3][1]);
        if(spectrum["MODSEL"][4].is_data_line()) result.RV=SLHAea::to<int>(spectrum["MODSEL"][4][1]);
        if(spectrum["MODSEL"][5].is_data_line()) result.CPV=SLHAea::to<int>(spectrum["MODSEL"][5][1]);
        if(spectrum["MODSEL"][6].is_data_line()) result.FV=SLHAea::to<int>(spectrum["MODSEL"][6][1]);
        if(spectrum["MODSEL"][12].is_data_line()) result.Q=SLHAea::to<double>(spectrum["MODSEL"][12][1]);
      }

      if(result.NMSSM != 0) result.model=result.NMSSM;
      if(result.RV != 0) result.model=-2;
      if(result.CPV != 0) result.model=-2;

      if(!spectrum["SMINPUTS"].empty())
      {
        if(spectrum["SMINPUTS"][1].is_data_line()) result.inv_alpha_em=SLHAea::to<double>(spectrum["SMINPUTS"][1][1]);
        if(spectrum["SMINPUTS"][2].is_data_line()) result.Gfermi=SLHAea::to<double>(spectrum["SMINPUTS"][2][1]);
        if(spectrum["SMINPUTS"][3].is_data_line()) result.alphas_MZ=SLHAea::to<double>(spectrum["SMINPUTS"][3][1]);
        if(spectrum["SMINPUTS"][4].is_data_line()) result.mass_Z=SLHAea::to<double>(spectrum["SMINPUTS"][4][1]);
        if(spectrum["SMINPUTS"][5].is_data_line()) result.mass_b=SLHAea::to<double>(spectrum["SMINPUTS"][5][1]);
        if(spectrum["SMINPUTS"][6].is_data_line()) result.mass_top_pole=SLHAea::to<double>(spectrum["SMINPUTS"][6][1]);
        if(spectrum["SMINPUTS"][7].is_data_line()) result.mass_tau=SLHAea::to<double>(spectrum["SMINPUTS"][7][1]);
        if(spectrum["SMINPUTS"][8].is_data_line()) result.mass_nutau2=SLHAea::to<double>(spectrum["SMINPUTS"][8][1]);
        if(spectrum["SMINPUTS"][11].is_data_line()) result.mass_e2=SLHAea::to<double>(spectrum["SMINPUTS"][11][1]);
        if(spectrum["SMINPUTS"][12].is_data_line()) result.mass_nue2=SLHAea::to<double>(spectrum["SMINPUTS"][12][1]);
        if(spectrum["SMINPUTS"][13].is_data_line()) result.mass_mu2=SLHAea::to<double>(spectrum["SMINPUTS"][13][1]);
        if(spectrum["SMINPUTS"][14].is_data_line()) result.mass_numu2=SLHAea::to<double>(spectrum["SMINPUTS"][14][1]);
        if(spectrum["SMINPUTS"][21].is_data_line()) result.mass_d2=SLHAea::to<double>(spectrum["SMINPUTS"][21][1]);
        if(spectrum["SMINPUTS"][22].is_data_line()) result.mass_u2=SLHAea::to<double>(spectrum["SMINPUTS"][22][1]);
        if(spectrum["SMINPUTS"][23].is_data_line()) result.mass_s2=SLHAea::to<double>(spectrum["SMINPUTS"][23][1]);
        if(spectrum["SMINPUTS"][24].is_data_line()) result.mass_c2=SLHAea::to<double>(spectrum["SMINPUTS"][24][1]);
      }

      if(!spectrum["VCKMIN"].empty())
      {
        if(spectrum["VCKMIN"][1].is_data_line()) result.CKM_lambda=SLHAea::to<double>(spectrum["VCKMIN"][1][1]);
        if(spectrum["VCKMIN"][2].is_data_line()) result.CKM_A=SLHAea::to<double>(spectrum["VCKMIN"][2][1]);
        if(spectrum["VCKMIN"][3].is_data_line()) result.CKM_rhobar=SLHAea::to<double>(spectrum["VCKMIN"][3][1]);
        if(spectrum["VCKMIN"][4].is_data_line()) result.CKM_etabar=SLHAea::to<double>(spectrum["VCKMIN"][4][1]);
      }

      if(!spectrum["UPMNSIN"].empty())
      {
        if(spectrum["UPMNSIN"][1].is_data_line()) result.PMNS_theta12=SLHAea::to<double>(spectrum["UPMNSIN"][1][1]);
        if(spectrum["UPMNSIN"][2].is_data_line()) result.PMNS_theta23=SLHAea::to<double>(spectrum["UPMNSIN"][2][1]);
        if(spectrum["UPMNSIN"][3].is_data_line()) result.PMNS_theta13=SLHAea::to<double>(spectrum["UPMNSIN"][3][1]);
        if(spectrum["UPMNSIN"][4].is_data_line()) result.PMNS_delta13=SLHAea::to<double>(spectrum["UPMNSIN"][4][1]);
        if(spectrum["UPMNSIN"][5].is_data_line()) result.PMNS_alpha1=SLHAea::to<double>(spectrum["UPMNSIN"][5][1]);
        if(spectrum["UPMNSIN"][6].is_data_line()) result.PMNS_alpha2=SLHAea::to<double>(spectrum["UPMNSIN"][6][1]);
      }


      if(!spectrum["MINPAR"].empty() && !(ModelInUse("WC")) )
      {
        switch(result.model)
        {
          case 1:
          {
            if(spectrum["MINPAR"][1].is_data_line()) result.m0=SLHAea::to<double>(spectrum["MINPAR"][1][1]);
            if(spectrum["MINPAR"][2].is_data_line()) result.m12=SLHAea::to<double>(spectrum["MINPAR"][2][1]);
            if(spectrum["MINPAR"][3].is_data_line()) result.tan_beta=SLHAea::to<double>(spectrum["MINPAR"][3][1]);
            if(spectrum["MINPAR"][4].is_data_line()) result.sign_mu=SLHAea::to<double>(spectrum["MINPAR"][4][1]);
            if(spectrum["MINPAR"][5].is_data_line()) result.A0=SLHAea::to<double>(spectrum["MINPAR"][5][1]);
          }
          case 2:
          {
            if(spectrum["MINPAR"][1].is_data_line()) result.Lambda=SLHAea::to<double>(spectrum["MINPAR"][1][1]);
            if(spectrum["MINPAR"][2].is_data_line()) result.Mmess=SLHAea::to<double>(spectrum["MINPAR"][2][1]);
            if(spectrum["MINPAR"][3].is_data_line()) result.tan_beta=SLHAea::to<double>(spectrum["MINPAR"][3][1]);
            if(spectrum["MINPAR"][4].is_data_line()) result.sign_mu=SLHAea::to<double>(spectrum["MINPAR"][4][1]);
            if(spectrum["MINPAR"][5].is_data_line()) result.N5=SLHAea::to<double>(spectrum["MINPAR"][5][1]);
            if(spectrum["MINPAR"][6].is_data_line()) result.cgrav=SLHAea::to<double>(spectrum["MINPAR"][6][1]);
          }
          case 3:
          {
            if(spectrum["MINPAR"][1].is_data_line()) result.m32=SLHAea::to<double>(spectrum["MINPAR"][1][1]);
            if(spectrum["MINPAR"][2].is_data_line()) result.m0=SLHAea::to<double>(spectrum["MINPAR"][2][1]);
            if(spectrum["MINPAR"][3].is_data_line()) result.tan_beta=SLHAea::to<double>(spectrum["MINPAR"][3][1]);
            if(spectrum["MINPAR"][4].is_data_line()) result.sign_mu=SLHAea::to<double>(spectrum["MINPAR"][4][1]);
          }
	  case 4:
	    //	   result.CQpb=....

	default:
          {
            if(spectrum["MINPAR"][3].is_data_line()) result.tan_beta=SLHAea::to<double>(spectrum["MINPAR"][3][1]);
          }
        }
      }

      if(!spectrum["EXTPAR"].empty())
      {
        if(spectrum["EXTPAR"][0].is_data_line()) result.Min=SLHAea::to<double>(spectrum["EXTPAR"][0][1]);
        if(spectrum["EXTPAR"][1].is_data_line()) result.M1_Min=SLHAea::to<double>(spectrum["EXTPAR"][1][1]);
        if(spectrum["EXTPAR"][2].is_data_line()) result.M2_Min=SLHAea::to<double>(spectrum["EXTPAR"][2][1]);
        if(spectrum["EXTPAR"][3].is_data_line()) result.M3_Min=SLHAea::to<double>(spectrum["EXTPAR"][3][1]);
        if(spectrum["EXTPAR"][11].is_data_line()) result.At_Min=SLHAea::to<double>(spectrum["EXTPAR"][11][1]);
        if(spectrum["EXTPAR"][12].is_data_line()) result.Ab_Min=SLHAea::to<double>(spectrum["EXTPAR"][12][1]);
        if(spectrum["EXTPAR"][13].is_data_line()) result.Atau_Min=SLHAea::to<double>(spectrum["EXTPAR"][13][1]);
        if(spectrum["EXTPAR"][21].is_data_line()) result.M2H1_Min=SLHAea::to<double>(spectrum["EXTPAR"][21][1]);
        if(spectrum["EXTPAR"][22].is_data_line()) result.M2H2_Min=SLHAea::to<double>(spectrum["EXTPAR"][22][1]);
        if(spectrum["EXTPAR"][23].is_data_line()) result.mu_Min=SLHAea::to<double>(spectrum["EXTPAR"][23][1]);
        if(spectrum["EXTPAR"][24].is_data_line()) result.M2A_Min=SLHAea::to<double>(spectrum["EXTPAR"][24][1]);
        if(spectrum["EXTPAR"][25].is_data_line()) result.tb_Min=SLHAea::to<double>(spectrum["EXTPAR"][25][1]);
        if(spectrum["EXTPAR"][26].is_data_line()) result.mA_Min=SLHAea::to<double>(spectrum["EXTPAR"][26][1]);
        if(spectrum["EXTPAR"][31].is_data_line()) result.MeL_Min=SLHAea::to<double>(spectrum["EXTPAR"][31][1]);
        if(spectrum["EXTPAR"][32].is_data_line()) result.MmuL_Min=SLHAea::to<double>(spectrum["EXTPAR"][32][1]);
        if(spectrum["EXTPAR"][33].is_data_line()) result.MtauL_Min=SLHAea::to<double>(spectrum["EXTPAR"][33][1]);
        if(spectrum["EXTPAR"][34].is_data_line()) result.MeR_Min=SLHAea::to<double>(spectrum["EXTPAR"][34][1]);
        if(spectrum["EXTPAR"][35].is_data_line()) result.MmuR_Min=SLHAea::to<double>(spectrum["EXTPAR"][35][1]);
        if(spectrum["EXTPAR"][36].is_data_line()) result.MtauR_Min=SLHAea::to<double>(spectrum["EXTPAR"][36][1]);
        if(spectrum["EXTPAR"][41].is_data_line()) result.MqL1_Min=SLHAea::to<double>(spectrum["EXTPAR"][41][1]);
        if(spectrum["EXTPAR"][42].is_data_line()) result.MqL2_Min=SLHAea::to<double>(spectrum["EXTPAR"][42][1]);
        if(spectrum["EXTPAR"][43].is_data_line()) result.MqL3_Min=SLHAea::to<double>(spectrum["EXTPAR"][43][1]);
        if(spectrum["EXTPAR"][44].is_data_line()) result.MuR_Min=SLHAea::to<double>(spectrum["EXTPAR"][44][1]);
        if(spectrum["EXTPAR"][45].is_data_line()) result.McR_Min=SLHAea::to<double>(spectrum["EXTPAR"][45][1]);
        if(spectrum["EXTPAR"][46].is_data_line()) result.MtR_Min=SLHAea::to<double>(spectrum["EXTPAR"][46][1]);
        if(spectrum["EXTPAR"][47].is_data_line()) result.MdR_Min=SLHAea::to<double>(spectrum["EXTPAR"][47][1]);
        if(spectrum["EXTPAR"][48].is_data_line()) result.MsR_Min=SLHAea::to<double>(spectrum["EXTPAR"][48][1]);
        if(spectrum["EXTPAR"][49].is_data_line()) result.MbR_Min=SLHAea::to<double>(spectrum["EXTPAR"][49][1]);
        if(spectrum["EXTPAR"][51].is_data_line()) result.N51=SLHAea::to<double>(spectrum["EXTPAR"][51][1]);
        if(spectrum["EXTPAR"][52].is_data_line()) result.N52=SLHAea::to<double>(spectrum["EXTPAR"][52][1]);
        if(spectrum["EXTPAR"][53].is_data_line()) result.N53=SLHAea::to<double>(spectrum["EXTPAR"][53][1]);
        if(spectrum["EXTPAR"][61].is_data_line()) result.lambdaNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][61][1]);
        if(spectrum["EXTPAR"][62].is_data_line()) result.kappaNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][62][1]);
        if(spectrum["EXTPAR"][63].is_data_line()) result.AlambdaNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][63][1]);
        if(spectrum["EXTPAR"][64].is_data_line()) result.AkappaNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][64][1]);
        if(spectrum["EXTPAR"][65].is_data_line()) result.lambdaSNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][65][1]);
        if(spectrum["EXTPAR"][66].is_data_line()) result.xiFNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][66][1]);
        if(spectrum["EXTPAR"][67].is_data_line()) result.xiSNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][67][1]);
        if(spectrum["EXTPAR"][68].is_data_line()) result.mupNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][68][1]);
        if(spectrum["EXTPAR"][69].is_data_line()) result.mSp2NMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][69][1]);
        if(spectrum["EXTPAR"][70].is_data_line()) result.mS2NMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][70][1]);
      }

      if(!spectrum["MASS"].empty())
      {
        if(spectrum["MASS"][1].is_data_line()) result.mass_d=SLHAea::to<double>(spectrum["MASS"][1][1]);
        if(spectrum["MASS"][2].is_data_line()) result.mass_u=SLHAea::to<double>(spectrum["MASS"][2][1]);
        if(spectrum["MASS"][3].is_data_line()) result.mass_s=SLHAea::to<double>(spectrum["MASS"][3][1]);
        if(spectrum["MASS"][4].is_data_line()) result.mass_c=SLHAea::to<double>(spectrum["MASS"][4][1]);
        if(spectrum["MASS"][6].is_data_line()) result.mass_t=SLHAea::to<double>(spectrum["MASS"][6][1]);
        if(spectrum["MASS"][11].is_data_line()) result.mass_e=SLHAea::to<double>(spectrum["MASS"][11][1]);
        if(spectrum["MASS"][12].is_data_line()) result.mass_nue=SLHAea::to<double>(spectrum["MASS"][12][1]);
        if(spectrum["MASS"][13].is_data_line()) result.mass_mu=SLHAea::to<double>(spectrum["MASS"][13][1]);
        if(spectrum["MASS"][14].is_data_line()) result.mass_num=SLHAea::to<double>(spectrum["MASS"][14][1]);
        if(spectrum["MASS"][15].is_data_line()) result.mass_tau=SLHAea::to<double>(spectrum["MASS"][15][1]);
        if(spectrum["MASS"][16].is_data_line()) result.mass_nut=SLHAea::to<double>(spectrum["MASS"][16][1]);
        if(spectrum["MASS"][21].is_data_line()) result.mass_gluon=SLHAea::to<double>(spectrum["MASS"][21][1]);
        if(spectrum["MASS"][22].is_data_line()) result.mass_photon=SLHAea::to<double>(spectrum["MASS"][22][1]);
        if(spectrum["MASS"][23].is_data_line()) result.mass_Z0=SLHAea::to<double>(spectrum["MASS"][23][1]);
        if(spectrum["MASS"][24].is_data_line()) result.mass_W=SLHAea::to<double>(spectrum["MASS"][24][1]);
        if(spectrum["MASS"][25].is_data_line()) result.mass_h0=SLHAea::to<double>(spectrum["MASS"][25][1]);
        if(spectrum["MASS"][35].is_data_line()) result.mass_H0=SLHAea::to<double>(spectrum["MASS"][35][1]);
        if(spectrum["MASS"][36].is_data_line()) result.mass_A0=SLHAea::to<double>(spectrum["MASS"][36][1]);
        if(spectrum["MASS"][37].is_data_line()) result.mass_H=SLHAea::to<double>(spectrum["MASS"][37][1]);
        if(spectrum["MASS"][39].is_data_line()) result.mass_graviton=SLHAea::to<double>(spectrum["MASS"][39][1]);
        if(spectrum["MASS"][45].is_data_line()) result.mass_H03=SLHAea::to<double>(spectrum["MASS"][45][1]);
        if(spectrum["MASS"][46].is_data_line()) result.mass_A02=SLHAea::to<double>(spectrum["MASS"][46][1]);
        if(spectrum["MASS"][1000001].is_data_line()) result.mass_dnl=SLHAea::to<double>(spectrum["MASS"][1000001][1]);
        if(spectrum["MASS"][1000002].is_data_line()) result.mass_upl=SLHAea::to<double>(spectrum["MASS"][1000002][1]);
        if(spectrum["MASS"][1000003].is_data_line()) result.mass_stl=SLHAea::to<double>(spectrum["MASS"][1000003][1]);
        if(spectrum["MASS"][1000004].is_data_line()) result.mass_chl=SLHAea::to<double>(spectrum["MASS"][1000004][1]);
        if(spectrum["MASS"][1000005].is_data_line()) result.mass_b1=SLHAea::to<double>(spectrum["MASS"][1000005][1]);
        if(spectrum["MASS"][1000006].is_data_line()) result.mass_t1=SLHAea::to<double>(spectrum["MASS"][1000006][1]);
        if(spectrum["MASS"][1000011].is_data_line()) result.mass_el=SLHAea::to<double>(spectrum["MASS"][1000011][1]);
        if(spectrum["MASS"][1000012].is_data_line()) result.mass_nuel=SLHAea::to<double>(spectrum["MASS"][1000012][1]);
        if(spectrum["MASS"][1000013].is_data_line()) result.mass_mul=SLHAea::to<double>(spectrum["MASS"][1000013][1]);
        if(spectrum["MASS"][1000014].is_data_line()) result.mass_numl=SLHAea::to<double>(spectrum["MASS"][1000014][1]);
        if(spectrum["MASS"][1000015].is_data_line()) result.mass_tau1=SLHAea::to<double>(spectrum["MASS"][1000015][1]);
        if(spectrum["MASS"][1000016].is_data_line()) result.mass_nutl=SLHAea::to<double>(spectrum["MASS"][1000016][1]);
        if(spectrum["MASS"][1000021].is_data_line()) result.mass_gluino=SLHAea::to<double>(spectrum["MASS"][1000021][1]);
        if(spectrum["MASS"][1000022].is_data_line()) result.mass_neut[1]=SLHAea::to<double>(spectrum["MASS"][1000022][1]);
        if(spectrum["MASS"][1000023].is_data_line()) result.mass_neut[2]=SLHAea::to<double>(spectrum["MASS"][1000023][1]);
        if(spectrum["MASS"][1000024].is_data_line()) result.mass_cha1=SLHAea::to<double>(spectrum["MASS"][1000024][1]);
        if(spectrum["MASS"][1000025].is_data_line()) result.mass_neut[3]=SLHAea::to<double>(spectrum["MASS"][1000025][1]);
        if(spectrum["MASS"][1000035].is_data_line()) result.mass_neut[4]=SLHAea::to<double>(spectrum["MASS"][1000035][1]);
        if(spectrum["MASS"][1000037].is_data_line()) result.mass_cha2=SLHAea::to<double>(spectrum["MASS"][1000037][1]);
        if(spectrum["MASS"][1000039].is_data_line()) result.mass_gravitino=SLHAea::to<double>(spectrum["MASS"][1000039][1]);
        if(spectrum["MASS"][1000045].is_data_line()) result.mass_neut[5]=SLHAea::to<double>(spectrum["MASS"][1000045][1]);
        if(spectrum["MASS"][2000001].is_data_line()) result.mass_dnr=SLHAea::to<double>(spectrum["MASS"][2000001][1]);
        if(spectrum["MASS"][2000002].is_data_line()) result.mass_upr=SLHAea::to<double>(spectrum["MASS"][2000002][1]);
        if(spectrum["MASS"][2000003].is_data_line()) result.mass_str=SLHAea::to<double>(spectrum["MASS"][2000003][1]);
        if(spectrum["MASS"][2000004].is_data_line()) result.mass_chr=SLHAea::to<double>(spectrum["MASS"][2000004][1]);
        if(spectrum["MASS"][2000005].is_data_line()) result.mass_b2=SLHAea::to<double>(spectrum["MASS"][2000005][1]);
        if(spectrum["MASS"][2000006].is_data_line()) result.mass_t2=SLHAea::to<double>(spectrum["MASS"][2000006][1]);
        if(spectrum["MASS"][2000011].is_data_line()) result.mass_er=SLHAea::to<double>(spectrum["MASS"][2000011][1]);
        if(spectrum["MASS"][2000012].is_data_line()) result.mass_nuer=SLHAea::to<double>(spectrum["MASS"][2000012][1]);
        if(spectrum["MASS"][2000013].is_data_line()) result.mass_mur=SLHAea::to<double>(spectrum["MASS"][2000013][1]);
        if(spectrum["MASS"][2000014].is_data_line()) result.mass_numr=SLHAea::to<double>(spectrum["MASS"][2000014][1]);
        if(spectrum["MASS"][2000015].is_data_line()) result.mass_tau2=SLHAea::to<double>(spectrum["MASS"][2000015][1]);
        if(spectrum["MASS"][2000016].is_data_line()) result.mass_nutr=SLHAea::to<double>(spectrum["MASS"][2000016][1]);
      }

      if(!spectrum["ALPHA"].empty()) if(spectrum["ALPHA"].back().is_data_line()) result.alpha=SLHAea::to<double>(spectrum["ALPHA"].back().at(0));

      if(!spectrum["STOPMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
             if(spectrum["STOPMIX"][max(ie,je)].is_data_line()) result.stop_mix[ie][je]=SLHAea::to<double>(spectrum["STOPMIX"].at(ie,je)[2]);
      if(!spectrum["SBOTMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
             if(spectrum["SBOTMIX"][max(ie,je)].is_data_line()) result.sbot_mix[ie][je]=SLHAea::to<double>(spectrum["SBOTMIX"].at(ie,je)[2]);
      if(!spectrum["STAUMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
             if(spectrum["STAUMIX"][max(ie,je)].is_data_line()) result.stau_mix[ie][je]=SLHAea::to<double>(spectrum["STAUMIX"].at(ie,je)[2]);
      if(!spectrum["NMIX"].empty()) for(ie=1;ie<=4;ie++) for(je=1;je<=4;je++)
             if(spectrum["NMIX"][max(ie,je)].is_data_line()) result.neut_mix[ie][je]=SLHAea::to<double>(spectrum["NMIX"].at(ie,je)[2]);
      if(!spectrum["NMNMIX"].empty()) for(ie=1;ie<=5;ie++) for(je=1;je<=5;je++)
             if(spectrum["NMNMIX"][max(ie,je)].is_data_line()) result.neut_mix[ie][je]=SLHAea::to<double>(spectrum["NMNMIX"].at(ie,je)[2]);
      if(!spectrum["UMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
             if(spectrum["UMIX"][max(ie,je)].is_data_line()) result.charg_Umix[ie][je]=SLHAea::to<double>(spectrum["UMIX"].at(ie,je)[2]);
      if(!spectrum["VMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
             if(spectrum["VMIX"][max(ie,je)].is_data_line()) result.charg_Vmix[ie][je]=SLHAea::to<double>(spectrum["VMIX"].at(ie,je)[2]);

      if(!spectrum["GAUGE"].empty())
      {
        if(spectrum["GAUGE"][1].is_data_line()) result.gp_Q=SLHAea::to<double>(spectrum["GAUGE"][1][1]);
        if(spectrum["GAUGE"][2].is_data_line()) result.g2_Q=SLHAea::to<double>(spectrum["GAUGE"][2][1]);
        if(spectrum["GAUGE"][3].is_data_line()) result.g3_Q=SLHAea::to<double>(spectrum["GAUGE"][3][1]);
      }

      if(!spectrum["YU"].empty()) for(ie=1;ie<=3;ie++) if(spectrum["YU"][ie].is_data_line()) result.yut[ie]=SLHAea::to<double>(spectrum["YU"].at(ie,ie)[2]);
      if(!spectrum["YD"].empty()) for(ie=1;ie<=3;ie++) if(spectrum["YD"][ie].is_data_line()) result.yub[ie]=SLHAea::to<double>(spectrum["YD"].at(ie,ie)[2]);
      if(!spectrum["YE"].empty()) for(ie=1;ie<=3;ie++) if(spectrum["YE"][ie].is_data_line()) result.yutau[ie]=SLHAea::to<double>(spectrum["YE"].at(ie,ie)[2]);

      if(!spectrum["HMIX"].empty())
      {
        if(spectrum["HMIX"][1].is_data_line()) result.mu_Q=SLHAea::to<double>(spectrum["HMIX"][1][1]);
        if(spectrum["HMIX"][2].is_data_line()) result.tanb_GUT=SLHAea::to<double>(spectrum["HMIX"][2][1]);
        if(spectrum["HMIX"][3].is_data_line()) result.Higgs_VEV=SLHAea::to<double>(spectrum["HMIX"][3][1]);
        if(spectrum["HMIX"][4].is_data_line()) result.mA2_Q=SLHAea::to<double>(spectrum["HMIX"][4][1]);
      }

      if(!spectrum["NMHMIX"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["NMHMIX"][max(ie,je)].is_data_line()) result.H0_mix[ie][je]=SLHAea::to<double>(spectrum["NMHMIX"].at(ie,je)[2]);

      if(!spectrum["NMAMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
             if(spectrum["NMAMIX"][max(ie,je)].is_data_line()) result.A0_mix[ie][je]=SLHAea::to<double>(spectrum["NMAMIX"].at(ie,je)[2]);

      if(!spectrum["MSOFT"].empty())
      {
        if(!spectrum["MSOFT"].front().empty()) result.MSOFT_Q=SLHAea::to<double>(spectrum["MSOFT"].front().at(3));
        if(spectrum["MSOFT"][1].is_data_line()) result.M1_Q=SLHAea::to<double>(spectrum["MSOFT"][1][1]);
        if(spectrum["MSOFT"][2].is_data_line()) result.M2_Q=SLHAea::to<double>(spectrum["MSOFT"][2][1]);
        if(spectrum["MSOFT"][3].is_data_line()) result.M3_Q=SLHAea::to<double>(spectrum["MSOFT"][3][1]);
        if(spectrum["MSOFT"][21].is_data_line()) result.M2H1_Q=SLHAea::to<double>(spectrum["MSOFT"][21][1]);
        if(spectrum["MSOFT"][22].is_data_line()) result.M2H2_Q=SLHAea::to<double>(spectrum["MSOFT"][22][1]);
        if(spectrum["MSOFT"][31].is_data_line()) result.MeL_Q=SLHAea::to<double>(spectrum["MSOFT"][31][1]);
        if(spectrum["MSOFT"][32].is_data_line()) result.MmuL_Q=SLHAea::to<double>(spectrum["MSOFT"][32][1]);
        if(spectrum["MSOFT"][33].is_data_line()) result.MtauL_Q=SLHAea::to<double>(spectrum["MSOFT"][33][1]);
        if(spectrum["MSOFT"][34].is_data_line()) result.MeR_Q=SLHAea::to<double>(spectrum["MSOFT"][34][1]);
        if(spectrum["MSOFT"][35].is_data_line()) result.MmuR_Q=SLHAea::to<double>(spectrum["MSOFT"][35][1]);
        if(spectrum["MSOFT"][36].is_data_line()) result.MtauR_Q=SLHAea::to<double>(spectrum["MSOFT"][36][1]);
        if(spectrum["MSOFT"][41].is_data_line()) result.MqL1_Q=SLHAea::to<double>(spectrum["MSOFT"][41][1]);
        if(spectrum["MSOFT"][42].is_data_line()) result.MqL2_Q=SLHAea::to<double>(spectrum["MSOFT"][42][1]);
        if(spectrum["MSOFT"][43].is_data_line()) result.MqL3_Q=SLHAea::to<double>(spectrum["MSOFT"][43][1]);
        if(spectrum["MSOFT"][44].is_data_line()) result.MuR_Q=SLHAea::to<double>(spectrum["MSOFT"][44][1]);
        if(spectrum["MSOFT"][45].is_data_line()) result.McR_Q=SLHAea::to<double>(spectrum["MSOFT"][45][1]);
        if(spectrum["MSOFT"][46].is_data_line()) result.MtR_Q=SLHAea::to<double>(spectrum["MSOFT"][46][1]);
        if(spectrum["MSOFT"][47].is_data_line()) result.MdR_Q=SLHAea::to<double>(spectrum["MSOFT"][47][1]);
        if(spectrum["MSOFT"][48].is_data_line()) result.MsR_Q=SLHAea::to<double>(spectrum["MSOFT"][48][1]);
        if(spectrum["MSOFT"][49].is_data_line()) result.MbR_Q=SLHAea::to<double>(spectrum["MSOFT"][49][1]);
      }

      if(!spectrum["AU"].empty())
      {
        if(spectrum["AU"][1].is_data_line()) result.A_u=SLHAea::to<double>(spectrum["AU"].at(1,1)[2]);
        if(spectrum["AU"][2].is_data_line()) result.A_c=SLHAea::to<double>(spectrum["AU"].at(2,2)[2]);
        if(spectrum["AU"][3].is_data_line()) result.A_t=SLHAea::to<double>(spectrum["AU"].at(3,3)[2]);
      }

      if(!spectrum["AD"].empty())
      {
        if(spectrum["AD"][1].is_data_line()) result.A_d=SLHAea::to<double>(spectrum["AD"].at(1,1)[2]);
        if(spectrum["AD"][2].is_data_line()) result.A_s=SLHAea::to<double>(spectrum["AD"].at(2,2)[2]);
        if(spectrum["AD"][3].is_data_line()) result.A_b=SLHAea::to<double>(spectrum["AD"].at(3,3)[2]);
      }

      if(!spectrum["AE"].empty())
      {
        if(spectrum["AE"][1].is_data_line()) result.A_e=SLHAea::to<double>(spectrum["AE"].at(1,1)[2]);
        if(spectrum["AE"][2].is_data_line()) result.A_mu=SLHAea::to<double>(spectrum["AE"].at(2,2)[2]);
        if(spectrum["AE"][3].is_data_line()) result.A_tau=SLHAea::to<double>(spectrum["AE"].at(3,3)[2]);
      }

      if(!spectrum["NMSSMRUN"].empty())
      {
        if(spectrum["NMSSMRUN"][1].is_data_line()) result.lambdaNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][1][1]);
        if(spectrum["NMSSMRUN"][2].is_data_line()) result.kappaNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][2][1]);
        if(spectrum["NMSSMRUN"][3].is_data_line()) result.AlambdaNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][3][1]);
        if(spectrum["NMSSMRUN"][4].is_data_line()) result.AkappaNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][4][1]);
        if(spectrum["NMSSMRUN"][5].is_data_line()) result.lambdaSNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][5][1]);
        if(spectrum["NMSSMRUN"][6].is_data_line()) result.xiFNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][6][1]);
        if(spectrum["NMSSMRUN"][7].is_data_line()) result.xiSNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][7][1]);
        if(spectrum["NMSSMRUN"][8].is_data_line()) result.mupNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][8][1]);
        if(spectrum["NMSSMRUN"][9].is_data_line()) result.mSp2NMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][9][1]);
        if(spectrum["NMSSMRUN"][10].is_data_line()) result.mS2NMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][10][1]);
      }

      if(!spectrum["USQMIX"].empty()) for(ie=1;ie<=6;ie++) for(je=1;je<=6;je++)
             if(spectrum["USQMIX"][max(ie,je)].is_data_line()) result.sU_mix[ie][je]=SLHAea::to<double>(spectrum["USQMIX"].at(ie,je)[2]);
      if(!spectrum["DSQMIX"].empty()) for(ie=1;ie<=6;ie++) for(je=1;je<=6;je++)
             if(spectrum["DSQMIX"][max(ie,je)].is_data_line()) result.sD_mix[ie][je]=SLHAea::to<double>(spectrum["DSQMIX"].at(ie,je)[2]);
      if(!spectrum["SELMIX"].empty()) for(ie=1;ie<=6;ie++) for(je=1;je<=6;je++)
             if(spectrum["SELMIX"][max(ie,je)].is_data_line()) result.sE_mix[ie][je]=SLHAea::to<double>(spectrum["SELMIX"].at(ie,je)[2]);
      if(!spectrum["SNUMIX"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["SNUMIX"][max(ie,je)].is_data_line()) result.sNU_mix[ie][je]=SLHAea::to<double>(spectrum["SNUMIX"].at(ie,je)[2]);

      if(!spectrum["MSQ2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["MSQ2"][max(ie,je)].is_data_line()) result.sCKM_msq2[ie][je]=SLHAea::to<double>(spectrum["MSQ2"].at(ie,je)[2]);
      if(!spectrum["MSL2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["MSL2"][max(ie,je)].is_data_line()) result.sCKM_msl2[ie][je]=SLHAea::to<double>(spectrum["MSL2"].at(ie,je)[2]);
      if(!spectrum["MSD2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["MSD2"][max(ie,je)].is_data_line()) result.sCKM_msd2[ie][je]=SLHAea::to<double>(spectrum["MSD2"].at(ie,je)[2]);
      if(!spectrum["MSU2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["MSU2"][max(ie,je)].is_data_line()) result.sCKM_msu2[ie][je]=SLHAea::to<double>(spectrum["MSU2"].at(ie,je)[2]);
      if(!spectrum["MSE2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["MSE2"][max(ie,je)].is_data_line()) result.sCKM_mse2[ie][je]=SLHAea::to<double>(spectrum["MSE2"].at(ie,je)[2]);

      if(!spectrum["IMVCKM"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["IMVCKM"][max(ie,je)].is_data_line()) result.IMCKM[ie][je]=SLHAea::to<double>(spectrum["IMVCKM"].at(ie,je)[2]);
      if(!spectrum["IMVCKM"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["IMVCKM"][max(ie,je)].is_data_line()) result.IMCKM[ie][je]=SLHAea::to<double>(spectrum["IMVCKM"].at(ie,je)[2]);

      if(!spectrum["UPMNS"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["UPMNS"][max(ie,je)].is_data_line()) result.PMNS_U[ie][je]=SLHAea::to<double>(spectrum["UPMNS"].at(ie,je)[2]);

      if(!spectrum["TU"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["TU"][max(ie,je)].is_data_line()) result.TU[ie][je]=SLHAea::to<double>(spectrum["TU"].at(ie,je)[2]);
      if(!spectrum["TD"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["TD"][max(ie,je)].is_data_line()) result.TD[ie][je]=SLHAea::to<double>(spectrum["TD"].at(ie,je)[2]);
      if(!spectrum["TE"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
             if(spectrum["TE"][max(ie,je)].is_data_line()) result.TE[ie][je]=SLHAea::to<double>(spectrum["TE"].at(ie,je)[2]);





      BEreq::slha_adjust(&result);
      if(flav_debug) cout<<"Finished SI_fill"<<endl;
    }

    // *************************************************
    /// Calculating Br in b-> s gamma decays
    // *************************************************

    void SI_bsgamma(double &result)
    {
      using namespace Pipes::SI_bsgamma;
      if(flav_debug)  cout<<"Starting SI_bsgamma"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      double E_cut=1.6;
      //if(ModelInUse("WC"))      result=BEreq::bsgamma_CONV_WC(&param, byVal(E_cut));
      result=BEreq::bsgamma_CONV(&param, byVal(E_cut));

      if(flav_debug)  printf("BR(b->s gamma)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_bsgamma"<<endl;
    }




    // *************************************************
    /// Calculating Br in Bs->mumu decays for the untaged case
    // *************************************************

    void SI_Bsmumu_untag(double &result)
    {
      using namespace Pipes::SI_Bsmumu_untag;

      if(flav_debug)  cout<<"Starting SI_Bsmumu_untag"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;
      int flav=2;

      if(param.model<0)
      {
        result=0.;
      }
      //      else if(ModelInUse("WC")) result=BEreq::Bsll_untag_CONV_WC(&param, byVal(flav));
      else
      {
        result=BEreq::Bsll_untag_CONV(&param, byVal(flav));
      }

      if(flav_debug) printf("BR(Bs->mumu)_untag=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Bsmumu_untag"<<endl;
    }

    // *************************************************
    /// Calculating Br in Bs->ee decays for the untaged case
    // *************************************************

    void SI_Bsee_untag(double &result)
    {
      using namespace Pipes::SI_Bsee_untag;

      if(flav_debug)  cout<<"Starting SI_Bsee_untag"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;
      int flav=1;

      if(param.model<0)
      {
        result=0.;
      }
      //      else if(ModelInUse("WC")) result=BEreq::Bsll_untag_CONV_WC(&param, byVal(flav));
      else
      {
        result=BEreq::Bsll_untag_CONV(&param, byVal(flav));
      }

      if(flav_debug) printf("BR(Bs->ee)_untag=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Bsee_untag"<<endl;
    }



    // *************************************************
    /// Calculating Br in B0->mumu decays
    // *************************************************

    void SI_Bdmumu(double &result)
    {
      using namespace Pipes::SI_Bdmumu;

      if(flav_debug)  cout<<"Starting SI_Bdmumu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      int flav=2;
      if(param.model<0)
      {
        result=0.;
      }
      else
      {
        result=BEreq::Bdll_CONV(&param, byVal(flav));
      }

      if(flav_debug) printf("BR(Bd->mumu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Bdmumu"<<endl;
    }

    // *************************************************
    /// Calculating Br in B->tau nu_tau decays
    // *************************************************

    void SI_Btaunu(double &result)
    {
      using namespace Pipes::SI_Btaunu;

      if(flav_debug)  cout<<"Starting SI_Btaunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      else result = BEreq::Btaunu(&param);

      if(flav_debug) printf("BR(B->tau nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Btaunu"<<endl;
    }


    // *************************************************
    /// Calculating  B-> D tau nu_tau / B-> D e nu_e decays
    // *************************************************

    void SI_RD(double &result)
    {
      using namespace Pipes::SI_RD;

      if(flav_debug)  cout<<"Starting SI_RD"<<endl;

       struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      else result = BEreq::BDtaunu_BDenu(&param);

      if(flav_debug) printf("BR(B->D tau nu)/BR(B->D e nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_RD"<<endl;
    }

    // *************************************************
    /// Calculating  B->D tau nu_tau / B-> D e nu_e decays
    // *************************************************

    void SI_RDstar(double &result)
    {
      using namespace Pipes::SI_RDstar;

      if(flav_debug)  cout<<"Starting SI_RDstart"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      else result = BEreq::BDstartaunu_BDstarenu(&param);

      if(flav_debug) printf("BR(B->D* tau nu)/BR(B->D* e nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_RD*"<<endl;
    }


    // *************************************************
    /// Calculating B->K mu nu / B-> pi mu nu
    // *************************************************

    void SI_Kmunu_pimunu(double &result)
    {
      using namespace Pipes::SI_Kmunu_pimunu;

      if(flav_debug)  cout<<"Starting SI_Kmunu_pimunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      else result = BEreq::Kmunu_pimunu(&param);

      if(flav_debug) printf("BR(K->mu nu)/BR(pi->mu nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Kmunu_pimunu"<<endl;
    }

    // *************************************************

    void SI_Rmu23(double &result)
    {
      using namespace Pipes::SI_Rmu23;

      if(flav_debug)  cout<<"Starting SI_Rmu23"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      else result = BEreq::Rmu23(&param);

      if(flav_debug) printf("Rmu23=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Rmu23"<<endl;
    }

    // *************************************************
    /// Calculating Br B->D* tau nu
    // *************************************************

    void SI_Dstaunu(double &result)
    {
      using namespace Pipes::SI_Dstaunu;

      if(flav_debug)  cout<<"Starting SI_Dstaunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      else result = BEreq::Dstaunu(&param);

      if(flav_debug) printf("BR(Ds->tau nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Dstaunu"<<endl;
    }

    // *************************************************
    /// Calculating Br B->Ds mu nu
    // *************************************************

    void SI_Dsmunu(double &result)
    {
      using namespace Pipes::SI_Dsmunu;

      if(flav_debug)  cout<<"Starting SI_Dsmunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      else result = BEreq::Dsmunu(&param);

      if(flav_debug) printf("BR(Ds->mu nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Dsmunu"<<endl;
    }

    // *************************************************
    /// Calculating Br B -> D mu nu
    // *************************************************

    void SI_Dmunu(double &result)
    {
      using namespace Pipes::SI_Dmunu;

      if(flav_debug)  cout<<"Starting SI_Dmunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0) result=0.;
      else result = BEreq::Dmunu(&param);

      if(flav_debug) printf("BR(D->mu nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_Dmunu"<<endl;
    }


    // *************************************************
    /// Calculating Br B -> D tau nu
    // *************************************************

    void SI_BDtaunu(double &result)
    {
      using namespace Pipes::SI_BDtaunu;

      if(flav_debug)  cout<<"Starting SI_BDtaunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
        double q2_min_tau_D  = 3.16; // 1.776**2
        double q2_max_tau_D  = 11.6;   // (5.28-1.869)**2
        int gen_tau_D        = 3;
        int charge_tau_D     = 0;// D* is the charged version
        double obs_tau_D[3];
        result=BEreq::BRBDlnu(byVal(gen_tau_D), byVal( charge_tau_D), byVal(q2_min_tau_D), byVal(q2_max_tau_D), byVal(obs_tau_D), &param);
      }

      if(flav_debug) printf("BR(B-> D tau nu )=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_BDtaunu"<<endl;
    }


    // *************************************************
    /// Calculating Br B -> D tau nu
    // *************************************************

    void SI_BDmunu(double &result)
    {
      using namespace Pipes::SI_BDmunu;

      if(flav_debug)  cout<<"Starting SI_BDmunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
        double q2_min_mu_D=  0.012; // 0.105*0.105
        double q2_max_mu_D=  11.6;   // (5.28-1.869)**2
        int gen_mu_D        =2;
        int charge_mu_D     =0;// D* is the charged version
        double obs_mu_D[3];
        result= BEreq::BRBDlnu(byVal(gen_mu_D), byVal( charge_mu_D), byVal(q2_min_mu_D), byVal(q2_max_mu_D), byVal(obs_mu_D), &param);
      }

      if(flav_debug) printf("BR(B->D mu nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_BDmunu"<<endl;
    }


    void SI_BDstartaunu(double &result)
    {
      using namespace Pipes::SI_BDstartaunu;

      if(flav_debug)  cout<<"Starting SI_BDstartaunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
        double q2_min_tau_Dstar = 3.16; // 1.776**2
        double q2_max_tau_Dstar = 10.67;   //(5.279-2.01027)*(5.279-2.01027);
        int gen_tau_Dstar        =3;
        int charge_tau_Dstar     =1;// D* is the charged version
        double obs_tau_Dstar[3];
        result= BEreq::BRBDstarlnu(byVal(gen_tau_Dstar),  byVal( charge_tau_Dstar), byVal(q2_min_tau_Dstar), byVal(q2_max_tau_Dstar), byVal(obs_tau_Dstar), &param);
      }

      if(flav_debug) printf("BR(B->Dstar tau nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_BDstartaunu"<<endl;
    }


    void SI_BDstarmunu(double &result)
    {
      using namespace Pipes::SI_BDstarmunu;

      if(flav_debug)  cout<<"Starting SI_BDstarmunu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
        double q2_min_mu_Dstar = 0.012; // 0.105*0.105
        double q2_max_mu_Dstar = 10.67;   //(5.279-2.01027)*(5.279-2.01027);
        int gen_mu_Dstar        =2;
        int charge_mu_Dstar     =1;// D* is the charged version
        double obs_mu_Dstar[3];
        result=BEreq::BRBDstarlnu(byVal(gen_mu_Dstar),  byVal( charge_mu_Dstar), byVal(q2_min_mu_Dstar), byVal(q2_max_mu_Dstar), byVal(obs_mu_Dstar), &param);
      }

      if(flav_debug) printf("BR(B->Dstar mu nu)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_BDstarmunu"<<endl;
    }



    // *************************************************

    void SI_delta0(double &result)
    {
      using namespace Pipes::SI_delta0;

      if(flav_debug)  cout<<"Starting SI_delta0"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {

	result=BEreq::delta0_CONV(&param);

      }

      if(flav_debug) printf("Delta0(B->K* gamma)=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_delta0"<<endl;
    }

    // *************************************************

    void SI_BRBXsmumu_lowq2(double &result)
    {
      using namespace Pipes::SI_BRBXsmumu_lowq2;

      if(flav_debug)  cout<<"Starting SI_BRBXsmumu_lowq2"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
	result=BEreq::BRBXsmumu_lowq2_CONV(&param);

      }

      if(flav_debug) printf("BR(B->Xs mu mu)_lowq2=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_BRBXsmumu_lowq2"<<endl;
    }

    // *************************************************

    void SI_BRBXsmumu_highq2(double &result)
    {
      using namespace Pipes::SI_BRBXsmumu_highq2;

      if(flav_debug)  cout<<"Starting SI_BRBXsmumu_highq2"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
	result=BEreq::BRBXsmumu_highq2_CONV(&param);

      }

      if(flav_debug) printf("BR(B->Xs mu mu)_highq2=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_BRBXsmumu_highq2"<<endl;
    }
    // *************************************************

    void SI_A_BXsmumu_lowq2(double &result)
    {
      using namespace Pipes::SI_A_BXsmumu_lowq2;

      if(flav_debug)  cout<<"Starting SI_A_BXsmumu_lowq2"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
	result=BEreq::A_BXsmumu_lowq2_CONV(&param);
      }
      if(flav_debug) printf("AFB(B->Xs mu mu)_lowq2=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_A_BXsmumu_lowq2"<<endl;
    }

    // *************************************************

    void SI_A_BXsmumu_highq2(double &result)
    {
      using namespace Pipes::SI_A_BXsmumu_highq2;

      if(flav_debug)  cout<<"Starting SI_A_BXsmumu_highq2"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
	result=BEreq::A_BXsmumu_highq2_CONV(&param);
      }

      if(flav_debug) printf("AFB(B->Xs mu mu)_highq2=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_A_BXsmumu_highq2"<<endl;
    }

    // *************************************************

    void SI_A_BXsmumu_zero(double &result)
    {
      using namespace Pipes::SI_A_BXsmumu_zero;

      if(flav_debug)  cout<<"Starting SI_A_BXsmumu_zero"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
	result=BEreq::A_BXsmumu_zero_CONV(&param);
      }

      if(flav_debug) printf("AFB(B->Xs mu mu)_zero=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_A_BXsmumu_zero"<<endl;
    }

    // *************************************************

    void SI_BRBXstautau_highq2(double &result)
    {
      using namespace Pipes::SI_BRBXstautau_highq2;

      if(flav_debug)  cout<<"Starting SI_BRBXstautau_highq2"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
	result=BEreq::BRBXstautau_highq2_CONV(&param);
      }

      if(flav_debug) printf("BR(B->Xs tau tau)_highq2=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_BRBXstautau_highq2"<<endl;
    }

    // *************************************************

    void SI_A_BXstautau_highq2(double &result)
    {
      using namespace Pipes::SI_A_BXstautau_highq2;

      if(flav_debug)  cout<<"Starting SI_A_BXstautau_highq2"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
        result=BEreq::A_BXstautau_highq2_CONV(&param);
      }

      if(flav_debug) printf("AFB(B->Xs tau tau)_highq2=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_A_BXstautau_highq2"<<endl;
    }


    // *************************************************
    /// Calculating B-> K* mu mu observables in 1.1-2.5 GeV
    // *************************************************

    void SI_BRBKstarmumu_11_25( Flav_KstarMuMu_obs &result)
    {

      using namespace Pipes::SI_BRBKstarmumu_11_25;

      if(flav_debug)  cout<<"Starting SI_BRBKstarmumu_11_25"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      double q2min=1.1;
      double q2max=2.5;
      result=BEreq::BRBKstarmumu_CONV(&param, byVal(q2min), byVal(q2max) );

      if(flav_debug)  cout<<"Finished SI_BRBKstarmumu_11_25"<<endl;

    }


    void SI_BRBKstarmumu_11_25_BR( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_BR;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 BR WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.BR;
    }

    void SI_BRBKstarmumu_11_25_FL( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_FL;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 FL WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.FL;
    }
    void SI_BRBKstarmumu_11_25_S3( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_S3;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 S3 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.S3;
    }
    void SI_BRBKstarmumu_11_25_S4( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_S4;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 S4 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.S4;
    }
    void SI_BRBKstarmumu_11_25_S5( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_S5;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 S5 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.S5;
    }
    void SI_BRBKstarmumu_11_25_AFB( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_AFB;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 AFB WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.AFB;
    }
    void SI_BRBKstarmumu_11_25_S7( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_S7;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 S7 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.S7;
    }
    void SI_BRBKstarmumu_11_25_S8( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_S8;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 S8 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.S8;
    }
    void SI_BRBKstarmumu_11_25_S9( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_11_25_S9;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_11_25 S9 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_11_25;
      result=res.S9;
    }


    // *************************************************
    /// Calculating B-> K* mu mu observables in 2.5-4.0 GeV
    // *************************************************

    void SI_BRBKstarmumu_25_40( Flav_KstarMuMu_obs &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40;

      if(flav_debug)  cout<<"Starting SI_BRBKstarmumu_25_40"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      double q2min=2.5;
      double q2max=4.0;
      result=BEreq::BRBKstarmumu_CONV(&param, byVal(q2min), byVal(q2max) );

      if(flav_debug)  cout<<"Finished SI_BRBKstarmumu_25_40"<<endl;
    }

    void SI_BRBKstarmumu_25_40_BR( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_BR;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 BR WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.BR;
    }
    void SI_BRBKstarmumu_25_40_FL( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_FL;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 FL WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.FL;
    }
    void SI_BRBKstarmumu_25_40_S3( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_S3;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 S3 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.S3;
    }
    void SI_BRBKstarmumu_25_40_S4( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_S4;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 S4 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.S4;
    }
    void SI_BRBKstarmumu_25_40_S5( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_S5;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 S5 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.S5;
    }
    void SI_BRBKstarmumu_25_40_AFB( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_AFB;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 AFB WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.AFB;
    }
    void SI_BRBKstarmumu_25_40_S7( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_S7;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 S7 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.S7;
    }
    void SI_BRBKstarmumu_25_40_S8( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_S8;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 S8 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.S8;
    }
    void SI_BRBKstarmumu_25_40_S9( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_25_40_S9;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_25_40 S9 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_25_40;
      result=res.S9;
    }


    // *************************************************
    /// Calculating B-> K* mu mu observables in 4.0-6.0 GeV
    // *************************************************

    void SI_BRBKstarmumu_40_60( Flav_KstarMuMu_obs &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60;

      if(flav_debug)  cout<<"Starting SI_BRBKstarmumu_25_40"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      double q2min=4.0;
      double q2max=6.0;
      result=BEreq::BRBKstarmumu_CONV(&param, byVal(q2min), byVal(q2max) );

      if(flav_debug)  cout<<"Finished SI_BRBKstarmumu_25_40"<<endl;

    }

    void SI_BRBKstarmumu_40_60_BR( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_BR;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 BR WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.BR;
    }
    void SI_BRBKstarmumu_40_60_FL( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_FL;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 FL WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.FL;
    }
    void SI_BRBKstarmumu_40_60_S3( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_S3;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 S3 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.S3;
    }
    void SI_BRBKstarmumu_40_60_S4( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_S4;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 S4 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.S4;
    }
    void SI_BRBKstarmumu_40_60_S5( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_S5;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 S5 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.S5;
    }
    void SI_BRBKstarmumu_40_60_AFB( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_AFB;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 AFB WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.AFB;
    }
    void SI_BRBKstarmumu_40_60_S7( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_S7;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 S7 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.S7;
    }
    void SI_BRBKstarmumu_40_60_S8( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_S8;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 S8 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.S8;
    }
    void SI_BRBKstarmumu_40_60_S9( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_40_60_S9;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_40_60 S9 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_40_60;
      result=res.S9;
    }


    // *************************************************
    /// Calculating B-> K* mu mu observables in 6.0-8.0 GeV
    // *************************************************

    void SI_BRBKstarmumu_60_80( Flav_KstarMuMu_obs &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80;

      if(flav_debug)  cout<<"Starting SI_BRBKstarmumu_60_80"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      double q2min=6.0;
      double q2max=8.0;
      result=BEreq::BRBKstarmumu_CONV(&param, byVal(q2min), byVal(q2max) );
      if(flav_debug)  cout<<"Finished SI_BRBKstarmumu_60_80"<<endl;
    }
    void SI_BRBKstarmumu_60_80_BR( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_BR;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 BR WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.BR;
    }
    void SI_BRBKstarmumu_60_80_FL( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_FL;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 FL WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.FL;
    }
    void SI_BRBKstarmumu_60_80_S3( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_S3;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 S3 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.S3;
    }
    void SI_BRBKstarmumu_60_80_S4( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_S4;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 S4 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.S4;
    }
    void SI_BRBKstarmumu_60_80_S5( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_S5;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 S5 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.S5;
    }
    void SI_BRBKstarmumu_60_80_AFB( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_AFB;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 AFB WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.AFB;
    }
    void SI_BRBKstarmumu_60_80_S7( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_S7;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 S7 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.S7;
    }
    void SI_BRBKstarmumu_60_80_S8( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_S8;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 S8 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.S8;
    }
    void SI_BRBKstarmumu_60_80_S9( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_60_80_S9;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_60_80 S9 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_60_80;
      result=res.S9;
    }


    // *************************************************
    /// Calculating B-> K* mu mu observables in 15.0-17.0 GeV
    // *************************************************

    void SI_BRBKstarmumu_15_17( Flav_KstarMuMu_obs &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17;

      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 "<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      double q2min=15.0;
      double q2max=17.0;
      result=BEreq::BRBKstarmumu_CONV(&param, byVal(q2min), byVal(q2max) );

      if(flav_debug) cout<<"Finished SI_BRBKstarmumu_15_17 "<<endl;

    }
    void SI_BRBKstarmumu_15_17_BR( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_BR;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 BR WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.BR;
    }
    void SI_BRBKstarmumu_15_17_FL( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_FL;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 FL WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.FL;
    }
    void SI_BRBKstarmumu_15_17_S3( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_S3;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 S3 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.S3;
    }
    void SI_BRBKstarmumu_15_17_S4( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_S4;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 S4 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.S4;
    }
    void SI_BRBKstarmumu_15_17_S5( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_S5;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 S5 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.S5;
    }
    void SI_BRBKstarmumu_15_17_AFB( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_AFB;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 AFB WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.AFB;
    }
    void SI_BRBKstarmumu_15_17_S7( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_S7;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 S7 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.S7;
    }
    void SI_BRBKstarmumu_15_17_S8( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_S8;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 S8 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.S8;
    }
    void SI_BRBKstarmumu_15_17_S9( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_15_17_S9;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_15_17 S9 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_15_17;
      result=res.S9;
    }

    // *************************************************
    /// Calculating B-> K* mu mu observables in 17.0-19.0 GeV
    // *************************************************

    void SI_BRBKstarmumu_17_19( Flav_KstarMuMu_obs &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19;

      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 "<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      double q2min=17.0;
      double q2max=19.0;
      result=BEreq::BRBKstarmumu_CONV(&param, byVal(q2min), byVal(q2max) );

      if(flav_debug) cout<<"Finished SI_BRBKstarmumu_17_19 "<<endl;
    }
    void SI_BRBKstarmumu_17_19_BR( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_BR;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 BR WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.BR;
    }
    void SI_BRBKstarmumu_17_19_FL( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_FL;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 FL WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.FL;
    }
    void SI_BRBKstarmumu_17_19_S3( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_S3;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 S3 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.S3;
    }
    void SI_BRBKstarmumu_17_19_S4( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_S4;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 S4 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.S4;
    }
    void SI_BRBKstarmumu_17_19_S5( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_S5;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 S5 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.S5;
    }
    void SI_BRBKstarmumu_17_19_AFB( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_AFB;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 AFB WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.AFB;
    }
    void SI_BRBKstarmumu_17_19_S7( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_S7;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 S7 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.S7;
    }
    void SI_BRBKstarmumu_17_19_S8( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_S8;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 S8 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.S8;
    }
    void SI_BRBKstarmumu_17_19_S9( double &result)
    {
      using namespace Pipes::SI_BRBKstarmumu_17_19_S9;
      if(flav_debug) cout<<"Starting SI_BRBKstarmumu_17_19 S9 WC"<<endl;
      Flav_KstarMuMu_obs res=*Dep::BRBKstarmumu_17_19;
      result=res.S9;
    }



    // *************************************************
    /// Calculating CP asymmetries in B-> K* mu mu
    // *************************************************

    void SI_AI_BKstarmumu(double &result)
    {
      using namespace Pipes::SI_AI_BKstarmumu;

      if(flav_debug)  cout<<"Starting SI_AI_BKstarmumu"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
        double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];

        double mu_W=2.*param.mass_W;
        double mu_b=param.mass_b_pole;

        BEreq::CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
        BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
        result = BEreq::AI_BKstarmumu(1.,6.,byVal(C0b),byVal(C1b),byVal(C2b),&param,byVal(mu_b));
      }

      if(flav_debug) printf("A_I(B->K* mu mu)_lowq2=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_AI_BKstarmumu"<<endl;
    }

    // *************************************************

    void SI_AI_BKstarmumu_zero(double &result)
    {
      using namespace Pipes::SI_AI_BKstarmumu_zero;

      if(flav_debug)  cout<<"Starting SI_AI_BKstarmumu_zero"<<endl;

      struct parameters param = *Dep::SuperIso_modelinfo;

      if(param.model<0)
      {
        result=0.;
      }
      else
      {
        double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];

        double mu_W=2.*param.mass_W;
        double mu_b=param.mass_b_pole;

        BEreq::CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
        BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
        result = BEreq::AI_BKstarmumu_zero(byVal(C0b),byVal(C1b),byVal(C2b),&param,byVal(mu_b));
      }

      if(flav_debug) printf("A_I(B->K* mu mu)_zero=%.3e\n",result);
      if(flav_debug)  cout<<"Finished SI_AI_BKstarmumu_zero"<<endl;
    }

    // *************************************************

    void FH_FlavorObs(fh_FlavorObs &result)
    {
      using namespace Pipes::FH_FlavorObs;

      if(flav_debug)  cout<<"Starting FH_FlavorObs"<<endl;

      fh_real bsgMSSM;     // B -> Xs gamma in MSSM
      fh_real bsgSM;       // B -> Xs gamma in SM
      fh_real deltaMsMSSM; // delta Ms in MSSM
      fh_real deltaMsSM;   // delta Ms in SM
      fh_real bsmumuMSSM;  // Bs -> mu mu in MSSM
      fh_real bsmumuSM;    // Bs -> mu mu in SM

      int error = 1;
      BEreq::FHFlavour(error, bsgMSSM, bsgSM,
           deltaMsMSSM, deltaMsSM,
           bsmumuMSSM, bsmumuSM);

      fh_FlavorObs FlavorObs;
      FlavorObs.Bsg_MSSM = bsgMSSM;
      FlavorObs.Bsg_SM = bsgSM;
      FlavorObs.deltaMs_MSSM = deltaMsMSSM;
      FlavorObs.deltaMs_SM = deltaMsSM;
      FlavorObs.Bsmumu_MSSM = bsmumuMSSM;
      FlavorObs.Bsmumu_SM = bsmumuSM;

      result = FlavorObs;
      if(flav_debug) cout<<"Finished FH_FlavorObs"<<endl;
    }


    // *************************************************
    /// reading measurements for b->sll
    // *************************************************

    void b2sll_measurements(Flav_measurement_assym &measurement_assym)
    {
      using namespace Pipes::b2sll_measurements;

      static bool first = true;
      static int n_experiments;

      if(flav_debug) cout<<"Starting b2sll_measurements function"<<endl;
      if(flav_debug and first) cout <<"Initialising Flav Reader in b2sll_measurements"<<endl;

      // Read and calculate things based on the observed data only the first time through, as none of it depends on the model parameters.
      if (first)
      {
        measurement_assym.LL_name="b2sll_likelihood";

        Flav_reader red(GAMBIT_DIR  "/FlavBit/data");
        red.debug_mode(flav_debug);

        const vector<string> observablesn = {"FL", "AFB", "S3", "S4", "S5", "S7", "S8", "S9"};
        const vector<string> observablesq = {"1.1-2.5", "2.5-4", "4-6", "6-8", "15-17", "17-19"};
        vector<string> observables;
        for(unsigned i=0;i<observablesq.size();++i)
        {
          for(unsigned j=0;j<observablesn.size();++j)
          {
            observables.push_back(observablesn[j]+"_B0Kstar0mumu_"+observablesq[i]);
          }
        }

        for(unsigned i=0;i<observables.size();++i)
        {
          red.read_yaml_mesurement("flav_data.yaml", observables[i]);
        }

        red.create_global_corr();
        measurement_assym.cov_exp = red.get_cov();
        measurement_assym.value_exp = red.get_exp_value();
        measurement_assym.cov_th = Kstarmumu_theory_errr().get_cov_theory(observables);
        n_experiments = measurement_assym.cov_th.size1();
        measurement_assym.value_th.resize(n_experiments,1);
        measurement_assym.dim=n_experiments;

        // We assert that the experiments and the observables are the same size
        assert(measurement_assym.value_exp.size1() == observables.size());

        // Init out.
        first = false;
      }

      measurement_assym.value_th(0,0)=Dep::BRBKstarmumu_11_25->FL;
      measurement_assym.value_th(1,0)=Dep::BRBKstarmumu_11_25->AFB;
      measurement_assym.value_th(2,0)=Dep::BRBKstarmumu_11_25->S3;
      measurement_assym.value_th(3,0)=Dep::BRBKstarmumu_11_25->S4;
      measurement_assym.value_th(4,0)=Dep::BRBKstarmumu_11_25->S5;
      measurement_assym.value_th(5,0)=Dep::BRBKstarmumu_11_25->S7;
      measurement_assym.value_th(6,0)=Dep::BRBKstarmumu_11_25->S8;
      measurement_assym.value_th(7,0)=Dep::BRBKstarmumu_11_25->S9;

      measurement_assym.value_th(8,0)=Dep::BRBKstarmumu_25_40->FL;
      measurement_assym.value_th(9,0)=Dep::BRBKstarmumu_25_40->AFB;
      measurement_assym.value_th(10,0)=Dep::BRBKstarmumu_25_40->S3;
      measurement_assym.value_th(11,0)=Dep::BRBKstarmumu_25_40->S4;
      measurement_assym.value_th(12,0)=Dep::BRBKstarmumu_25_40->S5;
      measurement_assym.value_th(13,0)=Dep::BRBKstarmumu_25_40->S7;
      measurement_assym.value_th(14,0)=Dep::BRBKstarmumu_25_40->S8;
      measurement_assym.value_th(15,0)=Dep::BRBKstarmumu_25_40->S9;

      measurement_assym.value_th(16,0)=Dep::BRBKstarmumu_40_60->FL;
      measurement_assym.value_th(17,0)=Dep::BRBKstarmumu_40_60->AFB;
      measurement_assym.value_th(18,0)=Dep::BRBKstarmumu_40_60->S3;
      measurement_assym.value_th(19,0)=Dep::BRBKstarmumu_40_60->S4;
      measurement_assym.value_th(20,0)=Dep::BRBKstarmumu_40_60->S5;
      measurement_assym.value_th(21,0)=Dep::BRBKstarmumu_40_60->S7;
      measurement_assym.value_th(22,0)=Dep::BRBKstarmumu_40_60->S8;
      measurement_assym.value_th(23,0)=Dep::BRBKstarmumu_40_60->S9;

      measurement_assym.value_th(24,0)=Dep::BRBKstarmumu_60_80->FL;
      measurement_assym.value_th(25,0)=Dep::BRBKstarmumu_60_80->AFB;
      measurement_assym.value_th(26,0)=Dep::BRBKstarmumu_60_80->S3;
      measurement_assym.value_th(27,0)=Dep::BRBKstarmumu_60_80->S4;
      measurement_assym.value_th(28,0)=Dep::BRBKstarmumu_60_80->S5;
      measurement_assym.value_th(29,0)=Dep::BRBKstarmumu_60_80->S7;
      measurement_assym.value_th(30,0)=Dep::BRBKstarmumu_60_80->S8;
      measurement_assym.value_th(31,0)=Dep::BRBKstarmumu_60_80->S9;

      measurement_assym.value_th(32,0)=Dep::BRBKstarmumu_15_17->FL;
      measurement_assym.value_th(33,0)=Dep::BRBKstarmumu_15_17->AFB;
      measurement_assym.value_th(34,0)=Dep::BRBKstarmumu_15_17->S3;
      measurement_assym.value_th(35,0)=Dep::BRBKstarmumu_15_17->S4;
      measurement_assym.value_th(36,0)=Dep::BRBKstarmumu_15_17->S5;
      measurement_assym.value_th(37,0)=Dep::BRBKstarmumu_15_17->S7;
      measurement_assym.value_th(38,0)=Dep::BRBKstarmumu_15_17->S8;
      measurement_assym.value_th(39,0)=Dep::BRBKstarmumu_15_17->S9;

      measurement_assym.value_th(40,0)=Dep::BRBKstarmumu_17_19->FL;
      measurement_assym.value_th(41,0)=Dep::BRBKstarmumu_17_19->AFB;
      measurement_assym.value_th(42,0)=Dep::BRBKstarmumu_17_19->S3;
      measurement_assym.value_th(43,0)=Dep::BRBKstarmumu_17_19->S4;
      measurement_assym.value_th(44,0)=Dep::BRBKstarmumu_17_19->S5;
      measurement_assym.value_th(45,0)=Dep::BRBKstarmumu_17_19->S7;
      measurement_assym.value_th(46,0)=Dep::BRBKstarmumu_17_19->S8;
      measurement_assym.value_th(47,0)=Dep::BRBKstarmumu_17_19->S9;

      measurement_assym.diff.clear();
      for(int i=0;i<n_experiments;++i)
      {
        measurement_assym.diff.push_back(measurement_assym.value_exp(i,0)-measurement_assym.value_th(i,0));
      }

      if (flav_debug) cout<<"Finished b2sll_measurements function"<<endl;
    }

    // *************************************************
    /// likelihood for b->sll
    // *************************************************


    void b2sll_likelihood(double &result)
    {
      using namespace Pipes::b2sll_likelihood;

      if(flav_debug)  cout<<"Starting b2sll_likelihood"<<endl;

      // Get experimental measurements
      Flav_measurement_assym measurement_assym=*Dep::b2sll_M;

      // Get experimental covariance
      boost::numeric::ublas::matrix<double> cov=measurement_assym.cov_exp;

      // Add theory covariance
      //cov+=measurement_assym.cov_th;

      //calculating a diff
      vector<double> diff;
      diff=measurement_assym.diff;
      //cout<<"Cov matrix:"<<endl;
      //cout<<cov<<endl;
      //cout<<"End cov matrix"<<endl;
      boost::numeric::ublas::matrix<double> cov_inv(measurement_assym.dim, measurement_assym.dim);
      InvertMatrix(cov, cov_inv);

      //cout<<"Cov^-1 matrix:"<<endl;
      //cout<<cov_inv<<endl;
      //cout<<"End cov^-1 matrix"<<endl;

      double Chi2=0;

      for(int i=0; i < measurement_assym.dim; ++i)
      {
        for(int j=0; j<measurement_assym.dim; ++j)
        {
          Chi2+= diff[i] * cov_inv(i,j)*diff[j] ;
        }
      }

      result=-0.5*Chi2;

      if(flav_debug)  cout<<"Finished b2sll_likelihood"<<endl;
      if(flav_debug_LL) cout<<"Likelihood result b2sll_likelihood : "<< result<<endl;

    }

    // *************************************************
    /// measurement for b->s gamma
    // *************************************************
    void b2sgamma_likelihood(double &result)
    {
      using namespace Pipes::b2sgamma_likelihood;

      static bool first = true;
      static double exp_meas, exp_b2sgamma_err, th_err;

      if (flav_debug) cout << "Starting b2sgamma_measurements"<<endl;

      // Read and calculate things based on the observed data only the first time through, as none of it depends on the model parameters.
      if (first)
      {
        Flav_reader red(GAMBIT_DIR  "/FlavBit/data");
        red.debug_mode(flav_debug);
        if (flav_debug) cout<<"Initialised Flav reader in b2sgamma_measurements"<<endl;
        red.read_yaml_mesurement("flav_data.yaml", "BR_b2sgamma");
        red.create_global_corr(); // here we have a single mesurement ;) so let's be sneaky:
        exp_meas = red.get_exp_value()(0,0);
        exp_b2sgamma_err = sqrt(red.get_cov()(0,0));
        th_err=red.get_th_err()(0,0);
        first = false;
      }

      if (flav_debug) cout<<"Experiment: "<<exp_meas<<" "<<exp_b2sgamma_err<<" "<<th_err<<endl;

      // Now we do the stuff that actually depends on the parameters
      double theory_prediction= *Dep::bsgamma;
      double theory_b2sgamma_err=th_err*std::abs(theory_prediction);
      if (flav_debug) cout<<"Theory prediction: "<<theory_prediction<<" +/- "<<theory_b2sgamma_err<<endl;

      /// Option profile_systematics<bool>: Use likelihood version that has been profiled over systematic errors (default false)
      bool profile = runOptions->getValueOrDef<bool>(false, "profile_systematics");

      result = Stats::gaussian_loglikelihood(theory_prediction, exp_meas, theory_b2sgamma_err, exp_b2sgamma_err, profile);
    }


    // *************************************************
    /// measurement for b->mumu
    // *************************************************
    void b2ll_measurements(Flav_measurement_assym &measurement_assym)
    {
      using namespace Pipes::b2ll_measurements;

      static bool first = true;
      static double fractional_theory_bs2mumu_error, fractional_theory_bd2mumu_error;

      if (flav_debug) cout<<"Starting b2ll_measurements"<<endl;

      // Read and calculate things based on the observed data only the first time through, as none of it depends on the model parameters.
      if (first)
      {
        measurement_assym.LL_name="b2ll_likelihood";

        Flav_reader red(GAMBIT_DIR  "/FlavBit/data");
        red.debug_mode(flav_debug);

        if (flav_debug) cout<<"Initiated Flav reader in b2ll_measurements"<<endl;
        red.read_yaml_mesurement("flav_data.yaml", "BR_Bs2mumu");
        red.read_yaml_mesurement("flav_data.yaml", "BR_B02mumu");
        if (flav_debug) cout<<"Finished reading b->mumu data"<<endl;

        red.create_global_corr();

        // SuperIso doesn't provide the errors, so we need to take them from paper
        fractional_theory_bs2mumu_error = red.get_th_err()(0,0);
        fractional_theory_bd2mumu_error = red.get_th_err()(1,0);

        measurement_assym.value_exp=red.get_exp_value();
        measurement_assym.cov_exp=red.get_cov();

        measurement_assym.value_th.resize(2,1);
        measurement_assym.cov_th.resize(2,2);

        measurement_assym.dim=2;

        // Init over and out.
        first = false;
      }

      // Get theory prediction
      measurement_assym.value_th(0,0)=*Dep::Bsmumu_untag;
      measurement_assym.value_th(1,0)=*Dep::Bdmumu;

      // Compute error on theory prediction and populate the covariance matrix
      double theory_bs2mumu_error=*Dep::Bsmumu_untag*fractional_theory_bs2mumu_error;
      double theory_bd2mumu_error=*Dep::Bdmumu*fractional_theory_bd2mumu_error;
      measurement_assym.cov_th(0,0)=theory_bs2mumu_error*theory_bs2mumu_error;
      measurement_assym.cov_th(0,1)=0.;
      measurement_assym.cov_th(1,0)=0.;
      measurement_assym.cov_th(1,1)=theory_bd2mumu_error*theory_bd2mumu_error;

      // Save the differences between theory and experiment
      measurement_assym.diff.clear();
      for(int i=0;i<2;++i)
      {
        measurement_assym.diff.push_back(measurement_assym.value_exp(i,0)-measurement_assym.value_th(i,0));
      }

      if (flav_debug) cout<<"Finished b2ll_measurements"<<endl;

    }


    // *************************************************
    /// likelihood for b->mumu
    // *************************************************

    void b2ll_likelihood(double &result)
    {
      using namespace Pipes::b2ll_likelihood;

      if(flav_debug)  cout<<"Starting b2ll_likelihood"<<endl;
      result=0.;
      if(flav_debug_LL) cout<<"Likelihood before b2ll_likelihood: "<< result<<endl;

      Flav_measurement_assym measurement_assym = *Dep::b2ll_M;

      boost::numeric::ublas::matrix<double> cov=measurement_assym.cov_exp;

      // adding theory and experimenta covariance
      cov+=measurement_assym.cov_th;

      //calculating a diff
      vector<double> diff;
      diff=measurement_assym.diff;

      boost::numeric::ublas::matrix<double> cov_inv(measurement_assym.dim, measurement_assym.dim);
      InvertMatrix(cov, cov_inv);

      // calculating the chi2
      double Chi2=0;

      for(int i=0; i < measurement_assym.dim; ++i)
      {
        for(int j=0; j<measurement_assym.dim; ++j)
        {
          Chi2+= diff[i] * cov_inv(i,j)*diff[j];
        }
      }

      result=-0.5*Chi2;

      //cout<<"Likelihood b->sll: "<<result<<endl;

      if(flav_debug)  cout<<"Finished b2ll_likelihood"<<endl;
      if(flav_debug_LL) cout<<"Likelihood result b2ll_likelihood : "<< result<<endl;

    }

    /*
    // *************************************************
    /// measurement for b->mumu WC
    // *************************************************
    void b2ll_measurements_WC(Flav_measurement_assym &measurement_assym)
    {
      using namespace Pipes::b2ll_measurements_WC;

      if(flav_debug)  cout<<"Starting b2ll_measurements WC"<<endl;

      // experimental measurement
      //Bsmumu

      Flav_reader red(GAMBIT_DIR  "/FlavBit/data");
      red.debug_mode(flav_debug);

      if(flav_debug) cout<<"Initiated Flav reader"<<endl;
      red.read_yaml_mesurement("flav_data.yaml", "BR_Bs2mumu");
      red.read_yaml_mesurement("flav_data.yaml", "BR_B02mumu");
      if (flav_debug) cout<<"Finish reading b->mumu"<<endl;

      red.create_global_corr();

      boost::numeric::ublas::matrix<double> th_err = red.get_th_err();

      double theory_bs2mumu=*Dep::Bsmumu_untag_WC;
      double theory_bd2mumu=*Dep::Bdmumu_WC;

      // Naliza doesn't provide the errors, need to take them from paper
      double theory_bs2mumu_error=theory_bs2mumu*th_err(0,0);
      double theory_bd2mumu_error=theory_bd2mumu*th_err(1,0);
      // comment this out
      cout<<"THeory prediction b->mumu decays= "<<theory_bs2mumu<< "  "<<theory_bd2mumu<<endl;
      cout<<"Theory Errors on b-> mumu decays= "<<theory_bs2mumu_error<<"  "<<theory_bd2mumu_error<<endl;


      // we have everything, correlation

      boost::numeric::ublas::matrix<double> M_cov_th(2,2);
      M_cov_th(0,0)=theory_bs2mumu_error*theory_bs2mumu_error;
      M_cov_th(0,1)=0.;
      M_cov_th(1,0)=0.;
      M_cov_th(1,1)=theory_bd2mumu_error*theory_bd2mumu_error;

      boost::numeric::ublas::matrix<double> M_th(2,1);

      M_th(0,0)=theory_bs2mumu;
      M_th(1,0)=theory_bd2mumu;

      // #########################

      boost::numeric::ublas::matrix<double> M_cov=red.get_cov();
      boost::numeric::ublas::matrix<double> M_exp=red.get_exp_value();

      measurement_assym.LL_name="b2ll_likelihood";

      measurement_assym.value_exp=M_exp;
      measurement_assym.cov_exp=M_cov;

      measurement_assym.value_th=M_th;
      measurement_assym.cov_th=M_cov_th;

      vector<double> diff;

      for(int i=0;i<2;++i)
      {
        diff.push_back(M_exp(i,0)-M_th(i,0));
      }
      measurement_assym.diff=diff;
      measurement_assym.dim=2;

      if(flav_debug)  cout<<"Finished b2ll_measurements"<<endl;

    }

    // *************************************************
    /// likelihood for b->mumu
    // *************************************************


    void b2ll_likelihood_WC(double &result)
    {
      using namespace Pipes::b2ll_likelihood_WC;

      if(flav_debug)  cout<<"Starting b2ll_likelihood"<<endl;
      result=0.;
      if(flav_debug_LL) cout<<"Likelihood before b2ll_likelihood: "<< result<<endl;

      Flav_measurement_assym measurement_assym = *Dep::b2ll_M_WC;

      boost::numeric::ublas::matrix<double> cov=measurement_assym.cov_exp;

      // adding theory and experimenta covariance
      cov+=measurement_assym.cov_th;

      //calculating a diff
      vector<double> diff;
      diff=measurement_assym.diff;

      boost::numeric::ublas::matrix<double> cov_inv(measurement_assym.dim, measurement_assym.dim);
      InvertMatrix(cov, cov_inv);

      // calculating the chi2
      double Chi2=0;

      for(int i=0; i < measurement_assym.dim; ++i)
      {
        for(int j=0; j<measurement_assym.dim; ++j)
        {
          Chi2+= diff[i] * cov_inv(i,j)*diff[j];
        }
      }

      result=-0.5*Chi2;

      if(flav_debug)  cout<<"Finished b2ll_likelihood"<<endl;
      if(flav_debug_LL) cout<<"Likelihood result b2ll_likelihood : "<< result<<endl;

    }

    */


    // *************************************************
    /// measurement Semileptonic B decays
    // *************************************************

    void SL_measurements(Flav_measurement_assym &measurement_assym)
    {
      using namespace Pipes::SL_measurements;

      static bool first = true;
      const int n_experiments=8;
      static double th_err[n_experiments];

      if (flav_debug) cout<<"Starting SL_measurements"<<endl;

      // Read and calculate things based on the observed data only the first time through, as none of it depends on the model parameters.
      if (first)
      {
        measurement_assym.LL_name="SL_likelihood";

        // Read in experimental measuremens
        Flav_reader red(GAMBIT_DIR  "/FlavBit/data");
        red.debug_mode(flav_debug);
        if (flav_debug) cout<<"Initialised Flav reader in SL_measurements"<<endl;

        // B-> tau nu
        red.read_yaml_mesurement("flav_data.yaml", "BR_Btaunu");
        // B-> D tau nu
        red.read_yaml_mesurement("flav_data.yaml", "BR_BDtaunu");
        // B-> D* tau nu
        red.read_yaml_mesurement("flav_data.yaml", "BR_BDstartaunu");
        // B-> D mu nu
        red.read_yaml_mesurement("flav_data.yaml", "BR_BDmunu");
        // B-> D* mu nu
        red.read_yaml_mesurement("flav_data.yaml", "BR_BDstarmunu");
        // Ds-> tau nu
        red.read_yaml_mesurement("flav_data.yaml", "BR_Dstaunu");
        // Ds -> mu nu
        red.read_yaml_mesurement("flav_data.yaml", "BR_Dsmunu");
        // D -> mu nu
        red.read_yaml_mesurement("flav_data.yaml", "BR_Dmunu");

        red.create_global_corr();

        measurement_assym.value_exp=red.get_exp_value();
        measurement_assym.cov_exp=red.get_cov();

        measurement_assym.value_th.resize(n_experiments,1);
        // Set all entries in the covariance matrix explicitly to zero, as we will only write the diagonal ones later.
        measurement_assym.cov_th = boost::numeric::ublas::zero_matrix<double>(n_experiments,n_experiments);
        for (int i = 0; i < n_experiments; ++i) th_err[i] = red.get_th_err()(i,0);

        measurement_assym.dim=n_experiments;

        // Init over.
        first = false;
      }

      // R(D) is calculated assuming isospin symmetry
      double theory[8];
      // B-> tau nu SI
      theory[0] = *Dep::Btaunu;
      // B-> D tau nu
      theory[1] = *Dep::BDtaunu;
      // B-> D* tau nu
      theory[2] = *Dep::BDstartaunu;
      // B-> D mu nu
      theory[3] = *Dep::BDmunu;
      // B-> D* mu nu
      theory[4] = *Dep::BDstarmunu;
      // Ds-> tau nu
      theory[5] = *Dep::Dstaunu;
      // Ds -> mu nu
      theory[6] = *Dep::Dsmunu;
      // D -> mu nu
      theory[7] =*Dep::Dmunu;

      for (int i = 0; i < n_experiments; ++i)
      {
        measurement_assym.value_th(i,0) = theory[i];
        measurement_assym.cov_th(i,i) = th_err[i]*th_err[i]*theory[i]*theory[i];
      }

      measurement_assym.diff.clear();
      for(int i=0;i<n_experiments;++i)
      {
        measurement_assym.diff.push_back(measurement_assym.value_exp(i,0)-measurement_assym.value_th(i,0));
      }

      if (flav_debug) cout<<"Finished SL_measurements"<<endl;

    }

    // *************************************************
    /// likelihood for  Semileptonic B decays
    // *************************************************

    void SL_likelihood(double &result)
    {
      using namespace Pipes::SL_likelihood;

      if(flav_debug)  cout<<"Starting SL_likelihood"<<endl;

      result=0.;
      if(flav_debug_LL) cout<<"Likelihood before SL_likelihood  : "<< result<<endl;

      Flav_measurement_assym measurement_assym = *Dep::SL_M;
      //SL_measurements(measurement_assym);
      // calculating the chi2:
      boost::numeric::ublas::matrix<double> cov=measurement_assym.cov_exp;

      // adding theory and experimental covariance
      cov+=measurement_assym.cov_th;

      //calculating a diff
      vector<double> diff;
      diff=measurement_assym.diff;

      boost::numeric::ublas::matrix<double> cov_inv(measurement_assym.dim, measurement_assym.dim);
      InvertMatrix(cov, cov_inv);

      double Chi2=0;
      for(int i=0; i < measurement_assym.dim; ++i)
      {
        for(int j=0; j<measurement_assym.dim; ++j)
        {
          Chi2+= diff[i] * cov_inv(i,j)*diff[j];
        }
      }

      result=-0.5*Chi2;

      if(flav_debug)  cout<<"Finished SL_likelihood"<<endl;

      if(flav_debug_LL) cout<<"Likelihood result SL_likelihood  : "<< result<<endl;

    }


  }

}
