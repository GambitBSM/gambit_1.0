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
  (( /*class*/(Pythia8)(Pythia),    /*constructors*/(("Factory_Pythia_0__BOSS1",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool))) (("Factory_Pythia_1__BOSS2",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_Pythia_2__BOSS3",())) (("Factory_Pythia_3__BOSS4",(my_ns::Pythia8::ParticleData&, my_ns::Pythia8::Settings&, bool))) (("Factory_Pythia_4__BOSS5",(my_ns::Pythia8::ParticleData&, my_ns::Pythia8::Settings&))) )) \
  (( /*class*/(Pythia8)(PartonLevel),    /*constructors*/(("Factory_PartonLevel_0__BOSS6",())) )) \
  (( /*class*/(Pythia8)(ResonanceDecays),    /*constructors*/(("Factory_ResonanceDecays_0__BOSS7",())) )) \
  (( /*class*/(Pythia8)(ParticleDecays),    /*constructors*/(("Factory_ParticleDecays_0__BOSS8",())) )) \
  (( /*class*/(Pythia8)(SLHAinterface),    /*constructors*/(("Factory_SLHAinterface_0__BOSS9",())) )) \
  (( /*class*/(Pythia8)(ParticleData),    /*constructors*/(("Factory_ParticleData_0__BOSS10",())) )) \
  (( /*class*/(Pythia8)(CoupSUSY),    /*constructors*/(("Factory_CoupSUSY_0__BOSS11",())) )) \
  (( /*class*/(Pythia8)(LHdecayChannel),    /*constructors*/(("Factory_LHdecayChannel_0__BOSS12",())) (("Factory_LHdecayChannel_1__BOSS13",(double, int, ::std::vector<int, std::allocator<int> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_LHdecayChannel_2__BOSS14",(double, int, ::std::vector<int, std::allocator<int> >))) )) \
  (( /*class*/(Pythia8)(LHdecayTable),    /*constructors*/(("Factory_LHdecayTable_0__BOSS15",())) (("Factory_LHdecayTable_1__BOSS16",(int))) (("Factory_LHdecayTable_2__BOSS17",(int, double))) )) \
  (( /*class*/(Pythia8)(SusyLesHouches),    /*constructors*/(("Factory_SusyLesHouches_0__BOSS18",(int))) (("Factory_SusyLesHouches_1__BOSS19",())) (("Factory_SusyLesHouches_2__BOSS20",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int))) (("Factory_SusyLesHouches_3__BOSS21",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) )) \
  (( /*class*/(Pythia8)(SigmaTotal),    /*constructors*/(("Factory_SigmaTotal_0__BOSS22",())) )) \
  (( /*class*/(Pythia8)(DecayChannel),    /*constructors*/(("Factory_DecayChannel_0__BOSS23",(int, double, int, int, int, int, int, int, int, int, int))) (("Factory_DecayChannel_1__BOSS24",(int, double, int, int, int, int, int, int, int, int))) (("Factory_DecayChannel_2__BOSS25",(int, double, int, int, int, int, int, int, int))) (("Factory_DecayChannel_3__BOSS26",(int, double, int, int, int, int, int, int))) (("Factory_DecayChannel_4__BOSS27",(int, double, int, int, int, int, int))) (("Factory_DecayChannel_5__BOSS28",(int, double, int, int, int, int))) (("Factory_DecayChannel_6__BOSS29",(int, double, int, int, int))) (("Factory_DecayChannel_7__BOSS30",(int, double, int, int))) (("Factory_DecayChannel_8__BOSS31",(int, double, int))) (("Factory_DecayChannel_9__BOSS32",(int, double))) (("Factory_DecayChannel_10__BOSS33",(int))) (("Factory_DecayChannel_11__BOSS34",())) )) \
  (( /*class*/(Pythia8)(ParticleDataEntry),    /*constructors*/(("Factory_ParticleDataEntry_0__BOSS35",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double, double, double))) (("Factory_ParticleDataEntry_1__BOSS36",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double, double))) (("Factory_ParticleDataEntry_2__BOSS37",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double))) (("Factory_ParticleDataEntry_3__BOSS38",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double))) (("Factory_ParticleDataEntry_4__BOSS39",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double))) (("Factory_ParticleDataEntry_5__BOSS40",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int))) (("Factory_ParticleDataEntry_6__BOSS41",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int))) (("Factory_ParticleDataEntry_7__BOSS42",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int))) (("Factory_ParticleDataEntry_8__BOSS43",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_ParticleDataEntry_9__BOSS44",(int))) (("Factory_ParticleDataEntry_10__BOSS45",())) (("Factory_ParticleDataEntry_11__BOSS46",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double, double, double))) (("Factory_ParticleDataEntry_12__BOSS47",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double, double))) (("Factory_ParticleDataEntry_13__BOSS48",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double, double))) (("Factory_ParticleDataEntry_14__BOSS49",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double, double))) (("Factory_ParticleDataEntry_15__BOSS50",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int, double))) (("Factory_ParticleDataEntry_16__BOSS51",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int, int))) (("Factory_ParticleDataEntry_17__BOSS52",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int))) (("Factory_ParticleDataEntry_18__BOSS53",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int))) (("Factory_ParticleDataEntry_19__BOSS54",(int, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) )) \
  (( /*class*/(Pythia8)(Couplings),    /*constructors*/(("Factory_Couplings_0__BOSS55",())) )) \
  (( /*class*/(Pythia8)(ResonanceGmZ),    /*constructors*/(("Factory_ResonanceGmZ_0__BOSS56",(int))) )) \
  (( /*class*/(Pythia8)(BeamParticle),    /*constructors*/(("Factory_BeamParticle_0__BOSS57",())) )) \
  (( /*class*/(Pythia8)(SlowJet),    /*constructors*/(("Factory_SlowJet_0__BOSS58",(int, double, double, double, int, int))) (("Factory_SlowJet_1__BOSS59",(int, double, double, double, int))) (("Factory_SlowJet_2__BOSS60",(int, double, double, double))) (("Factory_SlowJet_3__BOSS61",(int, double, double))) (("Factory_SlowJet_4__BOSS62",(int, double))) )) \
  (( /*class*/(Pythia8)(Event),    /*constructors*/(("Factory_Event_0__BOSS63",(int))) (("Factory_Event_1__BOSS64",())) )) \
  (( /*class*/(Pythia8)(Particle),    /*constructors*/(("Factory_Particle_0__BOSS65",())) (("Factory_Particle_1__BOSS66",(int, int, int, int, int, int, int, int, double, double, double, double, double, double, double))) (("Factory_Particle_2__BOSS67",(int, int, int, int, int, int, int, int, double, double, double, double, double, double))) (("Factory_Particle_3__BOSS68",(int, int, int, int, int, int, int, int, double, double, double, double, double))) (("Factory_Particle_4__BOSS69",(int, int, int, int, int, int, int, int, double, double, double, double))) (("Factory_Particle_5__BOSS70",(int, int, int, int, int, int, int, int, double, double, double))) (("Factory_Particle_6__BOSS71",(int, int, int, int, int, int, int, int, double, double))) (("Factory_Particle_7__BOSS72",(int, int, int, int, int, int, int, int, double))) (("Factory_Particle_8__BOSS73",(int, int, int, int, int, int, int, int))) (("Factory_Particle_9__BOSS74",(int, int, int, int, int, int, int))) (("Factory_Particle_10__BOSS75",(int, int, int, int, int, int))) (("Factory_Particle_11__BOSS76",(int, int, int, int, int))) (("Factory_Particle_12__BOSS77",(int, int, int, int))) (("Factory_Particle_13__BOSS78",(int, int, int))) (("Factory_Particle_14__BOSS79",(int, int))) (("Factory_Particle_15__BOSS80",(int))) (("Factory_Particle_16__BOSS81",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double, double, double))) (("Factory_Particle_17__BOSS82",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double, double))) (("Factory_Particle_18__BOSS83",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double))) (("Factory_Particle_19__BOSS84",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4))) )) \
  (( /*class*/(Pythia8)(AlphaStrong),    /*constructors*/(("Factory_AlphaStrong_0__BOSS85",())) )) \
  (( /*class*/(Pythia8)(AlphaEM),    /*constructors*/(("Factory_AlphaEM_0__BOSS86",())) )) \
  (( /*class*/(Pythia8)(CoupSM),    /*constructors*/(("Factory_CoupSM_0__BOSS87",())) )) \
  (( /*class*/(Pythia8)(Parm),    /*constructors*/(("Factory_Parm_0__BOSS88",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, bool, bool, double, double))) (("Factory_Parm_1__BOSS89",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, bool, bool, double))) (("Factory_Parm_2__BOSS90",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, bool, bool))) (("Factory_Parm_3__BOSS91",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double, bool))) (("Factory_Parm_4__BOSS92",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, double))) (("Factory_Parm_5__BOSS93",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_Parm_6__BOSS94",())) )) \
  (( /*class*/(Pythia8)(Settings),    /*constructors*/(("Factory_Settings_0__BOSS95",())) )) \
  (( /*class*/(Pythia8)(Info),    /*constructors*/(("Factory_Info_0__BOSS96",())) )) \
  (( /*class*/(Pythia8)(Rndm),    /*constructors*/(("Factory_Rndm_0__BOSS97",())) (("Factory_Rndm_1__BOSS98",(int))) )) \
  (( /*class*/(Pythia8)(Vec4),    /*constructors*/(("Factory_Vec4_0__BOSS99",(double, double, double, double))) (("Factory_Vec4_1__BOSS100",(double, double, double))) (("Factory_Vec4_2__BOSS101",(double, double))) (("Factory_Vec4_3__BOSS102",(double))) (("Factory_Vec4_4__BOSS103",())) )) \
  (( /*class*/(Pythia8)(Hist),    /*constructors*/(("Factory_Hist_0__BOSS104",())) (("Factory_Hist_1__BOSS105",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, double, double))) (("Factory_Hist_2__BOSS106",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, double))) (("Factory_Hist_3__BOSS107",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int))) (("Factory_Hist_4__BOSS108",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >))) (("Factory_Hist_5__BOSS109",(::std::basic_string<char, std::char_traits<char>, std::allocator<char> >, const my_ns::Pythia8::Hist&))) )) \

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "gambit/Backends/backend_undefs.hpp"

#endif /* __loaded_types_Pythia_8_212_hpp__ */
