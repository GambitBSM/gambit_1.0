# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script to look for optional
#  things for GAMBIT.  
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
#  \date 2015 May
#                                               
#************************************************

# Check for MPI libraries
option(MPI "Compile with MPI enabled" ON)
# (Force no-MPI build with "cmake -DMPI=OFF ..")
if(MPI)
  find_package(MPI)
  if(MPI_FOUND)
    include_directories(${MPI_INCLUDE_PATH})
    add_definitions(-DWITH_MPI)
    message("${BoldYellow}-- MPI libraries found. Executables will be MPI-enabled.${ColourReset}")
  else()
    message("${BoldRed}   No MPI installation. Executables will not be parallelised via MPI.${ColourReset}")
  endif()
else()
  message("${BoldCyan} X MPI manually disabled. Executables will not be parallelised via MPI.${ColourReset}")
endif()

# Check for ROOT.
find_package(ROOT)
if (NOT ROOT_FOUND)
  #phew, no ROOT.  Gotta kill ColliderBit, but them's the breaks.
  message("${BoldRed}   No ROOT installation found. Excluding ColliderBit from GAMBIT configuration. ${ColourReset}")
  set (itch "${itch}" "ColliderBit")
else()
  include_directories(${ROOT_INCLUDE_DIR})
endif()

# Check for HDF5 libraries
find_package(HDF5 QUIET)
if(HDF5_FOUND)
  #Make sure C++ interface exists
  if(NOT "${HDF5_CXX_LIBRARIES}" STREQUAL "")
    set(HDF5_CPP TRUE)   
  else() # Didn't seem to find it, try some extra tricks
    find_library(HDF5_CPP NAMES hdf5_cpp libhdf5_cpp HINTS "${HDF5_LIBRARY_DIRS}" )
    if(HDF5_CPP)
      set(HDF5_LIBRARIES ${HDF5_LIBRARIES} ${HDF5_CPP})
    endif()
  endif()
  if(HDF5_CPP)
    link_directories(${HDF5_LIBRARY_DIRS})
    include_directories(${HDF5_INCLUDE_DIR})
    message("-- Found HDF5 libraries")  
  else()
    message("${BoldRed}   HDF5 C libraries found, but no C++ API such as libhdf5_cpp found.  Excluding hdf5printer from GAMBIT configuration.${ColourReset}")
    set (itch "${itch}" "hdf5printer")
  endif()
  if (VERBOSE) 
    message(STATUS ${HDF5_LIBRARIES})
  endif()
else()
  message("${BoldRed}   No HDF5 libraries found. Excluding hdf5printer from GAMBIT configuration.${ColourReset}")
  set (itch "${itch}" "hdf5printer")
endif()
