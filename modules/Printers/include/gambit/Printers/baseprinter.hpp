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
      private:
        BasePrinter* primary_printer = NULL;
        bool is_aux = false; 

      public:
        /// Destructor
        virtual ~BasePrinter() {}

        /// Initialisation function
        // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true. (TODO: probably extend this to be a list of functors THIS printer is supposed to print, since we may want several printers handling different functors, for SLHA output or some such perhaps).
        virtual void initialise(const std::vector<int>&) = 0;

        /// Helper initialisation for auxilliary printers
        /// Will be run when the auxilliary printer is
        /// created by a PrinterManager.
        // Implementation provided so that pri
        virtual void auxilliary_init() {};

        void set_primary_printer(BasePrinter* const p)
        { 
          primary_printer = p; 
          is_aux = true;
          auxilliary_init();
        }
        BasePrinter* get_primary_printer() 
        {
          if(not is_aux)
          {
            std::ostringstream err;                               
            err << "Error! Tried to retrieve pointer to primary printer from a "
                << "printer object not flagged as auxilliary!";
            printer_error().raise(LOCAL_INFO,err.str());          
          }
          else if(primary_printer==NULL)
          {
            std::ostringstream err;                               
            err << "Error! Tried to retrieve pointer to primary printer, but it "
                << "is NULL! Something has gone wrong in the initialisation of "
                << "the printer system.";
            printer_error().raise(LOCAL_INFO,err.str());          
          } 
          return primary_printer; 
        }
        bool is_auxilliary_printer() { return is_aux; }


        // We need to have a virtual print method for EVERY type we ever want to print (i.e. for every type that can be held in the 'myValue' data member of a module functor). Generate these using a macro.
        // Run the macro; add all the print functions
        ADD_VIRTUAL_PRINTS(PRINTABLE_TYPES) 

    };

    /// Map in which to keep factory functions for the printers (printer_creators)
    // (uses the same machinery as in priors.hpp)
    registry
    { 
            typedef BasePrinter* create_printer_function(const Options &); //arguments need to match constructor for printer object
            reg_elem <create_printer_function> printer_creators;
    }

 
  } //end namespace Printers
} // end namespace Gambit


#endif //ifndef __base_printer_hpp__
