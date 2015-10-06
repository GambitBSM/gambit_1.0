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
#include "gambit/SpecBit/SMskeleton.hpp"
//#include "gambit/SpecBit/SSDMskeleton.hpp" does not exist
#include "gambit/SpecBit/SSDMSpec.hpp"
#include "gambit/SpecBit/model_files_and_boxes.hpp" // #includes lots of flexiblesusy headers and defines interface classes

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/src/ew_input.hpp"
#include "flexiblesusy/src/lowe.h" // From softsusy; used by flexiblesusy
#include "flexiblesusy/src/numerics2.hpp"
#include "flexiblesusy/src/two_loop_corrections.hpp"




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
    using namespace flexiblesusy;

    // To check if a model is currently being scanned:
    // bool Pipes::<fname>::ModelInUse(str model_name)

    /// @{ Non-Gambit convenience functions
    //  =======================================================================
    //  These are not known to Gambit, but they do basically all the real work.
    //  The Gambit module functions merely wrap the functions here and hook 
    //  them up to their dependencies, and input parameters.

    /// Compute an MSSM spectrum using flexiblesusy
    // In GAMBIT there are THREE flexiblesusy MSSM spectrum generators currently in
    // use, for each of three possible boundary condition types:
    //   - GUT scale input
    //   - Electroweak symmetry breaking scale input
    //   - Intermediate scale Q input
    // These each require slightly different setup, but once that is done the rest
    // of the code required to run them is the same; this is what is contained in
    // the below template function.
    // MI for Model Interface, as defined in model_files_and_boxes.hpp 
    template <class MI> 
    const Spectrum* run_FS_spectrum_generator
        ( const typename MI::InputParameters& input
        , const SMInputs& sminputs
        , const Options& runOptions 
        )
    {
      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      // Will be initialised by default using values in lowe.h, which we will
      // override next. 
      QedQcd oneset;

      // Fill QedQcd object with SMInputs values
      setup_QedQcd(oneset,sminputs);

      // Run everything to Mz
      oneset.toMz();
 
      // Create spectrum generator object
      typename MI::SpectrumGenerator spectrum_generator;

      // Spectrum generator settings
      // Default options copied from flexiblesusy/src/spectrum_generator_settings.hpp
      //
      // | enum                             | possible values              | default value   |
      // |----------------------------------|------------------------------|-----------------|
      // | precision                        | any positive double          | 1.0e-4          |
      // | max_iterations                   | any positive double          | 0 (= automatic) |
      // | algorithm                        | 0 (two-scale) or 1 (lattice) | 0 (= two-scale) |
      // | calculate_sm_masses              | 0 (no) or 1 (yes)            | 0 (= no)        |
      // | pole_mass_loop_order             | 0, 1, 2                      | 2 (= 2-loop)    |
      // | ewsb_loop_order                  | 0, 1, 2                      | 2 (= 2-loop)    |
      // | beta_loop_order                  | 0, 1, 2                      | 2 (= 2-loop)    |
      // | threshold_corrections_loop_order | 0, 1                         | 1 (= 1-loop)    |
      // | higgs_2loop_correction_at_as     | 0, 1                         | 1 (= enabled)   |
      // | higgs_2loop_correction_ab_as     | 0, 1                         | 1 (= enabled)   |
      // | higgs_2loop_correction_at_at     | 0, 1                         | 1 (= enabled)   |
      // | higgs_2loop_correction_atau_atau | 0, 1                         | 1 (= enabled)   |

     
      #define SPECGEN_SET(NAME,TYPE,DEFAULTVAL) \
         CAT_2(spectrum_generator.set_, NAME) BOOST_PP_LPAREN() runOptions.getValueOrDef<TYPE> \
               BOOST_PP_LPAREN() DEFAULTVAL BOOST_PP_COMMA() STRINGIFY(NAME) \
               BOOST_PP_RPAREN() BOOST_PP_RPAREN()
      // Ugly I know. It expands to:
      // spectrum_generator.set_NAME(runOptions.getValueOrDef<TYPE>(DEFAULTVAL,"NAME"))

      // For debugging only; check expansions
      // #ifdef SpecBit_DBUG
      //    #define ECHO(COMMAND) std::cout << SAFE_STRINGIFY(COMMAND) << std::endl
      //    ECHO(  SPECGEN_SET(precision_goal,                 double, 1.0e-4)  );
      //    #undef ECHO
      // #endif

      SPECGEN_SET(precision_goal,                    double, 1.0e-4);
      SPECGEN_SET(max_iterations,                    double, 0 );
      SPECGEN_SET(calculate_sm_masses,               bool, false );
      SPECGEN_SET(pole_mass_loop_order,              int, 2 );
      SPECGEN_SET(ewsb_loop_order,                   int, 2 );
      SPECGEN_SET(beta_loop_order,                   int, 2 );
      SPECGEN_SET(threshold_corrections_loop_order,  int, 1 );

      #undef SPECGEN_SET

      // Higgs loop corrections are a little different... sort them out now     
      Two_loop_corrections two_loop_settings;

      // alpha_t alpha_s
      // alpha_b alpha_s
      // alpha_t^2 + alpha_t alpha_b + alpha_b^2
      // alpha_tau^2
      two_loop_settings.higgs_at_as
         = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_at_as");
      two_loop_settings.higgs_ab_as
         = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_ab_as");
      two_loop_settings.higgs_at_at
         = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_at_at");
      two_loop_settings.higgs_atau_atau
         = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_atau_atau");

      spectrum_generator.set_two_loop_corrections(two_loop_settings);

      // Generate spectrum
      spectrum_generator.run(oneset, input);
   
      // Extract report on problems...
      const typename MI::Problems& problems = spectrum_generator.get_problems();
     
      // Create Model_interface to carry the input and results, and know
      // how to access the flexiblesusy routines.
      // Note: Output of spectrum_generator.get_model() returns type, e.g. CMSSM.
      // Need to convert it to type CMSSM_slha (which alters some conventions of
      // parameters into SLHA format)
      MI model_interface(spectrum_generator,oneset,input);

      // Create SubSpectrum object to wrap flexiblesusy data
      // THIS IS STATIC so that it lives on once we leave this module function. We 
      // therefore cannot run the same spectrum generator twice in the same loop and 
      // maintain the spectrum resulting from both. But we should never want to do 
      // this.
      // A pointer to this object is what gets turned into a SubSpectrum pointer and
      // passed around Gambit.
      //
      // This object will COPY the interface data members into itself, so it is now the 
      // one-stop-shop for all spectrum information, including the model interface object.
      SSDMSpec<MI> ssdmspec(model_interface, "FlexibleSUSY", "1.1.0");

      // Add extra information about the scales used to the wrapper object
      // (last parameter turns the 'safety' check for the override setter off, which allows
      //  us to set parameters that don't previously exist)
      
      ssdmspec.runningpars().set_override(Par::mass1,spectrum_generator.get_high_scale(),"high_scale",false);
      ssdmspec.runningpars().set_override(Par::mass1,spectrum_generator.get_susy_scale(),"susy_scale",false);
      ssdmspec.runningpars().set_override(Par::mass1,spectrum_generator.get_low_scale(), "low_scale", false);

      // Create a second SubSpectrum object to wrap the qedqcd object used to initialise the spectrum generator
      // Attach the sminputs object as well, so that SM pole masses can be passed on (these aren't easily
      // extracted from the QedQcd object, so use the values that we put into it.)
      QedQcdWrapper qedqcdspec(oneset,sminputs);


// Need to fix the below

//      if( runOptions.getValue<bool>("invalid_point_fatal") and problems.have_problem() )
//      {
//         ///TODO: Need to tell gambit that the spectrum is not viable somehow. For now
//         // just die.
//         std::ostringstream errmsg;
//         errmsg << "A serious problem was encountered during spectrum generation!; ";
//         errmsg << "Message from FlexibleSUSY below:" << std::endl;
//         problems.print_problems(errmsg); 
//         problems.print_warnings(errmsg); 
//         SpecBit_error().raise(LOCAL_INFO,errmsg.str());  
//      }  

//      // Write SLHA file (for debugging purposes...)
//      #ifdef SpecBit_DBUG
//         typename MI::SlhaIo slha_io;
//         slha_io.set_spinfo(problems);
//         slha_io.set_sminputs(oneset);
//         slha_io.set_minpar(input);
//         slha_io.set_extpar(input);
//         slha_io.set_spectrum(mssmspec.model_interface.model);
//         slha_io.write_to_file("SpecBit/initial_CMSSM_spectrum.slha");
//      #endif

      // Package pointer to QedQcd SubSpectrum object along with pointer to MSSM SubSpectrum object, 
      // and SMInputs struct.
      // Return pointer to this package.
      static Spectrum matched_spectra;
      matched_spectra = Spectrum(qedqcdspec,ssdmspec,sminputs);
      return &matched_spectra;
    }



    template <class T>
    void fill_SSDM_input(T& input, const std::map<str, safe_ptr<double> >& Param )
    {

      double mH2,mS2,lambda_hs;
      mH2 = *Param.at("mH2");
      mS2 = *Param.at("mS2");
      lambda_hs = *Param.at("lambda_hS");
      input.HiggsIN=-mH2;//-pow(mH,2)/2;
      input.mS2Input=mS2;//pow(mS,2)-lambda_hs*15;
      input.Lambda2Input=lambda_hs;
      input.Lambda3Input=0;
      input.Qin=173.15;  // scale where EWSB conditions are applied
    }

    void get_SSDM_spectrum(const Spectrum* &result)
    {
      using namespace softsusy;
      namespace myPipe = Pipes::get_SSDM_spectrum;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
      SSDM_input_parameters input;
      cout<< "get spectrum started" << endl;
      fill_SSDM_input(input,myPipe::Param);
      input.QHin=1e3;
      cout<< "Filled input parameters" << endl;
      result = run_FS_spectrum_generator<SSDM_interface<ALGORITHM1>>(input,sminputs,*myPipe::runOptions);
    }




    void VS_age_func(double &result)
    {
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::VS_age_func;//get_SingletDM_spectrum;
      using namespace Gambit;
      //const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      const Spectrum* fullspectrum = *myPipe::Dep::SSDM_spectrum;
      //const SubSpectrum* spec = fullspectrum->get_HE(); // SSDMSpec SubSpectrum object
     
//      cout<<"Scalar pole mass:" << endl;
//      cout<<spec->phys().get_Pole_Mass("S")  <<endl;
//      cout<<"Higgs pole mass:" << endl;
//      cout<<spec->phys().get_Pole_Mass("h0")  <<endl;

      //SMInputs sminputs = fullspectrum->get_SMInputs();
      std::unique_ptr<SubSpectrum> SM = fullspectrum->clone_HE(); // COPIES Spectrum object
      //std::unique_ptr<SubSpectrum> oneset = fullspectrum->clone_LE();
      
     //    vvvvvvvvvvvv    Finding minimum value of Lambda      vvvvvvvvvvvvv
      
      double a,b,fa,fb,fc;
      double ax,bx,cx;
      double fu,ftmp;
      double ulim,u,utmp;const double GOLD=1.618034,GLIMIT=100.0;//TINY=1.0e-20;
      
      //vvvvvvvvvvvv    Bracketing of minimum Lambda      vvvvvvvvvvvvv
      
      const int ITMAX=100;
      double tol=3e-6;
      double MZ=92;
      double Mpl=1.1e19;// Define upper cutoff
      
      
      SM->runningpars().RunToScale(MZ);
      double LamZ = SM->runningpars().get_dimensionless_parameter("Lambda1");
      SM->runningpars().RunToScale(MZ+MZ*0.01);
      double DeltaLamZ = SM->runningpars().get_dimensionless_parameter("Lambda1");
      SM->runningpars().RunToScale(Mpl);
      double fMpl = SM->runningpars().get_dimensionless_parameter("Lambda1");
      SM->runningpars().RunToScale(Mpl-0.01*Mpl);
      double DeltafMpl = SM->runningpars().get_dimensionless_parameter("Lambda1");

      
      
      if (DeltafMpl<fMpl)
      {
      a=Mpl;b=(Mpl-0.01*Mpl);fa=fMpl;fb=DeltafMpl;
      cout<< "Mpl" << endl;
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
      
      SM->runningpars().RunToScale(cx);
      fc = SM->runningpars().get_dimensionless_parameter("Lambda1");

      
      cout << " c = " << cx<<endl;
      while (fb > fc)
      { //Keep returning here until we bracket.
        double r=(bx-ax)*(fb-fc);
        double q=(bx-cx)*(fb-fa);
        u=bx-((bx-cx)*q-(bx-ax)*r)/(2.0*SIGN(abs(q-r),q-r)); // need to be careful of division by zero here
        ulim=bx+GLIMIT*(cx-bx);
        //We won’t go farther than this. Test various possibilities:
        if ((bx-u)*(u-cx) > 0.0) { //Parabolic u is between b and c: try it.

        cout << " u 1 = " << u <<endl;
        SM->runningpars().RunToScale(u);
        
        fu = SM->runningpars().get_dimensionless_parameter("Lambda1");
 
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

        SM->runningpars().RunToScale(u);
        cout << " u5 = " << u <<endl;
        fu = SM->runningpars().get_dimensionless_parameter("Lambda1");
 
        } else if ((cx-u)*(u-ulim) > 0.0) { //Parabolic fit is between c and
        cout << " u2 = " << u <<endl;
        SM->runningpars().RunToScale(u);
        fu = SM->runningpars().get_dimensionless_parameter("Lambda1");

        
        
        if (fu < fc) {
        utmp=u+GOLD*(u-cx);shft3a(bx,cx,u,utmp);
        SM->runningpars().RunToScale(u);
        double ftmp = SM->runningpars().get_dimensionless_parameter("Lambda1");
        shft3a(fb,fc,fu,ftmp);
        }
        } else if ((u-ulim)*(ulim-cx) >= 0.0) { //Limit parabolic u to maximum
        u=ulim; //allowed value.

        cout << " u3 = " << u <<endl;
        SM->runningpars().RunToScale(u);
        fu = SM->runningpars().get_dimensionless_parameter("Lambda1");
  
        } else { //Reject parabolic u, use default magnificau=
        u=cx+GOLD*(cx-bx); //tion.
        
        u=pow ( 10,  log10(abs(cx-bx))/2 );
        
        
        cout << " u4 = " << u <<endl;
        SM->runningpars().RunToScale(u);
        fu = SM->runningpars().get_dimensionless_parameter("Lambda1");

        
        
        }
        shft3a(ax,bx,cx,u); //Eliminate oldest point and continue.
        shft3a(fa,fb,fc,fu);
      }
    
      cout<< "here 2" <<endl;
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

      SM->runningpars().RunToScale(x);

      double iterations;
      fw=fv=fx=SM->runningpars().get_dimensionless_parameter("Lambda1");; //function evaluation
      
      
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
          

          SM->runningpars().RunToScale(u);
          fu = SM->runningpars().get_dimensionless_parameter("Lambda1");
        
        
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
       cout<< "minimum value of quartic coupling is   "<< fu << " at " << u <<" GeV"<<endl;
      
      
      // ^^^^^^^^^^^^^^^^^^  minimumn value of Lambda found   ^^^^^^^^^^^^^^^^^^^^^^
      double prob;
      if (fu<0)
      {
      // Calculate probability function for transition rate to false vacuum
     // prob=exp(-exp(4*140-2600/(abs(fu)/0.01))*pow(u/(1.2e19),4)); //probability of 0 decays

      prob=log10(exp(4*140-2600/(abs(fu)/0.01))*pow(u/(1.2e19),4)  ); //probability of 0 decays

      prob= 1/(exp(3*140-2600/(abs(fu)/0.01))*pow(1/(1.2e19),3)*pow(u,4))  ; //expected lifetime of universe

      }
      else
      {
      prob=1; // vacuum is absolutely stable
      }
      
      
      SMInputs sminputs = fullspectrum->get_SMInputs();
      //std::unique_ptr<SubSpectrum> SM = fullspectrum->clone_HE();
      
      SSDM_input_parameters input;
      fill_SSDM_input(input,myPipe::Param);
      input.QHin=Mpl;
      cout<< "refilled input parameters" << endl;
     // spectrum* spec2=run_FS_spectrum_generator<SSDM_interface<ALGORITHM1>>(input,sminputs,*myPipe::runOptions);


            // Create spectrum generator object
      
      typename SSDM_interface<ALGORITHM1>::SpectrumGenerator spectrum_generator;

      // Spectrum generator settings
      // Default options copied from flexiblesusy/src/spectrum_generator_settings.hpp
      //
      // | enum                             | possible values              | default value   |
      // |----------------------------------|------------------------------|-----------------|
      // | precision                        | any positive double          | 1.0e-4          |
      // | max_iterations                   | any positive double          | 0 (= automatic) |
      // | algorithm                        | 0 (two-scale) or 1 (lattice) | 0 (= two-scale) |
      // | calculate_sm_masses              | 0 (no) or 1 (yes)            | 0 (= no)        |
      // | pole_mass_loop_order             | 0, 1, 2                      | 2 (= 2-loop)    |
      // | ewsb_loop_order                  | 0, 1, 2                      | 2 (= 2-loop)    |
      // | beta_loop_order                  | 0, 1, 2                      | 2 (= 2-loop)    |
      // | threshold_corrections_loop_order | 0, 1                         | 1 (= 1-loop)    |
      // | higgs_2loop_correction_at_as     | 0, 1                         | 1 (= enabled)   |
      // | higgs_2loop_correction_ab_as     | 0, 1                         | 1 (= enabled)   |
      // | higgs_2loop_correction_at_at     | 0, 1                         | 1 (= enabled)   |
      // | higgs_2loop_correction_atau_atau | 0, 1                         | 1 (= enabled)   |

      QedQcd oneset;

      // Fill QedQcd object with SMInputs values
      setup_QedQcd(oneset,sminputs);

      // Run everything to Mz
      oneset.toMz();
      
      
      
      cout<< "Lambda 2 is " << input.Lambda2Input << endl;


      spectrum_generator.run(oneset, input);
      std::ostringstream warnings;
      const Problems<SSDM_info::NUMBER_OF_PARTICLES>& problems
      = spectrum_generator.get_problems();
      const bool error = problems.have_problem();
      //problems.print_warnings(warnings);
      //std::ostringstream problems_str;
      //problems.print_problems(problems_str);
      //cout<< FORMAT_SPINFO(4, problems_str.str()) <<endl;
      if (error==1)
      {
          //FlexibleSUSY error, may be unperturbative
          cout<< "ERROR" << endl;
        
      }

      
      
      

  
      result=prob;
    }




    void VS_likelihood_func(double &result)
    {
      namespace myPipe = Pipes::VS_likelihood_func;//
      using namespace Gambit;
      const double& age = *myPipe::Dep::VS_age;
      result=log10(  (1/age) * exp(140) * (1/ (1.2e19) )   );
    }
    
    // use the below to create a simple function with output pole masses to use as observables
    
    
      //    const Spectrum* fullspectrum = *myPipe::Dep::SSDM_spectrum;
      //const SubSpectrum* spec = fullspectrum->get_HE(); // SSDMSpec SubSpectrum object
     
//      cout<<"Scalar pole mass:" << endl;
//      cout<<spec->phys().get_Pole_Mass("S")  <<endl;
//      cout<<"Higgs pole mass:" << endl;
//      cout<<spec->phys().get_Pole_Mass("h0")  <<endl;
    
    
    
        /// @} End Gambit module functions

  } // end namespace SpecBit
} // end namespace Gambit

