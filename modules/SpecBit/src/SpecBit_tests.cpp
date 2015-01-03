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
///          (ben.farmer@gmail.com)
///    \date 2014 Sep
///  
///  *********************************************

#include "gambit_module_headers.hpp"
#include "SpecBit_rollcall.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "CMSSM_two_scale_model.hpp"
#include "CMSSM_two_scale_model_slha.hpp"
//#include "CMSSM_physical.hpp"

#include "ew_input.hpp"
//#include "logger.hpp"
//#include "wrappers.hpp"
#include "MSSMSpec.hpp"
#include "numerics.hpp"

// Used in SpecBit_tests.hpp to switch the test output to logger() rather than std::cout when run through SpecBit.
#define IN_SPECBIT
// Spectrum object test functions
#include "SpecBit_tests.hpp"
#include "SpecBit_examples.hpp"
namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;
    using namespace flexiblesusy;

    /// Quick macro to simplify the check of Pipe::Models
    #define QUERYMODELS(MODEL) std::find(Pipe::Models->begin(), Pipe::Models->end(), MODEL) != Pipe::Models->end()
    
    /// Create a spectrum object for testing purposes
    void make_test_spectrum(Spectrum* &result)
    {
      static CMSSM_slha<Two_scale> FS_model; //start with empty flexiblesusy object
   
      // Create Spectrum object to wrap flexiblesusy object
      
      //std::unique_ptr<FS::MSSMSpec> mssm(new FS::MSSMSpec(mssm1));      
      static MSSMSpec<CMSSM_slha<Two_scale>> mssm(FS_model);

      // I think these objects should only get created once since they are static...      
      // ...and they should be destructed automatically when the program ends.

      setup(mssm.model); //fill with some parameters
      mssm.model.calculate_DRbar_parameters(); //calculated DRbar masses 
      mssm.model.calculate_pole_masses();//now calculate pole masses

      // Check contents
      logger() << "This is specbit_tests. Checking Spectrum object contents..." << std::endl;
      if(TestMssmParGets(mssm, mssm.model)==false){
          logger() << "TestMssmParGets fail." << std::endl;
          return;
       }
       if(TestMssmPoleGets(mssm, mssm.model)==false){
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

      Spectrum* spec = *Dep::MSSM_spectrum; //Test retrieve pointer to Spectrum object 

      //const Spectrum& spec(*(Dep::particle_spectrum->get())); // Get Spectrum object ptr out of dependency pipe and make a nice reference out of it.

      spec_manipulate(spec); //function can manipulate without knowing model.

      logger() << EOM;  
    }

    /// Function to test out SpecBit features
    void specbit_test_func2 (double &result)
    {
    }

    /// Function to test out SpecBit features
    void specbit_test_func3 (double &result)
    {
      // Requests a Spectrum object of capability SM_spectrum; test what we can retrieve from this
      using namespace Pipes::specbit_test_func3;
      Spectrum* spec = *Dep::SM_spectrum; //Test retrieve pointer to Spectrum object 

      SM_checks(spec); // Run some tests on standard model parameters 
      logger() << EOM;
    }


  } // end namespace SpecBit
} // end namespace Gambit

