//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Ascii printer retriever class declaration
///  This is a class accompanying the asciiReader
///  which takes care of *reading* from output
///  created by the asciiReader.
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

#include "gambit/Printers/printers/asciireader.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Logs/logger.hpp"

namespace Gambit {
  namespace Printers {

    /// Helper function for map lookup
    uint safe_col_lookup(const std::string& key, const std::map<std::string,uint>& colmap, std::string fname)
    {
      auto it = colmap.find(key);
      if(it==colmap.end())
      {
         std::ostringstream err;
         err << "Error! asciiReader could not locate the required entry '"<<key<<"' in the info file '"<<fname<<"'. Please check that the supplied filename is a valid 'info' file produced by asciiPrinter in a previous scan." << std::endl;
         printer_error().raise(LOCAL_INFO,err.str());
      }
      return it->second;
    }

    /// @{ Members of 'asciiReader'

    /// Constructor
    asciiReader::asciiReader(const Options& options)
      : infoFile_name( options.getValue<std::string>("info_filename") )
      , dataFile_name( options.getValue<std::string>("data_filename") )
      , column_map( get_column_info(infoFile_name) )
      , col_rank( safe_col_lookup("MPIrank", column_map, infoFile_name) )
      , col_ptID( safe_col_lookup("pointID", column_map, infoFile_name) )
      , current_row(0)
    {
      logger() << LogTags::info << "asciiReader: Constructing 'asciiReader' for performing retrieval from previous output. File to be accessed is:"<<std::endl;
      logger() << "  data file: " << dataFile_name << std::endl;
      logger() << "  info file: " << infoFile_name << std::endl;
      logger() << EOM;

      /// Open output data file
      dataFile.open(dataFile_name);
    }

    /// Get next rank/ptID pair
    std::pair<uint, ulong> asciiReader::get_next_point()
    {
      next_row();
      // Point will get returned, but check eoi() before using it! If eoi() then we didn't actually get a new point, this should still just be the previous point.
      return current_point;
    }
 
    /// Check for end of input (or otherwise unreadable state)
    bool asciiReader::asciiReader::eoi()
    {
      //bool tmp = !dataFile;
      //std::cout << "eoi()? " << tmp << std::endl;
      //if(!dataFile) { std::cout << "At end of file!" << std::endl; }
      return !dataFile;
    } 
    /// @}

    /// Open an 'info' file and figure out what column is what
    std::map<std::string,uint> asciiReader::get_column_info(const std::string& info_filename)
    {
      std::map<std::string,uint> column_map;

      std::ifstream infoFile;
      infoFile.open(info_filename);
      
      if ( infoFile.fail() )
      {
        std::ostringstream err;
        err << "Error! asciiReader failed to open 'info' file '"<<info_filename<<"' for reading column metadata. OS message was: "<< strerror(errno);
        printer_error().raise(LOCAL_INFO,err.str());
      }

      /// Get column descriptions
      /// Examples:
      ///Column 3: MPIrank
      ///Column 4: pointID
      ///Column 6: #NormalDist_parameters @NormalDist::primary_parameters::mu
      std::string line;
      while(std::getline(infoFile, line)){
         std::string garbage;
         std::string description;
         int col_index;
         std::istringstream iss(line);
         iss >> garbage; // First column is the just the word 'Column'
         iss >> col_index; // Column index (I think the trailing colon will get ignored, so this is ok)
         iss >> garbage; // The colon
         iss >> std::ws; // Consume whitespace
         getline(iss, description); // Put rest of line into the 'description' string.
         column_map[description] = col_index-1; // convert to zero-indexed format
         /// DEBUGGING
         //std::cout << " From '"<<line<<"' extracted description '"<<description<<"' and index '"<<col_index-1<<"'"<<std::endl;
      }
      infoFile.close();

      return column_map;
    }

    // Advance the read-head by one row 
    void asciiReader::next_row()
    {
       if(eoi())
       {
          std::ostringstream err;
          err << "Error! asciiReader attempted to iterate past the end of the wrapped output file ("<<dataFile_name<<")! When iterating through output please check for the end-of-iteration via 'eoi()' before calling 'get_next_point()'.";
          printer_error().raise(LOCAL_INFO,err.str());
       }
      
       // Get new line data
       std::getline(dataFile, current_line);
       if(!eoi())
       {
         // Process line and find the MPIrank and pointID entries  
         std::istringstream iss(current_line);
         unsigned int i=0;
         std::string garbage; // can't use double, some entries might be 'none'
         uint  MPIrank;
         ulong pointID;
         while(i<=col_rank or i<=col_ptID)
         {
           if(!iss)
           {
             std::ostringstream err;
             err << "Error! asciiReader failed to read line '"<<current_row+1<<"', column '"<<i+1<<"' from the wrapped output file '"<<dataFile_name<<"'! The file may be corrupt.";
             printer_error().raise(LOCAL_INFO,err.str());
           }
           else if(i==col_rank){ iss >> MPIrank; }
           else if(i==col_ptID){ iss >> pointID; }
           else { iss >> garbage; }
           i++;
         }
         // Set new position data
         current_point = std::make_pair(MPIrank,pointID);
         current_row++;
         // Before trying to access stuff from this row, check for end of file via eoi() function!
       }
       // Else do nothing, but make sure to check eoi() in other functions before trying to do stuff with this row!
    }


