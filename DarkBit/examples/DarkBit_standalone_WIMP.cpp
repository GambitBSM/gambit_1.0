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
#include <boost/multi_array.hpp>
#include <iostream>
#include <fstream>

// Only needed here
#include "gambit/Utils/util_functions.hpp"

using namespace DarkBit::Functown;     // Functors wrapping the module's actual module functions
using namespace DarkBit::Accessors;    // Helper functions that provide some info about the module
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

QUICK_FUNCTION(DarkBit, TH_ProcessCatalog, OLD_CAPABILITY, TH_ProcessCatalog_WIMP, DarkBit::TH_ProcessCatalog, ())
QUICK_FUNCTION(DarkBit, DarkMatter_ID, OLD_CAPABILITY, DarkMatter_ID_WIMP, std::string, ())
QUICK_FUNCTION(DarkBit, DD_couplings, OLD_CAPABILITY, DD_couplings_WIMP, DarkBit::DD_couplings, ())

double mWIMP_global;
double sv_global;


void dump_array_to_file(
    const std::string & filename, const boost::multi_array<double, 2> & a,
    const std::vector<double> & x, const std::vector<double> & y)
{
  std::fstream file;
  file.open(filename, std::ios_base::out);
  file << "0.0 ";
  for (size_t i = 0; i < x.size(); i++)
    file << x[i] << " ";
  file << std::endl;
  for (size_t j = 0; j < y.size(); j++)
  {
    file << y[j] << " ";
    for (size_t i = 0; i < x.size(); i++)
    {
      file << a[i][j] << " ";
    }
    file << std::endl;
  }
  file.close();
}


namespace Gambit
{
  namespace DarkBit
  {
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

      double mWIMP= mWIMP_global;
      double sv = sv_global;

      // FIXME: Use various channels include 3-body and complicated cascade
      // decay
      // FIXME: Check stability of codes w.r.t. extreme parameters
      // FIXME: Test all input possible for this function
      addParticle("Z0", 91.2,  2)
      addParticle("tau+", 1.8,  1)
      addParticle("tau-", 1.8,  1)
      addParticle("gamma", 0.0,  2)
      addParticle("phi", 99.0,  0)
      addParticle("WIMP", mWIMP,  0)

      #undef addParticle

      TH_Channel dec_channel(Funk::vec<string>("gamma", "gamma"), Funk::cnst(1.));
      process_dec.channelList.push_back(dec_channel);
      process_dec.genRateTotal = Funk::cnst(1.);

