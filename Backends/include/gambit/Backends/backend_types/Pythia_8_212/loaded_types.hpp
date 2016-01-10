#ifndef __loaded_types_Pythia_8_212_hpp__
#define __loaded_types_Pythia_8_212_hpp__ 1

#include "wrapper_Pythia.h"
#include "wrapper_PartonLevel.h"
#include "wrapper_ResonanceDecays.h"
#include "wrapper_ParticleDecays.h"
#include "wrapper_SLHAinterface.h"
#include "wrapper_ParticleData.h"
#include "wrapper_CoupSUSY.h"
#include "wrapper_LHdecayChannel.h"
#include "wrapper_LHdecayTable.h"
#include "wrapper_SusyLesHouches.h"
#include "wrapper_SigmaTotal.h"
#include "wrapper_DecayChannel.h"
#include "wrapper_ParticleDataEntry.h"
#include "wrapper_Couplings.h"
#include "wrapper_ResonanceGmZ.h"
#include "wrapper_BeamParticle.h"
#include "wrapper_SlowJet.h"
#include "wrapper_Event.h"
#include "wrapper_Particle.h"
#include "wrapper_AlphaStrong.h"
#include "wrapper_AlphaEM.h"
#include "wrapper_CoupSM.h"
#include "wrapper_Parm.h"
#include "wrapper_Settings.h"
#include "wrapper_Info.h"
#include "wrapper_Rndm.h"
#include "wrapper_Vec4.h"
#include "wrapper_Hist.h"
#include "identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define Pythia_8_212_all_data \
  (( /*class*/(Pythia8)(Pythia),    /*constructors*/(("Factory_Pythia_0",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool))) (("Factory_Pythia_1",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_Pythia_2",())) (("Factory_Pythia_3",(my_ns::Pythia8::ParticleData&, my_ns::Pythia8::Settings&, bool))) (("Factory_Pythia_4",(my_ns::Pythia8::ParticleData&, my_ns::Pythia8::Settings&))) )) \
  (( /*class*/(Pythia8)(PartonLevel),    /*constructors*/(("Factory_PartonLevel_0",())) )) \
  (( /*class*/(Pythia8)(ResonanceDecays),    /*constructors*/(("Factory_ResonanceDecays_0",())) )) \
  (( /*class*/(Pythia8)(ParticleDecays),    /*constructors*/(("Factory_ParticleDecays_0",())) )) \
  (( /*class*/(Pythia8)(SLHAinterface),    /*constructors*/(("Factory_SLHAinterface_0",())) )) \
  (( /*class*/(Pythia8)(ParticleData),    /*constructors*/(("Factory_ParticleData_0",())) )) \
  (( /*class*/(Pythia8)(CoupSUSY),    /*constructors*/(("Factory_CoupSUSY_0",())) )) \
  (( /*class*/(Pythia8)(LHdecayChannel),    /*constructors*/(("Factory_LHdecayChannel_0",())) (("Factory_LHdecayChannel_1",(double, int, ::std::vector<int, std::allocator<int> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_LHdecayChannel_2",(double, int, ::std::vector<int, std::allocator<int> >))) )) \
  (( /*class*/(Pythia8)(LHdecayTable),    /*constructors*/(("Factory_LHdecayTable_0",())) (("Factory_LHdecayTable_1",(int))) (("Factory_LHdecayTable_2",(int, double))) )) \
  (( /*class*/(Pythia8)(SusyLesHouches),    /*constructors*/(("Factory_SusyLesHouches_0",(int))) (("Factory_SusyLesHouches_1",())) (("Factory_SusyLesHouches_2",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int))) (("Factory_SusyLesHouches_3",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) )) \
  (( /*class*/(Pythia8)(SigmaTotal),    /*constructors*/(("Factory_SigmaTotal_0",())) )) \
  (( /*class*/(Pythia8)(DecayChannel),    /*constructors*/(("Factory_DecayChannel_0",(int, double, int, int, int, int, int, int, int, int, int))) (("Factory_DecayChannel_1",(int, double, int, int, int, int, int, int, int, int))) (("Factory_DecayChannel_2",(int, double, int, int, int, int, int, int, int))) (("Factory_DecayChannel_3",(int, double, int, int, int, int, int, int))) (("Factory_DecayChannel_4",(int, double, int, int, int, int, int))) (("Factory_DecayChannel_5",(int, double, int, int, int, int))) (("Factory_DecayChannel_6",(int, double, int, int, int))) (("Factory_DecayChannel_7",(int, double, int, int))) (("Factory_DecayChannel_8",(int, double, int))) (("Factory_DecayChannel_9",(int, double))) (("Factory_DecayChannel_10",(int))) (("Factory_DecayChannel_11",())) )) \
  (( /*class*/(Pythia8)(ParticleDataEntry),    /*constructors*/(("Factory_ParticleDataEntry_0",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double, double, double))) (("Factory_ParticleDataEntry_1",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double, double))) (("Factory_ParticleDataEntry_2",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double))) (("Factory_ParticleDataEntry_3",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double))) (("Factory_ParticleDataEntry_4",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double))) (("Factory_ParticleDataEntry_5",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int))) (("Factory_ParticleDataEntry_6",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int))) (("Factory_ParticleDataEntry_7",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int))) (("Factory_ParticleDataEntry_8",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_ParticleDataEntry_9",(int))) (("Factory_ParticleDataEntry_10",())) (("Factory_ParticleDataEntry_11",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double, double, double))) (("Factory_ParticleDataEntry_12",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double, double))) (("Factory_ParticleDataEntry_13",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double))) (("Factory_ParticleDataEntry_14",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double))) (("Factory_ParticleDataEntry_15",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double))) (("Factory_ParticleDataEntry_16",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int))) (("Factory_ParticleDataEntry_17",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int))) (("Factory_ParticleDataEntry_18",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int))) (("Factory_ParticleDataEntry_19",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) )) \
  (( /*class*/(Pythia8)(Couplings),    /*constructors*/(("Factory_Couplings_0",())) )) \
  (( /*class*/(Pythia8)(ResonanceGmZ),    /*constructors*/(("Factory_ResonanceGmZ_0",(int))) )) \
  (( /*class*/(Pythia8)(BeamParticle),    /*constructors*/(("Factory_BeamParticle_0",())) )) \
  (( /*class*/(Pythia8)(SlowJet),    /*constructors*/(("Factory_SlowJet_0",(int, double, double, double, int, int))) (("Factory_SlowJet_1",(int, double, double, double, int))) (("Factory_SlowJet_2",(int, double, double, double))) (("Factory_SlowJet_3",(int, double, double))) (("Factory_SlowJet_4",(int, double))) )) \
  (( /*class*/(Pythia8)(Event),    /*constructors*/(("Factory_Event_0",(int))) (("Factory_Event_1",())) )) \
  (( /*class*/(Pythia8)(Particle),    /*constructors*/(("Factory_Particle_0",())) (("Factory_Particle_1",(int, int, int, int, int, int, int, int, double, double, double, double, double, double, double))) (("Factory_Particle_2",(int, int, int, int, int, int, int, int, double, double, double, double, double, double))) (("Factory_Particle_3",(int, int, int, int, int, int, int, int, double, double, double, double, double))) (("Factory_Particle_4",(int, int, int, int, int, int, int, int, double, double, double, double))) (("Factory_Particle_5",(int, int, int, int, int, int, int, int, double, double, double))) (("Factory_Particle_6",(int, int, int, int, int, int, int, int, double, double))) (("Factory_Particle_7",(int, int, int, int, int, int, int, int, double))) (("Factory_Particle_8",(int, int, int, int, int, int, int, int))) (("Factory_Particle_9",(int, int, int, int, int, int, int))) (("Factory_Particle_10",(int, int, int, int, int, int))) (("Factory_Particle_11",(int, int, int, int, int))) (("Factory_Particle_12",(int, int, int, int))) (("Factory_Particle_13",(int, int, int))) (("Factory_Particle_14",(int, int))) (("Factory_Particle_15",(int))) (("Factory_Particle_16",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double, double, double))) (("Factory_Particle_17",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double, double))) (("Factory_Particle_18",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double))) (("Factory_Particle_19",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4))) )) \
  (( /*class*/(Pythia8)(AlphaStrong),    /*constructors*/(("Factory_AlphaStrong_0",())) )) \
  (( /*class*/(Pythia8)(AlphaEM),    /*constructors*/(("Factory_AlphaEM_0",())) )) \
  (( /*class*/(Pythia8)(CoupSM),    /*constructors*/(("Factory_CoupSM_0",())) )) \
  (( /*class*/(Pythia8)(Parm),    /*constructors*/(("Factory_Parm_0",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, bool, bool, double, double))) (("Factory_Parm_1",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, bool, bool, double))) (("Factory_Parm_2",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, bool, bool))) (("Factory_Parm_3",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, bool))) (("Factory_Parm_4",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double))) (("Factory_Parm_5",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_Parm_6",())) )) \
  (( /*class*/(Pythia8)(Settings),    /*constructors*/(("Factory_Settings_0",())) )) \
  (( /*class*/(Pythia8)(Info),    /*constructors*/(("Factory_Info_0",())) )) \
  (( /*class*/(Pythia8)(Rndm),    /*constructors*/(("Factory_Rndm_0",())) (("Factory_Rndm_1",(int))) )) \
  (( /*class*/(Pythia8)(Vec4),    /*constructors*/(("Factory_Vec4_0",(double, double, double, double))) (("Factory_Vec4_1",(double, double, double))) (("Factory_Vec4_2",(double, double))) (("Factory_Vec4_3",(double))) (("Factory_Vec4_4",())) )) \
  (( /*class*/(Pythia8)(Hist),    /*constructors*/(("Factory_Hist_0",())) (("Factory_Hist_1",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, double, double))) (("Factory_Hist_2",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, double))) (("Factory_Hist_3",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int))) (("Factory_Hist_4",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_Hist_5",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, const my_ns::Pythia8::Hist&))) )) \

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "gambit/Backends/backend_undefs.hpp"

#endif /* __loaded_types_Pythia_8_212_hpp__ */
