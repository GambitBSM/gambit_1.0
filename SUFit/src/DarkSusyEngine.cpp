#include "DarkSusyEngine.hh"
#include "DarkSusyFortranCalls.h"

#include <boost/typeof/typeof.hpp>
#include "core/exceptions.hh"
#include "core/map_looper.hh"
#include <sstream>
#include "ModelParametersSusy.hh"

namespace sufit {

  void DarkSusyEngine::_f_Update(){
    SUFIT_MSG_DEBUG("enter");
    if(!_dsinit_called){
      SUFIT_MSG_LOG("calling dsinit_()");
      dsinit_();
      _dsinit_called=1;
    }

    configuration_mark requested_marks=EngineBase::get_configuration_marks();

    // This is just a simple test so far. We should be able to deal with
    // other models. For now hardcoded isasugra and no tests made
    int unphys=-1,hwarning=-1;

    ModelParametersPtr modparams= _usedModel->getModelParameters();

    if(dynamic_cast<ModelParameters_CMSSM5 *>(&*modparams)){
      double pars[5];
      pars[0]=(*modparams)["m0"];
      pars[1]=(*modparams)["m1/2"];
      pars[2]=(*modparams)["A0"];
      pars[3]=(*modparams)["sgnmu"];
      pars[4]=(*modparams)["tanb"];
      dsgive_model_isasugra_(&pars[0],&pars[1],&pars[2],&pars[3],&pars[4]);
      dssusy_isasugra_(&unphys, &hwarning);
    }else if(dynamic_cast<ModelParameters_pMSSM7 *>(&*modparams)){
      double vals[7];
      int i=0;
      vals[i++]=(*modparams)["mu"];
      vals[i++]=(*modparams)["m2"];
      vals[i++]=(*modparams)["ma"];
      vals[i++]=(*modparams)["tanb"];
      vals[i++]=(*modparams)["mqtild"];
      vals[i++]=(*modparams)["at/m"];
      vals[i++]=(*modparams)["ab/m"];
      dsgive_model_(&vals[0], &vals[1], &vals[2], &vals[3], &vals[4], &vals[5], &vals[6]);
      dssusy_(&unphys, &hwarning);
    }else{
      using namespace ::sufit::exceptions;
      std::stringstream msg;
      msg<<"DarkSusyEngine does not support this model parameter class";
      SUFIT_THROW_EXCEPTION(e_configuration()<<i_text(msg.str()));
    }

    bool success = (unphys == 0) && (hwarning == 0);
    if(!success){
      std::stringstream msg;
      using namespace ::sufit::exceptions;
      msg<<"dsgive_model: up:"<<unphys<<" w:"<<hwarning;
      if(unphys) SUFIT_THROW_EXCEPTION(e_unphysical()<<i_text(msg.str()));
      SUFIT_THROW_EXCEPTION(e_incalculable()<<i_text(msg.str()));
    }
    // masses
    for(map_looper<BOOST_TYPEOF(_ds_mass_cache)> q(_ds_mass_cache);q;q++){
      q.out() = givemass_(&q.in_tmp());
    }
    // OmegaH2 relic density
    for(map_looper<BOOST_TYPEOF(_dsrdomega_cache)> q(_dsrdomega_cache);q;q++){
      q.out<0>() = dsrdomega_(&q.in_tmp<0>(),&q.in_tmp<1>(), // <- inputs
                              &q.out<1>(), &q.out<2>(),&q.out<3>(),&q.out<4>()); // <- outputs;
    }
    // annihilation cross section
    for(map_looper<BOOST_TYPEOF(_dssigmav_cache)> q(_dssigmav_cache);q;q++){
      q.out()= dssigmav_(&q.in_tmp());
      SUFIT_MSG_DEBUG("dssigmav of "<<q.in() << "  : is= "<<q.out());
    }
    // halo
    if(requested_marks.pop(_mark_dshasetup)){
      dshasetup_();
      for(map_looper<BOOST_TYPEOF(_dshaloyield_cache)> q(_dshaloyield_cache);q;q++){
        q.out<0>()=dshaloyield_(&q.in_tmp<0>(),// e
                                &q.in_tmp<1>(),// yieldk
                                &q.out<1>());  // istat
      }
    }
    // optionally test if all tasks were executed:
    if(!(requested_marks.isempty())){
      // we could more this into EngineBase...
      SUFIT_MSG_ERROR("Some requested calculations were not done");
    }
    SUFIT_MSG_DEBUG("exit");
  }
}
