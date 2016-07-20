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
/// \author Marcin Chrzaszcz
/// \author Nazila Mahmoudi
/// \date 2016 Jul
///
///  *********************************************

#include <sstream>
#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/SuperIso.hpp"
#include "gambit/Backends/backend_types/SuperIso.hpp"


// moved from SuperIso.hpp
BE_INI_FUNCTION{}
END_BE_INI_FUNCTION

// Convenience functions (definitions)
BE_NAMESPACE
{
  #define Nobs_BKsll 30

  Flav_KstarMuMu_obs SI_BRBKstarmumu_CONV(struct parameters *param, double Q2_min, double Q2_max)
  {
    assert( std::abs(Q2_max-Q2_min)>0.01   ); // it's not safe to have so small bins => probably you are doing something wrong

    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];
    double obs[Nobs_BKsll+1];

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_pole;

    const double q2_min=Q2_min;
    const double q2_max=Q2_max;


    CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(2,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);
    /*double BR =*/  BRBKstarll(2,0,byVal(q2_min), byVal(q2_max), byVal(obs),byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));



    // filling results
    Flav_KstarMuMu_obs results;
    results.q2_min=Q2_min;
    results.q2_max=Q2_max;

    results.FL=obs[2];
    double Fl=obs[2];
    results.AFB=obs[1];

    results.S3=obs[5]*(1.-Fl)/2.; // this is ok
    results.S4=obs[17]*sqrt(Fl*(1.-Fl))/(2.);
    results.S5=obs[18]*sqrt(Fl*(1.-Fl));
    results.S7=(-1.)*obs[19]*sqrt(Fl*(1.-Fl));
    results.S8=obs[21]*sqrt(Fl*(1.-Fl))/(2.);
    results.S9=(-1.)*obs[15]*(1.-Fl); // this is ok

    return results;
  }
  //###################################################################################
  double SI_bsgamma_CONV(struct parameters *param, double E_t)
  {
    double result=0.;
    if(param->model<0) result=0.;
    else
      {
	double mu_W=2.*param->mass_W;
	double mu_b=param->mass_b_1S/2.;
	double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
	std::complex<double> CQpb[3];

	CW_calculator(2,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
	C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
	Cprime_calculator(2,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);
	//result = bsgamma(byVal(C0b),byVal(C1b),byVal(C2b),byVal(Cpb),byVal(mu_b),byVal(mu_W),param);
	result = bsgamma_Ecut(byVal(C0b),byVal(C1b),byVal(C2b),byVal(Cpb),byVal(mu_b),byVal(mu_W), E_t, param);
      }
    return result;
  }
  //###################################################################################
  double SI_Bsll_untag_CONV(struct parameters *param, int flav)
  {

    double result = 0.;

    if(flav !=1 && flav != 2) return -10.;

    if(param->model<0) result=0.;
    else
      {
	double mu_W=2.*param->mass_W;
	double mu_b=param->mass_b;
	double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
	std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

	CW_calculator(flav,byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
	C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
	CQ_calculator(flav,byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
	Cprime_calculator(flav,byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);
	
	result = Bsll_untag(flav,byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));
      }
    
    
    return result;
  }



}
END_BE_NAMESPACE
