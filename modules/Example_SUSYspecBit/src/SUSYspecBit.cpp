//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SUSYspecBit.
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
///    \date 2013 May
///
///  *********************************************

#include <string>
#include <iostream>

#include "gambit_module_headers.hpp"
#include "SUSYspecBit_rollcall.hpp"
#include "MSSM_classes.hpp" // Contains definition of MSSMspecQ type.

namespace GAMBIT {

  namespace SUSYspecBit {
    
    // Void pointers for keeping track of softsusy objects. Probably this is a
    // slightly horrifying thing to do and we should do something nicer to
    // protect the user from its badness...
    // void *SMobj; //pointer to softsusy object tracking the SM parameter values
    // void *r;     //pointer to softsusy object which does the RGE running etc.
    
    // Initialization routine
    void initialize ()
    {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "***     Initializing SUSYspec module     ***" << std::endl;
      std::cout << "********************************************" << std::endl;
      
      // Run initialisation routine, which in turn runs the init routine for 
      // the softsusy backend.
      // initMSSMspec(SMobj,r); 
      
    }

    // Module functions
    /* removed; making placeholder versions.
    void initMSSMspec (void *SMobj, void *r) {
      // Run the initialisation routine from the backend. I don't currently
      // know any smoother way to do this...
      GET_BE_RESULT(initMSSMspec::BEinitMSSMspectrum, SMobj, r)
    }
    
    void CMSSMspec (int &result)          
    {
      cout << "My backend requirement of CMSSMspectrum has been filled by " << 
       GET_BE_FUNCNAME(CMSSMspec::BECMSSMspectrum) << " from " <<
       GET_BE_PACKAGE(CMSSMspec::BECMSSMspectrum) << ", v" << 
       GET_BE_VERSION(CMSSMspec::BECMSSMspectrum) << "." << endl;
      cout << "Running backend function...";
      GET_BE_RESULT(CMSSMspec::BECMSSMspectrum, SMobj, r);
    }
    */
    
    // This is a placeholder to satisfy the SMpars dependency of the spectrum
    // generating functions. Probably this should actually be satsfied by 
    // ModelBit once it is hooked into the dependency system.
    void setSMpars (SMpars &result)
    {
      // Hardcode some values
      SMpars smpars;
      smpars.mZ = 91.1876; //GeV. Possible uncertainty should be specified... likelihood?
      smpars.mtop = 172.9; //GeV
      
      // Return SMpars object
      result = smpars;
    }
    
    void setCMSSMpars (CMSSMpars &result)
    {
      // Hardcode some values
      CMSSMpars cmssmpars;
      cmssmpars.m0 = 100.;  //GeV
      cmssmpars.m12 = 100.; //GeV
      
      // Return SMpars object
      result = cmssmpars;
    }
    
    void setsoftmasses (MSSMsoftmassesQ &result)
    {
      // Hardcode some values
      MSSMsoftmassesQ mssmpars;
      mssmpars.softmasses.M1 = 100.; //GeV
      mssmpars.softmasses.M2 = 200.; //GeV
      
      // Return softmasses object
      result = mssmpars;
    }
    
    
    // END MODELBIT PLACEHOLDERS
    
    void CMSSMspec (MSSMspecQ &result)          
    {
      using namespace SafePointers::CMSSMspec;

      // Dependency resolution
      cout << endl << "My dependency on SMparameters has been filled by " << 
       GET_DEP_FUNCNAME(CMSSMspec::SMparameters) << " from " <<
       GET_DEP_MODULE(CMSSMspec::SMparameters) << "." << endl;
      cout << "Some values it contains are: ";
      cout << "mZ: " << (*Dep::SMparameters).mZ << endl;
      cout << "mtop: " << (*Dep::SMparameters).mtop << endl;
      
      // Backend resolution
      cout << "My backend requirement of CMSSMspectrum has been filled by " << 
       GET_BE_FUNCNAME(CMSSMspec::BECMSSMspectrum) << " from " <<
       GET_BE_PACKAGE(CMSSMspec::BECMSSMspectrum) << ", v" << 
       GET_BE_VERSION(CMSSMspec::BECMSSMspectrum) << "." << endl;
      cout << "Running backend function...";
      result = GET_BE_RESULT(CMSSMspec::BECMSSMspectrum, *Dep::SMparameters, *Dep::CMSSMparameters);
    }
    
    void genMSSMspec (MSSMspecQ &result)
    {
      using namespace SafePointers::genMSSMspec;

      // Dependency resolution
      cout << endl << "My dependency on SMparameters has been filled by " << 
       GET_DEP_FUNCNAME(genMSSMspec::SMparameters) << " from " <<
       GET_DEP_MODULE(genMSSMspec::SMparameters) << "." << endl;
      cout << "Some values it contains are: ";
      cout << "mZ: " << (*Dep::SMparameters).mZ << endl;
      cout << "mtop: " << (*Dep::SMparameters).mtop << endl;
      
      // Backend resolution
      cout << "My backend requirement of genMSSMspectrum has been filled by " << 
       GET_BE_FUNCNAME(genMSSMspec::BEgenMSSMspectrum) << " from " <<
       GET_BE_PACKAGE(genMSSMspec::BEgenMSSMspectrum) << ", v" << 
       GET_BE_VERSION(genMSSMspec::BEgenMSSMspectrum) << "." << endl;
      cout << "Running backend function...";
      result = GET_BE_RESULT(genMSSMspec::BEgenMSSMspectrum, *Dep::SMparameters, 
                                  *Dep::MSSMsoftmasses);
    }
    
  }

}
