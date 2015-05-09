# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script for 'extra'
#  packages in GAMBIT, i.e. backend codes that
#  we want to make accessible via the cmake 
#  system.  Note that this is not the canonical
#  way to manage the compilation of backends,
#  and GAMBIT support for backend compilation is
#  minimal, even with this method!  
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
#  \author Chris Rogan
#          (crogan@cern.ch)              
#  \date 2015 May
#                                               
#************************************************

include(ExternalProject)

# Define the sed command to use differently for OSX and linux
if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(dashi "-i ''")
else()
  set(dashi "-i")
endif()

set(remove_files_from_libdarksusy dssetdsinstall.o dssetdsversion.o ddilog.o drkstp.o eisrs1.o tql2.o tred2.o)
set(remove_files_from_libisajet fa12.o  func_int.o  func.o  isalhd.o  isared.o)
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(_ld_prefix "-Wl,-all_load")
  set(_ld_suffix "")
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(_ld_prefix "-Wl,--whole-archive")
  set(_ld_suffix "-Wl,--no-whole-archive")
endif()
set(libs ${_ld_prefix} <SOURCE_DIR>/lib/libFH.a <SOURCE_DIR>/lib/libHB.a <SOURCE_DIR>/lib/libdarksusy.a <SOURCE_DIR>/lib/libisajet.a ${_ld_suffix})

