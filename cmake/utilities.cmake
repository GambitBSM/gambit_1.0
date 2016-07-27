# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  Helpful CMake utility macros and functions for
#  GAMBIT.
#
#************************************************
#
#  Authors (add name and date if you modify):
#
#  \author Antje Putze
#          (antje.putze@lapth.cnrs.fr)
#  \date 2014 Sep, Oct, Nov
#        2015 Feb
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)
#  \date 2014 Nov, Dec
#
#  \author Ben Farmer
#          (benjamin.farmer@fysik.su.se)
#  \date 2016 Jan
#
#************************************************

include(CMakeParseArguments)

# Add precompiled header support
##include(cmake/PrecompiledHeader.cmake)
#include(cmake/cotire.cmake)

# defining some colors
string(ASCII 27 Esc)
set(ColourReset "${Esc}[m")
set(ColourBold  "${Esc}[1m")
set(Red         "${Esc}[31m")
set(Green       "${Esc}[32m")
set(Yellow      "${Esc}[33m")
set(Blue        "${Esc}[34m")
set(Magenta     "${Esc}[35m")
set(Cyan        "${Esc}[36m")
set(White       "${Esc}[37m")
set(BoldRed     "${Esc}[1;31m")
set(BoldGreen   "${Esc}[1;32m")
set(BoldYellow  "${Esc}[1;33m")
set(BoldBlue    "${Esc}[1;34m")
set(BoldMagenta "${Esc}[1;35m")
set(BoldCyan    "${Esc}[1;36m")
set(BoldWhite   "${Esc}[1;37m")

# Define the sed command to use differently for OSX and linux
if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(dashi "-i ''")
else()
  set(dashi "-i")
endif()

#Crash function for failed execute_processes
function(check_result result command)
  if(NOT ${result} STREQUAL "0")
    message(FATAL_ERROR "${BoldRed}Cmake failed because a GAMBIT python script failed.  Culprit: ${command}${ColourReset}")
  endif()
endfunction()

