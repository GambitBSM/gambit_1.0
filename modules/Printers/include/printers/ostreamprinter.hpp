
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  ostream printer class declaration.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Jul, Sep, 2014 Jan
///
///  *********************************************


#ifndef __ostream_printer_hpp__
#define __ostream_printer_hpp__

// Standard libraries
#include <vector>
#include <sstream>
#include <fstream>
#include <iomanip>


// Gambit
#include "baseprinter.hpp"

// Code!
namespace Gambit
{

  namespace Printers 
  {

    // Printer to ostream
    class ostreamPrinter : public BasePrinter
    {
      public:
        // Default constructor: sets my_ostream to std::cout and verbose to True
        ostreamPrinter();
  
        // Constructor
        ostreamPrinter(std::ostream&, bool);
   
        /// Destructor
        // Overload the base class virtual destructor
        ~ostreamPrinter();
 
        // Initialisation function
        // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true.
        // (currently does nothing for ostream printer)
        void initialise(const std::vector<int>&);
 
        // Tell printer that we have moved to a new model point
        void endline();
         
        // PRINT FUNCTIONS
        //----------------------------
        // Need to define one of these for every type we want to print!
        // Could use macros again to generate identical print functions 
        // for all types that have a << operator already defined.
        void print(double const&,              const std::string& label, const int IDcode);
        void print(std::vector<double> const&, const std::string& label, const int IDcode);
        void print(int const&,                 const std::string& label, const int IDcode);
        void print(std::vector<int> const&,    const std::string& label, const int IDcode);
        void print(ModelParameters const&,     const std::string& label, const int IDcode);
      
      private:
        std::ostream& my_ostream;
        bool verbose;
    };
 
  // Register printer so it can be constructed via inifile instructions
  // First argument is string label for inifile access, second is class from which to construct printer
  //LOAD_PRINTER(ostream, ostreamPrinter)
  //
  // Ben> I have commented out the above because this printer can't really be used via the inifile, since it needs some particular
  // ostream to be specified. Could build various wrappers that use this printer hooked up to various ostreams, if we really want.
  // This printer is mostly just a toy example, however.    

  } // end namespace printers
} // end namespace Gambit

#endif //ifndef __ostream_printer_hpp__
