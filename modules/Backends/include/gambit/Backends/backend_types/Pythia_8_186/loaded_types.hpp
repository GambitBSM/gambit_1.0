#ifndef __loaded_types_Pythia_8_186_hpp__
#define __loaded_types_Pythia_8_186_hpp__ 1

#include "wrapper_Particle.h"
#include "wrapper_Info.h"
#include "wrapper_Vec4.h"
#include "wrapper_Hist.h"
#include "wrapper_Event.h"
#include "wrapper_Pythia.h"
#include "identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define Pythia_8_186_all_data \
  (( /*class*/(Pythia8)(Particle),    /*constructors*/(("_ZN7Pythia818Factory_Particle_0Ev",())) (("_ZN7Pythia818Factory_Particle_1Eiiiiiiiiddddddd",(int, int, int, int, int, int, int, int, double, double, double, double, double, double, double))) (("_ZN7Pythia818Factory_Particle_2Eiiiiiiiidddddd",(int, int, int, int, int, int, int, int, double, double, double, double, double, double))) (("_ZN7Pythia818Factory_Particle_3Eiiiiiiiiddddd",(int, int, int, int, int, int, int, int, double, double, double, double, double))) (("_ZN7Pythia818Factory_Particle_4Eiiiiiiiidddd",(int, int, int, int, int, int, int, int, double, double, double, double))) (("_ZN7Pythia818Factory_Particle_5Eiiiiiiiiddd",(int, int, int, int, int, int, int, int, double, double, double))) (("_ZN7Pythia818Factory_Particle_6Eiiiiiiiidd",(int, int, int, int, int, int, int, int, double, double))) (("_ZN7Pythia818Factory_Particle_7Eiiiiiiiid",(int, int, int, int, int, int, int, int, double))) (("_ZN7Pythia818Factory_Particle_8Eiiiiiiii",(int, int, int, int, int, int, int, int))) (("_ZN7Pythia818Factory_Particle_9Eiiiiiii",(int, int, int, int, int, int, int))) (("_ZN7Pythia819Factory_Particle_10Eiiiiii",(int, int, int, int, int, int))) (("_ZN7Pythia819Factory_Particle_11Eiiiii",(int, int, int, int, int))) (("_ZN7Pythia819Factory_Particle_12Eiiii",(int, int, int, int))) (("_ZN7Pythia819Factory_Particle_13Eiii",(int, int, int))) (("_ZN7Pythia819Factory_Particle_14Eii",(int, int))) (("_ZN7Pythia819Factory_Particle_15Ei",(int))) (("_ZN7Pythia819Factory_Particle_16EiiiiiiiiRN12Pythia_8_1867Pythia84Vec4Eddd",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double, double, double))) (("_ZN7Pythia819Factory_Particle_17EiiiiiiiiRN12Pythia_8_1867Pythia84Vec4Edd",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double, double))) (("_ZN7Pythia819Factory_Particle_18EiiiiiiiiRN12Pythia_8_1867Pythia84Vec4Ed",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4, double))) (("_ZN7Pythia819Factory_Particle_19EiiiiiiiiRN12Pythia_8_1867Pythia84Vec4E",(int, int, int, int, int, int, int, int, my_ns::Pythia8::Vec4))) )) \
  (( /*class*/(Pythia8)(Info),    /*constructors*/(("_ZN7Pythia814Factory_Info_0Ev",())) )) \
  (( /*class*/(Pythia8)(Vec4),    /*constructors*/(("_ZN7Pythia814Factory_Vec4_0Edddd",(double, double, double, double))) (("_ZN7Pythia814Factory_Vec4_1Eddd",(double, double, double))) (("_ZN7Pythia814Factory_Vec4_2Edd",(double, double))) (("_ZN7Pythia814Factory_Vec4_3Ed",(double))) (("_ZN7Pythia814Factory_Vec4_4Ev",())) )) \
  (( /*class*/(Pythia8)(Hist),    /*constructors*/(("_ZN7Pythia814Factory_Hist_0Ev",())) (("_ZN7Pythia814Factory_Hist_1ESsidd",(std::string, int, double, double))) (("_ZN7Pythia814Factory_Hist_2ESsid",(std::string, int, double))) (("_ZN7Pythia814Factory_Hist_3ESsi",(std::string, int))) (("_ZN7Pythia814Factory_Hist_4ESs",(std::string))) (("_ZN7Pythia814Factory_Hist_5ESsRKN12Pythia_8_1867Pythia84HistE",(std::string, const my_ns::Pythia8::Hist&))) )) \
  (( /*class*/(Pythia8)(Event),    /*constructors*/(("_ZN7Pythia815Factory_Event_0Ei",(int))) (("_ZN7Pythia815Factory_Event_1Ev",())) )) \
  (( /*class*/(Pythia8)(Pythia),    /*constructors*/(("_ZN7Pythia816Factory_Pythia_0ESsb",(std::string, bool))) (("_ZN7Pythia816Factory_Pythia_1ESs",(std::string))) (("_ZN7Pythia816Factory_Pythia_2Ev",())) )) \

// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "gambit/Backends/backend_undefs.hpp"

#endif /* __loaded_types_Pythia_8_186_hpp__ */
