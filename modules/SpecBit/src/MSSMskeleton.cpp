//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
//
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Apr 
///
///  *********************************************

/// @{ Need these just so I can use SpecBit_error() etc.
///    Is there no more "lightweight" way to do this?
#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"
/// @}

#include "gambit/SpecBit/MSSMskeleton.hpp" 


using namespace SLHAea;

namespace Gambit {
   namespace SpecBit {

      /// Simplify access to map types in this file
      typedef MapTypes<SLHAskeletonTraits<MSSMea>,MapTag::Get> MTget; 
      //typedef MapTypes<SLHAskeletonTraits<MSSMea>,MapTag::Set> MTset; 

      typedef std::map<Par::Phys,MapCollection<MTget>> PhysGetterMaps; 
      //typedef std::map<Par::Phys,MapCollection<MTset>> PhysSetterMaps; 
      typedef std::map<Par::Running,MapCollection<MTget>> RunningGetterMaps; 
      //typedef std::map<Par::Running,MapCollection<MTset>> RunningSetterMaps; 

 
      /// @{ Member functions for SLHAeaModel class
           
      /// Default Constructor
      MSSMea::MSSMea() 
        : SLHAeaModel()
      {}

      /// Constructor via SLHAea object
      MSSMea::MSSMea(const SLHAea::Coll& input)
        : SLHAeaModel(input)
      {}

      /// @{ Getters for MSSM information 

      double MSSMea::get_Mu()   const { return getdata("HMIX",1); }
      double MSSMea::get_BMu()  const { return getdata("HMIX",101); }
      double MSSMea::get_vd()   const { return getdata("HMIX",102); }
      double MSSMea::get_vu()   const { return getdata("HMIX",103); }

      double MSSMea::get_MassB () const { return getdata("MSOFT",1); }
      double MSSMea::get_MassWB() const { return getdata("MSOFT",2); }
      double MSSMea::get_MassG () const { return getdata("MSOFT",3); }
      double MSSMea::get_mHd2() const { return getdata("MSOFT",21); }
      double MSSMea::get_mHu2() const { return getdata("MSOFT",22); }

      double MSSMea::get_mq2(int i, int j) const { return getdata("MSQ2",i,j); }
      double MSSMea::get_ml2(int i, int j) const { return getdata("MSL2",i,j); }
      double MSSMea::get_md2(int i, int j) const { return getdata("MSD2",i,j); }
      double MSSMea::get_mu2(int i, int j) const { return getdata("MSU2",i,j); }
      double MSSMea::get_me2(int i, int j) const { return getdata("MSE2",i,j); }

      double MSSMea::get_TYd(int i, int j) const { return getdata("Td",i,j); }
      double MSSMea::get_TYu(int i, int j) const { return getdata("Tu",i,j); }
      double MSSMea::get_TYe(int i, int j) const { return getdata("Te",i,j); }

      double MSSMea::get_Yd(int i, int j) const { return getdata("Yd",i,j); }
      double MSSMea::get_Yu(int i, int j) const { return getdata("Yu",i,j); }
      double MSSMea::get_Ye(int i, int j) const { return getdata("Ye",i,j); }
   
      double MSSMea::get_g1() const { return getdata("GAUGE",1); }
      double MSSMea::get_g2() const { return getdata("GAUGE",2); }
      double MSSMea::get_g3() const { return getdata("GAUGE",3); }
      double MSSMea::get_tanbeta() const { return get_vu()/get_vd(); }
  
      double MSSMea::get_MGlu_pole() const { return getdata("MASS",1000021); }

      double MSSMea::get_Mhh_pole_slha(int i) const { 
         if      (i==1){ return getdata("MASS",25); } // Neutral Higgs(1)
         else if (i==2){ return getdata("MASS",35); } // Neutral Higgs(2)
         else { SpecBit_error().raise(LOCAL_INFO,"Invalid index input to get_Mhh_pole_slha! Please check index range limits in wrapper SubSpectrum class!"); return -1; } // Should not return.
      } 
      double MSSMea::get_MAh_pole () const { return getdata("MASS",36); }  
      double MSSMea::get_MHpm_pole() const { return getdata("MASS",37); }   

