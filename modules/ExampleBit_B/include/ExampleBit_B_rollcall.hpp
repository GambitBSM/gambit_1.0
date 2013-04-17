//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Rollcall header for module ExampleBit_B
//
//  Compile-time registration of available obser-
//  vables and likelihoods, as well as their
//  dependencies.
//
//  Add to this if you want to add an observable
//  or likelihood to this module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  2012 Nov 15++ 
//  2013 Jan 18, Feb 04, April
//
//  *********************************************

#ifndef __ExampleBit_B_rollcall_hpp__
#define __ExampleBit_B_rollcall_hpp__

#include <observable.hpp>

#define MODULE ExampleBit_B
START_MODULE


  #define CAPABILITY xsection               // Observable: cross-section for some hypothetical process
  START_CAPABILITY

    #define FUNCTION xsection               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents_postcuts       // Observable: number of events for process after cuts 
  START_CAPABILITY
  //LATEX_LABEL($n_{\rm events, cut}$)      // Specify the LaTeX label of this quantity

    #define FUNCTION nevents_postcuts       // Name of specific function providing the observable
    START_FUNCTION(int)                     // Function calculates an integer variable                  
    DEPENDENCY(nevents, double)             // Dependency: post-cut events needs pre-cut events

      #define BACKEND_REQ cut_param         // A quantity cut_param that must be obtained from an external (backend) code,
      START_BACKEND_REQ(double)             // with type double.  Only one type is permitted per BACKEND_REQ per FUNCTION.

      //BACKEND_OPTION(LibFirst, 1.2)       // Specify that backend LibFirst v1.2 is permitted to provide the cut_param
      BACKEND_OPTION(LibFirst)              // Omit version info to specify that any version of LibFirst can provide the cut_param.

      BACKEND_CONDITIONAL_DEP(LibFirst, 1.2, dog, std::string) // Add an additional dependency only if cut_param comes from LibFirst v1.2    
      //BACKEND_CONDITIONAL_DEP(LibFirst, dog, std::string)    // Add an additional dependency if cut_param comes from any LibFirst
      //BACKEND_CONDITIONAL_DEP(LibSecond, dog, std::string)     // Add an additional dependency if cut_param comes from any LibSecond

      BACKEND_OPTION(LibThird)              // Specify that any version of LibThird is also a viable provider of cut_param
                                            // If you omit BACKEND_OPTION statements entirely, all backends are considered viable.
      #undef BACKEND_REQ

    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY dog
  START_CAPABILITY

    #define FUNCTION authors_dogs_name      // Observable: name of the author of ExampleBitB's dog    
    START_FUNCTION(std::string)                
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents
  START_CAPABILITY

    #define FUNCTION nevents                // Observable: num. events, defined as integer to confuse the dep resolver
    START_FUNCTION(int)                     // Function calculates an integer variable
    #undef FUNCTION

  #undef CAPABILITY


#undef MODULE


class base 
{

  public:

  double rabbitinternal;

  base() {rabbitinternal=3.0;}
 
  virtual void operator () () { std::cout<<rabbitinternal<<std::endl; }

};

template<typename TYPE>
class intermediate : public base
{
  public:
};

template<typename TYPE, typename... ARGS>
class derived : public intermediate<TYPE>
{
  public:

  derived(double d) {this->rabbitinternal=d;}

  void setrabbit (double r) {this->rabbitinternal = r;}

  virtual void operator () (ARGS... args) { std::cout<<"internal rabbit: "<<this->rabbitinternal<<std::endl; }

};

namespace GAMBIT 
{

  #ifdef IN_CORE
    bool safe_mode = true;
  #else
    extern bool safe_mode;
  #endif
  
  namespace ExampleBit_B
  {
    namespace Backend_Reqs 
    {
      namespace nevents_postcuts
      {

        #ifdef IN_CORE
          derived<void, double> myderived(2.2);
          derived<void, int, int> myderived2(4.7);
          base* baseptr;

        void set_ptr( base &inobj )
        {
          baseptr = &inobj; 
        }

        #else
          extern derived<void, double> myderived;
          extern derived<void, int, int> myderived2;
          extern base* baseptr;

        template<typename... ARGS>
        void give_result(ARGS ...args)
        { 
          typedef derived<void, ARGS...> be_functor;
          be_functor *myptr;
          if (GAMBIT::safe_mode) 
          {
            std::cout<<"in dynamic"<<std::endl;
            myptr = dynamic_cast<be_functor*>(baseptr);
          }
          else
          {
            std::cout<<"in static"<<std::endl;
            myptr = static_cast<be_functor*>(baseptr);
          }
          (*myptr)(args...);
        }  

        #endif
             
      }
    }
  }
}


#endif /* defined(__ExampleBit_B_rollcall_hpp__) */

