//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Implementations of helper functions that add
///  or retrieve the contents of an SLHAea::Coll
///  with some basic error-checking.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer  
///          (benjamin.farmer@monash.edu)
///  \date 2015
///  
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015
///
///  *********************************************

#ifndef __slhaea_helpers_hpp__
#define __slhaea_helpers_hpp__

#include "gambit/Elements/slhaea_helpers.hpp"

namespace Gambit
{

  /// Get an entry from an SLHAea object as a double, with some error checking
  double SLHAea_get(const SLHAstruct& slha, const str& block, const int index)
  {
    double output;
    try
    {
      output = SLHAea::to<double>(slha.at(block).at(index).at(1));
    }
    catch (const std::out_of_range& e)
    {
      std::ostringstream errmsg;
      errmsg << "Error accessing data at index " << index << " of block " << block
             << ". Please check that the SLHAea object was properly filled." << std::endl
             << "(Received out_of_range error from SLHAea class with message: " << e.what() << ")";
      utils_error().raise(LOCAL_INFO,errmsg.str());    
    }
    return output;
  }

  /// Get an entry from an SLHAea object as a double; raise a warning and use a default value if the entry is missing
  double SLHAea_get_or_def(const SLHAstruct& slha, const str& block, const int index, const double defvalue)
  {
    double output;
    try
    {
      output = SLHAea::to<double>(slha.at(block).at(index).at(1));
    }
    catch (const std::out_of_range& e)
    {
      std::ostringstream warn;
      warn << "Warning! No entry found at index "<<index<<" of block "<<block<<". Using default value: "<<defvalue<< std::endl;
      utils_warning().raise(LOCAL_INFO,warn.str());    
      output = defvalue;
    }
    return output;
  }
  
  /// Add a new block to an SLHAea object, with our without a scale
  void SLHAea_add_block(SLHAstruct& slha, const str& name, const double scale)
  {
    if(scale==-1)
    {
      slha[name][""] << "BLOCK" << name;
    }
    else
    {
      slha[name][""] << "BLOCK" << name << "Q=" << scale;
    }
  }

  /// Check if a block exists in an SLHAea object, add it if not, and check if it has an entry at a given index
  bool check_block(SLHAstruct& slha, const str& block, const int index, const bool overwrite)
  {
    // Check if block exists
    try
    {
      slha.at(block);
    }
    catch (const std::out_of_range& e)
    {
      // Nope; add it.
      slha[block][""] << "BLOCK" << block;  
    }
    // Check for existing entry
    if(not overwrite)
    {
      try
      {
        slha.at(block).at(index).at(1);
        // Entry exists, no further action required
        return true;
      }
      catch (const std::out_of_range& e)
      {
        // entry doesn't exist; continue with writing
      } 
    }
    return false;
  }

  /// Add an entry to an SLHAea object (if overwrite=false, only if it doesn't already exist)
  /// @{
  void SLHAea_add(SLHAstruct& slha /*modify*/, const str& block, const int index,
   const double value, const str& comment, const bool overwrite)
  {
    if (check_block(slha, block, index, overwrite)) return;
    slha[block][""] << index << value << (comment == "" ? "" : "# " + comment);
  }
  void SLHAea_add(SLHAstruct& slha /*modify*/, const str& block, const int index,
   const str& value, const str& comment, const bool overwrite)
  {
    if (check_block(slha, block, index, overwrite)) return;
    slha[block][""] << index << value << (comment == "" ? "" : "# " + comment);
  }
  /// @}

}

#endif // #defined slhaea_helpers_hpp