      double MSSMea::get_MCha_pole_slha(int i) const {
         if      (i==1){ return getdata("MASS",1000024); } // Chargino(1)
         else if (i==2){ return getdata("MASS",1000037); } // Chargino(2)
         else { SpecBit_error().raise(LOCAL_INFO,"Invalid index input to get_MCha_pole_slha! Please check index range limits in wrapper SubSpectrum class!"); return -1; } // Should not return.
      }
      double MSSMea::get_MSd_pole_slha(int i) const {
         static std::map<int,int> match;

         if      (i==1){ return getdata("MASS",1000001); } // d-type squark(1)
         else if (i==2){ return getdata("MASS",1000003); } // d-type squark(2)
         else if (i==3){ return getdata("MASS",1000005); } // d-type squark(3)
         else if (i==4){ return getdata("MASS",2000001); } // d-type squark(4)
         else if (i==5){ return getdata("MASS",2000003); } // d-type squark(5)
         else if (i==6){ return getdata("MASS",2000005); } // d-type squark(6)
         else { SpecBit_error().raise(LOCAL_INFO,"Invalid index input to get_MSd_pole_slha! Please check index range limits in wrapper SubSpectrum class!"); return -1; } // Should not return.
      }
      double MSSMea::get_MSu_pole_slha(int i) const {
         if      (i==1){ return getdata("MASS",1000002); } // u-type squark(1)
         else if (i==2){ return getdata("MASS",1000004); } // u-type squark(2)
         else if (i==3){ return getdata("MASS",1000006); } // u-type squark(3)
         else if (i==4){ return getdata("MASS",2000002); } // u-type squark(4)
         else if (i==5){ return getdata("MASS",2000004); } // u-type squark(5)
         else if (i==6){ return getdata("MASS",2000006); } // u-type squark(6)
         else { SpecBit_error().raise(LOCAL_INFO,"Invalid index input to get_MSd_pole_slha! Please check index range limits in wrapper SubSpectrum class!"); return -1; } // Should not return.
      }
      double MSSMea::get_MSe_pole_slha(int i) const {
         if      (i==1){ return getdata("MASS",1000011); } // charged slepton(1)
         else if (i==2){ return getdata("MASS",1000013); } // charged slepton(2)
         else if (i==3){ return getdata("MASS",1000015); } // charged slepton(3)
         else if (i==4){ return getdata("MASS",2000011); } // charged slepton(4)
         else if (i==5){ return getdata("MASS",2000013); } // charged slepton(5)
         else if (i==6){ return getdata("MASS",2000015); } // charged slepton(6)
         else { SpecBit_error().raise(LOCAL_INFO,"Invalid index input to get_MSd_pole_slha! Please check index range limits in wrapper SubSpectrum class!"); return -1; } // Should not return.
      }
      double MSSMea::get_MSv_pole_slha(int i) const {
         if      (i==1){ return getdata("MASS",1000012); } // Sneutrino(1)
         else if (i==2){ return getdata("MASS",1000014); } // Sneutrino(2)
         else if (i==3){ return getdata("MASS",1000016); } // Sneutrino(3)
         else { SpecBit_error().raise(LOCAL_INFO,"Invalid index input to get_MSd_pole_slha! Please check index range limits in wrapper SubSpectrum class!"); return -1; } // Should not return.
      }
      double MSSMea::get_MChi_pole_slha(int i) const {
         if      (i==1){ return getdata("MASS",1000022); } // Neutralino(1)
         else if (i==2){ return getdata("MASS",1000023); } // Neutralino(2)
         else if (i==3){ return getdata("MASS",1000025); } // Neutralino(3)
         else if (i==4){ return getdata("MASS",1000035); } // Neutralino(4)
         else { SpecBit_error().raise(LOCAL_INFO,"Invalid index input to get_MChi_pole_slha! Please check index range limits in wrapper SubSpectrum class!"); return -1; } // Should not return.
      }
      
      // Pole Mixings
      double MSSMea::get_ZD_pole_slha(int i, int j) const { return getdata("DSQMIX",i,j); }
      double MSSMea::get_ZU_pole_slha(int i, int j) const { return getdata("USQMIX",i,j); }

      double MSSMea::get_ZV_pole_slha(int i, int j) const { return getdata("SNUMIX",i,j); }
      double MSSMea::get_ZE_pole_slha(int i, int j) const { return getdata("SELMIX",i,j); }

      double MSSMea::get_ZH_pole_slha(int i, int j) const { return getdata("SCALARMIX",i,j); }
      double MSSMea::get_ZA_pole_slha(int i, int j) const { return getdata("PSEUDOSCALARMIX",i,j); }

      double MSSMea::get_ZP_pole_slha(int i, int j) const { return getdata("CHARGEMIX",i,j); }
      double MSSMea::get_ZN_pole_slha(int i, int j) const { return getdata("NMIX",i,j); }

