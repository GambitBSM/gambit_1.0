//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Fronted header for the DarkSUSY backend
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Mar
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul
///
///  \author Torsten Bringmann
///          (torsten.bringmann@fys.uio.no)
///  \date 2013 Jul, 2014 Mar
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar
///  *********************************************

/* Specify the path to the shared library along with a backend name. */

#define LIBPATH      "Backends/lib/libdarksusy.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME DarkSUSY
#endif
#define VERSION 0.1
#define SAFE_VERSION 0_1


/* The following macro loads the library (using dlmopen) in LIBPATH 
 * when this header file is included somewhere. */

LOAD_LIBRARY

/* Next we use macros BE_VARIABLE and BE_FUNCTION to load pointers 
 * (using dlsym) to the variables and functions within the library.
 *  
 * The macros also set up a minimal interface providing 'get/set'
 * functions for the library variables and function pointers 
 * for the library functions.
 *  
 * These functions are then wrapped in functors that the core can connect 
 * to the modules via the rollcall system */
 
/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 * 
 * The last argument (capability name) is optional. 
 * If left out (as done below) it will default to "[backend name]_[function name]_capability"
 * (e.g. "LibFirst_initialize_capability")  */

// BE_FUNCTION(initialize, void, (int), "_Z10initializei")
// BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv")
// BE_FUNCTION(returnResult, double, (), "_Z12returnResultv")

BE_FUNCTION(dsinit, void, (), "dsinit_", "dsinit")
BE_FUNCTION(dssusy, void, (int&,int&), "dssusy_", "dssusy")
BE_FUNCTION(dsrdomega, double, (int&,int&,double&,int&,int&,int&), "dsrdomega_", "dsrdomega")
BE_FUNCTION(dsrdinit, void, (), "dsrdinit_", "dsrdinit")
BE_FUNCTION(dsrdset, void, (char*, int&, char*, int&), "dsrdset_", "dsrdset")
BE_FUNCTION(dsrdthlim, void, (), "dsrdthlim_", "dsrdthlim")
BE_FUNCTION(dsrdtab, void, (double(*)(double&), double&), "dsrdtab_", "dsrdtab")
BE_FUNCTION(dsrdeqn, void, (double(*)(double&),double&,double&,double&,double&,int&), "dsrdeqn_", "dsrdeqn")
BE_FUNCTION(dsrdwintp, double, (double&), "dsrdwintp_", "dsrdwintp")
BE_FUNCTION(dsanwx, double, (double&), "dsanwx_", "dsanwx")
BE_FUNCTION(dshayield, double, (double&,double&,int&,int&,int&), "dshayield_", "dshayield")
BE_FUNCTION(dssusy_isasugra, void, (int&,int&), "dssusy_isasugra_", "dssusy_isasugra")
BE_FUNCTION(dsgive_model_isasugra, void, (double&,double&,double&,double&,double&), "dsgive_model_isasugra_", "dsgive_model_isasugra")
BE_FUNCTION(dssigmav, double, (int&), "dssigmav_", "dssigmav")
BE_FUNCTION(dsIBffdxdy, double, (int&, double&, double&), "dsibffdxdy_", "dsIBffdxdy")
BE_FUNCTION(dsIBfsrdxdy, double, (int&, double&, double&), "dsibfsrdxdy_", "dsIBfsrdxdy")
BE_FUNCTION(dsIBhhdxdy, double, (int&, double&, double&), "dsibhhdxdy_", "dsIBhhdxdy")
BE_FUNCTION(dsIBwhdxdy, double, (int&, double&, double&), "dsibwhdxdy_", "dsIBwhdxdy")
BE_FUNCTION(dsIBwwdxdy, double, (int&, double&, double&), "dsibwwdxdy_", "dsIBwwdxdy")
BE_FUNCTION(dsddgpgn, void, (double&, double&, double&, double&), "dsddgpgn_", "dsddgpgn")
BE_FUNCTION(dsSLHAread, void, (char*, int&, int), "dsslharead_", "dsSLHAread")
BE_FUNCTION(dsprep, void, (), "dsprep_", "dsprep")


//BE_FUNCTION(initialize, void, (int), "_Z10initializei", "LibFirst_initialize_capability")
//BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv", "LibFirst_someFunction_capability")
//BE_FUNCTION(returnResult, double, (), "_Z12returnResultv", "LibFirst_returnResult_capability")

