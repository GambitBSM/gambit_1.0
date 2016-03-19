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

#include "gambit/Elements/spectrum.hpp"
#include "gambit/Utils/stream_overloads.hpp" // Just for more convenient output to logger
#include "gambit/Utils/util_macros.hpp"




#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/SpecBit_helpers.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"
#include "gambit/Models/SimpleSpectra/SMHiggsSimpleSpec.hpp"
#include "gambit/Models/SimpleSpectra/ScalarSingletDMSimpleSpec.hpp"
#include "gambit/SpecBit/model_files_and_boxes.hpp"

#include "gambit/SpecBit/SingletDMZ3Spec.hpp"
#include "gambit/SpecBit/SingletDMSpec.hpp"


//#include "gambit/SpecBit/SMskeleton.hpp"


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

    /// Get a Spectrum object wrapper for the SingletDM model
    void get_SingletDM_spectrum(const Spectrum* &result)
    {
      namespace myPipe = Pipes::get_SingletDM_spectrum;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      softsusy::QedQcd oneset;

      // Fill QedQcd object with SMInputs values
      setup_QedQcd(oneset,sminputs);

      // Run everything to Mz
      oneset.toMz();

      // Create a SubSpectrum object to wrap the qedqcd object
      // Attach the sminputs object as well, so that SM pole masses can be passed on (these aren't easily
      // extracted from the QedQcd object, so use the values that we put into it.)
      QedQcdWrapper qedqcdspec(oneset,sminputs);

      // Initialise an object to carry the Singlet plus Higgs sector information
      Models::SingletDMModel singletmodel;
      singletmodel.HiggsPoleMass   = *myPipe::Param.at("mH");
      singletmodel.HiggsVEV        = 1. / sqrt(sqrt(2.)*sminputs.GF);
      singletmodel.SingletPoleMass = *myPipe::Param.at("mS");
      singletmodel.SingletLambda   = *myPipe::Param.at("lambda_hS");

      // Create a SubSpectrum object to wrap the EW sector information
      Models::ScalarSingletDMSimpleSpec singletspec(singletmodel);

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
      full_spectrum = Spectrum(qedqcdspec,singletspec,sminputs,&myPipe::Param);

      result = &full_spectrum;
    }
    
    
  //  template <class MI,class SI,class SIinfo>
    template<class MI,class SI>
    const Spectrum* run_FS_spectrum_generator
        ( const typename MI::InputParameters& input
        , const SMInputs& sminputs
        , const Options& runOptions
        , const std::map<str, safe_ptr<double> >& input_Param
        )
    {
      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      // Will be initialised by default using values in lowe.h, which we will
      // override next. 
      softsusy::QedQcd oneset;

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
      const typename MI::Problems& problems = spectrum_generator.get_problems();

      MI model_interface(spectrum_generator,oneset,input);

      
      SI singletdmspec(model_interface, "FlexibleSUSY", "1.1.0"); // new templated spectrum class name
      //SingletDMSpec<MI> singletdmspec(model_interface, "FlexibleSUSY", "1.1.0"); // should be 1.2.4?

    
      singletdmspec.set_override(Par::mass1,spectrum_generator.get_high_scale(),"high_scale",false);
      singletdmspec.set_override(Par::mass1,spectrum_generator.get_susy_scale(),"susy_scale",false);
      singletdmspec.set_override(Par::mass1,spectrum_generator.get_low_scale(), "low_scale", false);


      // Create a second SubSpectrum object to wrap the qedqcd object used to initialise the spectrum generator
      // Attach the sminputs object as well, so that SM pole masses can be passed on (these aren't easily
      // extracted from the QedQcd object, so use the values that we put into it.)
      QedQcdWrapper qedqcdspec(oneset,sminputs);
      
      
            // Deal with points where spectrum generator encountered a problem
      #ifdef SPECBIT_DEBUG
        std::cout<<"Problem? "<<problems.have_problem()<<std::endl;
      #endif
      if( problems.have_problem() )
      {
         if( runOptions.getValue<bool>("invalid_point_fatal") )
         {
            ///TODO: Need to tell gambit that the spectrum is not viable somehow. For now
            // just die.
            std::ostringstream errmsg;
            errmsg << "A serious problem was encountered during spectrum generation!; ";
            errmsg << "Message from FlexibleSUSY below:" << std::endl;
            problems.print_problems(errmsg);
            problems.print_warnings(errmsg);
            SpecBit_error().raise(LOCAL_INFO,errmsg.str());
         }
         else
         {
            /// Check what the problem was
            /// see: contrib/MassSpectra/flexiblesusy/src/problems.hpp
            std::ostringstream msg;

            problems.print_problems(msg);
            invalid_point().raise(msg.str()); //TODO: This message isn't ending up in the logs.
         }
      }
      static Spectrum matched_spectra;
      matched_spectra = Spectrum(qedqcdspec,singletdmspec,sminputs,&input_Param);
    
      return &matched_spectra;
    }



    template <class T>
    void fill_SingletDM_input(T& input, const std::map<str, safe_ptr<double> >& Param,SMInputs sminputs,double scale)
    {
      double mH = *Param.at("mH");
      double mS = *Param.at("mS");
      double lambda_hs = *Param.at("lambda_hS");
      double lambda_s  = *Param.at("lambda_S");
      double QEWSB  = *Param.at("QEWSB");
      input.HiggsIN=-0.5*pow(mH,2);
      double vev=1. / sqrt(sqrt(2.)*sminputs.GF);
      input.muSInput=pow(mS,2)-0.5*lambda_hs*pow(vev,2);
      input.LamSHInput=lambda_hs;
      input.LamSInput=lambda_s;
      input.QEWSB=QEWSB;  // scale where EWSB conditions are applied
      input.Qin=scale;  // highest scale at which model is run to
    }
    
    template <class T>
    void fill_extra_input(T& input, const std::map<str, safe_ptr<double> >& Param )
    {
      input.mu3Input=*Param.at("mu3");
    }

    void get_SingletDM_spectrum_pole(const Spectrum* &result)
    {
      using namespace softsusy;
      namespace myPipe = Pipes::get_SingletDM_spectrum_pole;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
      const Options& runOptions=*myPipe::runOptions;
      double scale = runOptions.getValueOrDef<double>(173.34,"set_high_scale");
      SingletDM_input_parameters input;
      fill_SingletDM_input(input,myPipe::Param,sminputs,scale);
      //bool error;
     // result = run_FS_spectrum_generator<SingletDM_interface<ALGORITHM1>,SingletDMZ3Spec<SingletDM_interface<ALGORITHM1>>,Problems<SingletDM_info::NUMBER_OF_PARTICLES>>(input,sminputs,*myPipe::runOptions,myPipe::Param);
      result = run_FS_spectrum_generator<SingletDM_interface<ALGORITHM1>,SingletDMSpec<SingletDM_interface<ALGORITHM1>>>(input,sminputs,*myPipe::runOptions,myPipe::Param);
    }
    
    void get_SingletDMZ3_spectrum(const Spectrum* &result)
    {
      using namespace softsusy;
      namespace myPipe = Pipes::get_SingletDMZ3_spectrum;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
      const Options& runOptions=*myPipe::runOptions;
      double scale = runOptions.getValueOrDef<double>(173.34,"set_high_scale");
      SingletDMZ3_input_parameters input;
      fill_SingletDM_input(input,myPipe::Param,sminputs,scale);
      fill_extra_input(input,myPipe::Param);
     result = run_FS_spectrum_generator<SingletDMZ3_interface<ALGORITHM1>,SingletDMZ3Spec<SingletDMZ3_interface<ALGORITHM1>>>(input,sminputs,*myPipe::runOptions,myPipe::Param);

    }


    void get_pole_mh(double &result)
    {
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::get_pole_mh;//get_SingletDM_spectrum;
      using namespace Gambit;
      using namespace SpecBit;
      const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
      const SubSpectrum* spec = fullspectrum->get_HE(); // SingletDMZ3Spec SubSpectrum object
      result=spec->get(Par::Pole_Mass,"h0");
    }


    void get_pole_ms(double &result)
    {
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::get_pole_ms;//get_SingletDM_spectrum;
      using namespace Gambit;
      using namespace SpecBit;
      const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
      const SubSpectrum* spec = fullspectrum->get_HE(); // SingletDMZ3Spec SubSpectrum object
      result=spec->get(Par::Pole_Mass,"s0");
    }
    
    
    // simple function for generating a spectrum up to a given high scale, this does not save the spectrum object, so only used when the spectrum was already
    // calculated before hand for use with find_min_lambda for vacuum stability
    template <class T>
    bool check_perturb_func_SingletDM(T& input,const SMInputs& sminputs)   //const Spectrum* fullspectrum)
    {
    using namespace flexiblesusy;
    using namespace softsusy;
    using namespace Gambit;
    using namespace SpecBit;
    softsusy::QedQcd oneset;
    setup_QedQcd(oneset,sminputs);
    oneset.toMz();
    
    typename SingletDM_interface<Two_scale>::SpectrumGenerator spectrum_generator;
    spectrum_generator.run(oneset, input);
    
    std::ostringstream warnings;
    const Problems<SingletDM_info::NUMBER_OF_PARTICLES>& problems= spectrum_generator.get_problems();
    bool error = problems.have_problem();
    return error;
    }
    
    template <class T>
    bool check_perturb_func_SingletDMZ3(T& input,const SMInputs& sminputs)   //const Spectrum* fullspectrum)
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
    spectrum_generator.run(oneset, input);
    
    std::ostringstream warnings;
    const Problems<SingletDMZ3_info::NUMBER_OF_PARTICLES>& problems= spectrum_generator.get_problems();
    bool error = problems.have_problem();
    return error;
    }
    
    void check_perturb_SingletDM(double &lnlike)
    {
    namespace myPipe = Pipes::check_perturb_SingletDM;
    const Options& runOptions=*myPipe::runOptions;
    double scale = runOptions.getValueOrDef<double>(1.22e19,"set_high_scale");
    const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
    cout<< "checking perturbativity to scale =  " << scale << endl;
    SingletDM_input_parameters input;
    fill_SingletDM_input(input,myPipe::Param,sminputs,scale);
    if(check_perturb_func_SingletDM(input,sminputs)){lnlike=1e-300;}
    else{lnlike=0;}
    }
    
    void check_perturb_SingletDMZ3(double &lnlike)
    {
    namespace myPipe = Pipes::check_perturb_SingletDMZ3;
    const Options& runOptions=*myPipe::runOptions;
    double scale = runOptions.getValueOrDef<double>(1.22e19,"set_high_scale");
    const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

    SingletDMZ3_input_parameters input;
    fill_SingletDM_input(input,myPipe::Param,sminputs,scale);
    fill_extra_input(input,myPipe::Param);
    if(check_perturb_func_SingletDMZ3(input,sminputs)){lnlike=1e-300;}
    else{lnlike=0;}
    }
    
    
