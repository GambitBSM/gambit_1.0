//Abstract class for accessing general spectrum information.

//Add headers

#indef SPECTRUM_H
#define SPECTRUM_H
class Spectrum {
public:
   // returns the sightest stable particle (lsp) mass 
   //- in the dervied class this may be  a simple getter with 
   //the lsp mass added as a private data member
   // or could be determine the lsp from spectrum.
   virtual double get_lsp_mass();
   //There may be more than one *new* stable particle
   // this method will tell you how many.
   virtual int get_numbers_stable_particles();
   //run object to a particular scale
   virtual void runto(double scale);
   //return data member matching string
   virtual double get_Pole_Mass(string);
   virtual double get_Mixing(string);
   virtual double get_mass2_parameter(string);
   virtual double get_mass_parameter(string);
   virtual double get_dimensionless_parameter(string);

};
#endif
