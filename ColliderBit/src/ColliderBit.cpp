

//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
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
#include "gambit/Elements/mssm_slhahelp.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"
#include "gambit/ColliderBit/lep_mssm_xsecs.hpp"
#include "HEPUtils/FastJet.h"

//#define COLLIDERBIT_DEBUG

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
    bool useATLAS;
    std::vector<std::string> analysisNamesATLAS;
    HEPUtilsAnalysisContainer globalAnalysesATLAS;
    bool useCMS;
    std::vector<std::string> analysisNamesCMS;
    HEPUtilsAnalysisContainer globalAnalysesCMS;

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

      // Nicely ask the entire loop to be quiet
      std::cout.rdbuf(0); 

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
            try {
              Loop::executeIteration(currentEvent);
              currentEvent++;
            } catch (std::domain_error& e) {
              std::cerr<<"\n   Continuing to the next event...\n\n";
            }
          }
          Loop::executeIteration(END_SUBPROCESS);
        }
      }
      // Nicely thank the loop for being quiet, and restore everyone's vocal cords
      std::cout.rdbuf(coutbuf);

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
          default_doc_path = "Backends/installed/Pythia/" + 
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
          // MSSM-specific
          spectrum = (*Dep::MSSM_spectrum).getSLHAea();
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
        pythiaOptions.push_back("Random:seed = " + std::to_string(seedBase + omp_get_thread_num()));

        result.resetSpecialization(*iter);

        pythiaOptions.push_back("SLHA:file = slhaea");

        try
        {
          result.init(pythia_doc_path, pythiaOptions, &slha, processLevelOutput);
        }
        catch (SpecializablePythia::InitializationError &e)
        {
          pythiaOptions.push_back("Random:seed = " + std::to_string(seedBase + omp_get_thread_num()));
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
          if (issPtr.good()) {
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
          default_doc_path = "Backends/installed/Pythia/" + 
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

        // Each thread gets its own Pythia instance.
        // Thus, the actual Pythia initialization is
        // *after* INIT, within omp parallel.
        std::vector<std::string> pythiaOptions = pythiaCommonOptions;
        // Although we capture all couts, still we tell Pythia to be quiet....
        pythiaOptions.push_back("Print:quiet = on");
        // .... except for showProcesses, which we need for the xsec veto.
        pythiaOptions.push_back("Init:showProcesses = on");
        pythiaOptions.push_back("SLHA:verbose = 0");
        pythiaOptions.push_back("Random:seed = " + std::to_string(seedBase + omp_get_thread_num()));

        result.resetSpecialization(*iter);

        // Run Pythia reading an SLHA file.
        if (omp_get_thread_num() == 0)
          logger() << "Reading SLHA file: " << filenames.at(fileCounter) << EOM;
        pythiaOptions.push_back("SLHA:file = " + filenames.at(fileCounter));
        try
        {
          result.init(pythia_doc_path, pythiaOptions, processLevelOutput);
        }
        catch (SpecializablePythia::InitializationError &e)
        {
          pythiaOptions.push_back("Random:seed = " + std::to_string(seedBase + omp_get_thread_num()));
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
          if (issPtr.good()) {
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
      if (*Loop::iteration == INIT)
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
      if (*Loop::iteration == INIT and useATLAS)
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
      if (*Loop::iteration == INIT and useCMS)
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

    void getATLASAnalysisContainer(Gambit::ColliderBit::HEPUtilsAnalysisContainer& result) {
      using namespace Pipes::getATLASAnalysisContainer;
      if (*Loop::iteration == BASE_INIT) {
        useATLAS = runOptions->getValueOrDef<bool>(true, "useATLAS");
        if (!useATLAS) return;
        GET_COLLIDER_RUNOPTION(analysisNamesATLAS, std::vector<std::string>);
        globalAnalysesATLAS.clear();
        globalAnalysesATLAS.init(analysisNamesATLAS);
        return;
      }

      if (!useATLAS) return;

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
      if (*Loop::iteration == BASE_INIT) {
        useCMS = runOptions->getValueOrDef<bool>(true, "useCMS");
        if (!useCMS) return;
        GET_COLLIDER_RUNOPTION(analysisNamesCMS, std::vector<std::string>);
        globalAnalysesCMS.clear();
        globalAnalysesCMS.init(analysisNamesCMS);
        return;
      }

      if (!useCMS) return;

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
      try {
        (*Dep::HardScatteringSim).nextEvent(result);
      } catch (SpecializablePythia::EventFailureError &e) {
        piped_invalid_point.request("Bad point: Pythia can't generate events");
        Loop::wrapup();
        return;
      }
    }



    /// *** Standard Event Format Functions ***

#ifndef EXCLUDE_DELPHES
    void reconstructDelphesEvent(HEPUtils::Event& result) {
      using namespace Pipes::reconstructDelphesEvent;
      if (*Loop::iteration <= BASE_INIT) return;
      result.clear();

      #pragma omp critical (Delphes)
      {
        (*Dep::DetectorSim).processEvent(*Dep::HardScatteringEvent, result);
      }
    }
#endif // not defined EXCLUDE_DELPHES

    void smearEventATLAS(HEPUtils::Event& result) {
      using namespace Pipes::smearEventATLAS;
      if (*Loop::iteration <= BASE_INIT or !useATLAS) return;
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
      if (*Loop::iteration <= BASE_INIT or !useCMS) return;
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



    /// *** Analysis Accumulators ***

    void runATLASAnalyses(ColliderLogLikes& result)
    {
      using namespace Pipes::runATLASAnalyses;
      if (!useATLAS) return;
      if (*Loop::iteration == FINALIZE && eventsGenerated) {
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
      if (!useCMS) return;
      if (*Loop::iteration == FINALIZE && eventsGenerated) {
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
      if (not eventsGenerated) {
        logger() << "This point was xsec vetoed." << EOM;
        result = 0.;
        return;
      }
      ColliderLogLikes analysisResults;
      if(useATLAS)
        analysisResults.insert(analysisResults.end(),
                Dep::ATLASAnalysisNumbers->begin(), Dep::ATLASAnalysisNumbers->end());
      if(useCMS)
        analysisResults.insert(analysisResults.end(),
                Dep::CMSAnalysisNumbers->begin(), Dep::CMSAnalysisNumbers->end());

      // Loop over analyses and calculate the total observed dll
      double total_dll_obs = 0;
      for (size_t analysis = 0; analysis < analysisResults.size(); ++analysis) {
        // cout << "In analysis loop" << endl;

        // Loop over the signal regions inside the analysis, and work out the total (delta) log likelihood for this analysis
        /// @note In general each analysis could/should work out its own likelihood so they can handle SR combination if possible.
        /// @note For now we just take the result from the SR *expected* to be most constraining, i.e. with highest expected dll
        double bestexp_dll_exp = 0, bestexp_dll_obs = 0;
        for (size_t SR = 0; SR < analysisResults[analysis].size(); ++SR) {
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
        std::cout << "COLLIDERBIT LIKELIHOOD " << -total_dll_obs << std::endl;
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(45., 115., 0., 100.,
                                     "lepLimitPlanev2/ALEPHSelectronLimitAt208GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(45., 115., 0., 100.,
                                     "lepLimitPlanev2/ALEPHSmuonLimitAt208GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(45., 115., 0., 100.,
                                     "lepLimitPlanev2/ALEPHStauLimitAt208GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(45., 115., 0., 100.,
                                     "lepLimitPlanev2/L3SelectronLimitAt205GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(45., 115., 0., 100.,
                                     "lepLimitPlanev2/L3SmuonLimitAt205GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(45., 115., 0., 100.,
                                     "lepLimitPlanev2/L3StauLimitAt205GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(0., 200., 0., 100.,
                                     "lepLimitPlanev2/L3NeutralinoAllChannelsLimitAt188pt6GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(0., 200., 0., 100.,
                                     "lepLimitPlanev2/L3NeutralinoLeptonicLimitAt188pt6GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(45., 100., 0., 100.,
                                     "lepLimitPlanev2/L3CharginoAllChannelsLimitAt188pt6GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(45., 100., 0., 100.,
                                     "lepLimitPlanev2/L3CharginoLeptonicLimitAt188pt6GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(75., 105., 0., 105.,
                                     "lepLimitPlanev2/OPALCharginoHadronicLimitAt208GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(75., 105., 0., 105.,
                                     "lepLimitPlanev2/OPALCharginoSemiLeptonicLimitAt208GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(75., 105., 0., 105.,
                                     "lepLimitPlanev2/OPALCharginoLeptonicLimitAt208GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(75., 105., 0., 105.,
                                     "lepLimitPlanev2/OPALCharginoAllChannelsLimitAt208GeV.dump");
        dumped=true;
      }
#endif
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
#ifdef COLLIDERBIT_DEBUG
      static bool dumped=false;
      if(!dumped) {
        limitContainer.dumpPlotData(0., 200., 0., 100.,
                                     "lepLimitPlanev2/OPALNeutralinoHadronicLimitAt208GeV.dump");
        dumped=true;
      }
#endif
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

    /// @}


    // *** Higgs physics ***

    /// FeynHiggs Higgs production cross-sections
    void FH_HiggsProd(fh_HiggsProd &result)
    {
      using namespace Pipes::FH_HiggsProd;

      Farray<fh_real, 1,52> prodxs;

      fh_HiggsProd HiggsProd;
      int error;
      fh_real sqrts;

      // Tevatron
      sqrts = 2.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      if (error != 0)
      {
        std::ostringstream err;
        err << "BEreq::FHHiggsProd raised error flag for Tevatron: " << error << ".";
        invalid_point().raise(err.str());
      }
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_Tev[i] = prodxs(i+1);
      // LHC7
      sqrts = 7.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      if (error != 0)
      {
        std::ostringstream err;
        err << "BEreq::FHHiggsProd raised error flag for LHC7: " << error << ".";
        invalid_point().raise(err.str());
      }
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_LHC7[i] = prodxs(i+1);
      // LHC8
      sqrts = 8.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      if (error != 0)
      {
        std::ostringstream err;
        err << "BEreq::FHHiggsProd raised error flag for LHC8: " << error << ".";
        invalid_point().raise(err.str());
      }
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_LHC8[i] = prodxs(i+1);

      result = HiggsProd;
    }

    /// Local function returning a HiggsBounds/Signals ModelParameters object for SM-like Higgs.
    void set_SMHiggs_ModelParameters(const Spectrum& fullspectrum, const DecayTable::Entry& decays, hb_ModelParameters &result)
    {
      const SubSpectrum& spec = fullspectrum.get_HE();

      for(int i = 0; i < 3; i++)
      {
        result.Mh[i] = 0.;
        result.deltaMh[i] = 0.;
        result.hGammaTot[i] = 0.;
        result.CP[i] = 0.;
        result.CS_lep_hjZ_ratio[i] = 0.;
        result.CS_lep_bbhj_ratio[i] = 0.;
        result.CS_lep_tautauhj_ratio[i] = 0.;
        for(int j = 0; j < 3; j++) result.CS_lep_hjhi_ratio[i][j] = 0.;
        result.CS_gg_hj_ratio[i] = 0.;
        result.CS_bb_hj_ratio[i] = 0.;
        result.CS_bg_hjb_ratio[i] = 0.;
        result.CS_ud_hjWp_ratio[i] = 0.;
        result.CS_cs_hjWp_ratio[i] = 0.;
        result.CS_ud_hjWm_ratio[i] = 0.;
        result.CS_cs_hjWm_ratio[i] = 0.;
        result.CS_gg_hjZ_ratio[i] = 0.;
        result.CS_dd_hjZ_ratio[i] = 0.;
        result.CS_uu_hjZ_ratio[i] = 0.;
        result.CS_ss_hjZ_ratio[i] = 0.;
        result.CS_cc_hjZ_ratio[i] = 0.;
        result.CS_bb_hjZ_ratio[i] = 0.;
        result.CS_tev_vbf_ratio[i] = 0.;
        result.CS_tev_tthj_ratio[i] = 0.;
        result.CS_lhc7_vbf_ratio[i] = 0.;
        result.CS_lhc7_tthj_ratio[i] = 0.;
        result.CS_lhc8_vbf_ratio[i] = 0.;
        result.CS_lhc8_tthj_ratio[i] = 0.;
        result.BR_hjss[i] = 0.;
        result.BR_hjcc[i] = 0.;
        result.BR_hjbb[i] = 0.;
        result.BR_hjmumu[i] = 0.;
        result.BR_hjtautau[i] = 0.;
        result.BR_hjWW[i] = 0.;
        result.BR_hjZZ[i] = 0.;
        result.BR_hjZga[i] = 0.;
        result.BR_hjgaga[i] = 0.;
        result.BR_hjgg[i] = 0.;
        result.BR_hjinvisible[i] = 0.;
        for(int j = 0; j < 3; j++) result.BR_hjhihi[i][j] = 0.;
      }

      result.MHplus[0] = 0.;
      result.deltaMHplus[0] = 0.;
      result.HpGammaTot[0] = 0.;
      result.CS_lep_HpjHmi_ratio[0] = 0.;
      result.BR_tWpb = 0.;
      result.BR_tHpjb[0] = 0.;
      result.BR_Hpjcs[0] = 0.;
      result.BR_Hpjcb[0] = 0.;
      result.BR_Hptaunu[0] = 0.;
      result.Mh[0] = spec.get(Par::Pole_Mass,25,0);
      bool has_high_err = spec.has(Par::Pole_Mass_1srd_high, 25, 0);
      bool has_low_err = spec.has(Par::Pole_Mass_1srd_low, 25, 0);
      if (has_high_err and has_low_err) 
      {
        double upper = spec.get(Par::Pole_Mass_1srd_high, 25, 0);
        double lower = spec.get(Par::Pole_Mass_1srd_low, 25, 0);
        result.deltaMh[0] = std::max(upper,lower);
      }
      else
      {
        result.deltaMh[0] = 0.;
      }
      result.hGammaTot[0] = decays.width_in_GeV;
      result.CP[0] = 1;
      result.CS_lep_hjZ_ratio[0] = 1.;
      result.CS_lep_bbhj_ratio[0] = 1.;
      result.CS_lep_tautauhj_ratio[0] = 1.;
      result.CS_gg_hj_ratio[0] = 1.;
      result.CS_bb_hj_ratio[0] = 1.;
      result.CS_bg_hjb_ratio[0] = 1.;
      result.CS_ud_hjWp_ratio[0] = 1.;
      result.CS_cs_hjWp_ratio[0] = 1.;
      result.CS_ud_hjWm_ratio[0] = 1.;
      result.CS_cs_hjWm_ratio[0] = 1.;
      result.CS_gg_hjZ_ratio[0] = 1.;
      result.CS_dd_hjZ_ratio[0] = 1.;
      result.CS_uu_hjZ_ratio[0] = 1.;
      result.CS_ss_hjZ_ratio[0] = 1.;
      result.CS_cc_hjZ_ratio[0] = 1.;
      result.CS_bb_hjZ_ratio[0] = 1.;
      result.CS_tev_vbf_ratio[0] = 1.;
      result.CS_tev_tthj_ratio[0] = 1.;
      result.CS_lhc7_vbf_ratio[0] = 1.;
      result.CS_lhc7_tthj_ratio[0] = 1.;
      result.CS_lhc8_vbf_ratio[0] = 1.;
      result.CS_lhc8_tthj_ratio[0] = 1.;
      result.BR_hjss[0] = decays.BF("s", "sbar");
      result.BR_hjcc[0] = decays.BF("c", "cbar");
      result.BR_hjbb[0] = decays.BF("b", "bbar");
      result.BR_hjmumu[0] = decays.BF("mu+", "mu-");
      result.BR_hjtautau[0] = decays.BF("tau+", "tau-");
      result.BR_hjWW[0] = decays.BF("W+", "W-");
      result.BR_hjZZ[0] = decays.BF("Z0", "Z0");
      result.BR_hjZga[0] = decays.BF("gamma", "Z0");
      result.BR_hjgaga[0] = decays.BF("gamma", "gamma");
      result.BR_hjgg[0] = decays.BF("g", "g");
    }




   void set_SMHiggs_ModelParameters(const Spectrum& fullspectrum, const DecayTable::Entry& decays, lilith_ModelParameters &result)
    {
      const SubSpectrum& spec = fullspectrum.get_HE();
      result.mh = spec.get(Par::Pole_Mass,25,0);
      result.CU=1;
      result.CD=1;
      result.CV=1;
      result.CGa=1;
      result.Cg=1;
      result.BRinv=0;
      result.BRund=0;
    }


    /// SM Higgs model parameters for HiggsBounds/Signals
    void SMHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::SMHiggs_ModelParameters;
      const Spectrum& fullspectrum = *Dep::SM_spectrum;
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(fullspectrum,decays,result);
    }
    
    /// SM Higgs model parameters for Lilith
    void SMHiggs_Lilith_ModelParameters(lilith_ModelParameters &result)
    {
      using namespace Pipes::SMHiggs_Lilith_ModelParameters;
      const Spectrum& fullspectrum = *Dep::SM_spectrum;
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(fullspectrum,decays,result);
    }

    /// SM-like Higgs model parameters for HiggsBounds/Signals
    void SMlikeHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::SMlikeHiggs_ModelParameters;
      const Spectrum* fullspectrum;
      if (ModelInUse("SingletDM") or ModelInUse("SingletDMZ3")){ fullspectrum = &(*Dep::SingletDM_spectrum); }
      else if (false) { /* fullspectrum = <blah> */ } // Placeholder clause; expand each time new model dependency added.
      else 
      { 
        ColliderBit_error().raise(LOCAL_INFO, "Bug! You have not finished writing this module function to work with all the models that it is declared to work with!");
      }
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(*fullspectrum,decays,result);
    }

    /// MSSM Higgs model parameters
    void MSSMHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::MSSMHiggs_ModelParameters;
      const auto& PDB = Models::ParticleDB();
      
      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::Higgs_Couplings;

      std::vector<std::string> sHneut;
      sHneut.push_back("h0_1");
      sHneut.push_back("h0_2");
      sHneut.push_back("A0");

      const Spectrum& fullspectrum = *Dep::MSSM_spectrum;
      const SubSpectrum& spec = fullspectrum.get_HE();
      const DecayTable decaytable = *Dep::decay_rates;

      const DecayTable::Entry* Hneut_decays[3];
      for(int i = 0; i < 3; i++)
      {
        // Higgs masses and errors
        result.Mh[i] = spec.get(Par::Pole_Mass,sHneut[i]);
        double upper = spec.get(Par::Pole_Mass_1srd_high,sHneut[i]);
        double lower = spec.get(Par::Pole_Mass_1srd_low,sHneut[i]);
        result.deltaMh[i] = std::max(upper,lower);
      }

      // invisible LSP?
      double lsp_mass = spec.get(Par::Pole_Mass,"~chi0_1");
      int i_snu = 0;
      for(int i = 1; i <= 3; i++)
      {
        if(spec.get(Par::Pole_Mass,"~nu",i)  < lsp_mass)
        {
          i_snu = i;
          lsp_mass = spec.get(Par::Pole_Mass,"~nu",i);
        }
      }

      bool inv_lsp = true;
      if(spec.get(Par::Pole_Mass,"~chi+",1) < lsp_mass) inv_lsp = false;
      if(spec.get(Par::Pole_Mass,"~g") < lsp_mass) inv_lsp = false;
      if(inv_lsp)
      {
        for(int i = 1; i <= 6; i++)
        {
          if(spec.get(Par::Pole_Mass,"~d",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
          if(spec.get(Par::Pole_Mass,"~u",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
          if(spec.get(Par::Pole_Mass,"~e-",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
        }
      }

      for(int i = 0; i < 3; i++)
      {
        // Branching ratios and total widths
        Hneut_decays[i] = &(decaytable(sHneut[i]));

        result.hGammaTot[i] = Hneut_decays[i]->width_in_GeV;

        result.BR_hjss[i] = Hneut_decays[i]->BF("s", "sbar");
        result.BR_hjcc[i] = Hneut_decays[i]->BF("c", "cbar");
        result.BR_hjbb[i] = Hneut_decays[i]->BF("b", "bbar");
        result.BR_hjmumu[i] = Hneut_decays[i]->BF("mu+", "mu-");
        result.BR_hjtautau[i] = Hneut_decays[i]->BF("tau+", "tau-");
        result.BR_hjWW[i] = Hneut_decays[i]->BF("W+", "W-");
        result.BR_hjZZ[i] = Hneut_decays[i]->BF("Z0", "Z0");
        result.BR_hjZga[i] = Hneut_decays[i]->BF("gamma", "Z0");
        result.BR_hjgaga[i] = Hneut_decays[i]->BF("gamma", "gamma");
        result.BR_hjgg[i] = Hneut_decays[i]->BF("g", "g");
        for(int j = 0; j < 3; j++)
        {
          if(2.*result.Mh[j] < result.Mh[i])
          {
            result.BR_hjhihi[i][j] = Hneut_decays[i]->BF(sHneut[j],sHneut[j]);
          }
          else
          {
            result.BR_hjhihi[i][j] = 0.;
          }
        }
        result.BR_hjinvisible[i] = 0.;
        if(inv_lsp)
        {
          // sneutrino is LSP - need to figure out how to get correct invisible BF...
          if(i_snu > 0)
          {
            result.BR_hjinvisible[i] += Hneut_decays[i]->BF(PDB.long_name("~nu",i_snu),PDB.long_name("~nubar",i_snu));
          }
          else
          {
            result.BR_hjinvisible[i] = Hneut_decays[i]->BF("~chi0_1","~chi0_1");
          }
        }
      }

      result.MHplus[0] = spec.get(Par::Pole_Mass,"H+");
      double upper = spec.get(Par::Pole_Mass_1srd_high,"H+");
      double lower = spec.get(Par::Pole_Mass_1srd_low,"H+");
      result.deltaMHplus[0] = std::max(upper,lower);

      const DecayTable::Entry* Hplus_decays = &(decaytable("H+"));
      const DecayTable::Entry* top_decays = &(decaytable("t"));

      result.HpGammaTot[0] = Hplus_decays->width_in_GeV;
      result.BR_tWpb       = top_decays->BF("W+", "b");
      result.BR_tHpjb[0]   = top_decays->has_channel("H+", "b") ? top_decays->BF("H+", "b") : 0.0;
      result.BR_Hpjcs[0]   = Hplus_decays->BF("c", "sbar");
      result.BR_Hpjcb[0]   = Hplus_decays->BF("c", "bbar");
      result.BR_Hptaunu[0] = Hplus_decays->BF("tau+", "nu_tau");

      // check SM partial width h0_1 -> b bbar
      // shouldn't be zero...
      double g2hjbb[3];
      for(int i = 0; i < 3; i++)
      {
        if(FH_input.gammas_sm[H0FF(i,4,3,3)+4] <= 0.)
          g2hjbb[i] = 0.;
        else
          g2hjbb[i] = FH_input.gammas[H0FF(i,4,3,3)+4]/FH_input.gammas_sm[H0FF(i,4,3,3)+4];
      }

      // using partial width ratio approximation for
      // h -> b bbar CS ratios
      for(int i = 0; i < 3; i++)
      {
        result.CS_bg_hjb_ratio[i] = g2hjbb[i];
        result.CS_bb_hj_ratio[i]  = g2hjbb[i];
      }

      // cross-section ratios for b bbar and tau+ tau- final states
      for(int i = 0; i < 3; i++)
      {
        fh_complex c_g2hjbb_L = FH_input.couplings[H0FF(i,4,3,3)];
        fh_complex c_g2hjbb_R = FH_input.couplings[H0FF(i,4,3,3)+Roffset];
        fh_complex c_g2hjbb_SM_L = FH_input.couplings_sm[H0FF(i,4,3,3)];
        fh_complex c_g2hjbb_SM_R = FH_input.couplings_sm[H0FF(i,4,3,3)+RSMoffset];

        fh_complex c_g2hjtautau_L = FH_input.couplings[H0FF(i,2,3,3)];
        fh_complex c_g2hjtautau_R = FH_input.couplings[H0FF(i,2,3,3)+Roffset];
        fh_complex c_g2hjtautau_SM_L = FH_input.couplings_sm[H0FF(i,2,3,3)];
        fh_complex c_g2hjtautau_SM_R = FH_input.couplings_sm[H0FF(i,2,3,3)+RSMoffset];

        double R_g2hjbb_L = sqrt(c_g2hjbb_L.re*c_g2hjbb_L.re+
               c_g2hjbb_L.im*c_g2hjbb_L.im)/
          sqrt(c_g2hjbb_SM_L.re*c_g2hjbb_SM_L.re+
               c_g2hjbb_SM_L.im*c_g2hjbb_SM_L.im);
        double R_g2hjbb_R = sqrt(c_g2hjbb_R.re*c_g2hjbb_R.re+
               c_g2hjbb_R.im*c_g2hjbb_R.im)/
          sqrt(c_g2hjbb_SM_R.re*c_g2hjbb_SM_R.re+
               c_g2hjbb_SM_R.im*c_g2hjbb_SM_R.im);

        double R_g2hjtautau_L = sqrt(c_g2hjtautau_L.re*c_g2hjtautau_L.re+
                   c_g2hjtautau_L.im*c_g2hjtautau_L.im)/
          sqrt(c_g2hjtautau_SM_L.re*c_g2hjtautau_SM_L.re+
               c_g2hjtautau_SM_L.im*c_g2hjtautau_SM_L.im);
        double R_g2hjtautau_R = sqrt(c_g2hjtautau_R.re*c_g2hjtautau_R.re+
                   c_g2hjtautau_R.im*c_g2hjtautau_R.im)/
          sqrt(c_g2hjtautau_SM_R.re*c_g2hjtautau_SM_R.re+
               c_g2hjtautau_SM_R.im*c_g2hjtautau_SM_R.im);

        double g2hjbb_s = (R_g2hjbb_L+R_g2hjbb_R)*(R_g2hjbb_L+R_g2hjbb_R)/4.;
        double g2hjbb_p = (R_g2hjbb_L-R_g2hjbb_R)*(R_g2hjbb_L-R_g2hjbb_R)/4.;
        double g2hjtautau_s = (R_g2hjtautau_L+R_g2hjtautau_R)*(R_g2hjtautau_L+R_g2hjtautau_R)/4.;
        double g2hjtautau_p = (R_g2hjtautau_L-R_g2hjtautau_R)*(R_g2hjtautau_L-R_g2hjtautau_R)/4.;

        // check CP of state
        if(g2hjbb_p < 1e-10)
          result.CP[i] = 1;
        else if(g2hjbb_s < 1e-10)
          result.CP[i] = -1;
        else
          result.CP[i] = 0.;

        result.CS_lep_bbhj_ratio[i]     = g2hjbb_s + g2hjbb_p;
        result.CS_lep_tautauhj_ratio[i] = g2hjtautau_s + g2hjtautau_p;
      }

      // cross-section ratios for di-boson final states
      for(int i = 0; i < 3; i++)
      {
        fh_complex c_gWW = FH_input.couplings[H0VV(i,4)];
        fh_complex c_gWW_SM = FH_input.couplings_sm[H0VV(i,4)];
        fh_complex c_gZZ = FH_input.couplings[H0VV(i,3)];
        fh_complex c_gZZ_SM = FH_input.couplings_sm[H0VV(i,3)];

        double g2hjWW = (c_gWW.re*c_gWW.re+c_gWW.im*c_gWW.im)/
          (c_gWW_SM.re*c_gWW_SM.re+c_gWW_SM.im*c_gWW_SM.im);

        double g2hjZZ = (c_gZZ.re*c_gZZ.re+c_gZZ.im*c_gZZ.im)/
          (c_gZZ_SM.re*c_gZZ_SM.re+c_gZZ_SM.im*c_gZZ_SM.im);

        result.CS_lep_hjZ_ratio[i] = g2hjZZ;

        result.CS_gg_hjZ_ratio[i] = 0.;
        result.CS_dd_hjZ_ratio[i] = g2hjZZ;
        result.CS_uu_hjZ_ratio[i] = g2hjZZ;
        result.CS_ss_hjZ_ratio[i] = g2hjZZ;
        result.CS_cc_hjZ_ratio[i] = g2hjZZ;
        result.CS_bb_hjZ_ratio[i] = g2hjZZ;

        result.CS_ud_hjWp_ratio[i] = g2hjWW;
        result.CS_cs_hjWp_ratio[i] = g2hjWW;
        result.CS_ud_hjWm_ratio[i] = g2hjWW;
        result.CS_cs_hjWm_ratio[i] = g2hjWW;

        result.CS_tev_vbf_ratio[i]  = g2hjWW;
        result.CS_lhc7_vbf_ratio[i] = g2hjWW;
        result.CS_lhc8_vbf_ratio[i] = g2hjWW;
      }

      // higgs to higgs + V xsection ratios
      // retrive SMINPUTS dependency
      const SMInputs& sminputs = *Dep::SMINPUTS;

      double norm = sminputs.GF*sqrt(2.)*sminputs.mZ*sminputs.mZ;
      for(int i = 0; i < 3; i++)
      for(int j = 0; j < 3; j++)
      {
        fh_complex c_gHV = FH_input.couplings[H0HV(i,j)];
        double g2HV = c_gHV.re*c_gHV.re+c_gHV.im*c_gHV.im;
        result.CS_lep_hjhi_ratio[i][j] = g2HV/norm;
      }

      // gluon fusion x-section ratio
      for(int i = 0; i < 3; i++)
      {
        if(FH_input.gammas_sm[H0VV(i,5)] <= 0.)
          result.CS_gg_hj_ratio[i] = 0.;
        else
          result.CS_gg_hj_ratio[i] = FH_input.gammas[H0VV(i,5)]/
            FH_input.gammas_sm[H0VV(i,5)];
      }

      // unpack FeynHiggs x-sections
      fh_HiggsProd FH_prod = *Dep::FH_HiggsProd;

      // h t tbar xsection ratios
      for(int i = 0; i < 3; i++)
      {
        result.CS_tev_tthj_ratio[i] = 0.;
        result.CS_lhc7_tthj_ratio[i] = 0.;
        result.CS_lhc8_tthj_ratio[i] = 0.;
        if(FH_prod.prodxs_Tev[i+30] > 0.)
          result.CS_tev_tthj_ratio[i]  = FH_prod.prodxs_Tev[i+27]/FH_prod.prodxs_Tev[i+30];
        if(FH_prod.prodxs_Tev[i+30] > 0.)
          result.CS_lhc7_tthj_ratio[i] = FH_prod.prodxs_LHC7[i+27]/FH_prod.prodxs_LHC7[i+30];
        if(FH_prod.prodxs_Tev[i+30] > 0.)
          result.CS_lhc8_tthj_ratio[i] = FH_prod.prodxs_LHC8[i+27]/FH_prod.prodxs_LHC8[i+30];
      }
      // LEP H+ H- x-section ratio
      result.CS_lep_HpjHmi_ratio[0] = 1.;
    }

    /// Get a LEP chisq from HiggsBounds
    void calc_HB_LEP_LogLike(double &result)
    {
      using namespace Pipes::calc_HB_LEP_LogLike;

      hb_ModelParameters ModelParam = *Dep::HB_ModelParameters;

      Farray<double, 1,3, 1,3> CS_lep_hjhi_ratio;
      Farray<double, 1,3, 1,3> BR_hjhihi;
      for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++)
      {
        CS_lep_hjhi_ratio(i+1,j+1) = ModelParam.CS_lep_hjhi_ratio[i][j];
        BR_hjhihi(i+1,j+1) = ModelParam.BR_hjhihi[i][j];
      }

      BEreq::HiggsBounds_neutral_input_part(&ModelParam.Mh[0], &ModelParam.hGammaTot[0], &ModelParam.CP[0],
              &ModelParam.CS_lep_hjZ_ratio[0], &ModelParam.CS_lep_bbhj_ratio[0],
              &ModelParam.CS_lep_tautauhj_ratio[0], CS_lep_hjhi_ratio,
              &ModelParam.CS_gg_hj_ratio[0], &ModelParam.CS_bb_hj_ratio[0],
              &ModelParam.CS_bg_hjb_ratio[0], &ModelParam.CS_ud_hjWp_ratio[0],
              &ModelParam.CS_cs_hjWp_ratio[0], &ModelParam.CS_ud_hjWm_ratio[0],
              &ModelParam.CS_cs_hjWm_ratio[0], &ModelParam.CS_gg_hjZ_ratio[0],
              &ModelParam.CS_dd_hjZ_ratio[0], &ModelParam.CS_uu_hjZ_ratio[0],
              &ModelParam.CS_ss_hjZ_ratio[0], &ModelParam.CS_cc_hjZ_ratio[0],
              &ModelParam.CS_bb_hjZ_ratio[0], &ModelParam.CS_tev_vbf_ratio[0],
              &ModelParam.CS_tev_tthj_ratio[0], &ModelParam.CS_lhc7_vbf_ratio[0],
              &ModelParam.CS_lhc7_tthj_ratio[0], &ModelParam.CS_lhc8_vbf_ratio[0],
              &ModelParam.CS_lhc8_tthj_ratio[0], &ModelParam.BR_hjss[0],
              &ModelParam.BR_hjcc[0], &ModelParam.BR_hjbb[0],
              &ModelParam.BR_hjmumu[0], &ModelParam.BR_hjtautau[0],
              &ModelParam.BR_hjWW[0], &ModelParam.BR_hjZZ[0],
              &ModelParam.BR_hjZga[0], &ModelParam.BR_hjgaga[0],
              &ModelParam.BR_hjgg[0], &ModelParam.BR_hjinvisible[0], BR_hjhihi);

      BEreq::HiggsBounds_charged_input(&ModelParam.MHplus[0], &ModelParam.HpGammaTot[0], &ModelParam.CS_lep_HpjHmi_ratio[0],
               &ModelParam.BR_tWpb, &ModelParam.BR_tHpjb[0], &ModelParam.BR_Hpjcs[0],
               &ModelParam.BR_Hpjcb[0], &ModelParam.BR_Hptaunu[0]);

      BEreq::HiggsBounds_set_mass_uncertainties(&ModelParam.deltaMh[0],&ModelParam.deltaMHplus[0]);

      // run Higgs bounds 'classic'
      double obsratio;
      int HBresult, chan, ncombined;
      BEreq::run_HiggsBounds_classic(HBresult,chan,obsratio,ncombined);

      // extract the LEP chisq
      double chisq_withouttheory,chisq_withtheory;
      int chan2;
      double theor_unc = 1.5; // theory uncertainty
      BEreq::HB_calc_stats(theor_unc,chisq_withouttheory,chisq_withtheory,chan2);

      result = -0.5*chisq_withouttheory;
      //std::cout << "Calculating LEP chisq: " << chisq_withouttheory << " (no theor), " << chisq_withtheory << " (with theor)" << endl;

    }

    /// Get an LHC chisq from HiggsSignals
    void calc_HS_LHC_LogLike(double &result)
    {
      using namespace Pipes::calc_HS_LHC_LogLike;

      hb_ModelParameters ModelParam = *Dep::HB_ModelParameters;

      Farray<double, 1,3, 1,3> CS_lep_hjhi_ratio;
      Farray<double, 1,3, 1,3> BR_hjhihi;
      for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++)
      {
        CS_lep_hjhi_ratio(i+1,j+1) = ModelParam.CS_lep_hjhi_ratio[i][j];
        BR_hjhihi(i+1,j+1) = ModelParam.BR_hjhihi[i][j];
      }

      BEreq::HiggsBounds_neutral_input_part_HS(&ModelParam.Mh[0], &ModelParam.hGammaTot[0], &ModelParam.CP[0],
                 &ModelParam.CS_lep_hjZ_ratio[0], &ModelParam.CS_lep_bbhj_ratio[0],
                 &ModelParam.CS_lep_tautauhj_ratio[0], CS_lep_hjhi_ratio,
                 &ModelParam.CS_gg_hj_ratio[0], &ModelParam.CS_bb_hj_ratio[0],
                 &ModelParam.CS_bg_hjb_ratio[0], &ModelParam.CS_ud_hjWp_ratio[0],
                 &ModelParam.CS_cs_hjWp_ratio[0], &ModelParam.CS_ud_hjWm_ratio[0],
                 &ModelParam.CS_cs_hjWm_ratio[0], &ModelParam.CS_gg_hjZ_ratio[0],
                 &ModelParam.CS_dd_hjZ_ratio[0], &ModelParam.CS_uu_hjZ_ratio[0],
                 &ModelParam.CS_ss_hjZ_ratio[0], &ModelParam.CS_cc_hjZ_ratio[0],
                 &ModelParam.CS_bb_hjZ_ratio[0], &ModelParam.CS_tev_vbf_ratio[0],
                 &ModelParam.CS_tev_tthj_ratio[0], &ModelParam.CS_lhc7_vbf_ratio[0],
                 &ModelParam.CS_lhc7_tthj_ratio[0], &ModelParam.CS_lhc8_vbf_ratio[0],
                 &ModelParam.CS_lhc8_tthj_ratio[0], &ModelParam.BR_hjss[0],
                 &ModelParam.BR_hjcc[0], &ModelParam.BR_hjbb[0],
                 &ModelParam.BR_hjmumu[0], &ModelParam.BR_hjtautau[0],
                 &ModelParam.BR_hjWW[0], &ModelParam.BR_hjZZ[0],
                 &ModelParam.BR_hjZga[0], &ModelParam.BR_hjgaga[0],
                 &ModelParam.BR_hjgg[0], &ModelParam.BR_hjinvisible[0], BR_hjhihi);

      BEreq::HiggsBounds_charged_input_HS(&ModelParam.MHplus[0], &ModelParam.HpGammaTot[0], &ModelParam.CS_lep_HpjHmi_ratio[0],
            &ModelParam.BR_tWpb, &ModelParam.BR_tHpjb[0], &ModelParam.BR_Hpjcs[0],
            &ModelParam.BR_Hpjcb[0], &ModelParam.BR_Hptaunu[0]);

      BEreq::HiggsSignals_neutral_input_MassUncertainty(&ModelParam.deltaMh[0]);

      // add uncertainties to cross-sections and branching ratios
      // double dCS[5] = {0.,0.,0.,0.,0.};
      // double dBR[5] = {0.,0.,0.,0.,0.};
      // BEreq::setup_rate_uncertainties(dCS,dBR);

      // run HiggsSignals
      int mode = 1; // 1- peak-centered chi2 method (recommended)
      double csqmu, csqmh, csqtot, Pvalue;
      int nobs;
      BEreq::run_HiggsSignals(mode, csqmu, csqmh, csqtot, nobs, Pvalue);

      result = -0.5*csqtot;
      //std::cout << "Calculating LHC chisq: " << csqmu << " (signal strength only), " << csqmh << " (mass only), ";
      //std::cout << csqtot << " (both), Nobs: " << nobs << ", Pvalue: " << Pvalue << endl;

    }


    void calc_Lilith_LHC_LogLike(double &result)
    {
      using namespace Pipes::calc_Lilith_LHC_LogLike;
      // Creating an XML input string for the reduced coupling mode
      // signalstrength mode would work as well
      char XMLinputstring[6000]="";
      char buffer[100];
    
      lilith_ModelParameters ModelParam = *Dep::Lilith_ModelParameters;
      
      double mh = ModelParam.mh;
      double CU = ModelParam.CU;
      double CD = ModelParam.CD;
      double CV = ModelParam.CV;
      double CGa = ModelParam.CGa;
      double Cg = ModelParam.Cg;
      double BRinv = ModelParam.BRinv;
      double BRund = ModelParam.BRund;
      
      //double mh = *Param.at("mH");
      char precision[] = "BEST-QCD";
    

      sprintf(buffer,"<?xml version=\"1.0\"?>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<lilithinput>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<reducedcouplings>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<mass>%f</mass>\n", mh);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"tt\">%f</C>\n", CU);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"cc\">%f</C>\n", CU);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"bb\">%f</C>\n", CD);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"tautau\">%f</C>\n", CD);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"ZZ\">%f</C>\n", CV);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"WW\">%f</C>\n", CV);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"gammagamma\">%f</C>\n", CGa);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"gg\">%f</C>\n", Cg);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<extraBR>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<BR to=\"invisible\">%f</BR>\n", BRinv);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<BR to=\"undetected\">%f</BR>\n", BRund);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"</extraBR>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<precision>%s</precision>\n",precision);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"</reducedcouplings>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"</lilithinput>\n");
      strcat(XMLinputstring, buffer);
      
      // Reading user input XML string
      PyObject* lilithcalc_local = BEreq::get_lilithcalc();
      
      cout << "HIGGS MASS = " << mh << endl;
      
      lilithcalc_local = BEreq::get_lilith_readuserinput(byVal(lilithcalc_local), XMLinputstring);

      // Getting -2LogL
      float my_likelihood;
      my_likelihood = BEreq::get_lilith_computelikelihood(byVal(lilithcalc_local));
      result = my_likelihood;
     // result = 0;
    }

  }
}