//    void check_perturb_to_min_lambda_SingletDMZ3(double &error)
//    {
//    using namespace flexiblesusy;
//    using namespace softsusy;
//    namespace myPipe = Pipes::check_perturb_to_min_lambda_SingletDMZ3;
//    using namespace Gambit;
//    using namespace SpecBit;
//    triplet<double> age = *myPipe::Dep::vacuum_stability;
//    double scale=age.upper;//std::get<1>(age);
//    cout<< "checking perturbative up to high scale (of minimum lambda) = " << scale << endl;
//    const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
//    
//   // const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
//   // SingletDMZ3_input_parameters input;
//   // fill_SingletDMZ3_input(input,myPipe::Param);
//
//   // const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
//
//    SingletDMZ3_input_parameters input;
//    fill_SingletDM_input(input,myPipe::Param,sminputs,scale);
//
//    fill_extra_input(input,myPipe::Param);
//    
//    error=float(check_perturb_func_SingletDMZ3(input,sminputs));
//    }
//    
//    void check_perturb_to_min_lambda_SingletDM(double &error)
//    {
//    using namespace flexiblesusy;
//    using namespace softsusy;
//    namespace myPipe = Pipes::check_perturb_to_min_lambda_SingletDM;
//    using namespace Gambit;
//    using namespace SpecBit;
//    triplet<double> age = *myPipe::Dep::vacuum_stability;
//    double scale=age.upper;//std::get<1>(age);
//    cout<< "checking perturbative up to high scale (of minimum lambda) = " << scale << endl;
//    const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
//    
//   // const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
//   // SingletDMZ3_input_parameters input;
//   // fill_SingletDMZ3_input(input,myPipe::Param);
//
//   // const Spectrum* fullspectrum = *myPipe::Dep::SingletDM_spectrum;
//
//    SingletDM_input_parameters input;
//    fill_SingletDM_input(input,myPipe::Param,sminputs,scale);
//
//    
//    error=float(check_perturb_func_SingletDM(input,sminputs));
//    }
//
//

   
   

  } // end namespace SpecBit
} // end namespace Gambit

