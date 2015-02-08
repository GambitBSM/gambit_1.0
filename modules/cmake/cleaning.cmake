# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script to add clean info
#  for GAMBIT.  
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
#  \author Ben Farmer
#          (benjamin.farmer@fysik.su.se)
#  \date 2015 Feb       
#                                        
#************************************************

# Ensure that clean removes automatically-generated CMakeLists.txt files in modules
foreach(bit ${GAMBIT_BITS})
  if(NOT ScannerBit STREQUAL ${bit})
    set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/${bit}/CMakeLists.txt"
                                   "${PROJECT_SOURCE_DIR}/${bit}/CMakeLists.txt.candidate")
  endif()
endforeach()

# Arrange for removal of all_functor_types.hpp and other generated headers upon "make clean".
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Backends/include/gambit/Backends/backend_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Models/include/gambit/Models/model_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/all_functor_types.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Core/include/gambit/Core/module_rollcall.hpp")

# Ensure that clean removes .pyc files
file(GLOB more_clean_files "${PROJECT_SOURCE_DIR}/*/*.pyc" "${PROJECT_SOURCE_DIR}/*/*/*.pyc")
set(clean_files ${clean_files} ${more_clean_files})

# Ensure that clean sweeps out the scratch directory
file(GLOB more_clean_files "${PROJECT_SOURCE_DIR}/scratch/*?.*")
set(clean_files ${clean_files} ${more_clean_files})

# Ensure that clean removes temporary cmake scripts and the like in the cmake dir.
file(GLOB more_clean_files "${PROJECT_SOURCE_DIR}/cmake/*?.candidate")
set(clean_files ${clean_files} ${more_clean_files})

# Ensure that clean removes automatically-generated cmake_variables.hpp.in file
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/cmake/cmake_variables.hpp.in")

# Ensure that clean removes automatically-generated linkedout.cmake file
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/cmake/linkedout.cmake")

# Add all the clean files
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${clean_files}")

# Add a second clean target to allow us to trigger cleaning of external projects (or run any other custom commands)
# Needed because "clean" isn't a target itself, so cannot be made to depend on other targets.
# See custom target "clean-flexiblesusy" in contrib.make for example use case.
add_custom_target(distclean COMMAND ${CMAKE_MAKE_PROGRAM} clean)
