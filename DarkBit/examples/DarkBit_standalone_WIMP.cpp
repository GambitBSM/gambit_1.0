//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of GAMBIT DarkBit standalone
///  main program.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///  \date 2016 Feb
///
///  *********************************************

// Always required in any standalone module main file
#include "gambit/Utils/standalone_module.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/Elements/spectrum_factories.hpp"
#include "gambit/Elements/MSSMskeleton.hpp"
#include "gambit/Elements/mssm_slhahelp.hpp"

// Only needed here
#include "gambit/Utils/util_functions.hpp"

using namespace DarkBit::Functown;     // Functors wrapping the module's actual module functions
using namespace DarkBit::Accessors;    // Helper functions that provide some info about the module
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

QUICK_FUNCTION(DarkBit, decay_rates, NEW_CAPABILITY, createDecays, DecayTable, ())
QUICK_FUNCTION(DarkBit, MSSM_spectrum, OLD_CAPABILITY, createSpectrum, const Spectrum*, ())
QUICK_FUNCTION(DarkBit, cascadeMC_gammaSpectra, OLD_CAPABILITY, CMC_dummy, DarkBit::stringFunkMap, ())
QUICK_FUNCTION(DarkBit, TH_ProcessCatalog, OLD_CAPABILITY, TH_ProcessCatalog_WIMP, DarkBit::TH_ProcessCatalog, ())
QUICK_FUNCTION(DarkBit, DarkMatter_ID, OLD_CAPABILITY, DarkMatter_ID_WIMP, std::string, ())

namespace Gambit
{
  namespace DarkBit
  {
    // Dummy functor for returning empty cascadeMC result spectra
    void CMC_dummy(DarkBit::stringFunkMap& result)
    {
      DarkBit::stringFunkMap sfm;
      result = sfm;
    }

    // Create spectrum object from SLHA file input.slha
    void createSpectrum(const Spectrum *& outSpec){
      static Spectrum mySpec;
      std::string inputFileName = "input.slha";
      mySpec = spectrum_from_SLHA<MSSMskeleton>(inputFileName);     
      outSpec = &mySpec;
    }

    // Create decay object from SLHA file input.slha
    void createDecays(DecayTable& outDecays)
    {
      std::string inputFileName = "input.slha";
      outDecays = DecayTable(inputFileName);
    }

