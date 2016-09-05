//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Declarations of statistical utilities.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Aug
///
///  *********************************************

#include "gambit/Utils/util_types.hpp" 


namespace Gambit
{
  
  namespace Stats
  {

    /// Use a detection to compute a simple chi-square-like log likelihood, for the case when obs is Gaussian distributed.
    double gaussian_loglikelihood(double theory, double obs, double theoryerr, double obserr, bool profile_systematics);

    /// Use a detection to compute a simple chi-square-like log likelihood, for the case when obs is log-normal distributed.
    /// Version that takes absolute errors.
    double lognormal_loglikelihood(double theory, double obs, double theoryerr, double obserr, bool profile_systematics);

    /// Use a detection to compute a simple chi-square-like log likelihood, for the case when obs is log-normal distributed.
    /// Version that takes fractional (relative) errors.
    double lognormal_loglikelihood_relerror(double theory, double obs, double reltheoryerr, double relobserr, bool profile_systematics);
    
    /// Use a detection to compute a gaussian log-likelihood for an upper limit
    double gaussian_upper_limit(double theory, double obs, double theoryerr, double obserr, bool profile_systematics);

    /// Use a detection to compute a gaussian log-likelihood for a lower limit
    double gaussian_lower_limit(double theory, double obs, double theoryerr, double obserr, bool profile_systematics);

  }

}
