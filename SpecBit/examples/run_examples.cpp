#include "SpecBit_examples.hpp"
using namespace Gambit;
using namespace flexiblesusy;


int main(int argc, char* argv[])
{
   // Create spectrum for testing
   CMSSM<Two_scale> FS_model; //start with empty flexiblesusy object
   setpars(FS_model); //fill with some parameters
   FS_model.calculate_DRbar_parameters(); //calculated DRbar masses 
   FS_model.calculate_pole_masses();//now calculate pole masses
    
   //Create a model with SLHA conventions (and pole mass getters)
   CMSSM_slha<Two_scale> FS_model_slha(FS_model);

   // Create Spectrum object to wrap flexiblesusy object
   MSSMSpec<CMSSM_slha<Two_scale>> mssm(FS_model_slha);
   
   Spectrum* spec = &mssm; //Convert pointer to Spectrum type

   mssm_manipulate(mssm);  //function can manipulate knowing the model
   
   spec_manipulate(spec); //function can manipulate without knowing model.
   
   SM_checks(spec); // Run some tests on standard model parameters 


return 0;
}
