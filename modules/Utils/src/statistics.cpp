//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of statistical utilities.
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

#include "gambit/Utils/statistics.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"


namespace Gambit
{
  
  namespace Stats
  {

    /// Use a detection to compute a simple chi-square likelihood (returns log likelihood)
    double gaussian_loglikelihood(double theory, double obs, double theoryerr, double obserr)
    {
      double errsq = theoryerr*theoryerr + obserr*obserr;
      return -0.5*pow(theory-obs,2)/errsq;
    }

    /// Use a detection to compute a log-likelihood for an upper limit
    double detection_as_upper_limit(double theory, double obs, double theoryerr, double obserr, const str& limit_method)
    {
      if (limit_method == "marginalised")
      {
        return marginalised_upper_half_gaussian(theory, obs, theoryerr, obserr);
      }
      else if (limit_method == "profiled")
      {
        return profiled_upper_half_gaussian(theory, obs, theoryerr, obserr);
      }
      else if (limit_method == "simple")
      {
        return upper_half_gaussian_loglikelihood(theory, obs, theoryerr, obserr);
      }
      else
      {
        utils_error().raise(LOCAL_INFO,"Unrecognised limit method option: "+limit_method);
      }
      return 0;
    }

    /// Use a detection to compute a log-likelihood for a lower limit
    double detection_as_lower_limit(double theory, double obs, double theoryerr, double obserr, const str& limit_method)
    {   
      if (limit_method == "marginalised")
      {
        return marginalised_lower_half_gaussian(theory, obs, theoryerr, obserr);
      }
      else if (limit_method == "profiled")
      {
        return profiled_lower_half_gaussian(theory, obs, theoryerr, obserr);
      }
      else if (limit_method == "simple")
      {
        return lower_half_gaussian_loglikelihood(theory, obs, theoryerr, obserr);
      }
      else
      {
        utils_error().raise(LOCAL_INFO,"Unrecognised limit method option: "+limit_method);
      }
      return 0;
    }

    /// Compute a simple chi-square likelihood, implemented as an upper limit (returns log likelihood)
    double upper_half_gaussian_loglikelihood(double theory, double obs, double theoryerr, double obserr)
    {
      if (theory < obs) return 0.0;
      return gaussian_loglikelihood(theory, obs, theoryerr, obserr);
    }

    /// Compute a simple chi-square likelihood, implemented as a lower limit (returns log likelihood)
    double lower_half_gaussian_loglikelihood(double theory, double obs, double theoryerr, double obserr)
    {
      if (theory > obs) return 0.0;
      return gaussian_loglikelihood(theory, obs, theoryerr, obserr);
    }

    /// Compute a chi-square likelihood, implemented as an upper limit, profiled over a Gaussian theoretical error (returns log likelihood)
    double profiled_upper_half_gaussian(double theory, double obs, double theoryerr, double obserr)
    {
      // FIXME http://iopscience.iop.org/1126-6708/2006/05/002/pdf/1126-6708_2006_05_002.pdf equivalent of Eq 3.5 for maximising over \hat\theta instead of integrating
      return 0*(theory+obs+theoryerr+obserr);
    }

    /// Compute a chi-square likelihood, implemented as a lower limit, profiled over a Gaussian theoretical error (returns log likelihood)
    double profiled_lower_half_gaussian(double theory, double obs, double theoryerr, double obserr)
    {
      // FIXME http://iopscience.iop.org/1126-6708/2006/05/002/pdf/1126-6708_2006_05_002.pdf equivalent of Eq 3.5 for maximising over \hat\theta instead of integrating
      return 0*(theory+obs+theoryerr+obserr);
    }
    
    /// Compute a chi-square likelihood, implemented as an upper limit, marginalised over a Gaussian theoretical error (returns log likelihood)
    double marginalised_upper_half_gaussian(double theory, double obs, double theoryerr, double obserr)
    {
      // FIXME http://iopscience.iop.org/1126-6708/2006/05/002/pdf/1126-6708_2006_05_002.pdf Eq 3.5 (needs to be verified)
      return 0*(theory+obs+theoryerr+obserr);
    }
 
    /// Compute a chi-square likelihood, implemented as a lower limit, marginalised over a Gaussian theoretical error (returns log likelihood)
    double marginalised_lower_half_gaussian(double theory, double obs, double theoryerr, double obserr)
    {
      // FIXME http://iopscience.iop.org/1126-6708/2006/05/002/pdf/1126-6708_2006_05_002.pdf Eq 3.5 (needs to be verified)
      return 0*(theory+obs+theoryerr+obserr);
    }

    //Still to be implemented:
    //gaussian_upper_limit
    //gaussian_lower_limit
    //profiled_gaussian_upper_limit
    //profiled_gaussian_lower_limit
    //marginalised_gaussian_upper_limit
    //marginalised_gaussian_lower_limit

  }

}