      process_ann.thresholdResonances.threshold_energy.push_back(2*mWIMP); 
      auto channel = Funk::vec<string>("ZZ", "tautau", "gammagamma", "phiphi");
      auto p1 = Funk::vec<string>("Z0", "tau+", "gamma", "phi");
      auto p2 = Funk::vec<string>("Z0", "tau-", "gamma", "phi");
      auto svList= Funk::vec<double>(0.0, 0.0, 0.3, 0.7);
      {
        for ( unsigned int i = 0; i < channel.size(); i++ )
        {
          double mtot_final = 
            catalog.particleProperties.at(p1[i]).mass +
            catalog.particleProperties.at(p2[i]).mass;
          if ( mWIMP*2 > mtot_final*0.5 )
          {
            double a = 1;
            double b = 0;
            Funk::Funk kinematicFunction = (Funk::one("v")*a+pow(Funk::var("v"), 2)*b)*sv*svList[i];
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

      catalog.processList.push_back(process_ann);
      catalog.processList.push_back(process_dec);

      result = catalog;
    } // function TH_ProcessCatalog_WIMP

    void DarkMatter_ID_WIMP(std::string& result)
    {
      result = "WIMP";
    }

    void DD_couplings_WIMP(DarkBit::DD_couplings& result)
    {
      result.gps = 1.;
      result.gns = 1.;
      result.gpa = 0.;  // Only SI cross-section
      result.gna = 0.;
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


  // ---- Initialize backends ----

  // Initialize gamLike backend
  gamLike_1_0_0_init.reset_and_calculate();

  // Initialize DarkSUSY backend
  DarkSUSY_5_1_3_init.notifyOfModel("LocalHalo");  // FIXME: Q: What to do if we do *not* want to set LocalHalo?
  DarkSUSY_5_1_3_init.resolveDependency(&Models::LocalHalo::Functown::primary_parameters);
  DarkSUSY_5_1_3_init.reset_and_calculate();

  // Initialize DDCalc0 backend
  Backends::DDCalc0_0_0::Functown::DDCalc0_LUX_2013_CalcRates.setStatus(2);
  DDCalc0_0_0_init.notifyOfModel("LocalHalo");
  DDCalc0_0_0_init.resolveDependency(&Models::LocalHalo::Functown::primary_parameters);
  DDCalc0_0_0_init.resolveDependency(&RD_fraction_fixed);
  DDCalc0_0_0_init.reset_and_calculate();


  // ---- Set up basic internal structures for direct & indirect detection ----

  // Set identifier for DM particle
  // FIXME: Needed?

  // Set up process catalog based on DarkSUSY annihilation rates

  // Assume for direct and indirect detection likelihoods that dark matter
  // density is always the measured one (despite relic density results)


  // ---- Gamma-ray yields ----

  // Initialize tabulated gamma-ray yields
  // FIXME: Use three different simyieldtables
  SimYieldTable_DarkSUSY.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dshayield);

  // Collect missing final states for simulation in cascade MC
  GA_missingFinalStates.resolveDependency(&TH_ProcessCatalog_WIMP);
  GA_missingFinalStates.resolveDependency(&SimYieldTable_DarkSUSY);
  GA_missingFinalStates.resolveDependency(&DarkMatter_ID_WIMP);

  // Infer for which type of final states particles MC should be performed
  cascadeMC_FinalStates.setOption<std::vector<std::string>>("cMC_finalStates", Funk::vec((std::string)"gamma"));

  // Collect decay information for cascade MC
  cascadeMC_DecayTable.resolveDependency(&TH_ProcessCatalog_WIMP);
  cascadeMC_DecayTable.resolveDependency(&SimYieldTable_DarkSUSY);

  // Set up MC loop manager for cascade MC
  // FIXME: Systematically test accuracy and dependence on setup parameters
  // FIXME: Add maximum width for energy bins
  cascadeMC_LoopManager.setOption<int>("cMC_maxEvents", 1);
  cascadeMC_LoopManager.resolveDependency(&GA_missingFinalStates);
  cascadeMC_LoopManager.resolveDependency(&cascadeMC_DecayTable);
  cascadeMC_LoopManager.resolveDependency(&SimYieldTable_DarkSUSY);
  cascadeMC_LoopManager.resolveDependency(&TH_ProcessCatalog_WIMP);
  std::vector<functor*> nested_functions = initVector<functor*>(
      &cascadeMC_InitialState, &cascadeMC_GenerateChain, &cascadeMC_Histograms, &cascadeMC_EventCount);
  cascadeMC_LoopManager.setNestedList(nested_functions);

  // Set up initial state for cascade MC step
  cascadeMC_InitialState.resolveDependency(&GA_missingFinalStates);
  cascadeMC_InitialState.resolveLoopManager(&cascadeMC_LoopManager);
  //cascadeMC_InitialState.reset_and_calculate();

  // Perform MC step for cascade MC
  cascadeMC_GenerateChain.resolveDependency(&cascadeMC_InitialState);
  cascadeMC_GenerateChain.resolveDependency(&cascadeMC_DecayTable);
  cascadeMC_GenerateChain.resolveLoopManager(&cascadeMC_LoopManager);
  //cascadeMC_GenerateChain.reset_and_calculate();

  // Generate histogram for cascade MC
  //cascadeMC_Histograms.setOption<int>("cMC_NhistBins", 280);
  // FIXME: Check dependence on histogram parameters
  cascadeMC_Histograms.resolveDependency(&cascadeMC_InitialState);
  cascadeMC_Histograms.resolveDependency(&cascadeMC_GenerateChain);
  cascadeMC_Histograms.resolveDependency(&TH_ProcessCatalog_WIMP);
  cascadeMC_Histograms.resolveDependency(&SimYieldTable_DarkSUSY);
  cascadeMC_Histograms.resolveDependency(&cascadeMC_FinalStates);
  cascadeMC_Histograms.resolveLoopManager(&cascadeMC_LoopManager);
  //cascadeMC_Histograms.reset_and_calculate();

  // Check convergence of cascade MC
  // FIXME: Test dynamic convergence criteria for cascade routines
  cascadeMC_EventCount.resolveDependency(&cascadeMC_InitialState);
  cascadeMC_EventCount.resolveLoopManager(&cascadeMC_LoopManager);
  //cascadeMC_EventCount.reset_and_calculate();

  // Start cascade MC loop

  // Infer gamma-ray spectra for recorded MC results
  cascadeMC_gammaSpectra.resolveDependency(&GA_missingFinalStates);
  cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_FinalStates);
  cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_Histograms);
  cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_EventCount);

  // Calculate total gamma-ray yield (cascade MC + tabulated results)
  GA_AnnYield_General.resolveDependency(&TH_ProcessCatalog_WIMP);
  GA_AnnYield_General.resolveDependency(&SimYieldTable_DarkSUSY);
  GA_AnnYield_General.resolveDependency(&DarkMatter_ID_WIMP);
  GA_AnnYield_General.resolveDependency(&cascadeMC_gammaSpectra);

  // FIXME: Extend existing gamma-ray spectrum dumper
  dump_GammaSpectrum.resolveDependency(&GA_AnnYield_General);

  // Calculate Fermi LAT dwarf likelihood
  // FIXME: Check whether Fermi lat limits can be reproduced
  lnL_FermiLATdwarfs_gamLike.resolveDependency(&GA_AnnYield_General);
  lnL_FermiLATdwarfs_gamLike.resolveDependency(&RD_fraction_fixed);
  lnL_FermiLATdwarfs_gamLike.resolveBackendReq(&Backends::gamLike_1_0_0::Functown::lnL);


