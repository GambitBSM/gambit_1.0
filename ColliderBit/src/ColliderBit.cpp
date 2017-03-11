///   GAMBIT: Global and Modular BSM Inference Tool
///  *********************************************
///  \file
///
///  Functions of ColliderBit_eventLoop. Based
///  heavily on the ExampleBit_A Functions
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///
///  \author Aldo Saavedra
///
///  \author Andy Buckley
///
///  \author Chris Rogan
///          (crogan@cern.ch)
///  \date 2014 Aug
///  \date 2015 May
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
///
///  *********************************************

#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
#include <memory>
#include <numeric>
#include <sstream>
#include <vector>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"
#include "gambit/Elements/mssm_slhahelp.hpp"
#include "gambit/ColliderBit/lep_mssm_xsecs.hpp"
#include "HEPUtils/FastJet.h"

// #define COLLIDERBIT_DEBUG

namespace Gambit
{

  namespace ColliderBit
  {


    /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************

    /// LEP limit likelihood function
    double limitLike(double x, double x95, double sigma)
    {
      static double p95 = 1.;
      using std::erf;
      using std::sqrt;

      if (p95 < 1.01)
      {
        for (int i=0; i<20000; i++)
        {
          static double step = 0.1;
          if (0.5 * (1 - erf(p95 + step)) > 0.05) p95 += step;
          else step /= 10.;
        }
      }

      double result = 0.5 * (1.0 - erf(p95 + (x - x95) / sigma / sqrt(2.)));

      if (result < 0.0 or Utils::isnan(result))
      {
        cout << "result: " << result << endl;
        cout << "x: " << x << endl;
        cout << "x95: " << x95 << endl;
        cout << "sigma: " << sigma << endl;
        cout << "p95: " << p95 << endl;
        cout << "(x - x95) / sigma / sqrt(2.): " << (x - x95) / sigma / sqrt(2.) << endl;
        cout << "erf(p95 + (x - x95) / sigma / sqrt(2.)): " << erf(p95 + (x - x95) / sigma / sqrt(2.)) << endl;
        ColliderBit_error().raise(LOCAL_INFO, "Suspicious results in limitLike!");
      }

      return (result == 0.0 ? -1e10 : log(result));
    }

    /// LEP limit debugging function
    bool is_xsec_sane(const triplet<double>& xsecWithError)
    {
      double xsec = xsecWithError.central;
      double dxsec_upper = xsecWithError.upper - xsecWithError.central;
      double dxsec_lower = xsecWithError.central - xsecWithError.lower;
      if (xsec < 0.0 or dxsec_upper < 0.0 or dxsec_lower < 0.0
          or Utils::isnan(xsec) or Utils::isnan(dxsec_upper) or Utils::isnan(dxsec_lower))
      {
        cout << "xsec: " << xsec << endl;
        cout << "dxsec_upper: " << dxsec_upper << endl;
        cout << "dxsec_lower: " << dxsec_lower << endl;
        return false;
      }
      return true;
    }

    /// Event labels
    enum specialEvents {BASE_INIT=-1, INIT = -2, START_SUBPROCESS = -3, END_SUBPROCESS = -4, FINALIZE = -5};
    /// Pythia stuff
    std::vector<std::string> pythiaNames, pythiaCommonOptions;
    std::vector<std::string>::const_iterator iter;
    bool eventsGenerated;
    int nEvents, seedBase;
    /// Analysis stuff
    bool useBuckFastATLASDetector;
    std::vector<std::string> analysisNamesATLAS;
    HEPUtilsAnalysisContainer globalAnalysesATLAS;
    bool useBuckFastCMSDetector;
    std::vector<std::string> analysisNamesCMS;
    HEPUtilsAnalysisContainer globalAnalysesCMS;
#ifndef EXCLUDE_DELPHES
    bool useDelphesDetector;
    std::vector<std::string> analysisNamesDet;
    HEPUtilsAnalysisContainer globalAnalysesDet;
#endif // not defined EXCLUDE_DELPHES
    
    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
    /// *** Loop Managers ***

    /// @note: Much of the loop below designed for splitting up the subprocesses to be generated.
    /// @note: For our first run, we will just run all SUSY subprocesses.

    void operateLHCLoop()
    {
      using namespace Pipes::operateLHCLoop;
      static std::streambuf *coutbuf = std::cout.rdbuf(); // save cout buffer for running the loop quietly
      int currentEvent;
      nEvents = 0;
      // Pythia random number seed will be set properly during BASE_INIT.
      seedBase = 0; // This just prevents a warning.
      // Set eventsGenerated to true once some events are generated.
      eventsGenerated = false;

      // Do the base-level initialisation
      Loop::executeIteration(BASE_INIT);
      // Retrieve runOptions from the YAML file safely...
      GET_COLLIDER_RUNOPTION(pythiaNames, std::vector<std::string>);
      // @todo Subprocess specific nEvents
      GET_COLLIDER_RUNOPTION(nEvents, int);

      // Should we silence stdout during the loop?
      bool silenceLoop = runOptions->getValueOrDef<bool>(true, "silenceLoop");
      if (silenceLoop) std::cout.rdbuf(0);

      // For every collider requested in the yaml file:
      for (iter = pythiaNames.cbegin(); iter != pythiaNames.cend(); ++iter)
      {
        piped_invalid_point.check();
        Loop::reset();
        Loop::executeIteration(INIT);
        currentEvent = 0;
        #pragma omp parallel
        {
          Loop::executeIteration(START_SUBPROCESS);
          // main event loop
          while(currentEvent<nEvents and not *Loop::done) {
            if (!eventsGenerated)
              eventsGenerated = true;
            try
            {
              Loop::executeIteration(currentEvent);
              currentEvent++;
            }
            catch (std::domain_error& e)
            {
              std::cerr<<"\n   Continuing to the next event...\n\n";
            }
          }
          Loop::executeIteration(END_SUBPROCESS);
        }
      }

      // Nicely thank the loop for being quiet, and restore everyone's vocal cords
      if (silenceLoop) std::cout.rdbuf(coutbuf);

      // Check for exceptions
      piped_invalid_point.check();

      Loop::executeIteration(FINALIZE);
    }



    /// *** Hard Scattering Collider Simulators ***

    void getPythia(Gambit::ColliderBit::SpecializablePythia &result)
    {
      using namespace Pipes::getPythia;

      static std::string pythia_doc_path;
      static std::string default_doc_path;
      static bool pythia_doc_path_needs_setting = true;
      static SLHAstruct slha;
      static SLHAstruct spectrum;

      if (*Loop::iteration == BASE_INIT)
      {
        // Setup the Pythia documentation path
        if (pythia_doc_path_needs_setting)
        {
          default_doc_path = GAMBIT_DIR "/Backends/installed/Pythia/" +
                             Backends::backendInfo().default_version("Pythia") +
                             "/share/Pythia8/xmldoc/";
          pythia_doc_path = runOptions->getValueOrDef<std::string>(default_doc_path, "Pythia_doc_path");
          // Print the Pythia banner once.
          result.banner(pythia_doc_path);
          pythia_doc_path_needs_setting = false;
        }

        // SLHAea object constructed from dependencies on the spectrum and decays.
        slha.clear();
        spectrum.clear();
        slha = Dep::decay_rates->getSLHAea();
        if (ModelInUse("MSSM63atQ") or ModelInUse("MSSM63atMGUT"))
        {
          // MSSM-specific.  SLHAea in SLHA2 format, please.
          spectrum = Dep::MSSM_spectrum->getSLHAea(2);
          SLHAea::Block block("MODSEL");
          block.push_back("BLOCK MODSEL              # Model selection");
          SLHAea::Line line;
          line << 1 << 0 << "# General MSSM";
          block.push_back(line);
          slha.insert(slha.begin(), spectrum.begin(), spectrum.end());
          slha.push_front(block);
        }
        else
        {
          ColliderBit_error().raise(LOCAL_INFO, "No spectrum object available for this model.");
        }

        // Pythia random number seed will be this, plus the thread number.
        seedBase = int(Random::draw() * 899990000.);
      }

      if (*Loop::iteration == INIT)
      {
        // Get pythia options
        // If the SpecializablePythia specialization is hard-coded, okay with no options.
        pythiaCommonOptions.clear();
        if (runOptions->hasKey(*iter))
          pythiaCommonOptions = runOptions->getValue<std::vector<std::string>>(*iter);
      }

      else if (*Loop::iteration == START_SUBPROCESS)
      {
        result.clear();
        // variables for xsec veto
        std::stringstream processLevelOutput;
        std::string _junk, readline;
        int code, nxsec;
        double xsec, totalxsec;

        // Each thread gets its own Pythia instance.
        // Thus, the actual Pythia initialization is
        // *after* INIT, within omp parallel.
        std::vector<std::string> pythiaOptions = pythiaCommonOptions;
        // Although we capture all couts, still we tell Pythia to be quiet....
        pythiaOptions.push_back("Print:quiet = on");
        // .... except for showProcesses, which we need for the xsec veto.
        pythiaOptions.push_back("Init:showProcesses = on");
        pythiaOptions.push_back("SLHA:verbose = 0");
        pythiaOptions.push_back("SLHA:file = slhaea");
        pythiaOptions.push_back("Random:seed = " + std::to_string(seedBase + omp_get_thread_num()));

        result.resetSpecialization(*iter);

        try
        {
          result.init(pythia_doc_path, pythiaOptions, &slha, processLevelOutput);
        }
        catch (SpecializablePythia::InitializationError &e)
        {
          // Append new seed to override the previous one
          int newSeedBase = int(Random::draw() * 899990000.);
          pythiaOptions.push_back("Random:seed = " + std::to_string(newSeedBase));
          try
          {
            result.init(pythia_doc_path, pythiaOptions, &slha, processLevelOutput);
          }
          catch (SpecializablePythia::InitializationError &e)
          {
            piped_invalid_point.request("Bad point: Pythia can't initialize");
            Loop::wrapup();
            return;
          }
        }

        // xsec veto
        code = -1;
        nxsec = 0;
        totalxsec = 0.;
        while(true)
        {
          std::getline(processLevelOutput, readline);
          std::istringstream issPtr(readline);
          issPtr.seekg(47, issPtr.beg);
          issPtr >> code;
          if (!issPtr.good() && nxsec > 0) break;
          issPtr >> _junk >> xsec;
          if (issPtr.good())
          {
            totalxsec += xsec;
            nxsec++;
          }
        }

        /// @todo Remove the hard-coded 20.7 inverse femtobarns! This needs to be analysis-specific
        if (totalxsec * 1e12 * 20.7 < 1.) Loop::wrapup();

      }
    }