/* We have now created the following:
 *
 * - Function pointers
 * Gambit::Backends::LibFirst::initialize       type: void (*)(int)
 * Gambit::Backends::LibFirst::someFunction     type: void (*)()
 * Gambit::Backends::LibFirst::returnResult     type: double (*)()
 *
 * - Functors
 * Gambit::Backends::LibFirst::Functown::initialize       type: Gambit::backend_functor<void,int>
 * Gambit::Backends::LibFirst::Functown::someFunction     type: Gambit::backend_functor<void>
 * Gambit::Backends::LibFirst::Functown::returnResult     type: Gambit::backend_functor<double>  */


/* Syntax for BE_VARIABLE:
 * BE_VARIABLE([type macro], "[exact symbol name]", "[choose capability name]")  
 * Valid type macros are:
 * GENERAL_VAR([type],[choose variable name])
 * for ordinary variables (int, double, classes).
 * FORTRAN_ARRAY([type], [choose array name], ([lower index, dimension 1],[upper index, dimension 1]), [upper/lower index pairs for higher array dimensions] )
 * for arrays in Fortran backends. 
 * FORT_COMMONB([commonblock struct type], [choose commonblock name])
 * for Fortran commonblocks.
 * */
 
// TODO: Replace darksusy types with appropriate commonblock representations and use FORT_COMMONB macros here

BE_VARIABLE(GENERAL_VAR(DS_MSSMPAR, mssmpar),   "mssmpar_",   "mssmpar")
BE_VARIABLE(GENERAL_VAR(DS_MSPCTM, mspctm),     "mspctm_",    "mspctm")
BE_VARIABLE(GENERAL_VAR(DS_INTDOF, intdof),     "intdof_",    "intdof")
BE_VARIABLE(GENERAL_VAR(DS_PACODES, pacodes),   "pacodes_",   "pacodes")
BE_VARIABLE(GENERAL_VAR(DS_WIDTHS, widths),     "widths_",    "widths")
BE_VARIABLE(GENERAL_VAR(DS_RDMGEV, rdmgev),     "rdmgev_",    "rdmgev")
BE_VARIABLE(GENERAL_VAR(DS_RDPTH, rdpth),       "rdpth_",     "rdpth")
BE_VARIABLE(GENERAL_VAR(DS_RDDOF, rddof),       "rddof_",     "rddof")
BE_VARIABLE(GENERAL_VAR(DS_RDERRORS, rderrors), "rderrors_", "rderrors")
BE_VARIABLE(GENERAL_VAR(DS_RDPARS, rdpars),     "rdpars_",    "rdpars")
BE_VARIABLE(GENERAL_VAR(DS_RDSWITCH, rdswitch), "rdswitch_",  "rdswitch")
BE_VARIABLE(GENERAL_VAR(DS_RDLUN, rdlun),       "rdlun_",     "rdlun")
BE_VARIABLE(GENERAL_VAR(DS_RDPADD, rdpadd),     "rdpadd_",    "rdpadd")

//BE_INI_DEPENDENCY(MSSMspectrum, eaSLHA)
BE_INI_CONDITIONAL_DEPENDENCY(MSSMspectrum, eaSLHA, CMSSM_demo, MSSM25)

