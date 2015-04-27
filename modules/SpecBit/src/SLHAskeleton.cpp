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
///  *********************************************

/// @{ Need these just so I can use SpecBit_error() etc.
///    Is there no more "lightweight" way to do this?
#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
/// @}

#include "gambit/SpecBit/SLHAskeleton.hpp" 

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

namespace Gambit {
   namespace SpecBit {

      /// @{ Member functions for SLHAeaModel class
           
      /// Default Constructor
      SLHAeaModel::SLHAeaModel() 
        : data()
      {}

      /// Constructor via SLHAea object
      SLHAeaModel::SLHAeaModel(const SLHAea::Coll& input)
        : data(input)
      {}

      /// Get reference to internal SLHAea object
      const SLHAea::Coll& SLHAeaModel::getSLHAea() const
      {
        return data;
      }

      /// Helper function to do error checking for SLHAea object contents
      double SLHAeaModel::getdata(const std::string& block, const int index) const
      {
         double output;
         try {
           output = to<double>(getSLHAea().at(block).at(index).at(1));
         }
         catch (const std::out_of_range& e) {
           std::ostringstream errmsg;
           errmsg << "Error accessing data at index "<<index<<"of block "<<block<<". Please check that the SLHAea object was properly filled." << std::endl;
           errmsg  << "(Received out_of_range error from SLHAea class with message: " << e.what() << ")";
           SpecBit_error().raise(LOCAL_INFO,errmsg.str());    
         }
         return output;
      }

   } // end SpecBit namespace
} // end Gambit namespace


