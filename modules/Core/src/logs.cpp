#include "logcore.hpp"
#include "gambit_core.hpp"

#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <map>
#include <stdlib.h>

#include <cxxabi.h>
#include <execinfo.h>
#include <cstring>

namespace GAMBIT {

  namespace logsetup {

    /*! \brief non-public implementation class used by logsetup
     * \author Johan Lundberg
     * \data 2011-08-19
     */
    class logcore_imp {
    private:
      //      typedef severity_t severity_t;
      int _level;
      int _echolevel;
      std::map<severity_t,std::string> level_to_filename;
      std::map<std::string,std::ofstream*> filename_to_ostream;
      std::vector<severity_t> ordered_levels;
      static void doatexit(){
        delete instance();
        return ;
      }
      // private destructor. get instance via instance()
      logcore_imp() : _level(sDEBUG),_echolevel(sWARNING){
        level_to_filename[sFATAL]=_default_errfile();
        level_to_filename[sERROR]=_default_errfile();
        level_to_filename[sWARNING]=_default_errfile();
        level_to_filename[sLOG]=_default_logfile();
        level_to_filename[sINFO]=_default_logfile();
        level_to_filename[sDEBUG]=_default_logfile();
        level_to_filename[sDEBUG1]=_default_logfile();
        level_to_filename[sDEBUG2]=_default_logfile();
        level_to_filename[sDEBUG3]=_default_logfile();
        level_to_filename[sDEBUG4]=_default_logfile();

        GAMBIT_core::init(); // request exit handler to be run at signals
        atexit(doatexit); // register destruction of static
      }
      ~logcore_imp(){
        for(std::map<std::string,std::ofstream*>::reverse_iterator it=filename_to_ostream.rbegin();
            it!=filename_to_ostream.rend();it++){
          __priv_GAMBIT_message(sDEBUG,"",0,"logcore","closing logfile: "+it->first);
        }
        for(std::map<std::string,std::ofstream*>::reverse_iterator it=filename_to_ostream.rbegin();
            it!=filename_to_ostream.rend();
            it++){
          (*it->second)<<"END OF RECORD."<<std::endl;
          it->second->close();
          delete it->second;
        }
      }
    public:
      // variables and types:
      //    friend class logsetup;

      // methods:
      static logcore_imp * instance() {
        static logcore_imp * tmp =new logcore_imp;
        return tmp;
      }
      static void setfile_range(std::string name,int lowedge=INT_MIN,int highedge=INT_MAX){
        logcore_imp::instance()->_setfile_range(name, lowedge,highedge);
      }
      void _setLogLevel(int s){
        _level=s;
      }
      void _setEchoLevel(int s){
        _echolevel=s;
        // force always log to file all Echoed messages:
        _level=std::min(_level,_echolevel);
      }
      void _setfile_range(std::string name,int lowedge,int highedge){

        for(std::map<severity_t,std::string>::iterator it=level_to_filename.begin();
            it!=level_to_filename.end();it++){
          severity_t stmp=it->first;
          if (stmp>=lowedge && stmp<=highedge) level_to_filename[stmp]=name;
        }
        // Close unused files.
        std::vector<std::string> unused_files;
        for(std::map<std::string,std::ofstream*>::iterator it0=filename_to_ostream.begin();
            it0!=filename_to_ostream.end();it0++){
          bool found=0;
          for(std::map<severity_t,std::string>::iterator it=level_to_filename.begin();
              it!=level_to_filename.end();it++){
            if (it0->first==it->second){
              found=1;
              break;
            }
          }
          if(!found) unused_files.push_back(it0->first);
        }
        for(std::vector<std::string>::reverse_iterator it=unused_files.rbegin();it!=unused_files.rend();it++){
          __priv_GAMBIT_message(sDEBUG,"",0,"logcore","closing logfile: "+*it);
        }
        for(std::vector<std::string>::reverse_iterator it=unused_files.rbegin();it!=unused_files.rend();it++){
          (*filename_to_ostream[*it])<<"END OF RECORD"<<std::endl;
          filename_to_ostream[*it]->close();
          filename_to_ostream.erase(*it);
        }
      }

