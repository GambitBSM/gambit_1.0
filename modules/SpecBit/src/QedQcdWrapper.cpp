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

#include <boost/preprocessor/tuple/to_seq.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/seq/for_each_product.hpp>

#include "lowe.h" ///TODO: wrap using BOSS at some point, i.e. get this from FlexibleSUSY or SoftSUSY
#include "gambit/Utils/SMInputs.hpp"
#include "gambit/Utils/Spectrum.hpp"
#include "gambit/SpecBit/QedQcdWrapper.hpp"

/// Macro to help assign the same function pointers to multiple string keys
// Relies on "tmp_map" being used as the variable name for the temporary maps
// inside the fill_map functions.
#define addtomap_EL(r, PRODUCT)                                         \
{                                                                       \
   str key      = BOOST_PP_SEQ_ELEM(0,PRODUCT); /* string map key */    \
   tmp_map[key] = BOOST_PP_SEQ_ELEM(1,PRODUCT); /* function pointer */  \
}

#define addtomap(__KEYS,FPTR) BOOST_PP_SEQ_FOR_EACH_PRODUCT(addtomap_EL, (BOOST_PP_TUPLE_TO_SEQ(__KEYS))((FPTR)) )


namespace Gambit {

   /// Simplify access to map types in this file
   typedef MapTypes<QedQcdWrapperTraits> MT; 

   /// @{ QedQcdWrapper member functions
   
   ///   @{ Constructors
   QedQcdWrapper::QedQcdWrapper() 
      : qedqcd()
      , sminputs()
   {}

   QedQcdWrapper::QedQcdWrapper(const softsusy::QedQcd& model, const SMInputs& input)
      : Spec(qedqcd, sminputs) /***/
      , softup(phys.get_Pole_Mass("t")) // Set top quark pole mass as soft upper limit of running. /***/
      , hardup(phys.get_Pole_Mass("t")) // QedQcd object will throw its own error if we try to run above this, so set this as the      , qedqcd(model) /***/
      , qedqcd(model)
      , sminputs(input)        /***/
   {}

   /// Copy constructor
   /// Needed so that the clone() function will do a deep copy properly. Cannot
   /// just call Spec<T> copy constructor, because we need to change the base
   /// class references to the "connected" qedqcd_msbar_pars and qedqcd_ph objects.
   QedQcdWrapper::QedQcdWrapper(const QedQcdWrapper& other)
      : Spec(qedqcd, sminputs)   /***/
      , softup(other.softup)
      , hardup(other.hardup)
      , qedqcd(other.qedqcd)
      , sminputs(other.sminputs)
   {}

   ///   @}

   /// Destructor
   QedQcdWrapper::~QedQcdWrapper() {}

   /// Currently unused virtual functions
   int QedQcdWrapper::get_index_offset() const {return 0;}   
   int QedQcdWrapper::get_numbers_stable_particles() const {return -1;} 

   /// @}


   /// Run masses and couplings to end_scale
   void QedQcdWrapper::RunToScale(double end_scale) 
   {
     const double tol = 1.0e-5; // Value used internally in QedQcd methods
     double begin_scale = GetScale();
     qedqcd.run(begin_scale, end_scale, tol);  // Run masses and couplings
   }

   /// Retrieve the current renormalisation scale at which running parameters are defined
   double QedQcdWrapper::GetScale() const { return qedqcd.displayMu(); }

   /// Manually define the current renormalisation scale
   void QedQcdWrapper::SetScale(double scale) { qedqcd.setMu(scale); }

