//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM derivation of Spectrum class. Designed
///  for easy interface to FlexibleSUSY, but also
///  works with SoftSUSY as the backend with an
///  appropriately designed intermediate later.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  *********************************************



#ifndef MSSMSPEC_H
#define MSSMSPEC_H

#include <memory>

#include "gambit/Utils/Spectrum.hpp"
#include "gambit/Utils/util_functions.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"

// "Header" declarations for MSSMSpec class
// (the current file contains the member function definitions, which usually
//  would go in a .cpp file, but cannot since this is a template class. But
//  it is still nice to split up the declarations and definitions, so that
//  is all that we are doing here.)
#include "MSSMSpec_head.hpp"

namespace Gambit {

   //
   // IMPLEMENTATION OF MSSMSpec MEMBER FUNCTIONS FOLLOWS
   // 
   // MSSMSpec this is a template class, we need these definition in the header
   // file. It is nice to keep them seperate from the class declaration though.
   //
 
   // NOTE!! mi is COPIED into the object, so when we get the reference to the 
   // actual Model object to store in 'model', we need to use the copy inside
   // the object. So also need to make sure 'model_interface' is initialised first
   // (i.e. it should be declared first)
   template <class MI>
   MSSMSpec<MI>::MSSMSpec(MI mi, bool switch_index_convention)
      : Spectrum(mssm_drbar_pars, mssm_ph)
      , index_offset(-1)
      , mssm_ph(*this,model_interface.model)
      , mssm_drbar_pars(*this,model_interface.model)
      , model_interface(mi)
   {
      if (switch_index_convention) index_offset = 0;
   }
   
   // Default constructor
   template <class MI>
   MSSMSpec<MI>::MSSMSpec(bool switch_index_convention)
      : Spectrum(mssm_drbar_pars, mssm_ph)
      , index_offset(-1)
      , mssm_ph(*this,model_interface.model)
      , mssm_drbar_pars(*this,model_interface.model)
   {
      if (switch_index_convention) index_offset = 0;
   }
   
   template <class MI>
   MSSMSpec<MI>::~MSSMSpec()
   {
   }
   
   template <class MI>
   void MSSMSpec<MI>::dump2slha(const std::string& filename)
   {
     model_interface.dump2slha(filename);
   }
   
   // Return an SLHAea object containing spectrum information
   template <class MI>
   SLHAea::Coll MSSMSpec<MI>::getSLHAea()
   {
     return model_interface.getSLHAea();
   }
   
   //inspired by softsusy's lsp method.  
   //This MSSM version assumes all states mass ordered. 
   //returns lsp mass and gives 3 integers to specify the state 
   // for most general case of a particle type with mass matrix 
   // row and col set to -1 when not needed 
   //(row only is used for vector) 
   //particle_type = 0 (neutralino), 1(Sneutrino), 2(up squark), 
   //3(down squarks), 4(charged slepton), 5(Chargino), 6(gluino)
   //
   // TODO: Ben: I'm a little unclear why we access the flexiblesusy
   // data directly like this. Can't we use the function pointer maps 
   // that we wrote? This will reduce how much the softsusy wrapper
   // has to clone the flexiblesusy model object structure.
   template <class MI>
   double MSSMSpec<MI>::get_lsp_mass(int & particle_type, int & row, int & col) const
   {
      row = -1; col = -1;  particle_type =-1;//set default
      double mlsp = fabs(model_interface.model.get_physical().MChi(0)); //most common lsp
      particle_type = 0;
      row = 0;
     
      /// sneutrinos 1
      double temp = model_interface.model.get_physical().MSv(0);
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 1; 
         row=0;
      }
      
