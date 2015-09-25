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

#include "gambit/Elements/shared_types.hpp"
#include "gambit/ColliderBit/ColliderBit_types.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"



#define MODULE ColliderBit
START_MODULE

  /// Controls looping of Collider simulations
  #define CAPABILITY ColliderOperator
  START_CAPABILITY
    #define FUNCTION operatePythia
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    NEEDS_CLASSES_FROM(Pythia, default)
    // FIXME this should not be needed once the dep resolver orders things correctly.
    MODEL_CONDITIONAL_DEPENDENCY(MSSM_spectrum, const Spectrum*, MSSM78atQ, MSSM78atMGUT) 
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
    MODEL_CONDITIONAL_DEPENDENCY(MSSM_spectrum, const Spectrum*, MSSM78atQ, MSSM78atMGUT) 
    #undef FUNCTION
  #undef CAPABILITY


  /// Detector sim capabilities
  #define CAPABILITY DetectorSim
  START_CAPABILITY
    #define FUNCTION getDelphes
    START_FUNCTION(Gambit::ColliderBit::DelphesVanilla)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SimpleSmearingSim
  START_CAPABILITY
    #define FUNCTION getBuckFast
    START_FUNCTION(Gambit::ColliderBit::BuckFastSmear)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    #undef FUNCTION
  #undef CAPABILITY


  /// Capability that holds list of analyses to run
  /// Eventually needs to be configurable from yaml file
  #define CAPABILITY AnalysisContainer
  START_CAPABILITY
    #define FUNCTION getAnalysisContainer
    START_FUNCTION(HEPUtilsAnalysisContainer)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    #undef FUNCTION
  #undef CAPABILITY


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

  /// Event converters to the standard Gambit collider event format
  #define CAPABILITY ConvertedScatteringEvent
  START_CAPABILITY
    #define FUNCTION convertPythia8PartonEvent
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    DEPENDENCY(HardScatteringEvent, Pythia8::Event)
    #undef FUNCTION

    #define FUNCTION convertPythia8ParticleEvent
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    DEPENDENCY(HardScatteringEvent, Pythia8::Event)
    #undef FUNCTION
  #undef CAPABILITY