   /// Plain C-function wrappers for QedQcd running mass getters
   double get_mUp      (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mUp); }
   double get_mCharm   (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mCharm); }
   double get_mTop     (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mTop); }
   double get_mDown    (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mDown); }
   double get_mStrange (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mStrange); }
   double get_mBottom  (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mBottom); }
   double get_mElectron(const softsusy::QedQcd& model) { return model.displayMass(softsusy::mElectron); }
   double get_mMuon    (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mMuon); }
   double get_mTau     (const softsusy::QedQcd& model) { return model.displayMass(softsusy::mTau); }

   /// Filler for mass_map
   MT::fmap_extra QedQcdWrapper::fill_mass_map_extra()
   {
      MT::fmap_extra tmp_map;

      addtomap(("u", "ubar", "u_1", "ubar_1"), &get_mUp);
      addtomap(("c", "cbar", "u_2", "ubar_2"), &get_mCharm);
      addtomap(("t", "tbar", "u_3", "ubar_3"), &get_mTop);
      addtomap(("d", "dbar", "d_1", "dbar_1"), &get_mDown);
      addtomap(("s", "sbar", "d_2", "dbar_2"), &get_mStrange);
      addtomap(("b", "bbar", "d_3", "dbar_3"), &get_mBottom);
      addtomap(("e-",   "e+",   "e",   "e-_1", "e+_1", "e_1"), &get_mElectron);
      addtomap(("mu-",  "mu+",  "mu",  "e-_2", "e+_2", "e_2"), &get_mMuon);
      addtomap(("tau-", "tau+", "tau", "e-_3", "e+_3", "e_3"), &get_mTau);

      return tmp_map;
   }

   /// Plain C-function wrappers for QedQcd running coupling getters
   // Note: often people want 1/alpha, but here we return alpha itself
   // Might want to change these to g1,g3, to be consistent with MSSMSpec
   double get_alpha  (const softsusy::QedQcd& model) { return model.displayAlpha(softsusy::ALPHA); }
   double get_alphaS (const softsusy::QedQcd& model) { return model.displayAlpha(softsusy::ALPHAS); }

   /// All 3 SM gauge couplings. 
   /// The QedQcd documenation has the following to say about this calculations:
   /// {
   /// This will calculate the three gauge couplings of the Standard Model at
   /// the scale m2.
   /// It's a simple one-loop calculation only and no
   /// thresholds are assumed. Range of validity is electroweak to top scale.
   // alpha1 is in the GUT normalisation. sinth = sin^2 thetaW(Q) in MSbar
   // scheme
   //  }
   // Note that it computes that couplings at scale "m2". I think other quantities
   // are taken as calculated more accurately at some initial scale, and then this
   // simple 1-loop computation is used just to get these couplings at a nearby
   // scale m2.

   double get_a1 (const softsusy::QedQcd& model)
   {
      // We need sin^2 thetaW(Q) for this; i.e. I think it is supposed to be
      // supplied at whatever scale the rest of the parameters are currently
      // defined at. Not sure how to handle this.
      //QedQcd::getGaugeMu(const double m2, const double sinth)
   }

   /// Filler for mass_map
   MT::fmap_extra QedQcdWrapper::fill_mass0_map_extra()
   {
      MT::fmap_extra tmp_map;

      tmp_map["alpha"]  = &get_alpha;
      tmp_map["alphaS"] = &get_alphaS;

      return tmp_map;
   }

  // String names correspond to those defined in particle_database.cpp. If
   // there is a mismatch, please change the ones here!

   /// Filler for PoleMass_map
   MT::fmap QedQcdWrapper::fill_PoleMass_map()
   {
      MT::fmap tmp_map;
   
      addtomap(("Z0", "Z"),       &softsusy::QedQcd::displayPoleMZ);
      addtomap(("W+", "W-", "W"), &softsusy::QedQcd::displayPoleMW);
      addtomap(("t", "tbar", "u_3", "ubar_3"), &softsusy::QedQcd::displayPoleMt);
      // "Pole" for b quark is quoted in SoftSUSY (lowe.h) documentation, so I guess this is an approximation; need to check details.
      addtomap(("b", "bbar", "d_3", "dbar_3"), &softsusy::QedQcd::displayPoleMb);
      addtomap(("tau+","tau-","tau","e+_3","e-_3"), &softsusy::QedQcd::displayPoleMtau);
   
      return tmp_map;
   }

   /// Plain C-function wrappers for extra pole mass getters (manually specified masses)
   //  Note: model object not needed for these, but required by function signature
   double get_Pole_mElectron(const SMInputs& inputs) { return inputs.mE; }
   double get_Pole_mMuon    (const SMInputs& inputs) { return inputs.mMu; }

   /// Filler for Pole_mass_map 
   /// Note the I for "Inputs"; changes the argument of the function pointers.
   /// "Inputs" is intended as a generic container for anything needed to
   /// compute the function results. Could have used this exclusively, rather
   /// than having "extra" and "extraI" versions of these functions, but it
   /// seemed nicer to have a version dedicated to the host Model class.
   MT::fmap_extraI QedQcdWrapper::fill_PoleMass_map_extraI()
   {
      MT::fmap_extraI tmp_map;

      addtomap(("e-",   "e+",   "e",   "e-_1", "e+_1", "e_1"), &get_Pole_mElectron);
      addtomap(("mu-",  "mu+",  "mu",  "e-_2", "e+_2", "e_2"), &get_Pole_mMuon);

      return tmp_map; 
   }
    
} // end Gambit namespace

