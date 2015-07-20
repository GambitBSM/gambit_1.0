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

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/SpecBit/SLHAskeleton.hpp"

namespace Gambit {
   namespace SpecBit {

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
           
           double get_md() const;
           double get_mu() const;
           double get_ms() const;
           /// @}
      };

      /// SM specialisation of SLHAea object wrapper version of SubSpectrum class
      class SMskeleton : public SLHAskeleton<SMskeleton,SLHAskeletonTraits<SMea> > 
      {
         friend class RunparDer<SMskeleton,SLHAskeletonTraits<SMea> >;
         friend class PhysDer  <SMskeleton,SLHAskeletonTraits<SMea> >;

         private:
            typedef MapTypes<SLHAskeletonTraits<SMea> > MT; 

         public:
            // Constructors/destructors
            SMskeleton();
            SMskeleton(const SLHAea::Coll&);
            SMskeleton(const SMskeleton&);
            virtual ~SMskeleton() {};

            virtual double GetScale() const;
            
         protected:
            /// Map fillers
            /// Used to initialise maps in the RunparDer and PhysDer classes
            
            /// RunparDer overrides (access via spectrum.runningpar)
            static typename MT::fmap fill_mass_map();

            /// PhysDer overrides (access via spectrum.phys)
            static typename MT::fmap fill_PoleMass_map();

      };
 

   } // end SpecBit namespace
} // end Gambit namespace

#endif
