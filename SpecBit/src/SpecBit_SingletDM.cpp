//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  SpecBit module functions related to the
///  scalar singlet DM model.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2015 May
///  
///  *********************************************

#include <string>
#include <sstream>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/SpecBit_helpers.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"
#include "gambit/SpecBit/SMHiggsContainer.hpp"
#include "gambit/SpecBit/ScalarSingletDMContainer.hpp"
#include "gambit/SpecBit/model_files_and_boxes.hpp"

// Switch for debug mode
#define SpecBit_DBUG

#define SWAP(a,b) {double temp;temp=a;a=b;b=temp;}


inline void shft2a(double &a, double &b, const double c)
{
    a=b;
    b=c;
}
inline void shft3a(double &a, double &b, double &c, const double d)
{
    a=b;
    b=c;
    c=d;
}
inline void mov3a(double &a, double &b, double &c, const double d, const double e,
                  const double f)
{
    a=d; b=e; c=f;
}


namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;

    /// Get a Spectrum object wrapper for the SingletDM model
    void get_SingletDM_spectrum(const Spectrum* &result)
    {
      namespace myPipe = Pipes::get_SingletDM_spectrum;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      QedQcd oneset;

      // Fill QedQcd object with SMInputs values
      setup_QedQcd(oneset,sminputs);

      // Run everything to Mz
      oneset.toMz();
 
      // Create a SubSpectrum object to wrap the qedqcd object
      // Attach the sminputs object as well, so that SM pole masses can be passed on (these aren't easily
      // extracted from the QedQcd object, so use the values that we put into it.)
      QedQcdWrapper qedqcdspec(oneset,sminputs);

      // Initialise an object to carry the Singlet plus Higgs sector information
      SingletDMModel singletmodel;
      singletmodel.HiggsPoleMass   = *myPipe::Param.at("mH");
      singletmodel.HiggsVEV        = *myPipe::Param.at("vev");
      singletmodel.SingletPoleMass = *myPipe::Param.at("mS");
      singletmodel.SingletLambda   = *myPipe::Param.at("lambda_hS");

      // Create a SubSpectrum object to wrap the EW sector information
      SingletDMContainer singletspec(singletmodel);

      // Create full Spectrum object from components above
      // Note: SubSpectrum objects cannot be copied, but Spectrum
      // objects can due to a special copy constructor which does
      // the required cloning of the constituent SubSpectra.
      static Spectrum full_spectrum;

      // Note subtlety! There are TWO constructors for the Spectrum object:
      // If pointers to SubSpectrum objects are passed, it is assumed that
      // these objects are managed EXTERNALLY! So if we were to do this:
      //   full_spectrum = Spectrum(&qedqcdspec,&singletspec,sminputs);
      // then the SubSpectrum objects would end up DELETED at the end of
      // this scope, and we will get a segfault if we try to access them
      // later. INSTEAD, we should just pass the objects themselves, and
      // then they will be CLONED and the Spectrum object will take
      // possession of them:
      full_spectrum = Spectrum(qedqcdspec,singletspec,sminputs);

      result = &full_spectrum;
    }
    
    void get_SingletDM_spectrum_pole(const Spectrum* &result)
    {
      namespace myPipe = Pipes::get_SingletDM_spectrum_pole;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      QedQcd oneset;


      // setup_QedQcd(oneset,sminputs);

      // Run everything to Mz
      
      
      SSDM_input_parameters input;
      SSDM_spectrum_generator<Two_scale> spectrum_generator;
      oneset.toMz();
      
      

      // Create a SubSpectrum object to wrap the qedqcd object
      // Attach the sminputs object as well, so that SM pole masses can be passed on (these aren't easily
      // extracted from the QedQcd object, so use the values that we put into it.)
      QedQcdWrapper qedqcdspec(oneset,sminputs);

      // Initialise an object to carry the Singlet plus Higgs sector information
      
      double mH2,mS2,lambda_hs;
      
      setup_QedQcd(oneset,sminputs);       // Fill QedQcd object with SMInputs values
      mH2 = *myPipe::Param.at("mH2");
      mS2 = *myPipe::Param.at("mS2");
      lambda_hs   = *myPipe::Param.at("lambda_hS");
      
      input.HiggsIN=-mH2;//-pow(mH,2)/2;
      input.mS2Input=mS2;//pow(mS,2)-lambda_hs*15;
      input.Lambda2Input=lambda_hs;
      input.Lambda3Input=0;
      input.Qin=173.15;  // scale where EWSB conditions are applied
            
      spectrum_generator.run(oneset, input);
      SSDM_slha<Two_scale> model(spectrum_generator.get_model());
      
      //SSDM_parameter_getter parameter_getter;
      SSDM_physical& pole_masses = model.get_physical_slha();

      SingletDMModel singletmodel;
      singletmodel.HiggsPoleMass   = pole_masses.Mhh;
      singletmodel.HiggsVEV        = *myPipe::Param.at("vev");
      singletmodel.SingletPoleMass = pole_masses.Mss;
      singletmodel.SingletLambda   = *myPipe::Param.at("lambda_hS");

      cout<< "Scalar pole mass from spectrum generator = "<< pole_masses.Mss << endl;

      // Create a SubSpectrum object to wrap the EW sector information
      SingletDMContainer singletspec(singletmodel);

      static Spectrum full_spectrum;

      full_spectrum = Spectrum(qedqcdspec,singletspec,sminputs);

      result = &full_spectrum;
    }
      
    void VS_SSDM(double &result) //  calculate minimum value of the quartic Higgs coupling between M_Z and M_Planck
    {
      using namespace Pipes::VS_SSDM;
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::VS_SSDM;//get_SingletDM_spectrum;
      using namespace Gambit;


      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory

      QedQcd oneset;
      SSDM_input_parameters input;
      
      SSDM_spectrum_generator<Two_scale> spectrum_generator;
      // Fill QedQcd object with SMInputs values
      // Run everything to Mz
      oneset.toMz();
      double mH,mS,lambda_hs;
      setup_QedQcd(oneset,sminputs);
      mH = *myPipe::Param.at("mH");
      mS = *myPipe::Param.at("mS");
      lambda_hs   = *myPipe::Param.at("lambda_hS");
      
      input.HiggsIN=-pow(mH,2)/2;
      input.mS2Input=pow(mS,2)-lambda_hs*15;
      input.Lambda2Input=lambda_hs;
      input.Lambda3Input=0;
      input.Qin=173.15;  // scale where EWSB conditions are applied
            
      spectrum_generator.run(oneset, input);
      SSDM_slha<Two_scale> model(spectrum_generator.get_model());
      
      SSDM<Two_scale> tmp_model(model);
      SSDM_parameter_getter parameter_getter;
      //double MS_pole_mass;
      //SSDM_physical& pole_masses = model.get_physical_slha();
      //MS_pole_mass=pole_masses.Mss;
     // mtop=pole_masses.MFu(2);
     // cout<< "Scalar pole mass from spectrum generator = "<< MS_pole_mass << endl;

      
      // vvvvvvvvvvvv    Finding minimum value of Lambda      vvvvvvvvvvvvv
      
      double MZ, a,b,Mpl,fa,fb,fc;
      double ax,bx,cx,LamZ;
      double fMpl,DeltaLamZ,DeltafMpl;
      double fu,ftmp;
      double ulim,u,utmp;const double GOLD=1.618034,GLIMIT=100.0;//TINY=1.0e-20;
      
      //vvvvvvvvvvvv    Bracketing of minimum Lambda      vvvvvvvvvvvvv
      
      const int ITMAX=100;
      double tol=3e-8;
      MZ=92;
      Mpl=1.1e19;// Define upper cutoff
      tmp_model.run_to(MZ);
      LamZ=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
      tmp_model.run_to(MZ+MZ*0.01);
      DeltaLamZ=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
      tmp_model.run_to(Mpl);
      fMpl=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
      tmp_model.run_to(Mpl+0.01*Mpl);
      DeltafMpl=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
      if (DeltafMpl<fMpl)
      {
      a=Mpl;b=(Mpl+0.01*Mpl);fa=Mpl;fb=DeltafMpl;
      }
      else if (DeltaLamZ<LamZ)
      {
      a=MZ,b=(MZ+MZ*0.01);fa=LamZ;fb=DeltaLamZ;
      }
      //Here GOLD is the default ratio by which successive intervals are magnified and GLIMIT
      //is the maximum magnification allowed for a parabolic-fit step.
      ax=a; bx=b;
      if (fb > fa) { //Switch roles of a and b so that we can go downhill in the direction from a to b.
      SWAP(ax,bx);
      SWAP(fb,fa);
      }
      cx=bx+GOLD*(bx-ax); //First guess for c.
      tmp_model.run_to(cx);
      fc=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
      while (fb > fc)
      { //Keep returning here until we bracket.
        double r=(bx-ax)*(fb-fc);
        double q=(bx-cx)*(fb-fa);
        u=bx-((bx-cx)*q-(bx-ax)*r)/(2.0*SIGN(abs(q-r),q-r)); // need to be careful of division by zero here
        ulim=bx+GLIMIT*(cx-bx);
        //We won’t go farther than this. Test various possibilities:
        if ((bx-u)*(u-cx) > 0.0) { //Parabolic u is between b and c: try it.
        tmp_model.run_to(u);
        fu=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
        if (fu < fc) { //Got a minimum between b and c.
        ax=bx;
        bx=u;
        fa=fb;
        fb=fu;
        break;
        } else if (fu > fb) {// Got a minimum between between a and u.
        cx=u;
        fc=fu;
        break;
        }
        u=cx+GOLD*(cx-bx); //Parabolic fit was no use. Use default magfu=
        tmp_model.run_to(u);
        fu=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
        } else if ((cx-u)*(u-ulim) > 0.0) { //Parabolic fit is between c and
        tmp_model.run_to(u);
        fu=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
        if (fu < fc) {
        utmp=u+GOLD*(u-cx);shft3a(bx,cx,u,utmp);tmp_model.run_to(u);
        ftmp=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
        shft3a(fb,fc,fu,ftmp);
        }
        } else if ((u-ulim)*(ulim-cx) >= 0.0) { //Limit parabolic u to maximum
        u=ulim; //allowed value.
        tmp_model.run_to(u);
        fu=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
        } else { //Reject parabolic u, use default magnificau=
        u=cx+GOLD*(cx-bx); //tion.
        tmp_model.run_to(u);
        fu=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
        }
        shft3a(ax,bx,cx,u); //Eliminate oldest point and continue.
        shft3a(fa,fb,fc,fu);
      }
    
      
      // ^^^^^^^^^^^^^^^^^^^^^^^^ bracketing complete ^^^^^^^^^^^^^^^^^^^^^^^^^
      
      
      // bracketing complete now need to find minimum lambda value, using Brent's method
      
      

      const double CGOLD=0.3819660;
      const double ZEPS=numeric_limits<double>::epsilon()*1.0e-3;
      //Here ITMAX is the maximum allowed number of iterations;
      //and ZEPS is a small number that protects against trying to achieve fractional accuracy
      //for a minimum that happens to be exactly zero.
      double d=0.0,etemp,fv,fw,fx;
      double p,q,r,tol1,tol2,v,w,x,xm;
      double e=0.0;                                                   //This will be the distance moved on the step before last.
      a=(ax < cx ? ax : cx);                                          //a and b must be in ascending order,
      b=(ax > cx ? ax : cx);                                          //but input abscissas need not be.
      x=w=v=bx;                                                       // Initializations...
      tmp_model.run_to(x);
      double iterations;
      fw=fv=fx=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
      for (int iter=0;iter<ITMAX;iter++)
      {                            //  Main program loop.
          xm=0.5*(a+b);
          tol2=2.0*(tol1=tol*abs(x)+ZEPS);
          if (abs(x-xm) <= (tol2-0.5*(b-a)))
          {                      //Test for done here.
              iterations=iter;
              cout << "minimum found after " << iterations << " iterations" << endl;
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
              //The above conditions determine the acceptability of the parabolic fit. Here
              //we take the golden section step into the larger of the two segments.
              else
              {
                  d=p/q;                                              //Take the parabolic step.
                  u=x+d;
                  if (u-a < tol2 || b-u < tol2)
                      d=SIGN(tol1,xm-x);
              }
          } else
          {
              d=CGOLD*(e=(x >= xm ? a-x : b-x));
          }
          u=(abs(d) >= tol1 ? x+d : x+SIGN(tol1,d));
          
          tmp_model.run_to(u);
          fu=parameter_getter.get_parameters(tmp_model)[5]; //function evaluation
          //This is the one function evaluation per iteration.
          
          //cout<< u << endl;
          if (fu <= fx)
          {                                             //Now decide what to do with our func
              if(u >= x) a=x; else b=x;
              shft3a(v,w,x,u);                             //Housekeeping follows:
              shft3a(fv,fw,fx,fu);
              
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
      // cout<< "minimum value of quartic coupling is   "<< fu << " at " << u <<" GeV"<<endl;
      
      
      // ^^^^^^^^^^^^^^^^^^  minimumn value of Lambda found   ^^^^^^^^^^^^^^^^^^^^^^
      double prob;
      if (fu<0)
      {
      // Calculate probability function for transition rate to false vacuum
      prob=exp(-exp(4*140-2600/(abs(fu)/0.01))*pow(u/(1.2e19),4)); //probability of 0 decays

      }
      else
      {
      prob=1; // vacuum is absolutely stable
      }
      

      result=prob;
    }


  } // end namespace SpecBit
} // end namespace Gambit

