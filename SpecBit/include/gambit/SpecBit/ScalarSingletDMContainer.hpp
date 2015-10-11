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

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/SpecBit/SMHiggsContainer.hpp"

namespace Gambit
{     
   namespace SpecBit
   {

      /// Simple extension for the SMHiggs container "model object"
      /// to include scalar singlet DM parameters
      struct SingletDMModel : public SMHiggsModel
      {
         double SingletPoleMass;
         double SingletLambda;
         double get_SingletPoleMass() const { return SingletPoleMass; } 
         double get_lambda_hS() const { return SingletLambda; } 
      };

      // Needed for typename aliases in Spec and MapTypes classes
      struct SingletDMModelTraits
      {
         typedef SingletDMModel Model;
         typedef DummyInput     Input;
      };
     
      class SingletDMContainer : public BaseHiggsContainer<SingletDMContainer,SingletDMModelTraits> 
      {
        friend class BaseHiggsContainer<SingletDMContainer,SingletDMModelTraits>;

        private:
            typedef SingletDMContainer   This;
            typedef SingletDMModelTraits Traits;
            typedef MapTypes<Traits,MapTag::Get> MTget; 

         public:
            /// @{ Constructors/destructors
            SingletDMContainer() 
              : BaseHiggsContainer<This,Traits>()  
            {}

            SingletDMContainer(const typename Traits::Model& model)
              : BaseHiggsContainer<This,Traits>(model)
            {}

            SingletDMContainer(const This& other)
              : BaseHiggsContainer<This,Traits>(other)
            {} 

            virtual ~SingletDMContainer() {};
            /// @}
 
            /// (Derived class) Map fillers
            /// These are not the normal map fillers called by the Spec class
            /// They are called from the base class BaseHiggsContainer and used
            /// to add the extra values into the maps stored there.
            typedef std::map<Par::Phys,MapCollection<MTget>> PhysGetterMaps; 
            typedef std::map<Par::Running,MapCollection<MTget>> RunningGetterMaps; 
 
            /// Definitions of map fillers
            static void derived_phys_fill_getter_maps(PhysGetterMaps& in)
            {
               in[Par::Pole_Mass].map0["S"]       = &Model::get_SingletPoleMass; 
               in[Par::Pole_Mass].map0["Singlet"] = &Model::get_SingletPoleMass; 
            }

            static void derived_runningpars_fill_getter_maps(RunningGetterMaps& in)
            {
               in[Par::mass1].map0["lambda_hS"] = &Model::get_lambda_hS;
            }

        }; 

   } // end SpecBit namespace
} // end Gambit namespace

#endif
