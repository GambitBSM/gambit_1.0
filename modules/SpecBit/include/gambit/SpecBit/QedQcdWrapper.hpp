//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  This class is used to wrap the QedQcd object used by SoftSUSY
///  and FlexibleSUSY in a Gambit SubSpectrum object. This is to enable
///  access to the parameters of the SM defined as a low-energy effective theory 
///  (as opposed to correspending information defined in a UV model). 
///  Parameters defined this way are often used as input to a physics calculator.
///
///  This is one of the simplest wrappers possible, so it is useful as a guide
///  for designing other SubSpectrum wrappers. To assist this, code is documented
///  with the following markings to distinguish pieces that are essential for
///  all wrappers from those which are specific to this wrapper:
///  /***/ - Required by all wrappers.
///  /*O*/ - Optional (e.g. unused maps fillers can be left undeclared)
///  /*P*/ - Required if map fillers are protected, which is sensible.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Mar 
///
///  *********************************************

#ifndef __QedQcdWrapper_hpp__
#define __QedQcdWrapper_hpp__

#include "gambit/Elements/SMInputs.hpp"
#include "gambit/Elements/SubSpectrum.hpp"

#include "lowe.h" ///TODO: wrap using BOSS at some point, i.e. get this from FlexibleSUSY or SoftSUSY

namespace Gambit {
   namespace SpecBit {

      // Needed for typename aliases in Spec and MapTypes classes
      struct QedQcdWrapperTraits
      {
         typedef softsusy::QedQcd Model;
         typedef SMInputs         Input;
      };
       
      class QedQcdWrapper : public Spec<QedQcdWrapper,QedQcdWrapperTraits> 
      {
         friend class RunparDer<QedQcdWrapper,QedQcdWrapperTraits>; /*P*/
         friend class PhysDer  <QedQcdWrapper,QedQcdWrapperTraits>; /*P*/
   
         private:
            typedef MapTypes<QedQcdWrapperTraits,MapTag::Get> MTget; 
            typedef MapTypes<QedQcdWrapperTraits,MapTag::Set> MTset; 
   
            // Keep copies of Model and Input objects internally
            typename QedQcdWrapperTraits::Model qedqcd;
            typename QedQcdWrapperTraits::Input sminputs;
   
         public:
            // Constructors/destructors
            QedQcdWrapper();
            QedQcdWrapper(const softsusy::QedQcd&, const SMInputs&);
            QedQcdWrapper(const QedQcdWrapper&);
            virtual ~QedQcdWrapper();        /***/
    
            virtual int get_index_offset() const;  /***/   
            virtual int get_numbers_stable_particles() const;  /***/
   
            /// RunningPars interface overrides
            virtual double GetScale() const;      /***/
            virtual void SetScale(double scale);  /***/
            virtual void RunToScale(double);      /***/
   
            // Limits for running
            double softup;
            double hardup; // Be careful of order in constructor!
   
            // Limits for running
            virtual double hard_upper() const {return hardup;} /*O*/
            virtual double soft_upper() const {return softup;} /*O*/
            virtual double soft_lower() const {return 0.;}     /*O*/
            virtual double hard_lower() const {return 0.;}     /*O*/
   
         protected:
            /// Map fillers
            /// Used to initialise maps in the RunparDer and PhysDer classes
            /// (specialisations created and stored automatically by Spec<QedQcdWrapper>)
            
            /// RunparDer overrides (access via spectrum.runningpar)
            static typename MTget::fmap_extraM fill_mass_map_extraM_Get();   /*O*/
            static typename MTget::fmap_extraM fill_mass0_map_extraM_Get();  /*O*/
   
            /// PhysDer overrides (access via spectrum.phys)
            static typename MTget::fmap        fill_PoleMass_map_Get();        /*O*/
            static typename MTget::fmap_extraI fill_PoleMass_map_extraI_Get(); /*O*/

            /// PhysDer setters
            static typename MTset::fmap        fill_PoleMass_map_Set();        /*O*/
            static typename MTset::fmap_extraI fill_PoleMass_map_extraI_Set(); /*O*/
    
      };
 
   } // end SpecBit namespace
} // end Gambit namespace

#endif