  // -- Calculate relic density --
  RD_eff_annrate_from_ProcessCatalog.notifyOfModel("SingletDM");
  RD_eff_annrate_from_ProcessCatalog.resolveDependency(&TH_ProcessCatalog_WIMP);
  RD_eff_annrate_from_ProcessCatalog.resolveDependency(&DarkMatter_ID_WIMP);

  RD_spectrum_from_ProcessCatalog.resolveDependency(&TH_ProcessCatalog_WIMP);
  RD_spectrum_from_ProcessCatalog.resolveDependency(&DarkMatter_ID_WIMP);

  RD_spectrum_ordered_func.resolveDependency(&RD_spectrum_from_ProcessCatalog);

  RD_oh2_general.resolveDependency(&RD_spectrum_ordered_func);
  RD_oh2_general.resolveDependency(&RD_eff_annrate_from_ProcessCatalog);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsrdthlim);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsrdtab);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsrdeqn);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsrdwintp);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::widths);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::rdmgev);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::rdpth);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::rdpars);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::rdswitch);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::rdlun);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::rdpadd);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::rddof);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::rderrors);
  RD_oh2_general.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::DSparticle_code);


  // ---- Calculate direct detection constraints ----

  // Push WIMP paramters to DDCalc0 backend
  SetWIMP_DDCalc0.resolveDependency(&DD_couplings_WIMP);  // Use DarkSUSY parameters
  SetWIMP_DDCalc0.resolveDependency(&TH_ProcessCatalog_WIMP);  // FIXME: Why this dependency?
  SetWIMP_DDCalc0.resolveDependency(&DarkMatter_ID_WIMP);
  SetWIMP_DDCalc0.resolveBackendReq(&Backends::DDCalc0_0_0::Functown::DDCalc0_SetWIMP_mG);
  SetWIMP_DDCalc0.resolveBackendReq(&Backends::DDCalc0_0_0::Functown::DDCalc0_GetWIMP_msigma);

  // Calculate direct detection rates for LUX 2013
  CalcRates_LUX_2013_DDCalc0.resolveDependency(&SetWIMP_DDCalc0);
  CalcRates_LUX_2013_DDCalc0.resolveBackendReq(&Backends::DDCalc0_0_0::Functown::DDCalc0_LUX_2013_CalcRates);

  // Calculate direct detection likelihood for LUX 2013
  LUX_2013_LogLikelihood_DDCalc0.resolveDependency(&CalcRates_LUX_2013_DDCalc0);
  LUX_2013_LogLikelihood_DDCalc0.resolveBackendReq(&Backends::DDCalc0_0_0::Functown::DDCalc0_LUX_2013_LogLikelihood);

  int mBins = 10;
  int svBins = 20;
  std::vector<double> m_list = Funk::logspace(0.5, 3.0, mBins);
  std::vector<double> sv_list = Funk::logspace(-27.0, -24.0, svBins);
  boost::multi_array<double, 2> lnL_array{boost::extents[mBins][svBins]};
  boost::multi_array<double, 2> oh2_array{boost::extents[mBins][svBins]};

  for (size_t i = 0; i < m_list.size(); i++)
  {
    for (size_t j = 0; j < sv_list.size(); j++)
    {
      mWIMP_global = m_list[i];
      sv_global = sv_list[j];
      std::cout << "Parameters: " << mWIMP_global << " " << sv_global << std::endl;
      DarkMatter_ID_WIMP.reset_and_calculate();
      TH_ProcessCatalog_WIMP.reset_and_calculate();
      RD_fraction_fixed.reset_and_calculate();
      SimYieldTable_DarkSUSY.reset_and_calculate();
      GA_missingFinalStates.reset_and_calculate();
      cascadeMC_FinalStates.reset_and_calculate();
      cascadeMC_DecayTable.reset_and_calculate();
      cascadeMC_LoopManager.reset_and_calculate();
      cascadeMC_gammaSpectra.reset_and_calculate();
      GA_AnnYield_General.reset_and_calculate();
      //dump_GammaSpectrum.reset_and_calculate();
      lnL_FermiLATdwarfs_gamLike.reset_and_calculate();
      double lnL = lnL_FermiLATdwarfs_gamLike(0);
      std::cout << "Fermi LAT likelihood: " << lnL << std::endl;
      lnL_array[i][j] = lnL;
      RD_eff_annrate_from_ProcessCatalog.reset_and_calculate();
      RD_spectrum_from_ProcessCatalog.reset_and_calculate();
      RD_spectrum_ordered_func.reset_and_calculate();
      RD_oh2_general.reset_and_calculate();
      double oh2 = RD_oh2_general(0);
      oh2_array[i][j] = oh2;
//    SetWIMP_DDCalc0.reset_and_calculate();
//    CalcRates_LUX_2013_DDCalc0.reset_and_calculate();
//    LUX_2013_LogLikelihood_DDCalc0.reset_and_calculate();
    }
  }

  dump_array_to_file("Fermi_table.dat", lnL_array, m_list, sv_list);
  dump_array_to_file("oh2_table.dat", oh2_array, m_list, sv_list);

  return 0;
}
