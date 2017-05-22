//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  Vacuum stability functions
///
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author James McKay
///           (j.mckay14@imperial.ac.uk)
///
///  \date 2015 Nov - 2016 Mar
///
///  *********************************************

#include <string>
#include <sstream>

#include <gsl/gsl_math.h>
#include <gsl/gsl_min.h>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/Elements/spectrum.hpp"
#include "gambit/Utils/stream_overloads.hpp"
#include "gambit/Utils/util_macros.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/SpecBit_helpers.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"

#include "gambit/SpecBit/model_files_and_boxes.hpp" // #includes lots of flexiblesusy headers and defines interface classes

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/src/ew_input.hpp"
#include "flexiblesusy/src/lowe.h" // From softsusy; used by flexiblesusy
#include "flexiblesusy/src/numerics2.hpp"
#include "flexiblesusy/src/two_loop_corrections.hpp"



// Switch for debug mode
//#define SPECBIT_DEBUG

namespace Gambit
{
  
  namespace SpecBit
  {
    using namespace LogTags;
    using namespace flexiblesusy;
    
    
    void swap(double &a, double &b, double &c, const double d) // subroutine used to rearrange points in minimisation algorithm
    {
      a=b;
      b=c;
      c=d;
    }
    
    bool check_perturb_to_min_lambda(const Spectrum& spec,double scale,int pts)
    {
      using namespace flexiblesusy;
      using namespace Gambit;
      using namespace SpecBit;
      
      std::unique_ptr<SubSpectrum> SingletDM = spec.clone_HE();
      double step = log10(scale) / pts;
      double runto;
      
      double ul=3.5449077018110318; // sqrt(4*Pi), maximum value for perturbative couplings, same perturbativity bound that FlexibleSUSY uses
      for (int i=0;i<pts;i++)
      {
        runto = pow(10,step*float(i+1.0)); // scale to run spectrum to
        if (runto<100){runto=200.0;}// avoid running to low scales
        
        
        SingletDM -> RunToScale(runto);
        
        static const SpectrumContents::SingletDM contents;
        static const std::vector<SpectrumParameter> required_parameters = contents.all_parameters_with_tag(Par::dimensionless);
        
        for(std::vector<SpectrumParameter>::const_iterator it = required_parameters.begin();
            it != required_parameters.end(); ++it)
        {
          const Par::Tags        tag   = it->tag();
          const std::string      name  = it->name();
          const std::vector<int> shape = it->shape();
          std::ostringstream label;
          label << name <<" "<< Par::toString.at(tag);
          if(shape.size()==1 and shape[0]==1)
          {
            if (abs(SingletDM->get(tag,name))>ul)
            {
              return false;
            }
          }
          
          else if(shape.size()==1 and shape[0]>1)
          {
            for(int k = 1; k<=shape[0]; ++k) {
              if (abs(SingletDM->get(tag,name,k))>ul)
              {
                return false;
              }
              
            }
          }
          else if(shape.size()==2)
          {
            for(int k = 1; k<=shape[0]; ++k) {
              for(int j = 1; j<=shape[0]; ++j) {
                if (abs(SingletDM->get(tag,name,k,j))>ul)
                {
                  return false;
                }
              }
            }
          }
        }
      }
      
      return true;
    }
    
    double run_lambda(double scale ,  void *params)
    {
      using namespace flexiblesusy;
      using namespace Gambit;
      using namespace SpecBit;
      std::unique_ptr<SubSpectrum>* spec=(std::unique_ptr<SubSpectrum>* )params;
      
      if (scale>1.0e21){scale=1.0e21;}// avoid running to high scales
      
      if (scale<1.0){scale=1.0;}// avoid running to very low scales
      
      // clone the original spectrum incase the running takes the spectrum
      // into a non-perturbative scale and thus the spectrum is no longer reliable
      
      (*spec)->RunToScale(scale);
      
      return (*spec)->get(Par::dimensionless,"lambda_h");
    }
    
