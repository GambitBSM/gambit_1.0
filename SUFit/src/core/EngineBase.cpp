#include "core/EngineBase.hh"
#include <iostream>
#include <map>

namespace sufit {

  void EngineBase::Update(){
    u_longlong current_version=_usedModel->getModelParameters()->getVersion();
    if (_forcedUpdateRequested ||
        (current_version!=_last_calculated_version)){
      //
      _reconfHandlers();
      bool fullclear=false;
      _PrepareAllCaches(fullclear);
      _f_Update();
      _forcedUpdateRequested=0;
      _last_calculated_version=current_version;
      //IFDEBUG  std::cout << "       recalculation done due to..." << std::endl;
    } else {
      //IFDEBUG   std::cout << "       using cash            for..." << std::endl;
    }
  }

  void EngineBase::_reconfHandlers(bool fail_if_non_empty) {

    RequestForcedUpdate();
    _configuration_marks.clear();
    std::vector< weak_ptr<HandlerBase> >::iterator it= _variable_collection.begin();
    while(it!=_variable_collection.end()){
      if(shared_ptr<HandlerBase> r = (*it).lock()){
        //std::cout << "found a live entry: " <<r->getName()<<std::endl;
        _configuration_marks+=r->get_confmark();
      }else{
        //std::cout << "cleaninging an unused entry." <<std::endl;
        _variable_collection.erase(it);
        it=_variable_collection.begin();
        continue;
      }
      it++;
    }
    if(fail_if_non_empty){
      for (it=_variable_collection.begin();
           it!=_variable_collection.end();it++){

        shared_ptr<HandlerBase> r = (*it).lock();
        SUFIT_MSG_FATAL("Variable: '" << r->getName() << "' still in use. Internal error.");
      }
    }
    if(fail_if_non_empty && (!_variable_collection.empty())){
      SUFIT_MSG_FATAL("_variable_collection is not empty. Internal error. ");
    }
  }

  void EngineBase::_PrepareAllCaches(bool fullclear){
    for (std::set<NamedCacheInterface*>::iterator it=_cache_collection.begin();
         it!=_cache_collection.end();it++){
      _PrepareSingleCache(**it,fullclear);
    }
  }

  void EngineBase::_PrepareSingleCache(NamedCacheInterface & cache,bool clear) {
    SUFIT_MSG_DEBUG("enter.",3);
    std::vector<std::string> varnames;
    // Loop over the known variables
    std::vector< weak_ptr<HandlerBase> >::const_iterator it= this->_variable_collection.begin();
    while(it!=this->_variable_collection.end()){
      if(shared_ptr<HandlerBase> r = (*it).lock()){
        varnames.push_back(r->getName());
      }else{
        SUFIT_MSG_FATAL("internal error in enginebase::prepare_cache");
      }
      it++;
    }
    cache.KeepNames(varnames);
    if(clear) cache.ClearCache();

    SUFIT_MSG_DEBUG("exit.",3);
  }


}
