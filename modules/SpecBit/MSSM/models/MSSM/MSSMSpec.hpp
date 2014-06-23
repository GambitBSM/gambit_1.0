#ifndef MSSMSPEC_H
#define MSSMSPEC_H

#include "MSSM_two_scale_model.hpp"
#include "../../../Spectrum.hpp"
#include "two_scale_model.hpp"
#include "MSSM_model.hpp"
#include "config.h"

namespace flexiblesusy {

class Two_scale;
typedef MSSM<Two_scale> MssmFS;

   class MSSMSpec : public Spec<MssmFS> {
      REDO_TYPEDEFS(MssmFS)
private:
   flexiblesusy::MSSM<Two_scale> model;
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
      
      fmap& get_mass3_map() const; 
      fmap1& get_mass3_map1() const;
      fmap2& get_mass3_map2() const;

      fmap& get_mass2_map() const; 
      fmap1& get_mass2_map1() const;
      fmap2& get_mass2_map2() const;

      fmap& get_mass_map() const; 
      fmap1& get_mass_map1() const;
      fmap2& get_mass_map2() const;
      
 
      MssmFS get_bound_spec() const; 
public:
   //constructors
   MSSMSpec(MSSM<Two_scale>);
   //Could more constructors to interface with other generators
   //Destructor
   virtual ~MSSMSpec();
   //access physical spectrum
   virtual double get_Pole_Mass(std::string) const;
   virtual double get_Pole_Mass(std::string, int) const;
   virtual double get_Pole_Mass(std::string, int, int) const;
   virtual double get_Mixing_angle(std::string) const;
   virtual double get_Mixing_element(std::string, int, int) const;
   //some model independent stuff
   virtual double get_lsp_mass(int & particle_type, int & row, int & col) const;
   virtual int get_numbers_stable_particles() const; 
   //may use something like this to pass error to Gambit
   virtual std::string AccessError(std::string state) const;
 
   //this is scale and scheme dependent stuff
   //will be seperated some how so dependence is clear
   virtual void RunToScale(double scale);
   virtual double GetScale() const;
   virtual void SetScale(double scale);
   virtual double get_tree_MassEigenstate(std::string) const;
   virtual double get_tree_MassEigenstate(std::string, int) const;
   virtual double get_tree_MassEigenstate(std::string, int, int) const;
   virtual double get_tree_Mixing_angle(std::string) const;
   virtual double get_tree_Mixing_element(std::string, int, int) const;
   virtual double get_mass4_parameter(std::string) const;
   virtual double get_mass4_parameter(std::string, int) const;
   virtual double get_mass4_parameter(std::string, int, int) const;
   virtual double get_mass3_par(std::string) const;
   virtual double get_mass3_par(std::string, int) const;
   virtual double get_mass3_par(std::string, int, int) const;
   virtual double get_mass2_par(std::string) const;
   virtual double get_mass2_par(std::string, int) const;
   virtual double get_mass2_par(std::string, int, int) const;
   virtual double get_mass_par(std::string) const;
   virtual double get_mass_par(std::string, int) const;
   virtual double get_mass_par(std::string, int, int) const;
   virtual double get_dimensionless_parameter(std::string) const;
   virtual double get_dimensionless_parameter(std::string, int) const;
   virtual double get_dimensionless_parameter(std::string, int, int) const;
  
   //map test
      //  virtual double get_mass2_par(std::string) const;
   

   //Need a method to return model since it is private
   MSSM<Two_scale> get_modelobject();

};



}

#endif
