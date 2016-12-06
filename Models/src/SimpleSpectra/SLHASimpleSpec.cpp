//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
//
///  *********************************************
///
///  Authors:
///  <!-- add name and date if you modify -->
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Apr
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2016 Oct
///
///  *********************************************

#include "gambit/Models/SimpleSpectra/SLHASimpleSpec.hpp"

#include <boost/preprocessor/tuple/to_seq.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/seq/for_each_product.hpp>

/// Macro to help assign the same function pointers to multiple string keys
// Relies on "tmp_map" being used as the variable name for the temporary maps
// inside the fill_map functions.
#define addtomap_EL(r, PRODUCT)                                         \
{                                                                       \
   str key      = BOOST_PP_SEQ_ELEM(0,PRODUCT); /* string map key */    \
   tmp_map[key] = BOOST_PP_SEQ_ELEM(1,PRODUCT); /* function pointer */  \
}

#define addtomap(__KEYS,FPTR) BOOST_PP_SEQ_FOR_EACH_PRODUCT(addtomap_EL, (BOOST_PP_TUPLE_TO_SEQ(__KEYS))((FPTR)) )

using namespace SLHAea;

namespace Gambit
{

      /// @{ Member functions for SLHAeaModel class

      /// Default Constructor
      SLHAeaModel::SLHAeaModel()
        : data()
      {}

      /// Constructor via SLHAea object
      SLHAeaModel::SLHAeaModel(const SLHAea::Coll& input)
        : data(input)
      {
        // Work out which version of SLHA the wrapped SLHAea object follows.
        try
        {
          data.at("SELMIX").find_block_def();
          wrapped_slha_version = 2;
        }
        catch(const std::out_of_range& e)
        {
          try
          {
            data.at("STOPMIX").find_block_def();
            wrapped_slha_version = 1;
          }
          catch(const std::out_of_range& e)
          {
            wrapped_slha_version = 0;
          }
        }
      }

      /// Get the SLHA version of the internal SLHAea object
      int SLHAeaModel::slha_version() const { return wrapped_slha_version; }

      /// Get reference to internal SLHAea object
      const SLHAea::Coll& SLHAeaModel::getSLHAea(int slha_version) const
      {
        if (slha_version != wrapped_slha_version)
        {
          std::stringstream x;
          x << "Wrapped SLHA file is in SLHA" << wrapped_slha_version << ", but something requested an SLHAea object in SLHA" << slha_version << " format.";
          model_error().forced_throw(LOCAL_INFO, x.str());
        }
        return data;
      }

      /// Add spectrum information to an SLHAea object
      void SLHAeaModel::add_to_SLHAea(int slha_version, SLHAea::Coll& slha) const
      {
        if (slha_version != wrapped_slha_version)
        {
          std::stringstream x;
          x << "Wrapped SLHA file is in SLHA" << wrapped_slha_version << ", but something requested to add it to an SLHAea object in SLHA" << slha_version << " format.";
          model_error().raise(LOCAL_INFO, x.str());
        }
        // Make a copy of the internal SLHAea object, remove any SM info from it, and add the rest to the slhaea object.
        SLHAea::Coll data_copy = data;
        Coll::key_matches target_blocks[4] = { Coll::key_matches("SMINPUTS"), Coll::key_matches("VCKMIN"), Coll::key_matches("UPMNSIN"), Coll::key_matches("MASS") };
        for (Coll::iterator sblock = slha.begin(); sblock != slha.end(); ++sblock)
        {
          for (Coll::iterator dblock = data_copy.begin(); dblock != data_copy.end();)
          {
            bool delete_dblock = false;
            for (int i = 0; i < 3; i++)
            {
              if (target_blocks[i](*sblock) and target_blocks[i](*dblock)) delete_dblock = true;
            }
            if (delete_dblock) dblock = data_copy.erase(dblock);
            else ++dblock;
          }
        }
        for (Coll::iterator sblock = slha.begin(); sblock != slha.end();)
        {
          if (target_blocks[3](*sblock))
          {
            if(slha["MASS"][24].is_data_line()) data_copy["MASS"][24] = slha["MASS"][24];
            sblock = slha.erase(sblock);
          }
          else
          {
            ++sblock;
          }
        }
        slha.insert(slha.end(), data_copy.cbegin(), data_copy.cend());
      }

      /// PDG code translation map, for special cases where an SLHA file has been read in and the PDG codes changed.
      const std::map<int, int>& SLHAeaModel::PDG_translator() const
      {
        return PDG_translation_map;
      }


      /// @{ Helper functions to do error checking for SLHAea object contents

      /// One index
      double SLHAeaModel::getdata(const std::string& block, int index) const
      {
         double output;
         try
         {
           output = to<double>(data.at(block).at(index).at(1));
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

      /// Two indices
      double SLHAeaModel::getdata(const std::string& block, int i, int j) const
      {
         double output;
         try
         {
           output = to<double>(data.at(block).at(i,j).at(2));
         }
         catch (const std::out_of_range& e)
         {
           std::ostringstream errmsg;
           errmsg << "Error accessing data at index "<<i<<","<<j<<" of block "<<block<<". Please check that the SLHAea object was properly filled." << std::endl;
           errmsg  << "(Received out_of_range error from SLHAea class with message: " << e.what() << ")";
           utils_error().raise(LOCAL_INFO,errmsg.str());
         }
         return output;
      }

} // end Gambit namespace


