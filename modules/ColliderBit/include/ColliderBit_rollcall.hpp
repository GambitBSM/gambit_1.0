//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module ColliderBit's
///  eventLoop functionality. Based heavily on the
///  eventLoopManager example in ExampleBit_A
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Dec
//  Aldo Saavedra
//  2014 March 2nd
///
///  *********************************************


#ifndef __ColliderBit_rollcall_hpp__
#define __ColliderBit_rollcall_hpp__

#include <string>
#include "ColliderBit_types.hpp"

#define MODULE ColliderBit
START_MODULE

  /// Capability that holds list of analyses to run
  /// Eventually needs to be configurable from yaml file
  #define CAPABILITY ListOfAnalyses
  START_CAPABILITY
    #define FUNCTION specifyAnalysisList
    START_FUNCTION(AnalysisList)
    #undef FUNCTION
  #undef CAPABILITY

  /// Finalization capabilities
  #define CAPABILITY ScaleFactor
  START_CAPABILITY
    #define FUNCTION getScaleFactor
    START_FUNCTION(double)
    #undef FUNCTION
  #undef CAPABILITY

  /// @todo Aldo's FastSim


  /// Controls initialization and looping of Collider simulations
  #define CAPABILITY ColliderOperator
  START_CAPABILITY
    #define FUNCTION operatePythia
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    #undef FUNCTION
  #undef CAPABILITY


  /// Event capabilities
  /// \todo I had huge problems putting the initialization of this outside the loop.
  /// \todo THEN, I had problems initializing enough Pythia instances inside the
  ///       loop, BUT ONLY ONCE, at the start of the loop.
  /// \todo FINALLY, the Pythia instances were not receiving their init data
  ///       (slhaFilename) so I moved its specification to the yaml file.
  /// \TODO !!!! Do we really want it to be this tricky to configure loops?
  #define CAPABILITY hardScatteringEventList
  START_CAPABILITY
    #define FUNCTION generatePythia8Events
    START_FUNCTION(PythiaEventList)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
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

  #define CAPABILITY GambitColliderEventList
  START_CAPABILITY
    /// Detector simulators which directly produce the standard event format
    #define FUNCTION reconstructDelphesEvents
    START_FUNCTION(HEPSL_EventList)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    /// DEPENDENCY(delphesConfigFilename, std::string)
    /// instead of this dependency, use runOptions->hasKey("delphesConfigFilename")
    /// then adjust the yaml file for each run
    DEPENDENCY(hardScatteringEventList, PythiaEventList)
    #undef FUNCTION

    /// Event converters to the standard Gambit collider event format
    #define FUNCTION convertPythia8Events
    START_FUNCTION(HEPSL_EventList)
    NEEDS_MANAGER_WITH_CAPABILITY(ColliderOperator)
    DEPENDENCY(hardScatteringEventList, PythiaEventList)
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
    DEPENDENCY(GambitColliderEventList, HEPSL_EventList)
    DEPENDENCY(ScaleFactor, double)
    DEPENDENCY(ListOfAnalyses, AnalysisList)
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
    DEPENDENCY(GambitColliderEvent, HEPSL_EventList)
    DEPENDENCY(ScaleFactor, double)
    #undef FUNCTION
    #undef CAPABILITY*/
  /// \todo How many more do we need to define...?

#undef MODULE


#endif /* defined __ColliderBit_rollcall_hpp__ */
