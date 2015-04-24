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
///  \author Aldo Saavedra
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
    #undef FUNCTION
  #undef CAPABILITY


  /// Collider sim capabilities
  #define CAPABILITY HardScatteringSim
  START_CAPABILITY
    #define FUNCTION getPythia
    START_FUNCTION(Gambit::ColliderBit::SpecializablePythia)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    #undef FUNCTION
  #undef CAPABILITY


  /// Detector sim capabilities
  #define CAPABILITY DetectorSim
  START_CAPABILITY
    #define FUNCTION getDelphes
    START_FUNCTION(Gambit::ColliderBit::DelphesBase*)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SimpleSmearingSim
  START_CAPABILITY
    #define FUNCTION getBuckFast
    START_FUNCTION(Gambit::ColliderBit::BuckFastBase*)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    #undef FUNCTION
  #undef CAPABILITY


  /// Capability that holds list of analyses to run
  /// Eventually needs to be configurable from yaml file
  #define CAPABILITY ListOfAnalyses
  START_CAPABILITY
    #define FUNCTION specifyAnalysisPointerVector
    START_FUNCTION(std::vector<Gambit::ColliderBit::HEPUtilsAnalysis*>)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
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
  /// For now, let's stick to what we already have running.
  /// \todo Replace BLAH_* with the proper types.  Put those types in the proper place for types / typedefs.
  /// \todo ... these later:
  /*
    #define FUNCTION generateHerwigEvent
    START_FUNCTION(BLAH_herwigEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    #undef FUNCTION

    #define FUNCTION generateMadGraphEvent
    START_FUNCTION(BLAH_madGraphEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    #undef FUNCTION
  */
  #undef CAPABILITY

  #define CAPABILITY ConvertedScatteringEvent
  START_CAPABILITY
    /// Event converters to the standard Gambit collider event format
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

  #define CAPABILITY ReconstructedEvent
  START_CAPABILITY
    /// Detector simulators which directly produce the standard event format
    #define FUNCTION reconstructDelphesEvent
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    NEEDS_CLASSES_FROM(Pythia, default)
    DEPENDENCY(HardScatteringEvent, Pythia8::Event)
    DEPENDENCY(DetectorSim, Gambit::ColliderBit::DelphesBase*)
    #undef FUNCTION

    #define FUNCTION reconstructBuckFastEvent
    START_FUNCTION(HEPUtils::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(ConvertedScatteringEvent, HEPUtils::Event)
    DEPENDENCY(SimpleSmearingSim, Gambit::ColliderBit::BuckFastBase*)
    #undef FUNCTION
  /// For now, let's stick to what we already have running.
  /// \todo Replace BLAH_* with the proper types.  Put those types in the proper place for typedefs.
  /// \todo ... these later:
  /*
    #define FUNCTION convertHerwigEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(hardScatteringEvent, BLAH_herwigEvent)
    #undef FUNCTION

    #define FUNCTION convertMadGraphEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(hardScatteringEvent, BLAH_madGraphEvent)
    #undef FUNCTION
  */

  /// Currently, it seems that the delphes "backend" we have automatically
  /// converts its own output to our standard event format.
  /*
    #define FUNCTION convertDelphesEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(detectorReconstructedEvent, BLAH_delphesEvent)
    #undef FUNCTION
  */
  #undef CAPABILITY

  // A capability that calculates the log likelihood
  // Runs all analyses and fills vector of analysis results
  #define CAPABILITY AnalysisNumbers
  START_CAPABILITY
    #define FUNCTION runAnalyses
    START_FUNCTION(ColliderLogLikes) //return type is ColliderLogLikes struct
    ALLOW_MODELS(NormalDist)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(ReconstructedEvent, HEPUtils::Event)
    DEPENDENCY(HardScatteringSim, Gambit::ColliderBit::SpecializablePythia)
    DEPENDENCY(ListOfAnalyses, std::vector<Gambit::ColliderBit::HEPUtilsAnalysis*>)
    //BACKEND_REQ_FROM_GROUP(lnlike_marg_poisson, lnlike_marg_poisson_lognormal_error, (), double, (int&, double&, double&, double&) )
    //BACKEND_REQ_FROM_GROUP(lnlike_marg_poisson, lnlike_marg_poisson_gaussian_error, (), double, (int&, double&, double&, double&) )
    //BACKEND_GROUP(lnlike_marg_poisson)
    #undef FUNCTION
  #undef CAPABILITY

  //Calculate the log likelihood from the analysis numbers
  #define CAPABILITY LogLikelihood
  START_CAPABILITY
    #define FUNCTION calcLogLike
    START_FUNCTION(double)
    ALLOW_MODELS(NormalDist)
    DEPENDENCY(AnalysisNumbers, ColliderLogLikes)
    BACKEND_REQ_FROM_GROUP(lnlike_marg_poisson, lnlike_marg_poisson_lognormal_error, (), double, (int&, double&, double&, double&) )
    BACKEND_REQ_FROM_GROUP(lnlike_marg_poisson, lnlike_marg_poisson_gaussian_error, (), double, (int&, double&, double&, double&) )
    BACKEND_GROUP(lnlike_marg_poisson)
    #undef FUNCTION
  #undef CAPABILITY

  /// Event accumulators
  /// \todo Do we need one of these defined for each analysis??
/*#define CAPABILITY analysisAccumulator
  START_CAPABILITY
    /// \todo Make a group of analyses rather than a simple counter.
    #define FUNCTION simpleCounter
    START_FUNCTION(double)   /// Could be a scaled number of events, so double
    ALLOW_MODELS(NormalDist)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(ReconstructedEvent, HEPUtils::Event)
    #undef FUNCTION
    #undef CAPABILITY*/
  /// \todo How many more do we need to define...?

#undef MODULE


#endif /* defined __ColliderBit_rollcall_hpp__ */
