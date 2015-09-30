//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SuperIso backend
///
///  Note that if you're going to put backend
///  convenience and ini functions in a cpp file,
///  you need to have one cpp file for each renamed
///  version of the backend that you want to employ.
///  You also need to define BACKENDRENAME *before*
///  including the frontend header.

///  *********************************************
///
///  Authors (add name and date if you modify):
///
/// \author Marcin Chrzaszcz
/// \date 2015 Sep
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
  #define Nobs_BKsll 21

  Flav_KstarMuMu_obs SI_BRBKstarmumu_CONV(struct parameters *param, double Q2_min, double Q2_max)
  {
    assert( abs(Q2_max-Q2_min)>0.01   ); // it's not safe to have so small bins, propably you fucked up

    double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];
    double obs[Nobs_BKsll+1];

    double mu_W=2.*param->mass_W;
    double mu_b=param->mass_b_pole;

    cout<<"Got the mass"<<endl;

    const double q2_min=Q2_min;
    const double q2_max=Q2_max;

    CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),param);
    C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),param);
    CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),param);
    Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),param);
    double BR = BRBKstarmumu(byVal(q2_min), byVal(q2_max), byVal(obs),byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),param,byVal(mu_b));


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


}
END_BE_NAMESPACE
