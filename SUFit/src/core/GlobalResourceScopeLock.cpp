#include "core/GlobalResourceScopeLock.hh"

// Read header for doc.
// Johan Lundberg, July 2011

namespace sufit {



  class NamedResourceSingleton {
  public:
    static NamedResourceSingleton *getInstance();
    void requestname(std::string instr,std::string debugid=std::string());
    void returnname(std::string instr,std::string debugid=std::string());
  protected:
    std::string _value;
  private:
    static NamedResourceSingleton* _inst;
    NamedResourceSingleton() :_lockmap(){};
    NamedResourceSingleton(const NamedResourceSingleton&);
    NamedResourceSingleton& operator=(const NamedResourceSingleton&);
    std::map<std::string,std::string> _lockmap;
  };

  GlobalResourceScopeLock::GlobalResourceScopeLock(std::string name,std::string debugid): _name(name),_dbg(debugid){
    NamedResourceSingleton::getInstance()->requestname(_name,_dbg);
  }
  GlobalResourceScopeLock::~GlobalResourceScopeLock(){
    NamedResourceSingleton::getInstance()->returnname(_name,_dbg);
  }


  NamedResourceSingleton* NamedResourceSingleton::_inst =NULL;

  NamedResourceSingleton* NamedResourceSingleton::getInstance() {
    if (_inst==NULL) {
      _inst = new NamedResourceSingleton();
    }
    return _inst;
  };

  void NamedResourceSingleton::requestname(std::string instr,std::string debugid){
    if (instr.size()==0){
      throw(std::runtime_error("Trying to request Global unique resource with empty name."));
    }
    if (_lockmap.count(instr)>0){
      std::string errormsg;
      errormsg+="Global unique resource '";
      errormsg+=instr;
      errormsg+="' already in use.";
      if (debugid.size()>0){
        errormsg+=" requester id is: ";
        errormsg+=debugid;
      }
      if (_lockmap[instr].size()>0){
        errormsg+=" the owners id is : ";
        errormsg+=_lockmap[instr];
      }
      throw(std::runtime_error(errormsg));
    }
    _lockmap[instr]=debugid;
    return ;
  }

  void NamedResourceSingleton::returnname(std::string instr,std::string debugid){
    if (_lockmap.count(instr)!=1){
      std::string errormsg;
      errormsg+="Global World-unique resource '";
      errormsg+=instr;
      errormsg+="' : release requested when not owned.";
      if (debugid.size()>0){
        errormsg+=" requester id is: ";
        errormsg+=debugid;
      }
      throw(std::runtime_error(errormsg));
    }
    _lockmap.erase(instr);
    return;
  }

}
