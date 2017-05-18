//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for ColliderBit module.
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
///  \author Christopher Rogan
///          (christophersrogan@gmail.com)
///  \date 2015 Apr
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
///
///  *********************************************

#ifndef __ColliderBit_rollcall_hpp__
#define __ColliderBit_rollcall_hpp__

#include <string>

#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Elements/shared_types.hpp"
#include "gambit/ColliderBit/ColliderBit_types.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"



#define MODULE ColliderBit
START_MODULE

  #include "ColliderBit_Higgs_rollcall.hpp"

  /// Controls looping of Collider simulations
  #define CAPABILITY ColliderOperator
  START_CAPABILITY
    #define FUNCTION operateLHCLoop
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    #undef FUNCTION
  #undef CAPABILITY


  /// Collider sim capabilities
  #define CAPABILITY HardScatteringSim
  START_CAPABILITY
    #define FUNCTION getPythia
    START_FUNCTION(Gambit::ColliderBit::SpecializablePythia)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    DEPENDENCY(decay_rates, DecayTable)
    MODEL_CONDITIONAL_DEPENDENCY(MSSM_spectrum, Spectrum, MSSM63atQ, MSSM63atMGUT)
    #undef FUNCTION

    #define FUNCTION getPythiaFileReader
    START_FUNCTION(Gambit::ColliderBit::SpecializablePythia)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    #undef FUNCTION
  #undef CAPABILITY


  /// Detector sim capabilities
  #ifndef EXCLUDE_DELPHES
    #define CAPABILITY DetectorSim
    START_CAPABILITY
      #define FUNCTION getDelphes
      START_FUNCTION(Gambit::ColliderBit::DelphesVanilla)
      NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
      NEEDS_CLASSES_FROM(Pythia, default)
      #undef FUNCTION
    #undef CAPABILITY
  #endif

  #define CAPABILITY SimpleSmearingSim
  START_CAPABILITY
    #define FUNCTION getBuckFastATLAS
    START_FUNCTION(Gambit::ColliderBit::BuckFastSmearATLAS)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    #undef FUNCTION

    #define FUNCTION getBuckFastCMS
    START_FUNCTION(Gambit::ColliderBit::BuckFastSmearCMS)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    #undef FUNCTION

    #define FUNCTION getBuckFastIdentity
    START_FUNCTION(Gambit::ColliderBit::BuckFastIdentity)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    #undef FUNCTION
  #undef CAPABILITY


  /// Capability that holds list of analyses to run
  /// Eventually needs to be configurable from yaml file
  #define CAPABILITY ATLASAnalysisContainer
  START_CAPABILITY
    #define FUNCTION getATLASAnalysisContainer
    START_FUNCTION(HEPUtilsAnalysisContainer)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY CMSAnalysisContainer
  START_CAPABILITY
    #define FUNCTION getCMSAnalysisContainer
    START_FUNCTION(HEPUtilsAnalysisContainer)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    #undef FUNCTION
  #undef CAPABILITY

 #define CAPABILITY IdentityAnalysisContainer
  START_CAPABILITY
    #define FUNCTION getIdentityAnalysisContainer
    START_FUNCTION(HEPUtilsAnalysisContainer)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    #undef FUNCTION
  #undef CAPABILITY

#ifndef EXCLUDE_DELPHES
  #define CAPABILITY DetAnalysisContainer
  START_CAPABILITY
    #define FUNCTION getDetAnalysisContainer
    START_FUNCTION(HEPUtilsAnalysisContainer)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    #undef FUNCTION
  #undef CAPABILITY
