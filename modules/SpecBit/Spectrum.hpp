//Abstract class for accessing general spectrum information.

#ifndef SPECTRUM_H
#define SPECTRUM_H

class Spectrum {
public:
   Spectrum(){};
   
   // returns the lightest stable particle (lsp) mass 
   //  gives 3 integers to specify the state 
   // for most general case of a particle type with mass matrix 
   // row and col set to -1 when not needed 
   //(row only is used for vector)
   //particle_type = 0 (neutralino), 1(Sneutrino), 2(up squark), 
   //3(down squarks), 4(charged slepton), 5(Chargino), 6(gluino)
   // Add more for 
   virtual double get_lsp_mass(int & particle_type, int & row, int & col) const = 0;
   //There may be more than one *new* stable particle
   // this method will tell you how many.
   //If more than zero you probbaly *need* to know what model
   // you are working on, so we don't give all stable particles
   virtual int get_numbers_stable_particles() const = 0;
   //run object to a particular scale
   virtual void RunToScale(double scale) = 0;
   //returns the renormalisation scale of parameters
   virtual double GetScale() const = 0;
   //Sets the renormalisation scale of parameters 
   //somewhat dangerous to allow this but may be needed
   virtual void SetScale(double scale) = 0;

   //return data member matching string
   //I'm splitting this up into types for just now
   //may reduce errors from typing when parameters and
   //pole masses have similar names etc
   
   //this set use dumbest possible approach of if-else statements
   virtual double get_Pole_Mass(std::string) const = 0;
   virtual double get_Pole_Mass(std::string, int) const = 0;
   virtual double get_Pole_Mass(std::string, int, int) const = 0;
   virtual double get_DRbar_MassEigenstate(std::string) const = 0;
   virtual double get_DRbar_MassEigenstate(std::string, int) const = 0;
   virtual double get_DRbar_MassEigenstate(std::string, int, int) const = 0;
   virtual double get_Mixing_angle(std::string) const = 0;
   virtual double get_Mixing_element(std::string, int, int) const = 0;
   virtual double get_mass2_parameter(std::string) const = 0;
   virtual double get_mass2_parameter(std::string, int) const = 0;
   virtual double get_mass2_parameter(std::string, int, int) const = 0;
   virtual double get_mass_parameter(std::string) const = 0;
   virtual double get_mass_parameter(std::string, int) const = 0;
   virtual double get_mass_parameter(std::string, int, int) const = 0;
   virtual double get_dimensionless_parameter(std::string) const = 0;
   virtual double get_dimensionless_parameter(std::string, int) const = 0;
   virtual double get_dimensionless_parameter(std::string, int, int) const = 0;
   
   //alternative getter using map
   virtual double get_mass2_par(std::string) const = 0;
};
#endif

//Dummy versions to be added as place holders in unfinished models:

// double CLASSNAME::get_lsp_mass() const {
//       std::cout << "Error: Sorry I don't know the LSP mass yet" << std::endl;
//       return 6666666666666.6666666666666;
//    };

//    int CLASSNAME::get_numbers_stable_particles() const {
//       std::cout << "Error: Sorry I have not learned to count yet" << std::endl; 
//       return 666;
//    }
//     void CLASSNAME::RunToScale(double scale){
//        std::cout << "Error: Sorry I have not learned to even crawl yet" << std::endl; 
//    }
//    double CLASSNAME::GetScale() const {
//       
//       std::cout << "Error: Sorry I have not read Peskin and Schroeder yet" << std::endl; 
//        return 6666666666666.6666666666666;
//    }
//      void CLASSNAME::SetScale(double scale){
//        std::cout << "Error: Sorry I have not read pesking and schroder yet" << std::endl;
//    }


//     double CLASSNAME::get_Pole_Mass(string) const {
//        std::cout << "Error: Sorry I know nothing" << std::endl;
//        return 6666666666666.6666666666666;
//    }
//     double CLASSNAME::get_Mixing(string) const {
//        std::cout << "Error: Sorry I know nothing" << std::endl;
//        return 6666666666666.6666666666666;
//    }
//     double CLASSNAME::get_mass2_parameter(string) const {
//        std::cout << "Error: Sorry I know nothing" << std::endl;
//        return 6666666666666.6666666666666;
//    }
//     double CLASSNAME::get_mass_parameter(string) const {
//        std::cout << "Error: Sorry I know nothing" << std::endl;
//        return 6666666666666.6666666666666;
//    }
//     double CLASSNAME::get_dimensionless_parameter(string) const {
//        std::cout << "Error: Sorry I know nothing" << std::endl;
//        return 6666666666666.6666666666666;
//    }

