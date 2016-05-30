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
         double LambdaH;
         double SingletLambdaS;
         double g1, g2, g3, sinW2;
         double Yd[3], Ye[3], Yu[3];
        
        

         double get_HiggsPoleMass()   const { return HiggsPoleMass; } 
         double get_HiggsVEV()        const { return HiggsVEV;      } 
         double get_SingletPoleMass() const { return SingletPoleMass; } 
         double get_lambda_hS()       const { return SingletLambda; }
         double get_lambda_S()       const { return SingletLambdaS; }
         double get_lambda_h()       const { return LambdaH; }
         double get_g1()       const { return g1; }
         double get_g2()       const { return g2; }
         double get_g3()       const { return g3; }
         double get_sinW2()       const { return sinW2; }
        
         double get_Yd(int i, int j)       const { if (i==j){return Yd[i];}else{return 0;} }
         double get_Yu(int i, int j)       const { if (i==j){return Yu[i];}else{return 0;} }
         double get_Ye(int i, int j)       const { if (i==j){return Ye[i];}else{return 0;} }
        

         void set_HiggsPoleMass(double in)   { HiggsPoleMass=in; } 
         void set_HiggsVEV(double in)        { HiggsVEV=in;      } 
         void set_SingletPoleMass(double in) { SingletPoleMass=in; } 
         void set_lambda_hS(double in)       { SingletLambda=in; }
         void set_lambda_S(double in)       { SingletLambdaS=in; }
         void set_lambda_h(double in)       { LambdaH=in; }
         void set_g1(double in)        { g1=in; }
         void set_g2(double in)        { g2=in; }
         void set_g3(double in)       { g3=in; }
         void set_sinW2(double in)       { sinW2=in; }
        
         void set_Yd(int i, int j,double in)       { if (i==j){Yd[i]=in;}}
         void set_Yu(int i, int j,double in)       { if (i==j){Yu[i]=in;}}
         void set_Ye(int i, int j,double in)       { if (i==j){Ye[i]=in;}}
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
     // typedef SpectrumContents::ScalarSingletDM Contents;
      typedef SpectrumContents::SingletDM Contents;
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

            /// @{ Map fillers
            static GetterMaps fill_getter_maps()
            {
               GetterMaps map_collection;
               typedef typename MTget::FInfo2 FInfo2;
               static const int i012v[] = {0,1,2};
               static const std::set<int> i012(i012v, Utils::endA(i012v));

               map_collection[Par::mass1].map0["vev"]       = &Model::get_HiggsVEV;
               map_collection[Par::dimensionless].map0["lambda_hS"] = &Model::get_lambda_hS;
               map_collection[Par::dimensionless].map0["lambda_S"] = &Model::get_lambda_S;
               map_collection[Par::dimensionless].map0["lambda_h"] = &Model::get_lambda_h;
              
              
               map_collection[Par::dimensionless].map0["g1"] = &Model::get_g1;
               map_collection[Par::dimensionless].map0["g2"] = &Model::get_g2;
               map_collection[Par::dimensionless].map0["g3"] = &Model::get_g3;
               map_collection[Par::dimensionless].map0["sinW2"] = &Model::get_sinW2;

               map_collection[Par::Pole_Mass].map0["h0"]    = &Model::get_HiggsPoleMass;
               map_collection[Par::Pole_Mass].map0["h0_1"]  = &Model::get_HiggsPoleMass;
 
               map_collection[Par::Pole_Mass].map0["S"]       = &Model::get_SingletPoleMass; 
               map_collection[Par::Pole_Mass].map0["Singlet"] = &Model::get_SingletPoleMass;
              
              
              {
              typename MTget::fmap2 tmp_map;

              tmp_map["Yd"]= FInfo2( &Model::get_Yd, i012, i012);
              tmp_map["Yu"]= FInfo2( &Model::get_Yu, i012, i012);
              tmp_map["Ye"]= FInfo2( &Model::get_Ye, i012, i012);

              map_collection[Par::dimensionless].map2 = tmp_map;
              }
              
              
              
   
               return map_collection;
            }

            static SetterMaps fill_setter_maps()
            {
               SetterMaps map_collection;
               typedef typename MTset::FInfo2 FInfo2;
               static const int i012v[] = {0,1,2};
               static const std::set<int> i012(i012v, Utils::endA(i012v));


               map_collection[Par::mass1].map0["vev"]       = &Model::set_HiggsVEV;
               map_collection[Par::dimensionless].map0["lambda_hS"] = &Model::set_lambda_hS;
               map_collection[Par::dimensionless].map0["lambda_S"] = &Model::set_lambda_S;
               map_collection[Par::dimensionless].map0["lambda_h"] = &Model::set_lambda_h;

               map_collection[Par::dimensionless].map0["g1"] = &Model::set_g1;
               map_collection[Par::dimensionless].map0["g2"] = &Model::set_g2;
               map_collection[Par::dimensionless].map0["g3"] = &Model::set_g3;
               map_collection[Par::dimensionless].map0["sinW2"] = &Model::set_sinW2;

               map_collection[Par::Pole_Mass].map0["h0"]    = &Model::set_HiggsPoleMass;
               map_collection[Par::Pole_Mass].map0["h0_1"]  = &Model::set_HiggsPoleMass;
 
               map_collection[Par::Pole_Mass].map0["S"]       = &Model::set_SingletPoleMass; 
               map_collection[Par::Pole_Mass].map0["Singlet"] = &Model::set_SingletPoleMass; 
              
              // create setters for Yukawas with 2 indices
              
              {
              typename MTset::fmap2 tmp_map;

              tmp_map["Yd"]= FInfo2( &Model::set_Yd, i012, i012);
              tmp_map["Yu"]= FInfo2( &Model::set_Yu, i012, i012);
              tmp_map["Ye"]= FInfo2( &Model::set_Ye, i012, i012);

              map_collection[Par::dimensionless].map2 = tmp_map;
              }
              
              
               return map_collection;
            }
            /// @}

        }; 

   } // end Models namespace
} // end Gambit namespace

#endif
