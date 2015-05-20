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
#************************************************

include(ExternalProject)

# Define the sed command to use differently for OSX and linux
if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(dashi "-i ''")
else()
  set(dashi "-i")
endif()
set(nl "___totally_unlikely_to_occur_naturally___")

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

set(true_nl \"\\n\")
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
            COMMAND sed ${dashi} -e "s#FC=\\(.*\\)\\s*$#FF=\\1${nl}${nl}FC=\\$\\(FF\\)${nl}FFLAGS= -O2 -fPIC#g"
                                 -e "s#FC)\\s*-c#FC\\) \\$\\(FFLAGS\\) -c#g" 
                                 -e "s#\\(clean:.*\\)$#${susyhit_lib}.so:\\$\\(OBJS1\\) \\$\\(OBJS2\\) \\$\\(OBJS3\\)${nl}\t\\$\\(FC\\) -shared -o \\$@ \\$\\(OBJS1\\) \\$\\(OBJS2\\) \\$\\(OBJS3\\)${nl}${nl}\\1#g"
                                 makefile.tmp
            COMMAND sed ${dashi} -e "s#^\\s*program sdecay\\s*$#      !Added by GAMBIT to make 100% sure \\'unlikely\\' matches the fortran value.${nl}      double precision function s_hit_unlikely()${nl}        s_hit_unlikely = -123456789D0${nl}      end${nl}${nl}      subroutine sdecay                          !Modified by GAMBIT.#g"
                                 -e "s#COMMON/SD_stopwidth/stoptot4\\s*$#COMMON/SD_stopwidth/stoptot4,stoptot       !Modified by GAMBIT#g"
                                 -e "s#\\(\\s*open(ninshs,file=.*\\)$#      if (.false.) then                          !Added by GAMBIT.${nl}${nl}\\1#g"
                                 -e "s#\\(^\\s*flagshsin=2d0\\)$#\\1${nl}      endif                                      !Added by GAMBIT.${nl}${nl}      else                                       !Added by GAMBIT.${nl}${nl}        flagshsin=0d0                            !Added by GAMBIT.${nl}        flagoutput=2d0                           !Added by GAMBIT.${nl}        i4bod=1                                  !Added by GAMBIT.${nl}#g"
                                 -e "s#\\(\\s*if((flagoutput\\.eq\\.1\\.D0).or.(ifavvio\\.eq\\.1)) then\\)#c\\1 !Commented out by GAMBIT.#g"
                                 -e "s#\\!\\(\\s*if(flagoutput\\.eq\\.1\\.D0) then\\)\\s*$#\\1                !Reinstated by GAMBIT.#g"
                                 -e "/output not a la Les Houches accord/{" -e "N" -e "N" -e "s/else/elseif(flagoutput.eq.0.D0) then            !Modified by GAMBIT./" -e "}"
                                 -e "s#\\(^\\s*if(flagshsin\\.\\)eq\\(\\.1\\.D0) then\\)#\\1le\\2                 !Modified by GAMBIT.#g"
                                 sdecay.f.tmp
            COMMAND sed ${dashi} -e "/=1: READ SUSY LES HOUCHES ACCORD INPUT/{" -e "N" -e "N" -e "s/\\(.*${nl}c end change susyhit\\s\\)/\\1C           =2: SLHA INPUT PROVIDED BY CALLING PROGRAM  !Added by GAMBIT.${nl}/" -e "}"
                                 -e "/=1: WRITE SUSY LES HOUCHES ACCORD OUTPUT/{" -e "N" -e "N" -e "s/\\(.*${nl}c end change susyhit\\s\\)/\\1C           =2: WRITE NOTHING                           !Added by GAMBIT.${nl}/" -e "}"
                                 -e "s#\\s*if(islhao\\.ne\\.1) then\\s*\$#      if(islhao.eq.0) then                       !Modified by GAMBIT.#g"
                                 -e "s#\\s*\\(CALL CLOSE_HDEC\\)\\s*\$#      if(islhao.eq.0) \\1            !Modified by GAMBIT.#g"
                                 -e "s#\\s*islhai\\s*=\\s*1\\s*\$#      islhai  = 2                                !Modified by GAMBIT.#g"
                                 -e "s#\\s*islhao\\s*=\\s*1\\s*\$#      islhao  = 2                                !Modified by GAMBIT.#g"
                                 -e "/\\s*if(islhai\\.eq\\.1)\\s*then\\s*\$/{" -e "N" -e "s#\\(\\s*if(islhai\\.eq\\.1)\\s*then\\)#      if(islhai.ge.1) then                       !Added by GAMBIT.${nl}  \\1#" -e "}"
                                 -e "s#\\s*call SLHA_read_leshouches_HDEC(ninlha)#         call SLHA_read_leshouches_HDEC(ninlha)${nl}        endif                                    !Added by GAMBIT.#g"
                                 -e "s#\\(c -- calculation of the mb pole mass from mb(mb)_MSbar --\\s*\\)\$#      if(ishai.eq.2) fmb = massval(34)           !Added by GAMBIT.${nl}\\1#g"
                                 -e "/c -- calculation of the mb pole mass from mb(mb)_MSbar --\\s*\$/{" -e "N" -e "s#\\(\\s*if(smval(5)\\.ne\\.0\\.D0\\))\\s*then\\s*\$#\\1 .and. ishai.ne.2) then !Modified by GAMBIT.#" -e "}"
                                 -e "/\\s*close(nout)\\s*\$/{" -e "N" -e "N" -e "s#else#elseif (islhao .eq. 0) then                !Modified by GAMBIT.#" -e "}"
                                 hdecay.f.tmp
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" makefile.tmp > makefile
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" sdecay.f.tmp > sdecay.f
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" hdecay.f.tmp > hdecay.f
            COMMAND cmake -E remove makefile.tmp
            COMMAND cmake -E remove sdecay.tmp
            COMMAND cmake -E remove hdecay.tmp
  BUILD_COMMAND make ${susyhit_lib}.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${CMAKE_Fortran_FLAGS}
  INSTALL_COMMAND sed ${dashi} "s#${susyhit_ver}:.*${susyhit_lib}\\.so#${susyhit_ver}:         ${susyhit_short_dir}/${susyhit_lib}.so#g" ${PROJECT_SOURCE_DIR}/config/backend_locations.yaml
)
set_property(TARGET susyhit PROPERTY _EP_DOWNLOAD_ALWAYS 0)
set(clean_files ${clean_files} "${susyhit_dir}/${susyhit_lib}.so")


set_target_properties(ddcalc gamlike darksusy micromegas superiso nulike pythia fastsim BOSSMinimalExample susyhit PROPERTIES EXCLUDE_FROM_ALL 1)

add_custom_target(backends COMMAND make gamlike nulike ddcalc pythia BOSSMinimalExample darksusy superiso susyhit) #fastsim micromegas