    /// Advance the 'read head' position for output retrieval until the requested rank/pointID entry is found
    void asciiReader::advance_to_point(const std::pair<uint,ulong>& target_point)
    {
      // Check if we are at the right place for the point already
      if(current_point!=target_point)
      {
         // Need to search for the point
         ulong start_pos = current_row; // Record starting position
         bool begun_new_loop(false);  // Flag to check if we have already looped past the end of the file once

         /// Loop until we find the right point
         while(current_point!=target_point)
         {
           next_row();
           if(eoi()) /// If end of file, need to reset the file
           {
             if(begun_new_loop)
             {
               // Already initiated new loop once; don't do it again!
               std::ostringstream err;
               err << "Error! asciiReader tried to initiate a second loop over output data while searching for a point in '"<<dataFile_name<<"'! This should never happen and indicates a bug in asciiPrinter, please file a bug report.";
               printer_error().raise(LOCAL_INFO,err.str());
             }

             /// Presumably we have reached the end of the file; so close it and reopen it,
             /// to wrap around and search for the desired point from the beginning.
             dataFile.close();
             dataFile.open(dataFile_name);

             if ( dataFile.fail() )
             {
               std::ostringstream err;
               err << "Error! asciiReader failed to re-open 'data' file '"<<dataFile_name<<"' for reading previous output while performing a search for a point. OS message was: "<<strerror(errno);
               printer_error().raise(LOCAL_INFO,err.str());
             }
             /// Reset row count
             current_row = 0;
             // Get first row data
             next_row();
             if(eoi()) // If it is still eoi() there is probably nothing in the file...
             {
               std::ostringstream err;
               err << "Error! asciiReader could not find the requested MPIrank/pointID pair in the searched output data file '"<<dataFile_name<<"'! File appears to be empty or corrupted!";
               printer_error().raise(LOCAL_INFO,err.str());
             }
           }

           // Check that we haven't been here already!
           if(current_row==start_pos)
           {
              std::ostringstream err;
              err << "Error! asciiReader could not find the requested MPIrank/pointID pair in the searched output data file '"<<dataFile_name<<"'! Please ensure that this point exists in the data file (e.g. by iterating through the full point list using 'get_next_point()')";
              printer_error().raise(LOCAL_INFO,err.str());
           }
         }
      }
      // Else Already at the right place! No need to do anything.
    } // end function


    /// @{ Retrieval functions

    /// Everything is a string in the output file, so use this as the 'master' retrieve function, and the others
    /// just wrap it in various ways
    void asciiReader::_retrieve(std::string& out, const std::string& label, const uint rank, const ulong pointID)
    {
      /// Advance read-head position until the target point is found (or throw an error if it cannot be found)
      /// Will be fastest if we are already at the right position or only have to go forward a small number of slots
      /// Going backwards will involve traversing the whole file forwards and looping back around from the start!
      advance_to_point(std::make_pair(rank,pointID));
      
      /// Check which column is supposed to correspond with 'label'
      uint target_col;
      std::map<std::string,uint>::const_iterator it = column_map.find(label);
      if(it != column_map.end())
      {
        target_col = it->second;
      }
      else
      {
        std::ostringstream err;
        err << "Error! asciiReader could not retrieve requested output entry '"<<label<<"'. This label does not match any column described in the loaded 'info' file '"<<infoFile_name<<"'.";
        printer_error().raise(LOCAL_INFO,err.str());
      }

      /// Parse the line and extract the entry
      std::istringstream iss(current_line);
      unsigned int i=0;
      std::string garbage;
      while(i<target_col)
      {
        iss >> garbage;
        if(!iss)
        {
           std::ostringstream err;
           err << "Error! asciiReader failed to read line '"<<current_row+1<<"', column '"<<i+1<<"' from the wrapped output file '"<<dataFile_name<<"'! The file may be corrupt, or may contain fewer columns than expected (was planning to iterate up to column '"<<target_col<<"').";
           printer_error().raise(LOCAL_INFO,err.str());     
        }
        i++;
      }
      iss >> out;
      if(!iss)
      {
         std::ostringstream err;
         err << "Error! asciiReader failed to read line '"<<current_row+1<<"', column '"<<i+1<<"' from the wrapped output file '"<<dataFile_name<<"'! The file may be corrupt, or may contain fewer columns than expected (was planning to iterate up to column '"<<target_col<<"').";
         printer_error().raise(LOCAL_INFO,err.str());     
      }
      /// done!
    }

