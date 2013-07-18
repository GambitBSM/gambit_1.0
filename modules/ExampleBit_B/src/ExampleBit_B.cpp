//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module ExampleBit_B
///
///  Put your functions in files like this
///  if you wish to add observables or likelihoods
///  to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2012 Nov 
///  \date 2013 Jan, Feb
///
///  \author Christoph Weniger
///          (christoph.weniger@gmail.com)
///  \date 2013 Jan 
///
///  *********************************************

#include <ExampleBit_B_rollcall.hpp>

namespace GAMBIT
{

  namespace ExampleBit_B
  {
  
    // Initialization routine
    void initialize () 
    {
      cout << endl;
      cout << "********************************************" << endl;
      cout << "***       Initializing ExampleBit_B      ***" << endl;
      cout << "********************************************" << endl;
    }

    // Module functions
    void xsection         (double &result) { result = 5.e10; }
    void exampleCharge    (int    &result) { result = 1; }
    void identity         (str    &result) { result = "rabbiton"; }
    void nevents          (int    &result) { result = 2; }
    void nevents_postcuts (int    &result)          
    {
      using namespace SafePointers::nevents_postcuts;
 
      cout << endl << "My dependency on nevents has been filled by " << 
       GET_DEP_FUNCNAME(nevents_postcuts::nevents) << " from " <<
       GET_DEP_MODULE(nevents_postcuts::nevents) << "." << endl;
      cout << "Its value is: ";
      double nevents_local = GET_DEP(nevents_postcuts::nevents);
      cout << nevents_local << endl << endl;
      cout << "Just to reiterate, its value is: ";
      safe_ptr<double> pnevents_local = GET_DEP_PTR(nevents_postcuts::nevents);
      cout << *pnevents_local << endl << endl;
      cout << "Seriously, the value is: " << *Dep::nevents << endl;

      //The following will not work until the dependency resolver is able to handle conditional deps.      
      //cout << "Now let's see what happens when we try to retrieve a conditional dependency." << endl;
      //str id = GET_DEP(nevents_postcuts::id);
      //cout << "The id is: " << id << endl;
      //cout << "...and again via the automagic safe pointer: " << endl;
      //cout << *Dep::id << endl;

      cout << "My backend requirement of awesomeness has been filled by " << 
       GET_BE_FUNCNAME(nevents_postcuts::awesomeness) << " from " <<
       GET_BE_PACKAGE(nevents_postcuts::awesomeness) << ", v" << 
       GET_BE_VERSION(nevents_postcuts::awesomeness) << "." << endl;
      cout << "Its value is: ";
      double doall_local = GET_BE_RESULT(nevents_postcuts::awesomeness, 2);
      cout << doall_local << endl << endl;    
      int stuff = 2;
      cout << "Again, its value is: ";
      double doall_local2 = GET_BE_RESULT(nevents_postcuts::awesomeness, byVal(stuff));
      cout << doall_local2 << endl << endl;    

      result = (int) (*Dep::nevents + doall_local);

      //Example showing pass by ref vs pass by val
      double inputvar1 = 0;
      double inputvar2 = 0;
      double inputvar3 = 2.5;
      cout << "Now trying backend functions with parameters passed by reference. First returns double." << endl;
      double refex1 = GET_BE_RESULT(nevents_postcuts::refex, inputvar1);
      cout << "Next returns void, takes parameters both by ref and by val." << endl;
      GET_BE_RESULT(nevents_postcuts::refex2, inputvar2, byVal(inputvar3));
      cout << "Results of backend functions with parameters passed byRef: " 
           << refex1 << ", " << inputvar1 << ", " << inputvar2 << endl;

      //Example showing passing of function pointer to an external Fortran (or other language) routine
      int arg2 = 15;
      GET_BE_RESULT(nevents_postcuts::runMe, byVal(*Dep::function_pointer), arg2);

    }

  }

}

      //Master plan for making parameter values available (define ModelA as the model being scanned):
      //1.  Each module function gets assigned implicit conditional dependencies by the VALID_MODEL() macro, on modelParameters_{X,Y,...}, where X, Y and ... are the models declared as VALID_MODELs.  (Pat)
      //2.  The dependency resolver uses the model congruency operation to poll all candidate functions for compatibility with modelA, by testing isCongruent(modelA, X), isCongruent(modelA, Y), etc.  (Ben to write congruency function, Christoph to use it in dependency resolver.)
      //3.  The dependency resolver activates the relevant dependencies upon the modelParameters_{X,Y,...} capabilities according to what model is being scanned.  This means that every candidate function that has as a VALID_MODEL either ModelA or one of its ancestor, will have exactly one dependency on modelParameters_something activated, corresponding to the specific ancestor of ModelA that the function has declared as VALID.  (Christoph)
      //4.  ModelParameters_modelA dependencies are automatically filled by a functor created for this pupose from the outset.  This is the single-functor equivalnet of of the alpha nodes. (Christoph I guess?)
      //5.  The dependency resolver fills other modelParameters_ancestors capabilities using interpret_as_parent functions of the models down the hierarchy from the one required, until modelA is reached. (Ben to write to write the model functions, Christoph to use them.)
      //6.  Macros automatically create additional helper functors (alpha nodes per Christoph's terminology) and pointers to the actual parameter values in the dependent modelParameters functors at init.  The pointers get placed in GAMBIT::Module::function_name::parameter_name and are then available for use from within module functions.  The pointers are not bare pointers, but instances of the new GAMBIT-issue safe pointer, which foils attempts to use it when it is NULL or to use it to write to the address it points to.  (Pat)
      //7.  Macros also also automatically create safe pointers to dependency values (Pat; this is implemented already).


