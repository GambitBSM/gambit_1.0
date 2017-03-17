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
#define GET_COLLIDER_RUNOPTION(VARIABLE_NAME, OPTION_NAME, OPTION_TYPE)   \
try                                                                       \
{                                                                         \
  VARIABLE_NAME = runOptions->getValue< OPTION_TYPE >(OPTION_NAME);       \
}                                                                         \
catch (Gambit::exception& e)                                              \
{                                                                         \
  std::string errmsg = "Failed to read option '";                         \
  errmsg += OPTION_NAME;                                                  \
  errmsg += "' of type 'std::vector<";                                    \
  errmsg += #OPTION_TYPE;                                                 \
  errmsg += ">'.\n";                                                      \
  errmsg += "Please correct your settings and try again.\n";              \
  ColliderBit_error().raise(LOCAL_INFO, errmsg);                          \
}


#define GET_COLLIDER_RUNOPTION_VECTOR(VARIABLE_NAME, INDEX, OPTION_NAME, OPTION_TYPE)                   \
try                                                                       \
{                                                                         \
  VARIABLE_NAME = runOptions->getValue<std::vector<OPTION_TYPE > >(OPTION_NAME)[INDEX];  \
}                                                                          \
catch (Gambit::exception& e)                                               \
{                                                                          \
    std::string errmsg = "Failed to read option '";                        \
    errmsg += OPTION_NAME;                                               \
    errmsg += "' of type 'std::vector<";                                 \
    errmsg += #OPTION_TYPE;                                             \
    errmsg += ">'.\n";                                                  \
    errmsg += "Make sure that the type is correct and that the number of elements\n"; \
    errmsg += "match the number of colliders listed in option 'pythiaNames'\n"; \
    errmsg += "for the function 'operateLHCLoop'";                        \
    ColliderBit_error().raise(LOCAL_INFO, errmsg);                        \
}

#define GET_COLLIDER_RUNOPTION_VECTOR_OR_DEF(VARIABLE_NAME, INDEX, OPTION_NAME, OPTION_TYPE, DEFAULT_VALUE)            \
if (runOptions->hasKey(OPTION_NAME))                                      \
{                                                                         \
  try {                                                                   \
      VARIABLE_NAME = runOptions->getValue<std::vector<OPTION_TYPE > >(OPTION_NAME)[INDEX];  \
    } catch (...) {                                                          \
      std::string errmsg = "Failed to read option '";                        \
      errmsg += OPTION_NAME;                                               \
      errmsg += "' of type 'std::vector<";                                 \
      errmsg += #OPTION_TYPE;                                             \
      errmsg += ">'.\n";                                                  \
      errmsg += "Make sure that the type is correct and that the number of elements\n"; \
      errmsg += "match the number of colliders listed in option 'pythiaNames'\n"; \
      errmsg += "for the function 'operateLHCLoop'";                        \
      ColliderBit_error().raise(LOCAL_INFO, errmsg);                        \
  }                                                                         \
}                                                                           \
else                                                                       \
{                                                                          \
  VARIABLE_NAME = DEFAULT_VALUE;                                           \
}                                                                          


#endif /* defined __ColliderBit_macros_hpp__ */
