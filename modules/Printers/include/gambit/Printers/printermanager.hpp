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

#include <string>
#include <map>
#include "gambit/Printers/baseprintermanager.hpp"
#include "gambit/Utils/yaml_options.hpp"

namespace Gambit
{
  namespace Printers 
  {

    /// Forward declaration of base printer classes (Declared fully in baseprinter.hpp and basebaseprinter.hpp)
    class BaseBasePrinter; 
    class BasePrinter; 

    /// Manager class for creating printer objects  
    class PrinterManager: public BasePrinterManager
    {
      private:
        /// Map containing pointers to auxiliary printer objects
        std::map<std::string, BasePrinter*> auxprinters;

        /// Name specifying the printer type
        std::string tag;
    
        /// Storage for printer options (needed for creating new streams)
        Options options;

      public:
        /// Pointer to main printer object 
        BasePrinter* printerptr;

        /// Constructor
        PrinterManager(const Options&);
  
        /// Destructor
        ~PrinterManager();

        /// Create auxiliary printer object
        void new_stream(const std::string&, const Options&);

        /// Getter for auxiliary printer objects
        BaseBasePrinter* get_stream(const std::string& = "");
  
        /// Instruct printers that scan has finished and to perform cleanup
        void finalise();
  };


  }
}

#endif //__printermanager_hpp__
