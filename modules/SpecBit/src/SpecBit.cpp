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
///  *********************************************

#include <string>
#include <sstream>

#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/Utils/stream_overloads.hpp" // Just for more convenient output to logger
#include "gambit/Utils/util_macros.hpp"
#include "gambit/Utils/Spectrum.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/MSSMSpec.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"
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

    // To check if a model is currently being scanned:
    // bool Pipes::<fname>::ModelInUse(str model_name)

    /// @{

    /// Non-Gambit convenience functions
    //  =======================================================================
    //  These are not known to Gambit, but they do basically all the real work.
    //  The Gambit module functions merely wrap the functions here and hook 
    //  them up to their dependencies, and input parameters.

    /// Initialise QedQcd object from SMInputs data
    void setup_QedQcd(QedQcd& oneset, const SMInputs& sminputs)
    {
      oneset.setPoleMt(sminputs.mT);
      //oneset.setPoleMb(...);
      oneset.setPoleMtau(sminputs.mTau);
      oneset.setMbMb(sminputs.mBmB);
      /// set running quark masses
      oneset.setMass(mDown,    sminputs.mD);
      oneset.setMass(mUp,      sminputs.mU);
      oneset.setMass(mStrange, sminputs.mS);
      oneset.setMass(mCharm,   sminputs.mCmC);
      /// set QED and QCD structure constants
      oneset.setAlpha(ALPHA, 1./sminputs.alphainv);
      oneset.setAlpha(ALPHAS, sminputs.alphaS);
      ///TODO: Not sure how to set other stuff.
    }

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
    const SMplusUV* run_FS_spectrum_generator
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
      // alpha_b alpha_s
      // alpha_t^2 + alpha_t alpha_b + alpha_b^2
      // alpha_tau^2
      higgs_2loop_settings.at_as     = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_at_as");
      higgs_2loop_settings.ab_as     = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_ab_as");
      higgs_2loop_settings.at_at     = runOptions.getValueOrDef<bool>(true,"use_higgs_2loop_at_at");
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

      // Create a second Spectrum object to wrap the qedqcd object used to initialise the spectrum generator
      static QedQcdWrapper qedqcdspec(oneset);

      if( runOptions.getValue<bool>("invalid_point_fatal") and problems.have_problem() )
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

      // Write SLHA file (for debugging purposes...)
      #ifdef SpecBit_DBUG
         typename MI::SlhaIo slha_io;
         slha_io.set_spinfo(problems);
         slha_io.set_sminputs(oneset);
         slha_io.set_minpar(input);
         slha_io.set_extpar(input);
         slha_io.set_spectrum(mssmspec.model_interface.model);
         slha_io.write_to_file("SpecBit/initial_CMSSM_spectrum.slha");
      #endif

      // Package pointer to QedQcd Spectrum object along with pointer to MSSM Spectrum object, 
      // and SMInputs struct.
      // Return pointer to this package.
      static SMplusUV matched_spectra(&qedqcdspec,&mssmspec,sminputs);
      return &matched_spectra;
    }


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

    /// Helper function for filling MSSM78-compatible input parameter objects
    template <class T>
    void fill_MSSM78_input(T& input, const std::map<str, safe_ptr<double> >& Param )
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
    /// @} End module convenience functions

    /// @{ 
  
    /// Gambit module functions 
    //  =======================================================================
    //  These are wrapped up in Gambit functor objects according to the
    //  instructions in the rollcall header

    /// Set SMINPUTS (SLHA2) struct to match StandardModel_SLHA2 parameters.
    //  Effectively just changes these model parameters into a more convenient form.
    //  But also opens up the possibility of rebuilding this struct from some other
    //  parameterisation.
    void get_SMINPUTS(SMInputs &result)
    {
      namespace myPipe = Pipes::get_SMINPUTS;
      SMInputs sminputs; 
      
      // Get values from Params pipe
      // (as defined in SLHA2)
      if(myPipe::ModelInUse("StandardModel_SLHA2"))
      {
         sminputs.alphainv = *myPipe::Param["alphainv"];
         sminputs.GF       = *myPipe::Param["GF"      ];
         sminputs.alphaS   = *myPipe::Param["alphaS"  ];

         sminputs.mZ       = *myPipe::Param["mZ"      ]; 

         sminputs.mE       = *myPipe::Param["mE"      ];
         sminputs.mMu      = *myPipe::Param["mMu"     ];
         sminputs.mTau     = *myPipe::Param["mTau"    ];

         sminputs.mNu1     = *myPipe::Param["mNu1"    ];
         sminputs.mNu2     = *myPipe::Param["mNu2"    ];
         sminputs.mNu3     = *myPipe::Param["mNu3"    ];

         sminputs.mD       = *myPipe::Param["mD"      ];
         sminputs.mU       = *myPipe::Param["mU"      ];
         sminputs.mS       = *myPipe::Param["mS"      ];
         sminputs.mCmC     = *myPipe::Param["mCmC"    ];
         sminputs.mBmB     = *myPipe::Param["mBmB"    ]; 
         sminputs.mT       = *myPipe::Param["mT"      ];
      }
      else
      {
         std::ostringstream errmsg;
         errmsg << "Error mapping Standard Model parameters to SMINPUTS capabilities!";
         errmsg << "Perhaps you have added a new model to the ALLOWED_MODELS of this ";
         errmsg << "module function but have not added a corresponding case in the ";
         errmsg << "function source (here)." << std::endl;
         SpecBit_error().raise(LOCAL_INFO,errmsg.str());  
      }
      // Return filled struct
      result = sminputs;
    }

    // Functions to changes the capability associated with a Spectrum object to 
    // "SM_spectrum"
    //TODO: "temporarily" removed
    //void convert_MSSM_to_SM   (const Spectrum* &result) {result = *Pipes::convert_MSSM_to_SM::Dep::MSSM_spectrum;}

    //void convert_NMSSM_to_SM  (Spectrum* &result) {result = *Pipes::convert_NMSSM_to_SM::Dep::NMSSM_spectrum;}
    //void convert_E6MSSM_to_SM (Spectrum* &result) {result = *Pipes::convert_E6MSSM_to_SM::Dep::E6MSSM_spectrum;}

    void get_CMSSM_spectrum (const SMplusUV* &result)
    {

      // Access the pipes for this function to get model and parameter information
      namespace myPipe = Pipes::get_CMSSM_spectrum;

      // Get SLHA2 SMINPUTS values
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;

      // Get input parameters
      CMSSM_input_parameters input;
   
      input.m0      = *myPipe::Param["M0"];
      input.m12     = *myPipe::Param["M12"];
      input.TanBeta = *myPipe::Param["tanb"];
      input.SignMu  = *myPipe::Param["signmu"];
      input.Azero   = *myPipe::Param["A0"];
  
      // Run spectrum generator
      result = run_FS_spectrum_generator<CMSSM_interface<ALGORITHM1>>(input,sminputs,*myPipe::runOptions);
      
      // Dump spectrum information to slha file (for testing...)
      result->get_UV()->dump2slha("SpecBit/CMSSM_fromSpectrumObject.slha");
    }

    // Runs MSSM spectrum generator with EWSB scale input
    void get_MSSMatQ_spectrum (const SMplusUV* &result)
    {
      using namespace softsusy;
      namespace myPipe = Pipes::get_MSSMatQ_spectrum;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
      MSSM_input_parameters input;
      input.Qin = *myPipe::Param.at("Qin"); // MSSMatQ also requires input scale to be supplied
      fill_MSSM78_input(input,myPipe::Param);
      result = run_FS_spectrum_generator<MSSM_interface<ALGORITHM1>>(input,sminputs,*myPipe::runOptions);
    }

    // Runs MSSM spectrum generator with GUT scale input
    void get_MSSMatMGUT_spectrum (const SMplusUV* &result)
    {
      using namespace softsusy;
      namespace myPipe = Pipes::get_MSSMatMGUT_spectrum;
      const SMInputs& sminputs = *myPipe::Dep::SMINPUTS;
      MSSMatMGUT_input_parameters input;
      fill_MSSM78_input(input,myPipe::Param);
      result = run_FS_spectrum_generator<MSSMatMGUT_interface<ALGORITHM1>>(input,sminputs,*myPipe::runOptions);
    }

    void get_GUTMSSMB_spectrum (const SMplusUV* &result)
    {
      // Placeholder
    }

    /// @{
    /// Functions to decompose SMplusUV object (of type MSSM_spectrum)

    /// Retrieve Spectrum* to MSSM UV model from SMplusUV object
    /// DEPENDENCY(MSSM_spectrum, SMplusUV)
    void get_MSSM_spectrum_as_SpectrumPtr_from_matchedMSSM (const Spectrum* &result)
    {
      namespace myPipe = Pipes::get_MSSM_spectrum_as_SpectrumPtr_from_matchedMSSM;
      const SMplusUV* matched_spectra(*myPipe::Dep::MSSM_spectrum);
      result = matched_spectra->get_UV();
    }

    /// @} 
    /// Retrieve Spectrum* to MSSM UV model from SMplusUV object
    /// DEPENDENCY(MSSM_spectrum, SMplusUV)
    void get_SM_spectrum_as_SpectrumPtr_from_matchedMSSM (const Spectrum* &result)
    {
      namespace myPipe = Pipes::get_SM_spectrum_as_SpectrumPtr_from_matchedMSSM;
      const SMplusUV* matched_spectra(*myPipe::Dep::MSSM_spectrum);
      result = matched_spectra->get_SM();
    }


    // Dump whatever is in the spectrum object to SLHA
    // This is mostly for testing purposes.
    void dump_spectrum(double &result)
    {
      namespace myPipe = Pipes::dump_spectrum;
      const Spectrum* spec(*myPipe::Dep::SM_spectrum);
      std::string filename(myPipe::runOptions->getValue<std::string>("filename"));
      spec->dump2slha(filename);
      result = 1;
    }

    /// Extract an SLHAea version of the spectrum contained in a Spectrum object
    //  (with capability MSSM_spectrum)
    //  DEPENDENCY(MSSM_spectrum, Spectrum*)  
    void get_MSSM_spectrum_as_SLHAea (SLHAea::Coll &result)
    {
      namespace myPipe = Pipes::get_MSSM_spectrum_as_SLHAea;
      const Spectrum* spec(*myPipe::Dep::MSSM_spectrum);
      result = spec->getSLHAea();
    }
     
    /// @} End Gambit module functions

  } // end namespace SpecBit
} // end namespace Gambit

