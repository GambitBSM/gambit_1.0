//   GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Functions of ColliderBit_eventLoop.
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
///  \author Anders Kvellestad
///          (anders.kvellestad@nordita.org)
///  \date   2017 March
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

//#define COLLIDERBIT_DEBUG

namespace Gambit
{

  namespace ColliderBit
  {


    /// **************************************************
    /// Non-rollcalled functions and module-wide variables
    /// **************************************************


    #ifdef COLLIDERBIT_DEBUG
      str debug_prefix()
      {
        std::stringstream ss;
        ss << "DEBUG: OMP thread " << omp_get_thread_num() << ":  ";
        return ss.str();
      }
    #endif

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


    /// Module-wide variables

    // TODO: Get rid of some of these variables by restructuring the code a bit

    /// Special iteration labels for the loop controlled by operateLHCLoop
    enum specialIterations { BASE_INIT = -1,
                             COLLIDER_INIT = -2,
                             START_SUBPROCESS = -3,
                             END_SUBPROCESS = -4,
                             COLLIDER_FINALIZE = -5,
                             BASE_FINALIZE = -6};

    /// Pythia stuff
    std::vector<str> pythiaNames;
    std::vector<str>::const_iterator iterPythiaNames;
    unsigned int indexPythiaNames;
    bool eventsGenerated;
    bool tooManyFailedEvents;
    std::vector<int> nEvents;
    int seedBase;

    /// Analysis stuff
    bool useBuckFastATLASDetector;
    HEPUtilsAnalysisContainer globalAnalysesATLAS;

    bool useBuckFastCMSDetector;
    HEPUtilsAnalysisContainer globalAnalysesCMS;

    bool useBuckFastIdentityDetector;
    HEPUtilsAnalysisContainer globalAnalysesIdentity;

#ifndef EXCLUDE_DELPHES
    bool useDelphesDetector;
    HEPUtilsAnalysisContainer globalAnalysesDet;
#endif

    bool haveUsedBuckFastATLASDetector;
    bool haveUsedBuckFastCMSDetector;
    bool haveUsedBuckFastIdentityDetector;
#ifndef EXCLUDE_DELPHES
    bool haveUsedDelphesDetector;
#endif




    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
    /// *** Loop Managers ***

    /// @note: Much of the loop below designed for splitting up the subprocesses to be generated.

