#ifndef MSSMSPECTRUM_H
#define MSSMSPECTRUM_H

#include "MSSM_two_scale_soft_parameters.hpp"
#include "MSSM_two_scale_model.hpp"
#include "problems.hpp"
#include "MSSM_info.hpp"
#include "MSSM_physical.hpp"
#include "../../../Spectrum.hpp"


namespace flexiblesusy {

class Two_scale;

class MSSMSpectrum : public Spectrum {

private:
   MSSM_soft_parameters mssmsoft; //DRbar parameters
   MSSM_physical phys; //pole masses and mixings
   MSSM_physical DRbar;  // tree masses and mixings
   Problems<MSSM_info::NUMBER_OF_PARTICLES> problems; //can store problems here
public:
   //constructors
   // MSSMSpectrum(MSSM<Two_scale>);
   MSSMSpectrum();
   MSSMSpectrum(MSSM_soft_parameters, MSSM_physical, MSSM_physical, Problems<MSSM_info::NUMBER_OF_PARTICLES> );
   //Could more constructors to interface with other generators
   //Destructor
   virtual ~MSSMSpectrum();
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
   virtual double get_mass3_parameter(std::string) const;
   virtual double get_mass3_parameter(std::string, int) const;
   virtual double get_mass3_parameter(std::string, int, int) const;
   virtual double get_mass2_parameter(std::string) const;
   virtual double get_mass2_parameter(std::string, int) const;
   virtual double get_mass2_parameter(std::string, int, int) const;
   virtual double get_mass_parameter(std::string) const;
   virtual double get_mass_parameter(std::string, int) const;
   virtual double get_mass_parameter(std::string, int, int) const;
   virtual double get_dimensionless_parameter(std::string) const;
   virtual double get_dimensionless_parameter(std::string, int) const;
   virtual double get_dimensionless_parameter(std::string, int, int) const;
  
   //map test
   virtual double get_mass2_par(std::string) const;
  
};

}

#endif