      double MSSMea::get_UM_pole_slha(int i, int j) const { return getdata("UMIX",i,j); }
      double MSSMea::get_UP_pole_slha(int i, int j) const { return getdata("VMIX",i,j); }
      
      /// @}


      /// @{ Member functions for MSSMskeleton class

      /// @{ Constructors 
 
      /// Default Constructor
      MSSMskeleton::MSSMskeleton() 
        : SLHAskeleton<MSSMskeleton,SLHAskeletonTraits<MSSMea> >()
      {}

      /// Constructor via SLHAea object
      MSSMskeleton::MSSMskeleton(const SLHAea::Coll& input)
        : SLHAskeleton<MSSMskeleton,SLHAskeletonTraits<MSSMea> >(input)
      {}

      /// Copy constructor: needed by clone function.
      MSSMskeleton::MSSMskeleton(const MSSMskeleton& other)
        : SLHAskeleton<MSSMskeleton,SLHAskeletonTraits<MSSMea> >(other)
      {} 

      /// @}  

      /// Ofset from user-input indices (user assumes 1,2,3 indexed, e.g. use offset=-1 for zero-indexing)
      int MSSMskeleton::get_index_offset() const {return 0.;} // we use indices starting from 1 in this file, matching user assumptions.

      /// Retrieve SLHAea object
      SLHAea::Coll MSSMskeleton::getSLHAea() const { return slhawrap.getSLHAea(); } 

      /// Write out SLHA file
      void MSSMskeleton::dump2slha(const std::string& filename) const
      {
         std::ofstream ofs(filename);
         if(ofs){ ofs << getSLHAea(); }
         else{ 
           std::ostringstream errmsg;
           errmsg << "Could not open file '" << filename << "' for writing. Please check that the path exists!";
           SpecBit_error().raise(LOCAL_INFO,errmsg.str()); 
         }     
         ofs.close();
      }
 
      // Map fillers
     

      RunningGetterMaps MSSMskeleton::runningpars_fill_getter_maps()
      {
         RunningGetterMaps map_collection; 
         
         typedef MTget::FInfo2 FInfo2;

         // Can't use c++11 initialise lists, se have to initialise the index sets like this.
         static const int i123v[] = {1,2,3};
         static const std::set<int> i123(i123v, Utils::endA(i123v));
 
         {
            MTget::fmap0 tmp_map;
            tmp_map["BMu"] = &Model::get_BMu;
            tmp_map["mHd2"] = &Model::get_mHd2;
            tmp_map["mHu2"] = &Model::get_mHu2;
            map_collection[Par::mass2].map0 = tmp_map;
         }
         {
            MTget::fmap2 tmp_map;
            tmp_map["mq2"] = FInfo2( &Model::get_mq2, i123, i123);
            tmp_map["ml2"] = FInfo2( &Model::get_ml2, i123, i123);
            tmp_map["md2"] = FInfo2( &Model::get_md2, i123, i123);
            tmp_map["mu2"] = FInfo2( &Model::get_mu2, i123, i123);
            tmp_map["me2"] = FInfo2( &Model::get_me2, i123, i123);
            map_collection[Par::mass2].map2 = tmp_map;
         }
         {
            MTget::fmap0 tmp_map;
            tmp_map["M1"]= &Model::get_MassB;
            tmp_map["M2"]= &Model::get_MassWB;
            tmp_map["M3"]= &Model::get_MassG;
            tmp_map["Mu"]= &Model::get_Mu;
            tmp_map["vu"]= &Model::get_vu;
            tmp_map["vd"]= &Model::get_vd;
            map_collection[Par::mass1].map0 = tmp_map;
         }
         {
            MTget::fmap2 tmp_map;
            tmp_map["TYd"]= FInfo2( &Model::get_TYd, i123, i123);
            tmp_map["TYe"]= FInfo2( &Model::get_TYe, i123, i123);
            tmp_map["TYu"]= FInfo2( &Model::get_TYu, i123, i123);
            tmp_map["ad"] = FInfo2( &Model::get_TYd, i123, i123);
            tmp_map["ae"] = FInfo2( &Model::get_TYe, i123, i123);
            tmp_map["au"] = FInfo2( &Model::get_TYu, i123, i123);
            map_collection[Par::mass1].map2 = tmp_map;
         }
         {
            MTget::fmap0 tmp_map;
            tmp_map["g1"]= &Model::get_g1;
            tmp_map["g2"]= &Model::get_g2;
            tmp_map["g3"]= &Model::get_g3;
            tmp_map["tanbeta"]= &Model::get_tanbeta;
            map_collection[Par::dimensionless].map0 = tmp_map;
         }
         {
            MTget::fmap2 tmp_map;
            tmp_map["Yd"]= FInfo2( &Model::get_Yd, i123, i123);
            tmp_map["Yu"]= FInfo2( &Model::get_Yu, i123, i123);
            tmp_map["Ye"]= FInfo2( &Model::get_Ye, i123, i123);
            map_collection[Par::dimensionless].map2 = tmp_map;
         }
         return map_collection;
      }
     
