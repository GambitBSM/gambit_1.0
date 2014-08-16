//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of HEColliderBit_eventLoop. Based
///  heavily on the ExampleBit_A Functions
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///    \date 2013 Dec
//  //  Aldo Saavedra
//  //  2014 March 2nd
///
///  *********************************************

#include <string>
#include <iostream>
#include <fstream>
#include <memory>
#include <numeric>

#include "gambit_module_headers.hpp"
#include "HEColliderBit_types.hpp"
#include "HEColliderBit_rollcall.hpp"

// Now pulling in some of the code from extras/HEColliderMain.cpp
// I will leave the KFactorHooks alone for now, since the work on
// xsec calculation is ongoing.

namespace Gambit {
  namespace HEColliderBit {

    /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************

    /// @todo Put in actual analyses rather than a simple counter
    double counter = 0.;


    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************

    /// *** Initialization for managers ***
    /// \todo Move the rest of this stuff into proper Gambity initialization function

    /// \todo Assume that spectrum comes from somewhere else...
    /// \note Play with SoftSUSY class loading with Anders
    void getslhaFileName(std::string &result)
          { result = "HEColliderBit/data/sps1aWithDecays.spc"; }

    /// @todo We'll eventually need more than just ATLAS, so Delphes/FastSim handling will need to be bound to analyses (and cached)
    /// @note That means that the class loaders had better be working by then...
    void getDelphesConfigFileName (std::string &result)
          { result = "HEColliderBit/data/delphes_card_ATLAS.tcl"; }

    /// @todo nEvents should really depend on the xsec calculation, which again is bound to analyses
    void getNEvents(int &result)
          { result = 2000; }

    /// @todo More subprocesses. For current testing, only ~g and ~q.
    void getSubprocessGroup(SubprocessGroup &result) {
      result = SubprocessGroup(0.6, //< xsec estimate
                    {{1000021, 1000001, 1000002, 1000003, 1000004,
                               2000001, 2000002, 2000003, 2000004}},
                    {{1000021, 1000001, 1000002, 1000003, 1000004,
                               2000001, 2000002, 2000003, 2000004}});
      /// \todo Test boring event counter first.  Uncomment analysis later.
      // result.add_analysis( mkAnalysis("ATLAS_0LEP") );
    }


    /// *** Finalization for analyses ***

    /// @todo Scaling will depend on nEvents, xsec, and analysis luminosity
    void getScaleFactor(double &result) { result = 1.5; }


    /// *** Readied Simulation Tools ***

    /// Proper backending must wait until the class loader is ready.
    /// Until then, let's just hard code these.
    void readyPythiaBackend(Pythia8Backend* &result) {
      using namespace Pipes::readyPythiaBackend;
      result = new Pythia8Backend(omp_get_thread_num());
      result->set("SLHA:file", *Dep::slhaFileName);
      result->set("SUSY:idVecA", (*Dep::subprocessGroup).particlesInProcess1);
      result->set("SUSY:idVecB", (*Dep::subprocessGroup).particlesInProcess2);
    }

    void readyDelphesBackend(Delphes3Backend* &result) {
      using namespace Pipes::readyDelphesBackend;
      result = new Delphes3Backend(*Dep::delphesConfigFileName);
    }


    /// *** Loop Managers ***
    void manageXsecDependentLoop() {
      using namespace Pipes::manageXsecDependentLoop;
      /// \todo Will need to remind myself how Andy's code works.
      /// \todo Check out HEColliderMain.cpp in extras folder.
      /// \todo Delete this entire module function if vanilla loops are better.
      logger() << "==================" << endl;
      logger() << "HEColliderBit says,";
      logger() << "\"manageXsecDependentLoop() was called.\"" << endl;
      logger() << LogTags::info << endl << EOM;
      HEColliderBit_error().raise(LOCAL_INFO,"Xsec dependent loop not implemented.");
    }

    void manageVanillaLoop() {
      using namespace Pipes::manageVanillaLoop;
      logger() << "==================" << endl;
      logger() << "HEColliderBit says,";
      logger() << "\"manageVanillaLoop() was called.\"" << endl;
      logger() << "*** NOTE: Each iteration will report:" << endl;
      logger() << "  iteration, event met, thread, counts" << endl;
      logger() << LogTags::info << endl << EOM;

      Loop::executeIteration(0);
      #pragma omp parallel
      {
        #pragma omp for
        for (int it=1; it<*Dep::nEvents-1; it++) {
          Loop::executeIteration(it);
        }
      }
      Loop::executeIteration(*Dep::nEvents);
      logger() << "==================" << endl;
      logger() << "HEColliderBit says,";
      logger() << "\"manageVanillaLoop() completed.\"" << endl;
      logger() << LogTags::info << endl << EOM;
    }

    /// Hard Scattering Event Generators
    void generatePythia8Event(PythiaEvent &result) {
      using namespace Pipes::generatePythia8Event;
      result.clear();
      /// Get the next event from Pythia8
      (*Dep::readiedHardScatteringSim)->nextEvent(result);
    }

    /// Standard Event Format Functions
    void reconstructDelphesEvent(HEP_Simple_Lib::Event &result) {
      using namespace Pipes::reconstructDelphesEvent;
      result.clear();
      /// Feed the Pythia8 event to Delphes for detector simulation
      /// \note Delphes (ROOT) is not thread safe. Critical block necessary.
      #pragma omp critical (Delphes)
      {
        (*Dep::readiedDetectorSim)->processEvent(*Dep::hardScatteringEvent, result);
      }
    }

    void convertPythia8Event(HEP_Simple_Lib::Event &result) {
      using namespace Pipes::convertPythia8Event;
      result.clear();
      /// Feed the Pythia8 event to the converter
      fillGambitEvent(*Dep::hardScatteringEvent, result);
    }

    /// Analysis Accumulators
    // Adds an integral event count to a total number of accumulated events.
    // At the end, scales the result by some adjustment factor.
    void simpleCounter(double &result)
    {
      using namespace Pipes::simpleCounter;
      if (*Loop::iteration == 0)
      {
        counter = 0.;
      }
      #pragma omp critical (accumulator_update)
      {
        counter += 1.;
      }
      result = counter * *Dep::scaleFactor;
      #pragma omp critical (print)
      {
        logger() << "  " << *Loop::iteration << ", ";
        logger() << (*Dep::GambitColliderEvent).met() << ", ";
        logger() << omp_get_thread_num() << ", ";
        logger() << result << EOM;
      }
    }

  }
}
