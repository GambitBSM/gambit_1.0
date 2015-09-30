//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM derived version of SubSpectrum class. Designed
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
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Aug
///
///  *********************************************

#ifndef MSSMSPEC_H
#define MSSMSPEC_H

#include <memory>

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/Elements/slhaea_helpers.hpp"
#include "gambit/Utils/version.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/SpecBit/MSSMSpec_head.hpp"   // "Header" declarations for MSSMSpec class

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"


namespace Gambit
{

   namespace SpecBit
   {

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
      MSSMSpec<MI>::MSSMSpec(MI mi, str be_name, str be_version, bool switch_index_convention)
         : backend_name(be_name)
         , backend_version(be_version)
         , index_offset(-1)
         , model_interface(mi)
      {
         if (switch_index_convention) index_offset = 0;
      }
      
      // Default constructor
      template <class MI>
      MSSMSpec<MI>::MSSMSpec(bool switch_index_convention)
         : index_offset(switch_index_convention ? 0 : -1)
      {}
  
      template <class MI>
      MSSMSpec<MI>::~MSSMSpec()
      {}
      
      // Fill an SLHAea object with spectrum information
      template <class MI>
      void MSSMSpec<MI>::add_to_SLHAea(SLHAstruct& slha) const
      {

        // PS: FIXME remaining issues
        //  MINPAR
        //     3     can't currently get tanbeta DRbar at mZ (input) scale
        
        // Here we assume that all SM input info comes from the SMINPUT object, 
        // and all low-E stuff (quark pole masses and the like) come from the LE subspectrum.

        std::ostringstream comment;

        SLHAea_add_block(slha, "SPINFO");
        SLHAea_add(slha, "SPINFO", 1, "GAMBIT, using "+backend_name);
        SLHAea_add(slha, "SPINFO", 2, gambit_version+" (GAMBIT); "+backend_version+" ("+backend_name+")"); 

        SLHAea_add_block(slha, "MINPAR");
        SLHAea_add_block(slha, "HMIX",this->runningpars().GetScale());
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::mass1,"Mu","HMIX",1,"# mu DRbar");
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::dimensionless,"tanbeta","HMIX",2,"# tan(beta) = vu/vd DRbar");
        if (not this->runningpars().has(Par::mass1,"vu")) utils_error().raise(LOCAL_INFO, "MSSM subspectrum does not contain vu!");
        if (not this->runningpars().has(Par::mass1,"vd")) utils_error().raise(LOCAL_INFO, "MSSM subspectrum does not contain vd!");
        double vu = this->runningpars().get(Par::mass1,"vu");
        double vd = this->runningpars().get(Par::mass1,"vd");        
        slha["HMIX"][""] << 3 << sqrt(vu*vu + vd*vd) << "# v = sqrt(vd^2 + vu^2) DRbar";
        slha["HMIX"][""] << 4 << this->runningpars().get(Par::mass2,"mA2") << "# m^2_A (tree)";        
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::mass2,"BMu","HMIX",101,"# Bmu DRbar");
        slha["HMIX"][""] << 102 << vd << "# vd DRbar";
        slha["HMIX"][""] << 103 << vu << "# vu DRbar";
        // FIXME this is wrong, should be at scale mZ, not be at scale Q like this
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::dimensionless,"tanbeta","MINPAR",3,"# tanbeta(mZ)^DRbar");
        slha["MINPAR"][""] << 4 << sgn(this->runningpars().get(Par::mass1,"Mu")) << "# sign(mu)";

        SLHAea_add_block(slha, "GAUGE",this->runningpars().GetScale());
        // Scale gY is in SU(5)/GUT normalisation internally; convert it to SM normalisation for SLHA output by multiplying by sqrt(3/5).
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::dimensionless,"g1","GAUGE",1,"# g'  = g1 = gY DRbar", true, 0.7745966692414834); 
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::dimensionless,"g2","GAUGE",2,"# g   = g2      DRbar");
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::dimensionless,"g3","GAUGE",3,"# g_s = g3      DRbar");

        int pdg_codes[33] = {24,25,35,37,36,1000021,1000024,1000037,1000012,1000014,1000016,1000022,1000023,1000025,1000035,1000001,1000003,1000005,
                             2000001,2000003,2000005,1000011,1000013,1000015,2000011,2000013,2000015,1000002,1000004,1000006,2000002,2000004,2000006};
        for(int i=0;i<33;i++)
        {
          str comment("# "+Models::ParticleDB().long_name(pdg_codes[i], 0));
          SLHAea_add_from_subspec(slha, LOCAL_INFO, this->phys(), Par::Pole_Mass, std::pair<int, int>(pdg_codes[i],0), "MASS", comment);
        }
   
        SLHAea_add_block(slha, "MSOFT",this->runningpars().GetScale());
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::mass1,"M1","MSOFT",1,"# bino mass parameter M1");
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::mass1,"M2","MSOFT",2,"# wino mass parameter M2");
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::mass1,"M3","MSOFT",3,"# gluino mass parameter M3");
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::mass2,"mHd2","MSOFT",21,"# d-type Higgs mass parameter mHd2");
        SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(),Par::mass2,"mHu2","MSOFT",22,"# u-type Higgs mass parameter mHu2");

        sspair A[3] = {sspair("AU","Au"), sspair("AD","Ad"), sspair("AE","Ae")};
        sspair Y[3] = {sspair("YU","Yu"), sspair("YD","Yd"), sspair("YE","Ye")};
        sspair T[3] = {sspair("TU","TYu"), sspair("TD","TYd"), sspair("TE","TYe")};
        for (int k=0;k<3;k++)
        {
          SLHAea_add_block(slha, A[k].first,this->runningpars().GetScale());
          SLHAea_add_block(slha, Y[k].first,this->runningpars().GetScale());
          SLHAea_add_block(slha, T[k].first,this->runningpars().GetScale());
          for(int i=1;i<4;i++)
          {
            comment.str(""); comment << "# " << A[k].second << "(" << i << "," << i << ")";
            double invTii = 1.0/this->runningpars().get(Par::dimensionless,Y[k].second,i,i);
            SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(), Par::mass1, T[k].second, i, i, A[k].first, i, i, comment.str(), true, invTii);
            for(int j=1;j<4;j++)
            {
              comment.str(""); comment << "# " << Y[k].second << "(" << i << "," << j << ")";
              SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(), Par::dimensionless, Y[k].second, i, j, Y[k].first, i, j, comment.str());
              comment.str(""); comment << "# " << T[k].second << "(" << i << "," << j << ")";
              SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(), Par::mass1, T[k].second, i, j, T[k].first, i, j, comment.str());
            }
          }
        }

        sspair M[5] = {sspair("MSL2","ml2"), sspair("MSE2","me2"), sspair("MSQ2","mq2"), sspair("MSU2","mu2"), sspair("MSD2","md2")};
        for (int k=0;k<5;k++)
        {
          SLHAea_add_block(slha, M[k].first,this->runningpars().GetScale());
          for(int i=1;i<4;i++) for(int j=1;j<4;j++)
          {
            comment.str(""); comment << M[k].second << "(" << i << "," << j << ")";
            SLHAea_add_from_subspec(slha, LOCAL_INFO,this->runningpars(), Par::mass2, M[k].second, i, j, M[k].first, i, j, "# " + comment.str());
            if (i == j) slha["MSOFT"][""] << 30+3*k+i+(k>1?4:0) << sqrt(this->runningpars().get(Par::mass2, M[k].second, i, j)) << "# sqrt("+comment.str()+")";
          }
        }

        sspair S[3] = {sspair("USQMIX","~u"), sspair("DSQMIX","~d"), sspair("SELMIX","~e")};
        for (int k=0;k<3;k++)
        {
          SLHAea_add_block(slha, S[k].first,this->runningpars().GetScale());
          for(int i=1;i<7;i++) for(int j=1;j<7;j++)
          {
            comment.str(""); comment << "# " << S[k].second << "-type sfermion mixing (" << i << "," << j << ")";
            SLHAea_add_from_subspec(slha, LOCAL_INFO,this->phys(), Par::Pole_Mixing, S[k].second, i, j, S[k].first, i, j, comment.str());
          }
        }

        sspair U[5] = {sspair("UMIX","~chi-"), sspair("VMIX","~chi+"), sspair("PSEUDOSCALARMIX","A0"), sspair("SCALARMIX","h0"), sspair("CHARGEMIX","H+")};
        for (int k=0;k<5;k++)
        {
          SLHAea_add_block(slha, U[k].first, this->runningpars().GetScale());
          for(int i=1;i<3;i++) for(int j=1;j<3;j++)
          {
            comment.str(""); comment << "# " << U[k].second << " mixing matrix (" << i << "," << j << ")";
            SLHAea_add_from_subspec(slha, LOCAL_INFO,this->phys(), Par::Pole_Mixing, U[k].second, i, j, U[k].first, i, j, comment.str());
          }
        }

        SLHAea_add_block(slha, "ALPHA", this->runningpars().GetScale());
        slha["ALPHA"][""] << 1 << asin(this->phys().get(Par::Pole_Mixing, "h0", 2, 2)) << "# sin^-1(SCALARMIX(2,2))";
  
        sspair V("SNUMIX","~nu");
        SLHAea_add_block(slha, V.first,this->runningpars().GetScale());
        for(int i=1;i<4;i++) for(int j=1;j<4;j++)
        {
          comment.str(""); comment << "# " << V.second << " mixing matrix (" << i << "," << j << ")";
          SLHAea_add_from_subspec(slha, LOCAL_INFO,this->phys(), Par::Pole_Mixing, V.second, i, j, V.first, i, j, comment.str());
        }
      
        sspair N("NMIX","~chi0");
        SLHAea_add_block(slha, N.first,this->runningpars().GetScale());
        for(int i=1;i<5;i++) for(int j=1;j<5;j++)
        {
          comment.str(""); comment << "# " << N.second << " mixing matrix (" << i << "," << j << ")";
          SLHAea_add_from_subspec(slha, LOCAL_INFO,this->phys(), Par::Pole_Mixing, N.second, i, j, N.first, i, j, comment.str());
        }

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
      void MSSMSpec<MI>::RunToScale(double scale)
      {
        model_interface.model.run_to(scale);
      }
      template <class MI>
      double MSSMSpec<MI>::GetScale() const
      {
        return model_interface.model.get_scale();
      }
      template <class MI>
      void MSSMSpec<MI>::SetScale(double scale)
      {
        model_interface.model.set_scale(scale);
      }
      
      template <class MI>
      std::string MSSMSpec<MI>::AccessError(std::string state) const
      {
        std::string errormsg;
        errormsg = "Error accessing "+ state + " element is out of bounds";
        return errormsg;
      }
     
      // "extra" function to compute TanBeta 
      template <class Model>
      double get_tanbeta(const Model& model) 
      { 
        return model.get_vu() / model.get_vd(); 
      }

      // "extra" function to compute mA2 
      template <class Model>
      double get_DRbar_mA2(const Model& model) 
      {
        double tb = model.get_vu() / model.get_vd();
        double cb = cos(atan(tb));
        double sb = sin(atan(tb));
        return model.get_BMu() / (sb * cb); 
      }
    
      template <class Model>
      double get_sinthW2_DRbar(const Model& model)
      {
       double sthW2 = Utils::sqr(model.get_g1()) * 0.6 / 
                      (0.6 * Utils::sqr(model.get_g1()) + 
                      Utils::sqr(model.get_g2()));
       return sthW2;
      }
      
      template <class Model>
      void set_MSu_pole_slha(Model& model, double mass,int i)
      {
        model.get_physical_slha().MSu(i) = mass;
      }
    
      template <class Model>
      void set_MSd_pole_slha(Model& model, double mass,int i)
      {
        model.get_physical_slha().MSd(i) = mass;
      }
      
      template <class Model>
      void set_MSe_pole_slha(Model& model, double mass,int i)
      {
        model.get_physical_slha().MSe(i) = mass;
      }
      
      template <class Model>
      void set_MSv_pole_slha(Model& model, double mass,int i)
      {
        model.get_physical_slha().MSv(i) = mass;
      }
      
      template <class Model>
      void set_MCha_pole_slha(Model& model, double mass, int i)
      {
        model.get_physical_slha().MCha(i) = mass;
      }
      
      template <class Model>
      void set_MChi_pole_slha(Model& model, double mass, int i)
      {
        model.get_physical_slha().MChi(i) = mass;
      }
      
      template <class Model>
      void set_Mhh_pole_slha(Model& model, double mass, int i)
      {
        model.get_physical_slha().Mhh(i) = mass;
      }
      
      template <class Model>
      void set_ZD_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().ZD(i,j) = mass;
      }
      
      template <class Model>
      void set_ZU_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().ZU(i,j) = mass;
      }
      
      template <class Model>
      void set_ZE_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().ZE(i,j) = mass;
      }
      
      template <class Model>
      void set_ZV_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().ZV(i,j) = mass;
      }
      
      template <class Model>
      void set_ZH_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().ZH(i,j) = mass;
      }
      
      template <class Model>
      void set_ZA_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().ZA(i,j) = mass;
      }
      
      template <class Model>
      void set_ZP_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().ZP(i,j) = mass;
      }
      
      template <class Model>
      void set_ZN_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().ZN(i,j) = mass;
      }
      
      template <class Model>
      void set_UM_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().UM(i,j) = mass;
      }
      
      template <class Model>
      void set_UP_pole_slha(Model& model, double mass, int i, int j)
      {
        model.get_physical_slha().UP(i,j) = mass;
      }
      
      template <class Model>
      void set_MAh1_pole_slha(Model& model, double mass)
      {
        model.get_physical_slha().MAh(1) = mass;
      }
      
      template <class Model>
      void set_MHpm1_pole_slha(Model& model, double mass)
      {
        model.get_physical_slha().MHpm(1) = mass;
      }
      
      // goldstone setters.  maybe we need these for some consistent calculation
      // unlikely but I'll add them for now.
      template <class Model>
      void set_neutral_goldstone_pole_slha(Model& model, double mass)
      {
        model.get_physical_slha().MAh(0) = mass;
      }
      
      template <class Model>
      void set_charged_goldstone_pole_slha(Model& model, double mass)
      {
        model.get_physical_slha().MHpm(0) = mass;
      }
         

     // PA: I'm using nicer names than the FlexibleSUSY ones here
     // but maybe I shouldn't as it breaks the symmetry with the
     // getters and could generate some confusion
     template <class Model>

     void set_MGluino_pole_slha(Model& model, double mass)
     {
        model.get_physical_slha().MGlu = mass;
    }

     //PA:  setting MZ and MW is necessary because we may have them as ouptuts
     template <class Model>
     void set_MZ_pole_slha(Model& model, double mass)
     {
        model.get_physical_slha().MVZ = mass;
     }

     template <class Model>
     void set_MW_pole_slha(Model& model, double mass)
     {
        model.get_physical_slha().MVWm = mass;
     }

     
     // PA: do we really need to set the masses of states that must be
     // massless in the MSSM.  This is an MSSM specific file.
     template <class Model>
     void set_MGluon(Model& model, double mass)
     {
        model.get_physical().MG = mass;
     }
     
     template <class Model>
     void set_MPhoton(Model& model, double mass)
     {
        model.get_physical().MVP = mass;
     }

       
      /// @{ Fillers for "Running" subclass
 
      // Filler function for getter function pointer maps extractable from "runningpars" container
      template <class MI>
      typename MSSMSpec<MI>::RunningGetterMaps MSSMSpec<MI>::runningpars_fill_getter_maps()
      {
         typename MSSMSpec<MI>::RunningGetterMaps map_collection; 
         typedef typename MI::Model Model;

         typedef typename MTget::FInfo1 FInfo1;
         typedef typename MTget::FInfo2 FInfo2;

         // Can't use c++11 initialise lists, se have to initialise the index sets like this.
         static const int i01v[] = {0,1};
         static const std::set<int> i01(i01v, Utils::endA(i01v));

         static const int i012v[] = {0,1,2};
         static const std::set<int> i012(i012v, Utils::endA(i012v));

         static const int i0123v[] = {0,1,2,3};
         static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

         static const int i012345v[] = {0,1,2,3,4,5};
         static const std::set<int> i012345(i012345v, Utils::endA(i012345v));
         
         /// @{ mass2 - mass dimension 2 parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {  // scope so we can reuse the name 'tmp_map' several times, so that our macro works.
            // could make a better macro, or an actual function, but I'm in a hurry
            typename MTget::fmap0 tmp_map;
            tmp_map["BMu"]  = &Model::get_BMu;
            tmp_map["mHd2"] = &Model::get_mHd2;
            tmp_map["mHu2"] = &Model::get_mHu2;

            map_collection[Par::mass2].map0 = tmp_map;
         }
 
         // functions utilising the two-index "plain-vanilla" function signature
         // (two-index member functions of model object)
         {
            typename MTget::fmap2 tmp_map;
            tmp_map["mq2"] = FInfo2( &Model::get_mq2, i012, i012);
            tmp_map["ml2"] = FInfo2( &Model::get_ml2, i012, i012);
            tmp_map["md2"] = FInfo2( &Model::get_md2, i012, i012);
            tmp_map["mu2"] = FInfo2( &Model::get_mu2, i012, i012);
            tmp_map["me2"] = FInfo2( &Model::get_me2, i012, i012);
        
            map_collection[Par::mass2].map2 = tmp_map;
         }

         /// @}
         /// @{ mass1 - mass dimension 1 parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {
            typename MTget::fmap0 tmp_map;
            tmp_map["M1"]= &Model::get_MassB;
            tmp_map["M2"]= &Model::get_MassWB;
            tmp_map["M3"]= &Model::get_MassG;
            tmp_map["Mu"]= &Model::get_Mu;
            tmp_map["vu"]= &Model::get_vu;
            tmp_map["vd"]= &Model::get_vd;

            map_collection[Par::mass1].map0 = tmp_map;
         }

         // Functions utilising the two-index "plain-vanilla" function signature
         // (Two-index member functions of model object)
         {
            typename MTget::fmap2 tmp_map;
            tmp_map["TYd"]= FInfo2( &Model::get_TYd, i012, i012);
            tmp_map["TYe"]= FInfo2( &Model::get_TYe, i012, i012);
            tmp_map["TYu"]= FInfo2( &Model::get_TYu, i012, i012);
            tmp_map["ad"] = FInfo2( &Model::get_TYd, i012, i012);
            tmp_map["ae"] = FInfo2( &Model::get_TYe, i012, i012);
            tmp_map["au"] = FInfo2( &Model::get_TYu, i012, i012);
 
            map_collection[Par::mass1].map2 = tmp_map;
         }

         /// @}

         // @{ dimensionless - mass dimension 0 parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {
            typename MTget::fmap0 tmp_map;
            tmp_map["g1"]= &Model::get_g1;
            tmp_map["g2"]= &Model::get_g2;
            tmp_map["g3"]= &Model::get_g3;

            map_collection[Par::dimensionless].map0 = tmp_map;
         }

         // Functions utilising the "extraM" function signature
         // (Zero index, model object as argument)
         {
            typename MTget::fmap0_extraM tmp_map;
            tmp_map["tanbeta"] = &get_tanbeta<Model>;
            tmp_map["sinW2"] = &get_sinthW2_DRbar<Model>;
            map_collection[Par::dimensionless].map0_extraM = tmp_map;
         }

         // Functions utilising the "extraM" function signature
         // (Zero index, model object as argument)
         {
            typename MTget::fmap0_extraM tmp_map;
            tmp_map["mA2"] = &get_DRbar_mA2<Model>;
            map_collection[Par::mass2].map0_extraM = tmp_map;
         }
   
         // Functions utilising the two-index "plain-vanilla" function signature
         // (Two-index member functions of model object)
         {
            typename MTget::fmap2 tmp_map;

            tmp_map["Yd"]= FInfo2( &Model::get_Yd, i012, i012);
            tmp_map["Yu"]= FInfo2( &Model::get_Yu, i012, i012);
            tmp_map["Ye"]= FInfo2( &Model::get_Ye, i012, i012);

            map_collection[Par::dimensionless].map2 = tmp_map;
         }
 
         // Functions utilising the one-index "plain-vanilla" function signature
         // (One-index member functions of model object)
         {
            typename MTget::fmap1 tmp_map;

            tmp_map["Sd"] = FInfo1( &Model::get_MSd, i012345 );
            tmp_map["Su"] = FInfo1( &Model::get_MSu, i012345 );
            tmp_map["Se"] = FInfo1( &Model::get_MSe, i012345 );
            tmp_map["Snu"]= FInfo1( &Model::get_MSv, i012 );
            tmp_map["h0"] = FInfo1( &Model::get_Mhh, i01 );
            //Here we may access the goldstone boson
            // and higgs. maybe too dangerous to keep?
            tmp_map["A0"] = FInfo1( &Model::get_MAh, i01 );      
            //Here we may access the goldstone boson
            //and higgs. maybe too dangerous to keep?
            tmp_map["H+"] = FInfo1( &Model::get_MHpm, i01 );   
            tmp_map["chi+"] = FInfo1( &Model::get_MCha, i01 );
            tmp_map["chi0"] = FInfo1( &Model::get_MChi, i0123 );
            
            tmp_map["d"] =    FInfo1( &Model::get_MFd, i012 );
            tmp_map["u"] =    FInfo1( &Model::get_MFu, i012 );
            tmp_map["e-"] =   FInfo1( &Model::get_MFe, i012 );
            tmp_map["e"] =    FInfo1( &Model::get_MFe, i012 );
            tmp_map["dbar"] = FInfo1( &Model::get_MFd, i012 );
            tmp_map["ubar"] = FInfo1( &Model::get_MFu, i012 );
            tmp_map["e+"] =   FInfo1( &Model::get_MFe, i012 );

            map_collection[Par::mass_eigenstate].map1 = tmp_map;
         }
         /// @}

         return map_collection;
      } 

      // Filler function for setter function pointer maps extractable from "runningpars" container
      template <class MI>
      typename MSSMSpec<MI>::RunningSetterMaps MSSMSpec<MI>::runningpars_fill_setter_maps()
      {
         typename MSSMSpec<MI>::RunningSetterMaps map_collection; 
         typedef typename MI::Model Model;

         typedef typename MTset::FInfo1 FInfo1;
         typedef typename MTset::FInfo2 FInfo2;

         // Can't use c++11 initialise lists, se have to initialise the index sets like this.
         static const int i01v[] = {0,1};
         static const std::set<int> i01(i01v, Utils::endA(i01v));

         static const int i012v[] = {0,1,2};
         static const std::set<int> i012(i012v, Utils::endA(i012v));

         static const int i0123v[] = {0,1,2,3};
         static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

         static const int i012345v[] = {0,1,2,3,4,5};
         static const std::set<int> i012345(i012345v, Utils::endA(i012345v));
         
         /// @{ mass2 - mass dimension 2 parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {  // scope so we can reuse the name 'tmp_map' several times, so that our macro works.
            // could make a better macro, or an actual function, but I'm in a hurry
            typename MTset::fmap0 tmp_map;
            tmp_map["BMu"]  = &Model::set_BMu;
            tmp_map["mHd2"] = &Model::set_mHd2;
            tmp_map["mHu2"] = &Model::set_mHu2;

            map_collection[Par::mass2].map0 = tmp_map;
         }
 
         // Functions utilising the two-index "plain-vanilla" function signature
         // (Two-index member functions of model object)
         {
            typename MTset::fmap2 tmp_map;
            tmp_map["mq2"] = FInfo2( &Model::set_mq2, i012, i012);
            tmp_map["ml2"] = FInfo2( &Model::set_ml2, i012, i012);
            tmp_map["md2"] = FInfo2( &Model::set_md2, i012, i012);
            tmp_map["mu2"] = FInfo2( &Model::set_mu2, i012, i012);
            tmp_map["me2"] = FInfo2( &Model::set_me2, i012, i012);
        
            map_collection[Par::mass2].map2 = tmp_map;
         }
         /// @}

         /// @{ mass1 - mass dimension 1 parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {
            typename MTset::fmap0 tmp_map;
            tmp_map["M1"]= &Model::set_MassB;
            tmp_map["M2"]= &Model::set_MassWB;
            tmp_map["M3"]= &Model::set_MassG;
            tmp_map["Mu"]= &Model::set_Mu;
            tmp_map["vu"]= &Model::set_vu;
            tmp_map["vd"]= &Model::set_vd;

            map_collection[Par::mass1].map0 = tmp_map;
         }

         // Functions utilising the two-index "plain-vanilla" function signature
         // (Two-index member functions of model object)
         {
            typename MTset::fmap2 tmp_map;
            tmp_map["TYd"]= FInfo2( &Model::set_TYd, i012, i012);
            tmp_map["TYe"]= FInfo2( &Model::set_TYe, i012, i012);
            tmp_map["TYu"]= FInfo2( &Model::set_TYu, i012, i012);
            tmp_map["ad"] = FInfo2( &Model::set_TYd, i012, i012);
            tmp_map["ae"] = FInfo2( &Model::set_TYe, i012, i012);
            tmp_map["au"] = FInfo2( &Model::set_TYu, i012, i012);
 
            map_collection[Par::mass1].map2 = tmp_map;
         }

         /// @}

         // @{ dimensionless - mass dimension 0 parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {
            typename MTset::fmap0 tmp_map;
            tmp_map["g1"]= &Model::set_g1;
            tmp_map["g2"]= &Model::set_g2;
            tmp_map["g3"]= &Model::set_g3;

            map_collection[Par::dimensionless].map0 = tmp_map;
         }

         // Functions utilising the two-index "plain-vanilla" function signature
         // (Two-index member functions of model object)
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

      /// @{ Fillers for Phys subclass

      // Need wrapper functios for A0 and H+ getters, to retrieve only the 
      // non-Goldstone entries. 
      // Need to pass in the model object, since we won't have the 'this' pointer
      template <class Model>
      double get_MAh1_pole_slha(const Model& model)
      {
        return model.get_MAh_pole_slha(1);
      }
     
      template <class Model>\
      double get_MHpm1_pole_slha(const Model& model)
      {
        return model.get_MHpm_pole_slha(1);
      }

     // maybe we will need the goldstones at some point
     // I think it doesn't hurt to add them in case we do
     template <class Model>
      double get_neutral_goldstone_pole_slha(const Model& model)
      {
        return model.get_MAh_pole_slha(0);
      }

      template <class Model>
      double get_charged_goldstone_pole_slha(const Model& model)
      {
        return model.get_MHpm_pole_slha(0);
      }
   
      // Filler function for getter function pointer maps extractable from "phys" container
      template <class MI>
      typename MSSMSpec<MI>::PhysSetterMaps MSSMSpec<MI>::phys_fill_setter_maps()
      {
        typename MSSMSpec<MI>::PhysSetterMaps map_collection; 
        typedef typename MI::Model Model;

        typedef typename MTset::FInfo1M FInfo1M;
        typedef typename MTset::FInfo2M FInfo2M;

        // Can't use c++11 initialise lists,
        // so have to initialise the index sets like this.
        static const int i01v[] = {0,1};
        static const std::set<int> i01(i01v, Utils::endA(i01v));

        static const int i012v[] = {0,1,2};
        static const std::set<int> i012(i012v, Utils::endA(i012v));

        static const int i0123v[] = {0,1,2,3};
        static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

        static const int i012345v[] = {0,1,2,3,4,5};
        static const std::set<int> i012345(i012345v, Utils::endA(i012345v));

        {  
          typename MTset::fmap0_extraM tmp_map;
          tmp_map["~g"] = &set_MGluino_pole_slha<Model>; 
          tmp_map["A0"] = &set_MAh1_pole_slha<Model>;
          tmp_map["H+"] = &set_MHpm1_pole_slha<Model>;
          tmp_map["H-"] = &set_MHpm1_pole_slha<Model>;
          tmp_map["Goldstone0"] = &set_neutral_goldstone_pole_slha<Model>;
          tmp_map["Goldstone+"] = &set_charged_goldstone_pole_slha<Model>;
          tmp_map["Goldstone-"] = &set_charged_goldstone_pole_slha<Model>;
   
          /// the getters for these were removed but Pat last meeting
          /// we agreed to add setters here unless I misunderstood.
          /// need to discuss this
          tmp_map["W+"] = &set_MW_pole_slha<Model>;
          tmp_map["W-"] = &set_MW_pole_slha<Model>;
          tmp_map["Z0"] = &set_MZ_pole_slha<Model>;
       
          map_collection[Par::Pole_Mass].map0_extraM = tmp_map;
        }

        {  
          typename MTset::fmap1_extraM tmp_map;
      
          tmp_map["~u"] = FInfo1M( &set_MSu_pole_slha<Model>, i012345 );
          tmp_map["~d"] = FInfo1M( &set_MSd_pole_slha<Model>, i012345 );
          tmp_map["~e"] = FInfo1M( &set_MSe_pole_slha<Model>, i012345 );
          tmp_map["~e-"] = FInfo1M( &set_MSe_pole_slha<Model>, i012345 );
          
          tmp_map["~nu"]=  FInfo1M( &set_MSv_pole_slha<Model>, i012 );
          tmp_map["~chi+"] = FInfo1M( &set_MCha_pole_slha<Model>, i01 );
          tmp_map["~chi0"] = FInfo1M( &set_MChi_pole_slha<Model>, i0123 );
          tmp_map["h0"] =  FInfo1M( &set_Mhh_pole_slha<Model>, i01 );
          // NOTE: I have added the following two to the "no index" map as well, 
          // where only the "safe" entries are retrieved
          //Here we may access the goldstone boson
          //and higgs. maybe too dangerous to keep?
          //  tmp_map["A0"] = FInfo1(&set_MAh_pole_slha, i01 );      
          //Here we may access the goldstone boson
          //and higgs. maybe too dangerous to keep?
          //tmp_map["H+"] = FInfo1( &set_MHpm_pole_slha, i01 );
        
          // Do we really want to set the massing using either the particle or anti-particel string?
          tmp_map["~ubar"] = FInfo1M( &set_MSu_pole_slha<Model>, i012345 );
          tmp_map["~dbar"] = FInfo1M( &set_MSd_pole_slha<Model>, i012345 );
          tmp_map["~ebar"] = FInfo1M( &set_MSe_pole_slha<Model>, i012345 );
          tmp_map["~e+"] = FInfo1M( &set_MSe_pole_slha<Model>, i012345 );
          tmp_map["~nubar"]=  FInfo1M( &set_MSv_pole_slha<Model>, i012 );
          tmp_map["~chi-"] = FInfo1M( &set_MCha_pole_slha<Model>, i01 );
          //tmp_map["H-"] = FInfo1( &set_MHpm_pole_slha, i01 );
            
          map_collection[Par::Pole_Mass].map1_extraM = tmp_map;
        }

   
        /// @{ Pole_Mixing - Pole mass parameters
        //
        // Functions utilising the two-index "plain-vanilla" function signature
        // (Two-index member functions of model object)
        {
          typename MTset::fmap2_extraM tmp_map;
        
          tmp_map["~d"] =   FInfo2M( &set_ZD_pole_slha, i012345, i012345);
          tmp_map["~nu"] =   FInfo2M( &set_ZV_pole_slha, i012, i012);
          tmp_map["~u"] =   FInfo2M( &set_ZU_pole_slha, i012345, i012345);
          tmp_map["~e"] =   FInfo2M( &set_ZE_pole_slha, i012345, i012345);
          tmp_map["h0"] =   FInfo2M( &set_ZH_pole_slha, i01, i01);
          tmp_map["A0"] =   FInfo2M( &set_ZA_pole_slha, i01, i01);
          tmp_map["H+"] = FInfo2M( &set_ZP_pole_slha, i01, i01);
          tmp_map["~chi0"] =   FInfo2M( &set_ZN_pole_slha, i0123, i0123); 
          tmp_map["~chi-"] =   FInfo2M( &set_UM_pole_slha, i01, i01);
          tmp_map["~chi+"] =   FInfo2M( &set_UP_pole_slha, i01, i01);
        
          /* Could add SM fermion mixing but these are only filled
             when we actually calculate the SM pole masses
             which is not necessary */
        
          map_collection[Par::Pole_Mixing].map2_extraM = tmp_map;
        }
                 
        return map_collection;
      }

      // Filler function for getter function pointer maps extractable from "phys" container
      template <class MI>
      typename MSSMSpec<MI>::PhysGetterMaps MSSMSpec<MI>::phys_fill_getter_maps()
      {
         typename MSSMSpec<MI>::PhysGetterMaps map_collection; 
         typedef typename MI::Model Model;

         typedef typename MTget::FInfo1 FInfo1;
         typedef typename MTget::FInfo2 FInfo2;

         // Can't use c++11 initialise lists, so have to initialise the index sets like this.
         static const int i01v[] = {0,1};
         static const std::set<int> i01(i01v, Utils::endA(i01v));

         static const int i012v[] = {0,1,2};
         static const std::set<int> i012(i012v, Utils::endA(i012v));

         static const int i0123v[] = {0,1,2,3};
         static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

         static const int i012345v[] = {0,1,2,3,4,5};
         static const std::set<int> i012345(i012345v, Utils::endA(i012345v));
         
         /// @{ Pole_Mass - Pole mass parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {  
            typename MTget::fmap0 tmp_map;
                   
            // ***REMOVED THESE! Leave them to the QedQcdWrapper.***
            // reinstating the Z and W getters as otherwise there is no
            // point in having the setters!
            tmp_map["Z0"] = &Model::get_MVZ_pole_slha;
            tmp_map["W+"] = &Model::get_MVWm_pole_slha;
            tmp_map["W-"] = &Model::get_MVWm_pole_slha;
            //// //tmp_map["g"] = &Model::get_MGluon_pole_slha;
            //// tmp_map["g"] = &Model::get_MVG_pole_slha;
            ////    //tmp_map["gamma"] = &Model::get_pole_MPhoton;
            //// tmp_map["gamma"] = &Model::get_MVP_pole_slha;

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

            map_collection[Par::Pole_Mass].map0 = tmp_map;
         } 

         // Functions utilising the "extraM" function signature
         // (Zero index, model object as argument)
         {
            typename MTget::fmap0_extraM tmp_map;
        
            // Using wrapper functions defined above
            tmp_map["A0"] = &get_MAh1_pole_slha<Model>;   
            tmp_map["H+"] = &get_MHpm1_pole_slha<Model>;   
      
            // Antiparticle label 
            tmp_map["H-"] = &get_MHpm1_pole_slha<Model>;
            // Goldstones
            // Using wrapper functions defined above
            tmp_map["Goldstone0"] = &get_neutral_goldstone_pole_slha<Model>;   
            tmp_map["Goldstone+"] = &get_charged_goldstone_pole_slha<Model>;   
      
            // Antiparticle label 
            tmp_map["Goldstone-"] = &get_charged_goldstone_pole_slha<Model>;   
      
            map_collection[Par::Pole_Mass].map0_extraM = tmp_map;
         }

         // Functions utilising the one-index "plain-vanilla" function signature
         // (One-index member functions of model object)
         {  
            typename MTget::fmap1 tmp_map;

            tmp_map["~d"] =  FInfo1( &Model::get_MSd_pole_slha, i012345 );
            tmp_map["~u"] =  FInfo1( &Model::get_MSu_pole_slha, i012345 );
            tmp_map["~e-"] = FInfo1( &Model::get_MSe_pole_slha, i012345 );
            tmp_map["~e"] =  FInfo1( &Model::get_MSe_pole_slha, i012345 );  // Just an extra name for charged sleptons; not in PDB
            tmp_map["~nu"]=  FInfo1( &Model::get_MSv_pole_slha, i012 );
            tmp_map["h0"] =  FInfo1( &Model::get_Mhh_pole_slha, i01 );
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
      
            // Standard Model pole masses now come from QedQcdWrapper (except Higgs)
            // tmp_map["d"] =  FInfo1( &Model::get_MFd_pole_slha, i012 );
            // tmp_map["u"] =  FInfo1( &Model::get_MFu_pole_slha, i012 );
            // tmp_map["e-"] = FInfo1( &Model::get_MFe_pole_slha, i012 ); // SHOULD BE e-
            // tmp_map["e"] =  FInfo1( &Model::get_MFe_pole_slha, i012 );  // Another extra name; not in PDB
            // tmp_map["dbar"] = FInfo1( &Model::get_MFd_pole_slha, i012 );
            // tmp_map["ubar"] = FInfo1( &Model::get_MFu_pole_slha, i012 );
            // tmp_map["e+"] =   FInfo1( &Model::get_MFe_pole_slha, i012 );

            // Antiparticles (same getters, just different string name)
            tmp_map["~dbar"] = FInfo1( &Model::get_MSd_pole_slha, i012345 );
            tmp_map["~ubar"] = FInfo1( &Model::get_MSu_pole_slha, i012345 );
            tmp_map["~e+"] = FInfo1( &Model::get_MSe_pole_slha, i012345 );
            tmp_map["~ebar"] = FInfo1( &Model::get_MSe_pole_slha, i012345 );  
            tmp_map["~nubar"]= FInfo1( &Model::get_MSv_pole_slha, i012 );
            tmp_map["H-"] =    FInfo1( &Model::get_MHpm_pole_slha, i01 );   
            tmp_map["~chi-"] = FInfo1( &Model::get_MCha_pole_slha, i01 );

            map_collection[Par::Pole_Mass].map1 = tmp_map;
         }
 
         /// @}

         /// @{ Pole_Mixing - Pole mass parameters
         //
         // Functions utilising the two-index "plain-vanilla" function signature
         // (Two-index member functions of model object)
         {
            typename MTget::fmap2 tmp_map;

            tmp_map["~d"] =   FInfo2( &Model::get_ZD_pole_slha, i012345, i012345);
            tmp_map["~nu"] =   FInfo2( &Model::get_ZV_pole_slha, i012, i012);
            tmp_map["~u"] =   FInfo2( &Model::get_ZU_pole_slha, i012345, i012345);
            tmp_map["~e"] =   FInfo2( &Model::get_ZE_pole_slha, i012345, i012345);
            tmp_map["h0"] =   FInfo2( &Model::get_ZH_pole_slha, i01, i01);
            tmp_map["A0"] =   FInfo2( &Model::get_ZA_pole_slha, i01, i01);
            tmp_map["H+"] = FInfo2( &Model::get_ZP_pole_slha, i01, i01);
            tmp_map["~chi0"] =   FInfo2( &Model::get_ZN_pole_slha, i0123, i0123); 
            tmp_map["~chi-"] =   FInfo2( &Model::get_UM_pole_slha, i01, i01);
            tmp_map["~chi+"] =   FInfo2( &Model::get_UP_pole_slha, i01, i01);
      
            /* Could add SM fermion mixing but these are only filled
               when we actually calculate the SM pole masses
               which is not necessary */
 
            map_collection[Par::Pole_Mixing].map2 = tmp_map;
         }
         /// @}
         return map_collection;
      }

