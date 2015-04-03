//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  This class is used to wrap the QedQcd object used by SoftSUSY
///  and FlexibleSUSY in a Gambit Spectrum object. This is to enable
///  access to the parameters of the SM defined as a low-energy effective theory 
///  (as opposed to correspending information defined in a UV model). 
///  Parameters defined this way are often used as input to a physics calculator.
///
///  This is one of the simplest wrappers possible, so it is useful as a guide
///  for designing other Spectrum wrappers. To assist this, those class members
///  which are required by all wrappers are marked with the asterisks /***/.
///  Members which are optional (i.e. have defaults defined) are marked with
///  /*O*/
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

#include "lowe.h" ///TODO: wrap using BOSS at some point, i.e. get this from FlexibleSUSY or SoftSUSY
#include "gambit/Utils/SMInputs.hpp"
#include "gambit/Utils/Spectrum.hpp"

namespace Gambit {

   // Needed for typename aliases in Spec class
   struct QedQcdWrapperTraits
   {
      typedef softsusy::QedQcd Model;
      typedef SMInputs         Input;
   };
    
   class QedQcdWrapper : public Spec<QedQcdWrapper,QedQcdWrapperTraits> 
   {
         typedef MapTypes<QedQcdWrapperTraits> MT; 

      public:
         // Constructors/destructors
         QedQcdWrapper();
         QedQcdWrapper(const softsusy::QedQcd&, const SMInputs&);
         QedQcdWrapper(const QedQcdWrapper&);
         virtual ~QedQcdWrapper();        /***/
 
         virtual int get_index_offset() const;  /***/   
         virtual int get_numbers_stable_particles() const;  /***/

         /// RunningPars interface overrides
         virtual double GetScale() const;         /***/
         virtual void SetScale(double scale);     /***/
         virtual void RunToScaleOverride(double); /***/

         // Limits for running
         double softup;
         double hardup; // Be careful of order in constructor!

         // Limits for running
         virtual double hard_upper() const {return hardup;} /*O*/
         virtual double soft_upper() const {return softup;} /*O*/
         virtual double soft_lower() const {return 0.;}     /*O*/
         virtual double hard_lower() const {return 0.;}     /*O*/

      private:
         // Keep copies of Model and Input objects internally
         typename QedQcdWrapperTraits::Model qedqcd;
         typename QedQcdWrapperTraits::Input sminputs;

         // These members are inherited from Spec<T> class! Make sure to
         // initialise them from qedqcd and sminputs via Spec<T> constructor,
         // so that they can be passed on through to the map functions.
         // Model* model;          
         // Input* input; 

         // Note; make sure input (sminputs) matches the one used to set up qedqcd!

         /// Map fillers
         /// Used to initialise maps in the RunparDer and PhysDer classes
         /// (specialisations created and stored automatically by Spec<QedQcdWrapper>)
         
         /// RunparDer overrides (access via spectrum.runningpar)
         typename MT::fmap_extra fill_mass_map_extra();   /*O*/
         typename MT::fmap_extra fill_mass0_map_extra();  /*O*/

         /// PhysDer overrides (access via spectrum.phys)
         typename MT::fmap        fill_PoleMass_map();        /*O*/
         typename MT::fmap_extraI fill_PoleMass_map_extraI(); /*O*/
 
   };
 


} // end Gambit namespace

#endif
