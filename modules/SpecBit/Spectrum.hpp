//Abstract class for accessing general spectrum information.
//Add headers

#ifndef SPECTRUM_H
#define SPECTRUM_H

class Spectrum {
public:
   // returns the sightest stable particle (lsp) mass 
   //in the dervied class this may be a simple getter with 
   //the lsp mass added as a private data member
   // or could be determine the lsp from spectrum.
   virtual double get_lsp_mass() = 0;
   //There may be more than one *new* stable particle
   // this method will tell you how many.
   virtual int get_numbers_stable_particles() = 0;
   //run object to a particular scale
   virtual void RunToScale(double scale) = 0;
   //returns the renormalisation scale of parameters
   virtual double GetScale() = 0;
   //Sets the renormalisation scale of parameters 
   //somewhat dangerous to allow this but may be needed
   virtual void SetScale(double scale) = 0;

   //return data member matching string
   //I'm splitting this up into types fpr just now
   //may reduce errors from typing whene parameters and
   //pole masses have similar names etc
   virtual double get_Pole_Mass(string) = 0;
   virtual double get_Mixing(string) = 0;
   virtual double get_mass2_parameter(string) = 0;
   virtual double get_mass_parameter(string) = 0;
   virtual double get_dimensionless_parameter(string) = 0;

};
#endif