    void operateLHCLoop()
    {
      using namespace Pipes::operateLHCLoop;
      static std::streambuf *coutbuf = std::cout.rdbuf(); // save cout buffer for running the loop quietly

      #ifdef COLLIDERBIT_DEBUG
        std::cerr << debug_prefix() << "New point!" << endl;
      #endif

      //
      // Clear global containers and variables
      //
      pythiaNames.clear();
      iterPythiaNames = pythiaNames.cbegin();
      indexPythiaNames = 0;

      nEvents.clear();
      // - Pythia random number seed base will be set in the loop over colliders below.
      seedBase = 0;
      // - Set eventsGenerated to true once some events are generated.
      eventsGenerated = false;
      // - Set tooManyFailedEvents to true if too many events fail.
      tooManyFailedEvents = false;

      useBuckFastATLASDetector = false;
      globalAnalysesATLAS.clear();

      useBuckFastCMSDetector = false;
      globalAnalysesCMS.clear();

      useBuckFastIdentityDetector = false;
      globalAnalysesIdentity.clear();

#ifndef EXCLUDE_DELPHES
      useDelphesDetector = false;
      globalAnalysesDet.clear();
#endif

      haveUsedBuckFastATLASDetector = false;
      haveUsedBuckFastCMSDetector = false;
      haveUsedBuckFastIdentityDetector = false;
#ifndef EXCLUDE_DELPHES
      haveUsedDelphesDetector = false;
#endif


      // Retrieve run options from the YAML file (or standalone code)
      pythiaNames = runOptions->getValue<std::vector<str> >("pythiaNames");
      nEvents = runOptions->getValue<std::vector<int> >("nEvents");

      // Check that length of pythiaNames and nEvents agree!
      if (pythiaNames.size() != nEvents.size())
      {
        str errmsg;
        errmsg  = "The options 'pythiaNames' and 'nEvents' for the function 'operateLHCLoop' must have\n";
        errmsg += "the same number of entries. Correct your settings and try again.\n";
        ColliderBit_error().raise(LOCAL_INFO, errmsg);
      }

      // Should we silence stdout during the loop?
      bool silenceLoop = runOptions->getValueOrDef<bool>(true, "silenceLoop");
      if (silenceLoop) std::cout.rdbuf(0);



      // Do the base-level initialisation
      Loop::executeIteration(BASE_INIT);

      // For every collider requested in the yaml file:
      for (iterPythiaNames = pythiaNames.cbegin(); iterPythiaNames != pythiaNames.cend(); ++iterPythiaNames)
      {

        // Update the global index indexPythiaNames
        indexPythiaNames = iterPythiaNames - pythiaNames.cbegin();

        // Update the global Pythia seedBase.
        // The Pythia random number seed will be this, plus the thread number.
        seedBase = int(Random::draw() * 899990000);

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "Current collider: " << *iterPythiaNames << " with index " << indexPythiaNames << endl;
        #endif

        piped_invalid_point.check();
        Loop::reset();
        Loop::executeIteration(COLLIDER_INIT);

        // Any problem during COLLIDER_INIT step?
        piped_warnings.check(ColliderBit_warning());
        piped_errors.check(ColliderBit_error());

        // 
        // OMP parallelized loop begins here
        // 
        int currentEvent = 0;
        #pragma omp parallel
        {
          Loop::executeIteration(START_SUBPROCESS);
        }
        // Any problems during the START_SUBPROCESS step?
        piped_warnings.check(ColliderBit_warning());
        piped_errors.check(ColliderBit_error());

        // Main event loop
        #pragma omp parallel
        {
          while(currentEvent<nEvents[indexPythiaNames] and not *Loop::done and not piped_errors.inquire()) 
          {
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
        }
        // Any problems during the main event loop?
        piped_warnings.check(ColliderBit_warning());
        piped_errors.check(ColliderBit_error());

        #pragma omp parallel
        {
          Loop::executeIteration(END_SUBPROCESS);
        }
        // Any problems during the END_SUBPROCESS loop?
        piped_warnings.check(ColliderBit_warning());
        piped_errors.check(ColliderBit_error());

        // 
        // OMP parallelized loop ends here
        // 

        Loop::executeIteration(COLLIDER_FINALIZE);
      }

      // Nicely thank the loop for being quiet, and restore everyone's vocal cords
      if (silenceLoop) std::cout.rdbuf(coutbuf);

      // Check for exceptions
      piped_invalid_point.check();

      Loop::executeIteration(BASE_FINALIZE);
    }



    /// *** Hard Scattering Collider Simulators ***

    void getPythia(Gambit::ColliderBit::SpecializablePythia &result)
    {
      using namespace Pipes::getPythia;

      static str pythia_doc_path;
      static str default_doc_path;
      static bool pythia_doc_path_needs_setting = true;
      static std::vector<str> pythiaCommonOptions;
      static SLHAstruct slha;
      static SLHAstruct spectrum;
      static std::vector<double> xsec_vetos;

      if (*Loop::iteration == BASE_INIT)
      {
        // Setup the Pythia documentation path
        if (pythia_doc_path_needs_setting)
        {
          default_doc_path = GAMBIT_DIR "/Backends/installed/Pythia/" +
                             Backends::backendInfo().default_version("Pythia") +
                             "/share/Pythia8/xmldoc/";
          pythia_doc_path = runOptions->getValueOrDef<str>(default_doc_path, "Pythia_doc_path");
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

        // Read xsec veto values and store in static variable 'xsec_vetos'
        std::vector<double> default_xsec_vetos(pythiaNames.size(), 0.0);
        xsec_vetos = runOptions->getValueOrDef<std::vector<double> >(default_xsec_vetos, "xsec_vetos");
        CHECK_EQUAL_VECTOR_LENGTH(xsec_vetos, pythiaNames)
      }

      else if (*Loop::iteration == COLLIDER_INIT)
      {
        // Collect Pythia options that are common across all OMP threads
        pythiaCommonOptions.clear();

        // By default we tell Pythia to be quiet. (Can be overridden from yaml settings)
        pythiaCommonOptions.push_back("Print:quiet = on");
        pythiaCommonOptions.push_back("SLHA:verbose = 0");

        // Get options from yaml file. If the SpecializablePythia specialization is hard-coded, okay with no options.
        if (runOptions->hasKey(*iterPythiaNames))
        {
          std::vector<str> addPythiaOptions = runOptions->getValue<std::vector<str>>(*iterPythiaNames);
          pythiaCommonOptions.insert(pythiaCommonOptions.end(), addPythiaOptions.begin(), addPythiaOptions.end());
        }

        // We need showProcesses for the xsec veto.
        pythiaCommonOptions.push_back("Init:showProcesses = on");

        // We need "SLHA:file = slhaea" for the SLHAea interface.
        pythiaCommonOptions.push_back("SLHA:file = slhaea");
      }

      else if (*Loop::iteration == START_SUBPROCESS)
      {
        // Variables needed for the xsec veto
        std::stringstream processLevelOutput;
        str _junk, readline;
        int code, nxsec;
        double xsec, totalxsec;

        // Each thread needs an independent Pythia instance at the start
        // of each event generation loop.
        // Thus, the actual Pythia initialization is
        // *after* COLLIDER_INIT, within omp parallel.

        result.clear();

        // Get the Pythia options that are common across all OMP threads ('pythiaCommonOptions')
        // and then add the thread-specific seed
        std::vector<str> pythiaOptions = pythiaCommonOptions;
        pythiaOptions.push_back("Random:seed = " + std::to_string(seedBase + omp_get_thread_num()));

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "getPythia: My Pythia seed is: " << std::to_string(seedBase + omp_get_thread_num()) << endl;
        #endif

        result.resetSpecialization(*iterPythiaNames);

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
            #ifdef COLLIDERBIT_DEBUG
              std::cerr << debug_prefix() << "SpecializablePythia::InitializationError caught in getPythia. Will discard this point." << endl;
            #endif
            piped_invalid_point.request("Bad point: Pythia can't initialize");
            Loop::wrapup();
            return;
          }
        }

        // Should we apply the xsec veto and skip event generation?

        // - Get the xsec veto value for the current collider
        double totalxsec_fb_veto = xsec_vetos[indexPythiaNames];

        // - Get the upper limt xsec as estimated by Pythia
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

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "totalxsec [fb] = " << totalxsec * 1e12 << ", veto limit [fb] = " << totalxsec_fb_veto << endl;
        #endif

        // - Wrap up loop if veto applies
        if (totalxsec * 1e12 < totalxsec_fb_veto)
        {
          #ifdef COLLIDERBIT_DEBUG
            std::cerr << debug_prefix() << "Cross-section veto applies. Will now call Loop::wrapup() to skip event generation for this collider." << endl;
          #endif
          Loop::wrapup();
        }
      }
    }



