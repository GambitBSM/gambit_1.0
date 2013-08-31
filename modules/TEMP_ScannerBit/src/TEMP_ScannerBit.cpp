//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module TEMP_ScannerBit.
///
///  Currently only accesses the SoftSUSY backend
///  for MSSM spectrum generation.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2013 July
///
///  *********************************************

#include <string>
#include <iostream>

#include "gambit_module_headers.hpp"
#include "TEMP_ScannerBit_rollcall.hpp"
#include "ModelParameters.hpp"

namespace GAMBIT {

  namespace TEMP_ScannerBit {
    
    // Initialization routine
    void initialize ()
    {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "*** Initializing TEMP_ScannerBit module  ***" << std::endl;
      std::cout << "********************************************" << std::endl;
    }

    void generate_parameters (std::map<std::string,double> &result)
    {
      // Generate some random parameters!
      // In the real ScannerBit we should do this by getting the user-chosen
      // model from the core, that is, the core supplies the functor containing 
      // the corresponding ModelParameters object.
      // * We then will run ModelParameters.getKeys(), retrieving a vector of 
      // strings of the parameter names.
      // * Use this to generate the appropriate number of parameter values.
      // * Run this through some prior function, mapping it to the appropriate
      // range, distribution, etc.
      // * Using the Keys, put the parameter values and names into the output
      // map. This will be automatically retrieved by ModelBit via the
      // dependency system (since the initial ModelParameters functor will have
      // "random_parameters" as a dependency, or whatever better name we give
      // this capability)
      //
      // In this test code we skip to the end. This only works for CMSSM_I since
      // the core doesn't deliver the required functor yet....
      
      // e.g:
      /*
      // Get the ModelParameters functor for the chosen model from the core:
      safe_ptr<ModelParameters> chosen_model = models::CMSSM_I::Functown::parameters.valuePtr();
      // Might need to run the calculate() function to make sure the parameter
      // keys have been initialised.
      std::vector<str> paramkeys = chosen_model->getKeys();
      
      // Generate the required number of random values, and put them in the
      // output map
      srand (time(NULL));    // initialize random seed
      for (std::vector<str>::iterator key = paramkeys.begin(); key!=paramkeys.end(); ++key) {
        result[*key] = rand()%1000;
      }
      
      // Scanner job done! Dependency system will deliver this map to 
      // ModelBit, which will put the numbers into the ModelParameters
      // functor when its "calculate()" method is called.
      */
      
      // Hacky temp version
      std::vector<str> paramkeys = delimiterSplit("M0, M12, A0, tanb, sgnmu",", ");
      srand (time(NULL));    // initialize random seed
      for (std::vector<str>::iterator key = paramkeys.begin(); key!=paramkeys.end(); ++key) {
        result[*key] = rand()%1000;
      }
    }
    
  }

}