BE_INI_FUNCTION
{
    using namespace SLHAea;

    // Initialize DarkSUSY if run for the first time
    bool static scan_level = true;
    if (scan_level)
    {
        std::cout << "DarkSUSY initialization" << std::endl;
        dsinit();
        dsrdinit();
        scan_level = false;
    }

    // Check if model requires SLHA initialization
    if( 
            std::find(Models->begin(), Models->end(), "CMSSM_demo") != Models->end() or
            std::find(Models->begin(), Models->end(), "MSSM25") != Models->end()
      )
    {
        // Save eaSLHA file to disk
        eaSLHA mySLHA = *Dep::MSSMspectrum;
        ofstream ofs("DarkBit_temp.slha");
        ofs << mySLHA;
        ofs.close();

        // Initialize SUSY spectrum from SLHA
        int len = 17;
        int flag = 15;
        char * filename = "DarkBit_temp.slha";
        dsSLHAread(byVal(filename),flag, byVal(len));
        dsprep();
    }

    if(std::find(Models->begin(), Models->end(), "CMSSM") != Models->end())
    {
        // Setup mSUGRA model from CMSSM parameters
        double am0 = *Param["M0"];  // m0
        double amhf = *Param["M12"];  // m_1/2
        double aa0 = *Param["A0"];  // A0
        double asgnmu = *Param["sgnmu"];  // sign(mu)
        double atanbe = *Param["tanb"];  // tan(beta)
        int unphys, hwarning;
        std::cout << "Initialize dsgive_model_isasugra with" << std::endl;
        std::cout << am0 << " " << amhf << " " << aa0 << " " << asgnmu << " " << atanbe << std::endl;
        dsgive_model_isasugra(am0, amhf, aa0, asgnmu, atanbe);
        dssusy_isasugra(unphys, hwarning);
    }

    // MSSM-7 ???
    /*
      // Initialize DarkSUSY if run for the first time
      bool static first_time = true;
      if (first_time) 
      {
          std::cout << "DarkSUSY initialization" << std::endl;
          BEreq::dsinit();
          BEreq::dsrdinit();
          first_time = false;
      }

      // Set up mssmpar structure
      // Hard-coded values for now
      int i, unphys=0, hwarning=0;
      DS_MSSMPAR mssmpar;
      mssmpar.m1 = 500;
      mssmpar.m2 = 1000;
      mssmpar.m3 = 3500;
      mssmpar.mu=400;
      mssmpar.ma=1000;
      mssmpar.tanbe=10;
      for(i=0; i<=2; i++){
        mssmpar.mass2u[i]=mssmpar.mass2q[i]=mssmpar.mass2d[i]=2000*2000;
        mssmpar.mass2e[i]=mssmpar.mass2l[i]=2000*2000;
      }
      for(i=0; i<=1; i++){
        mssmpar.asoftu[i]=0;
        mssmpar.asoftd[i]=0;
      }
      mssmpar.asofte[0] = 0;
      mssmpar.asofte[1] = 0;
      mssmpar.asoftu[2] = 1;
      mssmpar.asoftd[2] = 1;
      mssmpar.asofte[2] = 0;

      // And initialize DS
      *BEreq::mssmpar = mssmpar;
      BEreq::dssusy(unphys, hwarning);
      */
}
DONE

// BE_VARIABLE(SomeInt, int, "someInt")
// BE_VARIABLE(SomeDouble, double, "someDouble")

/* We have now created the following:
 *
 * - Pointers
 * Gambit::Backends::LibFirst::SomeInt      type: int*
 * Gambit::Backends::LibFirst::SomeDouble   type: double*
 *
 * - Functions
 * Gambit::Backends::LibFirst::getSomeInt   type: int ()    
 * Gambit::Backends::LibFirst::setSomeInt   type: void (int)
 *
 * - Functors
 * Gambit::Backends::LibFirst::Functown::getSomeInt   type: Gambit::backend_functor<int>
 * Gambit::Backends::LibFirst::Functown::setSomeInt   type: Gambit::backend_functor<void,int>  */


/* At this point we have a minimal interface to the loaded library.
 * Any additional convenince functions could be constructed below 
 * using the available pointers/functions. All convenience functions must be
 * registred/wrapped via the macro BE_CONV_FUNCTION (see below). */


// namespace Gambit
// {
//   namespace Backends
//   {
//     namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
//     {
// 
//       /* Convenience functions go here */
// 
//       double awesomenessByAnders(int a)
//       {
//         initialize(a);
//         someFunction();
//         return returnResult();
//       }
// 
//     } /* end namespace BACKENDNAME_SAFE_VERSION */                                          
//   } /* end namespace Backends */                                                
// } /* end namespace Gambit */                                                   


/* Now register any convenience functions and wrap them in functors. 
 *
 * Syntax for BE_CONV_FUNCTION:
 * BE_CONV_FUNCTION([function name], type, "[choose capability name]")
 * 
 * As with BE_FUNCTION, the last argument is optional. */

// BE_CONV_FUNCTION(awesomenessByAnders, double, "awesomeness")


// Undefine macros to avoid conflict with other backends
#include "backend_undefs.hpp"

