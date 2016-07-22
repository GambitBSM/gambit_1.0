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
#define SPECBIT_DEBUG

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
    
    bool check_perturb_to_min_lambda(const Spectrum*  spec,double scale,int pts)
    {
    using namespace flexiblesusy;
    using namespace Gambit;
    using namespace SpecBit;
    std::unique_ptr<SubSpectrum> SingletDM = spec ->clone_HE();
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
    
    double run_lambda(const Spectrum*  spec,double scale)
    {
    using namespace flexiblesusy;
    using namespace Gambit;
    using namespace SpecBit;
    if (scale>1e21){scale=1e21;}// avoid running to high scales
    std::unique_ptr<SubSpectrum> SingletDM = spec ->clone_HE(); // clone the original spectrum incase the running takes the spectrum
                                                                // into a non-perturbative scale and thus the spectrum is no longer reliable
    SingletDM -> RunToScale(scale);
    double lambda1 = SingletDM->get(Par::dimensionless,"lambda_h");
    return lambda1;
    }
    
    void find_min_lambda(triplet<double>& age_pair)
    {
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::find_min_lambda;//get_SingletDM_spectrum;
      const Options& runOptions=*myPipe::runOptions;
      double high_energy_limit = runOptions.getValueOrDef<double>(1.22e19,"set_high_scale");
      int check_perturb_pts = runOptions.getValueOrDef<double>(10,"check_perturb_pts");
      using namespace Gambit;
      using namespace SpecBit;
      
      
      const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
      // const SubSpectrum* spec = fullspectrum->get_HE(); // SingletDMZ3Spec SubSpectrum object
      //std::unique_ptr<SubSpectrum> SingletDM = fullspectrum->clone_HE(); // COPIES Spectrum object
      //std::unique_ptr<SubSpectrum> oneset = fullspectrum->clone_LE();
      //SingletDM -> RunToScale(MZ); // example of alternative way to run couplings, now using run_lambda subroutine above


      // three scales at which we choose to run the quartic coupling up to, and then use a Lagrange interpolating polynomial
      // to get an estimate for the location of the minimum, this is an efficient way to narrow down over a huge energy range
      double u_1=1;
      double u_2=5;
      double u_3=12;
      double lambda_1,lambda_2,lambda_3;
      double lambda_min =0 , fu =0 , u = 0  ;
      
      
      bool min_exists = 1;// check if gradient is positive at electroweak scale
      if ( run_lambda(fullspectrum, 101) > run_lambda(fullspectrum, 100 ) )
      {
      // gradient is positive, the minimum is less than electroweak scale so
      // lambda_h must be monotonally increasing
      min_exists = 0;
      lambda_min = run_lambda(fullspectrum, 100);
      }
      
      
      








      if (min_exists)
      {

      // fit parabola (in log space) to the 3 trial points and use this to estimate the minimum, zooming in on the region of interest
      for (int i=1;i<3;i++)
      {

      lambda_1 = run_lambda(fullspectrum, pow(10,u_1));
      lambda_2 = run_lambda(fullspectrum, pow(10,u_2));
      lambda_3 = run_lambda(fullspectrum, pow(10,u_3));

      cout << "lambda = " << lambda_1 << " " << lambda_2 << " " << lambda_3 << endl;
      cout << "u = " << u_1 << " "  << u_2 << " " << u_3 << endl;
      double min_u= (lambda_1*(pow(u_2,2)-pow(u_3,2))  - lambda_2*(pow(u_1,2)-pow(u_3,2)) + lambda_3*(pow(u_1,2)-pow(u_2,2)));
      double denominator = ( lambda_1*(u_2-u_3)+ lambda_2*(u_3-u_1)  +lambda_3*(u_1-u_2));
      cout << "denominator = " << denominator << endl;
      min_u=0.5*(min_u/denominator);
      u_1=min_u-2/(pow(float(i),0.01)); // repeat this process twice, can adjust how close we go around min_u (the estimated minimum) each time
      u_2=min_u;
      u_3=min_u+2/(pow(float(i),0.01));
      cout << "min_u = " << min_u << endl;
      }
      // run downhill minimization routine to find exact minimum
      double ax=pow(10,u_1);
      double bx=pow(10,u_2);
      double cx=pow(10,u_3);

  



      int ITMAX=100;
      double tol=0.0001;
      const double CGOLD=0.3819660; // "Golden ratio"
      const double ZEPS=numeric_limits<double>::epsilon()*1.0e-3; // this small number is used to deal with potential issue if lambda_min=0 exactly
      double d=0.0,etemp,fv,fw,fx;
      double p,q,r,tol1,tol2,v,w,x,xm;
      double e=0.0;
      double a=(ax < cx ? ax : cx);
      double b=(ax > cx ? ax : cx);
      x=w=v=bx;
      fw=fv=fx =run_lambda(fullspectrum,x);
      
      // use a standard Brent's method algorithm, with parabolic interpolation at each iteration, to find the minimum
      for (int iter=0;iter<ITMAX;iter++)
      {
          xm=0.5*(a+b); // minimum bracketed by a and b, find the midpoint
          tol2=2.0*(tol1=tol*abs(x)+ZEPS); // give fractional accuracy
          if (abs(x-xm) <= (tol2-0.5*(b-a)))
          {                      //Test for done here.
              break; // exit loop with fu and u the minimum values
          }
          if (abs(e) > tol1)
          {                       //Construct a trial parabolic fit.
              r=(x-w)*(fx-fv);
              q=(x-v)*(fx-fw);
              p=(x-v)*q-(x-w)*r;
              q=2.0*(q-r);
              if (q > 0.0) p = -p;
              q=abs(q);
              etemp=e;
              e=d;
              if (abs(p) >= abs(0.5*q*etemp) || p <= q*(a-x)
                  || p >= q*(b-x))
                  d=CGOLD*(e=(x >= xm ? a-x : b-x)); // "Golden step"
              else
              {
                  d=p/q;
                  u=x+d;
                  if (u-a < tol2 || b-u < tol2)
                      d=SIGN(tol1,xm-x);
              }
          }
          else
          {
              d=CGOLD*(e=(x >= xm ? a-x : b-x));
          }
          u=(abs(d) >= tol1 ? x+d : x+SIGN(tol1,d));
        
          fu = run_lambda(fullspectrum,u); // evaluate lambda at trial point
        
          if (fu <= fx)
          {
              if(u >= x) a=x; else b=x;
              swap(v,w,x,u); // rearrange the bracketing of the minimum depending as required
              swap(fv,fw,fx,fu);
          }
          else
          {
              if (u < x) a=u; else b=u;
              if (fu <= fw || w == x)
              {
                  v=w;
                  w=u;
                  fv=fw;
                  fw=fu;
              } else if (fu <= fv || v == x || v == w)
              {
                  v=u;
                  fv=fu;
              }
          }
      }
      
      
      lambda_min=fu;
      }
      
      
      

    #ifdef SPECBIT_DEBUG
        std::cout<< "minimum value of quartic coupling is   "<< fu << " at " << u <<" GeV"<<std::endl;
    #endif
    


      
      double lifetime,LB;
      if (lambda_min<0) // second minimum exists, now determine stability and lifetime
      {
        
        LB=u;
        #ifdef SPECBIT_DEBUG
        double p=exp(4*140-2600/(abs(lambda_min)/0.01))*pow(LB/(1.2e19),4); // compute tunnelling rate
        if (p>1)
        {
            cout<< "vacuum is unstable" << endl;
        }
        else
        {
            cout<< "vacuum is metastable" << endl;
        }
        #endif
       
        lifetime=1/(exp(3*140-2600/(abs(lambda_min)/0.01))*pow(1/(1.2e19),3)*pow(LB,4));
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
      bool perturbative=check_perturb_to_min_lambda(fullspectrum,LB,check_perturb_pts);  // now do a check on the perturbativity of the couplings up to this scale
      double perturb=float(!perturbative);
      #ifdef SPECBIT_DEBUG
      cout << "perturbativity checked up to " << LB << " result = " << perturbative << endl;
      #endif
      
      age_pair = triplet<double>(lifetime,LB,perturb); // output all three results as a triplet, perturb could be bool but all 3 need to be doubles for this type
     
    }


    // the functions below are used to extract the desired outputs from find_min_lambda

    void get_expected_lifetime(double &lifetime)
    {
      namespace myPipe = Pipes::get_expected_lifetime;//
      using namespace Gambit;
      triplet<double> age = *myPipe::Dep::vacuum_stability;
      if (age.central==1e300){lifetime=1e300;}else{
      lifetime=age.central*(6.5821195e-16)/(31536000);}// gives expected lifetime in units of years, if stable give extremly large number
                                                       // (choose nice round number, 1e300, as this is easily identified without using and Inf as the output instead)
    }
    

    void get_likelihood(double &result)
    {
      namespace myPipe = Pipes::get_likelihood;
      using namespace Gambit;
      triplet<double> age = *myPipe::Dep::vacuum_stability;
      result=((- ( 1 / ( age.central ) ) * exp(140) * (1/ (1.2e19) ) )  ); // log of the likelihood
    }
    
    
    void get_check_perturb_min_lambda(double &result)
    {
      namespace myPipe = Pipes::get_check_perturb_min_lambda;
      using namespace Gambit;
      triplet<double> age = *myPipe::Dep::vacuum_stability;
      result=-age.lower*(1e100); // returns lnlike, very negative if pertub is 1, 0 otherwise
    }

    

  } // end namespace SpecBit
} // end namespace Gambit

