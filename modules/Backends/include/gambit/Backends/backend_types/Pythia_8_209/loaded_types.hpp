#ifndef __loaded_types_Pythia_8_209_hpp__
#define __loaded_types_Pythia_8_209_hpp__ 1

#include "wrapper_Rndm.h"
#include "wrapper_PartonLevel.h"
#include "wrapper_ResonanceDecays.h"
#include "wrapper_LHdecayTable.h"
#include "wrapper_Particle.h"
#include "wrapper_ParticleData.h"
#include "wrapper_CoupSUSY.h"
#include "wrapper_ParticleDecays.h"
#include "wrapper_SigmaTotal.h"
#include "wrapper_CoupSM.h"
#include "wrapper_BeamParticle.h"
#include "wrapper_SlowJet.h"
#include "wrapper_Info.h"
#include "wrapper_ParticleDataEntry.h"
#include "wrapper_Settings.h"
#include "wrapper_Vec4.h"
#include "wrapper_DecayChannel.h"
#include "wrapper_ResonanceGmZ.h"
#include "wrapper_Hist.h"
#include "wrapper_AlphaEM.h"
#include "wrapper_SLHAinterface.h"
#include "wrapper_SusyLesHouches.h"
#include "wrapper_Couplings.h"
#include "wrapper_Event.h"
#include "wrapper_Pythia.h"
#include "wrapper_AlphaStrong.h"
#include "wrapper_Parm.h"
#include "wrapper_LHdecayChannel.h"
#include "identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define Pythia_8_209_all_data \
  (( /*class*/(Pythia8)(Rndm),    /*constructors*/(("_ZN7Pythia814Factory_Rndm_0Ev",())) (("_ZN7Pythia814Factory_Rndm_1Ei",(int))) )) \
  (( /*class*/(Pythia8)(PartonLevel),    /*constructors*/(("_ZN7Pythia821Factory_PartonLevel_0Ev",())) )) \
  (( /*class*/(Pythia8)(ResonanceDecays),    /*constructors*/(("_ZN7Pythia825Factory_ResonanceDecays_0Ev",())) )) \
  (( /*class*/(Pythia8)(LHdecayTable),    /*constructors*/(("_ZN7Pythia822Factory_LHdecayTable_0Ev",())) (("_ZN7Pythia822Factory_LHdecayTable_1Ei",(int))) (("_ZN7Pythia822Factory_LHdecayTable_2Eid",(int, double))) )) \
  (( /*class*/(Pythia8)(Particle),    /*constructors*/(("_ZN7Pythia818Factory_Particle_0Ev",())) (("_ZN7Pythia818Factory_Particle_1Eiiiiiiiiddddddd",(int, int, int, int, int, int, int, int, double, double, double, double, double, double, double))) (("_ZN7Pythia818Factory_Particle_2Eiiiiiiiidddddd",(int, int, int, int, int, int, int, int, double, double, double, double, double, double))) (("_ZN7Pythia818Factory_Particle_3Eiiiiiiiiddddd",(int, int, int, int, int, int, int, int, double, double, double, double, double))) (("_ZN7Pythia818Factory_Particle_4Eiiiiiiiidddd",(int, int, int, int, int, int, int, int, double, double, double, double))) (("_ZN7Pythia818Factory_Particle_5Eiiiiiiiiddd",(int, int, int, int, int, int, int, int, double, double, double))) (("_ZN7Pythia818Factory_Particle_6Eiiiiiiiidd",(int, int, int, int, int, int, int, int, double, double))) (("_ZN7Pythia818Factory_Particle_7Eiiiiiiiid",(int, int, int, int, int, int, int, int, double))) (("_ZN7Pythia818Factory_Particle_8Eiiiiiiii",(int, int, int, int, int, int, int, int))) (("_ZN7Pythia818Factory_Particle_9Eiiiiiii",(int, int, int, int, int, int, int))) (("_ZN7Pythia819Factory_Particle_10Eiiiiii",(int, int, int, int, int, int))) (("_ZN7Pythia819Factory_Particle_11Eiiiii",(int, int, int, int, int))) (("_ZN7Pythia819Factory_Particle_12Eiiii",(int, int, int, int))) (("_ZN7Pythia819Factory_Particle_13Eiii",(int, int, int))) (("_ZN7Pythia819Factory_Particle_14Eii",(int, int))) (("_ZN7Pythia819Factory_Particle_15Ei",(int))) (("_ZN7Pythia819Factory_Particle_16EiiiiiiiiRN12Pythia_8_2097Pythia84Vec4Eddd",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double, double, double))) (("_ZN7Pythia819Factory_Particle_17EiiiiiiiiRN12Pythia_8_2097Pythia84Vec4Edd",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double, double))) (("_ZN7Pythia819Factory_Particle_18EiiiiiiiiRN12Pythia_8_2097Pythia84Vec4Ed",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double))) (("_ZN7Pythia819Factory_Particle_19EiiiiiiiiRN12Pythia_8_2097Pythia84Vec4E",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4))) )) \
  (( /*class*/(Pythia8)(ParticleData),    /*constructors*/(("_ZN7Pythia822Factory_ParticleData_0Ev",())) )) \
  (( /*class*/(Pythia8)(CoupSUSY),    /*constructors*/(("_ZN7Pythia818Factory_CoupSUSY_0Ev",())) )) \
  (( /*class*/(Pythia8)(ParticleDecays),    /*constructors*/(("_ZN7Pythia824Factory_ParticleDecays_0Ev",())) )) \
  (( /*class*/(Pythia8)(SigmaTotal),    /*constructors*/(("_ZN7Pythia820Factory_SigmaTotal_0Ev",())) )) \
  (( /*class*/(Pythia8)(CoupSM),    /*constructors*/(("_ZN7Pythia816Factory_CoupSM_0Ev",())) )) \
  (( /*class*/(Pythia8)(BeamParticle),    /*constructors*/(("_ZN7Pythia822Factory_BeamParticle_0Ev",())) )) \
  (( /*class*/(Pythia8)(SlowJet),    /*constructors*/(("_ZN7Pythia817Factory_SlowJet_0Eidddii",(int, double, double, double, int, int))) (("_ZN7Pythia817Factory_SlowJet_1Eidddi",(int, double, double, double, int))) (("_ZN7Pythia817Factory_SlowJet_2Eiddd",(int, double, double, double))) (("_ZN7Pythia817Factory_SlowJet_3Eidd",(int, double, double))) (("_ZN7Pythia817Factory_SlowJet_4Eid",(int, double))) )) \
  (( /*class*/(Pythia8)(Info),    /*constructors*/(("_ZN7Pythia814Factory_Info_0Ev",())) )) \
  (( /*class*/(Pythia8)(ParticleDataEntry),    /*constructors*/(("_ZN7Pythia827Factory_ParticleDataEntry_0EiSsiiiddddd",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double, double))) (("_ZN7Pythia827Factory_ParticleDataEntry_1EiSsiiidddd",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double))) (("_ZN7Pythia827Factory_ParticleDataEntry_2EiSsiiiddd",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double))) (("_ZN7Pythia827Factory_ParticleDataEntry_3EiSsiiidd",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double))) (("_ZN7Pythia827Factory_ParticleDataEntry_4EiSsiiid",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double))) (("_ZN7Pythia827Factory_ParticleDataEntry_5EiSsiii",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int))) (("_ZN7Pythia827Factory_ParticleDataEntry_6EiSsii",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int))) (("_ZN7Pythia827Factory_ParticleDataEntry_7EiSsi",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int))) (("_ZN7Pythia827Factory_ParticleDataEntry_8EiSs",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >))) (("_ZN7Pythia827Factory_ParticleDataEntry_9Ei",(int))) (("_ZN7Pythia828Factory_ParticleDataEntry_10Ev",())) (("_ZN7Pythia828Factory_ParticleDataEntry_11EiSsSsiiiddddd",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double, double))) (("_ZN7Pythia828Factory_ParticleDataEntry_12EiSsSsiiidddd",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double, double))) (("_ZN7Pythia828Factory_ParticleDataEntry_13EiSsSsiiiddd",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double, double))) (("_ZN7Pythia828Factory_ParticleDataEntry_14EiSsSsiiidd",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double, double))) (("_ZN7Pythia828Factory_ParticleDataEntry_15EiSsSsiiid",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int, double))) (("_ZN7Pythia828Factory_ParticleDataEntry_16EiSsSsiii",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int, int))) (("_ZN7Pythia828Factory_ParticleDataEntry_17EiSsSsii",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, int))) (("_ZN7Pythia828Factory_ParticleDataEntry_18EiSsSsi",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int))) (("_ZN7Pythia828Factory_ParticleDataEntry_19EiSsSs",(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >))) )) \
  (( /*class*/(Pythia8)(Settings),    /*constructors*/(("_ZN7Pythia818Factory_Settings_0Ev",())) )) \
  (( /*class*/(Pythia8)(Vec4),    /*constructors*/(("_ZN7Pythia814Factory_Vec4_0Edddd",(double, double, double, double))) (("_ZN7Pythia814Factory_Vec4_1Eddd",(double, double, double))) (("_ZN7Pythia814Factory_Vec4_2Edd",(double, double))) (("_ZN7Pythia814Factory_Vec4_3Ed",(double))) (("_ZN7Pythia814Factory_Vec4_4Ev",())) )) \
  (( /*class*/(Pythia8)(DecayChannel),    /*constructors*/(("_ZN7Pythia822Factory_DecayChannel_0Eidiiiiiiiii",(int, double, int, int, int, int, int, int, int, int, int))) (("_ZN7Pythia822Factory_DecayChannel_1Eidiiiiiiii",(int, double, int, int, int, int, int, int, int, int))) (("_ZN7Pythia822Factory_DecayChannel_2Eidiiiiiii",(int, double, int, int, int, int, int, int, int))) (("_ZN7Pythia822Factory_DecayChannel_3Eidiiiiii",(int, double, int, int, int, int, int, int))) (("_ZN7Pythia822Factory_DecayChannel_4Eidiiiii",(int, double, int, int, int, int, int))) (("_ZN7Pythia822Factory_DecayChannel_5Eidiiii",(int, double, int, int, int, int))) (("_ZN7Pythia822Factory_DecayChannel_6Eidiii",(int, double, int, int, int))) (("_ZN7Pythia822Factory_DecayChannel_7Eidii",(int, double, int, int))) (("_ZN7Pythia822Factory_DecayChannel_8Eidi",(int, double, int))) (("_ZN7Pythia822Factory_DecayChannel_9Eid",(int, double))) (("_ZN7Pythia823Factory_DecayChannel_10Ei",(int))) (("_ZN7Pythia823Factory_DecayChannel_11Ev",())) )) \
  (( /*class*/(Pythia8)(ResonanceGmZ),    /*constructors*/(("_ZN7Pythia822Factory_ResonanceGmZ_0Ei",(int))) )) \
  (( /*class*/(Pythia8)(Hist),    /*constructors*/(("_ZN7Pythia814Factory_Hist_0Ev",())) (("_ZN7Pythia814Factory_Hist_1ESsidd",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, double, double))) (("_ZN7Pythia814Factory_Hist_2ESsid",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, double))) (("_ZN7Pythia814Factory_Hist_3ESsi",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int))) (("_ZN7Pythia814Factory_Hist_4ESs",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >))) (("_ZN7Pythia814Factory_Hist_5ESsRKN12Pythia_8_2097Pythia84HistE",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, const my_ns::Pythia8::Hist&))) )) \
  (( /*class*/(Pythia8)(AlphaEM),    /*constructors*/(("_ZN7Pythia817Factory_AlphaEM_0Ev",())) )) \
  (( /*class*/(Pythia8)(SLHAinterface),    /*constructors*/(("_ZN7Pythia823Factory_SLHAinterface_0Ev",())) )) \
  (( /*class*/(Pythia8)(SusyLesHouches),    /*constructors*/(("_ZN7Pythia824Factory_SusyLesHouches_0Ei",(int))) (("_ZN7Pythia824Factory_SusyLesHouches_1Ev",())) (("_ZN7Pythia824Factory_SusyLesHouches_2ESsi",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int))) (("_ZN7Pythia824Factory_SusyLesHouches_3ESs",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >))) )) \
  (( /*class*/(Pythia8)(Couplings),    /*constructors*/(("_ZN7Pythia819Factory_Couplings_0Ev",())) )) \
  (( /*class*/(Pythia8)(Event),    /*constructors*/(("_ZN7Pythia815Factory_Event_0Ei",(int))) (("_ZN7Pythia815Factory_Event_1Ev",())) )) \
  (( /*class*/(Pythia8)(Pythia),    /*constructors*/(("_ZN7Pythia816Factory_Pythia_0ESsb",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, bool))) (("_ZN7Pythia816Factory_Pythia_1ESs",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >))) (("_ZN7Pythia816Factory_Pythia_2Ev",())) )) \
  (( /*class*/(Pythia8)(AlphaStrong),    /*constructors*/(("_ZN7Pythia821Factory_AlphaStrong_0Ev",())) )) \
  (( /*class*/(Pythia8)(Parm),    /*constructors*/(("_ZN7Pythia814Factory_Parm_0ESsdbbdd",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, double, bool, bool, double, double))) (("_ZN7Pythia814Factory_Parm_1ESsdbbd",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, double, bool, bool, double))) (("_ZN7Pythia814Factory_Parm_2ESsdbb",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, double, bool, bool))) (("_ZN7Pythia814Factory_Parm_3ESsdb",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, double, bool))) (("_ZN7Pythia814Factory_Parm_4ESsd",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, double))) (("_ZN7Pythia814Factory_Parm_5ESs",(std::basic_string<char,std::char_traits<char>,std::allocator<char> >))) (("_ZN7Pythia814Factory_Parm_6Ev",())) )) \
  (( /*class*/(Pythia8)(LHdecayChannel),    /*constructors*/(("_ZN7Pythia824Factory_LHdecayChannel_0Ev",())) (("_ZN7Pythia824Factory_LHdecayChannel_1EdiSt6vectorIiSaIiEESs",(double, int, std::vector<int,std::allocator<int> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >))) (("_ZN7Pythia824Factory_LHdecayChannel_2EdiSt6vectorIiSaIiEE",(double, int, std::vector<int,std::allocator<int> >))) )) \

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "gambit/Backends/backend_undefs.hpp"

#endif /* __loaded_types_Pythia_8_209_hpp__ */