    void getPythiaFileReader(Gambit::ColliderBit::SpecializablePythia &result)
    {
      using namespace Pipes::getPythiaFileReader;

      static std::vector<str> filenames;
      static str default_doc_path;
      static str pythia_doc_path;
      static std::vector<str> pythiaCommonOptions;
      static bool pythia_doc_path_needs_setting = true;
      static unsigned int fileCounter = 0;
      static std::vector<double> xsec_vetos;

      if (*Loop::iteration == BASE_INIT)
      {
        // Setup the Pythia documentation path
        if (pythia_doc_path_needs_setting)
        {
          default_doc_path = GAMBIT_DIR "/Backends/installed/Pythia/" +
                             Backends::backendInfo().default_version("Pythia") +
                             "/share/Pythia8/xmldoc/";
          pythia_doc_path = runOptions->getValueOrDef<str>(default_doc_path, "Pythia_doc_path");
          // Print the Pythia banner once.
          result.banner(pythia_doc_path);
          pythia_doc_path_needs_setting = false;
        }

        // Get SLHA file(s)
        filenames = runOptions->getValue<std::vector<str> >("SLHA_filenames");
        if (filenames.empty())
        {
          str errmsg = "No SLHA files are listed for ColliderBit function getPythiaFileReader.\n";
          errmsg    += "Please correct the option 'SLHA_filenames' or use getPythia instead.";
          ColliderBit_error().raise(LOCAL_INFO, errmsg);
        }

        if (filenames.size() <= fileCounter) invalid_point().raise("No more SLHA files. My work is done.");

        // Read xsec veto values and store in static variable 'xsec_vetos'
        std::vector<double> default_xsec_vetos(pythiaNames.size(), 0.0);
        xsec_vetos = runOptions->getValueOrDef<std::vector<double> >(default_xsec_vetos, "xsec_vetos");
        CHECK_EQUAL_VECTOR_LENGTH(xsec_vetos, pythiaNames)
      }

      if (*Loop::iteration == COLLIDER_INIT)
      {
        // Collect Pythia options that are common across all OMP threads
        pythiaCommonOptions.clear();

        // By default we tell Pythia to be quiet. (Can be overridden from yaml settings)
        pythiaCommonOptions.push_back("Print:quiet = on");
        pythiaCommonOptions.push_back("SLHA:verbose = 0");

        // Get options from yaml file. If the SpecializablePythia specialization is hard-coded, okay with no options.
        if (runOptions->hasKey(*iterPythiaNames))
        {
          std::vector<str> addPythiaOptions = runOptions->getValue<std::vector<str>>(*iterPythiaNames);
          pythiaCommonOptions.insert(pythiaCommonOptions.end(), addPythiaOptions.begin(), addPythiaOptions.end());
        }

        // We need showProcesses for the xsec veto.
        pythiaCommonOptions.push_back("Init:showProcesses = on");

        // We need to control "SLHA:file" for the SLHA interface.
        pythiaCommonOptions.push_back("SLHA:file = " + filenames.at(fileCounter));
      }


      if (*Loop::iteration == START_SUBPROCESS)
      {
        // variables for xsec veto
        std::stringstream processLevelOutput;
        str _junk, readline;
        int code, nxsec;
        double xsec, totalxsec;

        // Each thread needs an independent Pythia instance at the start
        // of each event generation loop.
        // Thus, the actual Pythia initialization is
        // *after* COLLIDER_INIT, within omp parallel.

        result.clear();

        if (omp_get_thread_num() == 0) logger() << "Reading SLHA file: " << filenames.at(fileCounter) << EOM;

        // Get the Pythia options that are common across all OMP threads ('pythiaCommonOptions')
        // and then add the thread-specific seed
        std::vector<str> pythiaOptions = pythiaCommonOptions;
        pythiaOptions.push_back("Random:seed = " + std::to_string(seedBase + omp_get_thread_num()));

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "getPythiaFileReader: My Pythia seed is: " << std::to_string(seedBase + omp_get_thread_num()) << endl;
        #endif

        result.resetSpecialization(*iterPythiaNames);

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

        // Should we apply the xsec veto and skip event generation?

        // - Get the xsec veto value for the current collider
        double totalxsec_fb_veto = xsec_vetos[indexPythiaNames];

        // - Get the upper limt xsec as estimated by Pythia
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

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "totalxsec [fb] = " << totalxsec * 1e12 << ", veto limit [fb] = " << totalxsec_fb_veto << endl;
        #endif

        // - Wrap up loop if veto applies
        if (totalxsec * 1e12 < totalxsec_fb_veto)
        {
          #ifdef COLLIDERBIT_DEBUG
            std::cerr << debug_prefix() << "Cross-section veto applies. Will now call Loop::wrapup() to skip event generation for this collider." << endl;
          #endif
          Loop::wrapup();
        }

      }

      if (*Loop::iteration == BASE_FINALIZE) fileCounter++;

    }


    /// *** Detector Simulators ***

#ifndef EXCLUDE_DELPHES
    void getDelphes(Gambit::ColliderBit::DelphesVanilla &result) {
      using namespace Pipes::getDelphes;
      static std::vector<bool> useDetector;
      static std::vector<str> delphesConfigFiles;

      if (*Loop::iteration == BASE_INIT)
      {
        // Read useDetector option
        std::vector<bool> default_useDetector(pythiaNames.size(), false);  // Delphes is switched off by default
        useDetector = runOptions->getValueOrDef<std::vector<bool> >(default_useDetector, "useDetector");
        CHECK_EQUAL_VECTOR_LENGTH(useDetector,pythiaNames)

        // Return if all elements in useDetector are false
        if (std::find(useDetector.begin(), useDetector.end(), true) == useDetector.end())
          return;

        // Read delphesConfigFiles option
        delphesConfigFiles = runOptions->getValue<std::vector<str> >("delphesConfigFiles");
        CHECK_EQUAL_VECTOR_LENGTH(delphesConfigFiles,pythiaNames)

        // Delphes is not threadsafe (depends on ROOT). Raise error if OMP_NUM_THREADS=1.
        if(omp_get_max_threads()>1 and std::find(useDetector.begin(), useDetector.end(), true) != useDetector.end())
        {
          str errmsg = "Delphes is not threadsafe and cannot be used with OMP_NUM_THREADS>1.\n";
          errmsg    += "Either set OMP_NUM_THREADS=1 or switch to a threadsafe detector simulator, e.g. BuckFast.";
          ColliderBit_error().raise(LOCAL_INFO, errmsg);
        }

        return;
      }

      if (*Loop::iteration == COLLIDER_INIT)
      {
        result.clear();

        // Get useDetector setting for the current collider
        useDelphesDetector = useDetector[indexPythiaNames];
        if (!useDelphesDetector) return;
        else haveUsedDelphesDetector = true;

        // Setup new Delphes for the current collider
        std::vector<str> delphesOptions;
        delphesOptions.push_back(delphesConfigFiles[indexPythiaNames]);

        try
        {
          result.init(delphesOptions);
        }
        catch (std::runtime_error& e)
        {
          #ifdef COLLIDERBIT_DEBUG
            std::cerr << debug_prefix() << "DelphesVanilla::InitializationError caught in getDelphes. Will raise ColliderBit_error." << endl;
          #endif
          str errmsg = "getDelphes caught the following runtime error: ";
          errmsg    += e.what();
          piped_errors.request(LOCAL_INFO, errmsg);
        }
      }
    }

#endif // not defined EXCLUDE_DELPHES



