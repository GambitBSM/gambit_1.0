//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend header for the Lilith backend.
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///  \date 2016 Aug
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/Lilith_1_1_3.hpp"
#include <Python.h>
//#include "lilith.h"

BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    Py_Initialize();
       // Parameters:
    // * Experimental list path
    // * Path to a user input file
    char experimental_input[] = "/Users/jamesmckay/Documents/Programs/gambit/Backends/installed/lilith/1.1.3/data/latest.list";
//    char XMLinputpath[] = "userinput/example_couplings.xml";
  
    // Accessible outputs for a given point
    // * Output of the reduced couplings
    // * Output of the various contributions to the total -2LogL in a XML format
    // * Output of the total -2LogL in a SLHA format
    // * Output of the signal strengths
  //  char output_couplings[] = "lilith_couplings_output.xml";
  //  char output_XML[] = "lilith_likelihood_output.xml";
  //  char output_SLHA[] = "lilith_likelihood_output.slha";
  //  char output_mu[] = "lilith_mu_output.xml";
  
  
  
    // Creating an object of the class Lilith: lilithcalc
    PyObject* lilithcalc = initialize_lilith(experimental_input);
    scan_level = false;
  }

}
END_BE_INI_FUNCTION
