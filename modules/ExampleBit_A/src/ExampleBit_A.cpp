//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module ExampleBit_A.
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
///    \date 2012 Nov
///    \date 2013 Jan, Feb, May 
///
///  \author Christoph Weniger
///    \date 2013 Jan 
///
///  *********************************************

#include <string>
#include <iostream>
#include <random>
#include <chrono>
#include <math.h>

#include "gambit_module_headers.hpp"
#include "ExampleBit_A_rollcall.hpp"


namespace Gambit
{

  namespace ExampleBit_A
  {

    // Some local module codes and declarations
    double count = 3.5;
    int accumulatedCounts = 0;
    std::uniform_real_distribution<double> random_0to5(0.0, 5.0);
    unsigned newseed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 twistor(newseed);
    double some_other_function(int &input)
    {
      std::cout << "  This is some_other_function, invoked with argument " << input << std::endl;
      return input * 2.0;
    }


    // Initialization routine
    void initialize ()
    {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "***       Initializing ExampleBit_A      ***" << std::endl;
      std::cout << "********************************************" << std::endl;
    }


    // Module functions
    void nevents_dbl  (double &result)    { result = count++; }
    void nevents_int  (int    &result)    { result = (int) (*SafePointers::nevents_int::Dep::nevents); }
    void nevents_like (double &result)    { result = 2.0 * (*SafePointers::nevents_like::Dep::eventAccumulation); }
    void identity     (str    &result)    { result = "turkion"; }
    void function_pointer_retriever( double(*&result)(int&) )
    {
      //Two ways to try this: a pointer to a fortran function that has been backended (and takes an int as an input by reference):
      result = GET_BE_POINTER(function_pointer_retriever::externalFunction, int&);
      //or a pointer to a local C++ funtion
      //result = &some_other_function;

      //int myarg = 15;
      //double myres = GET_BE_RESULT(function_pointer_retriever::externalFunction, myarg);
      //cout << "My result is: " << myres << endl; 

    }

    // Example of interacting with models
    void damu (double &result)
    {
      using namespace SafePointers::damu;
      //Old way (still works, but no longer the canonical method):
      // double p1 = Model::test_parent_I->getValue("p1");
      // Model::test_parent_I->print();
      //and so on...     
      //The reason I made the ModelParameters object still
      //available in SafePointers::<functionname>::Model::<modelname>
      //is that the authors of module functions may want to
      //do something more advanced with it than just read off the
      //parameter values.

      std::cout << "In ExampleBit_A, function damu" << std::endl;
      std::cout << "  Printing parameter values:" << std::endl;
      std::cout << "p1: " << *Param["p1"] << std::endl;
      std::cout << "p2: " << *Param["p2"] << std::endl;
      std::cout << "p3: " << *Param["p3"] << std::endl;
    }
    
    // Helper function: not wrapped in rollcall header
    // (un-normalised gaussian log-likelihood)
    double logf (double x, double mu, double sig)
      {
        return pow(x-mu, 2) / (2*pow(sig, 2));
      }
      
    // Likelihood function for fitting the population parameters of a
    // normal distribution (with hard-coded "observations")
    void normaldist_loglike (double &result)
    {
      using namespace SafePointers::normaldist_loglike;      

      // Say we have a sample of 20 drawn from a normal distribution with
      // parameters muTrue and sigmaTrue. Let the sample mean and standard
      // deviation be as follows (this is our data):
      double N = 20;
      double samples [] = { 
        21.32034213,  20.39713359,  19.27957134,  19.81839231,
        20.89474358,  20.11058756,  22.38214557,  21.41479798,
        23.49896999,  17.55991187,  24.9921142 ,  23.90166585,
        20.97913273,  18.59180551,  23.49038072,  19.08201714,
        21.19538797,  16.42544039,  18.93568891,  22.40925288 
        };
    
      double loglTotal;
      
      // The loglikelihood value for the hypothesised parameters is then:
      for (int i=0; i <= N; ++i)
      {
        //std::cout<<samples[i]<<*Param["mu"]<<*Param["sigma"]<<std::endl;
        loglTotal += logf(samples[i], *Param["mu"], *Param["sigma"]);
      }
      
      result = loglTotal;
    }  

    // Some example functions for using loops within the dependency structure 

    // Run a fake 'event loop' 
    void eventLoopManager()
    {
      using namespace SafePointers::eventLoopManager;
      unsigned int nEvents = 20;         // Number of times to run the loop
      for(unsigned long i = 1; i <= nEvents; i++)
      {
        cout << "This is iteration " << i << " of " << nEvents << " being run by eventLoopManager." << endl;
        Loop::executeIteration(i); // This is actually a (member) function pointer, so *Loop::executeIteration(i) works fine too.
      }
    }

    // Produces a random floating-point 'event count' between 0 and 5.
    void exampleEventGen(double &result)
    {
      using namespace SafePointers::exampleEventGen;
      if (*Loop::iteration == 0) // In the first iteration of a loop
      {
        newseed = std::chrono::system_clock::now().time_since_epoch().count();
        twistor.seed(newseed);   // Re-seed the random number generator
      }
      result = random_0to5(twistor);  // Generate and return the random number
      cout<<"  Running exampleEventGen in iteration "<<*Loop::iteration<<endl;
    }

    // Rounds an event count to the nearest integer
    void exampleCut(int &result)
    {
      using namespace SafePointers::exampleCut;
      result = (int) *Dep::event;
      cout<<"  Running exampleCut in iteration "<<*Loop::iteration<<endl;
    }

    void eventAccumulator(int &result)
    {
      // Adds an integral event count to a total number of accumulated events.
      using namespace SafePointers::eventAccumulator;
      if (*Loop::iteration == 0) // In the first iteration of a loop
      {
        accumulatedCounts = 0;   // Zero the total accumulated counts
      }
      accumulatedCounts += *Dep::event;  // Add the latest event count to the total
      result = accumulatedCounts;        // Return the current total
      cout<<"  Running eventAccumulator in iteration "<<*Loop::iteration<<endl;
    }

  }

}
