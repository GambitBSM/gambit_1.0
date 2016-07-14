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

#include "gambit/Utils/standalone_module.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/Elements/spectrum_factories.hpp"
#include "gambit/Elements/mssm_slhahelp.hpp"
#include "gambit/Models/SimpleSpectra/MSSMSimpleSpec.hpp"
#include "gambit/Utils/util_functions.hpp"

using namespace DarkBit::Functown;     // Functors wrapping the module's actual module functions
using namespace DarkBit::Accessors;    // Helper functions that provide some info about the module
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

QUICK_FUNCTION(DarkBit, decay_rates, NEW_CAPABILITY, createDecays, DecayTable, ())
QUICK_FUNCTION(DarkBit, MSSM_spectrum, OLD_CAPABILITY, createSpectrum, Spectrum, ())
QUICK_FUNCTION(DarkBit, cascadeMC_gammaSpectra, OLD_CAPABILITY, CMC_dummy, DarkBit::stringFunkMap, ())


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
    void createSpectrum(Spectrum& outSpec)
    {
      using namespace Pipes::createSpectrum;
      static Spectrum mySpec;
      /// Option inputFileName<std::string>: Input SLHA (required)
      std::string inputFileName = runOptions->getValue<std::string>("filename");
      std::cout << "Loading: " << inputFileName << std::endl;
      outSpec = spectrum_from_SLHA<MSSMSimpleSpec>(inputFileName);
    }

    // Create decay object from SLHA file input.slha
    void createDecays(DecayTable& outDecays)
    {
      using namespace Pipes::createDecays;
      /// Option inputFileName<std::string>: Input SLHA (required)
      std::string inputFileName = runOptions->getValue<std::string>("filename");
      std::cout << "Loading: " << inputFileName << std::endl;
      outDecays = DecayTable(inputFileName);
      //std::cout << "Exemplary width:" << std::endl;
      //std::cout << outDecays.at(std::pair<int,int>(25,0)).width_in_GeV << std::endl;
    }
  }
}