    void getPythiaFileReader(Gambit::ColliderBit::SpecializablePythia &result)
    {
      using namespace Pipes::getPythiaFileReader;

      static std::vector<std::string> filenames;
      static std::string default_doc_path;
      static std::string pythia_doc_path;
      static bool pythia_doc_path_needs_setting = true;
      static unsigned int fileCounter = 0;

      if (*Loop::iteration == BASE_INIT)
      {
        // Setup the Pythia documentation path
        if (pythia_doc_path_needs_setting)
        {
          default_doc_path = GAMBIT_DIR "/Backends/installed/Pythia/" +
                             Backends::backendInfo().default_version("Pythia") +
                             "/share/Pythia8/xmldoc/";
          pythia_doc_path = runOptions->getValueOrDef<std::string>(default_doc_path, "Pythia_doc_path");
          // Print the Pythia banner once.
          result.banner(pythia_doc_path);
          pythia_doc_path_needs_setting = false;
        }
        // If there are no debug filenames set, look for them.
        if (filenames.empty())
          filenames = runOptions->getValue<std::vector<str> >("SLHA_filenames");
        if (filenames.size() <= fileCounter) invalid_point().raise("No more SLHA files. My work is done.");

        // Pythia random number seed will be this, plus the thread number.
        seedBase = int(Random::draw() * 899990000.);
      }

      if (*Loop::iteration == INIT)
      {
        // Get pythia options
        // If the SpecializablePythia specialization is hard-coded, okay with no options.
        pythiaCommonOptions.clear();
        if (runOptions->hasKey(*iter))
          pythiaCommonOptions = runOptions->getValue<std::vector<std::string>>(*iter);
      }

      if (*Loop::iteration == START_SUBPROCESS)
      {
        result.clear();
        // variables for xsec veto
        std::stringstream processLevelOutput;
        std::string _junk, readline;
        int code, nxsec;
        double xsec, totalxsec;

        if (omp_get_thread_num() == 0) logger() << "Reading SLHA file: " << filenames.at(fileCounter) << EOM;

        // Each thread gets its own Pythia instance.
        // Thus, the actual Pythia initialization is
        // *after* INIT, within omp parallel.
        std::vector<std::string> pythiaOptions = pythiaCommonOptions;
        // Although we capture all couts, still we tell Pythia to be quiet....
        pythiaOptions.push_back("Print:quiet = on");
        // .... except for showProcesses, which we need for the xsec veto.
        pythiaOptions.push_back("Init:showProcesses = on");
        pythiaOptions.push_back("SLHA:verbose = 0");
        pythiaOptions.push_back("SLHA:file = " + filenames.at(fileCounter));
        pythiaOptions.push_back("Random:seed = " + std::to_string(seedBase + omp_get_thread_num()));

        result.resetSpecialization(*iter);

        try
        {
          result.init(pythia_doc_path, pythiaOptions, processLevelOutput);
        }
        catch (SpecializablePythia::InitializationError &e)
        {
          // Append new seed to override the previous one
          int newSeedBase = int(Random::draw() * 899990000.);
          pythiaOptions.push_back("Random:seed = " + std::to_string(newSeedBase));
          try
          {
            result.init(pythia_doc_path, pythiaOptions, processLevelOutput);
          }
          catch (SpecializablePythia::InitializationError &e)
          {
            piped_invalid_point.request("Bad point: Pythia can't initialize");
            Loop::wrapup();
            return;
          }
        }

        // xsec veto
        code = -1;
        nxsec = 0;
        totalxsec = 0.;
        while(true)
        {
          std::getline(processLevelOutput, readline);
          std::istringstream issPtr(readline);
          issPtr.seekg(47, issPtr.beg);
          issPtr >> code;
          if (!issPtr.good() && nxsec > 0) break;
          issPtr >> _junk >> xsec;
          if (issPtr.good())
          {
            totalxsec += xsec;
            nxsec++;
          }
        }

        /// @todo Remove the hard-coded 20.7 inverse femtobarns! This needs to be analysis-specific
        if (totalxsec * 1e12 * 20.7 < 1.) Loop::wrapup();

      }

      if (*Loop::iteration == FINALIZE) fileCounter++;

    }


    /// *** Detector Simulators ***

#ifndef EXCLUDE_DELPHES
    void getDelphes(Gambit::ColliderBit::DelphesVanilla &result) {
      using namespace Pipes::getDelphes;
      std::vector<std::string> delphesOptions;

      if (*Loop::iteration == BASE_INIT)
      {
        useDelphesDetector = runOptions->getValueOrDef<bool>(false, "useDelphesDetector");

        // Delphes is not threadsafe (depends on ROOT). Raise error if OMP_NUM_THREADS=1. 
        if (useDelphesDetector and omp_get_max_threads()>1)
        {
          str errmsg = "\nDelphes is not threadsafe and cannot be used with OMP_NUM_THREADS>1.\n";
          errmsg    += "Either set OMP_NUM_THREADS=1 or switch to a threadsafe detector simulator, e.g. BuckFast.";
          ColliderBit_error().raise(LOCAL_INFO, errmsg);
        }

      }
      if (*Loop::iteration == INIT and useDelphesDetector)
      {
        result.clear();
        // Reset Options
        delphesOptions.clear();
        std::string delphesConfigFile;
        GET_COLLIDER_RUNOPTION(delphesConfigFile, std::string);
        delphesOptions.push_back(delphesConfigFile);
        // Setup new Delphes
        result.init(delphesOptions);
      }
    }
#endif // not defined EXCLUDE_DELPHES
    
  
    void getBuckFastATLAS(Gambit::ColliderBit::BuckFastSmearATLAS &result)
    {
      using namespace Pipes::getBuckFastATLAS;
      bool partonOnly;
      double antiktR;
      if (*Loop::iteration == BASE_INIT)
        useBuckFastATLASDetector = runOptions->getValueOrDef<bool>(true, "useBuckFastATLASDetector");
      if (*Loop::iteration == INIT and useBuckFastATLASDetector)
      {
        result.clear();
        // Setup new BuckFast:
        partonOnly = runOptions->getValueOrDef<bool>(false, "partonOnly");
        antiktR = runOptions->getValueOrDef<double>(0.4, "antiktR");
        result.init(partonOnly, antiktR);
      }
    }


   void getBuckFastCMS(Gambit::ColliderBit::BuckFastSmearCMS &result)
    {
      using namespace Pipes::getBuckFastCMS;
      bool partonOnly;
      double antiktR;
      if (*Loop::iteration == BASE_INIT)
        useBuckFastCMSDetector = runOptions->getValueOrDef<bool>(true, "useBuckFastCMSDetector");
      if (*Loop::iteration == INIT and useBuckFastCMSDetector)
      {
        result.clear();
        // Setup new BuckFast
        partonOnly = runOptions->getValueOrDef<bool>(false, "partonOnly");
        antiktR = runOptions->getValueOrDef<double>(0.4, "antiktR");
        result.init(partonOnly, antiktR);
      }
    }


    void getBuckFastIdentity(Gambit::ColliderBit::BuckFastIdentity &result)
    {
      using namespace Pipes::getBuckFastIdentity;
      bool partonOnly;
      double antiktR;
      if (*Loop::iteration == INIT)
      {
        result.clear();
        // Setup new BuckFast
        partonOnly = runOptions->getValueOrDef<bool>(false, "partonOnly");
        antiktR = runOptions->getValueOrDef<double>(0.4, "antiktR");
        result.init(partonOnly, antiktR);
      }
    }
    
    
    /// *** Initialization for analyses ***

#ifndef EXCLUDE_DELPHES
    void getDetAnalysisContainer(Gambit::ColliderBit::HEPUtilsAnalysisContainer& result) {
      using namespace Pipes::getDetAnalysisContainer;
      if (!useDelphesDetector) return;
      
      if (*Loop::iteration == BASE_INIT) {
        GET_COLLIDER_RUNOPTION(analysisNamesDet, std::vector<std::string>);
        globalAnalysesDet.clear();
        globalAnalysesDet.init(analysisNamesDet);
        return;
      }
      
      if (*Loop::iteration == START_SUBPROCESS)
      {
        // Each thread gets its own Analysis container.
        // Thus, their initialization is *after* INIT, within omp parallel.
        result.clear();
        result.init(analysisNamesDet);
        return;
      }
      
      if (*Loop::iteration == END_SUBPROCESS && eventsGenerated)
      {
        const double xs_fb = Dep::HardScatteringSim->xsec_pb() * 1000.;
        const double xserr_fb = Dep::HardScatteringSim->xsecErr_pb() * 1000.;
        result.add_xsec(xs_fb, xserr_fb);
        
        // Combine results from the threads together
        #pragma omp critical (access_globalAnalyses)
        {
          globalAnalysesDet.add(result);
          // Use improve_xsec to combine results from the same process type
          globalAnalysesDet.improve_xsec(result);
        }
        return;
      }
      
    }
#endif // not defined EXCLUDE_DELPHES
    
