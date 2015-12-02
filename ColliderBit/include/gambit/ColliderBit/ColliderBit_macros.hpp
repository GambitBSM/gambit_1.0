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
#define DECLARE_ANALYSIS_FACTORY(ANAME)                                    \
  HEPUtilsAnalysis* create_Analysis_ ## ANAME();
#define DEFINE_ANALYSIS_FACTORY(ANAME)                                     \
  HEPUtilsAnalysis* create_Analysis_ ## ANAME() {                          \
    return new Analysis_ ## ANAME();                                       \
  }

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

// My TIME_THAT_SHIT macros usually require some extra curly braces. Example:
// { TIME_THAT_SHIT(two_times_timer) { double f = 5.*9.; f = 7.*-3.; } }   
/*#define TIME_THAT_SHIT(TIMER_NAME)					\
ms __delta_##TIMER_NAME;                                                   \
const int me = omp_get_thread_num();                                       \
double TIMER_NAME = -1.;                                                   \
for(tp __start_##TIMER_NAME = steady_clock::now(); TIMER_NAME < 0;         \
    __delta_##TIMER_NAME = std::chrono::duration_cast<ms> (                \
            steady_clock::now() - __start_##TIMER_NAME),                   \
    TIMER_NAME = __delta_##TIMER_NAME.count(),                             \
    timers[me][#TIMER_NAME] += TIMER_NAME / omp_get_max_threads(),         \
    timer_maxima[me][#TIMER_NAME] =                                        \
            TIMER_NAME > timer_maxima[me][#TIMER_NAME] ?                   \
            TIMER_NAME : timer_maxima[me][#TIMER_NAME])

#define TIME_THAT_SHIT_GLOBALLY(TIMER_NAME)                                \
ms __delta_##TIMER_NAME;                                                   \
double TIMER_NAME = -1.;                                                   \
for(tp __start_##TIMER_NAME = steady_clock::now(); TIMER_NAME < 0;         \
    __delta_##TIMER_NAME = std::chrono::duration_cast<ms> (                \
            steady_clock::now() - __start_##TIMER_NAME),                   \
    TIMER_NAME = __delta_##TIMER_NAME.count(),                             \
    global_timers[#TIMER_NAME] += TIMER_NAME)*/

#endif /* defined __ColliderBit_macros_hpp__ */