#endif // not defined EXCLUDE_DELPHES

  /// Event capabilities
  #define CAPABILITY HardScatteringEvent
  START_CAPABILITY
    #define FUNCTION generatePythia8Event
    START_FUNCTION(Pythia8::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    #undef FUNCTION
  #undef CAPABILITY

  /// Detector simulators that directly produce the standard event format
  #ifndef EXCLUDE_DELPHES
    #define CAPABILITY ReconstructedEvent
    START_CAPABILITY
      #define FUNCTION reconstructDelphesEvent
      START_FUNCTION(HEPUtils::Event)
      NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
      NEEDS_CLASSES_FROM(Pythia, default)
      DEPENDENCY(HardScatteringEvent, Pythia8::Event)
      DEPENDENCY(DetectorSim, Gambit::ColliderBit::DelphesVanilla)
      #undef FUNCTION
    #undef CAPABILITY
  #endif

  #define CAPABILITY ATLASSmearedEvent
  START_CAPABILITY
    #define FUNCTION smearEventATLAS
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(HardScatteringEvent, Pythia8::Event)
    DEPENDENCY(SimpleSmearingSim, Gambit::ColliderBit::BuckFastSmearATLAS)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY CMSSmearedEvent
  START_CAPABILITY
    #define FUNCTION smearEventCMS
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(HardScatteringEvent, Pythia8::Event)
    DEPENDENCY(SimpleSmearingSim, Gambit::ColliderBit::BuckFastSmearCMS)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY CopiedEvent
  START_CAPABILITY
    #define FUNCTION copyEvent
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(HardScatteringEvent, Pythia8::Event)
    DEPENDENCY(SimpleSmearingSim, Gambit::ColliderBit::BuckFastIdentity)
    #undef FUNCTION
  #undef CAPABILITY

  // A capability that calculates the log likelihood
  // Runs all analyses and fills vector of analysis results
#ifndef EXCLUDE_DELPHES
  #define CAPABILITY DetAnalysisNumbers
  START_CAPABILITY
    #define FUNCTION runDetAnalyses
    START_FUNCTION(AnalysisNumbers)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(ReconstructedEvent, HEPUtils::Event)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    DEPENDENCY(DetAnalysisContainer, HEPUtilsAnalysisContainer)
    #undef FUNCTION
  #undef CAPABILITY
#endif // not defined EXCLUDE_DELPHES

  #define CAPABILITY ATLASAnalysisNumbers
  START_CAPABILITY
    #define FUNCTION runATLASAnalyses
    START_FUNCTION(AnalysisNumbers)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(ATLASSmearedEvent, HEPUtils::Event)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    DEPENDENCY(ATLASAnalysisContainer, HEPUtilsAnalysisContainer)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY CMSAnalysisNumbers
  START_CAPABILITY
    #define FUNCTION runCMSAnalyses
    START_FUNCTION(AnalysisNumbers)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(CMSSmearedEvent, HEPUtils::Event)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    DEPENDENCY(CMSAnalysisContainer, HEPUtilsAnalysisContainer)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY IdentityAnalysisNumbers
  START_CAPABILITY
    #define FUNCTION runIdentityAnalyses
    START_FUNCTION(AnalysisNumbers)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(CopiedEvent, HEPUtils::Event)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    DEPENDENCY(IdentityAnalysisContainer, HEPUtilsAnalysisContainer)
    #undef FUNCTION
  #undef CAPABILITY

  // Calculate the log likelihood from the analysis numbers
  #define CAPABILITY LHC_Combined_LogLike
  START_CAPABILITY
    #define FUNCTION calc_LHC_LogLike
    START_FUNCTION(double)
    DEPENDENCY(ATLASAnalysisNumbers, AnalysisNumbers)
    DEPENDENCY(CMSAnalysisNumbers, AnalysisNumbers)
    DEPENDENCY(IdentityAnalysisNumbers, AnalysisNumbers)
#ifndef EXCLUDE_DELPHES
    DEPENDENCY(DetAnalysisNumbers, AnalysisNumbers)
#endif // not defined EXCLUDE_DELPHES
    BACKEND_REQ_FROM_GROUP(lnlike_marg_poisson, lnlike_marg_poisson_lognormal_error, (), double, (const int&, const double&, const double&, const double&) )
    BACKEND_REQ_FROM_GROUP(lnlike_marg_poisson, lnlike_marg_poisson_gaussian_error, (), double, (const int&, const double&, const double&, const double&) )
    BACKEND_GROUP(lnlike_marg_poisson)
    #undef FUNCTION
  #undef CAPABILITY

  ///////////// LEP limits ////////////////////////

  // CoM energy 208GeV
  // LEP production cross sections and uncertainties: selectrons
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_selselbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_selselbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_selserbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_selserbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_serserbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_serserbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_serselbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_serselbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP208_xsec_selserbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_se1se1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_se1se1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_se1se2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_se1se2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_se2se2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_se2se2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_se2se1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_se2se1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP208_xsec_se1se2bar, triplet<double>))
  // LEP production cross sections and uncertainties: smuons
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smulsmulbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smulsmulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smulsmurbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smulsmurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smursmurbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smursmurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smursmulbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smursmulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP208_xsec_smulsmurbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smu1smu1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smu1smu1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smu1smu2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smu1smu2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smu2smu2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smu2smu2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smu2smu1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smu2smu1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP208_xsec_smu1smu2bar, triplet<double>))
  // LEP production cross sections and uncertainties: staus
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_staulstaulbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_staulstaulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_staulstaurbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_staulstaurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_staurstaurbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_staurstaurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_staurstaulbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_staurstaulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP208_xsec_staulstaurbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_stau1stau1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_stau1stau1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_stau1stau2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_stau1stau2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_stau2stau2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_stau2stau2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_stau2stau1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_stau2stau1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP208_xsec_stau1stau2bar, triplet<double>))
  // LEP production cross sections and uncertainties: neutralinos
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_11, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_11, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_12, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_12, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_13, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_13, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_14, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_14, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_22, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_22, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_23, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_23, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_24, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_24, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_33, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_33, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_34, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_34, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_44, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_44, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  // LEP production cross sections and uncertainties: charginos
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chipm_11, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chipm_11, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chipm_12, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chipm_12, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chipm_22, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chipm_22, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chipm_21, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chipm_21, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP208_xsec_chipm_12, triplet<double>))

  // CoM energy 205GeV
  // LEP production cross sections and uncertainties: selectrons
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_selselbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_selselbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_selserbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_selserbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_serserbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_serserbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_serselbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_serselbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP205_xsec_selserbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_se1se1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_se1se1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_se1se2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_se1se2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_se2se2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_se2se2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_se2se1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_se2se1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP205_xsec_se1se2bar, triplet<double>))
  // LEP production cross sections and uncertainties: smuons
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smulsmulbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smulsmulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smulsmurbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smulsmurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smursmurbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smursmurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smursmulbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smursmulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP205_xsec_smulsmurbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smu1smu1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smu1smu1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smu1smu2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smu1smu2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smu2smu2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smu2smu2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smu2smu1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smu2smu1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP205_xsec_smu1smu2bar, triplet<double>))
  // LEP production cross sections and uncertainties: staus
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_staulstaulbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_staulstaulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_staulstaurbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_staulstaurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_staurstaurbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_staurstaurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_staurstaulbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_staurstaulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP205_xsec_staulstaurbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_stau1stau1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_stau1stau1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_stau1stau2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_stau1stau2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_stau2stau2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_stau2stau2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_stau2stau1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_stau2stau1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP205_xsec_stau1stau2bar, triplet<double>))
  // LEP production cross sections and uncertainties: neutralinos
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_11, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_11, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_12, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_12, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_13, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_13, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_14, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_14, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_22, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_22, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_23, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_23, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_24, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_24, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_33, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_33, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_34, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_34, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_44, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_44, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  // LEP production cross sections and uncertainties: charginos
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chipm_11, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chipm_11, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chipm_12, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chipm_12, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chipm_22, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chipm_22, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chipm_21, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chipm_21, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP205_xsec_chipm_12, triplet<double>))

  // CoM energy 188GeV
  // LEP production cross sections and uncertainties: selectrons
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_selselbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_selselbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_selserbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_selserbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_serserbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_serserbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_serselbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_serselbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP188_xsec_selserbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_se1se1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_se1se1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_se1se2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_se1se2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_se2se2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_se2se2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_se2se1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_se2se1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP188_xsec_se1se2bar, triplet<double>))
  // LEP production cross sections and uncertainties: smuons
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smulsmulbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smulsmulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smulsmurbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smulsmurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smursmurbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smursmurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smursmulbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smursmulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP188_xsec_smulsmurbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smu1smu1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smu1smu1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smu1smu2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smu1smu2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smu2smu2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smu2smu2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smu2smu1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smu2smu1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP188_xsec_smu1smu2bar, triplet<double>))
  // LEP production cross sections and uncertainties: staus
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_staulstaulbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_staulstaulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_staulstaurbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_staulstaurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_staurstaurbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_staurstaurbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_staurstaulbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_staurstaulbar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP188_xsec_staulstaurbar, triplet<double>))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_stau1stau1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_stau1stau1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_stau1stau2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_stau1stau2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_stau2stau2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_stau2stau2bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_stau2stau1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_stau2stau1bar, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP188_xsec_stau1stau2bar, triplet<double>))
  // LEP production cross sections and uncertainties: neutralinos
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_11, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_11, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_12, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_12, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_13, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_13, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_14, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_14, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_22, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_22, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_23, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_23, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_24, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_24, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_33, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_33, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_34, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_34, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_44, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_44, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  // LEP production cross sections and uncertainties: charginos
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chipm_11, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chipm_11, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chipm_12, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chipm_12, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chipm_22, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chipm_22, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (Z_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chipm_21, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chipm_21, triplet<double>, (MSSM30atQ, MSSM30atMGUT, NUHM2), (LEP188_xsec_chipm_12, triplet<double>))

  // LEP Slepton analyses
  // ALEPH
  QUICK_FUNCTION(ColliderBit, ALEPH_Selectron_LLike, NEW_CAPABILITY, ALEPH_Selectron_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_selselbar, triplet<double>), (LEP208_xsec_serserbar, triplet<double>), (selectron_l_decay_rates, DecayTable::Entry), (selectron_r_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, ALEPH_Smuon_LLike, NEW_CAPABILITY, ALEPH_Smuon_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_smulsmulbar, triplet<double>), (LEP208_xsec_smursmurbar, triplet<double>), (smuon_l_decay_rates, DecayTable::Entry), (smuon_r_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, ALEPH_Stau_LLike, NEW_CAPABILITY, ALEPH_Stau_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_stau1stau1bar, triplet<double>), (LEP208_xsec_stau2stau2bar, triplet<double>), (stau_1_decay_rates, DecayTable::Entry), (stau_2_decay_rates, DecayTable::Entry))
  // L3
  QUICK_FUNCTION(ColliderBit, L3_Selectron_LLike, NEW_CAPABILITY, L3_Selectron_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP205_xsec_selselbar, triplet<double>), (LEP205_xsec_serserbar, triplet<double>), (selectron_l_decay_rates, DecayTable::Entry), (selectron_r_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, L3_Smuon_LLike, NEW_CAPABILITY, L3_Smuon_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP205_xsec_smulsmulbar, triplet<double>), (LEP205_xsec_smursmurbar, triplet<double>), (smuon_l_decay_rates, DecayTable::Entry), (smuon_r_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, L3_Stau_LLike, NEW_CAPABILITY, L3_Stau_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP205_xsec_stau1stau1bar, triplet<double>), (LEP205_xsec_stau2stau2bar, triplet<double>), (stau_1_decay_rates, DecayTable::Entry), (stau_2_decay_rates, DecayTable::Entry))

  // LEP Gaugino analyses
  // L3 Mass Eigeninos
  QUICK_FUNCTION(ColliderBit, L3_Neutralino_All_Channels_LLike, NEW_CAPABILITY, L3_Neutralino_All_Channels_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP188_xsec_chi00_12, triplet<double>), (LEP188_xsec_chi00_13, triplet<double>), (LEP188_xsec_chi00_14, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, L3_Neutralino_Leptonic_LLike, NEW_CAPABILITY, L3_Neutralino_Leptonic_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP188_xsec_chi00_12, triplet<double>), (LEP188_xsec_chi00_13, triplet<double>), (LEP188_xsec_chi00_14, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, L3_Chargino_All_Channels_LLike, NEW_CAPABILITY, L3_Chargino_All_Channels_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP188_xsec_chipm_11, triplet<double>), (LEP188_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, L3_Chargino_Leptonic_LLike, NEW_CAPABILITY, L3_Chargino_Leptonic_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP188_xsec_chipm_11, triplet<double>), (LEP188_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  // OPAL Mass Eigeninos
  QUICK_FUNCTION(ColliderBit, OPAL_Chargino_Hadronic_LLike, NEW_CAPABILITY, OPAL_Chargino_Hadronic_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_chipm_11, triplet<double>), (LEP208_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, OPAL_Chargino_SemiLeptonic_LLike, NEW_CAPABILITY, OPAL_Chargino_SemiLeptonic_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_chipm_11, triplet<double>), (LEP208_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, OPAL_Chargino_Leptonic_LLike, NEW_CAPABILITY, OPAL_Chargino_Leptonic_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_chipm_11, triplet<double>), (LEP208_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, OPAL_Chargino_All_Channels_LLike, NEW_CAPABILITY, OPAL_Chargino_All_Channels_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_chipm_11, triplet<double>), (LEP208_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  // Due to the nature of the analysis details in the OPAL paper, we can't tell
  // which of the following two limits is appropriate for our use. Thus, we will
  // be conservative and choose only the weaker of the two limits.
  QUICK_FUNCTION(ColliderBit, OPAL_Neutralino_Hadronic_LLike, NEW_CAPABILITY, OPAL_Neutralino_Hadronic_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_chi00_12, triplet<double>), (LEP208_xsec_chi00_13, triplet<double>), (LEP208_xsec_chi00_14, triplet<double>), (decay_rates, DecayTable))
  //QUICK_FUNCTION(ColliderBit, OPAL_Neutralino_Hadronic_viaZ_LLike, NEW_CAPABILITY, OPAL_Neutralino_Hadronic_viaZ_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP208_xsec_chi00_12, triplet<double>), (LEP208_xsec_chi00_13, triplet<double>), (LEP208_xsec_chi00_14, triplet<double>), (decay_rates, DecayTable))
  // L3 Small DeltaM Gaugino and Higgsinos involve an associated ISR photon, which we don't have a cross-section calculation for.
  //QUICK_FUNCTION(ColliderBit, L3_Charged_Gaugino_Small_DeltaM_Heavy_Sneutrino_LLike, NEW_CAPABILITY, L3_Charged_Gaugino_Small_DeltaM_Heavy_Sneutrino_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP188_xsec_chipm_11, triplet<double>), (charginoplus_1_decay_rates, DecayTable::Entry), (W_plus_decay_rates, DecayTable::Entry))
  //QUICK_FUNCTION(ColliderBit, L3_Charged_Gaugino_Small_DeltaM_Any_Sneutrino_LLike, NEW_CAPABILITY, L3_Charged_Gaugino_Small_DeltaM_Any_Sneutrino_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP188_xsec_chipm_11, triplet<double>), (charginoplus_1_decay_rates, DecayTable::Entry), (W_plus_decay_rates, DecayTable::Entry))
  //QUICK_FUNCTION(ColliderBit, L3_Charged_Higgsino_Small_DeltaM, NEW_CAPABILITY, L3_Charged_Higgsino_Small_DeltaM, double, (MSSM30atQ, MSSM30atMGUT, NUHM2), (MSSM_spectrum, Spectrum), (LEP188_xsec_chipm_11, triplet<double>), (charginoplus_1_decay_rates, DecayTable::Entry), (W_plus_decay_rates, DecayTable::Entry))



  // Dummy observable that creates a dependency on TestModel1D, which is used to satisfy the normal
  // GAMBIT model requrements in a minimal way. This is useful in the case where we just want to test
  // ColliderBit on a single point with Pythia's SLHA interface, but not use the ColliderBit standalone
  // interface.
  #define CAPABILITY DummyColliderObservable
  START_CAPABILITY
    #define FUNCTION getDummyColliderObservable
      START_FUNCTION(double)
      ALLOW_MODELS(TestModel1D)
    #undef FUNCTION
  #undef CAPABILITY


#undef MODULE


#endif /* defined __ColliderBit_rollcall_hpp__ */
