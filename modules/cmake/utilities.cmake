# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Helpful cmake utility macros and functions for
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
#************************************************

include(CMakeParseArguments)

#Macro to retrieve GAMBIT modules
macro(retrieve_bits bits root excludes quiet)

  set(${bits} "")
  file(GLOB children RELATIVE ${root} ${root}/*Bit*)

  foreach(child ${children})
    if(IS_DIRECTORY ${root}/${child})

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
          message("   Excluding ${child} from GAMBIT configuration.")
        endif()
      else()
        list(APPEND ${bits} ${child})
      endif()

    endif()
  endforeach()

endmacro()

# Function to add static GAMBIT library
function(add_gambit_library libraryname)
  cmake_parse_arguments(ARG "" "OPTION" "SOURCES;HEADERS" "" ${ARGN})

  add_library(${libraryname} ${ARG_OPTION} ${ARG_SOURCES} ${ARG_HEADERS})
  add_dependencies(${libraryname} model_harvest)
  add_dependencies(${libraryname} backend_harvest)
  add_dependencies(${libraryname} module_harvest)

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

endfunction()

# Function to add GAMBIT executable
function(add_gambit_executable executablename)
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

  if (MPI_FOUND)
    set(LIBRARIES ${LIBRARIES} ${MPI_CXX_LIBRARIES})
  endif()
  if (LIBDL_FOUND)
    set(LIBRARIES ${LIBRARIES} ${LIBDL_LIBRARY})
  endif()
  if (Boost_FOUND)
    set(LIBRARIES ${LIBRARIES} ${Boost_LIBRARIES})
  endif()
  if (GSL_FOUND)
    if(GSL_LDFLAGS)
      set(LIBRARIES ${LIBRARIES} ${GSL_LDFLAGS})
    else()
      set(LIBRARIES ${LIBRARIES} "-L${GSL_LIBRARY_DIRS}")
      foreach(LIB ${GSL_LIBRARIES})
        set(LIBRARIES ${LIBRARIES} ${LIB})
      endforeach()
    endif()
  endif()

  #For checking if all the needed libs are present.  Don't add them manually with -lsomelib!!
  if(VERBOSE)
    message(STATUS ${LIBRARIES})
  endif()

  target_link_libraries(${executablename} ${LIBRARIES})
endfunction()

# Simple function to find specific Python modules
function(find_python_module module)
  execute_process(COMMAND python -c "import ${module}" RESULT_VARIABLE return_value ERROR_QUIET)
  if (NOT return_value)
    message("-- Found Python module ${module}.")
  else()
    if(ARGC GREATER 1 AND ARGV1 STREQUAL "REQUIRED")
      message(FATAL_ERROR "-- FAILED to find Python module ${module}.")
    else()      	
      message("-- FAILED to find Python module ${module}.")
    endif()	
  endif()
endfunction()

