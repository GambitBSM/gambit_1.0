//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module HEColliderBit's 
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


#ifndef __HEColliderBit_rollcall_hpp__
#define __HEColliderBit_rollcall_hpp__

#include <string>

#define MODULE HEColliderBit
START_MODULE

  /// \todo Move the rest of this stuff into proper Gambity initialization function
  //
  /// \todo Assume that spectrum comes from somewhere else...
  /// \note Play with SoftSUSY class loading with Anders
  #define CAPABILITY slhaFileName
  START_CAPABILITY
    #define FUNCTION getslhaFileName
    START_FUNCTION(std::string)
    #undef FUNCTION
  #undef CAPABILITY

  /// \note Leave Delphes hard coded for now.
  #define CAPABILITY delphesConfigFileName
  START_CAPABILITY
    #define FUNCTION getDelphesConfigFileName
    START_FUNCTION(std::string)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY nEvents
  START_CAPABILITY
    #define FUNCTION getNEvents
    START_FUNCTION(int)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY subprocessGroup
  START_CAPABILITY
    #define FUNCTION getSubprocessGroup
    START_FUNCTION(SubprocessGroup)
    #undef FUNCTION
  #undef CAPABILITY


  /// Finalization capabilities
  #define CAPABILITY scaleFactor
  START_CAPABILITY
    #define FUNCTION getScaleFactor
    START_FUNCTION(double)
    #undef FUNCTION
  #undef CAPABILITY


  /// Fully initialized simulation tool capabilities
  /// \todo Backend these properly once the class loader is ready.
  #define CAPABILITY readiedHardScatteringSim
  START_CAPABILITY
    #define FUNCTION readyPythiaBackend
    START_FUNCTION(Pythia8Backend*)
    DEPENDENCY(slhaFileName, std::string)
    DEPENDENCY(subprocessGroup, SubprocessGroup)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY readiedDetectorSim
  START_CAPABILITY
    #define FUNCTION readyDelphesBackend
    START_FUNCTION(Delphes3Backend*)
    DEPENDENCY(delphesConfigFileName, std::string)
    #undef FUNCTION
  #undef CAPABILITY

  /// @todo Aldo's FastSim


  /// Event loop management capabilities
  #define CAPABILITY legacyEventLoopManager
  START_CAPABILITY
    /// \note Got the impression from Andy that the "Vanilla" Loop may be better.
    /// \todo Delete this entire module function if vanilla loops are better.
    #define FUNCTION manageXsecDependentLoop
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY eventLoopManager
  START_CAPABILITY
    #define FUNCTION manageVanillaLoop
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    DEPENDENCY(nEvents, int)
    DEPENDENCY(readiedDetectorSim, Delphes3Backend*)
    #undef FUNCTION
  #undef CAPABILITY


  /// Event capabilities
  #define CAPABILITY hardScatteringEvent
  START_CAPABILITY
    #define FUNCTION generatePythia8Event
    START_FUNCTION(PythiaEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(readiedHardScatteringSim, Pythia8Backend*)
    #undef FUNCTION

  /// For now, let's stick to what we already have running.
  /// \todo Replace BLAH_* with the proper types.  Put those types in the proper place for types / typedefs.
  /// \todo ... these later:
  /*
    #define FUNCTION generateHerwigEvent
    START_FUNCTION(BLAH_herwigEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    #undef FUNCTION

    #define FUNCTION generateMadGraphEvent
    START_FUNCTION(BLAH_madGraphEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
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
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    #undef FUNCTION

  #undef CAPABILITY
*/

  #define CAPABILITY GambitColliderEvent
  START_CAPABILITY
    /// Detector simulators which directly produce the standard event format
    #define FUNCTION reconstructDelphesEvent
    START_FUNCTION(HEP_Simple_Lib::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(readiedDetectorSim, Delphes3Backend*)
    DEPENDENCY(hardScatteringEvent, PythiaEvent)
    #undef FUNCTION

    /// Event converters to the standard Gambit collider event format
    #define FUNCTION convertPythia8Event
    START_FUNCTION(HEP_Simple_Lib::Event)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(hardScatteringEvent, PythiaEvent)
    #undef FUNCTION

  /// For now, let's stick to what we already have running.
  /// \todo Replace BLAH_* with the proper types.  Put those types in the proper place for typedefs.
  /// \todo ... these later:
  /*
    #define FUNCTION convertHerwigEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(hardScatteringEvent, BLAH_herwigEvent)
    #undef FUNCTION

    #define FUNCTION convertMadGraphEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(hardScatteringEvent, BLAH_madGraphEvent)
    #undef FUNCTION
  */

  /// Currently, it seems that the delphes "backend" we have automatically
  /// converts its own output to our standard event format.
  /*
    #define FUNCTION convertDelphesEvent
    START_FUNCTION(Event)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(detectorReconstructedEvent, BLAH_delphesEvent)
    #undef FUNCTION
  */
  #undef CAPABILITY


  /// Event accumulators
  /// \todo Do we need one of these defined for each analysis??
  #define CAPABILITY analysisAccumulator
  START_CAPABILITY
    /// \todo Make a group of analyses rather than a simple counter.
    #define FUNCTION simpleCounter
    START_FUNCTION(double)   /// Could be a scaled number of events, so double
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManagement)
    DEPENDENCY(GambitColliderEvent, HEP_Simple_Lib::Event)
    DEPENDENCY(scaleFactor, double)
    #undef FUNCTION
  #undef CAPABILITY
  /// \todo How many more do we need to define...?

#undef MODULE


#endif /* defined __HEColliderBit_rollcall_hpp__ */
