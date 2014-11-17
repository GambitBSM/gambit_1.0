#ifndef MSSMSPEC_H
#define MSSMSPEC_H

#include <memory>
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
      //reference to spectrum class for accessing model object
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
      //flexiblesusy::MSSM<Two_scale> model;
   public:
      flexiblesusy::MSSM<Two_scale> model;

      /// Internal instances of the derived inner classes
      MSSM_Phys mssm_ph;
      MSSM_DRbarPars mssm_drbar_pars;
      //constructors
      MSSMSpec();
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
      ///TODO: Ben: What are these for? They seem to just return copies
      // of the internal objects, which doesn't seem very useful. I have
      // made the model object public for now so that I can manipulate it
      // inside gambit, but perhaps these functions should return pointers
      // or references to the internal object instead? Though in that case
      // the model object might as well be public I think.
      // UPDATE: Although do we need the model object ever? It doesn't
      // seem to be needed when running the spectrum generator, because
      // we run it seperately and then copy the information into the Spectrum
      // object.
      MSSM<Two_scale> get_modelobject();
      MssmFS get_bound_spec() const; 
      MSSM_physical get_bound_phys() const; 

      // Write spectrum information in slha format (not including input parameters etc.)
      virtual void dump2slha(const std::string&) const;

      /// Copy low energy spectrum information from another model object
      // Should work from any flexiblesusy model object with the same particle content as the MSSM
      template<class MSSMlike>
      void get_lowe_data_from(MSSMlike othermodel)
      {
        // Maybe we can copy the pole masses etc directly, but since I am not sure how to do that, for now I am just copying the soft parameters and recomputing the pole masses. Will have to chat to Peter about this.
        // Update: Yeah Peter says we definitely should copy the pole and drbar masses directly :).

        // Actually, we may want to instead write out the data from one object into SLHAea, and then read it into the other. That will let us copy data out of (say) softsusy objects into flexiblesusy ones, and vice-versa, more easily. Of course that will be restricted to the SLHA compatible models... Perhaps we can overload this function to deal with various inputs.
        model = othermodel;

        model.set_scale( othermodel.get_scale() );
        model.set_Yu( othermodel.get_Yu() );
        model.set_Yd( othermodel.get_Yd() );
        model.set_Ye( othermodel.get_Ye() );
        model.set_Mu( othermodel.get_Mu() );
        model.set_g1( othermodel.get_g1() );
        model.set_g2( othermodel.get_g2() );
        model.set_g3( othermodel.get_g3() );
        model.set_vd( othermodel.get_vd() );
        model.set_vu( othermodel.get_vu() );
        model.set_TYu( othermodel.get_TYu() );
        model.set_TYd( othermodel.get_TYd() );
        model.set_TYe( othermodel.get_TYe() );
        model.set_BMu( othermodel.get_BMu() );
        model.set_mq2( othermodel.get_mq2() );
        model.set_ml2( othermodel.get_ml2() );
        model.set_mHd2( othermodel.get_mHd2() );
        model.set_mHu2( othermodel.get_mHu2() );
        model.set_md2( othermodel.get_md2() );
        model.set_mu2( othermodel.get_mu2() );
        model.set_me2( othermodel.get_me2() );
        model.set_MassB( othermodel.get_MassB() );
        model.set_MassWB( othermodel.get_MassWB() );
        model.set_MassG( othermodel.get_MassG() );

        model.calculate_DRbar_parameters(); 
        model.calculate_pole_masses();

        return;
      }
};



}

#endif
