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
#include "gambit/Printers/printer_id_tools.hpp"

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
        virtual void finalise(bool abnormal=false) = 0;

        // Printer dispatch function. If a virtual function override exists for
        // the print type, info is passed on, otherwise the function call is resolved
        // to a default function which raises an informative runtime error explaining
        // that the type is not printable.
        template<typename T>
        void print(T const& in, const std::string& label,
                   const int vertexID, const uint rank,
                   const ulong pointID)
        {
          _print(in, label, vertexID, rank, pointID);
        }

        // Overload which automatically determines a unique ID code
        // based on the label. Used by scanner plugin.
        template<typename T>
        inline void print(T const& in, const std::string& label,
                           const uint rank,
                           const ulong pointID)
        {
          print(in, label, get_aux_param_id(label), rank, pointID);
        }


      protected:
        // Default _print function. Throws an error if no matching 
        // virtual function for the type of the attempted print is
        // found.
        template<typename T>
        void _print(T const&, const std::string& label,
                    const int vertexID, const uint,
                    const ulong)
        {
          std::ostringstream err;                               
                                                                
          err << "Attempted to print a functor whose return type "
              << "is not registered as being printable. "
              << "If you really want to print this functor, you must "
              << "add its return type to the PRINTABLE_TYPES sequence "
              << "in \"gambit/Elements/printable_types.hpp\". You will then have "
              << "to define a print function for it in whatever printer "
              << "you are using (see documentation for GAMBIT printers)."
              << "\n  Available info for this print attempt..."                
              << "\n   Label      : " << label                  
              << "\n   vertexID   : " << vertexID               
              << "\n   Type       : " << STRINGIFY(T);       
          printer_error().raise(LOCAL_INFO,err.str());         
        }

        /// Declarations of minimal print functions needed by ScannerBit
        #define SCANNER_PRINTABLE_TYPES \
          (bool)                     \
          (int)(uint)(long)(ulong)   \
          (float)(double)            \
          (std::vector<bool>)        \
          (std::vector<int>)         \
          (std::vector<double>)
 
        // Virtual print methods for base printer classes
        #define VPRINT(r,data,elem)                                \
        virtual void _print(elem const&, const std::string& label, \
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

        // Add the base virtual functions for registered printable types, 
        // to be overloaded in each printer.
        ADD_VIRTUAL_PRINTS(SCANNER_PRINTABLE_TYPES) 

    };
 
  } //end namespace Printers
} // end namespace Gambit


#endif //ifndef __base_base_printer_hpp__
