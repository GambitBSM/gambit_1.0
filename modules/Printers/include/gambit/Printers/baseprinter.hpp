//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Declaration and definition of printer base class
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Jul, Sep
///  \date 2014 Jan
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __base_printer_hpp__
#define __base_printer_hpp__

// Standard libraries
#include <vector>

// Gambit
#include "gambit/Printers/basebaseprinter.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Utils/yaml_options.hpp"
#include "gambit/Utils/boost_fallbacks.hpp"
#include "gambit/Utils/factory_registry.hpp"
#include "gambit/Utils/model_parameters.hpp"

// Boost
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/punctuation/comma_if.hpp>

// Printable types
#ifndef STANDALONE
   // If we are in a main gambit executable, we need to know all the potentially printable types.
   #define PRINTING_TYPES "gambit/Elements/all_functor_types.hpp"
#else
   // Otherwise, we are in the ScannerBit standalone executable and need only a limited set.
   #define PRINTING_TYPES "gambit/ScannerBit/printable_types.hpp"
#endif
#include PRINTING_TYPES

// This macro registers each printer so that they can be constructed automatically from inifile instructions
#define LOAD_PRINTER(tag, ...) REGISTER(printer_creators, tag, __VA_ARGS__)

//#pragma message BOOST_PP_STRINGIZE(PRINTABLE_TYPES) //PRINTABLE_TYPES resides in all_functor_types.hpp 

// Virtual print methods for base printer class
#define VPRINT(r,data,elem)                                 \
  virtual void print(elem const&, const std::string& label, \
                     const int vertexID, const int /*rank*/, const int /*pointID*/) \
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

// Creates all necessary virtual print methods for base printer class
#define ADD_ALL_PRINT_FUNCTIONS \
  BOOST_PP_SEQ_FOR_EACH(VPRINT, _, PRINTABLE_TYPES)

//#pragma message "Base class print functions:"
//#pragma message BOOST_PP_STRINGIZE(ADD_ALL_PRINT_FUNCTIONS)

// Code!
namespace Gambit
{
  namespace Printers 
  {

    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //% Printer class declarations                          %
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     
    /// BASE PRINTER CLASS
    class BasePrinter: public BaseBasePrinter
    {
      public:

        /// Destructor
        // Need this to be virtual so that the PrinterManager can destroy any printer object via a pointer to base
        // Give it a message so we know if it ever isn't overridden properly
        //virtual ~BasePrinter() = 0;
        virtual ~BasePrinter()
        {
           /// TODO: convert to actual Gambit warning or error
           // Actually, this will always run when derived type objects are destructed, so not an error.
           //std::cout << "Warning! BasePrinter destructor has been called! This should be overridden in the derived printer classes, and never run!" << std::endl;
        }

        /// Initialisation function
        // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true. (TODO: probably extend this to be a list of functors THIS printer is supposed to print, since we may want several printers handling different functors, for SLHA output or some such perhaps).
        //virtual void initialise(const std::vector<int>&) = 0;
        virtual void initialise(const std::vector<int>&)
        {
           std::cout << "Warning! In BasePrinter::initialise!" << std::endl;
        }

        /// Function to signal to the printer to write buffer contents to disk
        //virtual void flush() = 0;
        virtual void flush()
        {
           std::cout << "Warning! In BasePrinter::flush()!" << std::endl;
        }

        /// Signal printer to reset contents, i.e. delete old data in preperation for replacement
        //virtual void reset() = 0;
        virtual void reset()
        {
           std::cout << "Warning! In BasePrinter::reset()!" << std::endl;
        }

        /// Retrieve MPI rank
        //virtual int getRank() = 0;
        virtual int getRank()
        {
           std::cout << "Warning! In BasePrinter::getRank()!" << std::endl;
           return -1;
        }

        // We need to have a virtual print method for EVERY type we ever want to print (i.e. for every type that can be held in the 'myValue' data member of a module functor). Generate these using a macro.
        // Run the macro; add all the print functions
        ADD_ALL_PRINT_FUNCTIONS

    };

    // Need to implement the destructor, even though it is pure virtual. Seems like it will be called even if using derived classes, or something.
    //inline BasePrinter::~BasePrinter() { }

    /// Map in which to keep factory functions for the printers (printer_creators)
    // (uses the same machinery as in priors.hpp)
    registry
    { 
            typedef BasePrinter* create_printer_function(const Options &); //arguments need to match constructor for printer object
            reg_elem <create_printer_function> printer_creators;
    }

    /// Convenience wrapper function for 

 
  } //end namespace Printers
} // end namespace Gambit


#endif //ifndef __base_printer_hpp__
