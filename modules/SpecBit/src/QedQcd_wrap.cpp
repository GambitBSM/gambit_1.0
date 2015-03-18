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

#include "lowe.h" ///TODO: wrap using BOSS at some point, i.e. get this from FlexibleSUSY or SoftSUSY
#include "gambit/Utils/Spectrum.hpp"
#include "gambit/SpecBit/QedQcd_wrap.hpp"

namespace Gambit {

   /// @{ QedQcdWrapper member functions
   
   ///   @{ Constructors
   QedQcdWrapper::QedQcdWrapper(bool switch_index_convention) 
      : Spectrum(qedqcd_msbar_pars, qedqcd_ph)
      , qedqcd()
      , qedqcd_ph(*this,qedqcd)
      , qedqcd_msbar_pars(*this,qedqcd)
   {}

   QedQcdWrapper::QedQcdWrapper(QedQcdModel& model, bool switch_index_convention)
      : Spectrum(qedqcd_msbar_pars,qedqcd_ph)
      , qedqcd(model)
      , qedqcd_ph(*this,qedqcd)
      , qedqcd_msbar_pars(*this,qedqcd)
   {}
   ///   @}

   /// Destructor
   QedQcdWrapper::~QedQcdWrapper() {}

   int QedQcdWrapper::get_numbers_stable_particles() const {return -1;} 

   /// @}


   /// @{ QedQcd_MSbarPars member functions
   /// This class contains scale and scheme dependent stuff
    
   // Make sure to construct the base class with references to the parent
   // (derived) Spectrum object and the hosted Model object  
   QedQcd_MSbarPars::QedQcd_MSbarPars(QedQcdWrapper& x, QedQcdModel& m) 
     : RunparDer<QedQcdModel>(x,m)
     , my_parent(x) 
   {}
   
   QedQcd_MSbarPars::~QedQcd_MSbarPars() {}
 
   void QedQcd_MSbarPars::RunToScale(double scale) {}
   double QedQcd_MSbarPars::GetScale() const {return -1;}
   void QedQcd_MSbarPars::SetScale(double scale) {}
           
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
     
      tmp_map["Z0"]     = &QedQcdModel::displayPoleMZ;
      tmp_map["W+"]     = &QedQcdModel::displayPoleMW;
      tmp_map["W-"]     = &QedQcdModel::displayPoleMW;
      tmp_map["W"]      = &QedQcdModel::displayPoleMW;

      tmp_map["t"]      = &QedQcdModel::displayPoleMt;
      tmp_map["tbar"]   = &QedQcdModel::displayPoleMt;
      tmp_map["u_3"]    = &QedQcdModel::displayPoleMt;
      tmp_map["ubar_3"] = &QedQcdModel::displayPoleMt;

      // "Pole" is quoted in SoftSUSY (lowe.h) documentation, so I guess this is an approximation; need to check details.
      tmp_map["b"]      = &QedQcdModel::displayPoleMb;
      tmp_map["bbar"]   = &QedQcdModel::displayPoleMb;
      tmp_map["d_3"]    = &QedQcdModel::displayPoleMb;
      tmp_map["dbar_3"] = &QedQcdModel::displayPoleMb;

      tmp_map["tau+"]   = &QedQcdModel::displayPoleMtau;
      tmp_map["tau-"]   = &QedQcdModel::displayPoleMtau;
      tmp_map["tau"]    = &QedQcdModel::displayPoleMtau;
      tmp_map["e+_3"]   = &QedQcdModel::displayPoleMtau;
      tmp_map["e-_3"]   = &QedQcdModel::displayPoleMtau;

      //tmp_map["g"]  = ;
      //tmp_map["gamma"] = ;
   
      return tmp_map;
   }




   /// @}
    
} // end Gambit namespace

