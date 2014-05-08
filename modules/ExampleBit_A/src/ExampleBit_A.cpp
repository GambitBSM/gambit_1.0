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
///    \date 2013 Jan, Feb, May, Dec 
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
#include <cmath>
#include <functional>

#include "gambit_module_headers.hpp"
#include "ExampleBit_A_rollcall.hpp"

namespace Gambit
{

  namespace ExampleBit_A
  {
    using namespace LogTags;

    /// Local module declarations
    /// Note that the stuff from <random> isn't actually guaranteed threadsafe, but it will do for an example.
    /// @{
    double count = 3.5;
    int accumulatedCounts = 0;
    std::uniform_real_distribution<double> random_0to5(0.0, 5.0);
    unsigned newseed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 twistor(newseed);
    /// @}

    /// \name Helper functions 
    /// Not wrapped in rollcall header.
    /// @{

    /// Pointer to some function
    double(*callback_pointer)(int&, const double&);

    /// Some other example function
    double some_other_function(int &input)
    {
      ostringstream ss;      
      ss << "  This is some_other_function, invoked with argument " << input;
      logger().send(ss.str(),info);
      double offset = 2.0;
      return callback_pointer(input, offset);
    }

    /// Un-normalised gaussian log-likelihood
    double logf (double x, double mu, double sig)
    {
      return -0.5*log(sig*sig) -0.5*pow(x-mu,2)/(sig*sig);
    }

    /// @}

    //************************************************************

    /// Initialisation function, called anew for each new model point before all other module functions are called.
    void PointInit_Default()
    {
      logger().send("Initialising ExampleBit_A for current point.",info);
    }

    //************************************************************

    /// \name Module functions
    /// @{
    void nevents_dbl  (double &result)    { result = count++; cout << "My xsection dep: " << *Pipes::nevents_dbl::Dep::xsection << endl;}
    void nevents_int  (int    &result)    { result = (int) (*Pipes::nevents_int::Dep::nevents); }
    void nevents_like (double &result)    { result = 2.0 * (*Pipes::nevents_like::Dep::eventAccumulation); }
    void identity     (str    &result)    { result = "turkion"; }
    void function_pointer_retriever( double(*&result)(int&) )
    {
      using namespace Pipes::function_pointer_retriever;
      //Two ways to return this result, depending on how the group dependency BEgroup::external_funcs is fulfilled: 
      if (*BEgroup::external_funcs == "externalFunction") 
      {
        //1. A pointer to a fortran function that has been backended (and takes an int as an input by reference):
        result = BEreq::externalFunction.pointer();
      }
      else if (*BEgroup::external_funcs == "externalComplicatedFunction")
      {
        //2. A pointer to a local C++ function (that, e.g. calls a function provided by a backend)
        callback_pointer = BEreq::externalComplicatedFunction.pointer();
        result = &some_other_function;
      }
      else ExampleBit_A_error().raise(LOCAL_INFO,"Unrecognised choice from external_funcs BEgroup.");
    }


    /*
    void Aldo_test(int &nevents) {

      using namespace Pipes::Aldo_test;

      cout << "My backend requirement of initialize (detector si,)  has been filled by " << 
        BEreq::Read_Aldo_Sim.name() << " from " <<
        BEreq::Read_Aldo_Sim.backend() << ", v" << 
        BEreq::Read_Aldo_Sim.version() << "." << endl;

      cout << " calling function " << BEreq::Read_Aldo_Sim(nevents) << endl;

      nevents = 42;

    }
    */
    

    void Aldos_evgen(HEP_Simple_Lib::Event &how_many) {

      HEP_Simple_Lib::Particle *chosen;
      chosen = new HEP_Simple_Lib::Particle(40.5, -32.6, 0.5, 51.992884131, 13);
      how_many.add_particle(chosen);

      cout << " we created a particle " << endl;
    }

    // FastSim
    void init_sim(double &which) {
      
      using namespace Pipes::init_sim;
      cout << "My backend requirement of initialize (detector si,)  has been filled by " <<
        BEreq::init_fastsim.name() << " from " <<
        BEreq::init_fastsim.backend() << ", v" << 
        BEreq::init_fastsim.version() << "." << endl;

      cout << " calling function from library" << BEreq::init_fastsim(1) << endl;
      which = 10;

    }

