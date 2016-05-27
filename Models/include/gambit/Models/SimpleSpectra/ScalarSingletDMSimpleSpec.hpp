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
      };
  
      /// Forward declare the wrapper class so that we can use it
      /// as the template parameter for the SpecTraits specialisation. 
      class ScalarSingletDMSimpleSpec;  
   }

   /// Specialisation of traits class needed to inform base spectrum class of the Model and Input types
   template <>
   struct SpecTraits<Models::ScalarSingletDMSimpleSpec> : DefaultTraits
   {
      static std::string name() { return "ScalarSingletDMSimpleSpec"; }
      typedef SpectrumContents::ScalarSingletDM Contents;
   };

   namespace Models
   { 
      class ScalarSingletDMSimpleSpec : public Spec<ScalarSingletDMSimpleSpec> 
      {
         private:
            Model model;

            typedef ScalarSingletDMSimpleSpec Self;

         public:
            /// @{ Constructors/destructors
            ScalarSingletDMSimpleSpec(const Model& m)
             : model(m)
            {}
            /// @}
 
            /// Wrapper-side interface functions to Model
            double get_HiggsPoleMass()   const { return model.HiggsPoleMass; } 
            double get_HiggsVEV()        const { return model.HiggsVEV;      } 
            double get_SingletPoleMass() const { return model.SingletPoleMass; } 
            double get_lambda_hS()       const { return model.SingletLambda; } 

            void set_HiggsPoleMass(double in)   { model.HiggsPoleMass=in; } 
            void set_HiggsVEV(double in)        { model.HiggsVEV=in;      } 
            void set_SingletPoleMass(double in) { model.SingletPoleMass=in; } 
            void set_lambda_hS(double in)       { model.SingletLambda=in; }  

            /// @{ Map fillers
            static GetterMaps fill_getter_maps()
            {
               GetterMaps map_collection; 

               map_collection[Par::mass1].map0["vev"]       = &Self::get_HiggsVEV;
               map_collection[Par::dimensionless].map0["lambda_hS"] = &Self::get_lambda_hS;

               map_collection[Par::Pole_Mass].map0["h0"]    = &Self::get_HiggsPoleMass;
               map_collection[Par::Pole_Mass].map0["h0_1"]  = &Self::get_HiggsPoleMass;
 
               map_collection[Par::Pole_Mass].map0["S"]       = &Self::get_SingletPoleMass; 
               map_collection[Par::Pole_Mass].map0["Singlet"] = &Self::get_SingletPoleMass; 
   
               return map_collection;
            }

            static SetterMaps fill_setter_maps()
            {
               SetterMaps map_collection; 

               map_collection[Par::mass1].map0["vev"]       = &Self::set_HiggsVEV;
               map_collection[Par::dimensionless].map0["lambda_hS"] = &Self::set_lambda_hS;

               map_collection[Par::Pole_Mass].map0["h0"]    = &Self::set_HiggsPoleMass;
               map_collection[Par::Pole_Mass].map0["h0_1"]  = &Self::set_HiggsPoleMass;
 
               map_collection[Par::Pole_Mass].map0["S"]       = &Self::set_SingletPoleMass; 
               map_collection[Par::Pole_Mass].map0["Singlet"] = &Self::set_SingletPoleMass; 
   
               return map_collection;
            }
            /// @}

        }; 

   } // end Models namespace
} // end Gambit namespace

#endif