      /// up squarks 2
      temp = model_interface.model.get_physical().MSu(0);
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 2;
         row=0;
      }
      
      /// down squarks 3
      temp = model_interface.model.get_physical().MSd(0);
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 3;
         row=0;      
      }
      
      /// sleptons 4
      temp = model_interface.model.get_physical().MSe(0);
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 4; 
         row=0;    
      }
      
     /// charginos 5
      temp = fabs(model_interface.model.get_physical().MCha(0));
      if (temp < mlsp) { 
         mlsp = temp; 
         particle_type = 5; 
         row=0;    
      }
      
      /// gluino 6
      temp = fabs(model_interface.model.get_physical().MGlu);
      if (temp < mlsp) {
         mlsp = temp; 
         particle_type = 6; 
         row=0;    
      }
      
      //We have no gravitino mass right now.   this should be added.
      // /// gravitino -1 
      // temp = displayGravitino();
      // if (temp < mlsp) {
      //   mlsp = temp; posi = 0; posj = 0; particle_type = -1; }  
      
      return mlsp;
   }

   //The MSSM has just one LSP - often the lightest neutralino
   template <class MI>
   int MSSMSpec<MI>::get_numbers_stable_particles() const {
      return 1;
   }
   
   //these are just wrappers.  Need to test this carefully though
   //inheritance is complicated
   //TODO: Ben: If it helps, we can now put the run_to function
   //in the interface class. Might be similar to what you were
   //already doing for the softsusy interface. Should merge our
   //approaches. Could do all of this via the interface. Depends
   //what will be simplest in general.
   template <class MI>
   void MSSM_DRbarPars<MI>::RunToScale(double scale){
      my_parent.model_interface.model.run_to(scale);
   }
   template <class MI>
   double MSSM_DRbarPars<MI>::GetScale() const {
      return my_parent.model_interface.model.get_scale();
   }
   template <class MI>
   void MSSM_DRbarPars<MI>::SetScale(double scale){
       my_parent.model_interface.model.set_scale(scale);
   }
   
   template <class MI>
   std::string MSSMSpec<MI>::AccessError(std::string state) const {
      std::string errormsg;
      errormsg = "Error accessing "+ state + " element is out of bounds";
      return errormsg;
   }
     
   // Function to initialise mass4_map
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap MSSM_DRbarPars<MI>::fill_mass4_map() 
   {
      fmap tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
  
   // Function to initialise mass4_map_extra 
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap_plain MSSM_DRbarPars<MI>::fill_mass4_map_extra() 
   {
      fmap_plain tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   // Function to initialise mass4_map1
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap1 MSSM_DRbarPars<MI>::fill_mass4_map1() 
   {
      fmap1 tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   
   // Function to initialise mass4_map2
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap2 MSSM_DRbarPars<MI>::fill_mass4_map2() 
   {
      fmap2 tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
  
   
   // Function to initialise mass3_map
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap MSSM_DRbarPars<MI>::fill_mass3_map() 
   {
      fmap tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   // Function to initialise mass3_map_extra
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap_plain MSSM_DRbarPars<MI>::fill_mass3_map_extra() 
   {
      fmap_plain tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   // Function to initialise mass3_map1
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap1 MSSM_DRbarPars<MI>::fill_mass3_map1() 
   {
      fmap1 tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   
   // Function to initialise mass3_map2
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap2 MSSM_DRbarPars<MI>::fill_mass3_map2() 
   {
      fmap2 tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap MSSM_DRbarPars<MI>::fill_mass2_map() 
   {
      typedef typename MI::Model Model;
      fmap tmp_map;
      tmp_map["BMu"] = &Model::get_BMu;
      tmp_map["mHd2"] = &Model::get_mHd2;
      tmp_map["mHu2"] = &Model::get_mHu2;
   
      return tmp_map;
   }
      
   // Function to initialise mass2_map_extra
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap_plain MSSM_DRbarPars<MI>::fill_mass2_map_extra() 
   {
      fmap_plain tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }

   // Function to initialise mass2_map1
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap1 MSSM_DRbarPars<MI>::fill_mass2_map1() 
   {
      fmap1 tmp_map;
      //there are no mappings for this case in the MSSM.
      return tmp_map;
   }
   
   
   // Function to initialise mass2_map2
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap2 MSSM_DRbarPars<MI>::fill_mass2_map2() 
   {
      typedef typename MI::Model Model;
      fmap2 tmp_map;

      // Can't use c++11 initialise lists, se have to initialise the index sets like this.
      static const int i012v[] = {0,1,2};
      static const std::set<int> i012(i012v, Utils::endA(i012v));

      tmp_map["mq2"] = FInfo2( &Model::get_mq2, i012, i012);
      tmp_map["ml2"] = FInfo2( &Model::get_ml2, i012, i012);
      tmp_map["md2"] = FInfo2( &Model::get_md2, i012, i012);
      tmp_map["mu2"] = FInfo2( &Model::get_mu2, i012, i012);
      tmp_map["me2"] = FInfo2( &Model::get_me2, i012, i012);
     
      return tmp_map;
   }
   
   
   
   // Function to initialise mass_map
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap MSSM_DRbarPars<MI>::fill_mass_map() 
   {
      typedef typename MI::Model Model;
      fmap tmp_map;
      tmp_map["M1"]= &Model::get_MassB;
      tmp_map["M2"]= &Model::get_MassWB;
      tmp_map["M3"]= &Model::get_MassG;
      tmp_map["Mu"]= &Model::get_Mu;
      tmp_map["vu"]= &Model::get_vu;
      tmp_map["vd"]= &Model::get_vd;
      return tmp_map;
   }

 
   // Function to initialise mass_map_extra
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap_plain MSSM_DRbarPars<MI>::fill_mass_map_extra() 
   {
      fmap_plain tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   // Function to initialise mass_map1
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap1 MSSM_DRbarPars<MI>::fill_mass_map1() 
   {
      fmap1 tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   
   // Function to initialise mass_map2
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap2 MSSM_DRbarPars<MI>::fill_mass_map2() 
   {
      typedef typename MI::Model Model;
      fmap2 tmp_map;

      static const int i012v[] = {0,1,2};
      static const std::set<int> i012(i012v, Utils::endA(i012v));

      tmp_map["TYd"]= FInfo2( &Model::get_TYd, i012, i012);
      tmp_map["TYe"]= FInfo2( &Model::get_TYe, i012, i012);
      tmp_map["TYu"]= FInfo2( &Model::get_TYu, i012, i012);
      tmp_map["ad"] = FInfo2( &Model::get_TYd, i012, i012);
      tmp_map["ae"] = FInfo2( &Model::get_TYe, i012, i012);
      tmp_map["au"] = FInfo2( &Model::get_TYu, i012, i012);
   
      return tmp_map;
   }
   
   // Function to initialise mass0_map
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap MSSM_DRbarPars<MI>::fill_mass0_map() 
   {
      typedef typename MI::Model Model;
      fmap tmp_map;
      tmp_map["g1"]= &Model::get_g1;
      tmp_map["g2"]= &Model::get_g2;
      tmp_map["g3"]= &Model::get_g3;
     
      return tmp_map;
   }
   
   // "extra" function to compute TanBeta 
   template <class Model>
   double get_tanbeta(const Model& model) 
   { 
      return model.get_vu() / model.get_vd(); 
   }
 
   // Function to initialise mass0_map_extra
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap_plain MSSM_DRbarPars<MI>::fill_mass0_map_extra() 
   {
      typedef typename MI::Model Model;
      fmap_plain tmp_map;
      tmp_map["tanbeta"]= &get_tanbeta<Model>;
      
      return tmp_map;
   }
 
 
   // Function to initialise mass0_map1
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap1 MSSM_DRbarPars<MI>::fill_mass0_map1() 
   {
      fmap1 tmp_map;
      //there are no mappings for this case.
      return tmp_map;
   }
   
   
   // Function to initialise mass0_map2
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap2 MSSM_DRbarPars<MI>::fill_mass0_map2() 
   {
      typedef typename MI::Model Model;
      fmap2 tmp_map;
     
      static const int i012v[] = {0,1,2};
      static const std::set<int> i012(i012v, Utils::endA(i012v));

      tmp_map["Yd"]= FInfo2( &Model::get_Yd, i012, i012);
      tmp_map["Yu"]= FInfo2( &Model::get_Yu, i012, i012);
      tmp_map["Ye"]= FInfo2( &Model::get_Ye, i012, i012);
 
      return tmp_map;
   }
   
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap MSSM_DRbarPars<MI>::fill_TreeMass_map()
   {
      typedef typename MI::Model Model;
      fmap tmp_map;

      tmp_map["MZ"]      = &Model::get_MVZ;
      tmp_map["MW"]      = &Model::get_MVWm;
      tmp_map["MGluino"] = &Model::get_MGlu; 
      tmp_map["MGluon"]  = &Model::get_MVG; 
      tmp_map["MPhoton"] = &Model::get_MVP;
      
      // these are not present in the model object currently
      // But maybe we should add them
      // tmp_map["MGoldstone0"] = &Model::get_DRbar_neut_goldstone;
      // tmp_map["MA0"] = &Model::get_DRbar_neut_CPodd_higgs;
      // tmp_map["MGoldstonePM"] = &Model::get_DRbar_ch_goldstone; 
      // tmp_map["MHpm"] = &Model::get_DRbar_ch_higgs; 
      
      // tmp_map["Mtop"] = &Model::get_DRbar_mtop;
      // tmp_map["Mcharm"] = &Model::get_DRbar_mcharm;
      // tmp_map["Mup"] = &Model::get_DRbar_mup;
      // tmp_map["Mbottom"] = &Model::get_DRbar_mbottom;
      // tmp_map["Mstrange"] = &Model::get_DRbar_mstrange;
      // tmp_map["Mdown"] = &Model::get_DRbar_mdown;
      // tmp_map["Mtau"] = &Model::get_DRbar_mtau; 
      // tmp_map["Mmuon"] = &Model::get_DRbar_mmuon; 
      // tmp_map["Melectron"] = &Model::get_DRbar_melectron; 
      return tmp_map;
   }
   //map for string access with an index supplied
   template <class MI>
   typename MSSM_DRbarPars<MI>::fmap1 MSSM_DRbarPars<MI>::fill_TreeMass_map1()
   {
      typedef typename MI::Model Model;
      fmap1 tmp_map;

      static const int i01v[] = {0,1};
      static const std::set<int> i01(i01v, Utils::endA(i01v));

      static const int i012v[] = {0,1,2};
      static const std::set<int> i012(i012v, Utils::endA(i012v));

      static const int i0123v[] = {0,1,2,3};
      static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

      static const int i012345v[] = {0,1,2,3,4,5};
      static const std::set<int> i012345(i012345v, Utils::endA(i012345v));

      tmp_map["MSd"] = FInfo1( &Model::get_MSd, i012345 );
      tmp_map["MSu"] = FInfo1( &Model::get_MSu, i012345 );
      tmp_map["MSe"] = FInfo1( &Model::get_MSe, i012345 );
      tmp_map["MSnu"]= FInfo1( &Model::get_MSv, i012 );
      tmp_map["Mh0"] = FInfo1( &Model::get_Mhh, i01 );
      //Here we may access the goldstone boson
      // and higgs. maybe too dangerous to keep?
      tmp_map["MA0"] = FInfo1( &Model::get_MAh, i01 );      
      //Here we may access the goldstone boson
      //and higgs. maybe too dangerous to keep?
      tmp_map["MH+"] = FInfo1( &Model::get_MHpm, i01 );   
      tmp_map["Mchi+"] = FInfo1( &Model::get_MCha, i01 );
      tmp_map["Mchi0"] = FInfo1( &Model::get_MChi, i0123 );
      
      tmp_map["Md"] = FInfo1( &Model::get_MFd, i012 );
      tmp_map["Mu"] = FInfo1( &Model::get_MFu, i012 );
      tmp_map["Me"] = FInfo1( &Model::get_MFe, i012 );
      return tmp_map;
   }
  
 
   template <class MI>
   typename MSSM_Phys<MI>::fmap MSSM_Phys<MI>::fill_PoleMass_map()
   {
      typedef typename MI::Model Model;
      fmap tmp_map;
     
      // tmp_map["MZ"] = &Model::get_Pole_MZ;
      // tmp_map["MW"] = &Model::get_Pole_MW;

      tmp_map["Z0"] = &Model::get_MVZ_pole_slha;
      tmp_map["W+"] = &Model::get_MVWm_pole_slha;
      tmp_map["W-"] = &Model::get_MVWm_pole_slha;
      //tmp_map["g"] = &Model::get_MGluon_pole_slha;
      tmp_map["g"] = &Model::get_MVG_pole_slha;
         //tmp_map["gamma"] = &Model::get_pole_MPhoton;
      tmp_map["gamma"] = &Model::get_MVP_pole_slha;

      tmp_map["~g"] = &Model::get_MGlu_pole_slha; 

      // tmp_map["MGoldstone0"] = &Model::get_Pole_neut_goldstone;
      // tmp_map["MA0"] = &Model::get_Pole_neut_CPodd_higgs;
      // tmp_map["MGoldstonePM"] = &Model::get_Pole_ch_goldstone; 
      // tmp_map["MHpm"] = &Model::get_Pole_ch_higgs;    
      // tmp_map["Mtop"] = &Model::get_Pole_mtop;
      // tmp_map["Mcharm"] = &Model::get_Pole_mcharm;
      // tmp_map["Mup"] = &Model::get_Pole_mup;
      // tmp_map["Mbottom"] = &Model::get_Pole_mbottom;
      // tmp_map["Mstrange"] = &Model::get_Pole_mstrange;
      // tmp_map["Mdown"] = &Model::get_Pole_mdown;
      // tmp_map["Mtau"] = &Model::get_Pole_mtau; 
      // tmp_map["Mmuon"] = &Model::get_Pole_mmuon; 
      // tmp_map["Melectron"] = &Model::get_Pole_melectron; 
   
      return tmp_map;
   }
   
   // Need wrapper functios for A0 and H+ getters, to retrieve only the 
   // non-Goldstone entries. 
   // Need to pass in the model object, since we won't have the 'this' pointer
   template <class Model> double get_MAh1_pole(const Model& model) { return model.get_MAh_pole_slha(1); }
   template <class Model> double get_MHpm1_pole(const Model& model) { return model.get_MHpm_pole_slha(1); }

   // Note! Map fillers appended with "_extra" will be treated by the Spectrum object as
   // alternative routines to call for that getter type.
   // e.g.
   // get_Pole_Mass(name)
   // draws upon two maps, filled by the two filling functions
   // fill_PoleMass_map()
   // fill_PoleMass_map_extra()
   template <class MI>
   typename MSSM_Phys<MI>::fmap_plain MSSM_Phys<MI>::fill_PoleMass_map_extra()
   {
      typedef typename MI::Model Model;
      fmap_plain tmp_map;
     
      // Using wrapper functions defined above
      tmp_map["A0"] = &get_MAh1_pole<Model>;   
      tmp_map["H+"] = &get_MHpm1_pole<Model>;   
   
      // Antiparticle label 
      tmp_map["H-"] = &get_MHpm1_pole<Model>;   

      return tmp_map;
   }

   template <class MI>
   typename MSSM_Phys<MI>::fmap1 MSSM_Phys<MI>::fill_PoleMass_map1()
   {
      typedef typename MI::Model Model;
      fmap1 tmp_map;

      static const int i01v[] = {0,1};
      static const std::set<int> i01(i01v, Utils::endA(i01v));

      static const int i012v[] = {0,1,2};
      static const std::set<int> i012(i012v, Utils::endA(i012v));

      static const int i0123v[] = {0,1,2,3};
      static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

      static const int i012345v[] = {0,1,2,3,4,5};
      static const std::set<int> i012345(i012345v, Utils::endA(i012345v));

      tmp_map["~d"] = FInfo1( &Model::get_MSd_pole_slha, i012345 );
      tmp_map["~u"] = FInfo1( &Model::get_MSu_pole_slha, i012345 );
      tmp_map["~e-"] = FInfo1( &Model::get_MSe_pole_slha, i012345 );
      tmp_map["~e"] = FInfo1( &Model::get_MSe_pole_slha, i012345 );  // Just an extra name for charged sleptons; not in PDB
      tmp_map["~nu"]= FInfo1( &Model::get_MSv_pole_slha, i012 );
      tmp_map["h0"] = FInfo1( &Model::get_Mhh_pole_slha, i01 );
      // NOTE: I have added the following two to the "no index" map as well, 
      // where only the "safe" entries are retrieved
      //Here we may access the goldstone boson
      //and higgs. maybe too dangerous to keep?
      tmp_map["A0"] = FInfo1( &Model::get_MAh_pole_slha, i01 );      
      //Here we may access the goldstone boson
      //and higgs. maybe too dangerous to keep?
      tmp_map["H+"] = FInfo1( &Model::get_MHpm_pole_slha, i01 );   
      tmp_map["~chi+"] = FInfo1( &Model::get_MCha_pole_slha, i01 );
      tmp_map["~chi0"] = FInfo1( &Model::get_MChi_pole_slha, i0123 );
    
      tmp_map["d"] = FInfo1( &Model::get_MFd_pole_slha, i012 );
      tmp_map["u"] = FInfo1( &Model::get_MFu_pole_slha, i012 );
      tmp_map["e+"] = FInfo1( &Model::get_MFe_pole_slha, i012 );
      tmp_map["e"] = FInfo1( &Model::get_MFe_pole_slha, i012 );  // Another extra name; not in PDB

      // Antiparticles (same getters, just different string name)
      tmp_map["~dbar"] = FInfo1( &Model::get_MSd_pole_slha, i012345 );
      tmp_map["~ubar"] = FInfo1( &Model::get_MSu_pole_slha, i012345 );
      tmp_map["~ebar"] = FInfo1( &Model::get_MSe_pole_slha, i012345 );
      tmp_map["~nubar"]= FInfo1( &Model::get_MSv_pole_slha, i012 );
      tmp_map["H-"] = FInfo1( &Model::get_MHpm_pole_slha, i01 );   
      tmp_map["~chi-"] = FInfo1( &Model::get_MCha_pole_slha, i01 );

      tmp_map["dbar"] = FInfo1( &Model::get_MFd_pole_slha, i012 );
      tmp_map["ubar"] = FInfo1( &Model::get_MFu_pole_slha, i012 );
      tmp_map["e+"] = FInfo1( &Model::get_MFe_pole_slha, i012 );

      return tmp_map;
   }
   
   //returns empty mass sicne none of these exist in this model
   template <class MI>
   typename MSSM_Phys<MI>::fmap MSSM_Phys<MI>::fill_PoleMixing_map(){
      fmap tmp_map;
      // this is currently empty in MSSM, could add Higgs mixing, alpha 
      return tmp_map;
   }

   //returns empty mass sicne none of these exist in this model
   template <class MI>
   typename MSSM_Phys<MI>::fmap_plain MSSM_Phys<MI>::fill_PoleMixing_map_extra(){
      fmap_plain tmp_map;
    // this is currently empty in MSSM,
      return tmp_map;
   }
   
   //returns empty mass sicne none of these exist in this model
   template <class MI>
   typename MSSM_Phys<MI>::fmap1 MSSM_Phys<MI>::fill_PoleMixing_map1(){
      fmap1 tmp_map;
    // this is currently empty in MSSM,
      return tmp_map;
   }
    
   template <class MI>
   typename MSSM_Phys<MI>::fmap2 MSSM_Phys<MI>::fill_PoleMixing_map2()
   {
      typedef typename MI::Model Model;
      fmap2 tmp_map;

      static const int i01v[] = {0,1};
      static const std::set<int> i01(i01v, Utils::endA(i01v));

      static const int i012v[] = {0,1,2};
      static const std::set<int> i012(i012v, Utils::endA(i012v));

      static const int i0123v[] = {0,1,2,3};
      static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

      static const int i012345v[] = {0,1,2,3,4,5};
      static const std::set<int> i012345(i012345v, Utils::endA(i012345v));

      //Need to add these to generated code before I can use them here.
      tmp_map["ZD"] = FInfo2( &Model::get_ZD_pole_slha, i012345, i012345);
      tmp_map["ZV"] = FInfo2( &Model::get_ZV_pole_slha, i012, i012);
      tmp_map["ZU"] = FInfo2( &Model::get_ZU_pole_slha, i012345, i012345);
      tmp_map["ZE"] = FInfo2( &Model::get_ZE_pole_slha, i012345, i012345);
      tmp_map["ZH"] = FInfo2( &Model::get_ZH_pole_slha, i01, i01);
      tmp_map["ZA"] = FInfo2( &Model::get_ZA_pole_slha, i01, i01);
      tmp_map["ZHPM"] = FInfo2( &Model::get_ZP_pole_slha, i01, i01);
      tmp_map["ZN"] = FInfo2( &Model::get_ZN_pole_slha, i0123, i0123); 
      tmp_map["UM"] = FInfo2( &Model::get_UM_pole_slha, i01, i01);
      tmp_map["UP"] = FInfo2( &Model::get_UP_pole_slha, i01, i01);
   
      /* Could add SM fermion mixing but these are only filled
         when we actually calculate the SM pole masses
         which is not necessary */
     
      return tmp_map;
   }
    

   MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS(MSSM_DRbarPars)
// e.g.:  template <class M> typename ClassName<M>::fmap&  ClassName<M>::get_mass4_map() const {return mass4_map;}
// goes to
// template <class M> 
// typename MSSM_DRbarPars<M>::fmap&  MSSM_DRbarPars<M>::get_mass4_map() const {
//    return mass4_map;
// }

   MODEL_PHYS_TEMPLATE_MEMBER_FUNCTIONS(MSSM_Phys)
// e.g.:  template <class M> typename ClassName<M>::fmap   ClassName<M>::PoleMass_map(ClassName<M>::fill_PoleMass_map());
// goes to
// template <class M> 
// typename MSSM_Phys<M>::fmap   MSSM_Phys<M>::PoleMass_map(MSSM_Phys<M>::fill_PoleMass_map());

 
}

#endif
