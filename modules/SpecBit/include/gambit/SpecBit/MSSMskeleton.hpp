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

#ifndef __MSSMskeleton_hpp__
#define __MSSMskeleton_hpp__

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/SpecBit/SLHAskeleton.hpp"

namespace Gambit {
   namespace SpecBit {

      /// Skeleton "model" class which interacts with an SLHAea object
      /// Some common functions defined in base class
      class MSSMea: public SLHAeaModel
      {
         public:
           /// @{ Constructors
           MSSMea();
           MSSMea(const SLHAea::Coll& input);
           /// @}

           /// @{ Getters for MSSM information 
           double get_Mu()  const; 
           double get_BMu() const; 
           double get_vd()  const; 
           double get_vu()  const; 

           double get_MassB () const; 
           double get_MassWB() const; 
           double get_MassG () const; 
           double get_mHd2()   const;  
           double get_mHu2()   const;  

           double get_mq2(int i, int j) const;
           double get_ml2(int i, int j) const;
           double get_md2(int i, int j) const;
           double get_mu2(int i, int j) const;
           double get_me2(int i, int j) const;

           double get_TYd(int i, int j) const;
           double get_TYu(int i, int j) const;
           double get_TYe(int i, int j) const;

           double get_Yd(int i, int j) const; 
           double get_Yu(int i, int j) const; 
           double get_Ye(int i, int j) const; 
   
           double get_g1() const;
           double get_g2() const;
           double get_g3() const;
           double get_tanbeta() const;
  
           double get_MGlu_pole() const;

           double get_Mhh_pole_slha(int i) const;
           double get_MAh_pole () const;
           double get_MHpm_pole() const;

           double get_MCha_pole_slha(int i) const;
           double get_MSd_pole_slha(int i) const;
           double get_MSu_pole_slha(int i) const;
           double get_MSe_pole_slha(int i) const;
           double get_MSv_pole_slha(int i) const;
           double get_MChi_pole_slha(int i) const;
           
           // Pole Mixings
           double get_ZD_pole_slha(int i, int j) const;
           double get_ZU_pole_slha(int i, int j) const;
           double get_ZV_pole_slha(int i, int j) const;
           double get_ZE_pole_slha(int i, int j) const;
           double get_ZH_pole_slha(int i, int j) const;
           double get_ZA_pole_slha(int i, int j) const;
           double get_ZP_pole_slha(int i, int j) const;
           double get_ZN_pole_slha(int i, int j) const;
           double get_UM_pole_slha(int i, int j) const;
           double get_UP_pole_slha(int i, int j) const;
           /// @}
      };

      /// MSSM specialisation of SLHAea object wrapper version of SubSpectrum class
      class MSSMskeleton : public SLHAskeleton<MSSMskeleton,SLHAskeletonTraits<MSSMea>> 
      {
         friend class RunparDer<MSSMskeleton,SLHAskeletonTraits<MSSMea>>;
         friend class PhysDer  <MSSMskeleton,SLHAskeletonTraits<MSSMea>>;

         private:
            typedef MapTypes<SLHAskeletonTraits<MSSMea>> MT; 
            typedef MSSMea Model; 

         public:
            // Constructors/destructors
            MSSMskeleton();
            MSSMskeleton(const SLHAea::Coll&);
            MSSMskeleton(const MSSMskeleton&);
            virtual ~MSSMskeleton() {};

            virtual int get_index_offset() const;
            virtual SLHAea::Coll getSLHAea() const;
            virtual void dump2slha(const std::string& filename) const;
 
         protected:
            /// Map fillers
            static typename MT::fmap  fill_mass2_map(); 
            static typename MT::fmap2 fill_mass2_map2(); 
            static typename MT::fmap  fill_mass_map(); 
            static typename MT::fmap2 fill_mass_map2(); 
            static typename MT::fmap  fill_mass0_map(); 
            static typename MT::fmap2 fill_mass0_map2(); 
            static typename MT::fmap  fill_PoleMass_map();
            static typename MT::fmap1 fill_PoleMass_map1();
            static typename MT::fmap2 fill_PoleMixing_map2();
      };

   } // end SpecBit namespace
} // end Gambit namespace

#endif