    void getBuckFastATLAS(Gambit::ColliderBit::BuckFastSmearATLAS &result)
    {
      using namespace Pipes::getBuckFastATLAS;
      static std::vector<bool> useDetector;
      static std::vector<bool> partonOnly;
      static std::vector<double> antiktR;

      if (*Loop::iteration == BASE_INIT)
      {
        // Read options
        std::vector<bool> default_useDetector(pythiaNames.size(), true);  // BuckFastATLAS is switched on by default
        useDetector = runOptions->getValueOrDef<std::vector<bool> >(default_useDetector, "useDetector");
        CHECK_EQUAL_VECTOR_LENGTH(useDetector,pythiaNames)

        std::vector<bool> default_partonOnly(pythiaNames.size(), false);
        partonOnly = runOptions->getValueOrDef<std::vector<bool> >(default_partonOnly, "partonOnly");
        CHECK_EQUAL_VECTOR_LENGTH(partonOnly,pythiaNames)

        std::vector<double> default_antiktR(pythiaNames.size(), 0.4);
        antiktR = runOptions->getValueOrDef<std::vector<double> >(default_antiktR, "antiktR");
        CHECK_EQUAL_VECTOR_LENGTH(antiktR,pythiaNames)

        return;
      }

      if (*Loop::iteration == COLLIDER_INIT)
      {
        // Get useDetector setting for the current collider
        useBuckFastATLASDetector = useDetector[indexPythiaNames];
        if (useBuckFastATLASDetector)
          haveUsedBuckFastATLASDetector = true;

        return;
      }

      if (*Loop::iteration == START_SUBPROCESS and useBuckFastATLASDetector)
      {
        // Each thread gets its own BuckFastSmearATLAS.
        // Thus, their initialization is *after* COLLIDER_INIT, within omp parallel.
        result.init(partonOnly[indexPythiaNames], antiktR[indexPythiaNames]);

        return;
      }

    }



    void getBuckFastCMS(Gambit::ColliderBit::BuckFastSmearCMS &result)
    {
      using namespace Pipes::getBuckFastCMS;
      static std::vector<bool> useDetector;
      static std::vector<bool> partonOnly;
      static std::vector<double> antiktR;

      if (*Loop::iteration == BASE_INIT)
      {
        // Read options
        std::vector<bool> default_useDetector(pythiaNames.size(), true);  // BuckFastCMS is switched on by default
        useDetector = runOptions->getValueOrDef<std::vector<bool> >(default_useDetector, "useDetector");
        CHECK_EQUAL_VECTOR_LENGTH(useDetector,pythiaNames)

        std::vector<bool> default_partonOnly(pythiaNames.size(), false);
        partonOnly = runOptions->getValueOrDef<std::vector<bool> >(default_partonOnly, "partonOnly");
        CHECK_EQUAL_VECTOR_LENGTH(partonOnly,pythiaNames)

        std::vector<double> default_antiktR(pythiaNames.size(), 0.4);
        antiktR = runOptions->getValueOrDef<std::vector<double> >(default_antiktR, "antiktR");
        CHECK_EQUAL_VECTOR_LENGTH(antiktR,pythiaNames)

        return;
      }

      if (*Loop::iteration == COLLIDER_INIT)
      {
        // Get useDetector setting for the current collider
        useBuckFastCMSDetector = useDetector[indexPythiaNames];
        if (useBuckFastCMSDetector)
          haveUsedBuckFastCMSDetector = true;

        return;
      }

      if (*Loop::iteration == START_SUBPROCESS and useBuckFastCMSDetector)
      {
        // Each thread gets its own BuckFastSmearCMS.
        // Thus, their initialization is *after* COLLIDER_INIT, within omp parallel.
        result.init(partonOnly[indexPythiaNames], antiktR[indexPythiaNames]);

        return;
      }

    }



    void getBuckFastIdentity(Gambit::ColliderBit::BuckFastIdentity &result)
    {
      using namespace Pipes::getBuckFastIdentity;
      static std::vector<bool> useDetector;
      static std::vector<bool> partonOnly;
      static std::vector<double> antiktR;

      if (*Loop::iteration == BASE_INIT)
      {
        // Read options
        std::vector<bool> default_useDetector(pythiaNames.size(), false);  // BuckFastIdentity is switched off by default
        useDetector = runOptions->getValueOrDef<std::vector<bool> >(default_useDetector, "useDetector");
        CHECK_EQUAL_VECTOR_LENGTH(useDetector,pythiaNames)

        std::vector<bool> default_partonOnly(pythiaNames.size(), false);
        partonOnly = runOptions->getValueOrDef<std::vector<bool> >(default_partonOnly, "partonOnly");
        CHECK_EQUAL_VECTOR_LENGTH(partonOnly,pythiaNames)

        std::vector<double> default_antiktR(pythiaNames.size(), 0.4);
        antiktR = runOptions->getValueOrDef<std::vector<double> >(default_antiktR, "antiktR");
        CHECK_EQUAL_VECTOR_LENGTH(antiktR,pythiaNames)

        return;
      }

      if (*Loop::iteration == COLLIDER_INIT)
      {
        // Get useDetector setting for the current collider
        useBuckFastIdentityDetector = useDetector[indexPythiaNames];
        if (useBuckFastIdentityDetector)
          haveUsedBuckFastIdentityDetector = true;

        return;
      }

      if (*Loop::iteration == START_SUBPROCESS and useBuckFastIdentityDetector)
      {
        // Each thread gets its own BuckFastSmearIdentity.
        // Thus, their initialization is *after* COLLIDER_INIT, within omp parallel.
        result.init(partonOnly[indexPythiaNames], antiktR[indexPythiaNames]);

        return;
      }
    }



