//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module HEColliderBit's 
///  eventLoop functionality. Based heavily on the
///  eventLoopManager example in ExampleBit_A
///
///  \@todo Must merge this with
///           HEColliderBit_rollcall.hpp
///    Once they are both ready.
///
///  \@todo Don't put typedefs or other type
///         definitions in this file; see 
///         Core/include/types_rollcall.hpp for
///         further instructions on how to add new
///         types.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Dec
///  
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2012 Nov 
///  \date 2013 Jan, Feb
///
///  *********************************************


#ifndef __HEColliderBit_eventLoop_hpp__
#define __HEColliderBit_eventLoop_hpp__


#define MODULE HEColliderBit
START_MODULE

  /// Event loop management capabilities
  #define CAPABILITY eventLoopManager
  START_CAPABILITY

    #define FUNCTION manageXsecDependentLoop
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    #undef FUNCTION

    #define FUNCTION manageVanillaLoop
    START_FUNCTION(void, CAN_MANAGE_LOOPS)
    #undef FUNCTION

  #undef CAPABILITY


  /// Event capabilities
  #define CAPABILITY hardScatteringEvent
  START_CAPABILITY

    #define FUNCTION generatePythia8Event
    START_FUNCTION(PythiaEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
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
    START_FUNCTION(StandardEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(hardScatteringEvent, PythiaEvent)
    #undef FUNCTION

    /// Event converters to the standard Gambit collider event format
    #define FUNCTION convertPythia8Event
    START_FUNCTION(StandardEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(hardScatteringEvent, PythiaEvent)
    #undef FUNCTION

  /// For now, let's stick to what we already have running.
  /// \todo Replace BLAH_* with the proper types.  Put those types in the proper place for typedefs.
  /// \todo ... these later:
  /*
    #define FUNCTION convertHerwigEvent
    START_FUNCTION(StandardEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(hardScatteringEvent, BLAH_herwigEvent)
    #undef FUNCTION

    #define FUNCTION convertMadGraphEvent
    START_FUNCTION(StandardEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(hardScatteringEvent, BLAH_madGraphEvent)
    #undef FUNCTION
  */

  /// Currently, it seems that the delphes "backend" we have automatically
  /// converts its own output to our standard event format.
  /*
    #define FUNCTION convertDelphesEvent
    START_FUNCTION(StandardEvent)
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManager)
    DEPENDENCY(detectorReconstructedEvent, BLAH_delphesEvent)
    #undef FUNCTION
  */

  #undef CAPABILITY


  /// Event accumulators
  /// \todo Do we need one of these defined for each analysis??
  #define CAPABILITY analysis_xxx_accumulator
  START_CAPABILITY

    #define FUNCTION analysis_xxx
    START_FUNCTION(double)   /// Could be a scaled number of events, so double
    NEEDS_MANAGER_WITH_CAPABILITY(eventLoopManagement)
    DEPENDENCY(GambitColliderEvent)
    #undef FUNCTION

  #undef CAPABILITY
  /// \todo How many more do we need to define...?
