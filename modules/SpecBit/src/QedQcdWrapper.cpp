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

   /// @{ QedQcdWrapper member functions
   
   ///   @{ Constructors
   QedQcdWrapper::QedQcdWrapper(bool switch_index_convention) 
      : Spectrum(qedqcd_msbar_pars, qedqcd_ph)
      , qedqcd()
      , qedqcd_ph(*this,qedqcd)
      , qedqcd_msbar_pars(*this,qedqcd)
   {}

   QedQcdWrapper::QedQcdWrapper(const QedQcdModel& model, bool switch_index_convention)
      : Spectrum(qedqcd_msbar_pars,qedqcd_ph)
      , qedqcd(model)
      , qedqcd_ph(*this,qedqcd)
      , qedqcd_msbar_pars(*this,qedqcd)
   {}

   /// We also need a copy constructor so that the clone() function will do a deep copy properly
   QedQcdWrapper::QedQcdWrapper(const QedQcdWrapper& other)
      : Spectrum(qedqcd_msbar_pars,qedqcd_ph)
      , qedqcd(other.qedqcd)
      , qedqcd_ph(*this,qedqcd)
      , qedqcd_msbar_pars(*this,qedqcd)
   {}

   ///   @}

   /// Destructor
   QedQcdWrapper::~QedQcdWrapper() {}

   /// Currently unused virtual functions
   int QedQcdWrapper::get_index_offset() const {return 0;}   
   int QedQcdWrapper::get_numbers_stable_particles() const {return -1;} 

   /// @}


   /// @{ QedQcd_MSbarPars member functions
   /// This class contains scale and scheme dependent stuff
    
   // Make sure to construct the base class with references to the parent
   // (derived) Spectrum object and the hosted Model object  
   QedQcd_MSbarPars::QedQcd_MSbarPars(QedQcdWrapper& x, QedQcdModel& m) 
     : RunparDer<QedQcdModel>(x,m)
     , my_parent(x) 
     , softup(my_parent.phys.get_Pole_Mass("t")) // Set top quark pole mass as soft upper limit of running.
     , hardup(my_parent.phys.get_Pole_Mass("t")) // QedQcd object will throw its own error if we try to run above this, so set this as the hard limit as well.
   {}
   
   QedQcd_MSbarPars::~QedQcd_MSbarPars() {}
 
   /// Run masses and couplings to end_scale
   void QedQcd_MSbarPars::RunToScaleOverride(double end_scale) 
   {
     ///TODO: Need to add warnings for running beyond certain scales, for different sorts of quantities
     const double tol = 1.0e-5; // Value used internally in QedQcd methods
     double begin_scale = GetScale();
     my_parent.qedqcd.run(begin_scale, end_scale, tol);  // Run masses and couplings
   }

   /// Retrieve the current renormalisation scale at which running parameters are defined
   double QedQcd_MSbarPars::GetScale() const { return my_parent.qedqcd.displayMu(); }

   /// Manually define the current renormalisation scale
   void QedQcd_MSbarPars::SetScale(double scale) { my_parent.qedqcd.setMu(scale); }

   /// Instantiation and getter for mass_map_extra
   QedQcd_MSbarPars::fmap_plain QedQcd_MSbarPars::mass_map_extra(QedQcd_MSbarPars::fill_mass_map_extra());
   const QedQcd_MSbarPars::fmap_plain& QedQcd_MSbarPars::get_mass_map_extra() const {return mass_map_extra;} 

   /// Plain C-function wrappers for QedQcd running mass getters
   double get_mUp      (const QedQcdModel& m) { return m.displayMass(softsusy::mUp); }
   double get_mCharm   (const QedQcdModel& m) { return m.displayMass(softsusy::mCharm); }
   double get_mTop     (const QedQcdModel& m) { return m.displayMass(softsusy::mTop); }
   double get_mDown    (const QedQcdModel& m) { return m.displayMass(softsusy::mDown); }
   double get_mStrange (const QedQcdModel& m) { return m.displayMass(softsusy::mStrange); }
   double get_mBottom  (const QedQcdModel& m) { return m.displayMass(softsusy::mBottom); }
   double get_mElectron(const QedQcdModel& m) { return m.displayMass(softsusy::mElectron); }
   double get_mMuon    (const QedQcdModel& m) { return m.displayMass(softsusy::mMuon); }
   double get_mTau     (const QedQcdModel& m) { return m.displayMass(softsusy::mTau); }

   /// Filler for mass_map
   QedQcd_MSbarPars::fmap_plain QedQcd_MSbarPars::fill_mass_map_extra()
   {
      fmap_plain tmp_map;

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

   /// Instantiation and getter for mass0_map_extra
   QedQcd_MSbarPars::fmap_plain QedQcd_MSbarPars::mass0_map_extra(QedQcd_MSbarPars::fill_mass0_map_extra());
   const QedQcd_MSbarPars::fmap_plain& QedQcd_MSbarPars::get_mass0_map_extra() const {return mass0_map_extra;} 

   /// Plain C-function wrappers for QedQcd running coupling getters
   // Note: often people want 1/alpha, but here we return alpha itself
   // Might want to change these to g1,g3, to be consistent with MSSMSpec
   double get_alpha  (const QedQcdModel& m) { return m.displayAlpha(softsusy::ALPHA); }
   double get_alphaS (const QedQcdModel& m) { return m.displayAlpha(softsusy::ALPHAS); }

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

   double get_a1 (const QedQcdModel& m)
   {
      // We need sin^2 thetaW(Q) for this; i.e. I think it is supposed to be
      // supplied at whatever scale the rest of the parameters are currently
      // defined at. Not sure how to handle this.
      //QedQcd::getGaugeMu(const double m2, const double sinth)
   }

   /// Filler for mass_map
   QedQcd_MSbarPars::fmap_plain QedQcd_MSbarPars::fill_mass0_map_extra()
   {
      fmap_plain tmp_map;

      tmp_map["alpha"]  = &get_alpha;
      tmp_map["alphaS"] = &get_alphaS;

      return tmp_map;
   }

   /// @}
 
   /// @{ QedQcd_Phys member functions 
   /// Class for accessing physical spectrum

   // Make sure to construct the base class with references to the parent
   // (derived) Spectrum object and the hosted Model object  
   QedQcd_Phys::QedQcd_Phys(QedQcdWrapper& x, QedQcdModel& m) 
     : PhysDer<QedQcdModel>(x,m)
     , my_parent(x) 
   {}

   QedQcd_Phys::~QedQcd_Phys() {}

   // String names correspond to those defined in particle_database.cpp. If
   // there is a mismatch, please change the ones here!

   /// Instantiation and getter for PoleMass_map
   QedQcd_Phys::fmap QedQcd_Phys::PoleMass_map(QedQcd_Phys::fill_PoleMass_map());
   const QedQcd_Phys::fmap& QedQcd_Phys::get_PoleMass_map() const {return PoleMass_map;} 

   /// Filler for PoleMass_map
   QedQcd_Phys::fmap   QedQcd_Phys::fill_PoleMass_map()
   {
      fmap tmp_map;
   
      addtomap(("Z0", "Z"),       &QedQcdModel::displayPoleMZ);
      addtomap(("W+", "W-", "W"), &QedQcdModel::displayPoleMW);
      addtomap(("t", "tbar", "u_3", "ubar_3"), &QedQcdModel::displayPoleMt);
      // "Pole" for b quark is quoted in SoftSUSY (lowe.h) documentation, so I guess this is an approximation; need to check details.
      addtomap(("b", "bbar", "d_3", "dbar_3"), &QedQcdModel::displayPoleMb);
      addtomap(("tau+","tau-","tau","e+_3","e-_3"), &QedQcdModel::displayPoleMtau);
   
      return tmp_map;
   }




   /// @}
    
} // end Gambit namespace

