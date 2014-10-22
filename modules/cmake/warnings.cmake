option(WERROR "WERROR" ON)

include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG("-Wall" CXX_SUPPORTS_WALL)
if (CXX_SUPPORTS_WALL)
  add_definitions("-Wall")
endif()

CHECK_CXX_COMPILER_FLAG("-Wextra" CXX_SUPPORTS_WEXTRA)
if (CXX_SUPPORTS_WEXTRA)
  add_definitions("-Wextra")
endif()

if(${WERROR})
  CHECK_CXX_COMPILER_FLAG("-Werror" CXX_SUPPORTS_WERROR)
  if (CXX_SUPPORTS_WERROR)
    add_definitions("-Werror")
  endif()
else()
 message(STATUS "Werror is disabled")
endif()

CHECK_CXX_COMPILER_FLAG("-Wno-unused-local-typedefs" CXX_SUPPORTS_WUNUSED_LOCAL_TYPEDEFS)
 	if (CXX_SUPPORTS_WUNUSED_LOCAL_TYPEDEFS)
	add_definitions ("-Wno-unused-local-typedefs")
endif()

CHECK_CXX_COMPILER_FLAG("-Wno-unknown-pragmas" CXX_SUPPORTS_WNO_UNKNOWN_PRAGMAS)
if (CXX_SUPPORTS_WNO_UNKNOWN_PRAGMAS)
  add_definitions("-Wno-unknown-pragmas")
endif()

# supress additional warnings when using clang and ccache
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  EXEC_PROGRAM(sh
               ARGS ${CMAKE_SOURCE_DIR}/cmake/check_for_ccache.sh ${CMAKE_CXX_COMPILER}
               RETURN_VALUE ret)
  if (${ret})
    message(STATUS "Using ccache with clang - disabling some warnings")
    CHECK_CXX_COMPILER_FLAG("-Qunused-arguments" CXX_SUPPORTS_QUNUSED_ARGUMENTS)
    if (CXX_SUPPORTS_QUNUSED_ARGUMENTS)
      add_definitions ("-Qunused-arguments")
    endif()
    CHECK_CXX_COMPILER_FLAG("-Wno-self-assign" CXX_SUPPORTS_WNO_SELF_ASSIGN)
    if (CXX_SUPPORTS_WNO_SELF_ASSIGN)
      add_definitions ("Wno-self-assign")
    endif()
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