/// I still need to see how Aldo's FastSim works... So for now, I'll
/// comment out this entire CAPABILITY.
/*
  #define CAPABILITY detectorReconstructedEvent
  START_CAPABILITY

    /// \todo Replace BLAH_* with the proper types.  Put those types in the proper place for types / typedefs.
    #define FUNCTION reconstructFastSimEvent
    START_FUNCTION(BLAH_AldoDetEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    #undef FUNCTION

  #undef CAPABILITY
*/

  /// Detector simulators which directly produce the standard event format
  #define CAPABILITY ReconstructedEvent
  START_CAPABILITY
    #define FUNCTION reconstructDelphesEvent
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    DEPENDENCY(HardScatteringEvent, Pythia8::Event)
    DEPENDENCY(DetectorSim, Gambit::ColliderBit::DelphesVanilla)
    #undef FUNCTION

    #define FUNCTION reconstructBuckFastEvent
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(ConvertedScatteringEvent, HEPUtils::Event)
    DEPENDENCY(SimpleSmearingSim, Gambit::ColliderBit::BuckFastSmear)
    #undef FUNCTION
  #undef CAPABILITY

  // A capability that calculates the log likelihood
  // Runs all analyses and fills vector of analysis results
  #define CAPABILITY AnalysisNumbers
  START_CAPABILITY
    #define FUNCTION runAnalyses
    START_FUNCTION(ColliderLogLikes) //return type is ColliderLogLikes struct
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(ReconstructedEvent, HEPUtils::Event)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    DEPENDENCY(AnalysisContainer, HEPUtilsAnalysisContainer)
    #undef FUNCTION
  #undef CAPABILITY

  // Calculate the log likelihood from the analysis numbers
  #define CAPABILITY LHC_Combined_LogLike
  START_CAPABILITY
    #define FUNCTION calc_LHC_LogLike
    START_FUNCTION(double)
    DEPENDENCY(AnalysisNumbers, ColliderLogLikes)
    BACKEND_REQ_FROM_GROUP(lnlike_marg_poisson, lnlike_marg_poisson_lognormal_error, (), double, (const int&, const double&, const double&, const double&) )
    BACKEND_REQ_FROM_GROUP(lnlike_marg_poisson, lnlike_marg_poisson_gaussian_error, (), double, (const int&, const double&, const double&, const double&) )
    BACKEND_GROUP(lnlike_marg_poisson)
    #undef FUNCTION
  #undef CAPABILITY

  ///////////// LEP limits ////////////////////////

  // CoM energy 208GeV
  // LEP production cross sections and uncertainties: selectrons
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_selselbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_selselbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_selserbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_selserbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_serserbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_serserbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_serselbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_serselbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP208_xsec_selserbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_se1se1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_se1se1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_se1se2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_se1se2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_se2se2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_se2se2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_se2se1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_se2se1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP208_xsec_se1se2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: smuons
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smulsmulbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smulsmulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smulsmurbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smulsmurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smursmurbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smursmurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smursmulbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smursmulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP208_xsec_smulsmurbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smu1smu1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smu1smu1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smu1smu2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smu1smu2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smu2smu2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smu2smu2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_smu2smu1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_smu2smu1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP208_xsec_smu1smu2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: staus
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_staulstaulbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_staulstaulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_staulstaurbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_staulstaurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_staurstaurbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_staurstaurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_staurstaulbar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_staurstaulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP208_xsec_staulstaurbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_stau1stau1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_stau1stau1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_stau1stau2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_stau1stau2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_stau2stau2bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_stau2stau2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_stau2stau1bar, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_stau2stau1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP208_xsec_stau1stau2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: neutralinos
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_11, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_11, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_12, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_12, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_13, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_13, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_14, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_14, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_22, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_22, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_23, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_23, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_24, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_24, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_33, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_33, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_34, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_34, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chi00_44, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chi00_44, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  // LEP production cross sections and uncertainties: charginos
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chipm_11, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chipm_11, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chipm_12, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chipm_12, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chipm_22, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chipm_22, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP208_xsec_chipm_21, NEW_CAPABILITY, LEP208_SLHA1_convention_xsec_chipm_21, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP208_xsec_chipm_12, triplet<double>)) 

  // CoM energy 205GeV
  // LEP production cross sections and uncertainties: selectrons
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_selselbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_selselbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_selserbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_selserbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_serserbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_serserbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_serselbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_serselbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP205_xsec_selserbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_se1se1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_se1se1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_se1se2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_se1se2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_se2se2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_se2se2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_se2se1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_se2se1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP205_xsec_se1se2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: smuons
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smulsmulbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smulsmulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smulsmurbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smulsmurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smursmurbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smursmurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smursmulbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smursmulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP205_xsec_smulsmurbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smu1smu1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smu1smu1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smu1smu2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smu1smu2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smu2smu2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smu2smu2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_smu2smu1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_smu2smu1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP205_xsec_smu1smu2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: staus
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_staulstaulbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_staulstaulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_staulstaurbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_staulstaurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_staurstaurbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_staurstaurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_staurstaulbar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_staurstaulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP205_xsec_staulstaurbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_stau1stau1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_stau1stau1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_stau1stau2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_stau1stau2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_stau2stau2bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_stau2stau2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_stau2stau1bar, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_stau2stau1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP205_xsec_stau1stau2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: neutralinos
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_11, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_11, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_12, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_12, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_13, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_13, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_14, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_14, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_22, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_22, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_23, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_23, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_24, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_24, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_33, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_33, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_34, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_34, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chi00_44, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chi00_44, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  // LEP production cross sections and uncertainties: charginos
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chipm_11, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chipm_11, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chipm_12, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chipm_12, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chipm_22, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chipm_22, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP205_xsec_chipm_21, NEW_CAPABILITY, LEP205_SLHA1_convention_xsec_chipm_21, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP205_xsec_chipm_12, triplet<double>)) 

  // CoM energy 188GeV
  // LEP production cross sections and uncertainties: selectrons
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_selselbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_selselbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_selserbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_selserbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_serserbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_serserbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_serselbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_serselbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP188_xsec_selserbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_se1se1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_se1se1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_se1se2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_se1se2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_se2se2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_se2se2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_se2se1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_se2se1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP188_xsec_se1se2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: smuons
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smulsmulbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smulsmulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smulsmurbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smulsmurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smursmurbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smursmurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smursmulbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smursmulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP188_xsec_smulsmurbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smu1smu1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smu1smu1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smu1smu2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smu1smu2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smu2smu2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smu2smu2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_smu2smu1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_smu2smu1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP188_xsec_smu1smu2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: staus
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_staulstaulbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_staulstaulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_staulstaurbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_staulstaurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_staurstaurbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_staurstaurbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_staurstaulbar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_staurstaulbar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP188_xsec_staulstaurbar, triplet<double>)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_stau1stau1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_stau1stau1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_stau1stau2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_stau1stau2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_stau2stau2bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_stau2stau2bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_stau2stau1bar, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_stau2stau1bar, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP188_xsec_stau1stau2bar, triplet<double>)) 
  // LEP production cross sections and uncertainties: neutralinos
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_11, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_11, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_12, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_12, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_13, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_13, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_14, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_14, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_22, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_22, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_23, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_23, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_24, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_24, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_33, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_33, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_34, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_34, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chi00_44, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chi00_44, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  // LEP production cross sections and uncertainties: charginos
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chipm_11, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chipm_11, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chipm_12, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chipm_12, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chipm_22, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chipm_22, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (Z_decay_rates, DecayTable::Entry)) 
  QUICK_FUNCTION(ColliderBit, LEP188_xsec_chipm_21, NEW_CAPABILITY, LEP188_SLHA1_convention_xsec_chipm_21, triplet<double>, (MSSM25atQ, MSSM25atMGUT), (LEP188_xsec_chipm_12, triplet<double>)) 

  // LEP Slepton analyses
  // ALEPH
  QUICK_FUNCTION(ColliderBit, ALEPH_Selectron_LLike, NEW_CAPABILITY, ALEPH_Selectron_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_selselbar, triplet<double>), (LEP208_xsec_serserbar, triplet<double>), (selectron_l_decay_rates, DecayTable::Entry), (selectron_r_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, ALEPH_Smuon_LLike, NEW_CAPABILITY, ALEPH_Smuon_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_smulsmulbar, triplet<double>), (LEP208_xsec_smursmurbar, triplet<double>), (smuon_l_decay_rates, DecayTable::Entry), (smuon_r_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, ALEPH_Stau_LLike, NEW_CAPABILITY, ALEPH_Stau_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_stau1stau1bar, triplet<double>), (LEP208_xsec_stau2stau2bar, triplet<double>), (stau_1_decay_rates, DecayTable::Entry), (stau_2_decay_rates, DecayTable::Entry))
  // L3
  QUICK_FUNCTION(ColliderBit, L3_Selectron_LLike, NEW_CAPABILITY, L3_Selectron_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP205_xsec_selselbar, triplet<double>), (LEP205_xsec_serserbar, triplet<double>), (selectron_l_decay_rates, DecayTable::Entry), (selectron_r_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, L3_Smuon_LLike, NEW_CAPABILITY, L3_Smuon_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP205_xsec_smulsmulbar, triplet<double>), (LEP205_xsec_smursmurbar, triplet<double>), (smuon_l_decay_rates, DecayTable::Entry), (smuon_r_decay_rates, DecayTable::Entry))
  QUICK_FUNCTION(ColliderBit, L3_Stau_LLike, NEW_CAPABILITY, L3_Stau_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP205_xsec_stau1stau1bar, triplet<double>), (LEP205_xsec_stau2stau2bar, triplet<double>), (stau_1_decay_rates, DecayTable::Entry), (stau_2_decay_rates, DecayTable::Entry))

  // LEP Gaugino analyses
  // L3 Mass Eigeninos
  QUICK_FUNCTION(ColliderBit, L3_Neutralino_All_Channels_LLike, NEW_CAPABILITY, L3_Neutralino_All_Channels_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP188_xsec_chi00_12, triplet<double>), (LEP188_xsec_chi00_13, triplet<double>), (LEP188_xsec_chi00_14, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, L3_Neutralino_Leptonic_LLike, NEW_CAPABILITY, L3_Neutralino_Leptonic_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP188_xsec_chi00_12, triplet<double>), (LEP188_xsec_chi00_13, triplet<double>), (LEP188_xsec_chi00_14, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, L3_Chargino_All_Channels_LLike, NEW_CAPABILITY, L3_Chargino_All_Channels_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP188_xsec_chipm_11, triplet<double>), (LEP188_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, L3_Chargino_Leptonic_LLike, NEW_CAPABILITY, L3_Chargino_Leptonic_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP188_xsec_chipm_11, triplet<double>), (LEP188_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  // OPAL Mass Eigeninos
  QUICK_FUNCTION(ColliderBit, OPAL_Chargino_Hadronic_LLike, NEW_CAPABILITY, OPAL_Chargino_Hadronic_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_chipm_11, triplet<double>), (LEP208_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, OPAL_Chargino_SemiLeptonic_LLike, NEW_CAPABILITY, OPAL_Chargino_SemiLeptonic_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_chipm_11, triplet<double>), (LEP208_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, OPAL_Chargino_Leptonic_LLike, NEW_CAPABILITY, OPAL_Chargino_Leptonic_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_chipm_11, triplet<double>), (LEP208_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
  QUICK_FUNCTION(ColliderBit, OPAL_Chargino_All_Channels_LLike, NEW_CAPABILITY, OPAL_Chargino_All_Channels_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_chipm_11, triplet<double>), (LEP208_xsec_chipm_22, triplet<double>), (decay_rates, DecayTable))
    // Due to the nature of the analysis details in the OPAL paper, I'm not sure
    // which of the following two limits is appropriate for our use. Thus, I will
    // be conservative and choose only the weaker of the two limits.
  QUICK_FUNCTION(ColliderBit, OPAL_Neutralino_Hadronic_LLike, NEW_CAPABILITY, OPAL_Neutralino_Hadronic_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_chi00_12, triplet<double>), (LEP208_xsec_chi00_13, triplet<double>), (LEP208_xsec_chi00_14, triplet<double>), (decay_rates, DecayTable))