#Macro to retrieve GAMBIT modules
macro(retrieve_bits bits root excludes quiet)

  set(${bits} "")
  file(GLOB children RELATIVE ${root} ${root}/*Bit*)

  foreach(child ${children})
    string(FIND ${child} ".dSYM" FOUND_DSYM)
    if(IS_DIRECTORY ${root}/${child} AND ${FOUND_DSYM} EQUAL -1)

      # Work out if this Bit should be excluded or not.  Never exclude ScannerBit.
      set(excluded "NO")
      if(NOT ${child} STREQUAL "ScannerBit")
        foreach(x ${excludes})
          string(FIND ${child} ${x} location)
          if(${location} EQUAL 0)
            set(excluded "YES")
          endif()
        endforeach()
      endif()

      # Exclude or add this bit.
      if(${excluded})
        if(NOT ${quiet} STREQUAL "Quiet")
          message("${BoldCyan} X Excluding ${child} from GAMBIT configuration.${ColourReset}")
        endif()
      else()
        list(APPEND ${bits} ${child})
      endif()

    endif()
  endforeach()

endmacro()

# Arrange clean commands
include(cmake/cleaning.cmake)

# Arrange make backends command (will be filled in from backends.cmake)
add_custom_target(backends)

# Arrange make scanners command (will be filled in from scanners.cmake)
add_custom_target(scanners)

# Macro to clear the build stamp manually for an external project
macro(enable_auto_rebuild package)
  set(rmstring "${CMAKE_BINARY_DIR}/${package}-prefix/src/${package}-stamp/${package}-build")
  add_custom_target(check-rebuild-${package} ${CMAKE_COMMAND} -E remove -f ${rmstring})
  add_dependencies(${package} check-rebuild-${package})
endmacro()

# Macro to write some shell commands to clean an external code.  Adds clean-[package] and nuke-[package]
macro(add_external_clean package dir dl target)
  set(rmstring "${CMAKE_BINARY_DIR}/${package}-prefix/src/${package}-stamp/${package}")
  add_custom_target(clean-${package} COMMAND ${CMAKE_COMMAND} -E remove -f ${rmstring}-configure ${rmstring}-build ${rmstring}-install ${rmstring}-done
                                     COMMAND [ -e ${dir} ] && cd ${dir} && ([ -e makefile ] || [ -e Makefile ] && ${CMAKE_MAKE_PROGRAM} ${target}) || true)
  add_custom_target(nuke-${package} DEPENDS clean-${package}
                                    COMMAND ${CMAKE_COMMAND} -E remove -f ${rmstring}-download ${rmstring}-mkdir ${rmstring}-patch ${rmstring}-update ${rmstring}-gitclone-lastrun.txt ${dl} || true
                                    COMMAND ${CMAKE_COMMAND} -E remove_directory ${dir} || true)
endmacro()

# Macro to write some shell commands to clean an external chained code.  Adds clean-[package] and nuke-[package]
macro(add_chained_external_clean package dir target dependee)
  set(rmstring "${CMAKE_BINARY_DIR}/${package}-prefix/src/${package}-stamp/${package}")
  add_custom_target(clean-${package} COMMAND ${CMAKE_COMMAND} -E remove -f ${rmstring}-configure ${rmstring}-build ${rmstring}-install ${rmstring}-done
                                     COMMAND [ -e ${dir} ] && cd ${dir} && ([ -e makefile ] || [ -e Makefile ] && ${CMAKE_MAKE_PROGRAM} ${target}) || true)
  add_custom_target(dependeenuke-${package} DEPENDS clean-${package}
                                    COMMAND ${CMAKE_COMMAND} -E remove -f ${rmstring}-download ${rmstring}-mkdir ${rmstring}-patch ${rmstring}-update ${rmstring}-gitclone-lastrun.txt || true)
  add_dependencies(clean-${dependee} clean-${package}) 
  add_dependencies(nuke-${dependee} dependeenuke-${package}) 
endmacro()

# Macro to add all additional targets for a new backend
macro(add_extra_targets package dir dl target)
  enable_auto_rebuild(${package})
  add_external_clean(${package} ${dir} ${dl} ${target})
  set_target_properties(${package} PROPERTIES EXCLUDE_FROM_ALL 1)
  add_dependencies(clean-backends clean-${package})
  add_dependencies(nuke-backends nuke-${package})
endmacro()

# Macro to add all additional targets for a new chained backend
macro(add_chained_extra_targets package dir target dependee)
  enable_auto_rebuild(${package})
  add_chained_external_clean(${package} ${dir} ${target} ${dependee})
  set_target_properties(${package} PROPERTIES EXCLUDE_FROM_ALL 1)
  add_dependencies(clean-backends clean-${package})
endmacro()

# Macro to add all additional targets for a new scanner
macro(add_extra_targets_scanner package dir dl target)
  enable_auto_rebuild(${package})
  add_external_clean(${package} ${dir} ${dl} ${target})
  set_target_properties(${package} PROPERTIES EXCLUDE_FROM_ALL 1)
  add_dependencies(clean-scanners clean-${package})
  add_dependencies(nuke-scanners nuke-${package})
endmacro()

# Function to add GAMBIT directory if and only if it exists
function(add_subdirectory_if_present dir)
  if(EXISTS "${PROJECT_SOURCE_DIR}/${dir}")
    add_subdirectory(${dir})
  endif()
endfunction()

# Function to add static GAMBIT library
function(add_gambit_library libraryname)
  cmake_parse_arguments(ARG "" "OPTION" "SOURCES;HEADERS" "" ${ARGN})

  add_library(${libraryname} ${ARG_OPTION} ${ARG_SOURCES} ${ARG_HEADERS})
  add_dependencies(${libraryname} model_harvest)
  add_dependencies(${libraryname} backend_harvest)
  add_dependencies(${libraryname} printer_harvest)
  add_dependencies(${libraryname} module_harvest)
  add_dependencies(${libraryname} yaml-cpp)

  if(${CMAKE_VERSION} VERSION_GREATER 2.8.10)
    foreach (dir ${GAMBIT_INCDIRS})
      target_include_directories(${libraryname} PUBLIC ${dir})
    endforeach()
  else()
    foreach (dir ${GAMBIT_INCDIRS})
      include_directories(${dir})
    endforeach()
  endif()

  if(${ARG_OPTION} STREQUAL SHARED AND APPLE)
    set_property(TARGET ${libraryname} PROPERTY SUFFIX .so)
  endif()

  # Cotire speeds up compilation by automatically generating and precompiling prefix headers for the targets
  #cotire(${libraryname})
  ##add_precompiled_header(${libraryname} "${PROJECT_SOURCE_DIR}/Elements/include/gambit/Elements/common.hpp" TRUE)

endfunction()

# Macro to strip a library out of a set of full paths
macro(strip_library KEY LIBRARIES)
  set(TEMP "${${LIBRARIES}}")
  set(${LIBRARIES} "")
  foreach(lib ${TEMP})
    if ("${lib}" STREQUAL "debug"   OR
        "${lib}" STREQUAL "general" OR
        "${lib}" STREQUAL "optimized")
      set(LIB_TYPE_SPECIFIER "${lib}")
    else()
      string(FIND "${lib}" "/${KEY}." FOUND_KEY1)
      string(FIND "${lib}" "/lib${KEY}." FOUND_KEY2)
      if (${FOUND_KEY1} EQUAL -1 AND ${FOUND_KEY2} EQUAL -1)
        if (LIB_TYPE_SPECIFIER)
          list(APPEND ${LIBRARIES} ${LIB_TYPE_SPECIFIER})
        endif()
        list(APPEND ${LIBRARIES} ${lib})
      endif()
      set(LIB_TYPE_SPECIFIER "")
  endif()
  endforeach()
  set(TEMP "")
  set(FOUND_KEY1 "")
  set(FOUND_KEY2 "")
endmacro()

# Function to add a GAMBIT custom command and target
macro(add_gambit_custom target filename HARVESTER DEPS)
  add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/${filename}
                     COMMAND python ${${HARVESTER}} -x __not_a_real_name__,${itch_with_commas}
                     COMMAND touch ${CMAKE_BINARY_DIR}/${filename}
                     WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
                     DEPENDS ${${HARVESTER}}
                             ${HARVEST_TOOLS}
                             ${PROJECT_BINARY_DIR}/CMakeCache.txt
                             ${${DEPS}})
  add_custom_target(${target} DEPENDS ${CMAKE_BINARY_DIR}/${filename})
endmacro()

# Function to remove specific GAMBIT build files
function(remove_build_files)
  foreach (f ${ARGN})
    if (EXISTS "${CMAKE_BINARY_DIR}/${f}")
      file(REMOVE "${CMAKE_BINARY_DIR}/${f}")
    endif()
  endforeach()
endfunction()

# Function to add GAMBIT executable
function(add_gambit_executable executablename LIBRARIES)
  cmake_parse_arguments(ARG "" "" "SOURCES;HEADERS;" "" ${ARGN})

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

  if(MPI_CXX_FOUND)
    set(LIBRARIES ${LIBRARIES} ${MPI_CXX_LIBRARIES})
    if(MPI_CXX_LINK_FLAGS)
      set_target_properties(${executablename} PROPERTIES LINK_FLAGS ${MPI_CXX_LINK_FLAGS})
    endif()
  endif()
  if(MPI_C_FOUND)
    set(LIBRARIES ${LIBRARIES} ${MPI_C_LIBRARIES})
    if(MPI_C_LINK_FLAGS)
      set_target_properties(${executablename} PROPERTIES LINK_FLAGS ${MPI_C_LINK_FLAGS})
    endif()
  endif()
  if (LIBDL_FOUND)
    set(LIBRARIES ${LIBRARIES} ${LIBDL_LIBRARY})
  endif()
  if (Boost_FOUND)
    set(LIBRARIES ${LIBRARIES} ${Boost_LIBRARIES})
  endif()
  if (GSL_FOUND)
    if(HDF5_FOUND AND "${USE_MATH_LIBRARY_CHOSEN_BY}" STREQUAL "HDF5")
      strip_library(m GSL_LIBRARIES)
    endif()
    set(LIBRARIES ${LIBRARIES} ${GSL_LIBRARIES})
  endif()
  if(HDF5_FOUND)
    if(GSL_FOUND AND "${USE_MATH_LIBRARY_CHOSEN_BY}" STREQUAL "GSL")
      strip_library(m HDF5_LIBRARIES)
    endif()
    set(LIBRARIES ${LIBRARIES} ${HDF5_LIBRARIES})
  endif()
  target_link_libraries(${executablename} ${LIBRARIES} yaml-cpp)
  add_dependencies(${executablename} mkpath)

  #For checking if all the needed libs are present.  Never add them manually with -lsomelib!!
  if(VERBOSE)
    message(STATUS ${LIBRARIES})
  endif()

  # Cotire speeds up compilation by automatically generating and precompiling prefix headers for the targets
  #cotire(${executablename})
  ##add_precompiled_header(${executablename} "${PROJECT_SOURCE_DIR}/Elements/include/gambit/Elements/common.hpp" TRUE)

endfunction()

# Simple function to find specific Python modules
macro(find_python_module module)
  execute_process(COMMAND python -c "import ${module}" RESULT_VARIABLE return_value ERROR_QUIET)
  if (NOT return_value)
    message(STATUS "Found Python module ${module}.")
    set(PY_${module}_FOUND TRUE)
  else()
    if(ARGC GREATER 1 AND ARGV1 STREQUAL "REQUIRED")
      message(FATAL_ERROR "-- FAILED to find Python module ${module}.")
    else()
      message(STATUS "FAILED to find Python module ${module}.")
    endif()
  endif()
endmacro()

# Macro for BOSSing a backend
set(BOSS_dir "${PROJECT_SOURCE_DIR}/Backends/scripts/BOSS")
set(needs_BOSSing "")
set(needs_BOSSing_failed "")
macro(BOSS_backend cmake_project backend_name backend_version)

  # Replace "." by "_" in the backend version number
  string(REPLACE "." "_" backend_version_safe ${backend_version})

  # Construct path to the config file expected by BOSS
  set(config_file_path "${BOSS_dir}/configs/${backend_name}_${backend_version_safe}.py")

  # Only add BOSS step to the build process if the config file exists
  if(NOT EXISTS ${config_file_path})
    message("${BoldRed}-- The config file ${config_file_path} required ")
    message("   to BOSS the backend ${backend_name} ${backend_version} was not found. This backend will not be BOSSed. ${ColourReset}")
    list(APPEND needs_BOSSing_failed ${cmake_project})
  else()
    list(APPEND needs_BOSSing ${cmake_project})
    set(BOSS_includes "-I ${Boost_INCLUDE_DIR}")
    if (NOT ${GSL_INCLUDE_DIR} STREQUAL "")
      set(BOSS_includes "${BOSS_includes} -I ${GSL_INCLUDE_DIR}")
    endif()
    ExternalProject_Add_Step(${cmake_project} BOSS
      # Run BOSS
      COMMAND cd ${BOSS_dir} && python boss.py ${BOSS_includes} ${backend_name}_${backend_version_safe}
      # Copy BOSS-generated files to correct folders within Backends/include
      COMMAND cp -r ${BOSS_dir}/BOSS_output/for_gambit/backend_types/${backend_name}_${backend_version_safe} ${PROJECT_SOURCE_DIR}/Backends/include/gambit/Backends/backend_types/
      COMMAND cp ${BOSS_dir}/BOSS_output/frontends/${backend_name}_${backend_version_safe}.hpp ${PROJECT_SOURCE_DIR}/Backends/include/gambit/Backends/frontends/${backend_name}_${backend_version_safe}.hpp
      DEPENDEES patch
      DEPENDERS configure
    )
  endif()
endmacro()

