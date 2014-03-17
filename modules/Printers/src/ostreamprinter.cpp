
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functor "print" functions header file
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


// Standard libraries
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <iomanip>

// Gambit
#include "ostreamprinter.hpp"
#include "stream_printers.hpp"

// Code!
namespace Gambit
{

  namespace Printers 
  {

    // Printer to ostream member functions
        
    // Default constructor: sets my_ostream to std::cout and verbose to True
    ostreamPrinter::ostreamPrinter() : 
      my_ostream(std::cout), verbose(true) { }
  
    // Constructor
    ostreamPrinter::ostreamPrinter(std::ostream& mystrm, bool vrbs) :
      my_ostream(mystrm), verbose(vrbs) { }
   
    // default destructor should be fine?
 
    // Initialisation function
    // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true.
    // (currently does nothing for ostream printer)
    void ostreamPrinter::initialise(const std::vector<int>& functors_to_print) { }
 
    // Tell printer that we have moved to a new model point
    void ostreamPrinter::endline() { }
  
    // PRINT FUNCTIONS
    //----------------------------
    // Need to define one of these for every type we want to print!
    // Could use macros again to generate identical print functions 
    // for all types that have a << operator already defined.
    void ostreamPrinter::print(double const& value, const functor* f)
    {
      if (verbose) {std::cout<<"printing a double using ostreamPrinter!"<<std::endl;}
      my_ostream<<value<<std::endl;       
    }

    void ostreamPrinter::print(std::vector<double> const& value, const functor* f)
    {
      if (verbose) {std::cout<<"printing a std::vector<double> using ostreamPrinter!"<<std::endl;}
      my_ostream<<value<<std::endl;       
    }
    
    
    void ostreamPrinter::print(int const& value, const functor* f)
    {
      if (verbose) {std::cout<<"printing an int using ostreamPrinter!"<<std::endl;}
      my_ostream<<value<<std::endl;       
    }

    void ostreamPrinter::print(std::vector<int> const& value, const functor* f)
    {
      if (verbose) {std::cout<<"printing a std::vector<int> using ostreamPrinter!"<<std::endl;}
      my_ostream<<value<<std::endl;       
    }


    void ostreamPrinter::print(ModelParameters const& value, const functor* f)
    {
      std::map<std::string, double> parameter_map = value.getValues();
      typedef std::map<std::string, double>::iterator map_it;
      if (verbose) {std::cout<<"printing a ModelParameters object using ostreamPrinter!"<<std::endl;}
      my_ostream << "[";
      for (map_it it = parameter_map.begin(); it != parameter_map.end(); it++)
      {
        my_ostream << it->first <<":"<< it->second << ", ";
      }
      my_ostream << "\b\b]" << std::endl;
    }
    
  } // end namespace printers
} // end namespace Gambit

