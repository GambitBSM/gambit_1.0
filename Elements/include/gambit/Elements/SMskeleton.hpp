//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
//
///  *********************************************
///

///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Apr 
///
///  *********************************************

#ifndef __SMskeleton_hpp__
#define __SMskeleton_hpp__

#include "gambit/Elements/spec.hpp"
#include "gambit/Elements/SLHAskeleton.hpp"
#include "gambit/SpectrumContents/RegisteredSpectra.hpp"

namespace Gambit
{

      /// Skeleton "model" class which interacts with an SLHAea object
      /// Some common functions defined in base class
      class SMea: public SLHAeaModel
      {
         public:
           /// @{ Constructors
           SMea();
           SMea(const SLHAea::Coll& input);
           /// @}

           /// @{ Getters for SM information 
           double get_MZ_pole()        const; 
           double get_Mtop_pole()      const;
                                             
           double get_MbMb()           const; 
           double get_McMc()           const; 
                                             
           double get_Mtau_pole()      const; 
           double get_Mmuon_pole()     const; 
           double get_Melectron_pole() const; 
                                             
           double get_Mnu1_pole()      const; 
           double get_Mnu2_pole()      const; 
           double get_Mnu3_pole()      const; 
                                             
           double get_MPhoton_pole()   const; 
           double get_MGluon_pole()    const; 
                                             
           double get_MW_pole()        const; 

           double get_sinthW2_pole()   const;
           
           double get_md()             const;
           double get_mu()             const;
           double get_ms()             const;
           /// @}
      };

      class SMskeleton;

      /// Specialisation of traits class needed to inform base spectrum class of the Model and Input types
      template <>
      struct SpecTraits<SMskeleton> 
      {
          typedef SpectrumContents::SM Contents;
          typedef SMea     Model;
          typedef DummyInput Input; // DummyInput is just an empty struct
      };

      /// SM specialisation of SLHAea object wrapper version of SubSpectrum class
      class SMskeleton : public SLHAskeleton<SMskeleton> 
      {
        
         public:
            // Constructors/destructors
            SMskeleton();
            SMskeleton(const SLHAea::Coll&);
            SMskeleton(const SMskeleton&);
            virtual ~SMskeleton() {};

            virtual double GetScale() const;
            
            /// Map filler
            /// Used to initialise maps of function pointers
            static GetterMaps fill_getter_maps();
 

      };

} // end Gambit namespace

#endif
