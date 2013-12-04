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
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
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
    // Note that the stuff from <random> isn't actually guaranteed threadsafe, but it will do for an example for now
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
      using namespace SafePointers::function_pointer_retriever;
      //Two ways to try this: a pointer to a fortran function that has been backended (and takes an int as an input by reference):
      result = BEreq::externalFunction.pointer<int&>();
      //or a pointer to a local C++ funtion
      //result = &some_other_function;
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
      unsigned int nEvents = 20;                // Number of times to run the loop

      //There are three things available in loop manager functions from the Loops namespace:
      //  -std::set<int>* Loop::available_threads -- a set of thread indices that you are allowed to use in this function (these are 'GAMBIT thread indices', not necessarily the same
      //                                             as OpenMP thread indices unless you only run a single, non-nested OpenMP thread team, and hand out a GAMBIT index for each thread).
      //  -Loop::executeIteration(int it, std::set<int> thread_indices) -- execute an iteration of the loop this function manages, passing in the iteration no. and a set of 
      //                                                                thread indices that the functions inside the loop are allowed to use to parallise themselves if they want.
      //  -Loop::executeEasyIteration(int it) -- execute an iteration of the loop this function manages, allowing the nested functions to use all threads that this one can.

      //A simple loop example without OpenMP.  Commented out for now.
      //std::set<int> thread_indices;             // Indices of the OpenMP threads permitted to be launched by nested functions
      //thread_indices.insert(0);                 // Pick some random threads to pass down to all the nested functions to use
      //thread_indices.insert(2);                 // Note though that the results of the zero-index thread are the only ones 
      //                                          // accessed after the loop, i.e. this is where the final restults need to be calculated. 
      //for(unsigned long it = 0; it < nEvents; it++)
      //{
      //  cout << "This is iteration " << it+1 << " of " << nEvents << " being run by eventLoopManager." << endl;
      //  Loop::executeIteration(it,thread_indices);   // This is a (member) function pointer, so *Loop::executeIteration(it,[indices]) works fine too.
      //  //Loop::executeEasyIteration(it);            // This version is just equivalent to Loop::executeIteration(it,*Loop::available_threads), using all threads
      //}

      //A simple loop example using OpenMP
      #pragma omp parallel
      {
        std::set<int> thread_indices;
        thread_indices.insert(omp_get_thread_num());
        #pragma omp single 
          Loop::executeIteration(0,thread_indices); //Do the zero iteration separately to allow init.  
        #pragma omp for
        for(unsigned long it = 1; it < nEvents; it++)
        {
          Loop::executeIteration(it,thread_indices);   
        }
      }

    }

    // Produces a random floating-point 'event count' between 0 and 5.
    void exampleEventGen(double &result)
    {
      using namespace SafePointers::exampleEventGen;
      //result = random_0to5(twistor);  // Generate and return the random number
      result = *(Loop::available_threads->begin()); //just take the thread number as the result
      #pragma omp critical (exampleEventGen_print)
      { 
        cout<<"  Running exampleEventGen in iteration "<<*Loop::iteration<<
         " with maximum allowed threads "<<Loop::available_threads->size()<<"."<<endl;
      }
    }

    // Rounds an event count to the nearest integer
    void exampleCut(int &result)
    {
      using namespace SafePointers::exampleCut;
      result = (int) *Dep::event;
      #pragma omp critical (exampleCut_print)
      { 
        cout<<"  Running exampleCut in iteration "<<*Loop::iteration<<endl;
      }
    }

    // Adds an integral event count to a total number of accumulated events.
    void eventAccumulator(int &result)
    {
      //There are two things available in nested functions from the Loops namespace:
      //  -std::set<int>* Loop::available_threads -- a set of thread indices that you are allowed to use in this function.
      //  -int* Loop::iteration -- the iteration number passed down directly by the function managing the loop that this one runs within. 
      //  You can always get at OpenMP functions too (omp_get_thread_num, omp_get_ancestor_thread_num, etc) -- but it is better not to assume
      //  too much about the other functions that might be managing this one, either directly or indirectly.

      using namespace SafePointers::eventAccumulator;
      if (*Loop::iteration == 0) // In the first iteration of a loop
      {
        accumulatedCounts = 0;   // Zero the total accumulated counts
      }
      #pragma omp critical (eventAccumulator_update) // Only let one thread at a time accumulate results
      {
        accumulatedCounts += *Dep::event;  // Add the latest event count to the total
      }
      #pragma omp barrier                  // Forces all threads in the team to submit their results before the total is committed.
      result = accumulatedCounts;          // Return the current total
      #pragma omp critical (eventAccumulator_print)
      { 
        cout<<"  Running eventAccumulator in iteration "<<*Loop::iteration<<endl;
        cout<<"  Retrieved event count: "<<*Dep::event<<endl;
        cout<<"  I have thread index: "<<*(Loop::available_threads->begin());
        cout<<"  Current total counts is: "<<result<<endl;
      }
    }

  }

}