/// @}

         // @{ mass_eigenstate - tree level mass parameters

         // Functions utilising the "plain-vanilla" function signature
         // // (Zero index member functions of model object)
         // {
         //    typename MTget::fmap0 tmp_map;

         //    tmp_map["MZ"]      = &Model::get_MVZ;
         //    tmp_map["MW"]      = &Model::get_MVWm;
         //    tmp_map["MGluino"] = &Model::get_MGlu; 
         //    tmp_map["MGluon"]  = &Model::get_MVG; 
         //    tmp_map["MPhoton"] = &Model::get_MVP;
 
         //    // these are not present in the model object currently
         //    // But maybe we should add them
         //    // tmp_map["MGoldstone0"] = &Model::get_DRbar_neut_goldstone;
         //    // tmp_map["MA0"] = &Model::get_DRbar_neut_CPodd_higgs;
         //    // tmp_map["MGoldstonePM"] = &Model::get_DRbar_ch_goldstone; 
         //    // tmp_map["MHpm"] = &Model::get_DRbar_ch_higgs; 
            
         //    // tmp_map["Mtop"] = &Model::get_DRbar_mtop;
         //    // tmp_map["Mcharm"] = &Model::get_DRbar_mcharm;
         //    // tmp_map["Mup"] = &Model::get_DRbar_mup;
         //    // tmp_map["Mbottom"] = &Model::get_DRbar_mbottom;
         //    // tmp_map["Mstrange"] = &Model::get_DRbar_mstrange;
         //    // tmp_map["Mdown"] = &Model::get_DRbar_mdown;
         //    // tmp_map["Mtau"] = &Model::get_DRbar_mtau; 
         //    // tmp_map["Mmuon"] = &Model::get_DRbar_mmuon; 
         //    // tmp_map["Melectron"] = &Model::get_DRbar_melectron; 
 
         //    map_collection[Par::mass_eigenstate].map0 = tmp_map;
         // }
     
      /// @}
  
   } // end SpecBit namespace 
} // end Gambit namespace

#endif
