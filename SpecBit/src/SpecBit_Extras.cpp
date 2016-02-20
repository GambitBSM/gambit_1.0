//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  These functions link ModelParameters to 
///  Spectrum objects in various ways (by running
///  spectrum generators, etc.)
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2014 Sep - Dec, 2015 Jan - Mar
///  
///  \author Christopher Rogan
///          (christophersrogan@gmail.com)
///  \date 2015 Apr
///
///  \author James McKay
///           (j.mckay14@imperial.ac.uk)
///
///  \date 2015 Nov
///
///  *********************************************

#include <string>
#include <sstream>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/Elements/spectrum.hpp"
#include "gambit/Utils/stream_overloads.hpp" // Just for more convenient output to logger
#include "gambit/Utils/util_macros.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/SpecBit_helpers.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"
//#include "gambit/SpecBit/SMskeleton.hpp"
//#include "gambit/SpecBit/SingletDMZ3skeleton.hpp" does not exist
//#include "gambit/SpecBit/SingletDMZ3Spec.hpp"

#include "gambit/SpecBit/model_files_and_boxes.hpp" // #includes lots of flexiblesusy headers and defines interface classes

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/src/ew_input.hpp"
#include "flexiblesusy/src/lowe.h" // From softsusy; used by flexiblesusy
#include "flexiblesusy/src/numerics2.hpp"
#include "flexiblesusy/src/two_loop_corrections.hpp"



// Switch for debug mode
#define SpecBit_DBUG 

namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;
    using namespace flexiblesusy;




    template <class T>
    void fill_SingletDMZ3_input(T& input, const std::map<str, safe_ptr<double> >& Param )
    {
      double mH2 = *Param.at("mH2");
      double mS2 = *Param.at("mS2");
      double lambda_hs = *Param.at("lambda_hS");
      double lambda_s= *Param.at("lambda_S");
      
      input.HiggsIN=mH2;//-pow(mH,2)/2;
      input.mS2Input=mS2;//pow(mS,2)-lambda_hs*15;
      input.LamSHInput=lambda_hs;
      input.LamSInput=lambda_s;

      input.QEWSB=173.15;  // scale where EWSB conditions are applied
    }
    
    template <class T>
    void fill_SingletDM_input(T& input, const std::map<str, safe_ptr<double> >& Param )
    {
      double mH2 = *Param.at("mH2");
      double mS2 = *Param.at("mS2");
      double lambda_hs = *Param.at("lambda_hS");
      
      
      double lambda_s= *Param.at("lambda_S");
      
      input.LamSInput=lambda_s;
      input.HiggsIN=mH2;//-pow(mH,2)/2;
      input.mS2Input=mS2;//pow(mS,2)-lambda_hs*15;
      input.LamSHInput=lambda_hs;
      input.QEWSB=173.15;  // scale where EWSB conditions are applied
    }


//
    template <class T>
    bool check_perturb_func_SingletDMZ3(double scale,T& input,const SMInputs& sminputs)   //const Spectrum* fullspectrum)
    {
    using namespace flexiblesusy;
    using namespace softsusy;
    using namespace Gambit;
    using namespace SpecBit;
    //SMInputs sminputs = fullspectrum->get_SMInputs();
    softsusy::QedQcd oneset;
    setup_QedQcd(oneset,sminputs);
    oneset.toMz();
    
    typename SingletDMZ3_interface<Two_scale>::SpectrumGenerator spectrum_generator;
    input.Qin=scale;
    spectrum_generator.run(oneset, input);
    
    std::ostringstream warnings;
    const Problems<SingletDMZ3_info::NUMBER_OF_PARTICLES>& problems= spectrum_generator.get_problems();
    bool error = problems.have_problem();
    problems.print_warnings(warnings);
    if (error==1)
    {
    // check for errors
    std::ostringstream problems_str;
    problems.print_problems(problems_str);
    cout<< FORMAT_SPINFO(4,problems_str.str()) << endl;
    }
    return error;
    }
    
    template <class T>
    bool check_perturb_func_SingletDM(double scale,T& input,const SMInputs& sminputs)   //const Spectrum* fullspectrum)
    {
    using namespace flexiblesusy;
    using namespace softsusy;
    using namespace Gambit;
    using namespace SpecBit;
    //SMInputs sminputs = fullspectrum->get_SMInputs();
    softsusy::QedQcd oneset;
    setup_QedQcd(oneset,sminputs);
    oneset.toMz();
    
    typename SingletDM_interface<Two_scale>::SpectrumGenerator spectrum_generator;
    input.Qin=scale;
    spectrum_generator.run(oneset, input);
    
    std::ostringstream warnings;
    const Problems<SingletDM_info::NUMBER_OF_PARTICLES>& problems= spectrum_generator.get_problems();
    bool error = problems.have_problem();
    problems.print_warnings(warnings);
    if (error==1)
    {
    // check for errors
    std::ostringstream problems_str;
    problems.print_problems(problems_str);
    cout<< FORMAT_SPINFO(4,problems_str.str()) << endl;
    }
    return error;
    }
    
    
    

