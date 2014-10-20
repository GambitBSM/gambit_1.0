option(WERROR "WERROR" ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
if(${WERROR})
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
else()
 message(STATUS "Werror is disabled")
endif()

# set gcc and clang warnings
if(NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unknown-pragmas -Wno-unused-local-typedefs")
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
  # "remark #981: operands are evaluated in unspecified order"
  # This is a false positive, suppress it.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd981")

  # "remark #1418: external function definition with no prior declaration"
  # This can safely be ignord according to the ICC docs.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd1418")

  # "remark #1419: external declaration in primary source file"
  # This can safely be ignord according to the ICC docs.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -wd1419")
endif()
