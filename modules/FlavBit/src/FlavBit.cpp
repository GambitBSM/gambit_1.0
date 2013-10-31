//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module FlavBit
///
///  Put your functions in files like this
///  if you wish to add observables or likelihoods
///  to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Nazila Mahmoudi
///          (mahmoudi@in2p3.fr)
///  \date 2013 Oct
///
///  *********************************************

#include "gambit_module_headers.hpp"
#include "FlavBit_rollcall.hpp"

namespace Gambit
{

  namespace FlavBit
  {
  
    void initialize () 
    {
      cout << endl;
      cout << "********************************************" << endl;
      cout << "***       Initializing FlavBit      ***" << endl;
      cout << "********************************************" << endl;
    }

    // Module functions
    void SI_bsgamma(double &result)          
    {

      char name[50];
      //double x=1.;
      
      sprintf(name,"example.lha");

      printf("test FlavBit\n");
      //printf("name=%s\n",name);
       
      /*cout << "My backend requirement of bsgamma_calculator has been filled by " << 
      GET_BE_FUNCNAME(SI_bsgamma::bsgamma_calculator) << " from " <<
      GET_BE_PACKAGE(SI_bsgamma::bsgamma_calculator) << ", v" << 
      GET_BE_VERSION(SI_bsgamma::bsgamma_calculator) << "." << endl;
      cout << "Its value is: ";*/

      //printf("%.5e\n",GET_BE_RESULT(SI_bsgamma::Li2, byVal(x)));
     
      //printf("%d\n",GET_BE_RESULT(SI_bsgamma::test_file, byVal(name)));
     
      //printf("%d\n",GET_BE_RESULT(SI_bsgamma::test_slha, byVal(name)));
      
      result = GET_BE_RESULT(SI_bsgamma::bsgamma_calculator, byVal(name));
      
      printf("BR(b->s gamma)=%.3e\n",result);

    }
    
  }

}

      //Master plan for making parameter values available (define ModelA as the model being scanned):
      //1.  Each module function gets assigned implicit conditional dependencies by the VALID_MODEL() macro, on modelParameters_{X,Y,...}, where X, Y and ... are the models declared as VALID_MODELs.  (Pat)
      //2.  The dependency resolver uses the model congruency operation to poll all candidate functions for compatibility with modelA, by testing isCongruent(modelA, X), isCongruent(modelA, Y), etc.  (Ben to write congruency function, Christoph to use it in dependency resolver.)
      //3.  The dependency resolver activates the relevant dependencies upon the modelParameters_{X,Y,...} capabilities according to what model is being scanned.  This means that every candidate function that has as a VALID_MODEL either ModelA or one of its ancestor, will have exactly one dependency on modelParameters_something activated, corresponding to the specific ancestor of ModelA that the function has declared as VALID.  (Christoph)
      //4.  ModelParameters_modelA dependencies are automatically filled by a functor created for this pupose from the outset.  This is the single-functor equivalnet of of the alpha nodes. (Christoph I guess?)
      //5.  The dependency resolver fills other modelParameters_ancestors capabilities using interpret_as_parent functions of the models down the hierarchy from the one required, until modelA is reached. (Ben to write to write the model functions, Christoph to use them.)
      //6.  Macros automatically create additional helper functors (alpha nodes per Christoph's terminology) and pointers to the actual parameter values in the dependent modelParameters functors at init.  The pointers get placed in Gambit::Module::function_name::parameter_name and are then available for use from within module functions.  The pointers are not bare pointers, but instances of the new GAMBIT-issue safe pointer, which foils attempts to use it when it is NULL or to use it to write to the address it points to.  (Pat)
      //7.  Macros also also automatically create safe pointers to dependency values (Pat; this is implemented already).


