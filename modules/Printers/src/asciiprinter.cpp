//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Ascii printer class member function definitions
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


// Standard libraries
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <iomanip>

// Gambit
#include "printers/asciiprinter.hpp"
#include "stream_overloads.hpp"

// Code!
namespace Gambit
{

  namespace Printers 
  {

    // Printer to ascii file (i.e. table of doubles)

    // Old Constructor (no longer allowing arbitrary filestreams; printer will create and take care of its own streams now)
    // asciiPrinter::asciiPrinter(std::ofstream& myfstrm, std::ofstream& inffstrm) :
    //   my_fstream(myfstrm), info_fstream(inffstrm)
    // {
    //   buf_loc = 0;
    //   info_file_written = false;
    //   bufferlength = 10;
    //   buffer.resize(bufferlength); 
    //   my_fstream.precision(6); // Precision of output; could easily supply this to the constructor instead.
    // }
 
    // Constructor (accepts 
    asciiPrinter::asciiPrinter(const Options& options):
      buf_loc(0),
      info_file_written(false),
      bufferlength(10),
      my_fstream(options.getValue<std::string>("output_file"), std::ofstream::out),
      info_fstream(options.getValue<std::string>("info_file"), std::ofstream::out)
    {
      // Could set these things via options also if we like.
      buffer.resize(bufferlength); 
      my_fstream.precision(6); // Precision of output; could easily supply this to the constructor instead.
    }
 
    /// Auxiliary mode constructor 
    asciiPrinter::asciiPrinter(const Options& options, std::string& name, bool global=0):
      buf_loc(0),
      info_file_written(false),
      bufferlength(10),
      my_fstream(name+"-"+options.getValue<std::string>("output_file"), std::ofstream::out),
      info_fstream(name+"-"+options.getValue<std::string>("info_file"), std::ofstream::out)
    {
      // Could set these things via options also if we like.
      buffer.resize(bufferlength); 
      my_fstream.precision(6); // Precision of output; could easily supply this to the constructor instead.
    }
 
    /// Destructor
    // Overload the base class virtual destructor
    asciiPrinter::~asciiPrinter() {}
 
    // Initialisation function
    // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true.
    void asciiPrinter::initialise(const std::vector<int>& printmevec)
    {
      //std::cout << "Initialising asciiprinter..." << std::endl;
      // Loop through buffer and initialise all the elements
      for (int i=0; i<bufferlength; i++)
      {
        for (std::vector<int>::const_iterator it = printmevec.begin();
        it != printmevec.end(); it++)
        {
          // Add element to line of buffer (uses default (empty) constructor)
          buffer[i][*it];
        }
      } 
    }
 
    // Clear buffer
    void asciiPrinter::erase_buffer()
    {
      for (int i=0; i<bufferlength; i++)
      {
        for (LineBuf::iterator 
          it = buffer[i].begin(); it != buffer[i].end(); it++)
        {
          // We want to preserve the vertex ID's and just erase the vector part (second) of the map
          (it->second).clear();
        }
      }
    }
  
    // Tell printer to start a new line of the ascii output file
    void asciiPrinter::endline()
    {

      std::cout<<"In acsiiPrinter: starting new printer line!"<<std::endl; 

      // Move buffer location index to the next line
      buf_loc += 1;
      
      // Check if we have filled the buffer
      if (buf_loc >= bufferlength)
      {
        std::map<int,int> newlineindexrecord;
        // Work out how to organise the output file            
        // To do this we need to go through the buffer and find the maximum length of vector associated with each VertexID.
        for (int i=0; i<bufferlength; i++)
        {
          for (LineBuf::iterator 
            it = buffer[i].begin(); it != buffer[i].end(); it++)
          { 
            //(*it)->first  - VertexID
            //(*it)->second - std::vector<double> (result values)
            int oldlen = newlineindexrecord[it->first];
            int newlen = (it->second).size();
            newlineindexrecord[it->first] = std::max(oldlen, newlen);
          }
        }
        // Check if the output format has changed, and raise an error if so
        if (lineindexrecord.size()!=0)
        {
          if (lineindexrecord!=newlineindexrecord)
          {
            printer_error().raise(LOCAL_INFO,"Error! Output format has changed during run! The asciiPrinter cannot handle this!");
          }
        }
        else
        {
          lineindexrecord = newlineindexrecord;
        }
 
        // Write to file and reset buffer
        dump_buffer();
        erase_buffer();
        buf_loc = 0;
      }
    }
  
