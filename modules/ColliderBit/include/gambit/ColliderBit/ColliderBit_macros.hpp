//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Useful ColliderBit specific macros.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///
///  *********************************************

#ifndef __ColliderBit_macros_hpp__
#define __ColliderBit_macros_hpp__

/// Macros for factory fns
/// @todo Semicolon handling
#define DECLARE_ANALYSIS_FACTORY(ANAME)                                          \
  BaseAnalysis* create_Analysis_ ## ANAME();
/// @todo Semicolon handling
#define DEFINE_ANALYSIS_FACTORY(ANAME)                                           \
  BaseAnalysis* create_Analysis_ ## ANAME() { return new Analysis_ ## ANAME(); }

/// @todo Semicolon handling
#define DECLARE_DETECTOR_FACTORY_NO_SETTINGS(DNAME, DCLASS)                      \
  DCLASS* create_ ## DNAME();
/// @todo Semicolon handling
#define DEFINE_DETECTOR_FACTORY_NO_SETTINGS(DNAME, DCLASS)                       \
  DCLASS* create_ ## DNAME() {                                                   \
    DCLASS* result = new DNAME();                                                \
    result->defaults();                                                          \
    result->init();                                                              \
    return result;                                                               \
  }

// TODO: may need to be different than collider factory at some point
/// @todo Semicolon handling
#define DECLARE_DETECTOR_FACTORY(DNAME, DCLASS)                          \
  DCLASS* create_ ## DNAME(const std::vector<std::string>&);
/// @todo Semicolon handling
#define DEFINE_DETECTOR_FACTORY(DNAME, DCLASS)                           \
  DCLASS* create_ ## DNAME(const std::vector<std::string>& settings) {   \
    DCLASS* result = new DNAME();                                        \
    result->defaults();                                                  \
    result->init(settings);                                              \
    return result;                                                       \
  }

/// Convenience macro for getting mandatory runoptions
#define GET_COLLIDER_RUNOPTION(OPTION_NAME, OPTION_TYPE)                 \
  do { try {                                                             \
    OPTION_NAME = runOptions->getValue<OPTION_TYPE>(#OPTION_NAME);       \
  } catch (...) {                                                        \
    std::string errMsg = "Specify '";                                    \
    errMsg += #OPTION_NAME;                                              \
    errMsg += "' of type '";                                             \
    errMsg += #OPTION_TYPE;                                              \
    errMsg += "' in yaml file.";                                         \
    ColliderBit_error().raise(LOCAL_INFO, errMsg);                       \
  } } while (0)


#endif /* defined __ColliderBit_macros_hpp__ */
