# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script for final executables
#  of GAMBIT.
#    
#************************************************
#                                                
#  Authors (add name and date if you modify):                                    
#                                                
#  \author Antje Putze
#          (antje.putze@lapth.cnrs.fr)              
#  \date 2014 Sep, Oct, Nov
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)              
#  \date 2014 Nov, Dec
#                                               
#************************************************

# Indicate which executables need ScannerBit
set(uses_scannerbit gambit)

# Add the main GAMBIT executable
if(EXISTS "${PROJECT_SOURCE_DIR}/Core/")
  add_gambit_executable(gambit SOURCES ${PROJECT_SOURCE_DIR}/Core/src/gambit.cpp ${GAMBIT_COMMON_OBJECTS} ${GAMBIT_OBJECTS} ${GAMBIT_BIT_OBJECTS})
  add_dependencies(gambit yaml)
  if (NOT EXCLUDE_FLEXIBLESUSY)
    add_dependencies(gambit ${flexiblesusy_projects})
    target_link_libraries(gambit ${flexiblesusy_LDFLAGS})
  endif()
  if (NOT EXCLUDE_DELPHES)
    add_dependencies(gambit delphes)
    target_link_libraries(gambit ${delphes_LDFLAGS} ${ROOT_LIBRARIES} ${ROOT_LIBRARY_DIR}/libEG.so)
  endif()
endif()

# Add the ExampleBit_A_standalone executable
if(EXISTS "${PROJECT_SOURCE_DIR}/ExampleBit_A/" AND ";${GAMBIT_BITS};" MATCHES ";ExampleBit_A;")
  add_gambit_executable(ExampleBit_A_standalone SOURCES ${PROJECT_SOURCE_DIR}/ExampleBit_A/examples/ExampleBit_A_standalone_example.cpp $<TARGET_OBJECTS:ExampleBit_A> ${GAMBIT_COMMON_OBJECTS})
  add_dependencies(ExampleBit_A_standalone yaml)
  if (NOT EXCLUDE_FLEXIBLESUSY)
    add_dependencies(ExampleBit_A_standalone ${flexiblesusy_projects})
    target_link_libraries(ExampleBit_A_standalone ${flexiblesusy_LDFLAGS})
  endif()
  if (NOT EXCLUDE_DELPHES)
    add_dependencies(ExampleBit_A_standalone delphes)
    target_link_libraries(ExampleBit_A_standalone ${delphes_LDFLAGS} ${ROOT_LIBRARIES} ${ROOT_LIBRARY_DIR}/libEG.so)
  endif()
endif()