    /// Example of interacting with models
    void damu (double &result)
    {
      using namespace Pipes::damu;
      std::cout << "In ExampleBit_A, function damu" << std::endl;
      std::cout << "  Printing parameter values:" << std::endl;
      std::cout << "p1: " << *Param["p1"] << std::endl;
      std::cout << "p2: " << *Param["p2"] << std::endl;
      std::cout << "p3: " << *Param["p3"] << std::endl;
      //A safety_bucket containing the ModelParameters object itself is also 
      //available as a dependency at Pipes::<functionname>::Dep::<modelname>_parameters, 
      //in case you want to do something more advanced than just read off the
      //parameter values.
      result = *Param["p1"] * *Param["p2"];
    }
          
    /// Likelihood function for fitting the population parameters of a
    /// normal distribution (with hard-coded "observations")
    void normaldist_loglike (double &result)
    {
      using namespace Pipes::normaldist_loglike;      

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
    
      double loglTotal = 0.;
      
      // The loglikelihood value for the hypothesised parameters is then:
      for (int i=0; i <= N; ++i)
      {
        //std::cout<<samples[i]<<*Param["mu"]<<*Param["sigma"]<<std::endl;
        loglTotal += logf(samples[i], *Param["mu"], *Param["sigma"]);
      }
      
      result = loglTotal;
    }


    /// \name Loopmanager Examples
    /// Some example functions for using loops within the dependency structure 
    /// @{

    /// Run a fake 'event loop' 
    void eventLoopManager()
    {
      using namespace Pipes::eventLoopManager;
      unsigned int nEvents = 20;         // Number of times to run the loop

      //There is basically just one thing available from the Loops namespace in loop managers like this one:
      //  Loop::executeIteration(int iteration_number) -- executes a single iteration of the ordered
      //                                                  set of nested functions, passing them the iteration_number.

      //A simple loop example without OpenMP.  Commented out for now.
      //for(unsigned long it = 0; it < nEvents; it++)
      //{
      //  cout << "This is iteration " << it+1 << " of " << nEvents << " being run by eventLoopManager." << endl;
      //  Loop::executeIteration(it);    // This is a (member) function pointer, so *Loop::executeIteration(it) works fine too.
      //}

      //A simple loop example using OpenMP
      Loop::executeIteration(0);         //Do the zero iteration separately to allow nested functions to self-init.
      #pragma omp parallel
      {
        #pragma omp for
        for(unsigned long it = 1; it < nEvents-1; it++)
        {
          Loop::executeIteration(it);   
        }
      }
      Loop::executeIteration(nEvents-1); //Do the final iteration separately to make the final result 'serially accessible' to functions that run after this one.

    }

    /// Produces a random floating-point 'event count' between 0 and 5.
    void exampleEventGen(singleprec &result)
    {
      using namespace Pipes::exampleEventGen;
      result = random_0to5(twistor);                 // Generate and return the random number
      #pragma omp critical (print)
      { 
        cout<<"  Running exampleEventGen in iteration "<<*Loop::iteration<<endl;
      }
    }

    /// Rounds an event count to the nearest integer
    void exampleCut(int &result)
    {
      using namespace Pipes::exampleCut;
      result = (int) *Dep::event;
      #pragma omp critical (print)
      { 
        cout<<"  Running exampleCut in iteration "<<*Loop::iteration<<endl;
      }
    }

    /// Adds an integral event count to a total number of accumulated events.
    void eventAccumulator(int &result)
    {
      //There is basically just one thing available in nested functions from the Loops namespace:
      //  int* Loop::iteration -- the iteration number passed down directly by the function managing the loop that this one runs within. 
      //You can always get at OpenMP functions too (omp_get_thread_num, omp_get_ancestor_thread_num, etc) -- but it is better not to assume
      //too much about the other functions that might be managing this one, either directly or indirectly.

      using namespace Pipes::eventAccumulator;
      if (*Loop::iteration == 0)                     // In the first iteration of a loop
      {
        accumulatedCounts = 0;                       // Zero the total accumulated counts
      }
      #pragma omp critical (eventAccumulator_update) // Only let one thread at a time accumulate results
      {
        accumulatedCounts += *Dep::event;            // Add the latest event count to the total
      }
      result = accumulatedCounts;                    // Return the current total
      #pragma omp critical (print)
      { 
        cout<<"  Running eventAccumulator in iteration "<<*Loop::iteration<<endl;
        cout<<"  Retrieved event count: "<<*Dep::event<<endl;
        cout<<"  I have thread index: "<<omp_get_thread_num();
        cout<<"  Current total counts is: "<<result<<endl;
      }
    }

