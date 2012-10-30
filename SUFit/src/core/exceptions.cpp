#include "core/exceptions.hh"
#include <iostream>
#include <boost/exception/all.hpp>
#include <boost/exception/info.hpp>
#include <boost/units/detail/utility.hpp>
#include <sstream>
#include <algorithm>

#include <cxxabi.h>
#include <execinfo.h>
#include "core/logcore.hh"

namespace sufit{

  namespace exceptions{

    i_trace i_trace_do() throw(){
      return i_trace(logsetup::stacktrace());
    }

    std::string get_exception_origin(boost::exception const & e){
      std::stringstream tmp;
      if ( char const*const *mi =boost::get_error_info<boost::throw_file>(e) ) {
        tmp<<std::string(*mi);
      }
      if ( int const* mi =boost::get_error_info<boost::throw_line>(e) ) {
        tmp<<"#"<<int(*mi)<<" ";
      }
      if ( char const*const *mi =boost::get_error_info<boost::throw_function>(e) ) {
        tmp<<std::string(*mi);
      }
      return tmp.str();
    }

    std::string get_exception_trace(boost::exception const & e){
      if( std::string const * mi=boost::get_error_info<i_trace>(e) )
        return *mi;
      return std::string("");
    }
    std::string get_exception_text(boost::exception const & e){
      if( std::string const * mi=boost::get_error_info<i_text>(e) )
        return *mi;
      return std::string("");
    }
    std::string get_exception_name(boost::exception const & e){
      if( std::string const * mi=boost::get_error_info<i_text>(e) )
        return *mi;
      return std::string("");
    }

    std::string get_exception_dump(boost::exception const & e,unsigned int detail){
      std::stringstream out;

      bool needendl=0;
      std::string tmp;
      if(const sufit_exception_base *tmp=dynamic_cast<const sufit_exception_base*>(&e)){
        out<<tmp->getName();
        needendl=1;
      }
      tmp=get_exception_text(e);
      if(!tmp.empty()) {
        if(needendl) out<<std::endl;
        out<<tmp;
        needendl=1;
      }
      if(detail>0){
        tmp=get_exception_origin(e);
        if(!tmp.empty()) {
          if(needendl) out<<std::endl;
          out<<tmp;
          needendl=1;
        }
      }
      if(detail>1){
        tmp=get_exception_trace(e);
        if(!tmp.empty()) {
          if(needendl) out<<std::endl;
          out<<tmp;
          needendl=1;
        }
      }
      if(detail>2){
        if(needendl) out<<std::endl;
        out<<tmp;
        out<<"full diagnostic dump:"<<boost::diagnostic_information(e);
      }
      return out.str();
    }
  }
}
#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*

  Additional code for optional debug messages from exceptions

  public:
  sufit_exception_base() throw() {
  //SUFIT_MSG_INFO(exception_origin(*this));
  }
  sufit_exception_base(const sufit_exception_base& rhs)throw(){
  boost::exception::operator=(rhs);
  std::exception::operator=(rhs);
  try {
  std::string tmp;
  tmp=get_exception_origin(*this);
  if(!tmp.empty()) SUFIT_MSG_DEBUG("copying exception. origin:"<<tmp,2);
  tmp=get_exception_text(*this);
  if(!tmp.empty()) SUFIT_MSG_DEBUG("copying exception. text  :"<<tmp,3);
  tmp=get_exception_trace(*this);
  if(!tmp.empty()) SUFIT_MSG_DEBUG("copying exception. trace :"<<tmp,4);
  }catch(...){
  try{
  std::cerr<<"error copying exception from "<<get_exception_origin(*this)<<" "<< get_exception_text(*this)<<" "<<get_exception_trace(*this);
  }catch(...){}
  }
  }
  virtual ~sufit_exception_base() throw(){
  }
  virtual sufit_exception_base & operator=(const sufit_exception_base& rhs)throw(){
  std::exception::operator=(rhs);
  boost::exception::operator=(rhs);
  return (*this);
  }
  #endif
  #endif
  };
*/
#endif