int main(int argc, char* argv[])
{

  try
  {
    if (argc == 1)
    {
      std::cout << "Please provide name of slha file at command line." << std::endl;
      exit(1);
    }
    std::string filename = argv[1];
    std::string outname = "dNdE.dat";
    if (argc >= 3) outname = argv[2];
    std::string filename_data = "data.yaml";
    if (argc >= 4) filename_data = argv[3];
    std::string filename_dump = "dump.yaml";
    if (argc >= 5) filename_dump = argv[4];


    // ---- Initialise logging and exceptions ----

    initialise_standalone_logs("runs/DarkBit_standalone_MSSM/logs/");
    logger()<<"Running DarkBit standalone example"<<LogTags::info<<EOM;
    model_warning().set_fatal(true);


    // ---- Check that required backends are present ----
    
    if (not Backends::backendInfo().works["DarkSUSY5.1.3"]) backend_error().raise(LOCAL_INFO, "DarkSUSY 5.1.3 is missing!");
    if (not Backends::backendInfo().works["MicrOmegas3.6.9.2"]) backend_error().raise(LOCAL_INFO, "MicrOmegas 3.6.9.2 is missing!");
    if (not Backends::backendInfo().works["gamLike1.0.0"]) backend_error().raise(LOCAL_INFO, "gamLike 1.0.0 is missing!");
    if (not Backends::backendInfo().works["DDCalc1.0.0"]) backend_error().raise(LOCAL_INFO, "DDCalc 1.0.0 is missing!");
    if (not Backends::backendInfo().works["nulike1.0.3"]) backend_error().raise(LOCAL_INFO, "nulike 1.0.3 is missing!");


    // ---- Initialize models ----

    // Initialize LocalHalo model
    ModelParameters* LocalHalo_primary_parameters = Models::LocalHalo::Functown::primary_parameters.getcontentsPtr();
    LocalHalo_primary_parameters->setValue("rho0", 0.4);
    LocalHalo_primary_parameters->setValue("vrot", 235.);
    LocalHalo_primary_parameters->setValue("v0", 235.);
    LocalHalo_primary_parameters->setValue("vesc", 550.);
    LocalHalo_primary_parameters->setValue("vearth", 29.78);

    // Initialize nuclear_params_fnq model
    ModelParameters* nuclear_params_fnq = Models::nuclear_params_fnq::Functown::primary_parameters.getcontentsPtr();
    nuclear_params_fnq->setValue("fpd", 0.034);
    nuclear_params_fnq->setValue("fpu", 0.023);
    nuclear_params_fnq->setValue("fps", 0.14);
    nuclear_params_fnq->setValue("fnd", 0.041);
    nuclear_params_fnq->setValue("fnu", 0.019);
    nuclear_params_fnq->setValue("fns", 0.14);
    nuclear_params_fnq->setValue("deltad", -0.40);
    nuclear_params_fnq->setValue("deltau", 0.74);
    nuclear_params_fnq->setValue("deltas", -0.12);


    // ---- Initialize spectrum and decays from SLHA file ----

    createSpectrum.setOption<std::string>("filename", filename);
    createSpectrum.reset_and_calculate();
    createDecays.setOption<std::string>("filename", filename);
    createDecays.reset_and_calculate();


    // ---- Initialize backends ----

    // Initialize nulike backend
    Backends::nulike_1_0_3::Functown::nulike_bounds.setStatus(2);
    nulike_1_0_3_init.reset_and_calculate();

    // Initialize gamLike backend
    gamLike_1_0_0_init.notifyOfModel("GalacticHalo_Einasto");  // FIXME: Hack
    gamLike_1_0_0_init.reset_and_calculate();

    // Initialize MicrOmegas backend
    MicrOmegas_3_6_9_2_init.resolveDependency(&createSpectrum);
    MicrOmegas_3_6_9_2_init.notifyOfModel("MSSM30atQ");
    MicrOmegas_3_6_9_2_init.reset_and_calculate();

    // Initialize DarkSUSY backend
    DarkSUSY_5_1_3_init.reset_and_calculate();
    DarkSUSY_PointInit_MSSM.notifyOfModel("MSSM30atQ");
    DarkSUSY_PointInit_MSSM.resolveDependency(&createSpectrum);
    DarkSUSY_PointInit_MSSM.resolveDependency(&createDecays);
    DarkSUSY_PointInit_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::init_diskless);
    DarkSUSY_PointInit_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsgive_model_isasugra);
    DarkSUSY_PointInit_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dssusy_isasugra);
    DarkSUSY_PointInit_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dssusy);
    DarkSUSY_PointInit_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsSLHAread);
    DarkSUSY_PointInit_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsprep);
    DarkSUSY_PointInit_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dswwidth);
    DarkSUSY_PointInit_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::mssmpar);
    DarkSUSY_PointInit_MSSM.setOption<bool>("use_dsSLHAread", true);
    DarkSUSY_PointInit_MSSM.reset_and_calculate();

    // Initialize DarkSUSY Local Halo Model
    DarkSUSY_PointInit_LocalHalo_func.notifyOfModel("LocalHalo");
    DarkSUSY_PointInit_LocalHalo_func.resolveDependency(&Models::LocalHalo::Functown::primary_parameters);
    DarkSUSY_PointInit_LocalHalo_func.resolveDependency(&RD_fraction_fixed);
    DarkSUSY_PointInit_LocalHalo_func.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dshmcom);
    DarkSUSY_PointInit_LocalHalo_func.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dshmisodf);
    DarkSUSY_PointInit_LocalHalo_func.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dshmframevelcom);
    DarkSUSY_PointInit_LocalHalo_func.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dshmnoclue);
    DarkSUSY_PointInit_LocalHalo_func.reset_and_calculate();


    // ---- Relic density ----

    // Relic density calculation with MicrOmegas
    RD_oh2_MicrOmegas.resolveBackendReq(&Backends::MicrOmegas_3_6_9_2::Functown::darkOmega);
    RD_oh2_MicrOmegas.setOption<int>("fast", 0);  // 0: accurate; 1: fast
    RD_oh2_MicrOmegas.reset_and_calculate();

    // Relic density calculation with DarkSUSY (the sloppy version)
    RD_oh2_DarkSUSY.resolveDependency(&DarkSUSY_PointInit_MSSM);
    RD_oh2_DarkSUSY.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsrdomega);
    RD_oh2_DarkSUSY.setOption<int>("fast", 0);  // 0: normal; 1: fast; 2: dirty
    RD_oh2_DarkSUSY.reset_and_calculate();
    // FIXME: Use "general" version instead

    // Calculate WMAP likelihoods, based on MicrOmegas result
    lnL_oh2_Simple.resolveDependency(&RD_oh2_MicrOmegas);
    lnL_oh2_Simple.reset_and_calculate();


    // ---- Set up basic internal structures for direct & indirect detection ----

    // Set identifier for DM particle
    DarkMatter_ID_MSSM.resolveDependency(&createSpectrum);
    DarkMatter_ID_MSSM.reset_and_calculate();

    // Set up process catalog based on DarkSUSY annihilation rates
    TH_ProcessCatalog_MSSM.resolveDependency(&DarkSUSY_PointInit_MSSM);
    TH_ProcessCatalog_MSSM.resolveDependency(&createSpectrum);
    TH_ProcessCatalog_MSSM.resolveDependency(&createDecays);
    TH_ProcessCatalog_MSSM.resolveDependency(&DarkMatter_ID_MSSM);
    TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dssigmav);
    TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsIBffdxdy);
    TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsIBhhdxdy);
    TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsIBwhdxdy);
    TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsIBwwdxdy);
    TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::IBintvars);
    TH_ProcessCatalog_MSSM.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::setMassesForIB);
    TH_ProcessCatalog_MSSM.reset_and_calculate();

    // Assume for direct and indirect detection likelihoods that dark matter
    // density is always the measured one (despite relic density results)
    RD_fraction_fixed.reset_and_calculate();

    // Set generic WIMP mass object
    mwimp_generic.resolveDependency(&TH_ProcessCatalog_MSSM);
    mwimp_generic.resolveDependency(&DarkMatter_ID_MSSM);
    mwimp_generic.reset_and_calculate();

    // Set generic annihilation rate in late universe (v->0 limit)
    // FIXME: Check whether limit is really calculated
    sigmav_late_universe.resolveDependency(&TH_ProcessCatalog_MSSM);
    sigmav_late_universe.resolveDependency(&DarkMatter_ID_MSSM);
    sigmav_late_universe.reset_and_calculate();


    // ---- Direct detection -----

    // Calculate DD couplings with Micromegas
    DD_couplings_MicrOmegas.notifyOfModel("MSSM30atQ");
    DD_couplings_MicrOmegas.notifyOfModel("nuclear_params_fnq");
    DD_couplings_MicrOmegas.resolveDependency(&Models::nuclear_params_fnq::Functown::primary_parameters);
    DD_couplings_MicrOmegas.resolveBackendReq(&Backends::MicrOmegas_3_6_9_2::Functown::nucleonAmplitudes);
    DD_couplings_MicrOmegas.resolveBackendReq(&Backends::MicrOmegas_3_6_9_2::Functown::FeScLoop);
    DD_couplings_MicrOmegas.resolveBackendReq(&Backends::MicrOmegas_3_6_9_2::Functown::mocommon_);
    DD_couplings_MicrOmegas.reset_and_calculate();

    // Calculate DD couplings with DarkSUSY
    DD_couplings_DarkSUSY.notifyOfModel("nuclear_params_fnq");
    DD_couplings_DarkSUSY.resolveDependency(&Models::nuclear_params_fnq::Functown::primary_parameters);
    DD_couplings_DarkSUSY.resolveDependency(&DarkSUSY_PointInit_MSSM);
    DD_couplings_DarkSUSY.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsddgpgn);
    DD_couplings_DarkSUSY.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::mspctm);
    DD_couplings_DarkSUSY.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::ddcom);
    DD_couplings_DarkSUSY.reset_and_calculate();

    // Initialize DDCalc backend
    Backends::DDCalc_1_0_0::Functown::DDCalc_CalcRates_simple.setStatus(2);
    Backends::DDCalc_1_0_0::Functown::DDCalc_Experiment.setStatus(2);
    Backends::DDCalc_1_0_0::Functown::DDCalc_LogLikelihood.setStatus(2);
    DDCalc_1_0_0_init.notifyOfModel("LocalHalo");
    DDCalc_1_0_0_init.resolveDependency(&Models::LocalHalo::Functown::primary_parameters);
    DDCalc_1_0_0_init.resolveDependency(&RD_fraction_fixed);
    DDCalc_1_0_0_init.resolveDependency(&mwimp_generic);
    DDCalc_1_0_0_init.resolveDependency(&DD_couplings_DarkSUSY); // Use DarkSUSY for DD couplings
    DDCalc_1_0_0_init.reset_and_calculate();

    // Calculate direct detection rates for LUX 2013
    LUX_2013_Calc.resolveBackendReq(&Backends::DDCalc_1_0_0::Functown::DDCalc_Experiment);
    LUX_2013_Calc.resolveBackendReq(&Backends::DDCalc_1_0_0::Functown::DDCalc_CalcRates_simple);
    LUX_2013_Calc.reset_and_calculate();

    // Calculate direct detection likelihood for LUX 2013
    LUX_2013_GetLogLikelihood.resolveDependency(&LUX_2013_Calc);
    LUX_2013_GetLogLikelihood.resolveBackendReq(&Backends::DDCalc_1_0_0::Functown::DDCalc_Experiment);
    LUX_2013_GetLogLikelihood.resolveBackendReq(&Backends::DDCalc_1_0_0::Functown::DDCalc_LogLikelihood);
    LUX_2013_GetLogLikelihood.reset_and_calculate();

    // Set generic scattering cross-section for later use
    double sigma_SI_p_DS, sigma_SI_p_MO;

    sigma_SI_p_simple.resolveDependency(&DD_couplings_DarkSUSY);
    sigma_SI_p_simple.resolveDependency(&mwimp_generic);
    sigma_SI_p_simple.reset_and_calculate();
    sigma_SI_p_DS = sigma_SI_p_simple(0);
    sigma_SI_p_simple.resolveDependency(&DD_couplings_MicrOmegas);
    sigma_SI_p_simple.reset_and_calculate();
    sigma_SI_p_MO = sigma_SI_p_simple(0);


    // Set generic scattering cross-section for later use
    double sigma_SD_p_DS, sigma_SD_p_MO;
    sigma_SD_p_simple.resolveDependency(&DD_couplings_DarkSUSY);
    sigma_SD_p_simple.resolveDependency(&mwimp_generic);
    sigma_SD_p_simple.reset_and_calculate();
    sigma_SD_p_DS = sigma_SD_p_simple(0);
    sigma_SD_p_simple.resolveDependency(&DD_couplings_MicrOmegas);
    sigma_SD_p_simple.reset_and_calculate();
    sigma_SD_p_MO = sigma_SD_p_simple(0);

    // ---- Gamma-ray yields ----

    // Initialize tabulated gamma-ray yields
    SimYieldTable_DarkSUSY.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dshayield);
    SimYieldTable_DarkSUSY.reset_and_calculate();

    // Collect missing final states for simulation in cascade MC
    GA_missingFinalStates.resolveDependency(&TH_ProcessCatalog_MSSM);
    GA_missingFinalStates.resolveDependency(&SimYieldTable_DarkSUSY);
    GA_missingFinalStates.resolveDependency(&DarkMatter_ID_MSSM);
    GA_missingFinalStates.reset_and_calculate();

    // Infer for which type of final states particles MC should be performed
    cascadeMC_FinalStates.setOption<std::vector<std::string>>("cMC_finalStates", daFunk::vec<std::string>("gamma"));
    cascadeMC_FinalStates.reset_and_calculate();

    // Collect decay information for cascade MC
    cascadeMC_DecayTable.resolveDependency(&TH_ProcessCatalog_MSSM);
    cascadeMC_DecayTable.resolveDependency(&SimYieldTable_DarkSUSY);
    cascadeMC_DecayTable.reset_and_calculate();

    // Set up MC loop manager for cascade MC
    cascadeMC_LoopManager.setOption<int>("cMC_maxEvents", 1000);
    cascadeMC_LoopManager.resolveDependency(&GA_missingFinalStates);
    cascadeMC_LoopManager.resolveDependency(&cascadeMC_DecayTable);
    cascadeMC_LoopManager.resolveDependency(&SimYieldTable_DarkSUSY);
    cascadeMC_LoopManager.resolveDependency(&TH_ProcessCatalog_MSSM);
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
    cascadeMC_Histograms.resolveDependency(&cascadeMC_InitialState);
    cascadeMC_Histograms.resolveDependency(&cascadeMC_GenerateChain);
    cascadeMC_Histograms.resolveDependency(&TH_ProcessCatalog_MSSM);
    cascadeMC_Histograms.resolveDependency(&SimYieldTable_DarkSUSY);
    cascadeMC_Histograms.resolveDependency(&cascadeMC_FinalStates);
    cascadeMC_Histograms.resolveLoopManager(&cascadeMC_LoopManager);
    //cascadeMC_Histograms.reset_and_calculate();

    // Check convergence of cascade MC
    cascadeMC_EventCount.resolveDependency(&cascadeMC_InitialState);
    cascadeMC_EventCount.resolveLoopManager(&cascadeMC_LoopManager);
    //cascadeMC_EventCount.reset_and_calculate();

    // Start cascade MC loop
    cascadeMC_LoopManager.reset_and_calculate();

    // Infer gamma-ray spectra for recorded MC results
    cascadeMC_gammaSpectra.resolveDependency(&GA_missingFinalStates);
    cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_FinalStates);
    cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_Histograms);
    cascadeMC_gammaSpectra.resolveDependency(&cascadeMC_EventCount);
    cascadeMC_gammaSpectra.reset_and_calculate();

    // Calculate total gamma-ray yield (cascade MC + tabulated results)
    GA_AnnYield_General.resolveDependency(&TH_ProcessCatalog_MSSM);
    GA_AnnYield_General.resolveDependency(&SimYieldTable_DarkSUSY);
    GA_AnnYield_General.resolveDependency(&DarkMatter_ID_MSSM);
    GA_AnnYield_General.resolveDependency(&cascadeMC_gammaSpectra);
    GA_AnnYield_General.reset_and_calculate();

    // Dump spectrum into file
    dump_GammaSpectrum.resolveDependency(&GA_AnnYield_General);
    dump_GammaSpectrum.setOption<std::string>("filename", outname);
    dump_GammaSpectrum.reset_and_calculate();

    // Calculate Fermi LAT dwarf likelihood
    lnL_FermiLATdwarfs_gamLike.resolveDependency(&GA_AnnYield_General);
    lnL_FermiLATdwarfs_gamLike.resolveDependency(&RD_fraction_fixed);
    lnL_FermiLATdwarfs_gamLike.resolveBackendReq(&Backends::gamLike_1_0_0::Functown::lnL);
    lnL_FermiLATdwarfs_gamLike.reset_and_calculate();


    // ---- IceCube limits ----

    // Infer WIMP capture rate in Sun
    capture_rate_Sun_const_xsec.resolveDependency(&mwimp_generic);
    capture_rate_Sun_const_xsec.resolveDependency(&sigma_SI_p_simple);
    capture_rate_Sun_const_xsec.resolveDependency(&sigma_SD_p_simple);
    capture_rate_Sun_const_xsec.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsntcapsuntab);
    capture_rate_Sun_const_xsec.resolveDependency(&DarkSUSY_PointInit_LocalHalo_func);
    capture_rate_Sun_const_xsec.reset_and_calculate();

    // Infer WIMP equilibration time in Sun
    equilibration_time_Sun.resolveDependency(&sigmav_late_universe);
    equilibration_time_Sun.resolveDependency(&mwimp_generic);
    equilibration_time_Sun.resolveDependency(&capture_rate_Sun_const_xsec);
    equilibration_time_Sun.reset_and_calculate();

    // Infer WIMP annihilation rate in Sun
    annihilation_rate_Sun.resolveDependency(&equilibration_time_Sun);
    annihilation_rate_Sun.resolveDependency(&capture_rate_Sun_const_xsec);
    annihilation_rate_Sun.reset_and_calculate();

    // Infer neutrino yield from Sun
    nuyield_from_DS.resolveDependency(&TH_ProcessCatalog_MSSM);
    nuyield_from_DS.resolveDependency(&mwimp_generic);
    nuyield_from_DS.resolveDependency(&sigmav_late_universe);
    nuyield_from_DS.resolveDependency(&sigma_SI_p_simple);
    nuyield_from_DS.resolveDependency(&sigma_SD_p_simple);
    nuyield_from_DS.resolveDependency(&DarkMatter_ID_MSSM);
    nuyield_from_DS.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::dsgenericwimp_nusetup);
    nuyield_from_DS.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::neutrino_yield);
    nuyield_from_DS.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::DS_neutral_h_decay_channels);
    nuyield_from_DS.resolveBackendReq(&Backends::DarkSUSY_5_1_3::Functown::DS_charged_h_decay_channels);
    nuyield_from_DS.reset_and_calculate();

    // Calculate number of events at IceCube
    IC79WH_full.resolveDependency(&mwimp_generic);
    IC79WH_full.resolveDependency(&annihilation_rate_Sun);
    IC79WH_full.resolveDependency(&nuyield_from_DS);
    IC79WH_full.resolveBackendReq(&Backends::nulike_1_0_3::Functown::nulike_bounds);
    IC79WH_full.reset_and_calculate();

    // Calculate IceCube likelihood
    IC79WH_loglike.resolveDependency(&IC79WH_full);
    IC79WH_loglike.reset_and_calculate();
    // FIXME: Code up other analyses
    

    // ---- Runs DarkBit UnitTest ----

    UnitTest_DarkBit.setOption<std::string>("filename", filename_dump);
    UnitTest_DarkBit.resolveDependency(&RD_oh2_DarkSUSY);
    UnitTest_DarkBit.resolveDependency(&GA_AnnYield_General);
    UnitTest_DarkBit.resolveDependency(&TH_ProcessCatalog_MSSM);
    UnitTest_DarkBit.resolveDependency(&DarkMatter_ID_MSSM);
    UnitTest_DarkBit.resolveDependency(&DD_couplings_DarkSUSY);
    UnitTest_DarkBit.reset_and_calculate();
    

    // ---- Dump results on screen ----

    // Retrieve and print MicrOmegas result
    double oh2 = RD_oh2_MicrOmegas(0);
    logger() << "Relic density from MicrOmegas: " << oh2 << LogTags::info << EOM;

    // Retrieve and print DarkSUSY result
    oh2 = RD_oh2_DarkSUSY(0);
    logger() << "Relic density from DarkSUSY: " << oh2 << LogTags::info << EOM;

    // ---- Dump output into file ----

    std::fstream file;
    file.open(filename_data, std::ios_base::out);
    oh2 = RD_oh2_MicrOmegas(0);
    file << "oh2:"<<std::endl;
    file << "  MO: " << oh2 << std::endl;
    oh2 = RD_oh2_DarkSUSY(0);
    file << "  DS: " << oh2 << std::endl;

    file << "DD_couplings:" << std::endl;

    file << "  gps:" << std::endl;
    double dd_gps = DD_couplings_MicrOmegas(0).gps;
    file << "    MO: " << dd_gps << std::endl;
    dd_gps = DD_couplings_DarkSUSY(0).gps;
    file << "    DS: " << dd_gps << std::endl;

    file << "  gns:" << std::endl;
    double dd_gns = DD_couplings_MicrOmegas(0).gns;
    file << "    MO: " << dd_gns << std::endl;
    dd_gns = DD_couplings_DarkSUSY(0).gns;
    file << "    DS: " << dd_gns << std::endl;

    file << "  gpa:" << std::endl;
    double dd_gpa = DD_couplings_MicrOmegas(0).gpa;
    file << "    MO: " << dd_gpa << std::endl;
    dd_gpa = DD_couplings_DarkSUSY(0).gpa;
    file << "    DS: " << dd_gpa << std::endl;

    file << "  gna:" << std::endl;
    double dd_gna = DD_couplings_MicrOmegas(0).gna;
    file << "    MO: " << dd_gna << std::endl;
    dd_gna = DD_couplings_DarkSUSY(0).gna;
    file << "    DS: " << dd_gna << std::endl;

    file << " sigma_SI_p [cm^2]: " << std::endl;
    file << "    MO: " << sigma_SI_p_MO << std::endl;
    file << "    DS: " << sigma_SI_p_DS << std::endl;
    file << " sigma_SD_p [cm^2]: " << std::endl;
    file << "    MO: " << sigma_SD_p_MO << std::endl;
    file << "    DS: " << sigma_SD_p_DS << std::endl;
    file.close();
  }

  catch (std::exception& e)
  {
    std::cout << "DarkBit_standalone_MSSM has exited with fatal exception: " << e.what() << std::endl;
  }

  return 0;

}