    void getATLASAnalysisContainer(Gambit::ColliderBit::HEPUtilsAnalysisContainer& result) {
      using namespace Pipes::getATLASAnalysisContainer;
      if (!useBuckFastATLASDetector) return;

      if (*Loop::iteration == BASE_INIT) {
        GET_COLLIDER_RUNOPTION(analysisNamesATLAS, std::vector<std::string>);
        globalAnalysesATLAS.clear();
        globalAnalysesATLAS.init(analysisNamesATLAS);
        return;
      }

      if (*Loop::iteration == START_SUBPROCESS)
      {
        // Each thread gets its own Analysis container.
        // Thus, their initialization is *after* INIT, within omp parallel.
        result.clear();
        result.init(analysisNamesATLAS);
        return;
      }

      if (*Loop::iteration == END_SUBPROCESS && eventsGenerated)
      {
        const double xs_fb = Dep::HardScatteringSim->xsec_pb() * 1000.;
        const double xserr_fb = Dep::HardScatteringSim->xsecErr_pb() * 1000.;
        result.add_xsec(xs_fb, xserr_fb);

        // Combine results from the threads together
        #pragma omp critical (access_globalAnalyses)
        {
          globalAnalysesATLAS.add(result);
          // Use improve_xsec to combine results from the same process type
          globalAnalysesATLAS.improve_xsec(result);
        }
        return;
      }

    }

    void getCMSAnalysisContainer(Gambit::ColliderBit::HEPUtilsAnalysisContainer& result) {
      using namespace Pipes::getCMSAnalysisContainer;
      if (!useBuckFastCMSDetector) return;

      if (*Loop::iteration == BASE_INIT) {
        GET_COLLIDER_RUNOPTION(analysisNamesCMS, std::vector<std::string>);
        globalAnalysesCMS.clear();
        globalAnalysesCMS.init(analysisNamesCMS);
        return;
      }

      if (*Loop::iteration == START_SUBPROCESS)
      {
        // Each thread gets its own Analysis container.
        // Thus, their initialization is *after* INIT, within omp parallel.
        result.clear();
        result.init(analysisNamesCMS);
        return;
      }

      if (*Loop::iteration == END_SUBPROCESS && eventsGenerated)
      {
        const double xs_fb = Dep::HardScatteringSim->xsec_pb() * 1000.;
        const double xserr_fb = Dep::HardScatteringSim->xsecErr_pb() * 1000.;
        result.add_xsec(xs_fb, xserr_fb);

        // Combine results from the threads together
        #pragma omp critical (access_globalAnalyses)
        {
          globalAnalysesCMS.add(result);
          // Use improve_xsec to combine results from the same process type
          globalAnalysesCMS.improve_xsec(result);
        }
        return;
      }

    }



    /// *** Hard Scattering Event Generators ***

    void generatePythia8Event(Pythia8::Event& result)
    {
      using namespace Pipes::generatePythia8Event;
      if (*Loop::iteration <= BASE_INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      try
      {
        Dep::HardScatteringSim->nextEvent(result);
      }
      catch (SpecializablePythia::EventFailureError &e)
      {
        piped_invalid_point.request("Bad point: Pythia can't generate events");
        Loop::wrapup();
        return;
      }

    }



    /// *** Standard Event Format Functions ***

  #ifndef EXCLUDE_DELPHES
    void reconstructDelphesEvent(HEPUtils::Event& result) {
      using namespace Pipes::reconstructDelphesEvent;
      if (*Loop::iteration <= BASE_INIT or !useDelphesDetector) return;
      result.clear();

#pragma omp critical (Delphes)
      {
        try {
          (*Dep::DetectorSim).processEvent(*Dep::HardScatteringEvent, result);
        } catch (std::domain_error& e) {
          std::cerr<<"\n== ColliderBit Warning ==";
          std::cerr<<"\n   Event problem: "<<e.what();
          std::cerr<<"\n   See ColliderBit log for event details.";
          std::stringstream ss;
          Dep::HardScatteringEvent->list(ss, 1);
          logger() << ss.str() << EOM;
          throw e;
        }
      }
    }
#endif // not defined EXCLUDE_DELPHES
    

      void smearEventATLAS(HEPUtils::Event& result) {
      using namespace Pipes::smearEventATLAS;
      if (*Loop::iteration <= BASE_INIT or !useBuckFastATLASDetector) return;
      result.clear();

      // Get the next event from Pythia8, convert to HEPUtils::Event, and smear it
      try {
        (*Dep::SimpleSmearingSim).processEvent(*Dep::HardScatteringEvent, result);
      } catch (std::domain_error& e) {
#pragma omp critical (event_warning)
        {
          std::cerr<<"\n== ColliderBit Warning ==";
          std::cerr<<"\n   Event problem: "<<e.what();
          std::cerr<<"\n   See ColliderBit log for event details.";
          std::stringstream ss;
          Dep::HardScatteringEvent->list(ss, 1);
          logger() << ss.str() << EOM;
        }
        throw e;
      }
    }

    void smearEventCMS(HEPUtils::Event& result) {
      using namespace Pipes::smearEventCMS;
      if (*Loop::iteration <= BASE_INIT or !useBuckFastCMSDetector) return;
      result.clear();

      // Get the next event from Pythia8, convert to HEPUtils::Event, and smear it
      try {
        (*Dep::SimpleSmearingSim).processEvent(*Dep::HardScatteringEvent, result);
      } catch (std::domain_error& e) {
#pragma omp critical (event_warning)
        {
          std::cerr<<"\n== ColliderBit Warning ==";
          std::cerr<<"\n   Event problem: "<<e.what();
          std::cerr<<"\n   See ColliderBit log for event details.";
          std::stringstream ss;
          Dep::HardScatteringEvent->list(ss, 1);
          logger() << ss.str() << EOM;
        }
        throw e;
      }
    }

    void copyEvent(HEPUtils::Event& result) {
      using namespace Pipes::copyEvent;
      if (*Loop::iteration <= BASE_INIT) return;
      result.clear();

      // Get the next event from Pythia8 and convert to HEPUtils::Event
      try
      {
        (*Dep::SimpleSmearingSim).processEvent(*Dep::HardScatteringEvent, result);
      }
      catch (std::domain_error& e)
      {
        #pragma omp critical (event_warning)
        {
          std::cerr<<"\n== ColliderBit Warning ==";
          std::cerr<<"\n   Event problem: "<<e.what();
          std::cerr<<"\n   See ColliderBit log for event details.";
          std::stringstream ss;
          Dep::HardScatteringEvent->list(ss, 1);
          logger() << ss.str() << EOM;
        }
        throw e;
      }
    }



    /// *** Analysis Accumulators ***

#ifndef EXCLUDE_DELPHES
    void runDetAnalyses(ColliderLogLikes& result)
    {
      using namespace Pipes::runDetAnalyses;
      if (!useDelphesDetector) return;
      if (*Loop::iteration == FINALIZE && eventsGenerated) {
        // The final iteration: get log likelihoods for the analyses
        result.clear();
        globalAnalysesDet.scale();
        for (auto anaPtr = globalAnalysesDet.analyses.begin();
                  anaPtr != globalAnalysesDet.analyses.end(); ++anaPtr)
          result.push_back((*anaPtr)->get_results());
        return;
      }

      if (*Loop::iteration <= BASE_INIT) return;

      // Loop over analyses and run them... Managed by HEPUtilsAnalysisContainer
      Dep::DetAnalysisContainer->analyze(*Dep::ReconstructedEvent);
    }
#endif // not defined EXCLUDE_DELPHES
    

    void runATLASAnalyses(ColliderLogLikes& result)
    {
      using namespace Pipes::runATLASAnalyses;
      if (!useBuckFastATLASDetector) return;
      if (*Loop::iteration == FINALIZE && eventsGenerated)
      {
        // The final iteration: get log likelihoods for the analyses
        result.clear();
        globalAnalysesATLAS.scale();
        for (auto anaPtr = globalAnalysesATLAS.analyses.begin(); anaPtr != globalAnalysesATLAS.analyses.end(); ++anaPtr)
          result.push_back((*anaPtr)->get_results());
        return;
      }

      if (*Loop::iteration <= BASE_INIT) return;

      // Loop over analyses and run them... Managed by HEPUtilsAnalysisContainer
      Dep::ATLASAnalysisContainer->analyze(*Dep::ATLASSmearedEvent);
    }


    void runCMSAnalyses(ColliderLogLikes& result)
    {
      using namespace Pipes::runCMSAnalyses;
      if (!useBuckFastCMSDetector) return;
      if (*Loop::iteration == FINALIZE && eventsGenerated)
      {
        // The final iteration: get log likelihoods for the analyses
        result.clear();
        globalAnalysesCMS.scale();
        for (auto anaPtr = globalAnalysesCMS.analyses.begin(); anaPtr != globalAnalysesCMS.analyses.end(); ++anaPtr)
          result.push_back((*anaPtr)->get_results());
        return;
      }

      if (*Loop::iteration <= BASE_INIT) return;

      // Loop over analyses and run them... Managed by HEPUtilsAnalysisContainer
      Dep::CMSAnalysisContainer->analyze(*Dep::CMSSmearedEvent);
    }



    /// Loop over all analyses (and SRs within one analysis) and fill a vector of observed likelihoods
    void calc_LHC_LogLike(double& result) {
      using namespace Pipes::calc_LHC_LogLike;
      /* The use of the following requires ALLOW_MODEL(CMSSM) in the rollcall.
      logger() << "This model:";
      logger() << "\nm0: " << *Param["M0"];
      logger() << "\nm1/2: " << *Param["M12"] << EOM;
      */

      // xsec veto
      if (not eventsGenerated)
      {
        logger() << "This point was xsec vetoed." << EOM;
        result = 0.;
        return;
      }
      ColliderLogLikes analysisResults;
      if(useBuckFastATLASDetector)
        analysisResults.insert(analysisResults.end(),
                Dep::ATLASAnalysisNumbers->begin(), Dep::ATLASAnalysisNumbers->end());
      if(useBuckFastCMSDetector)
        analysisResults.insert(analysisResults.end(),
                Dep::CMSAnalysisNumbers->begin(), Dep::CMSAnalysisNumbers->end());
#ifndef EXCLUDE_DELPHES
      if (useDelphesDetector)
        analysisResults.insert(analysisResults.end(), Dep::DetAnalysisNumbers->begin(), Dep::DetAnalysisNumbers->end());
#endif
      // Loop over analyses and calculate the total observed dll
      double total_dll_obs = 0;
      for (size_t analysis = 0; analysis < analysisResults.size(); ++analysis)
      {
        // cout << "In analysis loop" << endl;

        // Loop over the signal regions inside the analysis, and work out the total (delta) log likelihood for this analysis
        /// @note In general each analysis could/should work out its own likelihood so they can handle SR combination if possible.
        /// @note For now we just take the result from the SR *expected* to be most constraining, i.e. with highest expected dll
        double bestexp_dll_exp = 0, bestexp_dll_obs = 0;
        for (size_t SR = 0; SR < analysisResults[analysis].size(); ++SR)
        {
          // cout << "In signal region loop" << endl;
          SignalRegionData srData = analysisResults[analysis][SR];

          // Actual observed number of events
          const int n_obs = (int) round(srData.n_observed);

          // A contribution to the predicted number of events that is known exactly
          // (e.g. from data-driven background estimate)
          const double n_predicted_exact = 0;

          // A contribution to the predicted number of events that is not known exactly
          const double n_predicted_uncertain_b = srData.n_background;
          const double n_predicted_uncertain_sb = srData.n_signal_at_lumi + srData.n_background;

          // Relative error for n_predicted_uncertain
          const double uncertainty_b = srData.background_sys/srData.n_background;
          const double uncertainty_sb = sqrt(srData.background_sys*srData.background_sys + srData.signal_sys*srData.signal_sys) / n_predicted_uncertain_sb;

          const int n_predicted_total_b_int = (int) round(n_predicted_exact + n_predicted_uncertain_b);

          #ifdef COLLIDERBIT_DEBUG
            logger() << endl;
            logger() << "COLLIDER_RESULT " << srData.analysis_name << " " << srData.sr_label << endl;
            logger() << "  NEvents, not scaled to luminosity :" << endl;
            logger() << "    " << srData.n_signal << endl;
            logger() << "  NEvents, scaled  to luminosity :  " << endl;
            logger() << "    " << srData.n_signal_at_lumi << endl;
            logger() << "  NEvents (b [rel err], sb [rel err]):" << endl;
            logger() << "    " << n_predicted_uncertain_b << " [" << uncertainty_b << "] "
                     << n_predicted_uncertain_sb << " [" << uncertainty_sb << "]" << EOM;
          #endif

          double llb_exp = 0, llsb_exp = 0, llb_obs = 0, llsb_obs = 0;
          // Use a log-normal distribution for the nuisance parameter (more correct)
          if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_lognormal_error") {
            llb_exp = BEreq::lnlike_marg_poisson_lognormal_error(n_predicted_total_b_int, n_predicted_exact, n_predicted_uncertain_b, uncertainty_b);
            llsb_exp = BEreq::lnlike_marg_poisson_lognormal_error(n_predicted_total_b_int, n_predicted_exact, n_predicted_uncertain_sb, uncertainty_sb);
            llb_obs = BEreq::lnlike_marg_poisson_lognormal_error(n_obs, n_predicted_exact, n_predicted_uncertain_b, uncertainty_b);
            llsb_obs = BEreq::lnlike_marg_poisson_lognormal_error(n_obs, n_predicted_exact, n_predicted_uncertain_sb, uncertainty_sb);
          }
          // Use a Gaussian distribution for the nuisance parameter (marginally faster)
          else if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_gaussian_error") {
            llb_exp = BEreq::lnlike_marg_poisson_gaussian_error(n_predicted_total_b_int, n_predicted_exact, n_predicted_uncertain_b, uncertainty_b);
            llsb_exp = BEreq::lnlike_marg_poisson_gaussian_error(n_predicted_total_b_int, n_predicted_exact, n_predicted_uncertain_sb, uncertainty_sb);
            llb_obs = BEreq::lnlike_marg_poisson_gaussian_error(n_obs, n_predicted_exact, n_predicted_uncertain_b, uncertainty_b);
            llsb_obs = BEreq::lnlike_marg_poisson_gaussian_error(n_obs, n_predicted_exact, n_predicted_uncertain_sb, uncertainty_sb);
          }

          // Calculate the expected dll and set the bestexp values for exp and obs dll if this one is the best so far
          const double dll_exp = llb_exp - llsb_exp; //< note positive dll convention -> more exclusion here
          if (dll_exp > bestexp_dll_exp) {
            bestexp_dll_exp = dll_exp;
            bestexp_dll_obs = llb_obs - llsb_obs;
          }

          // The following was used for some final tests of ColliderBit:
          #ifdef COLLIDERBIT_DEBUG
            logger() << endl;
            logger() << "COLLIDER_RESULT " << srData.analysis_name << " " << srData.sr_label << endl;
            logger() << "  LLikes (b_ex sb_ex b_obs sb_obs):" << endl;
            logger() << "    " << llb_exp << " " << llsb_exp << " "
                     << llb_obs << " " << llsb_obs << endl;
            logger() << "  NEvents, not scaled to luminosity :" << endl;
            logger() << "    " << srData.n_signal << endl;
            logger() << "  NEvents (b [rel err], sb [rel err]):" << endl;
            logger() << "    " << n_predicted_uncertain_b << " [" << uncertainty_b << "] "
                     << n_predicted_uncertain_sb << " [" << uncertainty_sb << "]" << EOM;
          #endif

        } // end SR loop

        // Update the total obs dll
        /// @note For now we assume that the analyses are fully orthogonal, i.e. no possiblity that the same event appears twice -> straight addition
        total_dll_obs += bestexp_dll_obs;

      } // end ana loop