    void find_min_lambda(dbl_dbl_bool& vs_tuple)
    {
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::find_min_lambda;
      const Options& runOptions=*myPipe::runOptions;
      double high_energy_limit = runOptions.getValueOrDef<double>(1.22e19,"set_high_scale");
      int check_perturb_pts = runOptions.getValueOrDef<double>(10,"check_perturb_pts");
      using namespace Gambit;
      using namespace SpecBit;
      
      const Spectrum& fullspectrum = *myPipe::Dep::SingletDM_spectrum;
      std::unique_ptr<SubSpectrum> speccloned = fullspectrum.clone_HE();
      
      // three scales at which we choose to run the quartic coupling up to, and then use a Lagrange interpolating polynomial
      // to get an estimate for the location of the minimum, this is an efficient way to narrow down over a huge energy range
      double u_1 = 1, u_2 = 5, u_3 = 12;
      double lambda_1,lambda_2,lambda_3;
      double lambda_min = 0;
      
      
      bool min_exists = 1;// check if gradient is positive at electroweak scale
      if ( run_lambda(101.0, &speccloned ) > run_lambda(100.0, &speccloned ) )
      {
        // gradient is positive, the minimum is less than electroweak scale so
        // lambda_h must be monotonally increasing
        min_exists = 0;
        lambda_min = run_lambda(100.0,&speccloned);
      }
      
      double mu_min = 0;
      if (min_exists)
      {
        // fit parabola (in log space) to the 3 trial points and use this to estimate the minimum
        for (int i=1;i<3;i++)
        {
          
          lambda_1 = run_lambda(pow(10,u_1),&speccloned);
          lambda_2 = run_lambda(pow(10,u_2),&speccloned);
          lambda_3 = run_lambda(pow(10,u_3),&speccloned);
 
          double min_u= (lambda_1*(pow(u_2,2)-pow(u_3,2))  - lambda_2*(pow(u_1,2)-pow(u_3,2)) + lambda_3*(pow(u_1,2)-pow(u_2,2)));
          double denominator = ( lambda_1*(u_2-u_3)+ lambda_2*(u_3-u_1)  +lambda_3*(u_1-u_2));
          
          min_u=0.5*(min_u/denominator);
          u_1=min_u-2/(pow(float(i),0.01));
          u_2=min_u;
          u_3=min_u+2/(pow(float(i),0.01));
          
        }
        // run downhill minimization routine to find exact minimum
        double mu_lower = pow(10,u_1);
        double mu_upper = pow(10,u_3);
        mu_min = pow(10,u_2);
        
        gsl_function F;
        F.function = &run_lambda;
        F.params = &speccloned;
        
        int status;
        int iteration = 0, max_iteration = 1000;
        
        const gsl_min_fminimizer_type *T;
        gsl_min_fminimizer *s;
        
        T = gsl_min_fminimizer_brent;
        s = gsl_min_fminimizer_alloc (T);
        gsl_min_fminimizer_set (s, &F, mu_min, mu_lower, mu_upper);
 
        do
        {
          iteration++;
          status = gsl_min_fminimizer_iterate (s);
          
          mu_min = gsl_min_fminimizer_x_minimum (s);
          mu_lower = gsl_min_fminimizer_x_lower (s);
          mu_upper = gsl_min_fminimizer_x_upper (s);
          
          status = gsl_min_test_interval (mu_lower, mu_upper, 0.0001, 0.0001);
        }
        while (status == GSL_CONTINUE && iteration < max_iteration);
        
        if (iteration == max_iteration)
        {
          SpecBit_error().raise(LOCAL_INFO,"The minimum of the quartic coupling could not be found");
        }
        
        gsl_min_fminimizer_free (s);
        
        lambda_min = run_lambda(mu_min,&speccloned);
        
      }
      
#ifdef SPECBIT_DEBUG
      std::cout<< "minimum value of quartic coupling is   "<< lambda_min << " at " << mu_min <<" GeV"<<std::endl;
#endif
      
      double lifetime,LB;
      if (lambda_min<0) // second minimum exists, now determine stability and lifetime
      {
        LB=mu_min;
#ifdef SPECBIT_DEBUG
        double p=exp(4*140-26/(abs(0.5*lambda_min)))*pow(LB/(1.2e19),4); // compute tunnelling rate
        if (p>1)
        {
          cout<< "vacuum is unstable" << endl;
        }
        else
        {
          cout<< "vacuum is metastable" << endl;
        }
#endif
        double pi2_8_over3 = 8.* pow ( pi , 2 ) / 3.;
        lifetime=1/(exp(3*140-pi2_8_over3/(abs(0.5*lambda_min)))*pow(1/(1.2e19),3)*pow(LB,4));
      }
      else // quartic coupling always positive, set output to default values
      {
        LB=high_energy_limit;
        lifetime=1e300;
#ifdef SPECBIT_DEBUG
        cout << "vacuum is absolutely stable" << endl;
#endif
        // vacuum is stable
      }
      // now do a check on the perturbativity of the couplings up to this scale
      bool perturbative=check_perturb_to_min_lambda(fullspectrum,LB,check_perturb_pts);
      double perturb=float(!perturbative);
#ifdef SPECBIT_DEBUG
      cout << "perturbativity checked up to " << LB << " result = " << perturbative << endl;
#endif
      
      vs_tuple = dbl_dbl_bool(lifetime,LB,perturb);
    }
    
    
    // the functions below are used to extract the desired outputs from find_min_lambda
    
    // gives expected lifetime in units of years, if stable give extremly large number (1e300)
    void get_expected_lifetime(double &lifetime)
    {
      namespace myPipe = Pipes::get_expected_lifetime;//
      using namespace Gambit;
      dbl_dbl_bool vs_tuple =  *myPipe::Dep::vacuum_stability;
      
      if (vs_tuple.first<1e300)
      {
        lifetime=vs_tuple.first*(6.5821195e-16)/(31536000);
      }
      else
      {
        lifetime=1e300;
      }
    }
    
    // log of the likelihood
    void get_likelihood(double &result)
    {
      namespace myPipe = Pipes::get_likelihood;
      using namespace Gambit;
      dbl_dbl_bool vs_tuple =  *myPipe::Dep::vacuum_stability;
      result=((- ( 1 / ( vs_tuple.first ) ) * exp(140) * (1/ (1.2e19) ) )  );
    }
    
    
    // returns lnlike, very negative if pertub is 1, 0 otherwise
    void get_check_perturb_min_lambda(double &result)
    {
      namespace myPipe = Pipes::get_check_perturb_min_lambda;
      using namespace Gambit;
      dbl_dbl_bool vs_tuple =  *myPipe::Dep::vacuum_stability;
      
      if (vs_tuple.flag)
      {
        invalid_point().raise("Couplings are non-perturbative before scale of vacuum instability");
        result = - 1e100;
      }
      else
      {
        result = 0;
      }
    }
    
    
    
  } // end namespace SpecBit
} // end namespace Gambit

