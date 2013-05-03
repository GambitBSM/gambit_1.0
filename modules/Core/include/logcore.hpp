#ifndef __gambit_logcore_hpp_
#define __gambit_logcore_hpp_ 1
#include <string>
#include <sstream>
#include <limits.h>

/*! \file logcore.hpp
 * \brief Interface for logging.
 *
 * Declares the class gambit::logsetup, defining methods e.g. for setting
 * the logfiles and active log/debug levels.
 *
 * as well as the user macros:
 *
 *  GAMBIT_MSG_DEBUG(text)
 *  GAMBIT_MSG_DEBUG(detail_level,text)  // with optional level. default is 0. Use a higher integer for even lower level debug messages.
 *
 *  GAMBIT_MSG_INFO(text)
 *
 *  GAMBIT_MSG_LOG(text)
 *
 *  GAMBIT_MSG_WARNING(text)
 *
 *  GAMBIT_MSG_ERROR(text)
 *
 *  GAMBIT_MSG_FATAL(text)
 *
 */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
// GCC supports __PRETTY_FUNCTION__. Other compilers have other
// things like this, but for now we only use these with GCC
// we use __FUNCTION__ for now. nicer to read those logs.
#if ! ( __GNUC__ > 2 )
#define __FUNCTION__ __func__
#define __LINE__ 0
#define __FILE__ "[unknown]"
#endif

// the stringstreams may make the logging slow, but it makes use easier,
// look at DarkSusyEngine for examples

#ifndef GAMBIT_BUILDOPT_LOGLIMIT
#define GAMBIT_BUILDOPT_LOGLIMIT -1000
#endif

// shorthand helper macro for the implementation of the user macros below:
#define GAMBIT_MSG_IMP_DBG0sel_(text)            \
  GAMBIT_MSG_IMP_DBG1_(text,0)
#define GAMBIT_MSG_IMP_DBG1sel_(text,dblevel)    \
  GAMBIT_MSG_IMP_DBG1_(text,dblevel)

// ** begin MSG_DEBUG internals:
// GAMBIT_MSG_DEBUG has an optional argument. This requires the following
// complicated definition:
#define GAMBIT_MSG_DBG_IMPL_ARGPIC_HELP_(arg1, arg2, arg3, ...) arg3
#define GAMBIT_MSG_DBG_IMPL_ARGPIC_(...)                                 \
  GAMBIT_MSG_DBG_IMPL_ARGPIC_HELP_(__VA_ARGS__,                          \
                                  GAMBIT_MSG_IMP_DBG1sel_, GAMBIT_MSG_IMP_DBG0sel_ ,)
#define GAMBIT_MSG_DEBUG(...) GAMBIT_MSG_DBG_IMPL_ARGPIC_(__VA_ARGS__)(__VA_ARGS__)
// Specific implementation for MSG_DEBUG:
#define GAMBIT_MSG_IMP0_(method,text)                            \
  do { std::stringstream ss; ss <<text;                         \
    method(__FILE__,__LINE__,__FUNCTION__,ss.str());}while (0)

// The if statement allows optional logging of messages with log level <0.
// should be optimized out by compiler when not required.
#define GAMBIT_MSG_IMP_DBG1_(text,dblevel)                               \
  do { if((0==(dblevel))||(((GAMBIT_BUILDOPT_LOGLIMIT)<0)&&(0<(dblevel)))){std::stringstream ss; ss <<text; \
      ::gambit::logsetup::__priv_debug(__FILE__,__LINE__,__FUNCTION__,ss.str(),dblevel);}}while (0)
// ** end of MSG_DEBUG internals.

#endif

#define GAMBIT_MSG_FATAL(text) GAMBIT_MSG_IMP0_(::gambit::logsetup::__priv_fatal,text<<"'"<<std::endl<<"stacktrace:'"<<::gambit::logsetup::stacktrace())
#define GAMBIT_MSG_ERROR(text) GAMBIT_MSG_IMP0_(::gambit::logsetup::__priv_error,text)
#define GAMBIT_MSG_WARNING(text) GAMBIT_MSG_IMP0_(::gambit::logsetup::__priv_warning,text)
#define GAMBIT_MSG_LOG(text) GAMBIT_MSG_IMP0_(::gambit::logsetup::__priv_log,text)
#define GAMBIT_MSG_INFO(text) GAMBIT_MSG_IMP0_(::gambit::logsetup::__priv_info,text)
//#define GAMBIT_MSG_DEBUG(text) GAMBIT_MSG_IMP0_(::gambit::logsetup::__priv_debug,text)
/*! \brief. debug message.
 *  syntax: GAMBIT_MSG_DEBUG("message"); or:
 *          GAMBIT_MSG_DEBUG(level,"message"); // where level is a positive int.
 *          0 is the default. higher values (1,2,3,4) means more detailed debug message.
 *  \author Johan Lundberg
 */
#define GAMBIT_MSG_DEBUG(...) GAMBIT_MSG_DBG_IMPL_ARGPIC_(__VA_ARGS__)(__VA_ARGS__)

/*! clear out those below the requested debug level. By defauls GAMBIT_BUILDOPT_LOGKILL
 *  should not be set. The numbers have nothing to do with the internal values of the severity enum.
 *
 *-N: turn off also debug specified with optional debug level: debug level N and below
 * 0: turn off also debug specified with optional debug level: debug level 0 and below
 * 1: turn off debug
 * 2: turn off also info
 * 3: turn off also log
 * 4: turn off also warning
 */
