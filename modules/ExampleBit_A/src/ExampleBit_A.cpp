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
      std::ostringstream ss;
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

    /// \name Module functions
    /// @{
    void nevents_dbl  (double &result)    { result = count++; cout << "My xsection dep: " << *Pipes::nevents_dbl::Dep::xsection << endl;}
    void nevents_like (double &result)    { result = 2.0 * (*Pipes::nevents_like::Dep::eventAccumulation); }
    void identity     (str    &result)    { result = "turkion"; }

    void nevents_int(int &result)
    {
      result = (int) (*Pipes::nevents_int::Dep::nevents);
      // Randomly raise some ficticious alarms about this point in 10% of cases.
      if (random_0to5(twistor) < 0.5)
      {
        //Example of how to raise an error from a module function.
        ExampleBit_A_error().raise(LOCAL_INFO,"Damn, this integer event count is bad.");
        //Example of how to declare a point invalid.
        invalid_point().raise("I don't like this point.");
      }
    }

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


    void Aldos_evgen(HEPUtils::Event &how_many) {

      HEPUtils::Particle* chosen = new HEPUtils::Particle(40.5, -32.6, 0.5, 51.992884131, 13);
      how_many.add_particle(chosen);

      cout << " we created a particle " << endl;
    }

    // FastSim
    void fast_sim_init(double &which) {

      //using namespace Pipes::fast_sim;
      using namespace Pipes::fast_sim_init;
      cout << "My backend requirement of initialize (detector si,)  has been filled by " <<
        BEreq::fast_sim_init.name() << " from " <<
        BEreq::fast_sim_init.backend() << ", v" <<
        BEreq::fast_sim_init.version() << "." << endl;

      cout << " calling function from library" << BEreq::fast_sim_init(1) << endl;
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

    /// @}


    /// Test inline marginalisation of a Poisson likelihood over a log-normally or Gaussianly-distributed nuisance parameter.
    void marg_poisson_test(double &result)
    {
        using namespace Pipes::marg_poisson_test;
        int n_obs = 5;                      // Actual observed number of events
        double n_predicted_exact = 1.5;     // A contribution to the predicted number of events that is know exactly (e.g. from data-driven background estimate)
        double n_predicted_uncertain = 3.1; // A contribution to the predicted number of events that is not know exactly
        double uncertainty = 0.2;           // A fractional uncertainty on n_predicted_uncertain (e.g. 0.2 from 20% uncertainty on efficencty wrt signal events)

        if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_lognormal_error")
        {
          // Use a log-normal distribution for the nuisance parameter (more correct)
          result = BEreq::lnlike_marg_poisson_lognormal_error(n_obs,n_predicted_exact,n_predicted_uncertain,uncertainty);
        }
        else if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_gaussian_error")
        {
          // Use a Gaussian distribution for the nuisance parameter (marginally faster)
          result = BEreq::lnlike_marg_poisson_gaussian_error(n_obs,n_predicted_exact,n_predicted_uncertain,uncertainty);
        }
        else ExampleBit_A_error().raise(LOCAL_INFO,"Unrecognised choice from lnlike_marg_poisson BEgroup.");

        logger() << "This is marg_poisson_test using req " << *BEgroup::lnlike_marg_poisson << ". My result is " << result << EOM;
    }

    /// Basic example use of some loaded classes.
    void bossed_class_example1(X &result)
    {
      cout << "Testing X type." << endl;
      cout << "===================" << endl;

      result.i = 0;
      cout << "Result X's int: " << result.i << endl;
      result.i+=1;
      cout << "After adding 1: " << result.i << endl;

      X localX(1);
      cout << "Local X's int: " << localX.i << endl;
      localX.i+=1;
      cout << "After adding 1: " << localX.i << endl;

      BOSSMinimalExample_1_0::nspace1::nspace2::X oldX(3);
      cout << "v1.0 X's int: " << oldX.i << endl;

      result = localX;
      cout << "Now we set result = localX" << endl;
      cout << "result.i: " << result.i << endl;

      cout << "Testing Y type." << endl;
      cout << "===================" << endl;

      Y myY;
      cout << "myY's X's int: " << myY.x.i << endl;
      myY.x.i+=1;
      cout << "After adding 1: " << myY.x.i << endl;

      cout << "Making localY from localX." << endl;
      Y localY(localX);
      cout << "LocalY's int: " << localY.x.i << endl;
      localY.x.i+=1;
      cout << "After adding 1: " << localY.x.i << endl;
      cout << "LocalX's int after LocalY's int has been incremented: " << localX.i << endl;

      localX = localY.get_x();
      cout << "i of X retrieved from localY: " << localX.i << endl;

      localX.i-=1;
      localY.set_x(localX);
      cout << "LocalY's int after sending an X to localY: " << localY.x.i << endl;

      BOSSMinimalExample_1_0::nspace3::Y oldY(oldX);
      cout << "v1.0 Y's int: " << oldY.x.i << endl;
    }

    /// Higher-level example use of some loaded classes.
    void bossed_class_example2(int &result)
    {
      using namespace Pipes::bossed_class_example2;
      Y localY(*Dep::BOSSed_X);
      result = localY.x.i;
    }


    /// Example of using a BOSSed version of Pythia
    void bossed_pythia_test_function(bool &result)
    {
      using namespace Pipes::bossed_pythia_test_function;

      cout << "Testing Pythia backend" << endl;
      cout << "======================" << endl;

      Pythia8::Pythia pythia("../extras/boss/bossed_pythia_source/xmldoc", false);

      pythia.readString("Beams:eCM = 8000.");
      pythia.readString("HardQCD:all = on");
      pythia.readString("PhaseSpace:pTHatMin = 20.");

      pythia.readString("Next:numberShowInfo = 0");
      pythia.readString("Next:numberShowProcess = 0");
      pythia.readString("Next:numberShowEvent = 0");

      pythia.init();

      Pythia8::Hist mult("charged multiplicity", 2, -0.5, 799.5);
      // Begin event loop. Generate event. Skip if error. List first one.
      for (int iEvent = 0; iEvent < 2; ++iEvent) {
        if (!pythia.next()) continue;
        // Find number of all final charged particles and fill histogram.
        int nCharged = 0;
        for (int i = 0; i < pythia.event.size(); ++i)
          if (pythia.event[i].isFinal() && pythia.event[i].isCharged())
            ++nCharged;
        mult.fill( nCharged );
        cout << "Event: " << iEvent << "   nCharged: " << nCharged << endl;
      // End of event loop. Statistics. Histogram. Done.
      }

      pythia.stat();

      cout << "Done testing Pythia backend" << endl;
      cout << "===========================" << endl;

      result = true;
    }


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