      void __priv_GAMBIT_message(int int_severity,std::string filename,int linenno,std::string prettyf,std::string message){

        if((int_severity<_level)&&(int_severity<_echolevel)) return;
        static long msgnum=-1;
        std::stringstream stream;
        std::string sevstring;
        severity_t s;

        if(int_severity<=sDEBUG4) s=sDEBUG4; else
          if(int_severity<=sDEBUG3) s=sDEBUG3; else
            if(int_severity<=sDEBUG2) s=sDEBUG2; else
              if(int_severity<=sDEBUG1) s=sDEBUG1; else
                if(int_severity<=sDEBUG) s=sDEBUG; else
                  if(int_severity<=sINFO) s=sINFO; else
                    if(int_severity<=sLOG) s=sLOG; else
                      if(int_severity<=sWARNING) s=sWARNING; else
                        if(int_severity<=sERROR) s=sERROR; else
                          s=sFATAL;
        switch(s){
        case sFATAL: sevstring="FATAL   "; break;
        case sERROR: sevstring="ERROR   "; break;
        case sWARNING: sevstring="WARNING "; break;
        case sLOG: sevstring="LOG     "; break;
        case sINFO: sevstring="INFO    "; break;
        case sDEBUG: sevstring="DEBUG   "; break;
        case sDEBUG1: sevstring="DEBUG1  "; break;
        case sDEBUG2: sevstring="DEBUG2  "; break;
        case sDEBUG3: sevstring="DEBUG3  "; break;
        case sDEBUG4: sevstring="DEBUG4  "; break;
        default:
          std::cerr << "fatal internal error in logging.cpp"<<std::endl;
          exit(5);
        }
        std::string thisfilename=level_to_filename[s];

        if(int_severity>=_level){
          // now find out where to put this message:
          if (!filename_to_ostream.count(thisfilename)){
            if((filename_to_ostream[thisfilename]=new std::ofstream(thisfilename.c_str()))){
              __priv_GAMBIT_message(sDEBUG,"",0,"logcore","opened logfile: "+thisfilename);
            }else{
              std::cerr<< "logging.cpp fatal log system error. could not open logfile "<<thisfilename<<std::endl;
              exit(5);
            }
          }
        }
        msgnum++ ;
        stream << "[GAMBITmsg#"<<msgnum<<"]:" ;
        stream << sevstring  ;
        stream << filename ;
        if(linenno>0){
          stream <<  "#" ;
          stream << linenno << " " ;
        }
        stream << prettyf ;
        stream << ": '"<<message<<"'" <<std::endl;

        if(int_severity>=_echolevel){
          if(int_severity>=int(sWARNING)){
            std::cerr<<stream.str();
          }else{
            std::cout<<stream.str();
          }
        }

        if(int_severity>=_level){
          if (filename_to_ostream.count(thisfilename)){
            (*filename_to_ostream[thisfilename])<<stream.str();
            // for now flush after each line. We may want to have this as an options
            // if it slows down the code.
            (*filename_to_ostream[thisfilename]).flush();
          }
        }
      }
    };

    /* *******************************************************
     * Implementation of logcore methods:
     */
    /*! \brief Generate string containing stacktrace
     * \date 2011 Aug 23
     * \author Johan Lundberg
     */
    std::string stacktrace() throw(){
      std::stringstream result;
      void *array[25]; // up to 25 calls deep
      size_t size;
      size = backtrace(array, 25);
      // print out all the frames:
      char ** symbols=0;
      try{
        if((symbols=backtrace_symbols(array, size))){
          for (unsigned int i=0;i<size;i++){
            result<<"@:"<<i<< " "<<demangle_traceline(symbols[i]);
            if(i+1<size) result<<std::endl;
          }
        }
      }catch(...){ }
      if(symbols) {
        std::free(symbols);
        return result.str();
      }else{
        std::cerr<<"logcore.cpp: stacktrace method failed. Going on anyway"<<std::endl;
        return "(Stack Trace Failed). "+result.str();
      }
    }

    /*! \brief function to demangle stacktrace strings.
     *
     * For example, it turns this string:
     *  ./exeption.bin(_ZN5GAMBIT8logsetup10stacktraceEv+0x4c) [0x805c61a]
     *
     * into this string:
     *  ./exeption.bin(GAMBIT::stacktrace()+0x4c) [0x805c61a]
     *
     * \date 2011 Aug 23
     * \author Johan Lundberg
     */
    std::string
    demangle_traceline(const char* name) throw()
    {
      const int maxfuncname=400; // some c++ names are long
      int maxind=std::min(maxfuncname,int (strlen(name)));
      int begin=0;
      int end=0;
      int begin2=0;
      int end2=0;
      while(name[begin]!='(' &&begin<maxind){
        begin++;
      }
      begin++;
      end=begin+1;
      while(name[end]!='+'&&end<maxind){
        end++;
      }
      begin2=end;
      end2=begin2;
      while(name[end2]!=')'&&end2<maxind){
        end2++;
      }
      char tmpstr0[maxfuncname+1];
      char tmpstr[maxfuncname+1];
      char tmpstr2[maxfuncname+1];
      // raw function mame
      for(int i=0;i<(end-begin)&&i<maxind-1;i++){
        tmpstr[i+1]=0;
        tmpstr[i]=name[i+begin];
      }
      // part before first (
      for(int i=0;i<begin&&i<maxind-1;i++){
        tmpstr0[i+1]=0;
        tmpstr0[i]=name[i];
      }
      // part after function name
      for(int i=0;i+end+1<maxind&&i<maxind-1;i++){
        tmpstr2[i+1]=0;
        tmpstr2[i]=name[i+end+1];
      }

      std::size_t len;
      int         stat;
      char*realname=0;
      std::string out;
      try{
        if ((realname = abi::__cxa_demangle(tmpstr,NULL,&len,&stat))){
          out=std::string(tmpstr0)+std::string(realname)+"+"+std::string(tmpstr2);
        }
      }catch(...){}
      if(realname){
        std::free(realname);
        realname=0;
        return out;
      }else{
        return name;
      }
    }

