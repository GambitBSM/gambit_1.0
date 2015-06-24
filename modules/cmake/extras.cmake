# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script for obtaining,
#  configuring, compiling and installing 
#  'extra' non-GAMBIT packages.
#  
#  Note that this is not the canonical
#  way to manage the compilation of backends,
#  and GAMBIT support for backend compilation is
#  minimal, even with this method -- so please
#  contact the authors of the respective codes
#  if they won't compile!  
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
#  \date 2015 May  
#
#  \author Chris Rogan
#          (crogan@cern.ch)              
#  \date 2015 May
#                                               
#************************************************

include(ExternalProject)


########### Utility commands #################

# Define the sed command to use differently for OSX and linux
if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(dashi "-i ''")
else()
  set(dashi "-i")
endif()

# Define the newline strings to use for OSX-safe substitution.
set(nl "___totally_unlikely_to_occur_naturally___")
set(true_nl \"\\n\")

# Define the module location switch differently depending on compiler
if("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Intel")
  set(FMODULE "module")
elseif("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU")
  set(FMODULE "J")
endif()


########### Scanners #########################

# Diver
set(diver_ver "1\\.0\\.0")
set(diver_lib "libdiver")
set(diver_dir "${PROJECT_SOURCE_DIR}/../extras/Diver")
set(diver_short_dir "./../extras/Diver")
set(diverSO_LINK_FLAGS "${CMAKE_Fortran_MPI_SO_LINK_FLAGS}")
if(MPI_Fortran_FOUND)
  set(diverFFLAGS "${CMAKE_Fortran_MPI_FLAGS}")
else()
  set(diverFFLAGS "${CMAKE_Fortran_FLAGS}")
endif()
ExternalProject_Add(diver
  #URL 
  #URL_MD5 
  #DOWNLOAD_DIR ${diver_dir}
  SOURCE_DIR ${diver_dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make ${diver_lib}.so DIVER_FF=${CMAKE_Fortran_COMPILER} DIVER_MODULE=${FMODULE} DIVER_FOPT=${diverFFLAGS} DIVER_SO_LINK_FLAGS=${diverSO_LINK_FLAGS} 
  INSTALL_COMMAND "" 
)
set_property(TARGET diver PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${diver_dir}/lib/${diver_lib}.so")

# MultiNest
set(mn_ver "3\\.9")
set(mn_lib "libnest3")
set(mn_dir "${PROJECT_SOURCE_DIR}/../extras/MultiNest_v3.9")
set(mn_short_dir "./../extras/MultiNest")
set(mnLAPACK "${LAPACK_LINKLIBS}")
set(mnSO_LINK "${CMAKE_Fortran_COMPILER} -shared ${CMAKE_Fortran_MPI_SO_LINK_FLAGS} ${mnLAPACK}")
if(MPI_Fortran_FOUND)
  set(mnFFLAGS "${CMAKE_Fortran_MPI_FLAGS}")
else()
  set(mnFFLAGS "${CMAKE_Fortran_FLAGS}")
endif()
ExternalProject_Add(multinest 
  #FIXME automated download of multinest is not possible, as it is behind a login redirection wall.  Need to ask CCPForge for a solution.
  #URL http://ccpforge.cse.rl.ac.uk/gf/download/frsrelease/413/5871/MultiNest_v3.9.tar.gz
  #URL_MD5 6c0c9e9ee0ac3c906109675302fb30f0
  #DOWNLOAD_DIR ${mn_dir}
  SOURCE_DIR ${mn_dir}
  BUILD_IN_SOURCE 1
  #CONFIGURE_COMMAND sed ${dashi} "s#nested.o[[:space:]]*$#nested.o cwrapper.o#g" <SOURCE_DIR>/Makefile
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make ${mn_lib}.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${mnFFLAGS} LINKLIB=${mnSO_LINK}$ LAPACKLIB=${mnLAPACK} 
  INSTALL_COMMAND "" 
)
set_property(TARGET multinest PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${mn_dir}/${mn_lib}.so")

########### Backends #########################

# DarkSUSY
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

# SuperIso
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

# DDCalc
ExternalProject_Add(ddcalc
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/DDCalc0
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make libDDCalc0.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${CMAKE_Fortran_FLAGS} OUTPUT_PIPE=>/dev/null
  INSTALL_COMMAND cp libDDCalc0.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/DDCalc0/libDDCalc0.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libDDCalc0.so")

# Gamlike
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

# MicrOmegas
ExternalProject_Add(micromegas
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/micromegas
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ./install_micromegas.script FC=${CMAKE_Fortran_COMPILER}
  INSTALL_COMMAND cp <SOURCE_DIR>/micromegas_3.5.5/MSSM/libmicromegas.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/micromegas/libmicromegas.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libmicromegas.so")

# Pythia
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  set(pythia_CONFIGURE_EXTRAS "--enable-64bits")
endif()
set(pythia_CXXFLAGS "${CMAKE_CXX_FLAGS} -Wno-extra")
ExternalProject_Add(pythia
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND export FC=${CMAKE_Fortran_COMPILER} && export CC=${CMAKE_C_COMPILER} && export USRSHAREDSUFFIX=so && ./configure --enable-shared ${pythia_CONFIGURE_EXTRAS}
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${pythia_CXXFLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS}
  INSTALL_COMMAND cp lib/libpythia8.so ${PROJECT_SOURCE_DIR}/Backends/lib/libpythia8.so
)
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source/config.mk" "${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source/lib/libpythia8.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libpythia8.so")

# Fastsim
ExternalProject_Add(fastsim
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/fast_sim
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} libfastsim.so
  INSTALL_COMMAND cp lib/libfastsim.so ${PROJECT_SOURCE_DIR}/Backends/lib/libfastsim.so
)
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/fast_sim/lib/libfastsim.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libfastsim.so")

# Nulike
set(nulike_ver "1\\.0\\.0")
set(nulike_lib "libnulike")
set(nulike_dir "${PROJECT_SOURCE_DIR}/../extras/nulike")
set(nulike_short_dir "./../extras/nulike")
set(nulikeFFLAGS "${CMAKE_Fortran_FLAGS} -I${nulike_dir}/include")
ExternalProject_Add(nulike
  #URL 
  #URL_MD5 
  #DOWNLOAD_DIR ${nulike_dir}
  SOURCE_DIR ${nulike_dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make ${nulike_lib}.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${nulikeFFLAGS} MODULE=${FMODULE} 
  INSTALL_COMMAND sed ${dashi} "s#${nulike_ver}:.*${nulike_lib}\\.so#${nulike_ver}:       ${nulike_short_dir}/lib/${nulike_lib}.so#g" ${PROJECT_SOURCE_DIR}/config/backend_locations.yaml
)
set_property(TARGET nulike PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${nulike_dir}/lib/${nulike_lib}.so")

# SUSY-HIT
set(susyhit_ver "1\\.5")
set(susyhit_lib "libsusyhit")
set(susyhit_dir "${PROJECT_SOURCE_DIR}/../extras/SUSY-HIT")
set(susyhit_short_dir "./../extras/SUSY-HIT")
ExternalProject_Add(susyhit
  URL http://www.itp.kit.edu/~maggie/SUSY-HIT/susyhit.tar.gz
  URL_MD5 493c7ba3a07e192918d3412875fb386a
  DOWNLOAD_DIR ${susyhit_dir}
  SOURCE_DIR ${susyhit_dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND cp -n makefile makefile.orig  COMMAND cp -n sdecay.f sdecay.orig  COMMAND cp -n hdecay.f hdecay.orig 
            COMMAND cp makefile.orig makefile.tmp COMMAND cp sdecay.orig sdecay.f.tmp COMMAND cp hdecay.orig hdecay.f.tmp
            COMMAND sed ${dashi} -e "s#FC=\\(.*\\)[[:space:]]*$#FF=\\1${nl}${nl}FC=\\$\\(FF\\)${nl}FFLAGS= -O2 -fPIC#g"
                                 -e "s#FC)[[:space:]]*-c#FC\\) \\$\\(FFLAGS\\) -c#g" 
                                 -e "s#\\(clean:.*\\)$#${susyhit_lib}.so:\\$\\(OBJS1\\) \\$\\(OBJS2\\) \\$\\(OBJS3\\)${nl}\t\\$\\(FC\\) -shared -o \\$@ \\$\\(OBJS1\\) \\$\\(OBJS2\\) \\$\\(OBJS3\\)${nl}${nl}\\1#g"
                                 makefile.tmp
            COMMAND sed ${dashi} -e "s#^[[:space:]]*program sdecay[[:space:]]*$#      !Added by GAMBIT to make 100% sure \\'unlikely\\' matches the fortran value.${nl}      double precision function s_hit_unlikely()${nl}        s_hit_unlikely = -123456789D0${nl}      end${nl}${nl}      subroutine sdecay                          !Modified by GAMBIT.#g"
                                 -e "s#COMMON/SD_stopwidth/stoptot4[[:space:]]*$#COMMON/SD_stopwidth/stoptot4,stoptot       !Modified by GAMBIT#g"
                                 -e "s#\\([[:space:]]*open(ninshs,file=.*\\)$#      if (.false.) then                          !Added by GAMBIT.${nl}${nl}\\1#g"
                                 -e "s#\\(^[[:space:]]*flagshsin=2d0\\)$#\\1${nl}      endif                                      !Added by GAMBIT.${nl}${nl}      else                                       !Added by GAMBIT.${nl}${nl}        flagshsin=0d0                            !Added by GAMBIT.${nl}        flagoutput=2d0                           !Added by GAMBIT.${nl}        i4bod=1                                  !Added by GAMBIT.${nl}#g"
                                 -e "s#\\([[:space:]]*if((flagoutput\\.eq\\.1\\.D0).or.(ifavvio\\.eq\\.1)) then\\)#c\\1 !Commented out by GAMBIT.#g"
                                 -e "s#\\!\\([[:space:]]*if(flagoutput\\.eq\\.1\\.D0) then\\)[[:space:]]*$#\\1                !Reinstated by GAMBIT.#g"
                                 -e "/output not a la Les Houches accord/{" -e "N" -e "N" -e "s/else/elseif(flagoutput.eq.0.D0) then            !Modified by GAMBIT./" -e "}"
                                 -e "s#\\(^[[:space:]]*if(flagshsin\\.\\)eq\\(\\.1\\.D0) then\\)#\\1le\\2                 !Modified by GAMBIT.#g"
                                 sdecay.f.tmp
            COMMAND sed ${dashi} -e "/=1: READ SUSY LES HOUCHES ACCORD INPUT/{" -e "N" -e "N" -e "s/\\(.*${nl}c end change susyhit[[:space:]]\\)/\\1C           =2: SLHA INPUT PROVIDED BY CALLING PROGRAM  !Added by GAMBIT.${nl}/" -e "}"
                                 -e "/=1: WRITE SUSY LES HOUCHES ACCORD OUTPUT/{" -e "N" -e "N" -e "s/\\(.*${nl}c end change susyhit[[:space:]]\\)/\\1C           =2: WRITE NOTHING                           !Added by GAMBIT.${nl}/" -e "}"
                                 -e "s#[[:space:]]*if(islhao\\.ne\\.1) then[[:space:]]*\$#      if(islhao.eq.0) then                       !Modified by GAMBIT.#g"
                                 -e "s#[[:space:]]*\\(CALL CLOSE_HDEC\\)[[:space:]]*\$#      if(islhao.eq.0) \\1            !Modified by GAMBIT.#g"
                                 -e "s#[[:space:]]*islhai[[:space:]]*=[[:space:]]*1[[:space:]]*\$#      islhai  = 2                                !Modified by GAMBIT.#g"
                                 -e "s#[[:space:]]*islhao[[:space:]]*=[[:space:]]*1[[:space:]]*\$#      islhao  = 2                                !Modified by GAMBIT.#g"
                                 -e "/[[:space:]]*if(islhai\\.eq\\.1)[[:space:]]*then[[:space:]]*\$/{" -e "N" -e "s#\\([[:space:]]*if(islhai\\.eq\\.1)[[:space:]]*then\\)#      if(islhai.ge.1) then                       !Added by GAMBIT.${nl}  \\1#" -e "}"
                                 -e "s#[[:space:]]*call SLHA_read_leshouches_HDEC(ninlha)#         call SLHA_read_leshouches_HDEC(ninlha)${nl}        endif                                    !Added by GAMBIT.#g"
                                 -e "s#\\(c -- calculation of the mb pole mass from mb(mb)_MSbar --[[:space:]]*\\)\$#      if(ishai.eq.2) fmb = massval(34)           !Added by GAMBIT.${nl}\\1#g"
                                 -e "/c -- calculation of the mb pole mass from mb(mb)_MSbar --[[:space:]]*\$/{" -e "N" -e "s#\\([[:space:]]*if(smval(5)\\.ne\\.0\\.D0\\))[[:space:]]*then[[:space:]]*\$#\\1 .and. ishai.ne.2) then !Modified by GAMBIT.#" -e "}"
                                 -e "/[[:space:]]*close(nout)[[:space:]]*\$/{" -e "N" -e "N" -e "s#else#elseif (islhao .eq. 0) then                !Modified by GAMBIT.#" -e "}"
                                 hdecay.f.tmp
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" makefile.tmp > makefile
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" sdecay.f.tmp > sdecay.f
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" hdecay.f.tmp > hdecay.f
            COMMAND cmake -E remove makefile.tmp
            COMMAND cmake -E remove sdecay.f.tmp
            COMMAND cmake -E remove hdecay.f.tmp
  BUILD_COMMAND make ${susyhit_lib}.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${CMAKE_Fortran_FLAGS}
  INSTALL_COMMAND sed ${dashi} "s#${susyhit_ver}:.*${susyhit_lib}\\.so#${susyhit_ver}:         ${susyhit_short_dir}/${susyhit_lib}.so#g" ${PROJECT_SOURCE_DIR}/config/backend_locations.yaml
)
set_property(TARGET susyhit PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${susyhit_dir}/${susyhit_lib}.so")

# FeynHiggs
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

# HiggsBounds
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
  CONFIGURE_COMMAND cp configure-with-chisq my_configure
            COMMAND sed ${dashi} -e "s|.*clsbtablesdir=.*|clsbtablesdir=\"${PROJECT_SOURCE_DIR}/../extras/HiggsBounds/\"|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90C =.*|F90C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F77C =.*|F77C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90FLAGS =.*|F90FLAGS = ${CMAKE_Fortran_FLAGS}|" <SOURCE_DIR>/my_configure
            COMMAND <SOURCE_DIR>/my_configure
  BUILD_COMMAND make COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libhiggsbounds.so *.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND cp <SOURCE_DIR>/lib/libhiggsbounds.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)
set_property(TARGET higgsbounds PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/HiggsBounds/HiggsBounds/lib/higgsbounds.so" "${PROJECT_SOURCE_DIR}/Backends/lib/higgsbounds.so")

# HiggsSignals
ExternalProject_Add(higgssignals
  DEPENDS higgsbounds
  URL http://www.hepforge.org/archive/higgsbounds/HiggsSignals-1.3.2.tar.gz
  URL_MD5 2e300a3784eb5d3a9e1dd905d2af7676
  DOWNLOAD_DIR ${PROJECT_SOURCE_DIR}/../extras/HiggsSignals
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/HiggsSignals/HiggsSignals
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND cp configure my_configure 
            COMMAND sed ${dashi} -e "s|HBLIBS =.*|HBLIBS =-L../../HiggsBounds/HiggsBounds|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|HBINCLUDE =.*|HBINCLUDE =-I../../HiggsBounds/HiggsBounds|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90C =.*|F90C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F77C =.*|F77C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90FLAGS =.*|F90FLAGS = ${CMAKE_Fortran_FLAGS}|" <SOURCE_DIR>/my_configure
            COMMAND <SOURCE_DIR>/my_configure
  BUILD_COMMAND make COMMAND mkdir -p lib COMMAND rm HiggsSignals.o COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libhiggssignals.so ./*.o ../../HiggsBounds/HiggsBounds/*.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND cp <SOURCE_DIR>/lib/libhiggssignals.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)
set_property(TARGET higgssignals PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/HiggsSignals/HiggsSignals/lib/higgssignals.so" "${PROJECT_SOURCE_DIR}/Backends/lib/higgssignals.so")


set_target_properties(ddcalc gamlike darksusy micromegas superiso nulike pythia fastsim  
                      higgssignals higgsbounds higgsbounds_tables feynhiggs susyhit diver multinest PROPERTIES EXCLUDE_FROM_ALL 1)

add_custom_target(backends COMMAND make gamlike nulike ddcalc pythia darksusy superiso susyhit) #fastsim micromegas