    // add results to printer buffer
    void asciiPrinter::addtobuffer(const std::vector<double>& functor_data, const std::vector<std::string>& functor_labels, const int vID, const int thread, const int pointID) 
    {
      //TODO: If a functor gets called twice without the printer advancing the data will currently just be overwritten. Should generate an error or something.
      std::cout << "asciiprinter: adding "<<functor_labels<<" to buffer"<<std::endl;
      buffer[buf_loc][vID] = functor_data;
      
      if ( info_file_written == false )
      {
        if ( functor_labels.size() > label_record[vID].size() )
        {
           // Assume the new, longer label list is better to use. This variation of functor_data length from point to point is kind of dangerous for an ascii output file though and we might want to forbid it. There is some probability that my method of allocating the columns according to the most used by each functor in the first buffer dump will fail.
           label_record[vID] = functor_labels;
        }
      }
    }
 
    // write the printer buffer to file       
    void asciiPrinter::dump_buffer()
    {
      // Write record of what is in each column if we haven't done so yet
      // Note the downside of using a map as the buffer; the order of stuff in the output file is going
      // to be kind of haphazard due to the sorted order used by map. Will have to do more work to achieve
      // an ordering that reflects the order of stuff in, say, the inifile.
      std::cout << "dumping asciiprinter buffer" << std::endl;
      if (info_file_written==false)
      {
        int column_index = 1;
        for (std::map<int,int>::iterator
          it = lineindexrecord.begin(); it != lineindexrecord.end(); it++)
        {
          int vID        = it->first;
          int length     = it->second;     // slots reserved in output file for these results
          for (int i=0; i<length; i++)
          {
            info_fstream<<"Column "<<column_index<<": "<<label_record[vID][i]<<std::endl;
            column_index++;
          }
        }
        info_fstream.flush();
        info_file_written=true;
      }

      // Actual dump of buffer to file
      for (int i=0; i<bufferlength; i++)
      {
        for (std::map<int,int>::iterator
          it = lineindexrecord.begin(); it != lineindexrecord.end(); it++)
        { 
          //(*it)->first  - VertexID
          //(*it)->second - std::pair<int,int> containing startindex and length
          std::vector<double>& results = buffer[i][it->first];
          int reslength  = results.size(); // actual length of the current results vector
          int length     = it->second;     // slots reserved in output file for these results
          // print to the fstream!
          for (int j=0;j<length;j++)
          {
            if(j>=reslength)
            {
              // Allocated space exceeded; fill remaining slots with 'none'
              my_fstream<<std::setw(14)<<" none ";
            }
            else
            {
              // print an entry from the results vector
              my_fstream<<std::scientific<<results[j]<<"\t";
            }
          }
          // result printed, do next result                
        } 
        // line printed, print endline character and go to next line
        my_fstream<<std::endl;
      }
      // buffer dump complete! Flush the fstream to ensure write to file happens.
      my_fstream.flush();
    }
 
 
    // PRINT FUNCTIONS
    //----------------------------
    // Need to define one of these for every type we want to print!
    // Could use macros again to generate identical print functions 
    // for all types that have a << operator already defined.
    void asciiPrinter::print(double const& value, const std::string& label, const int IDcode, const int thread, const int pointID)
    {
      std::vector<double> vdvalue(1,value);
      std::vector<std::string> labels(1,label);
      addtobuffer(vdvalue,labels,IDcode,thread,pointID);       
    }
 
    void asciiPrinter::print(std::vector<double> const& value, const std::string& label, const int IDcode, const int thread, const int pointID)
    {
      std::vector<std::string> labels;
      labels.reserve(value.size());
      for(int i=0;i<value.size();i++)
      {
        // Might want to find some way to avoid doing this every single loop, seems kind of wasteful.
        std::stringstream ss;
        ss<<label<<"["<<i<<"]"; 
        labels.push_back(ss.str());
      }
      addtobuffer(value,labels,IDcode,thread,pointID);
    }
   
    void asciiPrinter::print(ModelParameters const& value, const std::string& label, const int IDcode, const int thread, const int pointID)
    {
      std::map<std::string, double> parameter_map = value.getValues();
      std::vector<std::string> names;
      std::vector<double> vdvalue;
      names.reserve(parameter_map.size());
      vdvalue.reserve(parameter_map.size());
      for (std::map<std::string, double>::iterator 
        it = parameter_map.begin(); it != parameter_map.end(); it++)
      {
        std::stringstream ss;
        ss<<label<<"::"<<it->first;
        names.push_back( ss.str() ); 
        vdvalue.push_back( it->second );
      }
      addtobuffer(vdvalue,names,IDcode,thread,pointID);
    }
     
  } // end namespace printers
} // end namespace Gambit