    void setLogLevel(severity_t s){
      logcore_imp::instance()->_setLogLevel(s);
    }
    void setLogLevel(int s){
      logcore_imp::instance()->_setLogLevel(s);
    }
    void setEchoLevel(severity_t s){
      logcore_imp::instance()->_setEchoLevel(s);
    }
    void setEchoLevel(int s){
      logcore_imp::instance()->_setEchoLevel(s);
    }
    void setfile_range(std::string name,int lowedge,int highedge){
      logcore_imp::instance()->_setfile_range(name, lowedge,highedge);
    }

    void setfile(std::string name){ logcore_imp::instance()->setfile_range(name); }

    void setfile_upto_LOG(std::string name){ logcore_imp::instance()->setfile_range(name,INT_MIN,sLOG); }

    void setfile_upto_DEBUG(std::string name,unsigned int deblevel){ logcore_imp::instance()->setfile_range(name,INT_MIN,-abs(deblevel)); }

    void setfile_upto_INFO(std::string name){ logcore_imp::instance()->setfile_range(name,INT_MIN,sINFO); }

    void setfile_upto_WARNING(std::string name){ logcore_imp::instance()->setfile_range(name,INT_MIN,sWARNING); }

    void setfile_upto_ERROR(std::string name){ logcore_imp::instance()->setfile_range(name,INT_MIN,sERROR); }

    void setfile_downto_LOG(std::string name){ logcore_imp::instance()->setfile_range(name,sLOG,INT_MAX); }

    void setfile_downto_DEBUG(std::string name){ logcore_imp::instance()->setfile_range(name,sDEBUG,INT_MAX); }

    void setfile_downto_INFO(std::string name){ logcore_imp::instance()->setfile_range(name,sINFO,INT_MAX); }

    void setfile_downto_WARNING(std::string name){ logcore_imp::instance()->setfile_range(name,sWARNING,INT_MAX); }

    void setfile_downto_ERROR(std::string name){ logcore_imp::instance()->setfile_range(name,sERROR,INT_MAX); }

    void __priv_debug(std::string filename,int linenno,std::string prettyf,std::string message,unsigned int level) {
      if(level==0) level=sDEBUG;
      logcore_imp::instance()->__priv_GAMBIT_message(-abs(level) ,filename,linenno,prettyf,message);
    }
    void __priv_info(std::string filename,int linenno,std::string prettyf,std::string message) {
      logcore_imp::instance()->__priv_GAMBIT_message(sINFO  ,filename,linenno,prettyf,message);
    }
    void __priv_log(std::string filename,int linenno,std::string prettyf,std::string message) {
      logcore_imp::instance()->__priv_GAMBIT_message(sLOG   ,filename,linenno,prettyf,message);
    }
    void __priv_warning(std::string filename,int linenno,std::string prettyf,std::string message) {
      logcore_imp::instance()->__priv_GAMBIT_message(sWARNING  ,filename,linenno,prettyf,message);
    }
    void __priv_error(std::string filename,int linenno,std::string prettyf,std::string message) {
      logcore_imp::instance()->__priv_GAMBIT_message(sERROR   ,filename,linenno,prettyf,message);
    }
    void __priv_fatal(std::string filename,int linenno,std::string prettyf,std::string message) {
      logcore_imp::instance()->__priv_GAMBIT_message(sFATAL ,filename,linenno,prettyf,message);
      logcore_imp::instance()->__priv_GAMBIT_message(sFATAL ,"",0,"logcore","calling 'exit' now!");
      exit(1);
    }

  } // namespace
} // namespace

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#ifdef LOGCORE_MAIN_ENABLE
/********************************************
 * example use of logging. enable this with gcc option -DLOGCORE_MAIN_ENABLE
 */
int main(){
  using namespace GAMBIT;

  GAMBIT::setLogLevel(GAMBIT::sDEBUG);

  GAMBIT_MSG_DEBUG(" entering a");
  GAMBIT_MSG_WARNING(" WW 2") ;
  GAMBIT_MSG_INFO(" leaving b");
  //  GAMBIT::logsetup::setfile_range("_bbaaa",-10000,10000);
  if(0)
    GAMBIT_MSG_WARNING(" hello in d");
  else
    GAMBIT_MSG_WARNING(" hello in q") ;

  GAMBIT_MSG_DEBUG(" entering a");

  GAMBIT_MSG_LOG(" exit c");

  GAMBIT_MSG_WARNING(" hello in d");
  GAMBIT_MSG_ERROR(" and something ");
  GAMBIT_MSG_FATAL(" ... bad ");

  return 0;
}
#endif
#endif
