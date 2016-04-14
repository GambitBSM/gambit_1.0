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

/// For analysis factory function declaration
#define DECLARE_ANALYSIS_FACTORY(ANAME)                                    \
  HEPUtilsAnalysis* create_Analysis_ ## ANAME()
/// For analysis factory function definition
#define DEFINE_ANALYSIS_FACTORY(ANAME)                                     \
  HEPUtilsAnalysis* create_Analysis_ ## ANAME() {                          \
    return new Analysis_ ## ANAME();                                       \
  }
/// For the string based factory function mkAnalysis()
#define IF_X_RTN_CREATE_ANA_X(A)                                           \
  if (name == #A) return create_Analysis_ ## A()

/// For the string based SpecializablePythia function resetSpecialization()
#define IF_X_SPECIALIZEX(X)                                                \
  if (specName == #X) { _specialInit = X::init; return; }

/// Convenience macro for getting mandatory runoptions
#define GET_COLLIDER_RUNOPTION(OPTION_NAME, OPTION_TYPE)                   \
  do { try {                                                               \
    OPTION_NAME = runOptions->getValue<OPTION_TYPE>(#OPTION_NAME);         \
  } catch (...) {                                                          \
    std::string errMsg = "Specify '";                                      \
    errMsg += #OPTION_NAME;                                                \
    errMsg += "' of type '";                                               \
    errMsg += #OPTION_TYPE;                                                \
    errMsg += "' in yaml file.";                                           \
    ColliderBit_error().raise(LOCAL_INFO, errMsg);                         \
  } } while (0)

#endif /* defined __ColliderBit_macros_hpp__ */