ExternalProject_Add(darksusy
  URL http://www.fysik.su.se/~edsjo/darksusy/tars/darksusy-5.1.1.tar.gz
  URL_MD5 ebeb0e1cfb4d834858e120190e423f62
  DOWNLOAD_DIR ${PROJECT_SOURCE_DIR}/../extras/DarkSUSY
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/DarkSUSY/DarkSUSY
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${CMAKE_Fortran_FLAGS} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND make COMMAND ar d <SOURCE_DIR>/lib/libdarksusy.a ${remove_files_from_libdarksusy} COMMAND ar d <SOURCE_DIR>/lib/libisajet.a ${remove_files_from_libisajet}
  INSTALL_COMMAND ${CMAKE_Fortran_COMPILER} -shared ${libs} -o <SOURCE_DIR>/lib/libdarksusy.so COMMAND cp <SOURCE_DIR>/lib/libdarksusy.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set_property(TARGET darksusy PROPERTY _EP_DOWNLOAD_ALWAYS 0)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Backends/lib/libdarksusy.so")

ExternalProject_Add(superiso
  URL http://superiso.in2p3.fr/download/superiso_v3.4.tgz
  URL_MD5 ae4ecc45e7f608d9faf91ba8e5780053
  DOWNLOAD_DIR ${PROJECT_SOURCE_DIR}/../extras/SuperIso
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/SuperIso/SuperIso
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND sed ${dashi} "s#CC = gcc#CC = ${CMAKE_C_COMPILER}#g" <SOURCE_DIR>/Makefile COMMAND sed ${dashi} "s/CFLAGS= -O3 -pipe -fomit-frame-pointer/CFLAGS= -lm -fPIC ${CMAKE_C_FLAGS}/g" <SOURCE_DIR>/Makefile COMMAND make COMMAND ar x <SOURCE_DIR>/src/libisospin.a COMMAND echo "${CMAKE_C_COMPILER} -shared -o libsuperiso.so *.o -lm" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND cp <SOURCE_DIR>/libsuperiso.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set_property(TARGET superiso PROPERTY _EP_DOWNLOAD_ALWAYS 0)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/SuperIso/SuperIso/libsuperiso.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libsuperiso.so")

ExternalProject_Add(ddcalc
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/DDCalc0
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make libDDCalc0.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${CMAKE_Fortran_FLAGS} OUTPUT_PIPE=>/dev/null
  INSTALL_COMMAND cp libDDCalc0.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/DDCalc0/libDDCalc0.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libDDCalc0.so")

if(GSL_FOUND)
  execute_process(
    COMMAND gsl-config --libs
    OUTPUT_VARIABLE GAMLIKE_GSL_LIBS
    RESULT_VARIABLE RET
  )
  if( RET EQUAL 0 )
    string( STRIP "${GAMLIKE_GSL_LIBS}" GAMLIKE_GSL_LIBS )
  endif()
endif()

set(gamlike_CXXFLAGS "${CMAKE_CXX_FLAGS}")
if (NOT GSL_INCLUDE_DIRS STREQUAL "")
  set(gamlike_CXXFLAGS "${gamlike_CXXFLAGS} -I${GSL_INCLUDE_DIRS}")
endif()

ExternalProject_Add(gamlike
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/gamLike
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${gamlike_CXXFLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} LDLIBS=${GAMLIKE_GSL_LIBS}
  INSTALL_COMMAND cp gamLike.so ${PROJECT_SOURCE_DIR}/Backends/lib/libgamLike.so
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/gamLike/gamLike.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libgamLike.so")

ExternalProject_Add(micromegas
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/micromegas
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ./install_micromegas.script FC=${CMAKE_Fortran_COMPILER}
  INSTALL_COMMAND cp <SOURCE_DIR>/micromegas_3.5.5/MSSM/libmicromegas.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/micromegas/libmicromegas.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libmicromegas.so")

if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  set(pythia_CONFIGURE_EXTRAS "--enable-64bits")
endif()

ExternalProject_Add(pythia
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND export FC=${CMAKE_Fortran_COMPILER} && export CC=${CMAKE_C_COMPILER} && export USRSHAREDSUFFIX=so && ./configure --enable-shared ${pythia_CONFIGURE_EXTRAS}
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS}
  INSTALL_COMMAND cp lib/libpythia8.so ${PROJECT_SOURCE_DIR}/Backends/lib/libpythia8.so
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source/config.mk" "${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source/lib/libpythia8.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libpythia8.so")

ExternalProject_Add(fastsim
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/fast_sim
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} libfastsim.so
  INSTALL_COMMAND cp lib/libfastsim.so ${PROJECT_SOURCE_DIR}/Backends/lib/libfastsim.so
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/fast_sim/lib/libfastsim.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libfastsim.so")

set(BOSSMinimalExample_dir "${PROJECT_SOURCE_DIR}/../extras/boss")
ExternalProject_Add(BOSSMinimalExample
  SOURCE_DIR ${BOSSMinimalExample_dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} all
  INSTALL_COMMAND cp libminimal_1_0.so ${PROJECT_SOURCE_DIR}/Backends/lib/ COMMAND cp libminimal_1_1.so ${PROJECT_SOURCE_DIR}/Backends/lib/ COMMAND cp libminimal_1_2.so ${PROJECT_SOURCE_DIR}/Backends/lib/
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/boss/*.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libminimal_1_0.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libminimal_1_1.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libminimal_1_2.so")

if("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Intel")
  set(FMODULE "module")
elseif("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU")
  set(FMODULE "J")
endif()
set(nulike_ver "1\\.0\\.0")
set(nulike_lib "libnulike")
set(nulike_dir "${PROJECT_SOURCE_DIR}/../extras/nulike")
set(nulike_short_dir "./../extras/nulike")
set(nulikeFFLAGS "${CMAKE_Fortran_FLAGS} -I${nulike_dir}/include")
ExternalProject_Add(nulike
  SOURCE_DIR ${nulike_dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make ${nulike_lib}.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${nulikeFFLAGS} MODULE=${FMODULE} 
  INSTALL_COMMAND sed ${dashi} "s#${nulike_ver}:.*${nulike_lib}\\.so#${nulike_ver}:       ${nulike_short_dir}/lib/${nulike_lib}.so#g" ${PROJECT_SOURCE_DIR}/config/backend_locations.yaml
)
set(clean_files ${clean_files} "${nulike_dir}/lib/${nulike_lib}.so")

ExternalProject_Add(feynhiggs
  URL http://wwwth.mpp.mpg.de/members/heinemey/feynhiggs/newversion/FeynHiggs-2.10.4.tar.gz
  URL_MD5 afd04154870ab5519603ffdb0e4e2d5b
  DOWNLOAD_DIR ${PROJECT_SOURCE_DIR}/../extras/FeynHiggs
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/FeynHiggs/FeynHiggs
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND make COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libFH.so build/*.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND cp <SOURCE_DIR>/lib/libFH.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set_property(TARGET feynhiggs PROPERTY _EP_DOWNLOAD_ALWAYS 0)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/FeynHiggs/FeynHiggs/lib/libFH.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libFH.so")

ExternalProject_Add(higgsbounds_tables
  URL http://www.hepforge.org/archive/higgsbounds/csboutput_trans_binary.tar.gz
  URL_MD5 004decca30335ddad95654a04dd034a6
  DOWNLOAD_DIR ${PROJECT_SOURCE_DIR}/../extras/HiggsBounds
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/HiggsBounds/csboutput_trans_binary
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ""
  INSTALL_COMMAND ""
)

set_property(TARGET higgsbounds_tables PROPERTY _EP_DOWNLOAD_ALWAYS 0)

ExternalProject_Add(higgsbounds
  DEPENDS higgsbounds_tables
  URL http://www.hepforge.org/archive/higgsbounds/HiggsBounds-4.2.0.tar.gz
  URL_MD5 9d76eefecea870d941a6fe8c0ee7a6ae
  DOWNLOAD_DIR ${PROJECT_SOURCE_DIR}/../extras/HiggsBounds
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/HiggsBounds/HiggsBounds
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND cp configure-with-chisq my_configure COMMAND sed -i -e "s|.*clsbtablesdir=.*|clsbtablesdir=\"${PROJECT_SOURCE_DIR}/../extras/HiggsBounds/\"|" <SOURCE_DIR>/my_configure COMMAND sed -i -e "s|F90C =.*|F90C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure COMMAND sed -i -e "s|F77C =.*|F77C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure COMMAND sed -i -e "s|F90FLAGS =.*|F90FLAGS = ${CMAKE_Fortran_FLAGS}|" <SOURCE_DIR>/my_configure COMMAND <SOURCE_DIR>/my_configure
  BUILD_COMMAND make COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libhiggsbounds.so *.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND cp <SOURCE_DIR>/lib/libhiggsbounds.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set_property(TARGET higgsbounds PROPERTY _EP_DOWNLOAD_ALWAYS 0)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/HiggsBounds/HiggsBounds/lib/higgsbounds.so" "${PROJECT_SOURCE_DIR}/Backends/lib/higgsbounds.so")

ExternalProject_Add(higgssignals
  DEPENDS higgsbounds
  URL http://www.hepforge.org/archive/higgsbounds/HiggsSignals-1.3.2.tar.gz
  URL_MD5 2e300a3784eb5d3a9e1dd905d2af7676
  DOWNLOAD_DIR ${PROJECT_SOURCE_DIR}/../extras/HiggsSignals
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/HiggsSignals/HiggsSignals
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND cp configure my_configure COMMAND sed -i -e "s|HBLIBS =.*|HBLIBS =-L../../HiggsBounds/HiggsBounds|" <SOURCE_DIR>/my_configure COMMAND sed -i -e "s|HBINCLUDE =.*|HBINCLUDE =-I../../HiggsBounds/HiggsBounds|" <SOURCE_DIR>/my_configure COMMAND sed -i -e "s|F90C =.*|F90C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure COMMAND sed -i -e "s|F77C =.*|F77C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure COMMAND sed -i -e "s|F90FLAGS =.*|F90FLAGS = ${CMAKE_Fortran_FLAGS}|" <SOURCE_DIR>/my_configure COMMAND <SOURCE_DIR>/my_configure
  BUILD_COMMAND make COMMAND mkdir -p lib COMMAND rm HiggsSignals.o COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libhiggssignals.so ./*.o ../../HiggsBounds/HiggsBounds/*.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND cp <SOURCE_DIR>/lib/libhiggssignals.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set_property(TARGET higgssignals PROPERTY _EP_DOWNLOAD_ALWAYS 0)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/HiggsSignals/HiggsSignals/lib/higgssignals.so" "${PROJECT_SOURCE_DIR}/Backends/lib/higgssignals.so")

set_target_properties(ddcalc gamlike darksusy micromegas superiso nulike pythia fastsim BOSSMinimalExample 
                      higgssignals higgsbounds higgsbounds_tables feynhiggs PROPERTIES EXCLUDE_FROM_ALL 1)

add_custom_target(backends COMMAND make gamlike nulike ddcalc pythia BOSSMinimalExample darksusy superiso) #fastsim micromegas

