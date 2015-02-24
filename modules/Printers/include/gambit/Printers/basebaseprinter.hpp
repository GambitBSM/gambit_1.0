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
#include <vector>

namespace Gambit
{
  namespace Printers 
  {

    class BaseBasePrinter  
    {
      public:

        /// Function to signal to the printer to write buffer contents to disk
        virtual void flush() = 0;

        /// Signal printer to reset contents, i.e. delete old data in preperation for replacement
        virtual void reset() = 0;

        /// Retrieve MPI rank
        virtual int getRank() = 0;

        /// Manual definitions of minimal print functions needed by ScannerBit


    };
 
  } //end namespace Printers
} // end namespace Gambit


#endif //ifndef __base_base_printer_hpp__
