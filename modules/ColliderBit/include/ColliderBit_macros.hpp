#ifndef __ColliderBit_macros_hpp__
#define __ColliderBit_macros_hpp__

/// After doing this a few times, I decided a macro would be neater, safer, and
/// less irritating. --Abram
#define GET_COLLIDER_RUNOPTION(OPTION_NAME, OPTION_TYPE)                            \
  try {                                                                             \
    OPTION_NAME = runOptions->getValue<OPTION_TYPE>(#OPTION_NAME);                  \
  } catch (...) {                                                                   \
    ColliderBit_error().raise(LOCAL_INFO, "Specify 'OPTION_NAME' in yaml file.");   \
  }


#endif /* defined __ColliderBit_macros_hpp__ */
