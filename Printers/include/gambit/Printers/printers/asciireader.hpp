//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Ascii printer retriever class declaration
///  This is a class accompanying the asciiPrinter
///  which takes care of *reading* from output
///  created by the asciiPrinter.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2016 Jan
///
///  *********************************************

#include "gambit/Printers/baseprinter.hpp"

#ifndef __ascii_reader_hpp__
#define __ascii_reader_hpp__

namespace Gambit {
  namespace Printers {

     /// Derived EntryGetterInterface class for accessing asciiPrinter output points
     class asciiReader : public BaseReader
     {
       public:
         asciiReader(const Options& options);
   
         /// @{ Base class virtual interface functions
         virtual void reset(); // Reset 'read head' position to first entry
         virtual ulong get_dataset_length(); // Get length of input dataset
         virtual PPIDpair get_next_point(); // Get next rank/ptID pair in data file
         virtual PPIDpair get_current_point(); // Get current rank/ptID pair in data file
         virtual ulong    get_current_index(); // Get a linear index which corresponds to the current rank/ptID pair in the iterative sense
        virtual bool eoi(); // Check if 'current point' is past the end of the data file (and thus invalid!)
         /// Get type information for a data entry, i.e. defines the C++ type which this should be
         /// retrieved as, not what it is necessarily literally stored as in the output.
         /// For ASCIIPrinter, everything is currently a double.
         virtual std::size_t get_type(const std::string&) { return getTypeID<double>(); }
         virtual std::set<std::string> get_all_labels(); // Get all output column labels
         using BaseReader::_retrieve; // Tell compiler we are using some of the base class overloads of this on purpose.
         bool _retrieve(std::string& out,        const std::string& label, const uint rank, const ulong pointID);
         bool _retrieve(double& out,             const std::string& label, const uint rank, const ulong pointID);
         bool _retrieve(std::vector<double>& out,const std::string& label, const uint rank, const ulong pointID);
         bool _retrieve(map_str_dbl& out,        const std::string& label, const uint rank, const ulong pointID);
         bool _retrieve(ModelParameters& out,    const std::string& label, const uint rank, const ulong pointID);
         /// @}

       private:
         const std::string infoFile_name;
         const std::string dataFile_name;
         const std::map<std::string,uint> column_map; // Map from column names to indices 
         const uint col_rank;
         const uint col_ptID;
         std::ifstream dataFile;
         ulong       dataset_length;
         ulong       current_row;
         PPIDpair    current_point;
         std::string current_line;

         /// Get column descriptions from an info file
         std::map<std::string,uint> get_column_info(const std::string& info_filename);

         /// Move 'read head' forward to next row
         void next_row();

         /// Advance the 'read head' position for output retrieval until the requested rank/pointID entry is found
         void advance_to_point(const PPIDpair& target_point);

     };

    // Register reader so it can be constructed via inifile instructions
    // First argument is string label for inifile access, second is class from which to construct printer
    LOAD_READER(ascii, asciiReader)
  }
}

#endif
