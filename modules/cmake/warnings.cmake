option(WERROR "WERROR" ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
if(${WERROR})
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
else()
 message(STATUS "Werror is disabled")
endif()

# set gcc and clang warnings for AMS root
if(NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unknown-pragmas")
endif()

# supress additional warnings when using clang and ccache
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  EXEC_PROGRAM(sh
               ARGS ${CMAKE_SOURCE_DIR}/cmake/check_for_ccache.sh ${CMAKE_CXX_COMPILER}
               RETURN_VALUE ret)
  if (${ret})
     message(STATUS "Using ccache with clang - disabling some warnings")
     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Qunused-arguments -Wno-self-assign")
  endif()
endif()


# set intel warnings
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
  # "remark #181: argument is incompatible with corresponding format string conversion"
  # This warning chokes on ac_producer, which should be fixed.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd181")

  # "remark #383: value copied to temporary, reference to temporary used"
  # Fires on foobar("test", ..) string literals, where we except const string& references.
  # Seems to work fine, we should investigate - I think this is a false positive.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd383")

  # "remark #444: destructor for base class "std::iterator<std::bidirectional_iterator_tag, TObject *, ptrdiff_t={long},
  # const TObject **, const TObject *&>" (declared at line 110 of "/usr/include/c++/4.3/bits/stl_iterator_base_types.h") is not virtual"
  # Workaround ROOT 5.27 warning /lustre/jwork/vsk10/vsk1003/Offline/root/Linux/527.icc64/include/TObjArray.h(124): 
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd444")

  # "remark #981: operands are evaluated in unspecified order"
  # This is a false positive, suppress it.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd981")

  # "remark #1418: external function definition with no prior declaration"
  # This can safely be ignord according to the ICC docs.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd1418")

  # "remark #1419: external declaration in primary source file"
  # This can safely be ignord according to the ICC docs.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd1419")

  # "remark #1720: function "AC::ChargeAndError::operator new(size_t={unsigned long}, NotNullTag, void *)" has no
  # "corresponding member operator delete (to be called if an exception is thrown during initialization of an allocated object)
  # This is related to WTF_MAKE_ALLOCATED and can safely be suppressed - WTFs design just uses a special new operator.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd1720")

  # "remark #2259: non-pointer conversion from "double" to "Float_t={float}" may lose significant bits"
  # We should seriously investigate in each of these warnings.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd2259")

  # "remark #3180: unrecognized OpenMP #pragma"
  # This warning is generated when using AMS ROOT and it's OpenMP patches since we don't pass -openmp for icc
  # Warning only appears with icc14
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd3180")

  # SLC6 changes to make producer/ build with icc12 on slc6.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd873")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd161")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd271")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd279")

endif()
