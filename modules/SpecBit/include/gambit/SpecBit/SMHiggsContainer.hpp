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

#include "gambit/Elements/SubSpectrum.hpp"

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
     
      // The templating here is just so that we can inherit from
      // this class, and still pass the derived SubSpectrum and
      // Traits classes down through to the base SubSpectrum class,
      // to fulfill the CRTP.
      template<class Derived, class DerivedTraits> 
      class BaseHiggsContainer : public Spec<Derived,DerivedTraits> 
      {
        friend class RunparDer<Derived,DerivedTraits>;
        friend class PhysDer  <Derived,DerivedTraits>;
 
        protected:
            typedef MapTypes<DerivedTraits> MT; 
            typedef typename DerivedTraits::Model Model;
 
            /// Actual model object stored here
            /// In classes derived from this one, pass the derived model object
            /// into the constructor for this object, don't store it in the
            /// derived class, or else we will have two copies of it.
            typename DerivedTraits::Model model; 

         public:
            /// @{ Constructors/destructors
            BaseHiggsContainer() 
              : Spec<Derived,DerivedTraits>(model)  
            {}

            BaseHiggsContainer(const Model& m)
              : Spec<Derived,DerivedTraits>(model)
              , model(m)
            {}

            BaseHiggsContainer(const BaseHiggsContainer& other)
              : Spec<Derived,DerivedTraits>(model)
              , model(other.model)
            {} 

            virtual ~BaseHiggsContainer() {};
            /// @}
 
            // virtual int get_numbers_stable_particles() const;

            /// Offset from user-input indices (user assumes 1,2,3 indexed, e.g. use offset=-1 for zero-indexing)
            virtual int get_index_offset() const {return 0.;} // Actually there are no indexed getters so far.
 
            /// RunningPars interface overrides. All disabled.
            virtual double GetScale() const { 
               utils_error().raise(LOCAL_INFO,"Cannot call GetScale for BaseHiggsContainer SubSpectrum!");    
               return -1;
            }

            virtual void SetScale(double scale) {
               utils_error().raise(LOCAL_INFO,"Cannot call SetScale for BaseHiggsContainer SubSpectrum!");    
            }

            virtual void RunToScale(double) {
               utils_error().raise(LOCAL_INFO,"Cannot call RunToScale for BaseHiggsContainer SubSpectrum! This object is not connected to any RGEs.");    
            }


         protected:
            /// Map fillers
            // (just listed here to help bookkeeping)
            //static typename MT::fmap  fill_mass_map(); 
            //static typename MT::fmap  fill_PoleMass_map();

            /// Map fillers for derived classes to statically overload
            /// (so that the "real" map fillers here can add their
            /// extra information into the final wrapper)
            static void derived_fill_mass_map    (typename MT::fmap& in) {}
            static void derived_fill_PoleMass_map(typename MT::fmap& in) {}             
 
            /// Definitions of map fillers
            static typename MT::fmap fill_mass_map() 
            {
               typename MT::fmap tmp_map;
               Derived::derived_fill_mass_map(tmp_map);
    
               tmp_map["vev"]      = &Model::get_HiggsVEV;
               return tmp_map;
            }

            static typename MT::fmap fill_PoleMass_map()
            {
               typename MT::fmap tmp_map;
               Derived::derived_fill_PoleMass_map(tmp_map);
 
               tmp_map["h0"]   = &Model::get_HiggsPoleMass; 
               tmp_map["h0_1"] = &Model::get_HiggsPoleMass;   
               return tmp_map;
            }

     }; 
   
     /// Now the actual SMHiggsContainer class.
     class SMHiggsContainer : public BaseHiggsContainer<SMHiggsContainer,SMHiggsModelTraits>
     {
         protected:
            typedef SMHiggsContainer   This;
            typedef SMHiggsModelTraits Traits;
            typedef MapTypes<Traits> MT; 

         public:
            /// @{ Constructors/destructors
            SMHiggsContainer() 
              : BaseHiggsContainer<This,Traits>()  
            {}

            SMHiggsContainer(const typename Traits::Model& model)
              : BaseHiggsContainer<This,Traits>(model)
            {}

            SMHiggsContainer(const This& other)
              : BaseHiggsContainer<This,Traits>(other)
            {} 

            virtual ~SMHiggsContainer() {};
            /// @}
 
            /// Doesn't add any information onto BaseHiggsContainer, so nothing else needed.
     }; 


   } // end SpecBit namespace
} // end Gambit namespace

#endif
