//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Parameters used to define the Standard Model,
///  in SLHA2 format.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
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

#ifndef __SLHAea_helpers_hpp__
#define __SLHAea_helpers_hpp__

#include "slhaea.h"


namespace Gambit
{

   namespace Utils
   {

	   /// Get an entry from an SLHAea object, with some error checking	   
	   double SLHAea_get(const SLHAea::Coll& data, const std::string& block, const int index);
	
	   /// Get an entry from an SLHAea object, with some error checking and a fallback value
	   double SLHAea_get(const SLHAea::Coll& data, const std::string& block, const int index, const double defvalue);

	   /// Look for a block in an SLHAea object; add it if absent, check for an existing entry in the block if present.
	   bool add_block_if_absent_and_check_for_entry(SLHAea::Coll& data /*modify*/, const std::string& block,
	                                                const int index=1, const bool overwrite=false);
	
	   /// Add an entry to an SLHAea object if it doesn't already exist
	   template<typename T>
	   void SLHAea_add(SLHAea::Coll& data /*modify*/, const std::string& block, const int index, const T value,
	                   const std::string& comment="", const bool overwrite=false)
	   {
	     bool done = add_block_if_absent_and_check_for_entry(data, block, index, overwrite);
	     if (done) return;
	     std::ostringstream commentwhash;
	     if (comment != "") commentwhash << "# " << comment;
	     data[block][""] << index << value << commentwhash.str();
	     return;
	   }
	
	   /// Add a whole matrix to an SLHAea object if it doesn't already exist
	   template<typename T>
	   void SLHAea_add_matrix(SLHAea::Coll& data /*modify*/, const std::string& block, const std::vector<T>& matrix, 
	                   const int rows, const int cols, const std::string& comment="", const bool overwrite=false)
	   {
	     bool done = add_block_if_absent_and_check_for_entry(data, block, 1, overwrite);
	     if (done) return;
	     std::ostringstream commentwhash;
	     if (comment != "") commentwhash << "# " << comment;
	     for (int i = 0; i < rows; i++) for (int j = 0; j < cols; j++)
	     {
	       data[block][""] << i+1 << j+1 << matrix.at(i*rows + j) << commentwhash.str();
	     }
	     return;
	   }

   }

}

#endif
