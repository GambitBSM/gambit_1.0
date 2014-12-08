// This file is not strictly part of Gambit. It is simply a set of test routines
// to make sure the Spectrum class and related classes are working correctly

#include "SpecBit_tests.hpp"

using namespace Gambit;
using namespace SpecBit;
using namespace flexiblesusy;

/// Main GAMBIT program
int main(int argc, char* argv[])
{
   std::cout << "Running Spectrum tests..." << std::endl;

   // Create spectrum for testing
   CMSSM<Two_scale> FS_model; //start with empty flexiblesusy object
  
   setup(FS_model); //fill with some parameters
   FS_model.calculate_DRbar_parameters(); //calculated DRbar masses 
   FS_model.calculate_pole_masses();//now calculate pole masses
   
   //Create a model with SLHA conventions (and pole mass getters)
   CMSSM_slha<Two_scale> FS_model_slha(FS_model);
   
   // Create Spectrum object to wrap flexiblesusy object
   MSSMSpec<CMSSM_slha<Two_scale>> mssm(FS_model_slha);

   // Check contents
   std::cout << "This is specbit_tests. Checking Spectrum object contents..." << std::endl;
   if(TestMssmParGets(mssm, mssm.model)==false){
       std::cout << "TestMssmParGets fail." << std::endl;
       //return 1;
   } 
   else std::cout << "TestMssmParGets passed."  << std::endl;
   if(TestMssmPoleGets(mssm, mssm.model)==false){
      std::cout << "TestMssmPoleGets fail." << std::endl;
      //return 1;
   }
   else std::cout << "TestMssmPoleGets passed."  << std::endl;
   //So now we have a mssm1 model object filled, as it will be
   //stored in Gambit after the spectrum generator has run
   // mssm.mass2_par_mapping(); //call mapping - this needs to be changed.
   
   mssm_manipulate(mssm);  //function can manipulate knowing the model


   Spectrum* spec = &mssm; //Convert pointer to Spectrum type
  
   spec_manipulate(spec); //function can manipulate without knowing model.

   SM_checks(spec); // Run some tests on standard model parameters 

   return 0;
}
