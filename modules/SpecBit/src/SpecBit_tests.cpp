//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  These functions link ModelParameters to 
///  Spectrum objects in various ways.
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

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
#include "gambit/SpecBit/external_examples.hpp"
#include "gambit/SpecBit/MSSMSpec.hpp"
#define IN_SPECBIT // Output tests to logger() rather than std::cout when run through SpecBit.
#include "gambit/SpecBit/SpecBit_tests.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "gambit/SpecBit/model_files_and_boxes.hpp"
#include "flexiblesusy/src/ew_input.hpp"
#include "flexiblesusy/src/numerics.hpp"

namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;
    using namespace flexiblesusy;

    /// Quick macro to simplify the check of Pipe::Models
    #define QUERYMODELS(MODEL) std::find(Pipe::Models->begin(), Pipe::Models->end(), MODEL) != Pipe::Models->end()
    
    /// Create a spectrum object for testing purposes
    void make_test_spectrum(SubSpectrum* &result)
    {
      typedef CMSSM_interface<ALGORITHM1> MI;
      static MI::Model FS_model; //start with empty flexiblesusy object
      // Or could use flexiblesusy classes directly; these two are equivalent in this case:
      //static CMSSM_slha<Two_scale> FS_model; //start with empty flexiblesusy object

      // Create model interface class (leaving input stuff with default values)
      MI model_interface(FS_model);

      // Create SubSpectrum object to wrap flexiblesusy object
      static MSSMSpec<MI> mssm(FS_model);

      // I think these objects should only get created once since they are static...      
      // ...and they should be destructed automatically when the program ends.

      setup(mssm.model_interface.model); //fill with some parameters
      mssm.model_interface.model.calculate_DRbar_parameters(); //calculated DRbar masses 
      mssm.model_interface.model.calculate_pole_masses();//now calculate pole masses

      // Check contents
      logger() << "This is specbit_tests. Checking SubSpectrum object contents..." << std::endl;
      if(TestMssmParGets(mssm, mssm.model_interface.model)==false){
          logger() << "TestMssmParGets fail." << std::endl;
          return;
       }
       if(TestMssmPoleGets(mssm, mssm.model_interface.model)==false){
          logger() << "TestMssmPoleGets fail." << std::endl;
          return;
       }
       //So now we have a mssm1 model object filled, as it will be
       //stored in Gambit after the spectrum generator has run
       // mssm.mass2_par_mapping(); //call mapping - this needs to be changed.
    
       mssm_manipulate(mssm);  //function can manipulate knowing the model
 
      // Store result for gambit to use
      result = &mssm;
    }

    /// Function to test out SpecBit features
    void specbit_test_func1 (double &result)
    {
      // Access the pipes for this function to get model and parameter information
       using namespace Pipes::specbit_test_func1;
       std::cout << "Running specbit_test_func1" << std::endl;
       std::cout << "Retrieving Spectrum*" << std::endl;
       const Spectrum* spec = *Dep::MSSM_spectrum;
 
       std::cout << "Running spec_manipulate" << std::endl;
       // Clone the UV Spectum object so we can access a non-const version
       std::unique_ptr<SubSpectrum> spec2 = spec->get_UV()->clone(); 
 
       spec_manipulate(*spec2); //function can manipulate without knowing model.
    }

    /// Function to test out SpecBit features
    void specbit_test_func2 (double &result)
    {
      std::cout << "Running specbit_test_func2" << std::endl;

      // TESTING
      // Direct access to flexiblesusy function, for testing
      std::cout << "Creating CMSSM_slha<Two_scale> object" << std::endl;
      CMSSM_slha<Two_scale> FS_model; //start with empty flexiblesusy object

      // Create model interface class (leaving input stuff with default values)
      std::cout << "Creating CMSSM_interface<Two_scale> object" << std::endl;
      CMSSM_interface<Two_scale> model_interface(FS_model);

      // Create SubSpectrum object to wrap flexiblesusy object
      std::cout << "Creating MSSMSpec<CMSSM_interface<Two_scale>> object" << std::endl;
      MSSMSpec<CMSSM_interface<Two_scale>> mssm(model_interface);

      // Test run functions
      std::cout << "SubSpectrum via MSSMSpec" << std::endl;
      std::cout << "mssm.runningpars.GetScale() =" 
          << mssm.runningpars.GetScale() << std::endl;
      std::cout << "mHd2 = "  
          << mssm.runningpars.get_mass2_parameter("mHd2") << std::endl;
      std::cout << "mHu2 = "  
          << mssm.runningpars.get_mass2_parameter("mHu2") << std::endl;

      // Do it again using a SubSpectrum base pointer
      SubSpectrum* spec = &mssm;
      std::cout << "SubSpectrum via SubSpectrum*" << std::endl;
      std::cout << "spec->runningpars.GetScale() =" 
          << spec->runningpars.GetScale() << std::endl;
      std::cout << "mHd2 = "  
          << spec->runningpars.get_mass2_parameter("mHd2") << std::endl;
      std::cout << "mHu2 = "  
          << spec->runningpars.get_mass2_parameter("mHu2") << std::endl;

      // Fill the model and do it again
      std::cout << "SubSpectrum via SubSpectrum* (filled)" << std::endl;
      setup(mssm.model_interface.model);
      std::cout << "spec->runningpars.GetScale() =" 
          << spec->runningpars.GetScale() << std::endl;
      std::cout << "mHd2 = "  
          << spec->runningpars.get_mass2_parameter("mHd2") << std::endl;
      std::cout << "mHu2 = "  
          << spec->runningpars.get_mass2_parameter("mHu2") << std::endl;

    }

    /// Function to test out SpecBit features
    void specbit_test_func3 (double &result)
    {
      // Requests a SubSpectrum object of capability SM_spectrum; test what we can retrieve from this
      using namespace Pipes::specbit_test_func3;
      const SubSpectrum* spec = *Dep::SM_spectrum; //Test retrieve pointer to Spectrum object 

      std::unique_ptr<SubSpectrum> spec2 = spec->clone(); 

      SM_checks(*spec2); // Run some tests on standard model parameters 
      logger() << EOM;
    }

    /// Test out consistency of Spectrum object (and pre-extracted SM SubSpectrum*)
    void specbit_test_Spectrum (double &result)
    {
      using namespace Pipes::specbit_test_Spectrum;
      const Spectrum* matched_spectra = *Dep::MSSM_spectrum;
      const SubSpectrum* sm = *Dep::SM_spectrum; 
 
      Spectrum_test(matched_spectra,sm); // Run consistency tests on Spectrum contents vs SMInputs 
      logger() << EOM;
    }

  } // end namespace SpecBit
} // end namespace Gambit

