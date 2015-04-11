//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module DarkBit
///
///  Compile-time registration of available obser-
///  vables and likelihoods, as well as their
///  dependencies.
///
///  Add to this if you want to add an observable
///  or likelihood to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul - 2015 May
///
///  \author Torsten Bringmann
///          (torsten.bringmann@fys.uio.no)
///  \date 2013 Jun
///  \date 2014 Mar [RD interface to DS is working]
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar, Sep, Oct
///  
///  \author Christopher Savage
///          (chris@savage.name)
///  \date 2014 Oct, Dec
///
///  \author Antje Putze
///          (antje.putze@lapth.cnrs.fr)
///  \date 2015 Jan
///
///  \author Pat Scott
///          (pscott@imperial.ac.uk)
///  \date 2014 Mar
///  \date 2015 Mar
///
///  *********************************************

#ifndef __DarkBit_rollcall_hpp__
#define __DarkBit_rollcall_hpp__

#include "gambit/DarkBit/DarkBit_types.hpp"

#define MODULE DarkBit
START_MODULE

  #define CAPABILITY MSSMspectrum
  START_CAPABILITY
    #define FUNCTION getMSSMspectrum
      START_FUNCTION(eaSLHA)
      ALLOW_MODELS(MSSM25atQ)
    #undef FUNCTION
  #undef CAPABILITY


  // Backend point initialization --------------------------

  // Function to initialize DarkSUSY to a specific model point.
  // The generic DarkSUSY initialization is done in the backend
  // initialization; this is only necessary for other capabilities
  // that make use of model-specific DarkSUSY routines. 
  #define CAPABILITY DarkSUSY_PointInit
  START_CAPABILITY
    // Function returns if point initialization is successful
    // (probably always true)
    #define FUNCTION DarkSUSY_PointInit_MSSM
      START_FUNCTION(bool)
      DEPENDENCY(MSSMspectrum, eaSLHA) 
      ALLOW_MODELS(CMSSM_demo,CMSSM,MSSM25atQ)
      // CMSSM
      BACKEND_REQ(dsgive_model_isasugra, (), void, (double&,double&,double&,double&,double&))
      BACKEND_REQ(dssusy_isasugra, (), void, (int&,int&))
      // MSSM7 -- not used at the moment!?
      BACKEND_REQ(mssmpar, (), DS_MSSMPAR)
      BACKEND_REQ(dssusy, (), void, (int&,int&))
      // Initialize DarkSUSY with SLHA file
      BACKEND_REQ(dsSLHAread, (), void, (const char*, int&, int))
      BACKEND_REQ(dsprep, (), void, ())
      // Print higgs widths
      BACKEND_REQ(dswwidth, (), void, (int&))
    #undef FUNCTION
  #undef CAPABILITY


  // Relic density -----------------------------------------

  #define CAPABILITY RD_spectrum
  START_CAPABILITY
    #define FUNCTION RD_spectrum_SUSY
      START_FUNCTION(Gambit::DarkBit::RD_spectrum_type)
      DEPENDENCY(DarkSUSY_PointInit, bool)
      BACKEND_REQ(mspctm, (), DS_MSPCTM)
      BACKEND_REQ(widths, (), DS_WIDTHS)
      BACKEND_REQ(intdof, (), DS_INTDOF)
      BACKEND_REQ(pacodes, (), DS_PACODES)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_thresholds_resonances
  START_CAPABILITY
    #define FUNCTION RD_thresholds_resonances_from_ProcessCatalog
      START_FUNCTION(Gambit::DarkBit::TH_resonances_thresholds)
      DEPENDENCY(RD_spectrum, Gambit::DarkBit::RD_spectrum_type)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
    #undef FUNCTION
    #define FUNCTION RD_thresholds_resonances_from_spectrum
      START_FUNCTION(Gambit::DarkBit::TH_resonances_thresholds)
      DEPENDENCY(RD_spectrum, Gambit::DarkBit::RD_spectrum_type)
    #undef FUNCTION
    #define FUNCTION RD_thresholds_resonances_SingletDM
      START_FUNCTION(Gambit::DarkBit::TH_resonances_thresholds)
      ALLOW_MODELS(SingletDM)
      BACKEND_REQ(rdmgev, (), DS_RDMGEV)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_eff_annrate_SUSY_DSprep
  START_CAPABILITY 
    #define FUNCTION RD_eff_annrate_SUSY_DSprep_func
      START_FUNCTION(int)
      DEPENDENCY(RD_spectrum, Gambit::DarkBit::RD_spectrum_type)
      BACKEND_REQ(rdmgev, (), DS_RDMGEV)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_eff_annrate
  START_CAPABILITY 
    #define FUNCTION RD_eff_annrate_SUSY
      START_FUNCTION(fptr_dd)
        DEPENDENCY(RD_eff_annrate_SUSY_DSprep, int)
        BACKEND_REQ(dsanwx, (), double, (double&))
    #undef FUNCTION
    #define FUNCTION RD_eff_annrate_from_ProcessCatalog
      START_FUNCTION(fptr_dd)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
      ALLOW_MODELS(SingletDM)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY RD_oh2
  START_CAPABILITY 
    #define FUNCTION RD_oh2_general
      START_FUNCTION(double)
      DEPENDENCY(RD_thresholds_resonances, Gambit::DarkBit::TH_resonances_thresholds)
      DEPENDENCY(RD_eff_annrate, fptr_dd)
      BACKEND_REQ(dsrdthlim, (), void, ())
      BACKEND_REQ(dsrdtab, (), void, (double(*)(double&), double&))
      BACKEND_REQ(dsrdeqn, (), void, (double(*)(double&),double&,double&,double&,double&,int&))
      BACKEND_REQ(dsrdwintp, (), double, (double&))
      BACKEND_REQ(dsanwx, (), double, (double&))
      BACKEND_REQ(widths, (), DS_WIDTHS)
      BACKEND_REQ(rdmgev, (), DS_RDMGEV)
      BACKEND_REQ(rdpth, (), DS_RDPTH)
      BACKEND_REQ(rdpars, (), DS_RDPARS)
      BACKEND_REQ(rdswitch, (), DS_RDSWITCH)
      BACKEND_REQ(rdlun, (), DS_RDLUN)
      BACKEND_REQ(rdpadd, (), DS_RDPADD)
      BACKEND_REQ(rddof, (), DS_RDDOF)
      BACKEND_REQ(rderrors, (), DS_RDERRORS)
    #undef FUNCTION

    // Routine for cross checking RD density results
    #define FUNCTION RD_oh2_DarkSUSY
      START_FUNCTION(double)
      //ALLOW_MODELS(MSSM25atQ)  // TODO: (CW) Check for which models this works
      DEPENDENCY(DarkSUSY_PointInit, bool)
      BACKEND_REQ(dsrdomega, (), double, (int&,int&,double&,int&,int&,int&))
    #undef FUNCTION

    // Routine for cross checking RD density results
    #define FUNCTION RD_oh2_MicrOmegas
      START_FUNCTION(double)
      ALLOW_MODELS(MSSM25atQ)  // TODO: (CW) Check for which models this works
      BACKEND_REQ(oh2, (), double, (double*,int,double))
    #undef FUNCTION
  #undef CAPABILITY

  // Cascade decays --------------------------------------------

  // Function for retrieving list of final states for cascade decays
  #define CAPABILITY cascadeMC_FinalStates
  START_CAPABILITY
    #define FUNCTION cascadeMC_FinalStates
      START_FUNCTION(std::vector<std::string>)      
    #undef FUNCTION                                                       
  #undef CAPABILITY 

  // Print list of final states for debug purposes
  #define CAPABILITY cascadeMC_printFinalStates
  START_CAPABILITY
    #define FUNCTION cascadeMC_printFinalStates
      START_FUNCTION(bool)      
      DEPENDENCY(cascadeMC_FinalStates,std::vector<std::string>)      
    #undef FUNCTION                                                       
  #undef CAPABILITY 

  // Function setting up the decay table used in decay chains
  #define CAPABILITY cascadeMC_DecayTable
  START_CAPABILITY
    #define FUNCTION cascadeMC_DecayTable
      START_FUNCTION(Gambit::DarkBit::DecayChain::DecayTable)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      DEPENDENCY(SimYieldTable, Gambit::DarkBit::SimYieldTable)       
    #undef FUNCTION                                                       
  #undef CAPABILITY    

  // Loop manager for cascade decays
  #define CAPABILITY cascadeMC_LoopManagement
  START_CAPABILITY
    #define FUNCTION cascadeMC_LoopManager
      START_FUNCTION(void, CAN_MANAGE_LOOPS)  
      DEPENDENCY(GA_missingFinalStates, std::vector<std::string>)
      // FIXME: Hack to make sure these capabilities are run before the loop
      DEPENDENCY(cascadeMC_DecayTable, Gambit::DarkBit::DecayChain::DecayTable)
      DEPENDENCY(SimYieldTable, Gambit::DarkBit::SimYieldTable)      
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)        
    #undef FUNCTION                                                       
  #undef CAPABILITY    
    
  // Function selecting initial state for decay chain
  #define CAPABILITY cascadeMC_InitialState
  START_CAPABILITY
    #define FUNCTION cascadeMC_InitialState
      START_FUNCTION(std::string)
      DEPENDENCY(GA_missingFinalStates, std::vector<std::string>)
      NEEDS_MANAGER_WITH_CAPABILITY(cascadeMC_LoopManagement) 
    #undef FUNCTION          
  #undef CAPABILITY
  
  // Event counter for cascade decays
  #define CAPABILITY cascadeMC_EventCount
  START_CAPABILITY
    #define FUNCTION cascadeMC_EventCount
      START_FUNCTION(Gambit::DarkBit::stringIntMap)
      DEPENDENCY(cascadeMC_InitialState, std::string)
      NEEDS_MANAGER_WITH_CAPABILITY(cascadeMC_LoopManagement) 
    #undef FUNCTION          
  #undef CAPABILITY
  
  // Function for generating decay chains
  #define CAPABILITY cascadeMC_ChainEvent
  START_CAPABILITY
    #define FUNCTION cascadeMC_GenerateChain
      START_FUNCTION(Gambit::DarkBit::DecayChain::ChainContainer)
      DEPENDENCY(cascadeMC_InitialState, std::string)
      DEPENDENCY(cascadeMC_DecayTable, Gambit::DarkBit::DecayChain::DecayTable)
      NEEDS_MANAGER_WITH_CAPABILITY(cascadeMC_LoopManagement) 
    #undef FUNCTION          
  #undef CAPABILITY

  // Function responsible for histogramming and evaluating end conditions for event loop
  #define CAPABILITY cascadeMC_Histograms
  START_CAPABILITY
    #define FUNCTION cascadeMC_Histograms
      START_FUNCTION(Gambit::DarkBit::simpleHistContainter)
      DEPENDENCY(cascadeMC_InitialState, std::string)
      DEPENDENCY(cascadeMC_ChainEvent, Gambit::DarkBit::DecayChain::ChainContainer)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)      
      DEPENDENCY(SimYieldTable, Gambit::DarkBit::SimYieldTable)      
      DEPENDENCY(cascadeMC_FinalStates,std::vector<std::string>)  
      // FIXME: Temporary, for testing   
      BACKEND_REQ(dshayield, (), double, (double&,double&,int&,int&,int&)) 
      NEEDS_MANAGER_WITH_CAPABILITY(cascadeMC_LoopManagement) 
    #undef FUNCTION          
  #undef CAPABILITY

  // Function requesting and returning gamma ray spectra from cascade decays.
  #define CAPABILITY cascadeMC_gammaSpectra
  START_CAPABILITY
    #define FUNCTION cascadeMC_gammaSpectra
      START_FUNCTION(Gambit::DarkBit::stringFunkMap)
      DEPENDENCY(GA_missingFinalStates, std::vector<std::string>)  
      DEPENDENCY(cascadeMC_FinalStates,std::vector<std::string>)       
      DEPENDENCY(cascadeMC_Histograms, Gambit::DarkBit::simpleHistContainter)       
      DEPENDENCY(cascadeMC_EventCount, Gambit::DarkBit::stringIntMap)      
    #undef FUNCTION                                                       
  #undef CAPABILITY 


  // Function for printing test result of cascade decays
  #define CAPABILITY cascadeMC_PrintResult
  START_CAPABILITY
    #define FUNCTION cascadeMC_PrintResult
      START_FUNCTION(bool)  
      DEPENDENCY(cascadeMC_Histograms, Gambit::DarkBit::simpleHistContainter)
      DEPENDENCY(cascadeMC_EventCount, Gambit::DarkBit::stringIntMap)
    #undef FUNCTION
  #undef CAPABILITY

  // Process catalog for testing purposes
  #define CAPABILITY cascadeMC_test_TH_ProcessCatalog
  START_CAPABILITY
    #define FUNCTION cascadeMC_test_TH_ProcessCatalog
      START_FUNCTION(Gambit::DarkBit::TH_ProcessCatalog)        
    #undef FUNCTION
  #undef CAPABILITY

  // Unit test for decay chains
  #define CAPABILITY cascadeMC_UnitTest
  START_CAPABILITY
    #define FUNCTION cascadeMC_UnitTest
      START_FUNCTION(bool)
      DEPENDENCY(cascadeMC_test_TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      DEPENDENCY(SimYieldTable, Gambit::DarkBit::SimYieldTable)           
    #undef FUNCTION
  #undef CAPABILITY

  // Gamma rays --------------------------------------------
  //
  #define CAPABILITY GA_missingFinalStates
  START_CAPABILITY
    #define FUNCTION GA_missingFinalStates
      START_FUNCTION(std::vector<std::string>)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      DEPENDENCY(SimYieldTable, Gambit::DarkBit::SimYieldTable)
      DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY GA_AnnYield
  START_CAPABILITY
    #define FUNCTION GA_AnnYield_General
      START_FUNCTION(Funk::Funk)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      DEPENDENCY(SimYieldTable, Gambit::DarkBit::SimYieldTable)
      DEPENDENCY(cascadeMC_gammaSpectra, Gambit::DarkBit::stringFunkMap)
      DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
    #undef FUNCTION
    #define FUNCTION GA_AnnYield_DarkSUSY
      START_FUNCTION(Funk::Funk)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
      BACKEND_REQ(dshayield, (), double, (double&,double&,int&,int&,int&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY TH_ProcessCatalog
  START_CAPABILITY
    #define FUNCTION TH_ProcessCatalog_CMSSM
      START_FUNCTION(Gambit::DarkBit::TH_ProcessCatalog)
      //ALLOW_MODELS(CMSSM_demo, MSSM25atQ)
      DEPENDENCY(DarkSUSY_PointInit, bool)
      DEPENDENCY(MSSMspectrum, eaSLHA) 
      DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
      BACKEND_REQ(mspctm, (), DS_MSPCTM)
      BACKEND_REQ(dssigmav, (), double, (int&))
      BACKEND_REQ(dsIBffdxdy, (), double, (int&, double&, double&))
      BACKEND_REQ(dsIBhhdxdy, (), double, (int&, double&, double&))
      BACKEND_REQ(dsIBwhdxdy, (), double, (int&, double&, double&))
      BACKEND_REQ(dsIBwwdxdy, (), double, (int&, double&, double&))
      BACKEND_REQ(IBintvars, (), DS_IBINTVARS)
    #undef FUNCTION
    #define FUNCTION TH_ProcessCatalog_SingletDM
      START_FUNCTION(Gambit::DarkBit::TH_ProcessCatalog)
      //DEPENDENCY(SM_spectrum, const Spectrum*)
      ALLOW_MODELS(SingletDM)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY lnL_FermiLATdwarfs
  START_CAPABILITY
    #define FUNCTION lnL_FermiLATdwarfsSimple
      START_FUNCTION(double)
      DEPENDENCY(GA_AnnYield, Funk::Funk)
    #undef FUNCTION
    #define FUNCTION lnL_FermiLATdwarfs_gamLike
      START_FUNCTION(double)
      DEPENDENCY(GA_AnnYield, Funk::Funk)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      BACKEND_REQ(lnL_dwarfs, (gamLike), double, (const std::vector<double> &, const std::vector<double> &))
      BACKEND_REQ(lnL_GC, (gamLike), double, (const std::vector<double> &, const std::vector<double> &))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY lnL_FermiGC
  START_CAPABILITY
    #define FUNCTION lnL_FermiGC_gamLike
      START_FUNCTION(double)
      DEPENDENCY(GA_AnnYield, Funk::Funk)
      DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
      DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
      BACKEND_REQ(lnL_GC, (gamLike), double, (const std::vector<double> &, const std::vector<double> &))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY dump_GammaSpectrum
  START_CAPABILITY
    #define FUNCTION dump_GammaSpectrum
      START_FUNCTION(double)
      DEPENDENCY(GA_AnnYield, Funk::Funk)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY lnL_oh2
  START_CAPABILITY
    #define FUNCTION lnL_oh2_Simple
      START_FUNCTION(double)
      DEPENDENCY(RD_oh2, double)
    #undef FUNCTION
  #undef CAPABILITY


  // Simple WIMP property extractors =======================================

  // Retrieve the DM mass in GeV for generic models
  QUICK_FUNCTION(DarkBit, mwimp, NEW_CAPABILITY, mwimp_generic, double, (),
      (TH_ProcessCatalog, DarkBit::TH_ProcessCatalog), (DarkMatter_ID, DarkMatter_ID_type))

  // Retrieve the DM mass in GeV for the scalar singlet model
  QUICK_FUNCTION(DarkBit, mwimp, OLD_CAPABILITY, mwimp_SingletDM, double, (SingletDM))

  // Retrieve the total thermally-averaged annihilation cross-section for indirect detection (cm^3 / s)
  QUICK_FUNCTION(DarkBit, sigmav, NEW_CAPABILITY, sigmav_late_universe, double, (),
      (TH_ProcessCatalog, DarkBit::TH_ProcessCatalog), (DarkMatter_ID, DarkMatter_ID_type))


  // DIRECT DETECTION ==================================================

  // WIMP-nucleon couplings ---------------------------------------

  // Determine the WIMP mass and couplings
  #define CAPABILITY DD_couplings
  START_CAPABILITY
    #define FUNCTION DD_couplings_DarkSUSY
      START_FUNCTION(Gambit::DarkBit::DD_couplings)
      DEPENDENCY(DarkSUSY_PointInit, bool)
      BACKEND_REQ(dsddgpgn, (), void, (double&, double&, double&, double&))
      BACKEND_REQ(mspctm, (), DS_MSPCTM)
      BACKEND_REQ(ddcom, (DarkSUSY), DS_DDCOM)
      ALLOW_MODELS(nuclear_params_fnq)
    #undef FUNCTION
    #define FUNCTION DD_couplings_MicrOmegas
      START_FUNCTION(Gambit::DarkBit::DD_couplings)
      BACKEND_REQ(nucleonAmplitudes, (MicrOmegas), int, (double(*)(double,double,double,double), double*, double*, double*, double*))
      BACKEND_REQ(FeScLoop, (MicrOmegas), double, (double, double, double, double))
      BACKEND_REQ(MOcommon, (MicrOmegas), MicrOmegas::MOcommonSTR)
      ALLOW_MODELS(nuclear_params_fnq)
    #undef FUNCTION
    #define FUNCTION DD_couplings_SingletDM
      START_FUNCTION(Gambit::DarkBit::DD_couplings)
      ALLOW_MODELS(SingletDM)
      ALLOW_MODELS(nuclear_params_fnq)
    #undef FUNCTION
  #undef CAPABILITY

  // Simple calculators of the spin-(in)dependent WIMP-proton and WIMP-neutron cross-sections 
  QUICK_FUNCTION(DarkBit, sigma_SI_p, NEW_CAPABILITY, sigma_SI_p_simple, double, (), (DD_couplings, DarkBit::DD_couplings), (mwimp, double))
  QUICK_FUNCTION(DarkBit, sigma_SI_n, NEW_CAPABILITY, sigma_SI_n_simple, double, (), (DD_couplings, DarkBit::DD_couplings), (mwimp, double))
  QUICK_FUNCTION(DarkBit, sigma_SD_p, NEW_CAPABILITY, sigma_SD_p_simple, double, (), (DD_couplings, DarkBit::DD_couplings), (mwimp, double))
  QUICK_FUNCTION(DarkBit, sigma_SD_n, NEW_CAPABILITY, sigma_SD_n_simple, double, (), (DD_couplings, DarkBit::DD_couplings), (mwimp, double))

  // DDCalc0 dependencies ----------------------------------
  // Intermediate routines that must be called when intending
  // to retrieve likelihoods or observables from DDCalc0.
  // The bool result to these functions is currently meaningless.

  // Set the WIMP mass and couplings
  // TODO: Move halo settings from backend to here?
  #define CAPABILITY SetWIMP_DDCalc0
  START_CAPABILITY
    #define FUNCTION SetWIMP_DDCalc0
      START_FUNCTION(bool)
      DEPENDENCY(DD_couplings, Gambit::DarkBit::DD_couplings)
      BACKEND_REQ(DDCalc0_SetWIMP_mG, (DDCalc0), void, (double*,double*,double*,double*,double*))
      // Following only used for logging (not necessary for capability)
      BACKEND_REQ(DDCalc0_GetWIMP_msigma, (DDCalc0), void, (double*,double*,double*,double*,double*))
    #undef FUNCTION
  #undef CAPABILITY

  // Perform rate calculations for the XENON100 2012 result
  // at the current model point.
  #define CAPABILITY CalcRates_XENON100_2012_DDCalc0
  START_CAPABILITY
    #define FUNCTION CalcRates_XENON100_2012_DDCalc0
      START_FUNCTION(bool)
      DEPENDENCY(SetWIMP_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_XENON100_2012_CalcRates, (DDCalc0), void, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Perform rate calculations for the LUX 2013 result
  // at the current model point.
  #define CAPABILITY CalcRates_LUX_2013_DDCalc0
  START_CAPABILITY
    #define FUNCTION CalcRates_LUX_2013_DDCalc0
      START_FUNCTION(bool)
      DEPENDENCY(SetWIMP_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_LUX_2013_CalcRates, (DDCalc0), void, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Perform rate calculations for the future argon-based DARWIN
  // experiment (estimated sensitivity, as of 2015) at the current
  // model point.
  #define CAPABILITY CalcRates_DARWIN_Ar_2015_DDCalc0
  START_CAPABILITY
    #define FUNCTION CalcRates_DARWIN_Ar_2015_DDCalc0
      START_FUNCTION(bool)
      DEPENDENCY(SetWIMP_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Ar_2015_CalcRates, (DDCalc0), void, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Perform rate calculations for the future xenon-based DARWIN
  // experiment (estimated sensitivity, as of 2015) at the current
  // model point.
  #define CAPABILITY CalcRates_DARWIN_Xe_2015_DDCalc0
  START_CAPABILITY
    #define FUNCTION CalcRates_DARWIN_Xe_2015_DDCalc0
      START_FUNCTION(bool)
      DEPENDENCY(SetWIMP_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Xe_2015_CalcRates, (DDCalc0), void, ())
    #undef FUNCTION
  #undef CAPABILITY


  // XENON100 2012 likelihood/observables ------------------
  // Aprile et al., PRL 109, 181301 (2013) [arxiv:1207.5988]
 
  // Log-likelihood
  #define CAPABILITY lnL_XENON100_2012
  START_CAPABILITY
    #define FUNCTION XENON100_2012_LogLikelihood_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_XENON100_2012_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_XENON100_2012_LogLikelihood, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Observed events (integer)
  #define CAPABILITY XENON100_2012_Events
  START_CAPABILITY
    #define FUNCTION XENON100_2012_Events_DDCalc0
      START_FUNCTION(int)
      DEPENDENCY(CalcRates_XENON100_2012_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_XENON100_2012_Events, (DDCalc0), int, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Background expectation
  #define CAPABILITY XENON100_2012_Background
  START_CAPABILITY
    #define FUNCTION XENON100_2012_Background_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_XENON100_2012_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_XENON100_2012_Background, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation
  #define CAPABILITY XENON100_2012_Signal
  START_CAPABILITY
    #define FUNCTION XENON100_2012_Signal_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_XENON100_2012_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_XENON100_2012_Signal, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation (spin-independent)
  #define CAPABILITY XENON100_2012_SignalSI
  START_CAPABILITY
    #define FUNCTION XENON100_2012_SignalSI_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_XENON100_2012_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_XENON100_2012_SignalSI, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation (spin-dependent)
  #define CAPABILITY XENON100_2012_SignalSD
  START_CAPABILITY
    #define FUNCTION XENON100_2012_SignalSD_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_XENON100_2012_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_XENON100_2012_SignalSD, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY


  // LUX 2013 likelihood/observables -----------------------
  // Akerib et al., PRL 112, 091303 (2014) [arxiv:1310.8214]
 
  // Log-likelihood
  #define CAPABILITY lnL_LUX_2013
  START_CAPABILITY
    #define FUNCTION LUX_2013_LogLikelihood_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_LUX_2013_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_LUX_2013_LogLikelihood, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Observed events (integer)
  #define CAPABILITY LUX_2013_Events
  START_CAPABILITY
    #define FUNCTION LUX_2013_Events_DDCalc0
      START_FUNCTION(int)
      DEPENDENCY(CalcRates_LUX_2013_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_LUX_2013_Events, (DDCalc0), int, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Background expectation
  #define CAPABILITY LUX_2013_Background
  START_CAPABILITY
    #define FUNCTION LUX_2013_Background_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_LUX_2013_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_LUX_2013_Background, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation
  #define CAPABILITY LUX_2013_Signal
  START_CAPABILITY
    #define FUNCTION LUX_2013_Signal_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_LUX_2013_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_LUX_2013_Signal, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation (spin-independent)
  #define CAPABILITY LUX_2013_SignalSI
  START_CAPABILITY
    #define FUNCTION LUX_2013_SignalSI_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_LUX_2013_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_LUX_2013_SignalSI, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation (spin-dependent)
  #define CAPABILITY LUX_2013_SignalSD
  START_CAPABILITY
    #define FUNCTION LUX_2013_SignalSD_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_LUX_2013_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_LUX_2013_SignalSD, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY


  // DARWIN argon-based likelihood/observables -------------
  // Estimated argon-based DARWIN sensitivity (as of 2015):
  //   Conrad et al., arxiv:15MM.NNNNN
 
  // Log-likelihood
  #define CAPABILITY lnL_DARWIN_Ar_2015
  START_CAPABILITY
    #define FUNCTION DARWIN_Ar_2015_LogLikelihood_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Ar_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Ar_2015_LogLikelihood, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Observed events (integer)
  #define CAPABILITY DARWIN_Ar_2015_Events
  START_CAPABILITY
    #define FUNCTION DARWIN_Ar_2015_Events_DDCalc0
      START_FUNCTION(int)
      DEPENDENCY(CalcRates_DARWIN_Ar_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Ar_2015_Events, (DDCalc0), int, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Background expectation
  #define CAPABILITY DARWIN_Ar_2015_Background
  START_CAPABILITY
    #define FUNCTION DARWIN_Ar_2015_Background_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Ar_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Ar_2015_Background, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation
  #define CAPABILITY DARWIN_Ar_2015_Signal
  START_CAPABILITY
    #define FUNCTION DARWIN_Ar_2015_Signal_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Ar_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Ar_2015_Signal, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation (spin-independent)
  #define CAPABILITY DARWIN_Ar_2015_SignalSI
  START_CAPABILITY
    #define FUNCTION DARWIN_Ar_2015_SignalSI_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Ar_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Ar_2015_SignalSI, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation (spin-dependent)
  #define CAPABILITY DARWIN_Ar_2015_SignalSD
  START_CAPABILITY
    #define FUNCTION DARWIN_Ar_2015_SignalSD_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Ar_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Ar_2015_SignalSD, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY


  // DARWIN xenon-based likelihood/observables -------------
  // Estimated xenon-based DARWIN sensitivity (as of 2015):
  //   Conrad et al., arxiv:15MM.NNNNN
 
  // Log-likelihood
  #define CAPABILITY lnL_DARWIN_Xe_2015
  START_CAPABILITY
    #define FUNCTION DARWIN_Xe_2015_LogLikelihood_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Xe_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Xe_2015_LogLikelihood, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Observed events (integer)
  #define CAPABILITY DARWIN_Xe_2015_Events
  START_CAPABILITY
    #define FUNCTION DARWIN_Xe_2015_Events_DDCalc0
      START_FUNCTION(int)
      DEPENDENCY(CalcRates_DARWIN_Xe_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Xe_2015_Events, (DDCalc0), int, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Background expectation
  #define CAPABILITY DARWIN_Xe_2015_Background
  START_CAPABILITY
    #define FUNCTION DARWIN_Xe_2015_Background_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Xe_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Xe_2015_Background, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation
  #define CAPABILITY DARWIN_Xe_2015_Signal
  START_CAPABILITY
    #define FUNCTION DARWIN_Xe_2015_Signal_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Xe_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Xe_2015_Signal, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation (spin-independent)
  #define CAPABILITY DARWIN_Xe_2015_SignalSI
  START_CAPABILITY
    #define FUNCTION DARWIN_Xe_2015_SignalSI_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Xe_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Xe_2015_SignalSI, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY

  // Signal expectation (spin-dependent)
  #define CAPABILITY DARWIN_Xe_2015_SignalSD
  START_CAPABILITY
    #define FUNCTION DARWIN_Xe_2015_SignalSD_DDCalc0
      START_FUNCTION(double)
      DEPENDENCY(CalcRates_DARWIN_Xe_2015_DDCalc0, bool)
      BACKEND_REQ(DDCalc0_DARWIN_Xe_2015_SignalSD, (DDCalc0), double, ())
    #undef FUNCTION
  #undef CAPABILITY


  // INDIRECT DETECTION: NEUTRINOS =====================================
 
  // Solar capture ------------------------

  // Capture rate of regular dark matter in the Sun (no v-dependent or q-dependent cross-sections) (s^-1).
  #define CAPABILITY capture_rate_Sun
  START_CAPABILITY
    #define FUNCTION capture_rate_Sun_constant_xsec
      START_FUNCTION(double)
      BACKEND_REQ(capture_rate_Sun, (DarkSUSY), double, (const double&, const double&, const double&))
      DEPENDENCY(mwimp, double)
      DEPENDENCY(sigma_SI_p, double)
      DEPENDENCY(sigma_SD_p, double)
    #undef FUNCTION
  #undef CAPABILITY
  
  // Equilibration time for capture and annihilation of dark matter in the Sun (s)
  #define CAPABILITY equilibration_time_Sun
  START_CAPABILITY
    #define FUNCTION equilibration_time_Sun
      START_FUNCTION(double)
      DEPENDENCY(sigmav, double)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(capture_rate_Sun, double)                
    #undef FUNCTION
  #undef CAPABILITY
  
  // Annihilation rate of dark matter in the Sun (s^-1)
  #define CAPABILITY annihilation_rate_Sun
  START_CAPABILITY
    #define FUNCTION annihilation_rate_Sun
      START_FUNCTION(double)
      DEPENDENCY(equilibration_time_Sun, double)
      DEPENDENCY(capture_rate_Sun, double)
    #undef FUNCTION
  #undef CAPABILITY
    
  /// Neutrino yield function pointer and setup
  #define CAPABILITY nuyield_ptr
  START_CAPABILITY
    #define FUNCTION nuyield_from_DS
    START_FUNCTION(nuyield_functype)
    DEPENDENCY(TH_ProcessCatalog, DarkBit::TH_ProcessCatalog)
    DEPENDENCY(mwimp, double) 
    DEPENDENCY(sigmav, double)
    DEPENDENCY(sigma_SI_p, double)
    DEPENDENCY(sigma_SD_p, double)
    DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
    BACKEND_REQ(nuyield_setup, (needs_DS), void, (const double(&)[29], 
     const double(&)[29][3], const double(&)[15], const double(&)[3], const double&, 
     const double&, const double&, const double&, const double&))
    BACKEND_REQ(nuyield, (needs_DS), double, (const double&, const int&, void*&))
    BACKEND_OPTION((DarkSUSY, 5.1.1), (needs_DS))
    #undef FUNCTION
  #undef CAPABILITY
    
    
  // Neutrino telescope likelihoods ------------------------

  #define CAPABILITY IC22_data
  START_CAPABILITY
    #define FUNCTION IC22_full
      START_FUNCTION(nudata)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(annihilation_rate_Sun, double)
      DEPENDENCY(nuyield_ptr, nuyield_functype)  
      BACKEND_REQ(nubounds, (), void, (const char&, const double&, const double&, double(*)(const double&, const int&, void*&), double&, double&,
                                       int&, double&, double&, const int&, const bool&, const bool&, const double&, const double&, void*&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_signal 
  START_CAPABILITY
    #define FUNCTION IC22_signal
    START_FUNCTION(double)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_bg 
  START_CAPABILITY
    #define FUNCTION IC22_bg
    START_FUNCTION(double)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_loglike 
  START_CAPABILITY
    #define FUNCTION IC22_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_pvalue 
  START_CAPABILITY
    #define FUNCTION IC22_pvalue
    START_FUNCTION(double)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC22_nobs 
  START_CAPABILITY
    #define FUNCTION IC22_nobs
    START_FUNCTION(int)
    DEPENDENCY(IC22_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_data
  START_CAPABILITY
    #define FUNCTION IC79WH_full
      START_FUNCTION(nudata)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(annihilation_rate_Sun, double)
      DEPENDENCY(nuyield_ptr, nuyield_functype)  
      BACKEND_REQ(nubounds, (), void, (const char&, const double&, const double&, double(*)(const double&, const int&, void*&), double&, double&,
                                       int&, double&, double&, const int&, const bool&, const bool&, const double&, const double&, void*&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_signal 
  START_CAPABILITY
    #define FUNCTION IC79WH_signal
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_bg 
  START_CAPABILITY
    #define FUNCTION IC79WH_bg
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_loglike 
  START_CAPABILITY
    #define FUNCTION IC79WH_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_pvalue 
  START_CAPABILITY
    #define FUNCTION IC79WH_pvalue
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WH_nobs 
  START_CAPABILITY
    #define FUNCTION IC79WH_nobs
    START_FUNCTION(int)
    DEPENDENCY(IC79WH_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_data
  START_CAPABILITY
    #define FUNCTION IC79WL_full
      START_FUNCTION(nudata)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(annihilation_rate_Sun, double)
      DEPENDENCY(nuyield_ptr, nuyield_functype)  
      BACKEND_REQ(nubounds, (), void, (const char&, const double&, const double&, double(*)(const double&, const int&, void*&), double&, double&,
                                       int&, double&, double&, const int&, const bool&, const bool&, const double&, const double&, void*&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_signal 
  START_CAPABILITY
    #define FUNCTION IC79WL_signal
    START_FUNCTION(double)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_bg 
  START_CAPABILITY
    #define FUNCTION IC79WL_bg
    START_FUNCTION(double)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_loglike 
  START_CAPABILITY
    #define FUNCTION IC79WL_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_pvalue 
  START_CAPABILITY
    #define FUNCTION IC79WL_pvalue
    START_FUNCTION(double)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79WL_nobs 
  START_CAPABILITY
    #define FUNCTION IC79WL_nobs
    START_FUNCTION(int)
    DEPENDENCY(IC79WL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_data
  START_CAPABILITY
    #define FUNCTION IC79SL_full
      START_FUNCTION(nudata)
      DEPENDENCY(mwimp, double)
      DEPENDENCY(annihilation_rate_Sun, double)
      DEPENDENCY(nuyield_ptr, nuyield_functype)  
      BACKEND_REQ(nubounds, (), void, (const char&, const double&, const double&, double(*)(const double&, const int&, void*&), double&, double&,
                                       int&, double&, double&, const int&, const bool&, const bool&, const double&, const double&, void*&))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_signal 
  START_CAPABILITY
    #define FUNCTION IC79SL_signal
    START_FUNCTION(double)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_bg 
  START_CAPABILITY
    #define FUNCTION IC79SL_bg
    START_FUNCTION(double)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_loglike 
  START_CAPABILITY
    #define FUNCTION IC79SL_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_pvalue 
  START_CAPABILITY
    #define FUNCTION IC79SL_pvalue
    START_FUNCTION(double)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IC79SL_nobs 
  START_CAPABILITY
    #define FUNCTION IC79SL_nobs
    START_FUNCTION(int)
    DEPENDENCY(IC79SL_data, nudata)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IceCube_likelihood
  START_CAPABILITY

    #define FUNCTION IC79_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC79WH_loglike, double)
    DEPENDENCY(IC79WL_loglike, double)
    DEPENDENCY(IC79SL_loglike, double)
    #undef FUNCTION

    #define FUNCTION IC_loglike
    START_FUNCTION(double)
    DEPENDENCY(IC22_loglike, double)
    DEPENDENCY(IC79WH_loglike, double)
    DEPENDENCY(IC79WL_loglike, double)
    DEPENDENCY(IC79SL_loglike, double)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY UnitTest_DarkBit
  START_CAPABILITY
    #define FUNCTION UnitTest_DarkBit
    START_FUNCTION(int)
    DEPENDENCY(DD_couplings, Gambit::DarkBit::DD_couplings)
    DEPENDENCY(RD_oh2, double)
    DEPENDENCY(GA_AnnYield, Funk::Funk)
    DEPENDENCY(TH_ProcessCatalog, Gambit::DarkBit::TH_ProcessCatalog)
    DEPENDENCY(DarkMatter_ID, DarkMatter_ID_type)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SimYieldTable
  START_CAPABILITY
    #define FUNCTION SimYieldTable_DarkSusy
    START_FUNCTION(Gambit::DarkBit::SimYieldTable)
    BACKEND_REQ(dshayield, (), double, (double&,double&,int&,int&,int&))
    #undef FUNCTION 
    #define FUNCTION SimYieldTable_MicrOmegas
    START_FUNCTION(Gambit::DarkBit::SimYieldTable)
    BACKEND_REQ(dNdE, (), double, (double,double,int,int))
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY DarkMatter_ID
  START_CAPABILITY
    #define FUNCTION DarkMatter_ID_SingletDM
    START_FUNCTION(DarkMatter_ID_type)
    ALLOW_MODELS(SingletDM)
    #undef FUNCTION
    #define FUNCTION DarkMatter_ID_MSSM25atQ
    START_FUNCTION(DarkMatter_ID_type)
    ALLOW_MODELS(MSSM25atQ)
    #undef FUNCTION
  #undef CAPABILITY

#undef MODULE
#endif /* defined(__DarkBit_rollcall_hpp__) */
