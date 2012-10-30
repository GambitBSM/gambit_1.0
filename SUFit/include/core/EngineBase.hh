#ifndef sufit_enginebase_h_
#define sufit_enginebase_h_ 1

#include "Uncopyable.hh"
#include "ModelBase.hh"
#include "AssociatedHandler.hh"
#include "shared_ptr.hh"
#include "configuration_mark.hh"
#include "coreUtils.hh"
#include "logcore.hh"
#include "named_cache.hh"

namespace sufit {
  /*! \brief Engine base class
  //
  // A base class for a code able to register and calculate values
  // based on some model. ( May also just ignore the model in some cases )
  //
  // Variables are registered
  //
  // Handles to engine variables are returned using smart pointers
  // (AccociatedHandler) inside shared_pointers. This allows the engines
  // to automatically unregister and delete variables as soon as they are
  // no longer used.
  //
  // The class keeps track of the current version of the model
  // parameter and calls the pure virtual function _f_Update() when
  // variables are to be updated. The shild class implements _f_Update()
  // which must loop over all used variables and recalculate the results
  // for the new model.
  //
  // For examples on how to use EngineBase, see DarkSusyEngine
  //
  // \author Johan Lundberg
  // \date July-September 2011
  */
  class EngineBase :private Uncopyable{
  public:
    EngineBase(ModelBasePtr usedModel):_usedModel(usedModel),
                                       _configuration_marks(),
                                       _forcedUpdateRequested(0),
                                       _last_calculated_version(0){}
    virtual ~EngineBase(){
      _reconfHandlers(true);
    }
    void RequestForcedUpdate(){
      _forcedUpdateRequested=true;
    }
    void Update();

    //! \brief templated typedef for method function pointers used by EngineBase
    template <class ENGINE,class T>
    struct types{
      typedef const T& (ENGINE::*f_type)(std::string varname)  ;
    };

    virtual void unregisterHandler(std::string const & aname){
      _reconfHandlers();
      bool fullclear=false;
      _PrepareAllCaches(fullclear);
    }

  protected:

    configuration_mark get_configuration_marks() { return _configuration_marks ;};

    template <class ENGINE,class T>
    std::tr1::shared_ptr<Handler<T> > makeHandler(std::string varname,
                                                  ENGINE * tmp_this,
                                                  typename types<ENGINE,T>::f_type infunc,
                                                  configuration_mark cm=configuration_mark::makeEmpty()){

      SUFIT_MSG_DEBUG("enter.",3);
      std::tr1::shared_ptr<Handler<T> > result(new AssociatedHandler<ENGINE,T>(varname,tmp_this,infunc,cm));
      weak_ptr<Handler<T> > tmp(result);
      _variable_collection.push_back(tmp);
      _reconfHandlers();
      bool fullclear=false;
      _PrepareAllCaches(fullclear);
      SUFIT_MSG_DEBUG("exit.",3);
      return result;
    }

    //! Register handler and register the cache for automatic accosiation to this variable
    template <class T,class ENGINE,class C,class O>
    std::tr1::shared_ptr<Handler<T> > makeCachingHandler(std::string varname,
                                                         ENGINE * tmp_this,
                                                         typename types<ENGINE,T>::f_type infunc,
                                                         NamedCache<C,O> &cachevar,
                                                         const O &OptValue,
                                                         configuration_mark const &cm=configuration_mark::makeEmpty()){
      SUFIT_MSG_DEBUG("enter.",3);
      std::tr1::shared_ptr<Handler<T> > result(new AssociatedHandler<ENGINE,T>(varname,tmp_this,infunc,cm));
      _variable_collection.push_back(result);
      cachevar.Register(varname,OptValue);
      _cache_collection.insert(&cachevar);
      _reconfHandlers();
      bool fullclear=false;
      _PrepareAllCaches(fullclear);
      SUFIT_MSG_DEBUG("exit.",3);
      return result;
    }

    // For no registered option
    template <class T,class ENGINE,class C>
    std::tr1::shared_ptr<Handler<T> > makeCachingHandler(std::string varname,
                                                         ENGINE * tmp_this,
                                                         typename types<ENGINE,T>::f_type infunc,
                                                         NamedCache<C> &cachevar,
                                                         configuration_mark const cm=configuration_mark::makeEmpty()){
      SUFIT_MSG_DEBUG("enter.",3);
      std::tr1::shared_ptr<Handler<T> > result(new AssociatedHandler<ENGINE,T>(varname,tmp_this,infunc,cm));
      _variable_collection.push_back(result);
      cachevar.Register(varname);
      _cache_collection.insert(&cachevar);
      _reconfHandlers();
      SUFIT_MSG_DEBUG("exit.",3);
      return result;
    }

  protected:
    ModelBasePtr  _usedModel;

  private:
    virtual void _f_Update(){SUFIT_MSG_FATAL("should not call me!");};

    void _reconfHandlers(bool fail_if_non_empty=false) ;
    configuration_mark _configuration_marks;
    void _PrepareAllCaches(bool fullclear);
    void _PrepareSingleCache(NamedCacheInterface & cache,bool clear);
    bool _forcedUpdateRequested;
    u_longlong _last_calculated_version;
    std::vector< weak_ptr<HandlerBase> > _variable_collection;
    std::set<NamedCacheInterface*> _cache_collection;
  };
}
#endif
