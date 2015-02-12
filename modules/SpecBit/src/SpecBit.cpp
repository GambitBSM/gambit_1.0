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
///          (ben.farmer@gmail.com)
///    \date 2014 Sep
///  
///  *********************************************

#include <string>
#include <sstream>

#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/Utils/stream_overloads.hpp" // Just for more convenient output to logger
#include "gambit/Utils/util_macros.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/MSSMSpec.hpp"
#include "gambit/SpecBit/model_files_and_boxes.hpp" // #includes lots of flexiblesusy headers and defines interface classes

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/src/ew_input.hpp"
#include "flexiblesusy/src/lowe.h" // From softsusy; used by flexiblesusy
#include "flexiblesusy/src/numerics.hpp"

// Switch for debug mode
#define SpecBit_DBUG 

namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;
    using namespace flexiblesusy;

    /// Quick macro to simplify the check of Pipe::Models
    //#define QUERYMODELS(MODEL) (std::find(Pipe::Models->begin(), \
                                          Pipe::Models->end(), \
                                          MODEL) != Pipe::Models->end())
    //OBSOLETE! Use the following instead:
    //bool Pipes::<fname>::ModelInUse(str model_name)

    /// Module convenience functions
    // These are not known to Gambit.

    /// Compute an MSSM spectrum using flexiblesusy
    // In GAMBIT there are THREE flexiblesusy MSSM spectrum generators currently in
    // use, for each of three possible boundary condition types:
    //   - GUT scale input
    //   - Electroweak symmetry breaking scale input
    //   - Intermediate scale Q input
    // These each require slightly different setup, but once that is done the rest
    // of the code required to run them is the same; this is what is contained in
    // the below template function.
    template <class MI>  // MI for Model_interface
    Spectrum* run_FS_spectrum_generator(const typename MI::InputParameters &input, const Options &runOptions)
    {
      // SoftSUSY object used to set quark and lepton masses and gauge
      // couplings in QEDxQCD effective theory
      // Will be initialised by default using values in lowe.h. Should add code here to
      // input any Standard Model values which we want to vary with the scan. Also need
      // to implement a strategy for carrying SM parameters around gambit consistently.
      QedQcd oneset; 
      #ifdef SpecBit_DBUG
         // Get QedQcd values to match LesHouches.in.MSSM_1 
         oneset.setPoleMt(1.73300000e2);
         //oneset.setPoleMb(...);
         oneset.setPoleMtau(1.77700000);
         oneset.setMbMb(4.20000000);
         /// sets a running quark mass
         oneset.setMass(mDown,    4.76052706e-3);
         oneset.setMass(mUp,      2.40534062e-3);
         oneset.setMass(mStrange, 1.04230487E-01);
         oneset.setMass(mCharm, 1.27183378);
         /// sets QED or QCD structure constant
         oneset.setAlpha(ALPHA, 1./1.27934000e2 );
         oneset.setAlpha(ALPHAS, 1.17600000e-1 );
         // Not sure how to set other stuff.
      #endif 
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
         CAT_2(spectrum_generator.set_, NAME) BOOST_PP_LPAREN() runOptions.getValueOrDef< TYPE > \
               BOOST_PP_LPAREN() DEFAULTVAL BOOST_PP_COMMA() STRINGIFY(NAME) \
               BOOST_PP_RPAREN() BOOST_PP_RPAREN()
      // Ugly I know. It expands to:
      // spectrum_generator.set_NAME(runOptions.getValueOrDef<TYPE>(DEFAULTVAL,"NAME"))

      // For debugging only; check expansions
      #ifdef SpecBit_DBUG
         #define ECHO(COMMAND) std::cout << SAFE_STRINGIFY(COMMAND) << std::endl
         ECHO(  SPECGEN_SET(precision_goal,                 double, 1.0e-4)  );
         ECHO(  SPECGEN_SET(max_iterations,                 double, 0 )      );
         ECHO(  SPECGEN_SET(calculate_sm_masses,              bool, false )  );
         ECHO(  SPECGEN_SET(pole_mass_loop_order,              int, 2 )      );
         ECHO(  SPECGEN_SET(ewsb_loop_order,                   int, 2 )      );
         ECHO(  SPECGEN_SET(beta_loop_order,                   int, 2 )      );
         ECHO(  SPECGEN_SET(threshold_corrections_loop_order,  int, 1 )      );
         #undef ECHO
      #endif

      SPECGEN_SET(precision_goal,                 double, 1.0e-4);
      SPECGEN_SET(max_iterations,                 double, 0 );
      SPECGEN_SET(calculate_sm_masses,              bool, false );
      SPECGEN_SET(pole_mass_loop_order,              int, 2 );
      SPECGEN_SET(ewsb_loop_order,                   int, 2 );
      SPECGEN_SET(beta_loop_order,                   int, 2 );
      SPECGEN_SET(threshold_corrections_loop_order,  int, 1 );

      #undef SPECGEN_SET

      // Higgs loop corrections are a little different... sort them out now     
      Higgs_2loop_corrections higgs_2loop_settings;

      // alpha_t alpha_s
      higgs_2loop_settings.at_as = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_at_as");
      // alpha_b alpha_s
      higgs_2loop_settings.ab_as = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_ab_as");
      // alpha_t^2 + alpha_t alpha_b + alpha_b^2
      higgs_2loop_settings.at_at = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_at_at");
      // alpha_tau^2
      higgs_2loop_settings.atau_atau = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_atau_atau");

      spectrum_generator.set_higgs_2loop_corrections(higgs_2loop_settings);

 
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

      // Create Spectrum object to wrap flexiblesusy data
      // THIS IS STATIC so that it lives on once we leave this module function. We 
      // therefore cannot run the same spectrum generator twice in the same loop and 
      // maintain the spectrum resulting from both. But we should never want to do 
      // this.
      // A pointer to this object is what gets turned into a Spectrum pointer and
      // passed around Gambit.
      //
      // This object will COPY the interface data members into itself, so it is now the 
      // one-stop-shop for all spectrum information, including the model interface object.
      static MSSMSpec<MI> mssmspec(model_interface);

      if( runOptions.getValue<bool>("invalid_point_fatal") and problems.have_problem() )
      {
         ///TODO: Need to tell gambit that the spectrum is not viable somehow. For now
         // just die.
         std::ostringstream errmsg;
         errmsg << "A serious problem was encountered during spectrum generation! \
Message from flexibleSUSY below:" << std::endl;
         problems.print_problems(errmsg); 
         problems.print_warnings(errmsg); 
         SpecBit_error().raise(LOCAL_INFO,errmsg.str());  
      }  
 
      // Write SLHA file (for debugging purposes...)
      typename MI::SlhaIo slha_io;
      slha_io.set_spinfo(problems);
      slha_io.set_sminputs(oneset);
      slha_io.set_minpar(input);
      slha_io.set_extpar(input);
      slha_io.set_spectrum(mssmspec.get_bound_spec()); //get_bound_spec retrieves the Model
      slha_io.write_to_file("SpecBit/initial_CMSSM_spectrum.slha");

      // Return a pointer to the Spectrum object
      return &mssmspec;
    }
    //
    //
    //   // We want to store things in a "generic" flexiblesusy MSSM object. But in 
    //   // flexiblesusy, there are different classes for each different MSSM-variant,
    //   // even for simple changes like altering boundary conditions. So we need to take
    //   // the low-scale spectrum data that results from the spectrum computation, and 
    //   // copy it into the generic container. Need to write some routines to do this 
    //   // (below is a placeholder). 
    //   generic_mssm.get_lowe_data_from(model);
    //
    //   return &generic_mssm;
    // }

    /// Helper function for setting 3x3 matrix-valued parameters
    //  Names must conform to convention "<parname>_ij"
    Eigen::Matrix<double,3,3> fill_3x3_parameter_matrix(const std::string& rootname, const std::map<str, safe_ptr<double> >& Param)
    {
       Eigen::Matrix<double,3,3> output;
       for(int i=0; i<3; ++i) { for(int j=0; j<3; ++j) { 
         std::stringstream parname;
         parname << rootname << "_" << (i+1) << (j+1); // Assumes names in 1,2,3 convention
         /// TODO: Error checking...
         output(i,j) = *Param.at(parname.str());
       }}
       return output;
    }


    /// Gambit module functions
    //  These are wrapped up in Gambit functor objects according to the
    //  instructions in the rollcall header

    // Functions to changes the capability associated with a Spectrum object to 
    // "SM_spectrum"
    void convert_MSSM_to_SM   (Spectrum* &result) {result = *Pipes::convert_MSSM_to_SM::Dep::MSSM_spectrum;}
    //void convert_NMSSM_to_SM  (Spectrum* &result) {result = *Pipes::convert_NMSSM_to_SM::Dep::NMSSM_spectrum;}
    //void convert_E6MSSM_to_SM (Spectrum* &result) {result = *Pipes::convert_E6MSSM_to_SM::Dep::E6MSSM_spectrum;}

    void get_CMSSM_spectrum (Spectrum* &result)
    {

      // Access the pipes for this function to get model and parameter information
      namespace Pipe = Pipes::get_CMSSM_spectrum;

      // Get input parameters
      CMSSM_input_parameters input;
   
      input.m0      = *Pipe::Param["M0"];
      input.m12     = *Pipe::Param["M12"];
      input.TanBeta = *Pipe::Param["tanb"];
      input.SignMu  = *Pipe::Param["signmu"];
      input.Azero   = *Pipe::Param["A0"];
  
      // Run spectrum generator
      result = run_FS_spectrum_generator<CMSSM_interface<ALGORITHM1>>(input,*Pipe::runOptions);
      
      // Dump spectrum information to slha file (for testing...)
      result->dump2slha("SpecBit/CMSSM_fromSpectrumObject.slha");
    }

    // Helper function for filling MSSM78-compatible input parameter objects
    template <class T>
    void fill_MSSM_input(T& input, const std::map<str, safe_ptr<double> >& Param )
    {

      //double valued parameters
      input.TanBeta     = *Param.at("TanBeta");
      input.SignMu      = *Param.at("SignMu");
      input.mHu2IN      = *Param.at("mHu2");
      input.mHd2IN      = *Param.at("mHd2");
      input.MassBInput  = *Param.at("M1");
      input.MassWBInput = *Param.at("M2");
      input.MassGInput  = *Param.at("M3");

      //3x3 matrices; filled with the help of a convenience function
      input.mq2Input = fill_3x3_parameter_matrix("mq2", Param);
      input.ml2Input = fill_3x3_parameter_matrix("ml2", Param);
      input.md2Input = fill_3x3_parameter_matrix("md2", Param);
      input.mu2Input = fill_3x3_parameter_matrix("mu2", Param);
      input.me2Input = fill_3x3_parameter_matrix("me2", Param);
      input.Aeij = fill_3x3_parameter_matrix("Ae", Param);
      input.Adij = fill_3x3_parameter_matrix("Ad", Param);
      input.Auij = fill_3x3_parameter_matrix("Au", Param);

      #ifdef SpecBit_DBUG
        #define INPUT(p) input.p
        #define ostr std::cout
        #define oend std::endl
        ostr << "TanBeta = " << INPUT(TanBeta) << ", " << oend ;
        ostr << "SignMu = " << INPUT(SignMu) << ", " << oend;
        ostr << "mHd2IN = " << INPUT(mHd2IN) << ", " << oend;
        ostr << "mHu2IN = " << INPUT(mHu2IN) << ", " << oend;
        ostr << "mq2Input = " << oend << INPUT(mq2Input) << ", " << oend;
        ostr << "ml2Input = " << oend << INPUT(ml2Input) << ", " << oend;
        ostr << "md2Input = " << oend << INPUT(md2Input) << ", " << oend;
        ostr << "mu2Input = " << oend << INPUT(mu2Input) << ", " << oend;
        ostr << "me2Input = " << oend << INPUT(me2Input) << ", " << oend;
        ostr << "MassBInput = " << INPUT(MassBInput) << ", " << oend;
        ostr << "MassWBInput = " << INPUT(MassWBInput) << ", " << oend;
        ostr << "MassGInput = " << INPUT(MassGInput) << ", " << oend;
        ostr << "Aeij = " << oend << INPUT(Aeij) << ", " << oend;
        ostr << "Adij = " << oend << INPUT(Adij) << ", " << oend;
        ostr << "Auij = " << oend << INPUT(Auij) << ", " << oend;
        #undef INPUT
        #undef ostr
        #undef oend
      #endif

    }

    // Runs MSSM spectrum generator with EWSB scale input
    void get_MSSMatQ_spectrum (Spectrum* &result)
    {
      using namespace softsusy;
      namespace Pipe = Pipes::get_MSSMatQ_spectrum;
      MSSM_input_parameters input;
      input.Qin = *Pipe::Param.at("Qin"); // MSSMatQ also requires input scale to be supplied
      #ifdef SpecBit_DBUG
        std::cout << "Qin = " << input.Qin << ", ";
      #endif
      fill_MSSM_input(input,Pipe::Param);
      result = run_FS_spectrum_generator<MSSM_interface<ALGORITHM1>>(input,*Pipe::runOptions);
    }

    // Runs MSSM spectrum generator with GUT scale input
    void get_MSSMatMGUT_spectrum (Spectrum* &result)
    {
      using namespace softsusy;
      namespace Pipe = Pipes::get_MSSMatMGUT_spectrum;
      MSSMatMGUT_input_parameters input;
      fill_MSSM_input(input,Pipe::Param);
      result = run_FS_spectrum_generator<MSSMatMGUT_interface<ALGORITHM1>>(input,*Pipe::runOptions);
    }

    void get_GUTMSSMB_spectrum (Spectrum* &result)
    {
      // Placeholder
    }


    // Dump whatever is in the spectrum object to SLHA
    // This is mostly for testing purposes.
    void dump_spectrum(double &result)
    {
      namespace Pipe = Pipes::dump_spectrum;
      Spectrum* spec(*Pipe::Dep::SM_spectrum);
      std::string filename(Pipe::runOptions->getValue<std::string>("filename"));
      spec->dump2slha(filename);
      result = 1;
    }

    // Extract an SLHAea version of the spectrum contained in a Spectrum object
    // (with capability MSSM_spectrum)
    void get_MSSM_spectrum_as_SLHAea (SLHAea::Coll &result)
    {
      namespace Pipe = Pipes::get_MSSM_spectrum_as_SLHAea;
      Spectrum* spec(*Pipe::Dep::MSSM_spectrum);
      result = spec->getSLHAea();
    }

  } // end namespace SpecBit
} // end namespace Gambit

