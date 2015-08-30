//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Nicer alias for SLHAea container class, and 
///  some convenient helper functions that add
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

#ifndef __slha_helpers_hpp__
#define __slha_helpers_hpp__

#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Elements/spectrum_helpers.hpp"

#include "SLHAea/slhaea.h"


namespace Gambit
{

  /// Less confusing name for SLHAea container class
  typedef SLHAea::Coll SLHAstruct;
  
  /// Get an entry from an SLHAea object as a double, with some error checking
  double SLHAea_get(const SLHAstruct& data, const std::string& block, const int index);
  
  /// Get an entry from an SLHAea object as a double; raise a warning and use a default value if the entry is missing
  double SLHAea_get_or_def(const SLHAstruct& data, const std::string& block, const int index, const double defvalue);

  /// Add a new block to an SLHAea object, with our without a scale
  void SLHAea_add_block(SLHAstruct&, const std::string& name, const double scale = -1);

  /// Add an entry to an SLHAea object (if overwrite=false, only if it doesn't already exist)
  void SLHAea_add(SLHAstruct& slha /*modify*/, const std::string& block, const int index, const double value, 
   const std::string& comment="", const bool overwrite=false);

  /// Add an entry from a subspectrum getter to an SLHAea object; 1 SLHA index 
  template<class PhysOrRun, class PT>
  void SLHAea_add_from_subspec(SLHAstruct& slha /*modify*/, const std::string local_info, const PhysOrRun& phys_or_run, 
   const PT partype, const std::string& name, const std::string& block, const int slha_index, 
   const std::string& comment, const bool error_if_missing = true)
  {
     if(phys_or_run.has(partype,name))
     {
        slha[block][""] << slha_index << phys_or_run.get(partype,name) << comment;
     }
     else if(error_if_missing)
     {
        std::ostringstream errmsg;
        errmsg << "Error creating SLHAea output from SubSpectrum object! Required entry not found (paramtype="<<Par::toString.at(partype)<<", name="<<name;
        utils_error().raise(local_info,errmsg.str());  
     } 
     // else skip this entry
     return;
  }

  /// Add an entry from a subspectrum getter to an SLHAea object; two SubSpectrum getter indices, two SLHA indices
  template<class PhysOrRun, class PT>
  void SLHAea_add_from_subspec(SLHAstruct& slha /*modify*/, const std::string local_info, const PhysOrRun& phys_or_run, 
   const PT partype, const std::string& name, const int index1, const int index2, const std::string& block, 
   const int slha_index1, const int slha_index2, const std::string& comment, const bool error_if_missing = true)
  {
    if(phys_or_run.has(partype,name,index1,index2))
    {
      slha[block][""] << slha_index1 << slha_index2 << phys_or_run.get(partype,name,index1,index2) << comment;
    }
    else if(error_if_missing)
    {
      std::ostringstream errmsg;
      errmsg << "Error creating SLHAea output from SubSpectrum object! Required entry not found (paramtype="<<Par::toString.at(partype)<<", name="<<name<<", index1="<<index1<<", index2="<<index2;
      utils_error().raise(local_info,errmsg.str());  
    } 
    // else skip this entry
    return;
  }

}

#endif //defined __slhaea_helpers_hpp__



