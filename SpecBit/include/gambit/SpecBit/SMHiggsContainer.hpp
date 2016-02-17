//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  A simple SubSpectrum wrapper for Standard
///  Model Higgs information. No RGEs included.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 May 
///
///  *********************************************

#ifndef __SMHiggsContainer_hpp__
#define __SMHiggsContainer_hpp__

#include "gambit/Elements/spec.hpp"

namespace Gambit {
   namespace SpecBit {

      /// Simple container "model object" for the SM Higgs sector variables.
      /// We will derived from this for simple extensions, like for scalar singlet DM 
      struct SMHiggsModel
      {
         double HiggsPoleMass;
         double HiggsVEV;

         double get_HiggsPoleMass()  const { return HiggsPoleMass; } 
         double get_HiggsVEV()       const { return HiggsVEV;      } 
      };

      // Needed for typename aliases in Spec and MapTypes classes
      struct SMHiggsModelTraits
      {
         typedef SMHiggsModel Model;
         typedef DummyInput   Input;
      };
     

      /// SubSpectrum wrapper class for the SM Higgs sector
      class SMHiggsContainer : public Spec<SMHiggsContainer,SMHiggsModelTraits> 
      {
    
            typedef SMHiggsContainer   This;
            typedef SMHiggsModelTraits Traits;
            typedef MapTypes<Traits,MapTag::Get> MTget; 
            typedef typename Traits::Model Model;
            typedef typename Traits::Input Input;

            /// Store the struct containing the parameters plus get/set functions
            Model model; 

            /// Just a placeholder required by the base class; this wrapper doesn't use it
            Input input;             

         public:
            /// Constructor
            SMHiggsContainer(const Model& m)
              : model(m)
              , input()
            {}
 
            // Functions to interface Model and Input objects with the base 'Spec' class
            Model& get_Model() { return model; }
            Input& get_Input() { return input; }
            const Model& get_Model() const { return model; }
            const Input& get_Input() const { return input; }

            // virtual int get_numbers_stable_particles() const;

            /// Offset from user-input indices (user assumes 1,2,3 indexed, e.g. use offset=-1 for zero-indexing)
            virtual int get_index_offset() const {return 0.;} // Actually there are no indexed getters so far.
 
            /// Map fillers
            /// Used to initialise maps in the RunparDer and PhysDer classes
            /// (specialisations created and stored automatically by Spec<QedQcdWrapper>)

            /// Definitions of map fillers
            static GetterMaps fill_getter_maps()
            {
               GetterMaps map_collection;

               map_collection[Par::mass1].map0["vev"] = &Model::get_HiggsVEV;

               map_collection[Par::Pole_Mass].map0["h0"]   = &Model::get_HiggsPoleMass;
               map_collection[Par::Pole_Mass].map0["h0_1"] = &Model::get_HiggsPoleMass;

               return map_collection;
            }

     }; 
   

   } // end SpecBit namespace
} // end Gambit namespace

#endif
