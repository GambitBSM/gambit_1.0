//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  This is a minimal (pure virtual) precursor 
///  to the printer base class, for use only in 
///  ScannerBit. This helps to minimize the parts 
///  of the printers which are essential for 
///  ScannerBit to run.
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

#ifndef __base_base_printer_hpp__
#define __base_base_printer_hpp__

// Standard libraries
#include <string>
#include <sstream>
#include <vector>

// Boost
#include <boost/preprocessor/seq/for_each.hpp>

// Gambit
#include "gambit/Utils/standalone_error_handlers.hpp"

namespace Gambit
{
  namespace Printers 
  {
    // Convenienece typedefs for printers
    typedef unsigned int      uint;
    typedef unsigned long int ulong;
 
    class BaseBasePrinter  
    {
      public:
        virtual ~BaseBasePrinter() {};

        /// Function to signal to the printer to write buffer contents to disk
        virtual void flush() {}; // TODO: needed?

        /// Signal printer to reset contents, i.e. delete old data in preperation for replacement
        virtual void reset(bool force=false) = 0;

        /// Retrieve MPI rank
        virtual int getRank() = 0;

        /// Signal printer that scan is finished, and final output needs to be performed
        virtual void finalise() = 0;

        /// Ask the printer for the highest ID number known for a given rank
        /// process (needed for resuming, so the scanner can resume assigning
        /// point ID from this value. 
        virtual unsigned long getHighestPointID(const int rank) = 0;

        /// Declarations of minimal print functions needed by ScannerBit
        #define SCANNER_PRINTABLE_TYPES \
          (bool)                     \
          (int)(uint)(long)(ulong)   \
          (float)(double)            \
          (std::vector<bool>)        \
          (std::vector<int>)         \
          (std::vector<double>)
 
        // Virtual print methods for base printer classes
        #define VPRINT(r,data,elem)                               \
        virtual void print(elem const&, const std::string& label, \
                           const int vertexID, const uint /*rank*/, \
                           const ulong /*pointID*/)               \
        {                                                         \
          std::ostringstream err;                                 \
                                                                  \
          err << "No print function override has been "           \
              << "\ndefined for this type (for whatever printer"  \
              << "\nclass the current printer comes from)"        \
              << "\n  Dumping available info..."                  \
              << "\n   Label      : " << label                    \
              << "\n   vertexID   : " << vertexID                 \
              << "\n   Type       : " << STRINGIFY(elem);         \
          printer_warning().raise(LOCAL_INFO,err.str());          \
        }                                              

        #define ADD_VIRTUAL_PRINTS(TYPES) BOOST_PP_SEQ_FOR_EACH(VPRINT, _, TYPES)
        ADD_VIRTUAL_PRINTS(SCANNER_PRINTABLE_TYPES) 
    };
 
  } //end namespace Printers
} // end namespace Gambit


#endif //ifndef __base_base_printer_hpp__
