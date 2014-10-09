#ifndef MSSMSPEC_H
#define MSSMSPEC_H

#include "MSSM_two_scale_model.hpp"
#include "Spectrum.hpp"
#include "two_scale_model.hpp"
#include "MSSM_model.hpp"
#include "config.h"
#include "MSSM_physical.hpp"

 
namespace flexiblesusy {

   class Two_scale;
   typedef MSSM<Two_scale> MssmFS;
   class MSSMSpec;
     //this contains scale and scheme dependent stuff
   class MSSM_DRbarPars : public RunparDer<MssmFS> {
      
      REDO_TYPEDEFS(MssmFS,MSSM_physical)
   private:
      //reference to spectrim class for accessing model object
      MSSMSpec & my_parent;

      static fmap TreeMass_map;
      static fmap1 TreeMass_map1;
      static fmap fill_TreeMass_map();
      static fmap1 fill_TreeMass_map1();
      
      static fmap mass4_map;
      static fmap1 mass4_map1;
      static fmap2 mass4_map2;
      static fmap fill_mass4_map(); 
      static fmap1 fill_mass4_map1();
      static fmap2 fill_mass4_map2(); 
      
      
      static fmap mass3_map;
      static fmap1 mass3_map1;
      static fmap2 mass3_map2;
      static fmap fill_mass3_map(); 
      static fmap1 fill_mass3_map1();
      static fmap2 fill_mass3_map2(); 
      
      static fmap mass2_map;
      static fmap1 mass2_map1;
      static fmap2 mass2_map2;
      static fmap fill_mass2_map(); 
      static fmap1 fill_mass2_map1();
      static fmap2 fill_mass2_map2(); 
      
      static fmap mass_map;
      static fmap1 mass_map1;
      static fmap2 mass_map2;
      static fmap fill_mass_map(); 
      static fmap1 fill_mass_map1();
      static fmap2 fill_mass_map2(); 
      
      static fmap mass0_map;
      static fmap1 mass0_map1;
      static fmap2 mass0_map2;
      static fmap fill_mass0_map(); 
      static fmap1 fill_mass0_map1();
      static fmap2 fill_mass0_map2(); 
      
      fmap& get_mass4_map() const; 
      fmap1& get_mass4_map1() const;
      fmap2& get_mass4_map2() const;
      
      fmap& get_mass3_map() const; 
      fmap1& get_mass3_map1() const;
      fmap2& get_mass3_map2() const;
         
      fmap& get_mass2_map() const; 
      fmap1& get_mass2_map1() const;
      fmap2& get_mass2_map2() const;
      
      fmap& get_mass_map() const; 
      fmap1& get_mass_map1() const;
      fmap2& get_mass_map2() const;
      
      fmap& get_mass0_map() const; 
      fmap1& get_mass0_map1() const;
      fmap2& get_mass0_map2() const;

   public:
      // MSSM_DRbarPars(Spec<MssmFS,MSSM_physical> & x) : my_parent(x) {}
      MSSM_DRbarPars(MSSMSpec & x) : my_parent(x) {}
      
      virtual void RunToScale(double scale);
      virtual double GetScale() const;
      virtual void SetScale(double scale);
      //these are alternative getters taht will be removed eventually.
      virtual double get_tree_MassEigenstate(std::string) const;
      virtual double get_tree_MassEigenstate(std::string, int) const;
      virtual double get_tree_MassEigenstate(std::string, int, int) const;
      virtual double get_tree_Mixing_angle(std::string) const;
      virtual double get_tree_Mixing_element(std::string, int, int) const;
      virtual double get_mass4_par(std::string) const;
      virtual double get_mass4_par(std::string, int) const;
      virtual double get_mass4_par(std::string, int, int) const;
      virtual double get_mass3_par(std::string) const;
      virtual double get_mass3_par(std::string, int) const;
      virtual double get_mass3_par(std::string, int, int) const;
      virtual double get_mass2_par(std::string) const;
      virtual double get_mass2_par(std::string, int) const;
      virtual double get_mass2_par(std::string, int, int) const;
      virtual double get_mass_par(std::string) const;
      virtual double get_mass_par(std::string, int) const;
      virtual double get_mass_par(std::string, int, int) const;
      virtual double get_dimensionless_par(std::string) const;
      virtual double get_dimensionless_par(std::string, int) const;
      virtual double get_dimensionless_par(std::string, int, int) const;
      
      MssmFS get_bound_spec() const; 
   };
   
   //physical class for accessing physical spectrum
   class MSSM_Phys : public PhysDer<MssmFS,MSSM_physical> {
      REDO_TYPEDEFS(MssmFS,MSSM_physical)
   private:
      //reference to spectrim class for accessing model object
      //Spec<MssmFS,MSSM_physical> & my_parent;
      MSSMSpec & my_parent;
      static fmap PoleMass_map;
      static fmap1 PoleMass_map1;
      static fmap fill_PoleMass_map();
      static fmap1 fill_PoleMass_map1();
      
      fmap& get_PoleMass_map() const;
      fmap1& get_PoleMass_map1() const;
   public:
      //  MSSM_Phys(Spec<MssmFS,MSSM_physical> & x) : my_parent(x) {}
      MSSM_Phys(MSSMSpec & x) : my_parent(x) {}
      virtual double get_MPole(std::string) const;
      virtual double get_MPole(std::string, int) const;
      virtual double get_MPole(std::string, int, int) const;
      virtual double get_Mixing_angle(std::string) const;
      virtual double get_Mixing_element(std::string, int, int) const;
      
      MssmFS get_bound_spec() const; 
   };
    

   class MSSMSpec : public Spec<MssmFS,MSSM_physical> {
      friend class MSSM_DRbarPars;
      friend class MSSM_Phys;
   private:
      flexiblesusy::MSSM<Two_scale> model;
   public:
      /// Internal instances of the derived inner classes
      MSSM_Phys mssm_ph;
      MSSM_DRbarPars mssm_drbar_pars;
      //constructors
      MSSMSpec(MSSM<Two_scale>);
      //Could more constructors to interface with other generators
      //Destructor
      virtual ~MSSMSpec();
        //some model independent stuff
      virtual double get_lsp_mass(int & particle_type, 
                                  int & row, int & col) const;
      virtual int get_numbers_stable_particles() const; 
      //may use something like this to pass error to Gambit
      virtual std::string AccessError(std::string state) const;

   //Need a method to return model since it is private
      MSSM<Two_scale> get_modelobject();
      MssmFS get_bound_spec() const; 
      MSSM_physical get_bound_phys() const; 

};



}

#endif
