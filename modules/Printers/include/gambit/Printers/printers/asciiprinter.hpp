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
#include "gambit/Printers/baseprinter.hpp"
#include "gambit/Utils/yaml_options.hpp"

// Code!
namespace Gambit
{
  namespace Printers 
  {

    typedef std::map<int, std::vector<double>> LineBuf;

    /// Structure to hold data for a single model point 
    struct Record
    {
       /// The data; each functor outputs a vector of doubles. We index these by vertexID.
       //  One map entry per "printme" functor.
       LineBuf data;

       /// Flag to indicate if record is available to send for output
       // This flag is set when the process which created it begins creating another record.
       bool readyToPrint;

       Record();
       void reset();
    };

    typedef std::map<std::pair<int,int>,Record> Buffer;


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
  
        /// Constructor (for construction via inifile options)
        asciiPrinter(const Options&);

        /// Auxilliary mode constructor (for construction in scanner plugins)
        asciiPrinter(const Options&, std::string&, bool global=0);

        /// Tasks common to the various constructors
        void common_constructor();

        /// Destructor
        // Overload the base class virtual destructor
        ~asciiPrinter();
 
        /// Virtual function overloads:
        ///@{

        // Initialisation function
        // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true.
        void initialise(const std::vector<int>&);
        void flush();
        void reset();
        int getRank();

        ///@}
      
        /// Asciiprinter-specific functions

        // Clear buffer
        void erase_buffer();
  
        // Tell printer to start a new line of the ascii output file
        void endline();
         
        // add results to printer buffer
        void addtobuffer(const std::vector<double>&, const std::vector<std::string>&, const int, const int, const int); 

        // write the printer buffer to file       
        void dump_buffer(bool force=false);
         
 
        // PRINT FUNCTIONS
        //----------------------------
        // Need to define one of these for every type we want to print!
        // Could use macros again to generate identical print functions 
        // for all types that have a << operator already defined.

        // Scanner-friendly types to print
        void print(int const&,                 const std::string& label, const int IDcode, const uint rank, const ulong pointID);
        void print(double const&,              const std::string& label, const int IDcode, const uint rank, const ulong pointID);
        void print(std::vector<double> const&, const std::string& label, const int IDcode, const uint rank, const ulong pointID);
        void print(ModelParameters const&,     const std::string& label, const int IDcode, const uint rank, const ulong pointID);

        // Scanner-unfriendly print functions
        #ifndef STANDALONE  // Need to disable print functions for these if STANDALONE is defined (see baseprinter.hpp line ~41)
        // unsigned int is chosen somewhat arbitrarily just to demonstrate this requirement. Will be more important if other
        // fancier types need to be disabled.
        void print(unsigned int const&,        const std::string& label, const int IDcode, const uint rank, const ulong pointID); 
        #endif      

        /// Helper print functions
        // Used to reduce repetition in definitions of virtual function overloads 
        // (useful since there is no automatic type conversion possible)
        template<class T>
        void template_print(T const&, const std::string&, const int, const uint, const ulong);

      private:
        /// Output file
        std::string output_file;

        /// Info file (describes contents of output file, i.e. contents of columns)
        std::string info_file;

        /// Main output file stream
        std::ofstream my_fstream;
        /// "Info file" output stream
        std::ofstream info_fstream;

        /// Number of lines to store in buffer before printing
        unsigned int bufferlength;

        /// MPI rank (currently not hooked up to MPI, just hardcoded to 0)
        int myRank;

        /// Number of digits of precision to use in output columns
        int precision;
 
        /// Full buffer of output to be printed
        // Key is <int rank, int pointID>; value is a Record (for a single model point)
        //std::map<std::pair<int,int>,Record> buffer;  
        Buffer buffer; 

        /// Map recording which model point each process is working on 
        // Need this so that we can compute when (at least initial) writing to a model point has ceased
        // Key: rank; Value: last pointID sent by that rank.
        std::map<int,int> lastPointID;

        // Record of number of slots occupied by each printer item.
        // If this changes after the first buffer dump an error will occur. Functors which return mutable output are not currently supported by this printer type, and may never be since it is pretty hard to deal with in an ascii table. Actually strictly speaking a functor can use fewer slots than it uses in the first buffer dump (the max of its first 'bufferlength' uses), but not more.
        std::map<int,int> lineindexrecord;

        /// Record a set of labels for each printer item: used to write "info" file explain what is in each column
        std::map<int,std::vector<std::string>> label_record; //the 'int' here is the vertex ID. Could make a typedef to make this safer.
        bool info_file_written; // Flag to let us know that the info file has been written

        /// Flag to trigger "global" print mode. 
        // In this mode, the output file will be *overwritten* when reset() is 
        // called. Use this for printing information global to the scan (i.e. 
        // via auxilliary printers in ScannerBit)
        bool global;

        /// Label for printer, mostly for more helpful error messages
        std::string printer_name;
    };

    // Register printer so it can be constructed via inifile instructions
    // First argument is string label for inifile access, second is class from which to construct printer
    LOAD_PRINTER(ascii, asciiPrinter)
     
  } // end namespace Printers
} // end namespace Gambit

#endif //ifndef __ascii_printer_hpp__
