//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  A simple SubSpectrum wrapper for the scalar
///  singlet dark matter model. No RGEs included.
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

#ifndef __SingletDMContainer_hpp__
#define __SingletDMContainer_hpp__

#include "gambit/Elements/spec.hpp"

namespace Gambit
{     
   namespace SpecBit
   {

      /// Simple extension of the SMHiggsContainer "model object"
      /// to include scalar singlet DM parameters
      struct SingletDMModel
      {
         double HiggsPoleMass;
         double HiggsVEV;
         double SingletPoleMass;
         double SingletLambda;

         double get_HiggsPoleMass()   const { return HiggsPoleMass; } 
         double get_HiggsVEV()        const { return HiggsVEV;      } 
         double get_SingletPoleMass() const { return SingletPoleMass; } 
         double get_lambda_hS()       const { return SingletLambda; } 
      };

      // Needed for typename aliases in Spec and MapTypes classes
      struct SingletDMModelTraits
      {
         typedef SingletDMModel Model;
         typedef DummyInput     Input;
      };
     
      class SingletDMContainer : public Spec<SingletDMContainer,SingletDMModelTraits> 
      {

         private:
            typedef SingletDMContainer   This;
            typedef SingletDMModelTraits Traits;
            typedef MapTypes<Traits,MapTag::Get> MTget; 

            typename Traits::Model model;
            typename Traits::Input dummyinput;

         public:
            /// @{ Constructors/destructors
            SingletDMContainer(const typename Traits::Model& m)
             : model(m)
             , dummyinput()
            {}
            /// @}
 
            // Functions to interface Model and Input objects with the base 'Spec' class
            Traits::Model& get_Model() { return model; }
            Traits::Input& get_Input() { return dummyinput; /*unused here, but needs to be defined for the interface*/ }
            const Traits::Model& get_Model() const { return model; }
            const Traits::Input& get_Input() const { return dummyinput; /*unused here, but needs to be defined for the interface*/ }

            /// Map fillers
            static GetterMaps fill_getter_maps()
            {
               GetterMaps map_collection; 

               map_collection[Par::mass1].map0["vev"] = &Model::get_HiggsVEV;

               map_collection[Par::Pole_Mass].map0["h0"]   = &Model::get_HiggsPoleMass;
               map_collection[Par::Pole_Mass].map0["h0_1"] = &Model::get_HiggsPoleMass;
 
               map_collection[Par::Pole_Mass].map0["S"]       = &Model::get_SingletPoleMass; 
               map_collection[Par::Pole_Mass].map0["Singlet"] = &Model::get_SingletPoleMass; 
 
               map_collection[Par::mass1].map0["lambda_hS"] = &Model::get_lambda_hS;
  
               return map_collection;
            }

        }; 

   } // end SpecBit namespace
} // end Gambit namespace

#endif
