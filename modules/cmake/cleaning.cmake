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

##### clean ########

# Ensure that clean removes automatically-generated CMakeLists.txt files in modules
foreach(bit ${GAMBIT_BITS})
  if(NOT ScannerBit STREQUAL ${bit})
    set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/${bit}/CMakeLists.txt")
  endif()
endforeach()

# Arrange for removal of all_functor_types.hpp and other generated headers upon "make clean".
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Backends/include/gambit/Backends/backend_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Models/include/gambit/Models/model_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/all_functor_types.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Core/include/gambit/Core/module_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/cmake/include/gambit/cmake/cmake_variables.hpp")

# Add all the clean files
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${clean_files}")


##### distclean ########

# Ensure that distclean sweeps out the scratch directory
add_custom_target(clean-scratch-files COMMAND ${CMAKE_COMMAND} -E remove scratch/* WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
add_custom_target(clean-scratch-subdirs COMMAND ${CMAKE_COMMAND} -E remove_directory scratch/* WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
add_dependencies(distclean clean-scratch-files clean-scratch-subdirs)

# Ensure that distclean removes .pyc files
add_custom_target(clean-pyc COMMAND ${CMAKE_COMMAND} -E remove *.pyc */*.pyc */*/*.pyc */*/*/*.pyc */*/*/*/*.pyc WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
add_dependencies(distclean clean-pyc)

# Ensure that distclean removes backup files
add_custom_target(clean-backup COMMAND ${CMAKE_COMMAND} -E remove *~ */*~ */*/*~ */*/*/*~ */*/*/*/*~ WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
add_dependencies(distclean clean-backup)
