#include "Pythia8Backend.hpp"
#include "Delphes3Backend.hpp"
#include "Analysis.hpp"
#include "Event.hpp"

#include "xsec.h"

#include <string>
#include <iostream>
#include <fstream>
#include <memory>
#include <numeric>
#include <algorithm>

#include "omp.h"
#define MAIN_SHARED slhaFileName,myDelphes

using namespace std;


namespace Gambit {
  namespace HEColliderBit {

    struct Subprocess {
      Subprocess()
        : xsec(-1) { }

      Subprocess(const vector<int>& parts1, const vector<int>& parts2)
        : particlesInProcess1(parts1), particlesInProcess2(parts2)
      {
        xsec = _xseceval.xsec(parts1, parts2, "../data/sps1aWithDecays.spc");
      }

      void add_analysis(Analysis* a) { analyses.push_back(shared_ptr<Analysis>(a)); }

      // string name; // or int id = 1000*sp_type + sp_instance

      /// @todo Add some metric of CPU cost per event for this process type?
      /// The processes are selected by the IDs of the particles which
      /// must be in the process.

      vector<int> particlesInProcess1;
      vector<int> particlesInProcess2;
      vector<shared_ptr<Analysis>> analyses;
      double xsec;

    private:

      xsec::Evaluator _xseceval;
    };

  }
}



namespace GHEC = Gambit::HEColliderBit;

