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
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
///  *********************************************

#include <string>
#include <iostream>

// from contrib/SLHAPy8
#include "Pythia8/SusyLesHouches.h"

#include "gambit_module_headers.hpp"
#include "SLHA_types.hpp"
#include "SUSYspecBit_rollcall.hpp"

namespace Gambit {

  namespace SUSYspecBit {
    
    // Void pointers for keeping track of softsusy objects. Probably this is a
    // slightly horrifying thing to do and we should do something nicer to
    // protect the user from its badness...
    // void *SMobj; //pointer to softsusy object tracking the SM parameter values
    // void *r;     //pointer to softsusy object which does the RGE running etc.

    // Ben: Sticking this as a global variable for testing purposes...    
    Pythia8::SusyLesHouches testSLHAobj(1);

    //************************************************************

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

      // Ben: using this to test the Pythia8 SLHA reader/writer
      testSLHAobj.readFile("Example_SUSYspecBit/spectrsp.dat");
    }

    //************************************************************

    /// Initialisation function, called anew for each new model point before all other module functions are called.
    void PointInit_Default()
    {
      cout<<"  Initialising Example_SUSYspecBit for current point."<<endl;
    }

    //************************************************************


    /// Testing SLHA reader
    void testSLHA (int &result)
    {
      using namespace Pipes::testSLHA;

      // Ben: using this to test the Pythia8 SLHA reader/writer
      testSLHAobj.printHeader();   // print Header
      testSLHAobj.printFooter();   // print Footer
      testSLHAobj.printSpectrum(); // print Spectrum
      exit(0);

      //result = ??;
    }
    

    // Module functions
    /* removed; making placeholder versions.
    void initMSSMspec (void *SMobj, void *r) {
      // Run the initialisation routine from the backend. I don't currently
      // know any smoother way to do this...
      using namespace Pipes::initMSSMspec;
      BEreq::BEinitMSSMspectrum(SMobj, r);
    }
    
    void CMSSMspec (int &result)          
    {
      using namespace Pipes::CMSSMspec;
      cout << "My backend requirement of CMSSMspectrum has been filled by " << 
       BEreq::BECMSSMspectrum.name() << " from " <<
       BEreq::BECMSSMspectrum.backend() << ", v" << 
       BEreq::BECMSSMspectrum.version() << "." << endl;
      cout << "Running backend function...";
      BEreq::BECMSSMspectrum(SMobj, r);
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
      using namespace Pipes::CMSSMspec;

      // Dependency resolution
      cout << endl << "My dependency on SMparameters has been filled by " << 
       Dep::SMparameters.name() << " from " <<
       Dep::SMparameters.module() << "." << endl;
      cout << "Some values it contains are: ";
      cout << "mZ: " << (*Dep::SMparameters).mZ << endl;
      cout << "mtop: " << (*Dep::SMparameters).mtop << endl;
      
      // Backend resolution
      cout << "My backend requirement of CMSSMspectrum has been filled by " << 
       BEreq::BECMSSMspectrum.name() << " from " <<
       BEreq::BECMSSMspectrum.backend() << ", v" << 
       BEreq::BECMSSMspectrum.version() << "." << endl;
      cout << "Running backend function...";
      result = BEreq::BECMSSMspectrum(*Dep::SMparameters, *Dep::CMSSMparameters);
    }
    
    void genMSSMspec (MSSMspecQ &result)
    {
      using namespace Pipes::genMSSMspec;

      // Dependency resolution
      cout << endl << "My dependency on SMparameters has been filled by " << 
       Dep::SMparameters.name() << " from " <<
       Dep::SMparameters.module() << "." << endl;
      cout << "Some values it contains are: ";
      cout << "mZ: " << (*Dep::SMparameters).mZ << endl;
      cout << "mtop: " << (*Dep::SMparameters).mtop << endl;
      
      // Backend resolution
      cout << "My backend requirement of genMSSMspectrum has been filled by " << 
       BEreq::BEgenMSSMspectrum.name() << " from " <<
       BEreq::BEgenMSSMspectrum.backend() << ", v" << 
       BEreq::BEgenMSSMspectrum.version() << "." << endl;
      cout << "Running backend function...";
      result = BEreq::BEgenMSSMspectrum(*Dep::SMparameters, *Dep::MSSMsoftmasses);
    }
    
  }

}