    void TH_ProcessCatalog_WIMP(DarkBit::TH_ProcessCatalog& result)
    {
      using namespace Pipes::TH_ProcessCatalog_WIMP;
      using std::vector;
      using std::string;

      // Initialize empty catalog and main annihilation process
      TH_ProcessCatalog catalog;
      TH_Process process_ann((string)"WIMP", (string)"WIMP");
      TH_Process process_dec((string)"phi");

      ///////////////////////////////////////
      // Import particle masses and couplings
      ///////////////////////////////////////
      
      #define addParticle(Name, Mass, spinX2)                                   \
       catalog.particleProperties.insert(std::pair<string, TH_ParticleProperty> \
       (Name , TH_ParticleProperty(Mass, spinX2)));    

      //double lambda = he->get(Par::mass1,"lambda_hS");
      //double v = he->get(Par::mass1,"vev");
      double mWIMP= 100.0;
      double sv = 1e-26;

      addParticle("Z0", 91.2,  2)
      addParticle("tau+", 1.8,  1)
      addParticle("tau-", 1.8,  1)
      addParticle("gamma", 0.0,  2)
      addParticle("phi", 99.0,  0)
      addParticle("WIMP", mWIMP,  0)

      #undef addParticle

      std::cout << "help" << std::endl;

      TH_Channel dec_channel(Funk::vec<string>("gamma", "gamma"), Funk::cnst(1.));
      process_dec.channelList.push_back(dec_channel);
      process_dec.genRateTotal = Funk::cnst(1.);

      std::cout << "help" << std::endl;

      process_ann.thresholdResonances.threshold_energy.push_back(2*mWIMP); 
      auto channel = Funk::vec<string>("ZZ", "tautau", "gammagamma", "phiphi");
      auto p1 = Funk::vec<string>("Z0", "tau+", "gamma", "phi");
      auto p2 = Funk::vec<string>("Z0", "tau-", "gamma", "phi");
      auto svList= Funk::vec<double>(0.0, 0.0, 0.0, 1.0);
      {
        for ( unsigned int i = 0; i < channel.size(); i++ )
        {
          double mtot_final = 
            catalog.particleProperties.at(p1[i]).mass +
            catalog.particleProperties.at(p2[i]).mass;
          if ( mWIMP*2 > mtot_final*0.5 )
          {
            Funk::Funk kinematicFunction = Funk::one("v")*sv*svList[i];
            TH_Channel new_channel(
                Funk::vec<string>(p1[i], p2[i]), kinematicFunction
                );
            process_ann.channelList.push_back(new_channel);
          }
          else
          {
            process_ann.thresholdResonances.threshold_energy.
              push_back(mtot_final);
          }
        }
      }

      std::cout << "help" << std::endl;

      /* FIXME: This is too general, but could go somewhere else
      double resmasses[] = {catalog.getParticleProperty("h0_1").mass};
      double reswidths[] = {0.01};  
      int resmax=sizeof(resmasses) / sizeof(resmasses[0]);

      for (int i=0; i<resmax; i++)
      {
        if (resmasses[i]/mS > 2.)
        {
          process_ann.thresholdResonances.resonances.
            push_back(TH_Resonance(resmasses[i], reswidths[i]));
        }
      }
      */
      
//      // Populate resonance list
//      if ( mH >= mS*2 ) process_ann.thresholdResonances.resonances.
//          push_back(TH_Resonance(mH, gammaH));

      catalog.processList.push_back(process_ann);
      catalog.processList.push_back(process_dec);

      std::cout << "Help" << std::endl;
      result = catalog;
    } // function TH_ProcessCatalog_WIMP

    void DarkMatter_ID_WIMP(std::string& result)
    {
      result = "WIMP";
    }
  }
}

