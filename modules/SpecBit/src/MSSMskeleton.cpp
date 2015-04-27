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

#include "gambit/SpecBit/MSSMskeleton.hpp" 

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

      /// Simplify access to map types in this file
      typedef MapTypes<SLHAskeletonTraits<MSSMea>> MT; 

      /// @{ Member functions for SLHAeaModel class
           
      /// Default Constructor
      MSSMea::MSSMea() 
        : SLHAeaModel()
      {}

      /// Constructor via SLHAea object
      MSSMea::MSSMea(const SLHAea::Coll& input)
        : SLHAeaModel(input)
      {}

      /// @{ Getters for MSSM information 

      double MSSMea::get_MZ_pole() const { return getdata("SMINPUTS",4); }

      /// @}


      /// @{ Member functions for MSSMskeleton class

      /// @{ Constructors 
 
      /// Default Constructor
      MSSMskeleton::MSSMskeleton() 
        : SLHAskeleton()
      {}

      /// Constructor via SLHAea object
      MSSMskeleton::MSSMskeleton(const SLHAea::Coll& input)
        : SLHAskeleton(input)
      {}

      /// Copy constructor: needed by clone function.
      MSSMskeleton::MSSMskeleton(const MSSMskeleton& other)
        : SLHAskeleton(other)
      {} 

      /// @}  

      // Map fillers

      /// Filler for Pole_mass_map (from Model object)
      MT::fmap MSSMskeleton::fill_PoleMass_map()
      {
         MT::fmap tmp_map;
      
         addtomap(("Z0", "Z"), &MSSMea::get_MZ_pole);
         //tmp_map["g"]     = &get_Pole_mGluon;

         return tmp_map; 
      }


   } // end SpecBit namespace
} // end Gambit namespace


