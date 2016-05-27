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

#ifndef __ScalarSingletDMSimpleSpec_hpp__
#define __ScalarSingletDMSimpleSpec_hpp__

#include "gambit/Elements/spec.hpp"
#include "gambit/Models/SpectrumContents/RegisteredSpectra.hpp"

namespace Gambit
{     
   namespace Models
   {
      /// Simple extension of the SMHiggsSimpleSpec "model object"
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

         void set_HiggsPoleMass(double in)   { HiggsPoleMass=in; } 
         void set_HiggsVEV(double in)        { HiggsVEV=in;      } 
         void set_SingletPoleMass(double in) { SingletPoleMass=in; } 
         void set_lambda_hS(double in)       { SingletLambda=in; } 
      };
  
      /// Forward declare the wrapper class so that we can use it
      /// as the template parameter for the SpecTraits specialisation. 
      class ScalarSingletDMSimpleSpec;  
   }

   /// Specialisation of traits class needed to inform base spectrum class of the Model and Input types
   template <>
   struct SpecTraits<Models::ScalarSingletDMSimpleSpec> 
   {
      static std::string name() { return "ScalarSingletDMSimpleSpec"; }
      typedef SpectrumContents::ScalarSingletDM Contents;
      typedef Models::SingletDMModel Model;
      typedef DummyInput              Input; // DummyInput is just an empty struct
   };

   namespace Models
   { 
      class ScalarSingletDMSimpleSpec : public Spec<ScalarSingletDMSimpleSpec> 
      {
         private:
            Model model;
            Input dummyinput;

         public:
            /// @{ Constructors/destructors
            ScalarSingletDMSimpleSpec(const Model& m)
             : model(m)
             , dummyinput()
            {}
            /// @}
 
            // Functions to interface Model and Input objects with the base 'Spec' class
            Model& get_Model() { return model; }
            Input& get_Input() { return dummyinput; /*unused here, but needs to be defined for the interface*/ }
            const Model& get_Model() const { return model; }
            const Input& get_Input() const { return dummyinput; /*unused here, but needs to be defined for the interface*/ }

            /// Test wrapper-side helper function (that does nothing important but replaces the model-side function)
            double get_converted_lambda()
            {
              return 1. * model.get_lambda_hS;
            }

            /// @{ Map fillers
            static GetterMaps fill_getter_maps()
            {
               GetterMaps map_collection; 

               map_collection[Par::mass1].map0["vev"]       = &Model::get_HiggsVEV;
               //map_collection[Par::dimensionless].map0["lambda_hS"] = &Model::get_lambda_hS;
               map_collection[Par::dimensionless].map0W["lambda_hS"] = &get_converted_lambda;

               map_collection[Par::Pole_Mass].map0["h0"]    = &Model::get_HiggsPoleMass;
               map_collection[Par::Pole_Mass].map0["h0_1"]  = &Model::get_HiggsPoleMass;
 
               map_collection[Par::Pole_Mass].map0["S"]       = &Model::get_SingletPoleMass; 
               map_collection[Par::Pole_Mass].map0["Singlet"] = &Model::get_SingletPoleMass; 
   
               return map_collection;
            }

            static SetterMaps fill_setter_maps()
            {
               SetterMaps map_collection; 

               map_collection[Par::mass1].map0["vev"]       = &Model::set_HiggsVEV;
               map_collection[Par::dimensionless].map0["lambda_hS"] = &Model::set_lambda_hS;

               map_collection[Par::Pole_Mass].map0["h0"]    = &Model::set_HiggsPoleMass;
               map_collection[Par::Pole_Mass].map0["h0_1"]  = &Model::set_HiggsPoleMass;
 
               map_collection[Par::Pole_Mass].map0["S"]       = &Model::set_SingletPoleMass; 
               map_collection[Par::Pole_Mass].map0["Singlet"] = &Model::set_SingletPoleMass; 
   
               return map_collection;
            }
            /// @}

        }; 

   } // end Models namespace
} // end Gambit namespace

#endif