int main()
{
  // ---- Initialise (or disable) logging ----

  std::map<std::string, std::string> loggerinfo;
  std::string prefix("runs/DarkBit_standalone_WIMP/logs/");
  Utils::ensure_path_exists(prefix);

  loggerinfo["Core, Error"] = prefix+"core_errors.log";
  loggerinfo["Default"]     = prefix+"default.log";
  loggerinfo["Debug"]       = prefix+"debug.log";
  loggerinfo["Warning"]     = prefix+"warnings.log";
  loggerinfo["DarkBit, Info"] = prefix+"DarkBit_info.log";

  logger().initialise(loggerinfo);

  model_warning().set_fatal(true);
  DarkBit::DarkBit_error().set_fatal(false);

  logger()<<"Running DarkBit standalone example"<<LogTags::info<<EOM;


  // ---- Initialize models ----

  // Initialize LocalHalo model
  ModelParameters* LocalHalo_primary_parameters = Models::LocalHalo::Functown::primary_parameters.getcontentsPtr();
  LocalHalo_primary_parameters->setValue("rho0", 0.4);
  LocalHalo_primary_parameters->setValue("vrot", 235.);
  LocalHalo_primary_parameters->setValue("v0", 235.);
  LocalHalo_primary_parameters->setValue("vesc", 550.);
  LocalHalo_primary_parameters->setValue("vearth", 29.78);

  std::cout << "Holy" << std::endl;

  // ---- Initialize spectrum and decays from SLHA file ----

  // FIXME: Needed?
  //createSpectrum.reset_and_calculate();
  //createDecays.reset_and_calculate();


  // ---- Initialize backends ----

  // Initialize gamLike backend
  gamLike_1_0_0_init.reset_and_calculate();


  // Initialize DarkSUSY backend
  DarkSUSY_5_1_3_init.notifyOfModel("LocalHalo");  // FIXME: Q: What to do if we do *not* want to set LocalHalo?
  DarkSUSY_5_1_3_init.resolveDependency(&Models::LocalHalo::Functown::primary_parameters);
  DarkSUSY_5_1_3_init.reset_and_calculate();

  std::cout << "Holy" << std::endl;

  // ---- Set up basic internal structures for direct & indirect detection ----

  // Set identifier for DM particle
  // FIXME: Needed?
  DarkMatter_ID_WIMP.reset_and_calculate();

  std::cout << "Holy" << std::endl;

  // Set up process catalog based on DarkSUSY annihilation rates
  TH_ProcessCatalog_WIMP.reset_and_calculate();
  //TH_ProcessCatalog_MSSM.resolveDependency(&DarkSUSY_PointInit_MSSM);
  //TH_ProcessCatalog_MSSM.resolveDependency(&createSpectrum);
  //TH_ProcessCatalog_MSSM.resolveDependency(&createDecays);
  //TH_ProcessCatalog_MSSM.resolveDependency(&DarkMatter_ID_MSSM30atQ);
  //TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dssigmav);
  //TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsIBffdxdy);
  //TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsIBhhdxdy);
  //TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsIBwhdxdy);
  //TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsIBwwdxdy);
  //TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::IBintvars);
  //TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::setMassesForIB);
  //TH_ProcessCatalog_MSSM.reset_and_calculate();

  std::cout << "Holy" << std::endl;

  // Assume for direct and indirect detection likelihoods that dark matter
  // density is always the measured one (despite relic density results)
  RD_fraction_fixed.reset_and_calculate();

  std::cout << "Holy" << std::endl;

  // Set generic WIMP mass object
  //mwimp_generic.resolveDependency(&TH_ProcessCatalog_MSSM);
  //mwimp_generic.resolveDependency(&DarkMatter_ID_MSSM30atQ);
  //mwimp_generic.reset_and_calculate();

  // Set generic annihilation rate in late universe (v->0 limit)  // FIXME: Check limit
  //sigmav_late_universe.resolveDependency(&TH_ProcessCatalog_MSSM);
  //sigmav_late_universe.resolveDependency(&DarkMatter_ID_MSSM30atQ);
  //sigmav_late_universe.reset_and_calculate();


  // ---- Gamma-ray yields ----

  // Initialize tabulated gamma-ray yields
  SimYieldTable_DarkSUSY.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dshayield);
  SimYieldTable_DarkSUSY.reset_and_calculate();

  std::cout << "Holy" << std::endl;

  // Collect missing final states for simulation in cascade MC
  GA_missingFinalStates.resolveDependency(&TH_ProcessCatalog_WIMP);
  GA_missingFinalStates.resolveDependency(&SimYieldTable_DarkSUSY);
  GA_missingFinalStates.resolveDependency(&DarkMatter_ID_WIMP);
  GA_missingFinalStates.reset_and_calculate();

  std::cout << "Holy" << std::endl;

  // Infer for which type of final states particles MC should be performed
  cascadeMC_FinalStates.setOption<std::vector<std::string>>("cMC_finalStates", Funk::vec((std::string)"gamma"));
  cascadeMC_FinalStates.reset_and_calculate();

  std::cout << "Hoooly" << std::endl;

  // Collect decay information for cascade MC
  cascadeMC_DecayTable.resolveDependency(&TH_ProcessCatalog_WIMP);
  cascadeMC_DecayTable.resolveDependency(&SimYieldTable_DarkSUSY);
  std::cout << "H" << std::endl;
  cascadeMC_DecayTable.reset_and_calculate();

  std::cout << "H" << std::endl;


  // Set up MC loop manager for cascade MC
  cascadeMC_LoopManager.setOption<int>("cMC_maxEvents", 10000);
  cascadeMC_LoopManager.resolveDependency(&GA_missingFinalStates);
  std::cout << "H" << std::endl;
  cascadeMC_LoopManager.resolveDependency(&cascadeMC_DecayTable);
  std::cout << "H" << std::endl;
  cascadeMC_LoopManager.resolveDependency(&SimYieldTable_DarkSUSY);
  std::cout << "H" << std::endl;
  cascadeMC_LoopManager.resolveDependency(&TH_ProcessCatalog_WIMP);
  std::cout << "H" << std::endl;
  std::vector<functor*> nested_functions = initVector<functor*>(
      &cascadeMC_InitialState, &cascadeMC_GenerateChain, &cascadeMC_Histograms, &cascadeMC_EventCount);
  std::cout << "H" << std::endl;
  std::cout << "Hooly" << std::endl;
  cascadeMC_LoopManager.setNestedList(nested_functions);
  std::cout << "Holy" << std::endl;

  // Set up initial state for cascade MC step
  cascadeMC_InitialState.resolveDependency(&GA_missingFinalStates);
  cascadeMC_InitialState.resolveLoopManager(&cascadeMC_LoopManager);
  //cascadeMC_InitialState.reset_and_calculate();

  std::cout << "Holy" << std::endl;

  // Perform MC step for cascade MC
  cascadeMC_GenerateChain.resolveDependency(&cascadeMC_InitialState);
  cascadeMC_GenerateChain.resolveDependency(&cascadeMC_DecayTable);
  cascadeMC_GenerateChain.resolveLoopManager(&cascadeMC_LoopManager);
  //cascadeMC_GenerateChain.reset_and_calculate();

  std::cout << "Foly" << std::endl;

  // Generate histogram for cascade MC
  //cascadeMC_Histograms.setOption<int>("cMC_NhistBins", 280);
  cascadeMC_Histograms.resolveDependency(&cascadeMC_InitialState);
  cascadeMC_Histograms.resolveDependency(&cascadeMC_GenerateChain);
  cascadeMC_Histograms.resolveDependency(&TH_ProcessCatalog_WIMP);
  cascadeMC_Histograms.resolveDependency(&SimYieldTable_DarkSUSY);
  cascadeMC_Histograms.resolveDependency(&cascadeMC_FinalStates);
  cascadeMC_Histograms.resolveLoopManager(&cascadeMC_LoopManager);
  //cascadeMC_Histograms.reset_and_calculate();

  std::cout << "Goly" << std::endl;

  // Check convergence of cascade MC
  cascadeMC_EventCount.resolveDependency(&cascadeMC_InitialState);
  cascadeMC_EventCount.resolveLoopManager(&cascadeMC_LoopManager);
  //cascadeMC_EventCount.reset_and_calculate();

  std::cout << "Toly" << std::endl;

  // Start cascade MC loop
  cascadeMC_LoopManager.reset_and_calculate();

  std::cout << "Poly" << std::endl;

  // Infer gamma-ray spectra for recorded MC results
  cascadeMC_gammaSpectra.resolveDependency(&GA_missingFinalStates);
  cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_FinalStates);
  cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_Histograms);
  cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_EventCount);
  cascadeMC_gammaSpectra.reset_and_calculate();

  std::cout << "Roly" << std::endl;

  // Calculate total gamma-ray yield (cascade MC + tabulated results)
  GA_AnnYield_General.resolveDependency(&TH_ProcessCatalog_WIMP);
  GA_AnnYield_General.resolveDependency(&SimYieldTable_DarkSUSY);
  GA_AnnYield_General.resolveDependency(&DarkMatter_ID_WIMP);
  GA_AnnYield_General.resolveDependency(&cascadeMC_gammaSpectra);
  GA_AnnYield_General.reset_and_calculate();

  std::cout << "Boly" << std::endl;

  dump_GammaSpectrum.resolveDependency(&GA_AnnYield_General);
  dump_GammaSpectrum.reset_and_calculate();

  // Calculate Fermi LAT dwarf likelihood
  lnL_FermiLATdwarfs_gamLike.resolveDependency(&GA_AnnYield_General);
  lnL_FermiLATdwarfs_gamLike.resolveDependency(&RD_fraction_fixed);
  lnL_FermiLATdwarfs_gamLike.resolveBackendReq(&Backends::gamLike_1_0_0::Functown::lnL);
  std::cout << "Bolz" << std::endl;
  lnL_FermiLATdwarfs_gamLike.reset_and_calculate();
  std::cout << "Bolz" << std::endl;

  return 0;
}
