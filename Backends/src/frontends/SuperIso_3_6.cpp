//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SuperIso backend
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
/// \author Nazila Mahmoudi
///         (nazila@cern.ch)
/// \date 2016 Jul
///
/// \author Pat Scott
///          (p.scott@imperial.ac.uk)
/// \date 2017 Mar, Apr
///
/// \author Marcin Chrzaszcz
///         (mchrzasz@cern.ch)
/// \date 2016
/// \date 2017
///
///  *********************************************

#include <sstream>
#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/SuperIso_3_6.hpp"
#include "gambit/Backends/backend_types/SuperIso.hpp"

/// Number of observables the SuperIso returns for B0 -> K*0 mu mu
#define Nobs_BKsll 30


// Initialisation
BE_INI_FUNCTION{}
END_BE_INI_FUNCTION

// Convenience functions (definitions)
BE_NAMESPACE
{

  /// Helper functions to apply offsets to Wilson coefficients
  /// @{
  /// Note that we don't yet consider the impacts of modifying anything
  /// except Re(O_7), Re(O_9), Re(O_10), Q_1 and Q_2.
  void modify_WC(const parameters *param, double C0b[11])
  {
    C0b[7]+=param->Re_DeltaC7;
    C0b[9]+=param->Re_DeltaC9;
    C0b[10]+=param->Re_DeltaC10;
  }
  void modify_WC(const parameters *param, double C0b[11], std::complex<double> CQ0b[3])
  {
    modify_WC(param, C0b);
    CQ0b[1]+=std::complex<double>(param->Re_DeltaCQ1, param->Im_DeltaCQ1);
    CQ0b[2]+=std::complex<double>(param->Re_DeltaCQ2, param->Im_DeltaCQ2);
  }
  /// @}

  /// B0 -> K*0 mu mu observables with Wilson coefficients
  Flav_KstarMuMu_obs BRBKstarmumu_CONV(const parameters *param, double Q2_min, double Q2_max)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");
    assert(std::abs(Q2_max-Q2_min)>0.01); // it's not safe to have such small bins => probably you are doing something wrong

    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];
    double obs[Nobs_BKsll+1];
    Flav_KstarMuMu_obs results;
    results.q2_min=Q2_min;
    results.q2_max=Q2_max;

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_pole;

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    BRBKstarll(2,0,byVal(Q2_min), byVal(Q2_max), byVal(obs),byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));

    // Fill the results
    results.FL=obs[2];
    results.AFB=obs[1];
    results.S3=obs[25];
    results.S4=obs[26];
    results.S5=obs[27];
    results.S7=obs[28];
    results.S8=obs[29];
    results.S9=obs[30];

    return results;
  }

  /// B0 -> K*0 mu mu observables with Wilson coefficients
  Flav_KstarMuMu_obs BRBKstarmumu_CONV_WC(const parameters *param, double Q2_min, double Q2_max)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");
    assert(std::abs(Q2_max-Q2_min)>0.01); // It's not safe to have such small bins => probably you are doing something wrong

    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];
    double obs[Nobs_BKsll+1];
    Flav_KstarMuMu_obs results;
    results.q2_min=Q2_min;
    results.q2_max=Q2_max;

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_pole;

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b, CQ0b);

    BRBKstarll(2,0,byVal(Q2_min),byVal(Q2_max),byVal(obs),byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));

    // Fill the results
    results.FL=obs[2];
    results.AFB=obs[1];
    results.S3=obs[25];
    results.S4=obs[26];
    results.S5=obs[27];
    results.S7=obs[28];
    results.S8=obs[29];
    results.S9=obs[30];

    return results;
  }

  /// Branching fraction of B -> X_s gamma in MSSM
  double bsgamma_CONV(const parameters *param, double E_t)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_1S/2.;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3];

    //cout<<"Checking WC at W scale , C7= "<<C0w[7]+C1w[7]+C2w[7]<<" ,C9= "<<C0w[9]+C1w[9]+C2w[9]<<" ,C10= "<<C0w[10]+C1w[10]+C2w[10]<<endl;
    //cout<<"CHecking that the parameters are filled: WC"<<param->mass_b<<"  "<<param->CKM_lambda<<endl;
    //cout<<"Params WC: "<<param->mtmt<<" "<<mu_W<<"  "<<param->mass_top_pole<<" "<<param->mass_b<<endl;

    //cout<<"Cross check NO WC: "<<param->alphas_MZ<<" "<<param->mass_Z<<" "<<param->mass_b<<" "<<param->mass_top_pole<<" "<<param->mass_mu<<" "<<param->mass_s<<" "<<mu_W<<endl;

    //cout<<"Cross check NO WC mu_b: "<<mu_b<<endl;
    //cout<<"Cross check NO WC: "<<param->mass_d<<" "<<param->mass_u<<" "<<param->mass_s<<" "<<param->mass_c<<" "<<param->mass_t<<" "<<param->mass_e<<" "<<param->mass_nue<<" "<<param->mass_mu<<" "<<param->mass_num<<" "<<param->mass_tau<<" "<<param->mass_nut<<endl;

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    //cout<<"Checking NO WC at W scale, C7= "<<C0w[7]+C1w[7]+C2w[7]<<" ,C9= "<<C0w[9]+C1w[9]+C2w[9]<<" ,C10= "<<C0w[10]+C1w[10]+C2w[10]<<endl;
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    //cout<<"Checking NO WC at B scale, C7= "<<C0b[7]+C1b[7]+C2b[7]<<" ,C9= "<<C0b[9]+C1b[9]+C2b[9]<<" ,C10= "<<C0b[10]+C1b[10]+C2b[10]<<endl;
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    //result = bsgamma(byVal(C0b),byVal(C1b),byVal(C2b),byVal(Cpb),byVal(mu_b),byVal(mu_W),param);
    return bsgamma_Ecut(byVal(C0b),byVal(C1b),byVal(C2b),byVal(Cpb),byVal(mu_b),byVal(mu_W), E_t, param);

  }

  /// Branching fraction of B -> X_s gamma with Wilson coefficients
  double bsgamma_CONV_WC(const parameters *param, double E_t)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_1S/2.;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3];

    //superIso doesn't handle imaginary part of WC
    //cout<<"Cross check WC: "<<param->alphas_MZ<<" "<<param->mass_Z<<" "<<param->mass_b<<" "<<param->mass_top_pole<<" "<<param->mass_mu<<" "<<param->mass_s<<" "<<mu_W<<endl;

    //cout<<"Cross check WC mu_b: "<<mu_b<<endl;
    //cout<<"Cross check NO WC: "<<param->mass_d<<" "<<param->mass_u<<" "<<param->mass_s<<" "<<param->mass_c<<" "<<param->mass_t<<" "<<param->mass_e<<" "<<param->mass_nue<<" "<<param->mass_mu<<" "<<param->mass_num<<" "<<param->mass_tau<<" "<<param->mass_nut<<endl;

    //cout<<"Checking WC at W scale , C7= "<<C0w[7]+C1w[7]+C2w[7]<<" ,C9= "<<C0w[9]+C1w[9]+C2w[9]<<" ,C10= "<<C0w[10]+C1w[10]+C2w[10]<<endl;
    //cout<<"CHecking that the parameters are filled: WC"<<param->mass_b<<"  "<<param->CKM_lambda<<endl;
    //cout<<"Params WC: "<<param->mtmt<<" "<<mu_W<<"  "<<param->mass_top_pole<<" "<<param->mass_b<<endl;

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param); // since param.SM=1 we calcule WC at SM
    //cout<<"Checking WC at W scale, C7= "<<C0w[7]+C1w[7]+C2w[7]<<" ,C9= "<<C0w[9]+C1w[9]+C2w[9]<<" ,C10= "<<C0w[10]+C1w[10]+C2w[10]<<endl;
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param); // calculating them at mu_b mass
    //cout<<"Checking WC at B scale, C7= "<<C0b[7]+C1b[7]+C2b[7]<<" ,C9= "<<C0b[9]+C1b[9]+C2b[9]<<" ,C10= "<<C0b[10]+C1b[10]+C2b[10]<<endl;
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b);

    //      cout<<"E_t: "<<E_t<<endl;
    //cout<<"CKM WC: "<<param->BR_BXclnu_exp<<param->Vts<< param->Vtb<< param->Vcb<<endl;
    //result = bsgamma(byVal(C0b),byVal(C1b),byVal(C2b),byVal(Cpb),byVal(mu_b),byVal(mu_W),param);

    return bsgamma_Ecut(byVal(C0b),byVal(C1b),byVal(C2b),byVal(Cpb),byVal(mu_b),byVal(mu_W), E_t, param);

  }

  /// CP-averaged branching fraction of B0_s -> l+ l- in MSSM
  double Bsll_untag_CONV(const parameters *param, int flav)
  {
    if (flav < 1 || flav > 3) backend_error().raise(LOCAL_INFO, "Unrecognised flavour!");
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

    CW_calculator(flav,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(flav,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(flav,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return Bsll_untag(flav,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  /// CP-averaged branching fraction of B0_s -> l+ l- with Wilson coefficients
  double Bsll_untag_CONV_WC(const parameters *param, int flav)
  {
    if (flav < 1 || flav > 3) backend_error().raise(LOCAL_INFO, "Unrecognised flavour!");
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

    CW_calculator(flav,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(flav,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(flav,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b, CQ0b);

    return Bsll_untag(flav,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param ,byVal(mu_b));

  }

  /// Branching fraction of B0 -> l+ l- in MSSM
  double Bll_CONV(const parameters *param, int flav)
  {
    if (flav < 1 || flav > 3) backend_error().raise(LOCAL_INFO, "Unrecognised flavour!");
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];
    std::complex<double> CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);

    return Bll(byVal(flav),(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),param,byVal(mu_b));
  }

  /// Branching fraction of B0 -> l+ l- with Wilson coefficients
  double Bll_CONV_WC(const parameters *param, int flav)
  {
    if (flav < 1 || flav > 3) backend_error().raise(LOCAL_INFO, "Unrecognised flavour!");
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];
    std::complex<double> CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b, CQ0b);

    cout<<"CKM WC: "<<param->BR_BXclnu_exp<<param->Vts<< param->Vtb<< param->Vcb<<endl;

    return Bll(byVal(flav),(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),param,byVal(mu_b));
  }

  double BRBXsmumu_lowq2_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return BRBXsll_lowq2(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double BRBXsmumu_lowq2_CONV_WC(const parameters *param)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b, CQ0b);

    return BRBXsll_lowq2(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double BRBXsmumu_highq2_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return BRBXsll_highq2(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double BRBXsmumu_highq2_CONV_WC(const parameters *param)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b, CQ0b);

    return BRBXsll_highq2(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double A_BXsmumu_lowq2_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return A_BXsll_lowq2(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double A_BXsmumu_lowq2_CONV_WC(const parameters *param)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b);

    return A_BXsll_lowq2(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double A_BXsmumu_highq2_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return A_BXsll_highq2(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double A_BXsmumu_highq2_CONV_WC(const parameters *param)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b);

    return A_BXsll_highq2(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double A_BXsmumu_zero_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return A_BXsll_zero(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double A_BXsmumu_zero_CONV_WC(const parameters *param)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b);

    return A_BXsll_zero(2,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double BRBXstautau_highq2_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return BRBXsll_highq2(3,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double BRBXstautau_highq2_CONV_WC(const parameters *param)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3];
    std::complex<double> CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b);

    return BRBXsll_highq2(3,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double A_BXstautau_highq2_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(3,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(3,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(3,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return A_BXsll_highq2(3,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double A_BXstautau_highq2_CONV_WC(const parameters *param)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b;
    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
    std::complex<double> CQpb[3],CQ0b[3],CQ1b[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b);

    return A_BXsll_highq2(3,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
  }

  double delta0_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_1S/2.;

    double lambda_h=0.5;
    double mu_spec=sqrt(lambda_h*param->mass_b);

    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C0spec[11],C1spec[11],Cpb[11];
    std::complex<double> CQpb[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(mu_b),param);
    C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0spec),byVal(C1spec),byVal(mu_spec),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    return delta0(byVal(C0b),byVal(C0spec),byVal(C1b),byVal(C1spec),byVal(Cpb),param,byVal(mu_b),byVal(mu_spec),byVal(lambda_h));
  }

  double delta0_CONV_WC(const parameters *param)
  {
    if (param->model != -3 or param->SM != 1) backend_error().raise(LOCAL_INFO, "WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_1S/2.;

    double lambda_h=0.5;
    double mu_spec=sqrt(lambda_h*param->mass_b);

    double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C0spec[11],C1spec[11],Cpb[11];
    std::complex<double> CQpb[3];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(mu_b),param);
    C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0spec),byVal(C1spec),byVal(mu_spec),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);

    // Apply any requested offsets to the Wilson coefficients
    modify_WC(param, C0b);

    return delta0(byVal(C0b),byVal(C0spec),byVal(C1b),byVal(C1spec),byVal(Cpb),param,byVal(mu_b),byVal(mu_spec),byVal(lambda_h));
  }

  double SI_AI_BKstarmumu_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_1S/2.;
    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);

    return AI_BKstarmumu(1.,6.,byVal(C0b),byVal(C1b),byVal(C2b),param,byVal(mu_b));
  }

  double SI_AI_BKstarmumu_zero_CONV(const parameters *param)
  {
    if (param->model < 0) backend_error().raise(LOCAL_INFO, "SUSY/non-WC convenience function called with wrong model.");

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_1S/2.;
    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];

    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b), param);

    return AI_BKstarmumu_zero(byVal(C0b),byVal(C1b),byVal(C2b),param,byVal(mu_b));
  }

}
END_BE_NAMESPACE