#ifndef DOXYGEN_SHOULD_SKIP_THIS
#if ( GAMBIT_BUILDOPT_LOGLIMIT > 0 )
#undef  GAMBIT_MSG_IMP_DBG0sel_
#define GAMBIT_MSG_IMP_DBG0sel_(text) do{}while(0)
#endif
#if ( GAMBIT_BUILDOPT_LOGLIMIT > 1 )
#undef  GAMBIT_MSG_INFO
#define GAMBIT_MSG_INFO(text) do{}while(0)
#endif
#if ( GAMBIT_BUILDOPT_LOGLIMIT > 2 )
#undef  GAMBIT_MSG_LOG
#define GAMBIT_MSG_LOG(text) do{}while(0)
#endif
#if ( GAMBIT_BUILDOPT_LOGLIMIT > 3 )
#undef  GAMBIT_MSG_WARNING
#define GAMBIT_MSG_WARNING(text) do{}while(0)
#endif
#endif

namespace gambit {
  /*! \brief Logging facility
   *
   * The logsetup defines only static methods and no object can be made.
   *
   * The main user interface are the _macros_ listed in logcore.h
   *
   * The list above is in order of severity. A fatal message terminates the execution by
   * calling exit() after the message is handled.
   *
   * The logcore supports logging each type of message to its own or common files.
   *
   *
   * To log all messages of severity WARNING or higher to the file errors.txt, do:
   * \code
   * gambit::logsetup::setfile_downto_WARNING("errors.txt")
   * \endcode
   * The logcore supports independent logging to stdout/stderr and files.
   *
   * For example: To set the level threshold to LOG for printing to stdout/stderr:
   * \code
   * gambit::logsetup::setEchoLevel(gambit::logsetup::sLOG);
   * \endcode
   * For example: To set the level threshold to DEBUG for writing to files:
   * \code
   * gambit::logsetup::setLogLevel(gambit::logsetup::sDEBUG);
   * \endcode
   * Note: the use of the setfile_... methods do not modify the logging level. Files are
   *       automatically open and closed as required.
   * Note: setting EchoLevel also sets Log level so that any message Echoed is also logged to file.
   *       If needed, this can be sidestepped by setting LogLevel after EchoLevel.
   *
   * \date 2011-08-17 -- 2011-08-19
   * \author Johan Lundberg
   *
   * A note on the implementation:
   * Internally the logcore setup is using a singleton of a class declared in the .cxx file.
   * Flushing, closing of the logfile are done in the destructor, which is registered
   * using 'atexit()'.
   */
  namespace logsetup {
    //! \brief log severity
    enum severity_t { sFATAL=100,sERROR=50,sWARNING=10,sLOG=5,sINFO=2,sDEBUG=0,sDEBUG1=-1,sDEBUG2=-2,sDEBUG3=-3,sDEBUG4=-4};
    //! \brief set log level for writing to files
    void setLogLevel(severity_t s);
    void setLogLevel(int s);
    //! \brief set log level for writing to screen. File logging level will be raised to the same if lower.
    void setEchoLevel(severity_t s);
    void setEchoLevel(int s);

    //! \brief change logfile name for all outputs
    void setfile(std::string name);

    //! \brief change logfile name for all outputs from severity lowedge to and including highedge
    void setfile_range(std::string name,int lowedge=INT_MIN,int highedge=INT_MAX);

    //! \brief change logfile name for all outputs of severity DEBUG or less important
    void setfile_upto_DEBUG(std::string name,unsigned int deblevel=0);
    //! \brief change logfile name for all outputs of severity LOG orb less important
    void setfile_upto_LOG(std::string name);
    //! \brief change logfile name for all outputs of severity INFO or less important
    void setfile_upto_INFO(std::string name);
    //! \brief change logfile name for all outputs of severity WARNING or less important
    void setfile_upto_WARNING(std::string name);
    //! \brief change logfile name for all outputs of severity ERROR or less important
    void setfile_upto_ERROR(std::string name);
    //! \brief change logfile name for all outputs of severity LOG or worse
    void setfile_downto_LOG(std::string name);
    //! \brief change logfile name for all outputs of severity DEBUG or worse
    void setfile_downto_DEBUG(std::string name);
    //! \brief change logfile name for all outputs of severity INFO or worse
    void setfile_downto_INFO(std::string name);
    //! \brief change logfile name for all outputs of severity WARNING or worse
    void setfile_downto_WARNING(std::string name);
    //! \brief change logfile name for all outputs of severity ERROR or worse
    void setfile_downto_ERROR(std::string name);

    //! \brief get strcktrace string of current state
    std::string stacktrace() throw();
    //! \brief convert symbols in stacktrace line
    std::string demangle_traceline(const char* name) throw();

    //! default log filename for errors
    inline std::string _default_errfile(){ return "_gambit.logs.err" ;};
    //! default log filename for non-errors
    inline std::string _default_logfile(){ return "_gambit.logs.log" ;};

    // these methods should not be called by the user but needs
    // to be public so they can be called from the logging macros
    //! \brief helper for debug macro
    void __priv_debug(std::string filename,int linenno,std::string fnme,std::string message,unsigned int dblevel=0);
    //! \brief helper for debug macro
    void __priv_info(std::string filename,int linenno,std::string fnme,std::string message);
    //! \brief helper for debug macro
    void __priv_log(std::string filename,int linenno,std::string fnme,std::string message);
    //! \brief helper for debug macro
    void __priv_warning(std::string filename,int linenno,std::string fnme,std::string message);
    //! \brief helper for debug macro
    void __priv_error(std::string filename,int linenno,std::string fnme,std::string message) ;
    //! \brief helper for debug macro
    void __priv_fatal(std::string filename,int linenno,std::string fnme,std::string message) ;

  }
}

#endif
