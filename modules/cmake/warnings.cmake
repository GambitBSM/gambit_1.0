# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script to arrange warning
#  options when compiling GAMBIT.  
#    
#************************************************
#                                                
#  Authors (add name and date if you modify):                                    
#                                                
#  \author Antje Putze
#          (antje.putze@lapth.cnrs.fr)              
#  \date 2014 Sep, Oct, Nov
#
#************************************************

option(WERROR "WERROR" OFF)

include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG("-Wall" CXX_SUPPORTS_WALL)
if (CXX_SUPPORTS_WALL)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
endif()

CHECK_CXX_COMPILER_FLAG("-Wextra" CXX_SUPPORTS_WEXTRA)
if (CXX_SUPPORTS_WEXTRA)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
endif()

if(${WERROR})
  CHECK_CXX_COMPILER_FLAG("-Werror" CXX_SUPPORTS_WERROR)
  if (CXX_SUPPORTS_WERROR)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
  endif()
else()
 message(STATUS "Werror is disabled")
endif()

CHECK_CXX_COMPILER_FLAG("-Wno-unused-local-typedefs" CXX_SUPPORTS_WUNUSED_LOCAL_TYPEDEFS)
 	if (CXX_SUPPORTS_WUNUSED_LOCAL_TYPEDEFS)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-local-typedefs")
endif()

CHECK_CXX_COMPILER_FLAG("-Wno-unknown-pragmas" CXX_SUPPORTS_WNO_UNKNOWN_PRAGMAS)
if (CXX_SUPPORTS_WNO_UNKNOWN_PRAGMAS)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unknown-pragmas")
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
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Qunused-arguments")
    endif()
    CHECK_CXX_COMPILER_FLAG("-Wno-self-assign" CXX_SUPPORTS_WNO_SELF_ASSIGN)
    if (CXX_SUPPORTS_WNO_SELF_ASSIGN)
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} Wno-self-assign")
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
