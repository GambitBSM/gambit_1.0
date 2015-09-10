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

    /// Compute a simple chi-square likelihood (returns log likelihood)
    double gaussian_loglikelihood(double theory, double obs, double theoryerr, double obserr);

    /// Use a detection to compute a log-likelihood for an upper limit
    double detection_as_upper_limit(double theory, double obs, double theoryerr, double obserr, const str& limit_method="simple");

    /// Use a detection to compute a log-likelihood for a lower limit
    double detection_as_lower_limit(double theory, double obs, double theoryerr, double obserr, const str& limit_method="simple");

    /// Compute a simple chi-square likelihood, implemented as an upper limit (returns log likelihood)
    double upper_half_gaussian_loglikelihood(double theory, double obs, double theoryerr, double obserr);

    /// Compute a simple chi-square likelihood, implemented as a lower limit (returns log likelihood)
    double lower_half_gaussian_loglikelihood(double theory, double obs, double theoryerr, double obserr);

    /// Compute a chi-square likelihood, implemented as an upper limit, profiled over a 
    /// Gaussian theoretical error (returns log likelihood)
    double profiled_upper_half_gaussian(double theory, double obs, double theoryerr, double obserr);

    /// Compute a chi-square likelihood, implemented as a lower limit, profiled over a 
    /// Gaussian theoretical error (returns log likelihood)
    double profiled_lower_half_gaussian(double theory, double obs, double theoryerr, double obserr);
    
    /// Compute a chi-square likelihood, implemented as an upper limit, marginalised 
    /// over a Gaussian theoretical error (returns log likelihood)
    double marginalised_upper_half_gaussian(double theory, double obs, double theoryerr, double obserr);
 
    /// Compute a chi-square likelihood, implemented as a lower limit, marginalised
    /// over a Gaussian theoretical error (returns log likelihood)
    double marginalised_lower_half_gaussian(double theory, double obs, double theoryerr, double obserr);

  }

}
