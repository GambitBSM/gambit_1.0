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
      setup_QedQcd(oneset,sminputs);   //  FIX THIS

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
      
      //mssmspec.runningpars().set_override(Par::mass1,spectrum_generator.get_high_scale(),"high_scale",false);
      //mssmspec.runningpars().set_override(Par::mass1,spectrum_generator.get_susy_scale(),"susy_scale",false);
      //mssmspec.runningpars().set_override(Par::mass1,spectrum_generator.get_low_scale(), "low_scale", false);

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
      cout<< "Filled input parameters" << endl;
      result = run_FS_spectrum_generator<SSDM_interface<ALGORITHM1>>(input,sminputs,*myPipe::runOptions);
    }



    void test_SSDM_spectrum(double &result)
    {
      using namespace flexiblesusy;
      using namespace softsusy;
      namespace myPipe = Pipes::test_SSDM_spectrum;//get_SingletDM_spectrum;
      using namespace Gambit;
      //const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      const Spectrum* fullspectrum = *myPipe::Dep::SSDM_spectrum;
      const SubSpectrum* spec = fullspectrum->get_HE(); // SSDMSpec SubSpectrum object
     
      cout<<"Scalar pole mass:" << endl;
      cout<<spec->phys().get_Pole_Mass("S")  <<endl;
      cout<<"Higgs pole mass:" << endl;
      cout<<spec->phys().get_Pole_Mass("h0")  <<endl;

      SMInputs sminputs = fullspectrum->get_SMInputs();
      std::unique_ptr<SubSpectrum> SM = fullspectrum->clone_HE(); // COPIES Spectrum object
      double Mpl=1.1e19;// Define upper cutoff
      SM->runningpars().RunToScale(Mpl);
      double Lambda1 = SM->runningpars().get_dimensionless_parameter("Lambda1");
      result=Lambda1;   //spec->phys().get_Pole_Mass("S");
    }

    
    
        /// @} End Gambit module functions

  } // end namespace SpecBit
} // end namespace Gambit