    double testFunc(Farray<double,1>&)
    {
        return 0.0;
    }

    void do_Farray_stuff (double &result)          
    {
      using namespace Pipes::do_Farray_stuff;
      using std::cout;
      using std::endl;
      
      typedef double(*fptrType1)(Farray<double,1>&);
      typedef void (*fptrType2)(Gambit::Farray <double,1>& ,int& ,fptrType1);
      
      cout << "do_Farray_stuff has been summoned!" << endl;
      cout << "Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn" << endl << endl;
      cout << "Calling printStuff..." << endl;
      BEreq::libFarrayTest_printStuff();
      cout << "Calling set_d() to fill values in 3-dimensional array d..." << endl;
      BEreq::libFarrayTest_set_d();     
      cout << "Calling printStuff again..." << endl;
      BEreq::libFarrayTest_printStuff();
      cout << "Setting d(2,0,-1) = 99 and d(1,1,0) = 77 " << endl;
      libFarrayTest_CB_type commonBlock = *BEreq::libFarrayTestCommonBlock;
      commonBlock.d(2,0,-1) = 99;
      commonBlock.d(1,1,0) = 77;      
      cout << "Calling printStuff again..." << endl;
      BEreq::libFarrayTest_printStuff();    
              
      cout << endl << "Calling doubleFunc with argument 100.10..." << endl;
      double tmp = 100.10;
      double tmp2 = BEreq::libFarrayTest_doubleFunc(tmp);   
      cout << "Returned value: " << tmp2 << endl;     

      cout << endl << "Retrieving pointer to doubleFuncArray1..." << endl;      
      double(*function_pointer)(Farray<double,1>&) = BEreq::libFarrayTest_doubleFuncArray1.pointer();
      cout << "Calling doubleFuncArray1 with commonblock element a as argument..." << endl;            
      tmp = function_pointer(commonBlock.a);
      cout << "Returned value: " << tmp << endl;          
      
      cout << endl << "Retrieving pointer to fptrRoutine..." << endl;      
      fptrType2 function_pointer2 = BEreq::libFarrayTest_fptrRoutine.pointer();
            
      cout << endl << "Calling fptrRoutine with commonblock elements a and c and function doubleFuncArray1 as arguments..." << endl;
      function_pointer2(commonBlock.a,*commonBlock.c,function_pointer);             

      cout << endl << "Calling fptrRoutine with commonblock elements a and c and function doubleFuncArray2 as arguments..." << endl;
      BEreq::libFarrayTest_fptrRoutine(commonBlock.a,*commonBlock.c,BEreq::libFarrayTest_doubleFuncArray2.pointer());    
 
      // Uncomment to pass an illegal function pointer (a function pointer with no fortran equivalent registered in frontBackFuncMap)
      //double (*function_pointer3)(Farray<double,1>&) = testFunc;
      //cout << endl << "Calling fptrRoutine commonblock elements a and c and an illegal function as arguments..." << endl;
      //function_pointer2(commonBlock.a,*commonBlock.c,function_pointer3);    
      
      // Will not compile without the byVal convertor.
      cout << endl << "Calling fptrRoutine with commonblock elements a and c and function doubleFuncArray1 as arguments in a way that fails without byVal..." << endl;
      BEreq::libFarrayTest_fptrRoutine(commonBlock.a,*commonBlock.c,byVal(function_pointer));      
 
      result = 1.0;     
 
    }

    /// @} @}


    /// \name SLHA Examples
    /// Some example functions for getting and manipulating SLHA-style information
    /// @{
 
    /// Calculate some random thing which requires a low energy MSSM spectrum
    // void BRstopneutralino(int &result)
    // {
    //   using namespace Pipes::BRstopneutralino;

    // }

    /// @}
  }

}
