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

# Check for MPI libraries; disable manually with "cmake -DMPI=OFF .."
option(MPI "Compile with MPI enabled" ON)
if(MPI)
  find_package(MPI)
  # Do things for GAMBIT itself
  if(MPI_C_FOUND OR MPI_CXX_FOUND)
    message("${BoldYellow}-- MPI C/C++ libraries found. GAMBIT will be MPI-enabled.${ColourReset}")
    add_definitions(-DWITH_MPI)
    if(MPI_CXX_FOUND)
      include_directories(${MPI_CXX_INCLUDE_PATH})
      add_definitions(${MPI_CXX_COMPILE_FLAGS})
    endif()
    if(MPI_C_FOUND)
      include_directories(${MPI_C_INCLUDE_PATH})
      add_definitions(${MPI_C_COMPILE_FLAGS})
      if (NOT MPI_CXX_FOUND)
        message("${Red}-- Warning: C MPI libraries found, but not C++ MPI libraries.  Usually that's OK, but")
        message("   if you experience MPI linking errors, please install C++ MPI libraries as well.${CoulourReset}")
      endif()
    endif()
  else()
    message("${BoldRed}   Missing C MPI installation.  GAMBIT will not be MPI-enabled.${ColourReset}")
    ## FIXME temporary -- to avoid problems with locate_scanners.py
    set(MPI_CXX_INCLUDE_PATH "")
    set(MPI_C_INCLUDE_PATH "")
  endif()
  # Do things for Fortran backends and scanners
  if(MPI_Fortran_FOUND)
    if(MPI_C_FOUND)
      message("${BoldYellow}-- MPI Fortran libraries found. Fortran scanners will be MPI-enabled.${ColourReset}") 
      # Includes
      foreach(dir ${MPI_Fortran_INCLUDE_PATH})
        set(GAMBIT_MPI_F_INC "${GAMBIT_MPI_F_INC} -I${dir}")
      endforeach()
      string(STRIP "${GAMBIT_MPI_F_INC}" GAMBIT_MPI_F_INC)
      set(CMAKE_Fortran_MPI_FLAGS "${MPI_Fortran_COMPILE_FLAGS} ${CMAKE_Fortran_FLAGS} -DMPI ${GAMBIT_MPI_F_INC}")
      string(STRIP "${CMAKE_Fortran_MPI_FLAGS}" CMAKE_Fortran_MPI_FLAGS)
      # Libraries
      foreach(lib ${MPI_Fortran_LIBRARIES})
        set(GAMBIT_MPI_F_LIB "${GAMBIT_MPI_F_LIB} ${lib}")
      endforeach()
      if (NOT ${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
        set(GAMBIT_MPI_F_LIB "-Wl,--no-as-needed ${GAMBIT_MPI_F_LIB}")
      endif()
      string(STRIP "${GAMBIT_MPI_F_LIB}" GAMBIT_MPI_F_LIB)
      set(CMAKE_Fortran_MPI_SO_LINK_FLAGS "${MPI_Fortran_LINK_FLAGS} ${GAMBIT_MPI_F_LIB}")
      string(STRIP "${CMAKE_Fortran_MPI_SO_LINK_FLAGS}" CMAKE_Fortran_MPI_SO_LINK_FLAGS)
    endif()
  else()
    message("${BoldRed}   Missing Fortran MPI installation.  Fortran scanners will not be MPI-enabled.${ColourReset}")
  endif()
else()
  message("${BoldCyan} X MPI manually disabled. Executables will not be parallelised via MPI.${ColourReset}")
endif()

# Check for LAPACK.  Cmake native findLAPACK isn't very thorough, so we need to do a bit more work here.
if(NOT LAPACK_LINKLIBS)
  find_package(LAPACK)
  if(NOT LAPACK_FOUND)
    message(FATAL_ERROR "${BoldRed}    LAPACK is currently required in order to build GAMBIT.${ColourReset}")
    # In future MN and FS need to be ditched if lapack cannot be found, and the build allowed to continue.
    message("${BoldRed}   No LAPACK installation found. Excluding FlexibleSUSY and MultiNest from GAMBIT configuration. ${ColourReset}")
  else()
    # Check the libs for MKL
    string(FIND "${LAPACK_LIBRARIES}" "libmkl_" FOUND_MKL)  
    foreach(lib ${LAPACK_LIBRARIES})
      if(NOT LAPACK_LINKLIBS)
        string(REGEX REPLACE "^(.*)/(.*)\\..*$" "\\1" BLAS_LAPACK_LOCATION ${lib})
        if(NOT ${FOUND_MKL} EQUAL -1)
          # Add the silver-bullet SDL mkl_rt.so if possible.
          set(SDL "${BLAS_LAPACK_LOCATION}/libmkl_rt.so")
          if(EXISTS ${SDL})
            set(LAPACK_LINKLIBS "${LAPACK_LINKLIBS} ${SDL}")
          endif()
        endif()  
      endif()
      string(FIND "${lib}" ".framework" IS_FRAMEWORK)
      if(NOT ${IS_FRAMEWORK} EQUAL -1)
        string(REGEX REPLACE "^(.*)/(.*)\\.framework.*$" "-F\\1 -framework \\2" lib ${lib})
      endif()
      set(LAPACK_LINKLIBS "${LAPACK_LINKLIBS} ${lib}")
    endforeach()
    string(STRIP "${LAPACK_LINKLIBS}" LAPACK_LINKLIBS)
    message("   using the following LAPACK libraries: ${LAPACK_LINKLIBS}")  
  endif()
else()
  message("${BoldCyan}   LAPACK linking commands provided by hand; skipping cmake search and assuming no LAPACK-dependent components need to be ditched.${ColourReset}")
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
find_package(HDF5 QUIET COMPONENTS C CXX)
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
