#ifndef __loaded_types_Pythia_8_186_hpp__
#define __loaded_types_Pythia_8_186_hpp__ 1

#include "wrapper_Pythia.h"
#include "wrapper_Hist.h"
#include "wrapper_Info.h"
#include "wrapper_Vec4.h"
#include "wrapper_Event.h"
#include "wrapper_Particle.h"
#include "identification.hpp"

// Indicate which types are provided by this backend, and what the symbols of their factories are.
#define Pythia_8_186_all_data \
  (( /*class*/(Pythia8)(Pythia),    /*constructors*/(("_ZN7Pythia814Factory_PythiaESsb",(std::string,bool))) (("_ZN7Pythia814Factory_PythiaESs",(std::string))) (("_ZN7Pythia814Factory_PythiaEv",())) )) \
  (( /*class*/(Pythia8)(Hist),      /*constructors*/(("_ZN7Pythia812Factory_HistEv",())) (("_ZN7Pythia812Factory_HistESsidd",(std::string,int,double,double))) (("_ZN7Pythia812Factory_HistESsid",(std::string,int,double))) (("_ZN7Pythia812Factory_HistESsi",(std::string,int))) (("_ZN7Pythia812Factory_HistESs",(std::string))) (("_ZN7Pythia812Factory_HistESsRKN12Pythia_8_1867Pythia84HistE",(std::string,const my_ns::Pythia8::Hist&))) )) \
  (( /*class*/(Pythia8)(Info),      /*constructors*/(("_ZN7Pythia812Factory_InfoEv",())) )) \
  (( /*class*/(Pythia8)(Vec4),      /*constructors*/(("_ZN7Pythia812Factory_Vec4Edddd",(double,double,double,double))) (("_ZN7Pythia812Factory_Vec4Eddd",(double,double,double))) (("_ZN7Pythia812Factory_Vec4Edd",(double,double))) (("_ZN7Pythia812Factory_Vec4Ed",(double))) (("_ZN7Pythia812Factory_Vec4Ev",())) )) \
  (( /*class*/(Pythia8)(Event),     /*constructors*/(("_ZN7Pythia813Factory_EventEi",(int))) (("_ZN7Pythia813Factory_EventEv",())) )) \
  (( /*class*/(Pythia8)(Particle),  /*constructors*/(("_ZN7Pythia816Factory_ParticleEv",())) (("_ZN7Pythia816Factory_ParticleEiiiiiiiiddddddd",(int,int,int,int,int,int,int,int,double,double,double,double,double,double,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiidddddd",(int,int,int,int,int,int,int,int,double,double,double,double,double,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiiddddd",(int,int,int,int,int,int,int,int,double,double,double,double,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiidddd",(int,int,int,int,int,int,int,int,double,double,double,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiiddd",(int,int,int,int,int,int,int,int,double,double,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiidd",(int,int,int,int,int,int,int,int,double,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiid",(int,int,int,int,int,int,int,int,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiii",(int,int,int,int,int,int,int,int))) (("_ZN7Pythia816Factory_ParticleEiiiiiii",(int,int,int,int,int,int,int))) (("_ZN7Pythia816Factory_ParticleEiiiiii",(int,int,int,int,int,int))) (("_ZN7Pythia816Factory_ParticleEiiiii",(int,int,int,int,int))) (("_ZN7Pythia816Factory_ParticleEiiii",(int,int,int,int))) (("_ZN7Pythia816Factory_ParticleEiii",(int,int,int))) (("_ZN7Pythia816Factory_ParticleEii",(int,int))) (("_ZN7Pythia816Factory_ParticleEi",(int))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiiRN12Pythia_8_1867Pythia84Vec4Eddd",(int,int,int,int,int,int,int,int,my_ns::Pythia8::Vec4,double,double,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiiRN12Pythia_8_1867Pythia84Vec4Edd",(int,int,int,int,int,int,int,int,my_ns::Pythia8::Vec4,double,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiiRN12Pythia_8_1867Pythia84Vec4Ed",(int,int,int,int,int,int,int,int,my_ns::Pythia8::Vec4,double))) (("_ZN7Pythia816Factory_ParticleEiiiiiiiiRN12Pythia_8_1867Pythia84Vec4E",(int,int,int,int,int,int,int,int,my_ns::Pythia8::Vec4))) )) 


// If the default version has been loaded, set it as default.
#if ALREADY_LOADED(CAT_3(BACKENDNAME,_,CAT(Default_,BACKENDNAME)))
  SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BACKENDNAME,SAFE_VERSION,CAT(Default_,BACKENDNAME))
#endif

// Undefine macros to avoid conflict with other backends.
#include "backend_undefs.hpp"

#endif /* __loaded_types_Pythia_8_186_hpp__ */
