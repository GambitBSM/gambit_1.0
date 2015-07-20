//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helper functions for SMInputs struct
///
///  *********************************************
///
///  Authors: 
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Mar 
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
/// 
///  *********************************************

#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Elements/slhaea_helpers.hpp"


namespace Gambit
{

   namespace Utils
   {

	   /// Get an entry from an SLHAea object, with some error checking
	   double SLHAea_get(const SLHAea::Coll& data, const std::string& block, const int index)
	   {
	      double output;
	      try
	      {
	        output = SLHAea::to<double>(data.at(block).at(index).at(1));
	      }
	      catch (const std::out_of_range& e)
	      {
	        std::ostringstream errmsg;
	        errmsg << "Error accessing data at index "<<index<<" of block "<<block<<". Please check that the SLHAea object was properly filled." << std::endl;
	        errmsg  << "(Received out_of_range error from SLHAea class with message: " << e.what() << ")";
	        utils_error().raise(LOCAL_INFO,errmsg.str());    
	      }
	      return output;
	   }
	
	   /// Get an entry from an SLHAea object, with some error checking and a fallback value
	   double SLHAea_get(const SLHAea::Coll& data, const std::string& block, const int index, const double defvalue)
	   {
	      double output;
	      try
	      {
	        output = SLHAea::to<double>(data.at(block).at(index).at(1));
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
	
	   /// Look for a block in an SLHAea object; add it if absent, check for an existing entry in the block if present.
	   bool add_block_if_absent_and_check_for_entry(SLHAea::Coll& data /*modify*/, const std::string& block, const int index, const bool overwrite)
	   {
	     // Check if block exists
	     if (data.find(block) == data.end())
	     {
	       // Nope; add it.
	       data[block][""] << "BLOCK" << block;  
	       return false;
	     }
	     // Check for existing entry
	     if(not overwrite)
	     {
	       try
	       {
	         data.at(block).at(index).at(1);
	         // Entry exists, indicate that the calling function can return.
	         return true;
	       }
	       catch (const std::out_of_range& e)
	       {
	         // Entry doesn't exist; indicate that the calling function should go on.
	       } 
	     }
	     return false;
	   }

   }
 
}
