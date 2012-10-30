#include "configuration_mark.hh"
#include <iostream>

namespace sufit {
  configuration_mark configuration_mark::operator+(const configuration_mark&b) const{
    configuration_mark tmp(*this);
    tmp._col.insert(b._col.begin(),b._col.end());
    return tmp;
  }
  configuration_mark & configuration_mark::operator+=(const configuration_mark&b){
    _col.insert(b._col.begin(),b._col.end());
    return *this;
  }
  void configuration_mark::print() const{
    std::cout << "info: "<<std::endl;
    for (std::set<int>::const_iterator it=_col.begin();it!=_col.end();it++){

      std::cout << "it :" << *it <<std::endl;
    }
  }
  bool configuration_mark::isempty() const{
    return _col.empty();
  }
  configuration_mark::configuration_mark() {
    _m=_mcommon;
    _mcommon++;
    _col.insert(_m);
  };
  bool configuration_mark::has_parts(const configuration_mark& in) const{
    bool allthere(true);
    for (std::set<int>::const_iterator it=in._col.begin();it!=in._col.end();it++){
      if(_col.count(*it)){
        return true;
      }
      allthere=false;
    }
    return allthere;
  }
  bool configuration_mark::has(const configuration_mark& in) const{
    for (std::set<int>::const_iterator it=in._col.begin();it!=in._col.end();it++){
      if(!_col.count(*it)){
        return false;
      }
    }
    return true;
  }
  bool configuration_mark::pop(const configuration_mark& in) {
    if (has(in)){
      for (std::set<int>::const_iterator it=in._col.begin();it!=in._col.end();it++){
        if(_col.count(*it)) _col.erase(*it);

      }
      return true;
    }
    return false;
  }
  bool configuration_mark::pop_parts(const configuration_mark& in) {
    if (has_parts(in)){
      for (std::set<int>::const_iterator it=in._col.begin();it!=in._col.end();it++){
        if(_col.count(*it)) _col.erase(*it);

      }
      return true;
    }
    return false;
  }

  configuration_mark configuration_mark::makeEmpty() {
    return configuration_mark(0);
  };

  configuration_mark::configuration_mark(int min) {
    _m=min;
    if(min){          // 0 is special case of empty container
      _mcommon++;
      _col.insert(_m);
    }
  }

  int configuration_mark::_mcommon=configuration_mark::_mcommoninit();

  bool operator<(const configuration_mark&a,const configuration_mark&b){
    return size_t(&a)<size_t(&b);
  }
  bool operator|(const configuration_mark&a,const configuration_mark&b){
    return a.has_parts(b);
  }
}