    void asciiReader::_retrieve(double& out, const std::string& label, const uint rank, const ulong pointID)
    {
      /// Get requested quantity as a string, then convert it to a double
      std::string temp_out;
      _retrieve(temp_out, label, rank, pointID);
      std::istringstream iss(temp_out);
      iss >> out;
      if(!iss)
      {
         std::ostringstream err;
         err << "Error! asciiReader retrieved an element of '"<<label<<"' from the data file '"<<dataFile_name<<"', but failed to convert it to type 'double'. The data file may be corrupted, or you may have tried to use an inappropriate 'retrieve' type for this data. Error occurred while reading from row '"<<current_row<<"'. Retrieved string value was '"<<temp_out<<"'.";
         printer_error().raise(LOCAL_INFO,err.str());     
      }
      /// done!
    }

    /// local helper function for the ModelParameters '_retrieve' function
    bool parse_label_for_ModelParameters(const std::string& fulllabel, const std::string& modelname, std::string& out)
    {
       bool result = false;
       std::istringstream iss(fulllabel);
       std::string capability;
       std::string rest; 
       iss >> capability;
       iss >> rest;
       if(!iss)
       {
         // Weren't two elements to the label, so this can't be a match
         result = false; // failed to match
       }
       else
       {
         //capability is "#NormalDist_parameters", for example
         capability.erase(0,1); // cut off the first character (hash, in all potentially matching cases)
         std::vector<str> split_cap = Utils::delimiterSplit(capability, "_");
         if(split_cap[0]==modelname)
         {
            // So far so good, check 'rest', which is, e.g. @NormalDist::primary_parameters::mu
            // Split 'rest' into a vector of strings, using a delimiter
            rest.erase(0,1); // cut off the first character (@, in all potentially matching cases)
            std::vector<str> split_rest = Utils::delimiterSplit(rest, "::");
            if(split_rest[0]==modelname and split_rest.size()==3)
            {
              // Ok! We have a match!
              out = split_rest[2];
              result = true;
            } else { result = false; }
         } else { result = false; }        
       }
       return result;
    }

    /// This one is fancy, gets ALL the ModelParameters matching a certain model name
    /// So say the labels for two parameters are:
    ///
    ///#NormalDist_parameters @NormalDist::primary_parameters::mu
    ///#NormalDist_parameters @NormalDist::primary_parameters::sigma
    ///
    /// Then to get a ModelParameters object containing "mu" and "sigma" you should enter
    /// 'NormalDist' as the label.
    ///
    ///Note:
    ///label=("#"+func_capability+" @"+origin_name+"::"+func_name)
    ///
    void asciiReader::_retrieve(ModelParameters& out, const std::string& modelname, const uint rank, const ulong pointID)
    {
      //std::cout<<"Attempting to retrieve ModelParameters for model '"<<modelname<<"'"<<std::endl;
      /// Work out all the output labels which correspond to the input modelname
      bool found_at_least_one(false);
      for(std::map<std::string,uint>::const_iterator 
          it = column_map.begin();
          it!= column_map.end(); ++it)
      {
        std::string param_name; // *output* of parsing function
        if(parse_label_for_ModelParameters(it->first, modelname, param_name))
        {
          // Add the found parameter name to the ModelParameters object
          out._definePar(param_name);
          // Get the corresponding value out of the data file
          double value; // *output* of retrieve function
          _retrieve(value, it->first, rank, pointID);
          out.setValue(param_name, value);
          //std::cout<<"Extracted parameter "<<param_name<<", value="<<value<<std::endl;
          found_at_least_one = true;
        }
      }

      if(not found_at_least_one)
      {
        // Didn't find any matches!
         std::ostringstream err;
         err << "Error! asciiReader failed to find any ModelParameters matching the model name '"<<modelname<<"' in the info file '"<<infoFile_name<<"' (while calling 'retrieve'). Please check that model name and info file name are correct."; 
         printer_error().raise(LOCAL_INFO,err.str());     
      }
      /// done!
    }

    void asciiReader::_retrieve(std::vector<double>& out,const std::string& label, const uint rank, const ulong pointID)
    { printer_error().raise(LOCAL_INFO,"NOT YET IMPLEMENTED"); }
    void asciiReader::_retrieve(map_str_dbl& out,        const std::string& label, const uint rank, const ulong pointID)
    { printer_error().raise(LOCAL_INFO,"NOT YET IMPLEMENTED"); }

    /// @}

  }
}
