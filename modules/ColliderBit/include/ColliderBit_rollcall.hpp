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

  /// \todo Can fancy class instances like this somehow be specified in yaml?
  #define CAPABILITY subprocessGroup
  START_CAPABILITY
    #define FUNCTION getSubprocessGroup
    START_FUNCTION(SubprocessGroup)
    #undef FUNCTION
  #undef CAPABILITY

  // Capability that holds list of analyses to run
  // Eventually needs to be configurable from yaml file
  #define CAPABILITY ListOfAnalyses
  START_CAPABILITY
    #define FUNCTION specifyAnalysisList
    START_FUNCTION(AnalysisList)
    #undef FUNCTION
  #undef CAPABILITY

  /// Finalization capabilities
  #define CAPABILITY scaleFactor
  START_CAPABILITY
    #define FUNCTION getScaleFactor
    START_FUNCTION(double)
    #undef FUNCTION
  #undef CAPABILITY

  /// @todo Aldo's FastSim


  /// Event loop management capabilities
  #define CAPABILITY legacyColliderLoopManager
  START_CAPABILITY
    /// \note Got the impression from Andy that the "Vanilla" Loop may be better.
    /// \todo Delete this entire module function if vanilla loops are better.
    #define FUNCTION manageXsecDependentLoop
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY colliderLoopManager
  START_CAPABILITY
    #define FUNCTION manageVanillaLoop
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    /// DEPENDENCY(nEvents, int)
    /// instead of this dependency, use runOptions->hasKey("nEvents")
    /// then adjust the yaml file for each run
    #undef FUNCTION
  #undef CAPABILITY


  /// Event capabilities
  /// \todo I had huge problems putting the initialization of this outside the loop.
  /// \todo THEN, I had problems initializing enough Pythia instances inside the
  ///       loop, BUT ONLY ONCE, at the start of the loop.
  /// \todo FINALLY, the Pythia instances were not receiving their init data
  ///       (slhaFilename) so I moved its specification to the yaml file.
  /// \TODO !!!! Do we really want it to be this tricky to configure loops?
  #define CAPABILITY hardScatteringEvent
  START_CAPABILITY
    #define FUNCTION generatePythia8Event
    START_FUNCTION(Pythia8::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    /// DEPENDENCY(slhaFilename, std::string)
    /// instead of this dependency, use runOptions->hasKey("slhaFilename")
    /// then adjust the yaml file for each run
    DEPENDENCY(subprocessGroup, SubprocessGroup)
    #undef FUNCTION

  /// For now, let's stick to what we already have running.
  /// \todo Replace BLAH_* with the proper types.  Put those types in the proper place for types / typedefs.
  /// \todo ... these later:
  /*
    #define FUNCTION generateHerwigEvent
    START_FUNCTION(BLAH_herwigEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    #undef FUNCTION

    #define FUNCTION generateMadGraphEvent
    START_FUNCTION(BLAH_madGraphEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
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
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    #undef FUNCTION

  #undef CAPABILITY
*/

  #define CAPABILITY GambitColliderEvent
  START_CAPABILITY
    /// Detector simulators which directly produce the standard event format
    #define FUNCTION reconstructDelphesEvent
    START_FUNCTION(HEP_Simple_Lib::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    /// DEPENDENCY(delphesConfigFilename, std::string)
    /// instead of this dependency, use runOptions->hasKey("delphesConfigFilename")
    /// then adjust the yaml file for each run
    DEPENDENCY(hardScatteringEvent, Pythia8::Event)
    #undef FUNCTION

    /// Event converters to the standard Gambit collider event format
    #define FUNCTION convertPythia8Event
    START_FUNCTION(HEP_Simple_Lib::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    DEPENDENCY(hardScatteringEvent, Pythia8::Event)
    #undef FUNCTION

  /// For now, let's stick to what we already have running.
  /// \todo Replace BLAH_* with the proper types.  Put those types in the proper place for typedefs.
  /// \todo ... these later:
  /*
    #define FUNCTION convertHerwigEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    DEPENDENCY(hardScatteringEvent, BLAH_herwigEvent)
    #undef FUNCTION

    #define FUNCTION convertMadGraphEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    DEPENDENCY(hardScatteringEvent, BLAH_madGraphEvent)
    #undef FUNCTION
  */

  /// Currently, it seems that the delphes "backend" we have automatically
  /// converts its own output to our standard event format.
  /*
    #define FUNCTION convertDelphesEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    DEPENDENCY(detectorReconstructedEvent, BLAH_delphesEvent)
    #undef FUNCTION
  */
  #undef CAPABILITY

  // A capability that calculates the log likelihood
  // Runs all analyses and selects the best SR
  #define CAPABILITY ColliderLogLikelihood
  START_CAPABILITY
    #define FUNCTION getLogLike
    START_FUNCTION(double) //return type is colliderLogLikes struct
    ALLOW_MODELS(NormalDist)
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    DEPENDENCY(GambitColliderEvent, HEP_Simple_Lib::Event)
    DEPENDENCY(scaleFactor, double)
    DEPENDENCY(ListOfAnalyses, AnalysisList)
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
    NEEDS_MANAGER_WITH_CAPABILITY(colliderLoopManager)
    DEPENDENCY(GambitColliderEvent, HEP_Simple_Lib::Event)
    DEPENDENCY(scaleFactor, double)
    #undef FUNCTION
    #undef CAPABILITY*/
  /// \todo How many more do we need to define...?

#undef MODULE


#endif /* defined __ColliderBit_rollcall_hpp__ */
