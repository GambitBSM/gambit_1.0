//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Ascii printer class declaration
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Jul, Sep, 2014 Jan
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Jan
///
///  *********************************************


#ifndef __ascii_printer_hpp__
#define __ascii_printer_hpp__

// Standard libraries
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <iomanip>

// Gambit
#include "baseprinter.hpp"
#include "yaml_options.hpp"

// Code!
namespace Gambit
{
  namespace Printers 
  {

    // Printer to ascii file (i.e. table of doubles)
    typedef std::map<int,std::vector<double>> LineBuf;
 
    class asciiPrinter : public BasePrinter
    {
      public:
        // Default constructor: setis my_ostream to std::cout and verbose to True
        //asciiPrinter() : my_fstream
        //{
          ///TODO: proper gambit error
          // Must supply a file stream on construction
        //  std::cout<<"Error: asciiPrinter constructor must be supplied with an ofstream object!"<<std::endl;
          // have to initialise my_fstream anyway to avoid compiler errors
       //   my_fstream.open("default_output.txt",std::ofstream::out);
 
       // } 
   
        // Old Constructor
        //asciiPrinter(std::ofstream&, std::ofstream&);
  
        // Constructor (for construction via inifile options)
        asciiPrinter(const Options&);

        /// Destructor
        // Overload the base class virtual destructor
        ~asciiPrinter();
 
        // Initialisation function
        // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true.
        void initialise(const std::vector<int>&);
 
        // Clear buffer
        void erase_buffer();
  
        // Tell printer to start a new line of the ascii output file
        void endline();
         
        // add results to printer buffer
        void addtobuffer(const int&, const std::vector<double>&, const std::vector<std::string>&);
 
        // write the printer buffer to file       
        void dump_buffer();
         
 
        // PRINT FUNCTIONS
        //----------------------------
        // Need to define one of these for every type we want to print!
        // Could use macros again to generate identical print functions 
        // for all types that have a << operator already defined.
        void print(double const&,              const std::string& label, const int IDcode, const int thread, const int pointID);
        void print(std::vector<double> const&, const std::string& label, const int IDcode, const int thread, const int pointID);
        void print(ModelParameters const&,     const std::string& label, const int IDcode, const int thread, const int pointID);
      
      private:
        // Main output file stream
        std::ofstream my_fstream;
        // "Info file" output stream
        std::ofstream info_fstream;

        // Buffer of results to print on a single line
        LineBuf linebuffer; //(std::map<int,std::vector<double>>)
        // Buffer containing many lines
        int bufferlength; //number of lines to store in buffer before printing
        int buf_loc; // current line of the buffer
        std::vector<LineBuf> buffer; // full buffer of output to be printed
 
        // Record of number of slots occupied by each printer item.
        // If this changes after the first buffer dump an error will occur. Functors which return mutable output are not currently supported by this printer type, and may never be since it is pretty hard to deal with in an ascii table. Actually strictly speaking a functor can use fewer slots than it uses in the first buffer dump (the max of its first 'bufferlength' uses), but not more.
        std::map<int,int> lineindexrecord;

        // Record a set of labels for each printer item: used to write "info" file explain what is in each column
        std::map<int,std::vector<std::string>> label_record; //the 'int' here is the vertex ID. Could make a typedef to make this safer.
        bool info_file_written; // Flag to let us know that the info file has been written
    };

  // Register printer so it can be constructed via inifile instructions
  // First argument is string label for inifile access, second is class from which to construct printer
  LOAD_PRINTER(ascii, asciiPrinter)
     
  } // end namespace Printers
} // end namespace Gambit

#endif //ifndef __ascii_printer_hpp__