////QUICK_FUNCTION(ColliderBit, OPAL_Neutralino_Hadronic_viaZ_LLike, NEW_CAPABILITY, OPAL_Neutralino_Hadronic_viaZ_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_chi00_12, triplet<double>), (LEP208_xsec_chi00_13, triplet<double>), (LEP208_xsec_chi00_14, triplet<double>), (decay_rates, DecayTable))
  // L3 Small DeltaM Gaugino and Higgsinos
  // FIXME: Ah crap, these limits involve an associated ISR Photon... That's not the xsec Are is calculating...
////QUICK_FUNCTION(ColliderBit, L3_Charged_Gaugino_Small_DeltaM_Heavy_Sneutrino_LLike, NEW_CAPABILITY, L3_Charged_Gaugino_Small_DeltaM_Heavy_Sneutrino_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP188_xsec_chipm_11, triplet<double>), (charginoplus_1_decay_rates, DecayTable::Entry), (W_plus_decay_rates, DecayTable::Entry))
////QUICK_FUNCTION(ColliderBit, L3_Charged_Gaugino_Small_DeltaM_Any_Sneutrino_LLike, NEW_CAPABILITY, L3_Charged_Gaugino_Small_DeltaM_Any_Sneutrino_Conservative_LLike, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP188_xsec_chipm_11, triplet<double>), (charginoplus_1_decay_rates, DecayTable::Entry), (W_plus_decay_rates, DecayTable::Entry))
////QUICK_FUNCTION(ColliderBit, L3_Charged_Higgsino_Small_DeltaM, NEW_CAPABILITY, L3_Charged_Higgsino_Small_DeltaM, double, (MSSM25atQ, MSSM25atMGUT), (MSSM_spectrum, const Spectrum*), (LEP188_xsec_chipm_11, triplet<double>), (charginoplus_1_decay_rates, DecayTable::Entry), (W_plus_decay_rates, DecayTable::Entry))


  ///////////// Higgs physics /////////////////////

  // FeynHiggs Higgs production cross-sections
  #define CAPABILITY FH_HiggsProd            
  START_CAPABILITY
    #define FUNCTION FH_HiggsProd
    START_FUNCTION(fh_HiggsProd)
    DEPENDENCY(Higgs_Couplings, fh_Couplings)
    BACKEND_REQ(FHHiggsProd, (libfeynhiggs), void, (int&, fh_real&, Farray< fh_real,1,52>&))
    BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION
  #undef CAPABILITY

  // HiggsBounds input model parameters
  #define CAPABILITY HB_ModelParameters
  START_CAPABILITY

    // SM Higgs only model parameters
    #define FUNCTION SMHiggs_ModelParameters  
    START_FUNCTION(hb_ModelParameters)
    DEPENDENCY(SM_spectrum, const Spectrum*)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    #undef FUNCTION

    // MSSM Higgs model parameters
    #define FUNCTION MSSMHiggs_ModelParameters
    START_FUNCTION(hb_ModelParameters)
    DEPENDENCY(SMINPUTS, SMInputs)
    DEPENDENCY(MSSM_spectrum, const Spectrum*)
    DEPENDENCY(decay_rates, DecayTable)
    DEPENDENCY(Higgs_Couplings, fh_Couplings) // temporary dependency 
    DEPENDENCY(FH_HiggsProd, fh_HiggsProd) // temporary dependency 
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY 

  // Get a LEP chisq from HiggsBounds
  #define CAPABILITY HB_LEPchisq
  START_CAPABILITY
    #define FUNCTION HB_LEPchisq
    START_FUNCTION(double)
    DEPENDENCY(HB_ModelParameters, hb_ModelParameters)
       BACKEND_REQ(HiggsBounds_neutral_input_part, (libhiggsbounds), void, 
       (double*, double*, int*, double*, double*, double*, Farray<double, 1,3, 1,3>&,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, Farray<double, 1,3, 1,3>&))
       BACKEND_REQ(HiggsBounds_charged_input, (libhiggsbounds), void,
       (double*, double*, double*, double*,
        double*, double*, double*, double*))
       BACKEND_REQ(HiggsBounds_set_mass_uncertainties, (libhiggsbounds), void, (double*, double*))
       BACKEND_REQ(run_HiggsBounds_classic, (libhiggsbounds), void, (double&, int&, double&, int&))            
       BACKEND_REQ(HB_calc_stats, (libhiggsbounds), void, (double&, double&, double&, int&))
       
       BACKEND_OPTION( (HiggsBounds, 4.1), (libhiggsbounds) )
    #undef FUNCTION
  #undef CAPABILITY

  // Get an LHC chisq from HiggsSignals
  #define CAPABILITY HS_LHCchisq
    START_CAPABILITY
      #define FUNCTION HS_LHCchisq
      START_FUNCTION(double)
      DEPENDENCY(HB_ModelParameters, hb_ModelParameters)
         BACKEND_REQ(HiggsBounds_neutral_input_part_HS, (libhiggssignals), void, 
         (double*, double*, int*, double*, double*, double*, Farray<double, 1,3, 1,3>&,
          double*, double*, double*, double*, double*, double*, double*,
          double*, double*, double*, double*, double*, double*, double*,
          double*, double*, double*, double*, double*, double*, double*,
          double*, double*, double*, double*, double*, double*, double*,
          double*, double*, Farray<double, 1,3, 1,3>&))
        BACKEND_REQ(HiggsBounds_charged_input_HS, (libhiggssignals), void,
        (double*, double*, double*, double*,
         double*, double*, double*, double*))
        BACKEND_REQ(run_HiggsSignals, (libhiggssignals), void, (int&, double&, double&, double&, int&, double&))  
        BACKEND_REQ(HiggsSignals_neutral_input_MassUncertainty, (libhiggssignals), void, (double*))
        BACKEND_REQ(setup_rate_uncertainties, (libhiggssignals), void, (double*, double*))
        BACKEND_OPTION( (HiggsSignals, 1.2), (libhiggssignals) )
     #undef FUNCTION
  #undef CAPABILITY


#undef MODULE



#endif /* defined __ColliderBit_rollcall_hpp__ */
