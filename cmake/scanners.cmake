# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration scripts for obtaining,
#  configuring, compiling and installing 
#  external scanners.
#  
#  Note that this is not necessarily the canonical
#  way to manage the compilation of all scanners,
#  and GAMBIT support for scanner compilation is
#  minimal, even with this method -- so please
#  contact the authors of the respective codes
#  if they won't compile!  
#    
#************************************************
#                                                
#  Authors (add name and date if you modify):
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)              
#  \date 2014 Nov, Dec
#  \date 2015 May  
#                                               
#************************************************


# Diver
set(diver_location "${GAMBIT_INTERNAL}/Diver")
set(diver_ver "1\\.0\\.0")
set(diver_lib "libdiver")
set(diver_dir "${PROJECT_SOURCE_DIR}/ScannerBit/installed/Diver/1.0.0")
set(diverSO_LINK_FLAGS "${CMAKE_Fortran_MPI_SO_LINK_FLAGS}")
if(MPI_Fortran_FOUND)
  set(diverFFLAGS "${CMAKE_Fortran_MPI_FLAGS}")
else()
  set(diverFFLAGS "${CMAKE_Fortran_FLAGS}")
endif()
ExternalProject_Add(diver
  #URL 
  #URL_MD5 
  #DOWNLOAD_DIR ${scanner_download}
  DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --yellow --bold ${private_code_warning1}
           COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red --bold ${private_code_warning2}
           COMMAND ${CMAKE_COMMAND} -E copy_directory ${diver_location} ${diver_dir}
  SOURCE_DIR ${diver_dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make ${diver_lib}.so DIVER_FF=${CMAKE_Fortran_COMPILER} DIVER_MODULE=${FMODULE} DIVER_FOPT=${diverFFLAGS} DIVER_SO_LINK_FLAGS=${diverSO_LINK_FLAGS} 
  INSTALL_COMMAND "" 
)
set_property(TARGET diver PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${diver_dir}/lib/${diver_lib}.so")

# MultiNest
set(mn_location "${GAMBIT_INTERNAL}/MultiNest_v3.9")
set(mn_ver "3\\.9")
set(mn_lib "libnest3")
set(mn_dir "${PROJECT_SOURCE_DIR}/ScannerBit/installed/MultiNest/3.9")
set(mnLAPACK "${LAPACK_LINKLIBS}")
set(mnSO_LINK "${CMAKE_Fortran_COMPILER} -shared ${OpenMP_Fortran_FLAGS} ${CMAKE_Fortran_MPI_SO_LINK_FLAGS}")
if(MPI_Fortran_FOUND)
  set(mnFFLAGS "${CMAKE_Fortran_MPI_FLAGS}")
else()
  set(mnFFLAGS "${CMAKE_Fortran_FLAGS}")
endif()
ExternalProject_Add(multinest 
  #FIXME automated download of multinest is not possible, as it is behind a login redirection wall.  Need to ask CCPForge for a solution.
  #URL http://ccpforge.cse.rl.ac.uk/gf/download/frsrelease/413/5871/MultiNest_v3.9.tar.gz
  #URL_MD5 6c0c9e9ee0ac3c906109675302fb30f0
  #DOWNLOAD_DIR ${scanner_download}
  DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --yellow --bold ${private_code_warning1}
           COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red --bold ${private_code_warning2}
           COMMAND ${CMAKE_COMMAND} -E copy_directory ${mn_location} ${mn_dir}
  SOURCE_DIR ${mn_dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND sed ${dashi} -e "s#nested.o[[:space:]]*$#nested.o cwrapper.o#g"
                                 -e "s#-o[[:space:]]*\\(\\$\\)(LIBS)[[:space:]]*\\$@[[:space:]]*\\$^#-o \\$\\(LIBS\\)\\$@ \\$^ ${mnLAPACK}#g"
                                 <SOURCE_DIR>/Makefile 
            COMMAND sed ${dashi} -e "s#function[[:space:]]*loglike_proto(Cube,n_dim,nPar,context)[[:space:]]*$#function loglike_proto(Cube,n_dim,nPar,context) bind(c)#g"
                                 -e "s#subroutine[[:space:]]*dumper_proto(nSamples,nlive,nPar,physLive,posterior,paramConstr,maxLogLike,logZ,INSlogZ,logZerr,context)[[:space:]]*$#subroutine dumper_proto(nSamples,nlive,nPar,physLive,posterior,paramConstr,maxLogLike,logZ,INSlogZ,logZerr,context) bind(c)#g"
                                 <SOURCE_DIR>/cwrapper.f90
  BUILD_COMMAND make ${mn_lib}.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${mnFFLAGS} LINKLIB=${mnSO_LINK}$ LIBS=${mn_dir}/
  INSTALL_COMMAND "" 
)
set_property(TARGET multinest PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${mn_dir}/${mn_lib}.so")

# All other scanners are implemented natively in ScannerBit.


set_target_properties(diver multinest PROPERTIES EXCLUDE_FROM_ALL 1)

add_custom_target(scanners COMMAND make diver multinest)