//    template <class T>
//    bool check_perturb_simple_func(T& input,double scale,const SMInputs& sminputs)
//    {
//    using namespace flexiblesusy;
//    using namespace softsusy;
//
//    using namespace Gambit;
//    using namespace SpecBit;
//    
//    cout<< "checking perturbative up to high scale = " << scale << endl;
//    //const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
//    
//   // const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
//
//
////    SingletDMZ3_input_parameters input;
//
//    
//    return check_perturb_func(scale,input,sminputs);
//    }
    
    
    
    
    void check_perturb_simple_SingletDM(bool &error)
    {
    namespace myPipe = Pipes::check_perturb_simple_SingletDM;
    const Options& runOptions=*myPipe::runOptions;
    double scale = runOptions.getValueOrDef<double>(1.22e19,"set_high_scale");
    const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

    SingletDM_input_parameters input;
    fill_SingletDM_input(input,myPipe::Param);
    error=check_perturb_func_SingletDM(scale,input,sminputs);
    }
    
    void check_perturb_simple_SingletDMZ3(bool &error)
    {
    namespace myPipe = Pipes::check_perturb_simple_SingletDMZ3;
    const Options& runOptions=*myPipe::runOptions;
    double scale = runOptions.getValueOrDef<double>(1.22e19,"set_high_scale");
    const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

    SingletDMZ3_input_parameters input;
    fill_SingletDMZ3_input(input,myPipe::Param);
    error=check_perturb_func_SingletDMZ3(scale,input,sminputs);
    }
    
    
    void check_perturb_to_min_lambda(bool &error)
    {
    using namespace flexiblesusy;
    using namespace softsusy;
    namespace myPipe = Pipes::check_perturb_to_min_lambda;
    using namespace Gambit;
    using namespace SpecBit;
    ddpair age = *myPipe::Dep::vacuum_stability;
    double scale=std::get<1>(age);
    cout<< "checking perturbative up to high scale (of minimum lambda) = " << scale << endl;
    const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
    
   // const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
   // SingletDMZ3_input_parameters input;
   // fill_SingletDMZ3_input(input,myPipe::Param);

   // const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;


    SingletDMZ3_input_parameters input;
    fill_SingletDMZ3_input(input,myPipe::Param);

    
//>>>>>>> DarkBit_development:SpecBit/src/SpecBit_SSDM.cpp
    
    error=check_perturb_func_SingletDMZ3(scale,input,sminputs);
    }



    
    
    void shift(double &a, double &b, double &c, const double d)
    {
        a=b;
        b=c;
        c=d;
    }


    void find_min_lambda(std::pair<double, double>& age_pair)
    {
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::find_min_lambda;//get_SingletDM_spectrum;
      using namespace Gambit;
      using namespace SpecBit;
      //const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
      const SubSpectrum* spec = fullspectrum->get_HE(); // SingletDMZ3Spec SubSpectrum object
     
      cout<<"Scalar pole mass:" << endl;
      cout<<spec->phys().get(Par::Pole_Mass,"S")  <<endl;
      cout<<"Higgs pole mass:" << endl;
      cout<<spec->phys().get(Par::Pole_Mass,"h0")  <<endl;

      //SMInputs sminputs = fullspectrum->get_SMInputs();
      std::unique_ptr<SubSpectrum> SM = fullspectrum->clone_HE(); // COPIES Spectrum object
      //std::unique_ptr<SubSpectrum> oneset = fullspectrum->clone_LE();
  
      SM -> RunToScale(MZ);
      //double LamZ =SM->runningpars().get(Par::dimensionless,"Lambda1");
      //


      double u_1=1;
      double u_2=10;
      double u_3=20;
      double lambda_1,lambda_2,lambda_3;

      // fit parabola (in log space) to 3 trial points and use this to estimate the minimum, zooming in on the region of interest
      for (int i=1;i<3;i++)
      {
      SM -> RunToScale(pow(10,u_1));
      lambda_1 =SM->runningpars().get(Par::dimensionless,"Lambda1");
      SM -> RunToScale(pow(10,u_2));
      lambda_2 =SM->runningpars().get(Par::dimensionless,"Lambda1");
      SM -> RunToScale(pow(10,u_3));
      lambda_3 =SM->runningpars().get(Par::dimensionless,"Lambda1");
      double min_u= (lambda_1*(pow(u_2,2)-pow(u_3,2))  - lambda_2*(pow(u_1,2)-pow(u_3,2)) + lambda_3*(pow(u_1,2)-pow(u_2,2)));
      min_u=(min_u/( lambda_1*(u_2-u_3)+ lambda_2*(u_3-u_1)  +lambda_3*(u_1-u_2)))/2;
      u_1=min_u-2/(pow(float(i),0.01));
      u_2=min_u;
      u_3=min_u+2/(pow(float(i),0.01));
      SM = fullspectrum->clone_HE(); // clone the original spectrum incase the above calcuations have run into a non-perturbative scale and thus the spectrum is no longer reliable
      }
      // run downhill minimization routine to find exact minimum
      double ax=pow(10,u_1);
      double bx=pow(10,u_2);
      double cx=pow(10,u_3);

      int ITMAX=100;
      double tol=0.0001;
      const double CGOLD=0.3819660;
      const double ZEPS=numeric_limits<double>::epsilon()*1.0e-3;
      double d=0.0,etemp,fu,fv,fw,fx;
      double p,q,r,tol1,tol2,u,v,w,x,xm;
      double e=0.0;
      double a=(ax < cx ? ax : cx);
      double b=(ax > cx ? ax : cx);
      x=w=v=bx;
      SM -> RunToScale(x);
      fw=fv=fx =SM->runningpars().get(Par::dimensionless,"Lambda1");
      
      
      for (int iter=0;iter<ITMAX;iter++)
      {                            //  Main program loop.
          xm=0.5*(a+b);
          tol2=2.0*(tol1=tol*abs(x)+ZEPS);
          if (abs(x-xm) <= (tol2-0.5*(b-a)))
          {                      //Test for done here.
              break;
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
                  d=CGOLD*(e=(x >= xm ? a-x : b-x));
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
        
          SM -> RunToScale(u);
          fu =SM->runningpars().get(Par::dimensionless,"Lambda1");
        
        
        
          if (fu <= fx)
          {
              if(u >= x) a=x; else b=x;
              shift(v,w,x,u);
              shift(fv,fw,fx,fu);
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
      cout<< "minimum value of quartic coupling is   "<< fu << " at " << u <<" GeV"<<endl;

      double lambda_min=fu;
      double lifetime,LB;
      if (lambda_min<0)
      {
        LB=u;
        double p=exp(4*140-2600/(abs(lambda_min)/0.01))*pow(LB/(1.2e19),4);
        cout<< "tunnelling rate is approximately  " << p << endl;
     
        if (p>1)
        {
            cout<< "vacuum is unstable" << endl;
            //stability=2; // unstable
        }
        else
        {
            cout<< "vacuum is metastable" << endl;
            //stability=1; // metastable
        }
       
        lifetime=1/(exp(3*140-2600/(abs(lambda_min)/0.01))*pow(1/(1.2e19),3)*pow(LB,4));
      }
      else
      {
        LB=1.22e19;
        lifetime=std::numeric_limits<double>::infinity();
        //stability=0; // stable
      }
      age_pair = std::make_pair (lifetime,LB);
    
     
    }


    void get_expected_lifetime(double &lifetime)
    {
      namespace myPipe = Pipes::get_expected_lifetime;//
      using namespace Gambit;
      ddpair age = *myPipe::Dep::vacuum_stability;
      lifetime=std::get<0>(age)*(6.5821195e-16)/(31536000);// gives expected lifetime in units of years
    }
    
//    void default_scale(std::pair<double, double>& age_pair)
//    {
//      namespace myPipe = Pipes::default_scale;//
//      using namespace Gambit;
//      age_pair = std::make_pair (0,1.22e19);
//    }


    void get_likelihood(double &result)
    {
      namespace myPipe = Pipes::get_likelihood;//
      using namespace Gambit;
      ddpair age = *myPipe::Dep::vacuum_stability;
      result=((- ( 1 / ( std::get<0>(age) ) ) * exp(140) * (1/ (1.2e19) ) )  ); // log of the likelihood
    }
    

  } // end namespace SpecBit
} // end namespace Gambit

