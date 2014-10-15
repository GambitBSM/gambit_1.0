# set include directores for GAMBIT
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Logs/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Utils/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Models/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Printers/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Core/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/ScannerBit/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/DarkBit/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/ExampleBit_A/include")

set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/contrib/SLHAPy8")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/contrib/slhaea")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/contrib/hep_simple_lib")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/contrib/mcutils/include")

set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/../extras/fast_sim/include")

include(CMakeParseArguments)

# function to add static GAMBIT library
function(add_gambit_library libraryname)
  cmake_parse_arguments(ARG "" "" "SOURCES;HEADERS;" "" ${ARGN})
  foreach (dir ${GAMBIT_INCDIRS})
    include_directories(${dir})
  endforeach()

  add_library(${libraryname} ${ARG_SOURCES} ${ARG_HEADERS})
  set_target_properties(${libraryname} PROPERTIES LIBRARY_OUTPUT_DIRECTORY "")
  
  string(FIND "${libraryname}" "Bit" ModuleBit REVERSE)
#  if(${ModuleBit} GREATER -1)
#    add_dependencies(${libraryname} gambitbase)
#  endif()
endfunction()

# function to add GAMBIT executable
function(add_gambit_executable executablename)
  cmake_parse_arguments(ARG "" "" "SOURCES;HEADERS;DONT_LINK_GAMBIT;" "" ${ARGN})

  foreach (dir ${GAMBIT_INCDIRS})
    include_directories(${dir})
  endforeach()

  add_executable(${executablename} ${ARG_SOURCES} ${ARG_HEADERS})

#  if (NOT ARG_DONT_LINK_GAMBIT)
#    set(LIBRARIES ${LIBRARIES} gambitbase)
#  endif()
  if (MPI_FOUND)
    set(LIBRARIES ${LIBRARIES} ${MPI_CXX_LIBRARIES})
  endif()
  if(Boost_FOUND)
    set(LIBRARIES ${LIBRARIES} ${Boost_LIBRARIES})
  endif()
  if (yaml_FOUND)
    set(LIBRARIES ${LIBRARIES} ${yaml_LDFLAGS})
  endif()
  if (GSL_FOUND)
    set(LIBRARIES ${LIBRARIES} ${GSL_LIBRARIES})
  endif()
  if (LIBDL_FOUND)
    set(LIBRARIES ${LIBRARIES} ${LIBDL_LIBRARY})
  endif()

  message(STATUS ${LIBRARIES})

  target_link_libraries(${executablename} ${LIBRARIES})
endfunction()
