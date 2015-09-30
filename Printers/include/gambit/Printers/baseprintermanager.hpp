//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Pure virtual base class for PrinterManager
///  This provides a minimal interface to the
///  PrinterManager class for use in ScannerBit
///  i.e. from here we do not manage the printer
///  streams (much), we merely provide access to them.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Feb
///
///  *********************************************

#ifndef __baseprintermanager_hpp__
#define __baseprintermanager_hpp__

#include <string>
#include "gambit/Utils/yaml_options.hpp"

namespace Gambit
{
  namespace Printers 
  {
    /// Forward declaration
    class BaseBasePrinter;

    /// Manager class for creating printer objects  
    class BasePrinterManager 
    {
      private:
        /// Flag for "resume" mode
        bool resume;

      public:
        BasePrinterManager() : resume(false) {}
        BasePrinterManager(bool r) : resume(r) {}

        /// Getter for "resume" mode flag
        bool resume_mode() { return resume; }

        /// Create auxiliary printer object
        virtual void new_stream(const std::string&, const Options&) = 0;

        /// Getter for auxiliary printer objects
        virtual BaseBasePrinter* get_stream(const std::string& = "") = 0;

        /// Instruct printers that scan has finished and to perform cleanup
        virtual void finalise(bool abnormal=false) = 0;

        /// For debugging: check up on mpi
        #ifdef WITH_MPI
        virtual bool Is_MPI_initialized() = 0;
        #endif
    };


  }
}

#endif
