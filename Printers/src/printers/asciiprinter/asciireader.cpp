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

    /// @{ General members of 'asciiReader'

    /// Constructor
    asciiReader::asciiReader(const Options& options)
      : infoFile_name( options.getValue<std::string>("info_filename") )
      , dataFile_name( options.getValue<std::string>("data_filename") )
      , column_map( get_column_info(infoFile_name) )
      , col_rank( safe_col_lookup("MPIrank", column_map, infoFile_name) )
      , col_ptID( safe_col_lookup("pointID", column_map, infoFile_name) )
      , dataset_length(0)
      , current_row(0)
      , current_point(0,0)
      , current_line("")
    {
      logger() << LogTags::info << "asciiReader: Constructing 'asciiReader' for performing retrieval from previous output. File to be accessed is:"<<std::endl;
      logger() << "  data file: " << dataFile_name << std::endl;
      logger() << "  info file: " << infoFile_name << std::endl;
      logger() << EOM;

      /// Open output data file
      dataFile.open(dataFile_name);

      if( dataFile.fail() )
      {
        std::ostringstream err;
        err << "Error! asciiReader failed to open 'data' file '"<<dataFile_name<<"' for reading past scan output. OS message was: "<<strerror(errno);
        printer_error().raise(LOCAL_INFO,err.str());
      }

      /// Scan through file and figure out how many points are in the dataset
      get_next_point();
      dataset_length++;
      if(eoi())
      {
        std::ostringstream err;
        err << "Error! asciiReader reached end of input file '"<<dataFile_name<<"' immediately (file seems to be empty?). Please check the path specified in the YAML config file for this run." << std::endl;
        printer_error().raise(LOCAL_INFO,err.str());
      }

      while(not eoi())
      {
        get_next_point();
        dataset_length++;
      }
      // Note, there is an extra iteration here (one past the end), so the length is indeed the actual length (since we started counting at zero), not the index of the last entry.
      reset();
    }

    /// Get total length of dataset
    ulong asciiReader::get_dataset_length()
    {
      return dataset_length;
    }

    // Get a linear index which corresponds to the current rank/ptID pair in the iterative sense
    ulong asciiReader::get_current_index()
    {
      return current_row;
    }

    /// Reset read head position to zero
    void asciiReader::reset()
    {
      dataFile.close();
      dataFile.open(dataFile_name);

      if( dataFile.fail() )
      {
        std::ostringstream err;
        err << "Error! asciiReader failed to re-open 'data' file '"<<dataFile_name<<"' for reading previous output while resetting read-head position. OS message was: "<<strerror(errno);
        printer_error().raise(LOCAL_INFO,err.str());
      }

      /// Reset row count
      current_row = 0;
    }

    // Get current rank/ptID pair in data file
    // Make sure get_next_point has been called first! Otherwise we may not have a current point to get
    PPIDpair asciiReader::get_current_point()
    {
      return current_point;
    }

    /// Get next rank/ptID pair
    PPIDpair asciiReader::get_next_point()
    {
      next_row();
      // Point will get returned, but check eoi() before using it! If eoi() then we didn't actually get a new point, this should still just be the previous point.
      return get_current_point();
    }

    /// Check for end of input (or otherwise unreadable state)
    bool asciiReader::asciiReader::eoi()
    {
      //bool tmp = !dataFile;
      //std::cout << "eoi()? " << tmp << std::endl;
      //if(!dataFile) { std::cout << "At end of file!" << std::endl; }
      return !dataFile;
    }



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
      ///Column 6: "#NormalDist_parameters @NormalDist::primary_parameters::mu"
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
         uint  MPIrank = 0;
         ulong pointID = 0;
         double tmp; // Seem to need to convert to double first due to exponential notation
         bool got_MPIrank(false);
         bool got_pointID(false);

         while(i<=col_rank or i<=col_ptID)
         {
           if     (i==col_rank){ iss >> tmp; MPIrank=(uint)(tmp+0.5); got_MPIrank=true; }
           else if(i==col_ptID){ iss >> tmp; pointID=(ulong)(tmp+0.5); got_pointID=true; }
           else { iss >> garbage; }
           if(!iss)
           {
             std::ostringstream err;
             err << "Error! asciiReader failed to read line '"<<current_row+1<<"', column '"<<i+1<<"' from the wrapped output file '"<<dataFile_name<<"'! The file may be corrupt.";
             printer_error().raise(LOCAL_INFO,err.str());
           }
           i++;
         }

         if(not got_MPIrank)
         {
             std::ostringstream err;
             err << "Error! asciiReader failed to extract the MPIrank from line '"<<current_row+1<<"' of the wrapped output file '"<<dataFile_name<<"'!";
             printer_error().raise(LOCAL_INFO,err.str());
         }

         if(not got_pointID)
         {
             std::ostringstream err;
             err << "Error! asciiReader failed to extract the pointID from line '"<<current_row+1<<"' of the wrapped output file '"<<dataFile_name<<"'!";
             printer_error().raise(LOCAL_INFO,err.str());
         }

         // Set new position data
         current_point = PPIDpair(pointID,MPIrank);
         current_row++;
         // Before trying to access stuff from this row, check for end of file via eoi() function!
       }
       // Else do nothing, but make sure to check eoi() in other functions before trying to do stuff with this row!
    }


    /// Advance the 'read head' position for output retrieval until the requested rank/pointID entry is found
    void asciiReader::advance_to_point(const PPIDpair& target_point)
    {
      // Check if we are at the right place for the point already
      if(current_point!=target_point)
      {
         //std::cout<<"Not at correct point! Move read head until we find it!"<<std::endl;//DEBUG
         //std::cout<<" ("<<current_point.first<<", "<<current_point.second<<") --->  ("<<target_point.first<<","<<target_point.second<<")"<<std::endl;
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
             reset();

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
      //std::cout<<" Advanced to point: ("<<current_point.first<<", "<<current_point.second<<")"<<std::endl;
      // Else Already at the right place! No need to do anything.
    } // end function

    /// Get all output column labels
    std::set<std::string> asciiReader::get_all_labels()
    {
       std::set<std::string> out;
       for(auto it = column_map.begin(); it!=column_map.end(); ++it)
       {
         out.insert(it->first);
       }
       return out;
    }
    /// @}

  }
}