int main() {

  // Basic setup
  /// @todo Model info including SLHA will need to come from ModelBit
  const string slhaFileName = "../data/sps1aWithDecays.spc"; //"mhmodBenchmark.slha";
  /// @todo We'll eventually need more than just ATLAS, so Delphes/FastSim handling will need to be bound to analyses (and cached)
  /// @note That means that the class loaders had better be working by then...
  const string delphesConfigFile = "../data/delphes_card_ATLAS.tcl";
  const int NUM_EVENTS = 2000;

  cout << endl << "Running parallelized HECollider simulation for " << NUM_EVENTS << " events" << endl;

  // Global instance of Delphes, since it's not thread-safe
  shared_ptr<GHEC::Delphes3Backend> myDelphes(new GHEC::Delphes3Backend(delphesConfigFile));

  // Subprocess group setup
  map<string, GHEC::Subprocess> sps;
  // Gluino processes
  sps["g~"] = GHEC::Subprocess({{1000021}},
                               {{1000021, 1000001, 1000002, 1000003, 1000004,
                                          2000001, 2000002, 2000003, 2000004}});
  // Squark processes
  sps["q~"] = GHEC::Subprocess({{1000001, 1000002, 1000003, 1000004,
                                 2000001, 2000002, 2000003, 2000004}},
                               {{1000001, 1000002, 1000003, 1000004,
                                 2000001, 2000002, 2000003, 2000004}});
  // Gaugino processes
  sps["X~"] = GHEC::Subprocess({{1000021, 1000001, 1000002, 1000003, 1000004,
                                          2000001, 2000002, 2000003, 2000004}},
                               {{1000022, 1000023, 1000024, 1000025, 1000035, 1000037}});
  // Stop processes
  sps["t~"] = GHEC::Subprocess({{1000006}}, {{1000006}});

  // Bind analysis pointers to subprocesses
  for (auto& isp : sps) {
    auto& sp = isp.second;
    sp.add_analysis( GHEC::mkAnalysis("ATLAS_0LEP") );
    sp.add_analysis( GHEC::mkAnalysis("ATLAS_0LEPStop_20invfb") );
    // sp.add_analysis( GHEC::mkAnalysis("ATLAS_1LEPStop_20invfb") ); //< buggy: segfaults in finalize
    sp.add_analysis( GHEC::mkAnalysis("ATLAS_2LEPStop_20invfb") );
    sp.add_analysis( GHEC::mkAnalysis("ATLAS_2bStop_20invfb") );
  }

  /// @note Needs more complexity when we want to run different analyses with
  /// high acceptances for low-xsec subprocesses.
  //
  // Abram's thoughts and brainstorming about these issues:
  // 1) Negligible processes: A process is negligible when the cross-section times acceptance
  //    is so low that it will automatically be dwarfed by the background. I guess that makes the
  //    likelihood for that particular analysis 1.
  // 2) Acceptances can never be > 1, so there ought to be a fairly simple formula to apply even
  //    for low-xsecs. For instance:
  //      if (xsec * ideal_acceptance)[worst subprocess] < 0.01 (xsec * crappy_acceptance)[next-to-worst subprocess]
  // 3) The question then becomes: can we somehow estimate a priori ideal_acceptance and crappy_acceptance?

  // Calculate total xsec for process division normalization
  double total_xsec = 0;
  for (const auto& ispx : sps) {
    cout << "xsec (" << ispx.first << ") = " << ispx.second.xsec << endl;
    total_xsec += ispx.second.xsec;
  }

  // Decide how many events of each subprocess group to use, from interpolated NLO xsecs & split across threads
  const int NUM_CORES = omp_get_max_threads();
  vector<GHEC::Subprocess> thread_cfgs(NUM_CORES);
  for (auto& isp : sps) {
    auto& sp = isp.second;
    const int sp_num_events = (int) ceil(NUM_EVENTS * sp.xsec / total_xsec);
    if (sp_num_events < NUM_CORES) continue; //< @note Skip subprocesses with fewer events than cores
    const int sp_num_events_per_thread = (int) ceil(sp_num_events / (double) NUM_CORES);
    for (int i = 0; i < NUM_CORES; ++i) thread_cfgs[i] = sp;

    // Run this subprocess' parallelized generation loop
    #pragma omp parallel shared(MAIN_SHARED)
    {
      // Py8 backend process configuration
      const int NTHREAD = omp_get_thread_num();
      unique_ptr<GHEC::Pythia8Backend> myPythia( new GHEC::Pythia8Backend(NTHREAD) );
      myPythia->set("SLHA:file", slhaFileName);
      myPythia->set("SUSY:idVecA", thread_cfgs[NTHREAD].particlesInProcess1);
      myPythia->set("SUSY:idVecB", thread_cfgs[NTHREAD].particlesInProcess2);

      // Print out some run details
      /// @note We might want more CPU-heavy processes to run fewer events.
      // cout << " Target number of events for thread #" << NTHREAD << " = " << thread_cfgs[NTHREAD].nevts << endl;
      // assert(thread_cfgs[NTHREAD].nevts > 0);

      // Run the event loop
      HEP_Simple_Lib::Event recoEvent;
      for (int counter = 0; counter < sp_num_events_per_thread; counter++) {
        // // Run Pythia8 and run Delphes (not thread safe)
        Pythia8::Event genEvent;
        myPythia->nextEvent(genEvent);
        #pragma omp critical
        {
          myDelphes->processEvent(genEvent, recoEvent);
        }

        // Run all analyses attached to the thread
        for (shared_ptr<GHEC::Analysis> ana : thread_cfgs[NTHREAD].analyses)
          ana->analyze(recoEvent);
      } // end event loop

      // Record the (LO) cross-section on the analysis
      /// @todo Combine same-process xsecs on the SP group, then set on the analyses before adding SPs?
      thread_cfgs[NTHREAD].xsec = myPythia->xsec();
      cout << "XSEC = " << myPythia->xsec() << endl;
      for (shared_ptr<GHEC::Analysis> ana : thread_cfgs[NTHREAD].analyses) {
        cout << "Py8 xsec = " << myPythia->xsec() << " +- " << myPythia->xsecErr() << endl;
        ana->improve_xsec(myPythia->xsec(), myPythia->xsecErr());
        /// @todo Getting stupid values from Py8...
      }

      // Print out final run details
      // cout << "Thread #" << NTHREAD << " has run " << counter << " events" << endl;

    } // end omp parallel block
  }

  /// Combine analysis acceptances from each subprocess
  map<string, shared_ptr<GHEC::Analysis>> anas;
  for (auto& spg : sps) {
    for (auto& a : spg.second.analyses) {
      const string aname = (!a->name.empty()) ? a->name : typeid(*a).name();
      if (anas.find(aname) == anas.end()) {
        anas[aname] = a;
      } else {
        anas[aname]->add(*a);
      }
    }
  }

  // Finalize each process group
  /// @todo Parallelize... but OpenMP and range iteration don't play well
  // omp_set_num_threads(anas.size());
  // #pragma omp parallel for
  for (auto& a : anas) {
    cout << "Finalizing " << a.first << endl;
    a.second->finalize();
    cout << a.first << ": log likelihood = " << a.second->loglikelihood() << endl;
  }

  return 0;
}
