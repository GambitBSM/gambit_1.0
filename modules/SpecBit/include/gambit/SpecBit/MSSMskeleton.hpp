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

#ifndef __MSSMskeleton_hpp__
#define __MSSMskeleton_hpp__

#include "gambit/Elements/SubSpectrum.hpp"
#include "gambit/SpecBit/SLHAskeleton.hpp"

namespace Gambit {
   namespace SpecBit {

      /// Skeleton "model" class which interacts with an SLHAea object
      /// Some common functions defined in base class
      class MSSMea: public SLHAeaModel
      {
         public:
           /// @{ Constructors
           MSSMea();
           MSSMea(const SLHAea::Coll& input);
           /// @}

           /// @{ Getters for MSSM information 
           double get_MZ_pole() const; 

           /// @}
      };

      /// MSSM specialisation of SLHAea object wrapper version of SubSpectrum class
      class MSSMskeleton : public SLHAskeleton<MSSMskeleton,SLHAskeletonTraits<MSSMea>> 
      {
         friend class RunparDer<MSSMskeleton,SLHAskeletonTraits<MSSMea>>;
         friend class PhysDer  <MSSMskeleton,SLHAskeletonTraits<MSSMea>>;

         private:
            typedef MapTypes<SLHAskeletonTraits<MSSMea>> MT; 

         public:
            // Constructors/destructors
            MSSMskeleton();
            MSSMskeleton(const SLHAea::Coll&);
            MSSMskeleton(const MSSMskeleton&);
            virtual ~MSSMskeleton() {};
 
         protected:
            /// Map fillers
            /// Used to initialise maps in the RunparDer and PhysDer classes
            /// (specialisations created and stored automatically by Spec<MSSMskeleton>)
            
            /// RunparDer overrides (access via spectrum.runningpar)
            // static typename MT::fmap_extraM fill_mass_map_extraM();   /*O*/
            // static typename MT::fmap_extraM fill_mass0_map_extraM();  /*O*/

            /// PhysDer overrides (access via spectrum.phys)
            static typename MT::fmap        fill_PoleMass_map();        /*O*/
            // static typename MT::fmap_extraI fill_PoleMass_map_extraI(); /*O*/
 
      };
 

   } // end SpecBit namespace
} // end Gambit namespace

#endif
