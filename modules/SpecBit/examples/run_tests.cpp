// This file is not strictly part of Gambit. It is simply a set of test routines
// to make sure the Spectrum class and related classes are working correctly

#include "gambit/SpecBit/SpecBit_externaltests.hpp"
#include "gambit/SpecBit/external_examples.hpp"

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
   std::cout << "This is specbit_tests. Checking Spectrum object contents..." 
             << std::endl;
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
   
   //test if things cahnge after running up and down
   double tol = 1e-6;
   std::cout << "Starting running test..." << std::endl;
   bool pass = running_test(mssm,FS_model_slha,tol);
   if(pass) std::cout << "running test passed."  << std::endl;
   else std::cout << "running test failed."  << std::endl;
   
   Spectrum* spec = &mssm; //Convert pointer to Spectrum type
   pass = running_test(spec,FS_model_slha,tol); 
   if(pass) std::cout << "running test passed."  << std::endl;
   else std::cout << "running test failed."  << std::endl;

  
   return 0;
}
