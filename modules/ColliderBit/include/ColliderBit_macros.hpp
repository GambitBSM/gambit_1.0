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

/// Macros for analysis factory fns
#define DECLARE_ANALYSIS_FACTORY(ANAME) \
  Analysis* create_Analysis_ ## ANAME()
#define DEFINE_ANALYSIS_FACTORY(ANAME) \
  Analysis* create_Analysis_ ## ANAME() { return new Analysis_ ## ANAME(); }

/// Macros for collider factory fns
#define DECLARE_COLLIDER_FACTORY(CNAME, CCLASS)                          \
  CCLASS* create_ ## CNAME(const std::vector<std::string>&);
#define DEFINE_COLLIDER_FACTORY(CNAME, CCLASS)                         \
  CCLASS* create_ ## CNAME(const std::vector<std::string>& settings) {   \
    CCLASS* result = new CNAME();                                        \
    result->defaults();                                                  \
    result->init(settings);                                              \
    return result;                                                       \
  }

/// Convenience macro for getting runoptions.
#define GET_COLLIDER_RUNOPTION(OPTION_NAME, OPTION_TYPE)                 \
  try {                                                                  \
    OPTION_NAME = runOptions->getValue<OPTION_TYPE>(#OPTION_NAME);       \
  } catch (...) {                                                        \
    std::string errMsg = "Specify '";                                    \
    errMsg += #OPTION_NAME;                                              \
    errMsg += "' of type '";                                             \
    errMsg += #OPTION_TYPE;                                              \
    errMsg += "' in yaml file.";                                         \
    ColliderBit_error().raise(LOCAL_INFO, errMsg);                       \
  }


#endif /* defined __ColliderBit_macros_hpp__ */