      PhysGetterMaps MSSMskeleton::phys_fill_getter_maps()
      {
         PhysGetterMaps map_collection; 

         typedef MTget::FInfo1 FInfo1;
         typedef MTget::FInfo2 FInfo2;
   
         static const int i12v[] = {1,2};
         static const std::set<int> i12(i12v, Utils::endA(i12v));

         static const int i123v[] = {1,2,3};
         static const std::set<int> i123(i123v, Utils::endA(i123v));

         static const int i1234v[] = {1,2,3,4};
         static const std::set<int> i1234(i1234v, Utils::endA(i1234v));

         static const int i123456v[] = {1,2,3,4,5,6};
         static const std::set<int> i123456(i123456v, Utils::endA(i123456v));

         {
            MTget::fmap0 tmp_map;
            tmp_map["~g"] = &Model::get_MGlu_pole; 
            tmp_map["A0"] = &Model::get_MAh_pole;   
            tmp_map["H+"] = &Model::get_MHpm_pole;   
            // Antiparticle label 
            tmp_map["H-"] = &Model::get_MHpm_pole;   
            map_collection[Par::Pole_Mass].map0 = tmp_map;
         }
         {
            MTget::fmap1 tmp_map;
            tmp_map["~d"] =    FInfo1( &Model::get_MSd_pole_slha, i123456 );
            tmp_map["~u"] =    FInfo1( &Model::get_MSu_pole_slha, i123456 );
            tmp_map["~e-"] =   FInfo1( &Model::get_MSe_pole_slha, i123456 );
            tmp_map["~e"] =    FInfo1( &Model::get_MSe_pole_slha, i123456 );  // Just an extra name for charged sleptons; not in PDB
            tmp_map["~nu"] =   FInfo1( &Model::get_MSv_pole_slha, i123 );
            tmp_map["h0"] =    FInfo1( &Model::get_Mhh_pole_slha, i12 );
            tmp_map["~chi+"] = FInfo1( &Model::get_MCha_pole_slha, i12 );
            tmp_map["~chi0"] = FInfo1( &Model::get_MChi_pole_slha, i1234 );
      
            // Antiparticles (same getters, just different string name)
            tmp_map["~dbar"] = FInfo1( &Model::get_MSd_pole_slha, i123456 );
            tmp_map["~ubar"] = FInfo1( &Model::get_MSu_pole_slha, i123456 );
            tmp_map["~ebar"] = FInfo1( &Model::get_MSe_pole_slha, i123456 );
            tmp_map["~nubar"]= FInfo1( &Model::get_MSv_pole_slha, i123 );
            tmp_map["~chi-"] = FInfo1( &Model::get_MCha_pole_slha, i12 );
            map_collection[Par::Pole_Mass].map1 = tmp_map;
         }
         {
            MTget::fmap2 tmp_map;
            tmp_map["~d"] =    FInfo2( &Model::get_ZD_pole_slha, i123456, i123456);
            tmp_map["~nu"] =   FInfo2( &Model::get_ZV_pole_slha, i123, i123);
            tmp_map["~u"] =    FInfo2( &Model::get_ZU_pole_slha, i123456, i123456);
            tmp_map["~e"] =    FInfo2( &Model::get_ZE_pole_slha, i123456, i123456);
            tmp_map["h0"] =    FInfo2( &Model::get_ZH_pole_slha, i12, i12);
            tmp_map["A0"] =    FInfo2( &Model::get_ZA_pole_slha, i12, i12);
            tmp_map["H+"] =    FInfo2( &Model::get_ZP_pole_slha, i12, i12);
            tmp_map["~chi0"] = FInfo2( &Model::get_ZN_pole_slha, i1234, i1234); 
            tmp_map["~chi-"] = FInfo2( &Model::get_UM_pole_slha, i12, i12);
            tmp_map["~chi+"] = FInfo2( &Model::get_UP_pole_slha, i12, i12);
            map_collection[Par::Pole_Mixing].map2 = tmp_map;
         }
         return map_collection;
      }
      
   } // end SpecBit namespace
} // end Gambit namespace