      #ifdef COLLIDERBIT_DEBUG
        logger() << "COLLIDERBIT LIKELIHOOD " << -total_dll_obs << EOM;
      #endif
      // Set the single DLL to be returned (with conversion to more negative dll = more exclusion convention)
      result = -total_dll_obs;
    }


    // *** Limits from e+e- colliders ***

    /// ee --> selectron pair production cross-sections at 208 GeV
    /// @{
    void LEP208_SLHA1_convention_xsec_selselbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_selselbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 1, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_selserbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_selserbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 1, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_serserbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_serserbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 1, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_serselbar(triplet<double>& result)
    {
      result = *Pipes::LEP208_SLHA1_convention_xsec_serselbar::Dep::LEP208_xsec_selserbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_se1se1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_se1se1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 1, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_se1se2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_se1se2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 1, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_se2se2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_se2se2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 1, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_se2se1bar(triplet<double>& result)
    {
      result = *Pipes::LEP208_SLHA1_convention_xsec_se2se1bar::Dep::LEP208_xsec_se1se2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}

    /// ee --> smuon pair production cross-sections at 208 GeV
    /// @{
    void LEP208_SLHA1_convention_xsec_smulsmulbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_smulsmulbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 2, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_smulsmurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_smulsmurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 2, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_smursmurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_smursmurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 2, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_smursmulbar(triplet<double>& result)
    {
      result = *Pipes::LEP208_SLHA1_convention_xsec_smursmulbar::Dep::LEP208_xsec_smulsmurbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_smu1smu1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_smu1smu1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 2, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_smu1smu2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_smu1smu2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 2, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_smu2smu2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_smu2smu2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 2, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_smu2smu1bar(triplet<double>& result)
    {
      result = *Pipes::LEP208_SLHA1_convention_xsec_smu2smu1bar::Dep::LEP208_xsec_smu1smu2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}

    /// ee --> stau pair production cross-sections at 208 GeV
    /// @{
    void LEP208_SLHA1_convention_xsec_staulstaulbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_staulstaulbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 3, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_staulstaurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_staulstaurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 3, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_staurstaurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_staurstaurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 3, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_staurstaulbar(triplet<double>& result)
    {
      result = *Pipes::LEP208_SLHA1_convention_xsec_staurstaulbar::Dep::LEP208_xsec_staulstaurbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_stau1stau1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_stau1stau1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 3, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_stau1stau2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_stau1stau2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 3, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_stau2stau2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_stau2stau2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 208.0, 3, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_stau2stau1bar(triplet<double>& result)
    {
      result = *Pipes::LEP208_SLHA1_convention_xsec_stau2stau1bar::Dep::LEP208_xsec_stau1stau2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}


    /// ee --> neutralino pair production cross-sections at 208 GeV
    /// @{
    void LEP208_SLHA1_convention_xsec_chi00_11(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_11;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 1, 1, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_12(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_12;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 1, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_13(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_13;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 1, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_14(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_14;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 1, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_22(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_22;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 2, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_23(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_23;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 2, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_24(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_24;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 2, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_33(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_33;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 3, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_34(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_34;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 3, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chi00_44(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chi00_44;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 208.0, 4, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}


    /// ee --> chargino pair production cross-sections at 208 GeV
    /// @{
    void LEP208_SLHA1_convention_xsec_chipm_11(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chipm_11;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 208.0, 1, 1, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chipm_12(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chipm_12;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 208.0, 1, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chipm_22(triplet<double>& result)
    {
      using namespace Pipes::LEP208_SLHA1_convention_xsec_chipm_22;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 208.0, 2, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP208_SLHA1_convention_xsec_chipm_21(triplet<double>& result)
    {
      result = *Pipes::LEP208_SLHA1_convention_xsec_chipm_21::Dep::LEP208_xsec_chipm_12;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}


    /// ee --> selectron pair production cross-sections at 205 GeV
    /// @{
    void LEP205_SLHA1_convention_xsec_selselbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_selselbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 1, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_selserbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_selserbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 1, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_serserbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_serserbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 1, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_serselbar(triplet<double>& result)
    {
      result = *Pipes::LEP205_SLHA1_convention_xsec_serselbar::Dep::LEP205_xsec_selserbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_se1se1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_se1se1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 1, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_se1se2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_se1se2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 1, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_se2se2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_se2se2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 1, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_se2se1bar(triplet<double>& result)
    {
      result = *Pipes::LEP205_SLHA1_convention_xsec_se2se1bar::Dep::LEP205_xsec_se1se2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}

    /// ee --> smuon pair production cross-sections at 205 GeV
    /// @{
    void LEP205_SLHA1_convention_xsec_smulsmulbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_smulsmulbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 2, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_smulsmurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_smulsmurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 2, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_smursmurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_smursmurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 2, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_smursmulbar(triplet<double>& result)
    {
      result = *Pipes::LEP205_SLHA1_convention_xsec_smursmulbar::Dep::LEP205_xsec_smulsmurbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_smu1smu1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_smu1smu1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 2, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_smu1smu2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_smu1smu2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 2, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_smu2smu2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_smu2smu2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 2, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_smu2smu1bar(triplet<double>& result)
    {
      result = *Pipes::LEP205_SLHA1_convention_xsec_smu2smu1bar::Dep::LEP205_xsec_smu1smu2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}

    /// ee --> stau pair production cross-sections at 205 GeV
    /// @{
    void LEP205_SLHA1_convention_xsec_staulstaulbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_staulstaulbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 3, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_staulstaurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_staulstaurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 3, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_staurstaurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_staurstaurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 3, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_staurstaulbar(triplet<double>& result)
    {
      result = *Pipes::LEP205_SLHA1_convention_xsec_staurstaulbar::Dep::LEP205_xsec_staulstaurbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_stau1stau1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_stau1stau1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 3, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_stau1stau2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_stau1stau2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 3, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_stau2stau2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_stau2stau2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 205.0, 3, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_stau2stau1bar(triplet<double>& result)
    {
      result = *Pipes::LEP205_SLHA1_convention_xsec_stau2stau1bar::Dep::LEP205_xsec_stau1stau2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}


    /// ee --> neutralino pair production cross-sections at 205 GeV
    /// @{
    void LEP205_SLHA1_convention_xsec_chi00_11(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_11;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 1, 1, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_12(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_12;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 1, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_13(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_13;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 1, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_14(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_14;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 1, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_22(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_22;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 2, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_23(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_23;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 2, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_24(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_24;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 2, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_33(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_33;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 3, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_34(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_34;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 3, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chi00_44(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chi00_44;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 205.0, 4, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}


    /// ee --> chargino pair production cross-sections at 205 GeV
    /// @{
    void LEP205_SLHA1_convention_xsec_chipm_11(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chipm_11;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 205.0, 1, 1, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chipm_12(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chipm_12;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 205.0, 1, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chipm_22(triplet<double>& result)
    {
      using namespace Pipes::LEP205_SLHA1_convention_xsec_chipm_22;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 205.0, 2, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP205_SLHA1_convention_xsec_chipm_21(triplet<double>& result)
    {
      result = *Pipes::LEP205_SLHA1_convention_xsec_chipm_21::Dep::LEP205_xsec_chipm_12;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }

    /// ee --> selectron pair production cross-sections at 188.6 GeV
    /// @{
    void LEP188_SLHA1_convention_xsec_selselbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_selselbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 1, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_selserbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_selserbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 1, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_serserbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_serserbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 1, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_serselbar(triplet<double>& result)
    {
      result = *Pipes::LEP188_SLHA1_convention_xsec_serselbar::Dep::LEP188_xsec_selserbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_se1se1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_se1se1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 1, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_se1se2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_se1se2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 1, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_se2se2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_se2se2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 1, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_se2se1bar(triplet<double>& result)
    {
      result = *Pipes::LEP188_SLHA1_convention_xsec_se2se1bar::Dep::LEP188_xsec_se1se2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}

    /// ee --> smuon pair production cross-sections at 188.6 GeV
    /// @{
    void LEP188_SLHA1_convention_xsec_smulsmulbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_smulsmulbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 2, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_smulsmurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_smulsmurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 2, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_smursmurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_smursmurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 2, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_smursmulbar(triplet<double>& result)
    {
      result = *Pipes::LEP188_SLHA1_convention_xsec_smursmulbar::Dep::LEP188_xsec_smulsmurbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_smu1smu1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_smu1smu1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 2, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_smu1smu2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_smu1smu2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 2, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_smu2smu2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_smu2smu2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 2, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_smu2smu1bar(triplet<double>& result)
    {
      result = *Pipes::LEP188_SLHA1_convention_xsec_smu2smu1bar::Dep::LEP188_xsec_smu1smu2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}

    /// ee --> stau pair production cross-sections at 188.6 GeV
    /// @{
    void LEP188_SLHA1_convention_xsec_staulstaulbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_staulstaulbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 3, 1, 1, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_staulstaurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_staulstaurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 3, 1, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_staurstaurbar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_staurstaurbar;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 3, 2, 2, tol, tol, pt_error, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, true);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_staurstaulbar(triplet<double>& result)
    {
      result = *Pipes::LEP188_SLHA1_convention_xsec_staurstaulbar::Dep::LEP188_xsec_staulstaurbar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_stau1stau1bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_stau1stau1bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 3, 1, 1, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_stau1stau2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_stau1stau2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 3, 1, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_stau2stau2bar(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_stau2stau2bar;
      const static double gtol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool gpt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      const static double ftol = runOptions->getValueOrDef<double>(1e-2, "family_mixing_tolerance");
      const static bool fpt_error = runOptions->getValueOrDef<bool>(true, "family_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_ll(result, 188.6, 3, 2, 2, gtol, ftol, gpt_error, fpt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV, false);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_stau2stau1bar(triplet<double>& result)
    {
      result = *Pipes::LEP188_SLHA1_convention_xsec_stau2stau1bar::Dep::LEP188_xsec_stau1stau2bar;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}


    /// ee --> neutralino pair production cross-sections at 188.6 GeV
    /// @{
    void LEP188_SLHA1_convention_xsec_chi00_11(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_11;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 1, 1, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_12(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_12;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 1, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_13(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_13;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 1, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_14(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_14;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 1, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_22(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_22;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 2, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_23(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_23;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 2, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_24(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_24;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 2, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_33(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_33;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 3, 3, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_34(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_34;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 3, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chi00_44(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chi00_44;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chi00(result, 188.6, 4, 4, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}


    /// ee --> chargino pair production cross-sections at 188.6 GeV
    /// @{
    void LEP188_SLHA1_convention_xsec_chipm_11(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chipm_11;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 188.6, 1, 1, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chipm_12(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chipm_12;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 188.6, 1, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chipm_22(triplet<double>& result)
    {
      using namespace Pipes::LEP188_SLHA1_convention_xsec_chipm_22;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");
      get_sigma_ee_chipm(result, 188.6, 2, 2, tol, pt_error, *Dep::MSSM_spectrum, Dep::Z_decay_rates->width_in_GeV);
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    void LEP188_SLHA1_convention_xsec_chipm_21(triplet<double>& result)
    {
      result = *Pipes::LEP188_SLHA1_convention_xsec_chipm_21::Dep::LEP188_xsec_chipm_12;
      if (!is_xsec_sane(result))
        ColliderBit_error().raise(LOCAL_INFO, "Non-physical LEP cross section!");
    }
    /// @}


    /// LEP Slepton Log-Likelihoods
    /// @{
    void ALEPH_Selectron_Conservative_LLike(double& result)
    {
      static const ALEPHSelectronLimitAt208GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(45., 115., 0., 100., "lepLimitPlanev2/ALEPHSelectronLimitAt208GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::ALEPH_Selectron_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;

      double max_mixing;
      const SubSpectrum& mssm = spec.get_HE();
      str sel_string = slhahelp::mass_es_from_gauge_es("~e_L", max_mixing, mssm);
      str ser_string = slhahelp::mass_es_from_gauge_es("~e_R", max_mixing, mssm);
      const double mass_seL=spec.get(Par::Pole_Mass,sel_string);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_seR = spec.get(Par::Pole_Mass,ser_string);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these two processes individually:

      // se_L, se_L
      xsecLimit = limitContainer.limitAverage(mass_seL, mass_neut1, mZ);
      xsecWithError = *Dep::LEP208_xsec_selselbar;
      xsecWithError.upper *= pow(Dep::selectron_l_decay_rates->BF("~chi0_1", "e-"), 2);
      xsecWithError.central *= pow(Dep::selectron_l_decay_rates->BF("~chi0_1", "e-"), 2);
      xsecWithError.lower *= pow(Dep::selectron_l_decay_rates->BF("~chi0_1", "e-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // se_R, se_R
      xsecLimit = limitContainer.limitAverage(mass_seR, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_serserbar;
      xsecWithError.upper *= pow(Dep::selectron_r_decay_rates->BF("~chi0_1", "e-"), 2);
      xsecWithError.central *= pow(Dep::selectron_r_decay_rates->BF("~chi0_1", "e-"), 2);
      xsecWithError.lower *= pow(Dep::selectron_r_decay_rates->BF("~chi0_1", "e-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void ALEPH_Smuon_Conservative_LLike(double& result)
    {
      static const ALEPHSmuonLimitAt208GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(45., 115., 0., 100., "lepLimitPlanev2/ALEPHSmuonLimitAt208GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::ALEPH_Smuon_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;

      double max_mixing;
      const SubSpectrum& mssm = spec.get_HE();
      str smul_string = slhahelp::mass_es_from_gauge_es("~mu_L", max_mixing, mssm);
      str smur_string = slhahelp::mass_es_from_gauge_es("~mu_R", max_mixing, mssm);
      const double mass_smuL=spec.get(Par::Pole_Mass,smul_string);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_smuR = spec.get(Par::Pole_Mass,smur_string);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these two processes individually:

      // smu_L, smu_L
      xsecLimit = limitContainer.limitAverage(mass_smuL, mass_neut1, mZ);
      xsecWithError = *Dep::LEP208_xsec_smulsmulbar;
      xsecWithError.upper *= pow(Dep::smuon_l_decay_rates->BF("~chi0_1", "mu-"), 2);
      xsecWithError.central *= pow(Dep::smuon_l_decay_rates->BF("~chi0_1", "mu-"), 2);
      xsecWithError.lower *= pow(Dep::smuon_l_decay_rates->BF("~chi0_1", "mu-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // smu_R, smu_R
      xsecLimit = limitContainer.limitAverage(mass_smuR, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_smursmurbar;
      xsecWithError.upper *= pow(Dep::smuon_r_decay_rates->BF("~chi0_1", "mu-"), 2);
      xsecWithError.central *= pow(Dep::smuon_r_decay_rates->BF("~chi0_1", "mu-"), 2);
      xsecWithError.lower *= pow(Dep::smuon_r_decay_rates->BF("~chi0_1", "mu-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void ALEPH_Stau_Conservative_LLike(double& result)
    {
      static const ALEPHStauLimitAt208GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(45., 115., 0., 100., "lepLimitPlanev2/ALEPHStauLimitAt208GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::ALEPH_Stau_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const SubSpectrum& mssm = spec.get_HE();
      const static double tol = runOptions->getValueOrDef<double>(1e-5, "family_mixing_tolerance");
      const static bool pterror = runOptions->getValueOrDef<bool>(false, "family_mixing_tolerance_invalidates_point_only");
      str stau1_string = slhahelp::mass_es_closest_to_family("~tau_1", mssm,tol,LOCAL_INFO,pterror);
      str stau2_string = slhahelp::mass_es_closest_to_family("~tau_2", mssm,tol,LOCAL_INFO,pterror);
      const double mass_stau1=spec.get(Par::Pole_Mass,stau1_string);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_stau2 = spec.get(Par::Pole_Mass,stau2_string);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these two processes individually:

      // stau_1, stau_1
      xsecLimit = limitContainer.limitAverage(mass_stau1, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_stau1stau1bar;
      xsecWithError.upper *= pow(Dep::stau_1_decay_rates->BF("~chi0_1", "tau-"), 2);
      xsecWithError.central *= pow(Dep::stau_1_decay_rates->BF("~chi0_1", "tau-"), 2);
      xsecWithError.lower *= pow(Dep::stau_1_decay_rates->BF("~chi0_1", "tau-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // stau_2, stau_2
      xsecLimit = limitContainer.limitAverage(mass_stau2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_stau2stau2bar;
      xsecWithError.upper *= pow(Dep::stau_2_decay_rates->BF("~chi0_1", "tau-"), 2);
      xsecWithError.central *= pow(Dep::stau_2_decay_rates->BF("~chi0_1", "tau-"), 2);
      xsecWithError.lower *= pow(Dep::stau_2_decay_rates->BF("~chi0_1", "tau-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void L3_Selectron_Conservative_LLike(double& result)
    {
      static const L3SelectronLimitAt205GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(45., 115., 0., 100., "lepLimitPlanev2/L3SelectronLimitAt205GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::L3_Selectron_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;

      double max_mixing;
      const SubSpectrum& mssm = spec.get_HE();
      str sel_string = slhahelp::mass_es_from_gauge_es("~e_L", max_mixing, mssm);
      str ser_string = slhahelp::mass_es_from_gauge_es("~e_R", max_mixing, mssm);
      const double mass_seL=spec.get(Par::Pole_Mass,sel_string);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_seR = spec.get(Par::Pole_Mass,ser_string);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these two processes individually:

      // se_L, se_L
      xsecLimit = limitContainer.limitAverage(mass_seL, mass_neut1, mZ);

      xsecWithError = *Dep::LEP205_xsec_selselbar;
      xsecWithError.upper *= pow(Dep::selectron_l_decay_rates->BF("~chi0_1", "e-"), 2);
      xsecWithError.central *= pow(Dep::selectron_l_decay_rates->BF("~chi0_1", "e-"), 2);
      xsecWithError.lower *= pow(Dep::selectron_l_decay_rates->BF("~chi0_1", "e-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // se_R, se_R
      xsecLimit = limitContainer.limitAverage(mass_seR, mass_neut1, mZ);

      xsecWithError = *Dep::LEP205_xsec_serserbar;
      xsecWithError.upper *= pow(Dep::selectron_r_decay_rates->BF("~chi0_1", "e-"), 2);
      xsecWithError.central *= pow(Dep::selectron_r_decay_rates->BF("~chi0_1", "e-"), 2);
      xsecWithError.lower *= pow(Dep::selectron_r_decay_rates->BF("~chi0_1", "e-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void L3_Smuon_Conservative_LLike(double& result)
    {
      static const L3SmuonLimitAt205GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      // static bool dumped=false;
      // if(!dumped)
      // {
      //   limitContainer.dumpPlotData(45., 115., 0., 100., "lepLimitPlanev2/L3SmuonLimitAt205GeV.dump");
      //   dumped=true;
      // }
      // #endif
      using namespace Pipes::L3_Smuon_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      double max_mixing;
      const SubSpectrum& mssm = spec.get_HE();
      str smul_string = slhahelp::mass_es_from_gauge_es("~mu_L", max_mixing, mssm);
      str smur_string = slhahelp::mass_es_from_gauge_es("~mu_R", max_mixing, mssm);
      const double mass_smuL=spec.get(Par::Pole_Mass,smul_string);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_smuR = spec.get(Par::Pole_Mass,smur_string);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these two processes individually:

      // smu_L, smu_L
      xsecLimit = limitContainer.limitAverage(mass_smuL, mass_neut1, mZ);

      xsecWithError = *Dep::LEP205_xsec_smulsmulbar;
      xsecWithError.upper *= pow(Dep::smuon_l_decay_rates->BF("~chi0_1", "mu-"), 2);
      xsecWithError.central *= pow(Dep::smuon_l_decay_rates->BF("~chi0_1", "mu-"), 2);
      xsecWithError.lower *= pow(Dep::smuon_l_decay_rates->BF("~chi0_1", "mu-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // smu_R, smu_R
      xsecLimit = limitContainer.limitAverage(mass_smuR, mass_neut1, mZ);

      xsecWithError = *Dep::LEP205_xsec_smursmurbar;
      xsecWithError.upper *= pow(Dep::smuon_r_decay_rates->BF("~chi0_1", "mu-"), 2);
      xsecWithError.central *= pow(Dep::smuon_r_decay_rates->BF("~chi0_1", "mu-"), 2);
      xsecWithError.lower *= pow(Dep::smuon_r_decay_rates->BF("~chi0_1", "mu-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void L3_Stau_Conservative_LLike(double& result)
    {
      static const L3StauLimitAt205GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(45., 115., 0., 100., "lepLimitPlanev2/L3StauLimitAt205GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::L3_Stau_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const SubSpectrum& mssm = spec.get_HE();
      const static double tol = runOptions->getValueOrDef<double>(1e-5, "family_mixing_tolerance");
      const static bool pterror = runOptions->getValueOrDef<bool>(false, "family_mixing_tolerance_invalidates_point_only");
      str stau1_string = slhahelp::mass_es_closest_to_family("~tau_1", mssm,tol,LOCAL_INFO,pterror);
      str stau2_string = slhahelp::mass_es_closest_to_family("~tau_2", mssm,tol,LOCAL_INFO,pterror);
      const double mass_stau1=spec.get(Par::Pole_Mass,stau1_string);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_stau2 = spec.get(Par::Pole_Mass,stau2_string);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these two processes individually:

      // stau_1, stau_1
      xsecLimit = limitContainer.limitAverage(mass_stau1, mass_neut1, mZ);

      xsecWithError = *Dep::LEP205_xsec_stau1stau1bar;
      xsecWithError.upper *= pow(Dep::stau_1_decay_rates->BF("~chi0_1", "tau-"), 2);
      xsecWithError.central *= pow(Dep::stau_1_decay_rates->BF("~chi0_1", "tau-"), 2);
      xsecWithError.lower *= pow(Dep::stau_1_decay_rates->BF("~chi0_1", "tau-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // stau_2, stau_2
      xsecLimit = limitContainer.limitAverage(mass_stau2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP205_xsec_stau2stau2bar;
      xsecWithError.upper *= pow(Dep::stau_2_decay_rates->BF("~chi0_1", "tau-"), 2);
      xsecWithError.central *= pow(Dep::stau_2_decay_rates->BF("~chi0_1", "tau-"), 2);
      xsecWithError.lower *= pow(Dep::stau_2_decay_rates->BF("~chi0_1", "tau-"), 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }
    /// @}

    /// LEP Gaugino Log-Likelihoods
    /// @{
    void L3_Neutralino_All_Channels_Conservative_LLike(double& result)
    {
      static const L3NeutralinoAllChannelsLimitAt188pt6GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(0., 200., 0., 100., "lepLimitPlanev2/L3NeutralinoAllChannelsLimitAt188pt6GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::L3_Neutralino_All_Channels_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const DecayTable& decays = *Dep::decay_rates;
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_neut2 = spec.get(Par::Pole_Mass,1000023, 0);
      const double mass_neut3 = spec.get(Par::Pole_Mass,1000025, 0);
      const double mass_neut4 = spec.get(Par::Pole_Mass,1000035, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // neut2, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chi00_12;
      // Total up all channels which look like Z* decays
      totalBR = 0;
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "Z0");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "ubar", "u");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "dbar", "d");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "cbar", "c");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "sbar", "s");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "bbar", "b");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "e+", "e-");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "mu+", "mu-");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "tau+", "tau-");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "nubar_e", "nu_e");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "nubar_mu", "nu_mu");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "nubar_tau", "nu_tau");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // neut3, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut3, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chi00_13;
      // Total up all channels which look like Z* decays
      totalBR = 0;
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "Z0");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "ubar", "u");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "dbar", "d");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "cbar", "c");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "sbar", "s");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "bbar", "b");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "e+", "e-");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "mu+", "mu-");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "tau+", "tau-");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "nubar_e", "nu_e");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "nubar_mu", "nu_mu");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "nubar_tau", "nu_tau");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // neut4, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut4, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chi00_14;
      // Total up all channels which look like Z* decays
      totalBR = 0;
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "Z0");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "ubar", "u");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "dbar", "d");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "cbar", "c");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "sbar", "s");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "bbar", "b");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "e+", "e-");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "mu+", "mu-");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "tau+", "tau-");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "nubar_e", "nu_e");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "nubar_mu", "nu_mu");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "nubar_tau", "nu_tau");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void L3_Neutralino_Leptonic_Conservative_LLike(double& result)
    {
      static const L3NeutralinoLeptonicLimitAt188pt6GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      // static bool dumped=false;
      // if(!dumped)
      // {
      //   limitContainer.dumpPlotData(0., 200., 0., 100., "lepLimitPlanev2/L3NeutralinoLeptonicLimitAt188pt6GeV.dump");
      //   dumped=true;
      // }
      // #endif
      using namespace Pipes::L3_Neutralino_Leptonic_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const DecayTable& decays = *Dep::decay_rates;
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_neut2 = spec.get(Par::Pole_Mass,1000023, 0);
      const double mass_neut3 = spec.get(Par::Pole_Mass,1000025, 0);
      const double mass_neut4 = spec.get(Par::Pole_Mass,1000035, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // neut2, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chi00_12;
      // Total up all channels which look like leptonic Z* decays
      // Total up the leptonic Z decays first...
      totalBR = 0;
      totalBR += decays.at("Z0").BF("e+", "e-");
      totalBR += decays.at("Z0").BF("mu+", "mu-");
      totalBR += decays.at("Z0").BF("tau+", "tau-");
      totalBR = decays.at("~chi0_2").BF("~chi0_1", "Z0") * totalBR;

      totalBR += decays.at("~chi0_2").BF("~chi0_1", "e+", "e-");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "mu+", "mu-");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "tau+", "tau-");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // neut3, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut3, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chi00_13;
      // Total up all channels which look like leptonic Z* decays
      // Total up the leptonic Z decays first...
      totalBR = 0;
      totalBR += decays.at("Z0").BF("e+", "e-");
      totalBR += decays.at("Z0").BF("mu+", "mu-");
      totalBR += decays.at("Z0").BF("tau+", "tau-");
      totalBR = decays.at("~chi0_3").BF("~chi0_1", "Z0") * totalBR;

      totalBR += decays.at("~chi0_3").BF("~chi0_1", "e+", "e-");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "mu+", "mu-");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "tau+", "tau-");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // neut4, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut4, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chi00_14;
      // Total up all channels which look like leptonic Z* decays
      // Total up the leptonic Z decays first...
      totalBR = 0;
      totalBR += decays.at("Z0").BF("e+", "e-");
      totalBR += decays.at("Z0").BF("mu+", "mu-");
      totalBR += decays.at("Z0").BF("tau+", "tau-");
      totalBR = decays.at("~chi0_4").BF("~chi0_1", "Z0") * totalBR;

      totalBR += decays.at("~chi0_4").BF("~chi0_1", "e+", "e-");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "mu+", "mu-");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "tau+", "tau-");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void L3_Chargino_All_Channels_Conservative_LLike(double& result)
    {
      static const L3CharginoAllChannelsLimitAt188pt6GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(45., 100., 0., 100., "lepLimitPlanev2/L3CharginoAllChannelsLimitAt188pt6GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::L3_Chargino_All_Channels_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const DecayTable& decays = *Dep::decay_rates;
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_char1 = spec.get(Par::Pole_Mass,1000024, 0);
      const double mass_char2 = spec.get(Par::Pole_Mass,1000037, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // char1, neut1
      xsecLimit = limitContainer.limitAverage(mass_char1, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chipm_11;
      // Total up all channels which look like W* decays
      totalBR = 0;
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "W+");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "u", "dbar");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "c", "sbar");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "tau+", "nu_tau");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // char2, neut1
      xsecLimit = limitContainer.limitAverage(mass_char2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chipm_22;
      // Total up all channels which look like W* decays
      totalBR = 0;
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "W+");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "u", "dbar");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "c", "sbar");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "tau+", "nu_tau");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void L3_Chargino_Leptonic_Conservative_LLike(double& result)
    {
      static const L3CharginoLeptonicLimitAt188pt6GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(45., 100., 0., 100., "lepLimitPlanev2/L3CharginoLeptonicLimitAt188pt6GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::L3_Chargino_Leptonic_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const DecayTable& decays = *Dep::decay_rates;
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_char1 = spec.get(Par::Pole_Mass,1000024, 0);
      const double mass_char2 = spec.get(Par::Pole_Mass,1000037, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // char1, neut1
      xsecLimit = limitContainer.limitAverage(mass_char1, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chipm_11;
      // Total up all channels which look like leptonic W* decays
      // Total up the leptonic W decays first...
      totalBR = 0;
      totalBR += decays.at("W+").BF("e+", "nu_e");
      totalBR += decays.at("W+").BF("mu+", "nu_mu");
      totalBR += decays.at("W+").BF("tau+", "nu_tau");
      totalBR = decays.at("~chi+_1").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_1").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "tau+", "nu_tau");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // char2, neut1
      xsecLimit = limitContainer.limitAverage(mass_char2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP188_xsec_chipm_22;
      // Total up all channels which look like leptonic W* decays
      // Total up the leptonic W decays first...
      totalBR = 0;
      totalBR += decays.at("W+").BF("e+", "nu_e");
      totalBR += decays.at("W+").BF("mu+", "nu_mu");
      totalBR += decays.at("W+").BF("tau+", "nu_tau");
      totalBR = decays.at("~chi+_2").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_2").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "tau+", "nu_tau");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void OPAL_Chargino_Hadronic_Conservative_LLike(double& result)
    {
      static const OPALCharginoHadronicLimitAt208GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(75., 105., 0., 105., "lepLimitPlanev2/OPALCharginoHadronicLimitAt208GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::OPAL_Chargino_Hadronic_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const DecayTable& decays = *Dep::decay_rates;
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_char1 = spec.get(Par::Pole_Mass,1000024, 0);
      const double mass_char2 = spec.get(Par::Pole_Mass,1000037, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // char1, neut1
      xsecLimit = limitContainer.limitAverage(mass_char1, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chipm_11;
      // Total up all channels which look like hadronic W* decays
      // Total up the hadronic W decays first...
      totalBR = decays.at("W+").BF("hadron", "hadron");
      totalBR = decays.at("~chi+_1").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_1").BF("~chi0_1", "u", "dbar");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "c", "sbar");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // char2, neut1
      xsecLimit = limitContainer.limitAverage(mass_char2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chipm_22;
      // Total up all channels which look like hadronic W* decays
      // Total up the hadronic W decays first...
      totalBR = decays.at("W+").BF("hadron", "hadron");
      totalBR = decays.at("~chi+_2").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_2").BF("~chi0_1", "u", "dbar");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "c", "sbar");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void OPAL_Chargino_SemiLeptonic_Conservative_LLike(double& result)
    {
      static const OPALCharginoSemiLeptonicLimitAt208GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(75., 105., 0., 105., "lepLimitPlanev2/OPALCharginoSemiLeptonicLimitAt208GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::OPAL_Chargino_SemiLeptonic_Conservative_LLike;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");

      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const SubSpectrum& mssm = spec.get_HE();
      const DecayTable& decays = *Dep::decay_rates;
      const str snue = slhahelp::mass_es_from_gauge_es("~nu_e_L", mssm, tol, LOCAL_INFO, pt_error);
      const str snumu = slhahelp::mass_es_from_gauge_es("~nu_mu_L", mssm, tol, LOCAL_INFO, pt_error);
      const str snutau = slhahelp::mass_es_from_gauge_es("~nu_tau_L", mssm, tol, LOCAL_INFO, pt_error);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_char1 = spec.get(Par::Pole_Mass,1000024, 0);
      const double mass_char2 = spec.get(Par::Pole_Mass,1000037, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // char1, neut1
      xsecLimit = limitContainer.limitAverage(mass_char1, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chipm_11;
      // Total up all channels which look like leptonic W* decays
      // Total up the leptonic W decays first...
      totalBR = 0;
      totalBR += decays.at("W+").BF("e+", "nu_e");
      totalBR += decays.at("W+").BF("mu+", "nu_mu");
      totalBR += decays.at("W+").BF("tau+", "nu_tau");
      totalBR = decays.at("~chi+_1").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_1").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "tau+", "nu_tau");
      totalBR += decays.at("~chi+_1").BF(snue, "e+")
               * decays.at(snue).BF("~chi0_1", "nu_e");
      totalBR += decays.at("~chi+_1").BF(snumu, "mu+")
               * decays.at(snumu).BF("~chi0_1", "nu_mu");
      totalBR += decays.at("~chi+_1").BF(snutau, "tau+")
               * decays.at(snutau).BF("~chi0_1", "nu_tau");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      // ALSO, total up all channels which look like hadronic W* decays
      // Total up the hadronic W decays first...
      totalBR = decays.at("W+").BF("hadron", "hadron");
      totalBR = decays.at("~chi+_1").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_1").BF("~chi0_1", "u", "dbar");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "c", "sbar");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // char2, neut1
      xsecLimit = limitContainer.limitAverage(mass_char2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chipm_22;
      // Total up all channels which look like leptonic W* decays
      // Total up the leptonic W decays first...
      totalBR = 0;
      totalBR += decays.at("W+").BF("e+", "nu_e");
      totalBR += decays.at("W+").BF("mu+", "nu_mu");
      totalBR += decays.at("W+").BF("tau+", "nu_tau");
      totalBR = decays.at("~chi+_2").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_2").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "tau+", "nu_tau");
      totalBR += decays.at("~chi+_2").BF(snue, "e+")
               * decays.at(snue).BF("~chi0_1", "nu_e");
      totalBR += decays.at("~chi+_2").BF(snumu, "mu+")
               * decays.at(snumu).BF("~chi0_1", "nu_mu");
      totalBR += decays.at("~chi+_2").BF(snutau, "tau+")
               * decays.at(snutau).BF("~chi0_1", "nu_tau");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      // ALSO, total up all channels which look like hadronic W* decays
      // Total up the hadronic W decays first...
      totalBR = decays.at("W+").BF("hadron", "hadron");
      totalBR = decays.at("~chi+_2").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_2").BF("~chi0_1", "u", "dbar");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "c", "sbar");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void OPAL_Chargino_Leptonic_Conservative_LLike(double& result)
    {
      static const OPALCharginoLeptonicLimitAt208GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(75., 105., 0., 105., "lepLimitPlanev2/OPALCharginoLeptonicLimitAt208GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::OPAL_Chargino_Leptonic_Conservative_LLike;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");

      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const SubSpectrum& mssm = spec.get_HE();
      const DecayTable& decays = *Dep::decay_rates;
      const str snue = slhahelp::mass_es_from_gauge_es("~nu_e_L", mssm, tol, LOCAL_INFO, pt_error);
      const str snumu = slhahelp::mass_es_from_gauge_es("~nu_mu_L", mssm, tol, LOCAL_INFO, pt_error);
      const str snutau = slhahelp::mass_es_from_gauge_es("~nu_tau_L", mssm, tol, LOCAL_INFO, pt_error);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_char1 = spec.get(Par::Pole_Mass,1000024, 0);
      const double mass_char2 = spec.get(Par::Pole_Mass,1000037, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // char1, neut1
      xsecLimit = limitContainer.limitAverage(mass_char1, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chipm_11;
      // Total up all channels which look like leptonic W* decays
      // Total up the leptonic W decays first...
      totalBR = 0;
      totalBR += decays.at("W+").BF("e+", "nu_e");
      totalBR += decays.at("W+").BF("mu+", "nu_mu");
      totalBR += decays.at("W+").BF("tau+", "nu_tau");
      totalBR = decays.at("~chi+_1").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_1").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "tau+", "nu_tau");
      totalBR += decays.at("~chi+_1").BF(snue, "e+")
               * decays.at(snue).BF("~chi0_1", "nu_e");
      totalBR += decays.at("~chi+_1").BF(snumu, "mu+")
               * decays.at(snumu).BF("~chi0_1", "nu_mu");
      totalBR += decays.at("~chi+_1").BF(snutau, "tau+")
               * decays.at(snutau).BF("~chi0_1", "nu_tau");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // char2, neut1
      xsecLimit = limitContainer.limitAverage(mass_char2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chipm_22;
      // Total up all channels which look like leptonic W* decays
      // Total up the leptonic W decays first...
      totalBR = 0;
      totalBR += decays.at("W+").BF("e+", "nu_e");
      totalBR += decays.at("W+").BF("mu+", "nu_mu");
      totalBR += decays.at("W+").BF("tau+", "nu_tau");
      totalBR = decays.at("~chi+_2").BF("~chi0_1", "W+") * totalBR;

      totalBR += decays.at("~chi+_2").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "tau+", "nu_tau");
      totalBR += decays.at("~chi+_2").BF(snue, "e+")
               * decays.at(snue).BF("~chi0_1", "nu_e");
      totalBR += decays.at("~chi+_2").BF(snumu, "mu+")
               * decays.at(snumu).BF("~chi0_1", "nu_mu");
      totalBR += decays.at("~chi+_2").BF(snutau, "tau+")
               * decays.at(snutau).BF("~chi0_1", "nu_tau");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void OPAL_Chargino_All_Channels_Conservative_LLike(double& result)
    {
      static const OPALCharginoAllChannelsLimitAt208GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(75., 105., 0., 105., "lepLimitPlanev2/OPALCharginoAllChannelsLimitAt208GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::OPAL_Chargino_All_Channels_Conservative_LLike;
      const static double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      const static bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");

      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const SubSpectrum& mssm = spec.get_HE();
      const DecayTable& decays = *Dep::decay_rates;
      const str snue = slhahelp::mass_es_from_gauge_es("~nu_e_L", mssm, tol, LOCAL_INFO, pt_error);
      const str snumu = slhahelp::mass_es_from_gauge_es("~nu_mu_L", mssm, tol, LOCAL_INFO, pt_error);
      const str snutau = slhahelp::mass_es_from_gauge_es("~nu_tau_L", mssm, tol, LOCAL_INFO, pt_error);
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_char1 = spec.get(Par::Pole_Mass,1000024, 0);
      const double mass_char2 = spec.get(Par::Pole_Mass,1000037, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // char1, neut1
      xsecLimit = limitContainer.limitAverage(mass_char1, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chipm_11;
      // Total up all channels which look like W* decays
      totalBR = 0;
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "W+");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "u", "dbar");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "c", "sbar");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_1").BF("~chi0_1", "tau+", "nu_tau");
      totalBR += decays.at("~chi+_1").BF(snue, "e+")
               * decays.at(snue).BF("~chi0_1", "nu_e");
      totalBR += decays.at("~chi+_1").BF(snumu, "mu+")
               * decays.at(snumu).BF("~chi0_1", "nu_mu");
      totalBR += decays.at("~chi+_1").BF(snutau, "tau+")
               * decays.at(snutau).BF("~chi0_1", "nu_tau");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // char2, neut1
      xsecLimit = limitContainer.limitAverage(mass_char2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chipm_22;
      // Total up all channels which look like W* decays
      totalBR = 0;
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "W+");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "u", "dbar");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "c", "sbar");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "e+", "nu_e");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "mu+", "nu_mu");
      totalBR += decays.at("~chi+_2").BF("~chi0_1", "tau+", "nu_tau");
      totalBR += decays.at("~chi+_2").BF(snue, "e+")
               * decays.at(snue).BF("~chi0_1", "nu_e");
      totalBR += decays.at("~chi+_2").BF(snumu, "mu+")
               * decays.at(snumu).BF("~chi0_1", "nu_mu");
      totalBR += decays.at("~chi+_2").BF(snutau, "tau+")
               * decays.at(snutau).BF("~chi0_1", "nu_tau");
      xsecWithError.upper *= pow(totalBR, 2);
      xsecWithError.central *= pow(totalBR, 2);
      xsecWithError.lower *= pow(totalBR, 2);

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }

    void OPAL_Neutralino_Hadronic_Conservative_LLike(double& result)
    {
      static const OPALNeutralinoHadronicLimitAt208GeV limitContainer;
      // #ifdef COLLIDERBIT_DEBUG
      //   static bool dumped=false;
      //   if(!dumped)
      //   {
      //     limitContainer.dumpPlotData(0., 200., 0., 100., "lepLimitPlanev2/OPALNeutralinoHadronicLimitAt208GeV.dump");
      //     dumped=true;
      //   }
      // #endif
      using namespace Pipes::OPAL_Neutralino_Hadronic_Conservative_LLike;
      using std::pow;
      using std::log;

      const Spectrum& spec = *Dep::MSSM_spectrum;
      const DecayTable& decays = *Dep::decay_rates;
      const double mass_neut1 = spec.get(Par::Pole_Mass,1000022, 0);
      const double mass_neut2 = spec.get(Par::Pole_Mass,1000023, 0);
      const double mass_neut3 = spec.get(Par::Pole_Mass,1000025, 0);
      const double mass_neut4 = spec.get(Par::Pole_Mass,1000035, 0);
      const double mZ = spec.get(Par::Pole_Mass,23, 0);
      triplet<double> xsecWithError;
      double xsecLimit, totalBR;

      result = 0;
      // Due to the nature of the analysis details of the model independent limit in
      // the paper, the best we can do is to try these processes individually:

      // neut2, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut2, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chi00_12;
      // Total up all channels which look like Z* decays
      totalBR = decays.at("Z0").BF("hadron", "hadron");
      totalBR = decays.at("~chi0_2").BF("~chi0_1", "Z0") * totalBR;
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "ubar", "u");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "dbar", "d");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "cbar", "c");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "sbar", "s");
      totalBR += decays.at("~chi0_2").BF("~chi0_1", "bbar", "b");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // neut3, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut3, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chi00_13;
      // Total up all channels which look like Z* decays
      totalBR = decays.at("Z0").BF("hadron", "hadron");
      totalBR = decays.at("~chi0_3").BF("~chi0_1", "Z0") * totalBR;
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "ubar", "u");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "dbar", "d");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "cbar", "c");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "sbar", "s");
      totalBR += decays.at("~chi0_3").BF("~chi0_1", "bbar", "b");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

      // neut4, neut1
      xsecLimit = limitContainer.limitAverage(mass_neut4, mass_neut1, mZ);

      xsecWithError = *Dep::LEP208_xsec_chi00_14;
      // Total up all channels which look like Z* decays
      totalBR = decays.at("Z0").BF("hadron", "hadron");
      totalBR = decays.at("~chi0_4").BF("~chi0_1", "Z0") * totalBR;
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "ubar", "u");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "dbar", "d");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "cbar", "c");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "sbar", "s");
      totalBR += decays.at("~chi0_4").BF("~chi0_1", "bbar", "b");
      xsecWithError.upper *= totalBR;
      xsecWithError.central *= totalBR;
      xsecWithError.lower *= totalBR;

      if (xsecWithError.central < xsecLimit)
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.upper - xsecWithError.central);
      }
      else
      {
        result += limitLike(xsecWithError.central, xsecLimit, xsecWithError.central - xsecWithError.lower);
      }

    }



    // Dummy observable that creates a dependency on TestModel1D, which is used to satisfy the normal 
    // GAMBIT model requrements in a minimal way. This is useful in the case where we just want to run 
    // ColliderBit on a single point with a custom Pythia version, using Pythia's SLHA interface. 
    void getDummyColliderObservable(double& result)
    {
      result = 0.0;
    }


    /// @}

  }
}