    /// *** Initialization for analyses ***


#ifndef EXCLUDE_DELPHES
    void getDetAnalysisContainer(Gambit::ColliderBit::HEPUtilsAnalysisContainer& result) {
      using namespace Pipes::getDetAnalysisContainer;
      static std::vector<std::vector<str> > analyses;

      if (*Loop::iteration == BASE_INIT)
      {
        // Read options
        std::vector<std::vector<str> > default_analyses;  // The default is empty lists of analyses
        analyses = runOptions->getValueOrDef<std::vector<std::vector<str> > >(default_analyses, "analyses");
      }

      if (*Loop::iteration == COLLIDER_INIT) {

        if (!useDelphesDetector) return;

        // Check that there are some analyses to run if the detector is switched on
        if (analyses[indexPythiaNames].empty() and useDelphesDetector)
        {
          str errmsg = "The option 'useDetector' for function 'getDelphes' is set to true\n";
          errmsg    += "for the collider '";
          errmsg    += *iterPythiaNames;
          errmsg    += "', but the corresponding list of analyses\n";
          errmsg    += "(in option 'analyses' for function 'getDetAnalysisContainer') is empty.\n";
          errmsg    += "Please correct your settings.\n";
          ColliderBit_error().raise(LOCAL_INFO, errmsg);
        }

        globalAnalysesDet.clear();
        globalAnalysesDet.init(analyses[indexPythiaNames]);
        return;
      }

      if (!useDelphesDetector) return;

      if (*Loop::iteration == START_SUBPROCESS)
      {
        // Each thread gets its own Analysis container.
        // Thus, their initialization is *after* COLLIDER_INIT, within omp parallel.
        result.clear();
        result.init(analyses[indexPythiaNames]);

        #ifdef COLLIDERBIT_DEBUG
          if (omp_get_thread_num() == 0)
          {
            for (auto it = analyses[indexPythiaNames].begin(); it != analyses[indexPythiaNames].end(); ++it)
            {
              std::cerr << debug_prefix() << "The run with " << *iterPythiaNames << " will include the analysis " << *it << endl;
            }
          }
        #endif

        return;
      }

      if (*Loop::iteration == END_SUBPROCESS && eventsGenerated && !tooManyFailedEvents)
      {
        const double xs_fb = Dep::HardScatteringSim->xsec_pb() * 1000.;
        const double xserr_fb = Dep::HardScatteringSim->xsecErr_pb() * 1000.;
        result.add_xsec(xs_fb, xserr_fb);

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "xs_fb = " << xs_fb << " +/- " << xserr_fb << endl;
        #endif

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
      static std::vector<std::vector<str> > analyses;

      if (*Loop::iteration == BASE_INIT)
      {
        // Read options
        std::vector<std::vector<str> > default_analyses;  // The default is empty lists of analyses
        analyses = runOptions->getValueOrDef<std::vector<std::vector<str> > >(default_analyses, "analyses");
      }

      if (*Loop::iteration == COLLIDER_INIT) {

        if (!useBuckFastATLASDetector) return;

        // Check that there are some analyses to run if the detector is switched on
        if (analyses[indexPythiaNames].empty() and useBuckFastATLASDetector)
        {
          str errmsg = "The option 'useDetector' for function 'getBuckFastATLAS' is set to true\n";
          errmsg    += "for the collider '";
          errmsg    += *iterPythiaNames;
          errmsg    += "', but the corresponding list of analyses\n";
          errmsg    += "(in option 'analyses' for function 'getATLASAnalysisContainer') is empty.\n";
          errmsg    += "Please correct your settings.\n";
          ColliderBit_error().raise(LOCAL_INFO, errmsg);
        }

        globalAnalysesATLAS.clear();
        globalAnalysesATLAS.init(analyses[indexPythiaNames]);
        return;
      }

      if (!useBuckFastATLASDetector) return;

      if (*Loop::iteration == START_SUBPROCESS)
      {
        // Each thread gets its own Analysis container.
        // Thus, their initialization is *after* COLLIDER_INIT, within omp parallel.
        result.clear();
        result.init(analyses[indexPythiaNames]);

        #ifdef COLLIDERBIT_DEBUG
          if (omp_get_thread_num() == 0)
          {
            for (auto it = analyses[indexPythiaNames].begin(); it != analyses[indexPythiaNames].end(); ++it)
            {
              std::cerr << debug_prefix() << "The run with " << *iterPythiaNames << " will include the analysis " << *it << endl;
            }
          }
        #endif

        return;
      }

      if (*Loop::iteration == END_SUBPROCESS && eventsGenerated && !tooManyFailedEvents)
      {
        const double xs_fb = Dep::HardScatteringSim->xsec_pb() * 1000.;
        const double xserr_fb = Dep::HardScatteringSim->xsecErr_pb() * 1000.;
        result.add_xsec(xs_fb, xserr_fb);

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "xs_fb = " << xs_fb << " +/- " << xserr_fb << endl;
        #endif

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
      static std::vector<std::vector<str> > analyses;

      if (*Loop::iteration == BASE_INIT)
      {
        // Read options
        std::vector<std::vector<str> > default_analyses;  // The default is empty lists of analyses
        analyses = runOptions->getValueOrDef<std::vector<std::vector<str> > >(default_analyses, "analyses");
      }

      if (*Loop::iteration == COLLIDER_INIT) {

        if (!useBuckFastCMSDetector) return;

        // Check that there are some analyses to run if the detector is switched on
        if (analyses[indexPythiaNames].empty() and useBuckFastCMSDetector)
        {
          str errmsg = "The option 'useDetector' for function 'getBuckFastCMS' is set to true\n";
          errmsg    += "for the collider '";
          errmsg    += *iterPythiaNames;
          errmsg    += "', but the corresponding list of analyses\n";
          errmsg    += "(in option 'analyses' for function 'getCMSAnalysisContainer') is empty.\n";
          errmsg    += "Please correct your settings.\n";
          ColliderBit_error().raise(LOCAL_INFO, errmsg);
        }

        globalAnalysesCMS.clear();
        globalAnalysesCMS.init(analyses[indexPythiaNames]);
        return;
      }

      if (!useBuckFastCMSDetector) return;

      if (*Loop::iteration == START_SUBPROCESS)
      {
        // Each thread gets its own Analysis container.
        // Thus, their initialization is *after* COLLIDER_INIT, within omp parallel.
        result.clear();
        result.init(analyses[indexPythiaNames]);

        #ifdef COLLIDERBIT_DEBUG
          if (omp_get_thread_num() == 0)
          {
            for (auto it = analyses[indexPythiaNames].begin(); it != analyses[indexPythiaNames].end(); ++it)
            {
              std::cerr << debug_prefix() << "The run with " << *iterPythiaNames << " will include the analysis " << *it << endl;
            }
          }
        #endif

        return;
      }

      if (*Loop::iteration == END_SUBPROCESS && eventsGenerated && !tooManyFailedEvents)
      {
        const double xs_fb = Dep::HardScatteringSim->xsec_pb() * 1000.;
        const double xserr_fb = Dep::HardScatteringSim->xsecErr_pb() * 1000.;
        result.add_xsec(xs_fb, xserr_fb);

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "xs_fb = " << xs_fb << " +/- " << xserr_fb << endl;
        #endif

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



    void getIdentityAnalysisContainer(Gambit::ColliderBit::HEPUtilsAnalysisContainer& result) {
      using namespace Pipes::getIdentityAnalysisContainer;
      static std::vector<std::vector<str> > analyses;

      if (*Loop::iteration == BASE_INIT)
      {
        // Read options
        std::vector<std::vector<str> > default_analyses;  // The default is empty lists of analyses
        analyses = runOptions->getValueOrDef<std::vector<std::vector<str> > >(default_analyses, "analyses");
      }

      if (*Loop::iteration == COLLIDER_INIT) {

        if (!useBuckFastIdentityDetector) return;

        // Check that there are some analyses to run if the detector is switched on
        if (analyses[indexPythiaNames].empty() and useBuckFastIdentityDetector)
        {
          str errmsg = "The option 'useDetector' for function 'getBuckFastIdentity' is set to true\n";
          errmsg    += "for the collider '";
          errmsg    += *iterPythiaNames;
          errmsg    += "', but the corresponding list of analyses\n";
          errmsg    += "(in option 'analyses' for function 'getIdentityAnalysisContainer') is empty.\n";
          errmsg    += "Please correct your settings.\n";
          ColliderBit_error().raise(LOCAL_INFO, errmsg);
        }

        globalAnalysesIdentity.clear();
        globalAnalysesIdentity.init(analyses[indexPythiaNames]);
        return;
      }

      if (!useBuckFastIdentityDetector) return;

      if (*Loop::iteration == START_SUBPROCESS)
      {
        // Each thread gets its own Analysis container.
        // Thus, their initialization is *after* COLLIDER_INIT, within omp parallel.
        result.clear();
        result.init(analyses[indexPythiaNames]);

        #ifdef COLLIDERBIT_DEBUG
          if (omp_get_thread_num() == 0)
          {
            for (auto it = analyses[indexPythiaNames].begin(); it != analyses[indexPythiaNames].end(); ++it)
            {
              std::cerr << debug_prefix() << "The run with " << *iterPythiaNames << " will include the analysis " << *it << endl;
            }
          }
        #endif

        return;
      }

      if (*Loop::iteration == END_SUBPROCESS && eventsGenerated && !tooManyFailedEvents)
      {
        const double xs_fb = Dep::HardScatteringSim->xsec_pb() * 1000.;
        const double xserr_fb = Dep::HardScatteringSim->xsecErr_pb() * 1000.;
        result.add_xsec(xs_fb, xserr_fb);

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "xs_fb = " << xs_fb << " +/- " << xserr_fb << endl;
        #endif

        // Combine results from the threads together
        #pragma omp critical (access_globalAnalyses)
        {
          globalAnalysesIdentity.add(result);
          // Use improve_xsec to combine results from the same process type
          globalAnalysesIdentity.improve_xsec(result);
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
      catch (SpecializablePythia::EventGenerationError& e)
      {
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "SpecializablePythia::EventGenerationError caught in generatePythia8Event. Check the ColliderBit log for event details." << endl;
        #endif
        #pragma omp critical (pythia_event_failure)
        {
          // Set global flag
          tooManyFailedEvents = true;
          // Store Pythia event record in the logs
          std::stringstream ss;
          result.list(ss, 1);
          logger() << LogTags::debug << "SpecializablePythia::EventGenerationError error caught in generatePythia8Event. Pythia record for event that failed:\n" << ss.str() << EOM;
        }
        Loop::wrapup();
        return;
      }
    }



    /// *** Standard Event Format Functions ***

    #ifndef EXCLUDE_DELPHES
      void reconstructDelphesEvent(HEPUtils::Event& result)
      {
        using namespace Pipes::reconstructDelphesEvent;
        if (*Loop::iteration <= BASE_INIT or !useDelphesDetector) return;
        result.clear();

        #pragma omp critical (Delphes)
        {
          try
          {
            (*Dep::DetectorSim).processEvent(*Dep::HardScatteringEvent, result);
          }
          catch (std::runtime_error& e)
          {
            #ifdef COLLIDERBIT_DEBUG
              std::cerr << debug_prefix() << "DelphesVanilla::ProcessEventError caught in reconstructDelphesEvent." << endl;
            #endif

            // Set global flag
            tooManyFailedEvents = true;
            // Store Pythia event record in the logs
            std::stringstream ss;
            Dep::HardScatteringEvent->list(ss, 1);
            logger() << LogTags::debug << "DelphesVanilla::ProcessEventError caught in reconstructDelphesEvent. Pythia record for event that failed:\n" << ss.str() << EOM;

            str errmsg = "Bad point: reconstructDelphesEvent caught the following runtime error: ";
            errmsg    += e.what();
            piped_invalid_point.request(errmsg);

            Loop::wrapup();
          }
        }
      }
    #endif // not defined EXCLUDE_DELPHES


    void smearEventATLAS(HEPUtils::Event& result)
    {
      using namespace Pipes::smearEventATLAS;
      if (*Loop::iteration <= BASE_INIT or !useBuckFastATLASDetector) return;
      result.clear();

      // Get the next event from Pythia8, convert to HEPUtils::Event, and smear it
      try
      {
        (*Dep::SimpleSmearingSim).processEvent(*Dep::HardScatteringEvent, result);
      }
      catch (Gambit::exception& e)
      {
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "Gambit::exception caught during event conversion in smearEventATLAS. Check the ColliderBit log for details." << endl;
        #endif
        #pragma omp critical (event_conversion_error)
        {
          // Set global flag
          tooManyFailedEvents = true;
          // Store Pythia event record in the logs
          std::stringstream ss;
          Dep::HardScatteringEvent->list(ss, 1);
          logger() << LogTags::debug << "Gambit::exception error caught in smearEventATLAS. Pythia record for event that failed:\n" << ss.str() << EOM;
        }
        Loop::wrapup();
        return;
      }
    }


    void smearEventCMS(HEPUtils::Event& result)
    {
      using namespace Pipes::smearEventCMS;
      if (*Loop::iteration <= BASE_INIT or !useBuckFastCMSDetector) return;
      result.clear();

      // Get the next event from Pythia8, convert to HEPUtils::Event, and smear it
      try
      {
        (*Dep::SimpleSmearingSim).processEvent(*Dep::HardScatteringEvent, result);
      }
      catch (Gambit::exception& e)
      {
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "Gambit::exception caught during event conversion in smearEventCMS. Check the ColliderBit log for details." << endl;
        #endif
        #pragma omp critical (event_conversion_error)
        {
          // Set global flag
          tooManyFailedEvents = true;
          // Store Pythia event record in the logs
          std::stringstream ss;
          Dep::HardScatteringEvent->list(ss, 1);
          logger() << LogTags::debug << "Gambit::exception error caught in smearEventCMS. Pythia record for event that failed:\n" << ss.str() << EOM;
        }
        Loop::wrapup();
        return;
      }
    }


    void copyEvent(HEPUtils::Event& result)
    {
      using namespace Pipes::copyEvent;
      if (*Loop::iteration <= BASE_INIT or !useBuckFastIdentityDetector) return;
      result.clear();

      // Get the next event from Pythia8 and convert to HEPUtils::Event
      try
      {
        (*Dep::SimpleSmearingSim).processEvent(*Dep::HardScatteringEvent, result);
      }
      catch (Gambit::exception& e)
      {
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "Gambit::exception caught during event conversion in copyEvent. Check the ColliderBit log for details." << endl;
        #endif
        #pragma omp critical (event_conversion_error)
        {
          // Set global flag
          tooManyFailedEvents = true;
          // Store Pythia event record in the logs
          std::stringstream ss;
          Dep::HardScatteringEvent->list(ss, 1);
          logger() << LogTags::debug << "Gambit::exception error caught in copyEvent. Pythia record for event that failed:\n" << ss.str() << EOM;
        }
        Loop::wrapup();
        return;
      }
    }



    /// *** Analysis Accumulators ***


#ifndef EXCLUDE_DELPHES
    void runDetAnalyses(AnalysisNumbers& result)
    {
      using namespace Pipes::runDetAnalyses;

      if (*Loop::iteration == BASE_INIT)
      {
        result.clear();
        return;
      }

      if (!useDelphesDetector) return;

      if (*Loop::iteration == COLLIDER_FINALIZE && eventsGenerated && !tooManyFailedEvents)
      {
        // The final iteration for this collider: collect results
        globalAnalysesDet.scale();
        for (auto anaPtr = globalAnalysesDet.analyses.begin(); anaPtr != globalAnalysesDet.analyses.end(); ++anaPtr)
        {

          #ifdef COLLIDERBIT_DEBUG
            std::cerr << debug_prefix() << "runDetAnalyses: Collecting result from " << (*anaPtr)->get_results().begin()->analysis_name << endl;
          #endif

          result.push_back((*anaPtr)->get_results());
        }
        return;
      }

      if (*Loop::iteration == BASE_FINALIZE && eventsGenerated && !tooManyFailedEvents)
      {
        // Final iteration. Just return.
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "runDetAnalyses: 'result' contains " << result.size() << " results." << endl;
        #endif
        return;
      }

      if (*Loop::iteration <= BASE_INIT) return;

      // Loop over analyses and run them... Managed by HEPUtilsAnalysisContainer
      Dep::DetAnalysisContainer->analyze(*Dep::ReconstructedEvent);
    }
#endif // not defined EXCLUDE_DELPHES



    void runATLASAnalyses(AnalysisNumbers& result)
    {
      using namespace Pipes::runATLASAnalyses;

      if (*Loop::iteration == BASE_INIT)
      {
        result.clear();
        return;
      }

      if (!useBuckFastATLASDetector) return;

      if (*Loop::iteration == COLLIDER_FINALIZE && eventsGenerated && !tooManyFailedEvents)
      {
        // The final iteration for this collider: collect results
        globalAnalysesATLAS.scale();
        for (auto anaPtr = globalAnalysesATLAS.analyses.begin(); anaPtr != globalAnalysesATLAS.analyses.end(); ++anaPtr)
        {

          #ifdef COLLIDERBIT_DEBUG
            std::cerr << debug_prefix() << "runATLASAnalyses: Collecting result from " << (*anaPtr)->get_results().begin()->analysis_name << endl;
          #endif

          result.push_back((*anaPtr)->get_results());
        }
        return;
      }

      if (*Loop::iteration == BASE_FINALIZE && eventsGenerated && !tooManyFailedEvents)
      {
        // Final iteration. Just return.
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "runATLASAnalyses: 'result' contains " << result.size() << " results." << endl;
        #endif
        return;
      }

      if (*Loop::iteration <= BASE_INIT) return;

      // Loop over analyses and run them... Managed by HEPUtilsAnalysisContainer
      Dep::ATLASAnalysisContainer->analyze(*Dep::ATLASSmearedEvent);
    }



    void runCMSAnalyses(AnalysisNumbers& result)
    {
      using namespace Pipes::runCMSAnalyses;

      if (*Loop::iteration == BASE_INIT)
      {
        result.clear();
        return;
      }

      if (!useBuckFastCMSDetector) return;

      if (*Loop::iteration == COLLIDER_FINALIZE && eventsGenerated && !tooManyFailedEvents)
      {
        // The final iteration for this collider: collect results
        globalAnalysesCMS.scale();
        for (auto anaPtr = globalAnalysesCMS.analyses.begin(); anaPtr != globalAnalysesCMS.analyses.end(); ++anaPtr)
        {
          #ifdef COLLIDERBIT_DEBUG
            std::cerr << debug_prefix() << "runCMSAnalyses: Collecting result from " << (*anaPtr)->get_results().begin()->analysis_name << endl;
          #endif

          result.push_back((*anaPtr)->get_results());
        }
        return;
      }

      if (*Loop::iteration == BASE_FINALIZE && eventsGenerated && !tooManyFailedEvents)
      {
        // Final iteration. Just return.
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "runCMSAnalyses: 'result' contains " << result.size() << " results." << endl;
        #endif
        return;
      }

      if (*Loop::iteration <= BASE_INIT) return;

      // Loop over analyses and run them... Managed by HEPUtilsAnalysisContainer
      Dep::CMSAnalysisContainer->analyze(*Dep::CMSSmearedEvent);
    }



    void runIdentityAnalyses(AnalysisNumbers& result)
    {
      using namespace Pipes::runIdentityAnalyses;

      if (*Loop::iteration == BASE_INIT)
      {
        result.clear();
        return;
      }

      if (!useBuckFastIdentityDetector) return;

      if (*Loop::iteration == COLLIDER_FINALIZE && eventsGenerated && !tooManyFailedEvents)
      {
        // The final iteration for this collider: collect results
        globalAnalysesIdentity.scale();
        for (auto anaPtr = globalAnalysesIdentity.analyses.begin(); anaPtr != globalAnalysesIdentity.analyses.end(); ++anaPtr)
        {
          #ifdef COLLIDERBIT_DEBUG
            std::cerr << debug_prefix() << "runIdentityAnalyses: Collecting result from " << (*anaPtr)->get_results().begin()->analysis_name << endl;
          #endif

          result.push_back((*anaPtr)->get_results());
        }
        return;
      }

      if (*Loop::iteration == BASE_FINALIZE && eventsGenerated && !tooManyFailedEvents)
      {
        // Final iteration. Just return.
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "runIdentityAnalyses: 'result' contains " << result.size() << " results." << endl;
        #endif
        return;
      }

      if (*Loop::iteration <= BASE_INIT) return;

      // Loop over analyses and run them... Managed by HEPUtilsAnalysisContainer
      Dep::IdentityAnalysisContainer->analyze(*Dep::CopiedEvent);
    }



    /// Loop over all analyses (and SRs within one analysis) and fill a vector of observed likelihoods
    void calc_LHC_LogLike(double& result) {
      using namespace Pipes::calc_LHC_LogLike;

      // If no events have been generated (xsec veto), return delta log-likelihood = 0
      if (!eventsGenerated)
      {
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "calc_LHC_LogLike: No events generated. Will return a delta log-likelihood of 0." << endl;
        #endif
        result = 0.0;
        return;
      }

      // If too many events have failed, do the conservative thing and return delta log-likelihood = 0
      if (tooManyFailedEvents)
      {
        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "calc_LHC_LogLike: Too many failed events. Will be conservative and return a delta log-likelihood of 0." << endl;
        #endif
        result = 0.0;
        return;
      }


      AnalysisNumbers analysisResults;
      #ifdef COLLIDERBIT_DEBUG
        if (haveUsedBuckFastATLASDetector)
          std::cerr << debug_prefix() << "calc_LHC_LogLike: Dep::ATLASAnalysisNumbers->size()    = " << Dep::ATLASAnalysisNumbers->size() << endl;
        if (haveUsedBuckFastCMSDetector)
          std::cerr << debug_prefix() << "calc_LHC_LogLike: Dep::CMSAnalysisNumbers->size()      = " << Dep::CMSAnalysisNumbers->size() << endl;
        if (haveUsedBuckFastIdentityDetector)
          std::cerr << debug_prefix() << "calc_LHC_LogLike: Dep::IdentityAnalysisNumbers->size() = " << Dep::IdentityAnalysisNumbers->size() << endl;
        #ifndef EXCLUDE_DELPHES
          if (haveUsedDelphesDetector)
           std::cerr << debug_prefix() << "calc_LHC_LogLike: Dep::DetAnalysisNumbers->size()      = " << Dep::DetAnalysisNumbers->size() << endl;
        #endif
      #endif

      if (haveUsedBuckFastATLASDetector)
        analysisResults.insert(analysisResults.end(), Dep::ATLASAnalysisNumbers->begin(), Dep::ATLASAnalysisNumbers->end());
      if (haveUsedBuckFastCMSDetector)
        analysisResults.insert(analysisResults.end(), Dep::CMSAnalysisNumbers->begin(), Dep::CMSAnalysisNumbers->end());
      if (haveUsedBuckFastIdentityDetector)
        analysisResults.insert(analysisResults.end(), Dep::IdentityAnalysisNumbers->begin(), Dep::IdentityAnalysisNumbers->end());
      #ifndef EXCLUDE_DELPHES
        if (haveUsedDelphesDetector)
         analysisResults.insert(analysisResults.end(), Dep::DetAnalysisNumbers->begin(), Dep::DetAnalysisNumbers->end());
      #endif
      // Loop over analyses and calculate the total observed dll
      double total_dll_obs = 0;
      for (size_t analysis = 0; analysis < analysisResults.size(); ++analysis)
      {

        #ifdef COLLIDERBIT_DEBUG
          std::cerr << debug_prefix() << "calc_LHC_LogLike: Analysis " << analysis << " has " << analysisResults[analysis].size() << " signal regions." << endl;
        #endif

        // Loop over the signal regions inside the analysis, and work out the total (delta) log likelihood for this analysis
        /// @note In general each analysis could/should work out its own likelihood so they can handle SR combination if possible.
        /// @note For now we just take the result from the SR *expected* to be most constraining, i.e. with highest expected dll
        double bestexp_dll_exp = 0, bestexp_dll_obs = 0;
        for (size_t SR = 0; SR < analysisResults[analysis].size(); ++SR)
        {
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

          // For debuggig: print some useful numbers to the log.
          #ifdef COLLIDERBIT_DEBUG
            cout << endl;
            cout <<  debug_prefix() << "COLLIDER_RESULT: " << srData.analysis_name << ", SR: " << srData.sr_label << endl;
            cout <<  debug_prefix() << "  LLikes: b_ex      sb_ex     b_obs     sb_obs    (sb_obs-b_obs)" << endl;
            cout <<  debug_prefix() << "          " << llb_exp << "  " << llsb_exp << "  "
                     << llb_obs << "  " << llsb_obs << "  " << llsb_obs-llb_obs << endl;
            cout <<  debug_prefix() << "  NEvents, not scaled to luminosity: " << srData.n_signal << endl;
            cout <<  debug_prefix() << "  NEvents, scaled  to luminosity:    " << srData.n_signal_at_lumi << endl;
            cout <<  debug_prefix() << "  NEvents: b [rel err]      sb [rel err]" << endl;
            cout <<  debug_prefix() << "           " << n_predicted_uncertain_b << " [" << uncertainty_b << "]   "
                     << n_predicted_uncertain_sb << " [" << uncertainty_sb << "]" << endl;
          #endif

        } // end SR loop

        // Update the total obs dll
        /// @note For now we assume that the analyses are fully orthogonal, i.e. no possiblity that the same event appears twice -> straight addition
        total_dll_obs += bestexp_dll_obs;

        #ifdef COLLIDERBIT_DEBUG
          std::cout.precision(5);
          cout << "DEBUG: OMP Thread " << omp_get_thread_num() << ":  calc_LHC_LogLike: Analysis #" << analysis << " contributes with a -LogL = " << bestexp_dll_obs << endl;
        #endif

      } // end ana loop

      #ifdef COLLIDERBIT_DEBUG
        cout << "DEBUG: OMP Thread " << omp_get_thread_num() << ":  COLLIDERBIT LIKELIHOOD: " << -total_dll_obs << endl;
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
      static const double tol = runOptions->getValueOrDef<double>(1e-5, "family_mixing_tolerance");
      static const bool pterror = runOptions->getValueOrDef<bool>(false, "family_mixing_tolerance_invalidates_point_only");
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
      static const double tol = runOptions->getValueOrDef<double>(1e-5, "family_mixing_tolerance");
      static const bool pterror = runOptions->getValueOrDef<bool>(false, "family_mixing_tolerance_invalidates_point_only");
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
      using std::pow;
      using std::log;
      static const double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      static const bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");

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
      static const double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      static const bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");

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
      static const double tol = runOptions->getValueOrDef<double>(1e-2, "gauge_mixing_tolerance");
      static const bool pt_error = runOptions->getValueOrDef<bool>(true, "gauge_mixing_tolerance_invalidates_point_only");

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
