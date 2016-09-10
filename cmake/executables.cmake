# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  CMake configuration script for final executables
#  of GAMBIT.
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

# Add the module standalones
add_custom_target(standalones)
include(cmake/standalones.cmake)

# Add the main GAMBIT executable
if(EXISTS "${PROJECT_SOURCE_DIR}/Core/")
  if (NOT EXCLUDE_FLEXIBLESUSY)
    set(gambit_XTRA ${flexiblesusy_LDFLAGS})
  endif()
  if (NOT EXCLUDE_DELPHES)
    set(gambit_XTRA ${gambit_XTRA} ${DELPHES_LDFLAGS} ${ROOT_LIBRARIES} ${ROOT_LIBRARY_DIR}/libEG.so)
  endif()
  add_gambit_executable(gambit "${gambit_XTRA}"
                        SOURCES ${PROJECT_SOURCE_DIR}/Core/src/gambit.cpp 
                                ${GAMBIT_ALL_COMMON_OBJECTS} 
                                ${GAMBIT_BIT_OBJECTS}
                                $<TARGET_OBJECTS:Core>
                                $<TARGET_OBJECTS:Printers>
  )
  set_target_properties(gambit PROPERTIES EXCLUDE_FROM_ALL 0)
  if (NOT EXCLUDE_FLEXIBLESUSY)
    add_dependencies(gambit flexiblesusy)
  endif()
  if (NOT EXCLUDE_DELPHES)
    add_dependencies(gambit delphes)
  endif()
endif()

# Add the ScannerBit standalone executable
if(EXISTS "${PROJECT_SOURCE_DIR}/ScannerBit/")
  if(EXISTS "${PROJECT_SOURCE_DIR}/Elements/") 
    if (NOT EXCLUDE_FLEXIBLESUSY)
      set(ScannerBit_XTRA ${flexiblesusy_LDFLAGS})
    endif()
    if (NOT EXCLUDE_DELPHES)
      set(ScannerBit_XTRA ${ScannerBit_XTRA} ${DELPHES_LDFLAGS} ${ROOT_LIBRARIES} ${ROOT_LIBRARY_DIR}/libEG.so)
    endif()
  endif()
  add_gambit_executable(ScannerBit_standalone "${ScannerBit_XTRA}"
                        SOURCES ${PROJECT_SOURCE_DIR}/ScannerBit/examples/ScannerBit_standalone.cpp
                                $<TARGET_OBJECTS:ScannerBit>
                                $<TARGET_OBJECTS:Printers>              
                                ${GAMBIT_BASIC_COMMON_OBJECTS}
  )
  set_target_properties(ScannerBit_standalone PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/ScannerBit/bin")
  if(EXISTS "${PROJECT_SOURCE_DIR}/Elements/") 
    if (NOT EXCLUDE_FLEXIBLESUSY)
      add_dependencies(ScannerBit_standalone flexiblesusy)
    endif()
    if (NOT EXCLUDE_DELPHES)
      add_dependencies(ScannerBit_standalone delphes)
    endif()
  else()
    # Make sure the printers compile OK if the rest of GAMBIT is missing
    add_definitions(-DSTANDALONE=1)
  endif()
  add_dependencies(standalones ScannerBit_standalone)
endif()
