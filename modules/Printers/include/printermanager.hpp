//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Manager class for printers.
///  Creates printer object according to inifile
///  instructions, and cleans them up on exit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2014 May
///
///  *********************************************

#ifndef __printermanager_hpp__
#define __printermanager_hpp__

#include "baseprinter.hpp"
#include "yaml_options.hpp"

namespace Gambit
{
  namespace Printers 
  {

    /// Manager class for creating printer objects  
    class PrinterManager 
    {
      public:
        /// Pointer to printer object 
        BasePrinter* printerptr; 

        /// Constructor
        PrinterManager(const Options&);
  
        /// Destructor
        ~PrinterManager();
    };


  }
}

#endif //__printermanager_hpp__
