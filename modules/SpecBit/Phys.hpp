//Abstract classes for accessing general spectrum information.
#ifndef PHYS_H
#define PHYS_H

namespace scaledep {
   //abstract class for accessing running parameters calculated by spectrum
   // generator
   class RunningPars {
   public:
      //run object to a particular scale
      virtual void RunToScale(double scale) = 0;
      //returns the renormalisation scale of parameters
      virtual double GetScale() const = 0;
      //Sets the renormalisation scale of parameters 
      //somewhat dangerous to allow this but may be needed
      virtual void SetScale(double scale) = 0;
      //return data member matching string
      virtual double get_tree_MassEigenstate(std::string) const = 0;
      virtual double get_tree_MassEigenstate(std::string, int) const = 0;
      virtual double get_tree_MassEigenstate(std::string, int, int) const = 0;
      virtual double get_tree_Mixing_angle(std::string) const = 0;
      virtual double get_tree_Mixing_element(std::string, int, int) const = 0;

      virtual double get_mass4_parameter(std::string) const = 0;
      virtual double get_mass4_parameter(std::string, int) const = 0;
      virtual double get_mass4_parameter(std::string, int, int) const = 0;
      virtual double get_mass3_parameter(std::string) const = 0;
      virtual double get_mass3_parameter(std::string, int) const = 0;
      virtual double get_mass3_parameter(std::string, int, int) const = 0;
      virtual double get_mass2_par(std::string) const = 0;
      virtual double get_mass2_par(std::string, int) const = 0;
      virtual double get_mass2_par(std::string, int, int) const = 0;
      virtual double get_mass_parameter(std::string) const = 0;
      virtual double get_mass_parameter(std::string, int) const = 0;
      virtual double get_mass_parameter(std::string, int, int) const = 0;
      virtual double get_dimensionless_parameter(std::string) const = 0;
      virtual double get_dimensionless_parameter(std::string, int) const = 0;
      virtual double get_dimensionless_parameter(std::string, int, int) const = 0;
   
   //alternative getter using map
      virtual double get_mass2_parameter(std::string) const = 0;
      virtual double get_mass2_parameter(std::string, int i) const = 0;
      virtual double get_mass2_parameter(std::string, int i, int j) const = 0;
      
   };
      
}//namespace ScaleDep

// abstract class for accessing physical masses and mixings of model
class Phys {
public:
   //this get uses dumbest possible approach of if-else statements
   virtual double get_Pole_Mass(std::string) const = 0;
   virtual double get_Pole_Mass(std::string, int) const = 0;
   virtual double get_Pole_Mass(std::string, int, int) const = 0;
   virtual double get_Mixing_angle(std::string) const = 0;
   virtual double get_Mixing_element(std::string, int, int) const = 0;
};
   

#endif
