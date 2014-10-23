# set include directores for GAMBIT
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include/backend_types")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include/backend_types/BOSSMinimalExample_1_0")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include/backend_types/BOSSMinimalExample_1_1")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include/backend_types/BOSSMinimalExample_1_2")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include/backend_types/BOSSedPythia_1_0")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include/frontends")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Logs/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Utils/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Models/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Printers/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Core/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/ScannerBit/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/DarkBit/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/ExampleBit_A/include")

set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/../extras/fast_sim/include")

include(CMakeParseArguments)

# function to add static GAMBIT library
function(add_gambit_library libraryname)
  cmake_parse_arguments(ARG "" "OPTION" "SOURCES;HEADERS;" "" ${ARGN})

  add_library(${libraryname} ${ARG_OPTION} ${ARG_SOURCES} ${ARG_HEADERS})
  set_target_properties(${libraryname} PROPERTIES LIBRARY_OUTPUT_DIRECTORY "")

  if(${CMAKE_VERSION} VERSION_GREATER 2.8.10)
    foreach (dir ${GAMBIT_INCDIRS})
      target_include_directories(${libraryname} PUBLIC ${dir})
    endforeach()
  else()
    foreach (dir ${GAMBIT_INCDIRS})
      include_directories(${dir})
    endforeach()
  endif()
endfunction()

# function to add GAMBIT executable
function(add_gambit_executable executablename)
  cmake_parse_arguments(ARG "" "" "SOURCES;HEADERS;DONT_LINK_GAMBIT;" "" ${ARGN})

  add_executable(${executablename} ${ARG_SOURCES} ${ARG_HEADERS})

  if(${CMAKE_VERSION} VERSION_GREATER 2.8.10)
    foreach (dir ${GAMBIT_INCDIRS})
      target_include_directories(${executablename} PUBLIC ${dir})
    endforeach()
  else()
    foreach (dir ${GAMBIT_INCDIRS})
      include_directories(${dir})
    endforeach()
  endif()


#  if (NOT ARG_DONT_LINK_GAMBIT)
#    set(LIBRARIES ${LIBRARIES} gambitbase)
#  endif()
  if (MPI_FOUND)
    set(LIBRARIES ${LIBRARIES} ${MPI_CXX_LIBRARIES})
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

#  message(STATUS ${LIBRARIES})

  target_link_libraries(${executablename} ${LIBRARIES})
endfunction()
