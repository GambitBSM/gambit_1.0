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

#include "gambit/SpecBit/SMskeleton.hpp" 

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
   namespace SpecBit
   {

      /// Simplify access to map types in this file
      typedef MapTypes<SLHAskeletonTraits<SMea> > MT; 

      /// @{ Member functions for SLHAeaModel class
           
      /// Default Constructor
      SMea::SMea() 
        : SLHAeaModel()
      {}

      /// Constructor via SLHAea object
      SMea::SMea(const SLHAea::Coll& input)
        : SLHAeaModel(input)
      {}

      /// @{ Getters for SM information 

      /// Pole masses
      double SMea::get_MZ_pole()        const { return getdata("SMINPUTS",4); }
      double SMea::get_Mtop_pole()      const { return getdata("SMINPUTS",6); }

      // Note, these are actually MSbar masses mb(mb) and mc(mc)
      // However, since this wrapper is very simple, it isn't possible to return
      // these at the same scale as the other running parameters. They can be
      // be considered as approximately pole masses though, so I have allowed
      // to be accessed here. Use as pole masses at own risk.
      double SMea::get_MbMb()           const { return getdata("SMINPUTS",5); }
      double SMea::get_McMc()           const { return getdata("SMINPUTS",24); }

      double SMea::get_Mtau_pole()      const { return getdata("SMINPUTS",7); }
      double SMea::get_Mmuon_pole()     const { return getdata("SMINPUTS",13); }
      double SMea::get_Melectron_pole() const { return getdata("SMINPUTS",11); }

      double SMea::get_Mnu1_pole()      const { return getdata("SMINPUTS",12); }
      double SMea::get_Mnu2_pole()      const { return getdata("SMINPUTS",14); }
      double SMea::get_Mnu3_pole()      const { return getdata("SMINPUTS",8); }

      double SMea::get_MPhoton_pole()   const { return 0.; }
      double SMea::get_MGluon_pole()    const { return 0.; }
       
      // In SLHA the W mass is an output, though some spectrum generator authors
      // allow it as a non-standard entry in SMINPUTS. Here we will stick to
      // SLHA.
      double SMea::get_MW_pole()        const { return getdata("MASS",24); }
      
      /// Running masses
      //  Only available for light quarks
      double SMea::get_md() const { return getdata("SMINPUTS",21); }
      double SMea::get_mu() const { return getdata("SMINPUTS",22); }
      double SMea::get_ms() const { return getdata("SMINPUTS",23); }
   
      // Gauge couplings not provided since they cannot be provided at the same
      // scale. If you want the SLHA definition gauge couplings, you can extract them
      // from the SLHAea object yourself, or use the SMInputs object which comes
      // along with this SubSpectrum inside the parent Spectrum object.
 
      /// @}


      /// @{ Member functions for SMskeleton class

      /// @{ Constructors 
 
      /// Default Constructor
      SMskeleton::SMskeleton() 
        : SLHAskeleton<SMskeleton,SLHAskeletonTraits<SMea> >()
      {}

      /// Constructor via SLHAea object
      SMskeleton::SMskeleton(const SLHAea::Coll& input)
        : SLHAskeleton<SMskeleton,SLHAskeletonTraits<SMea> >(input)
      {}

      /// Copy constructor: needed by clone function.
      SMskeleton::SMskeleton(const SMskeleton& other)
        : SLHAskeleton<SMskeleton,SLHAskeletonTraits<SMea> >(other)
      {} 

      /// @}  
       
      /// Hardcoded to return SLHA2 defined scale of light quark MSbar masses in SMINPUTS block (2 GeV)
      double SMskeleton::GetScale() const { return 2; }
      
      /// @}
      
      // Map fillers

      /// Filler for Pole_mass_map (from Model object)
      MT::fmap SMskeleton::fill_PoleMass_map()
      {
         MT::fmap tmp_map;
      
         addtomap(("Z0", "Z"),       &SMea::get_MZ_pole );      
         addtomap(("W+", "W-", "W"), &SMea::get_MW_pole );
         addtomap(("t", "tbar", "u_3", "ubar_3"), &SMea::get_Mtop_pole );    
         addtomap(("b", "bbar", "d_3", "dbar_3"), &SMea::get_MbMb      );
         addtomap(("c", "cbar", "u_2", "ubar_2"), &SMea::get_McMc      );
         addtomap(("tau+","tau-","tau","e+_3","e-_3"),         &SMea::get_Mtau_pole      );
         addtomap(("mu-", "mu+", "mu", "e-_2", "e+_2", "e_2"), &SMea::get_Mmuon_pole     );
         addtomap(("e-",  "e+",  "e",  "e-_1", "e+_1", "e_1"), &SMea::get_Melectron_pole );
         addtomap(("nu_1", "nubar_1"), &SMea::get_Mnu1_pole );
         addtomap(("nu_2", "nubar_2"), &SMea::get_Mnu2_pole );
         addtomap(("nu_3", "nubar_3"), &SMea::get_Mnu3_pole );

         tmp_map["gamma"] = &SMea::get_MPhoton_pole;  
         tmp_map["g"]     = &SMea::get_MGluon_pole;  

         return tmp_map; 
      }

      /// Filler for mass_map 
      MT::fmap SMskeleton::fill_mass_map()
      {
         MT::fmap tmp_map;

         addtomap(("u", "ubar", "u_1", "ubar_1"), &SMea::get_mu );
         addtomap(("d", "dbar", "d_1", "dbar_1"), &SMea::get_md );
         addtomap(("s", "sbar", "d_2", "dbar_2"), &SMea::get_ms );
 
         return tmp_map;
      }

   } // end SpecBit namespace
} // end Gambit namespace


