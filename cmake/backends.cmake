# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  CMake configuration scripts for obtaining,
#  configuring, compiling and installing
#  backends.
#
#  Note that this is not necessarily the canonical
#  way to manage the compilation of all backends,
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
#  \date 2015 Sep
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)
#  \date 2014 Nov, Dec
#  \date 2015 May, Dec
#
#  \author Chris Rogan
#          (crogan@cern.ch)
#  \date 2015 May
#
#  \author Anders Kvellestad
#          (anderkve@fys.uio.no)
#  \date 2015 May
#
#  \author Christoph Weniger
#          (c.weniger@uva.nl)
#  \date 2015 Sep
#
#************************************************

# DarkSUSY
set(remove_files_from_libdarksusy dssetdsinstall.o dssetdsversion.o ddilog.o drkstp.o eisrs1.o tql2.o tred2.o)
set(remove_files_from_libisajet fa12.o  func_int.o  func.o  isalhd.o  isared.o)
set(darksusy_dir "${PROJECT_SOURCE_DIR}/Backends/installed/DarkSUSY/5.1.3")
set(darksusy_dl "darksusy-5.1.3.tar.gz")
set(DS_PATCH_DIR "${PROJECT_SOURCE_DIR}/Backends/patches/DarkSUSY/5.1.3")
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(_ld_prefix "-Wl,-all_load")
  set(_ld_suffix "")
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(_ld_prefix "-Wl,--whole-archive")
  set(_ld_suffix "-Wl,--no-whole-archive")
endif()
set(libs ${_ld_prefix} <SOURCE_DIR>/lib/libFH.a <SOURCE_DIR>/lib/libHB.a <SOURCE_DIR>/lib/libdarksusy.a <SOURCE_DIR>/lib/libisajet.a ${_ld_suffix})
ExternalProject_Add(darksusy
  URL http://www.fysik.su.se/~edsjo/darksusy/tars/${darksusy_dl}
  URL_MD5 ca95ffa083941a469469710fab2f3c97
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${darksusy_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  PATCH_COMMAND patch -b -p1 -d src < ${DS_PATCH_DIR}/patchDS.dif
        COMMAND patch -b -p1 -d contrib/isajet781-for-darksusy < ${DS_PATCH_DIR}/patchISA.dif
        #COMMAND patch -b -p2 -d src < ${DS_PATCH_DIR}/patchDS_OMP_src.dif
        #COMMAND patch -b -p2 -d include < ${DS_PATCH_DIR}/patchDS_OMP_include.dif
 # FIXME DarkSUSY segfaults with -O2 setting
 #CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${GAMBIT_Fortran_FLAGS} FFLAGS=${GAMBIT_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${GAMBIT_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${GAMBIT_CXX_FLAGS}
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${CMAKE_Fortran_FLAGS} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM}
        COMMAND ar d <SOURCE_DIR>/lib/libdarksusy.a ${remove_files_from_libdarksusy}
        COMMAND ar d <SOURCE_DIR>/lib/libisajet.a ${remove_files_from_libisajet}
  INSTALL_COMMAND ${CMAKE_Fortran_COMPILER} ${OpenMP_Fortran_FLAGS} -shared ${libs} -o <SOURCE_DIR>/lib/libdarksusy.so
)
add_extra_targets(darksusy ${darksusy_dir} ${backend_download}/${darksusy_dl} distclean)

# DarkSUSY 5.1.1
set(remove_files_from_libdarksusy dssetdsinstall.o dssetdsversion.o ddilog.o drkstp.o eisrs1.o tql2.o tred2.o)
set(remove_files_from_libisajet fa12.o  func_int.o  func.o  isalhd.o  isared.o)
set(darksusy_dir "${PROJECT_SOURCE_DIR}/Backends/installed/DarkSUSY/5.1.1")
set(darksusy_dl "darksusy-5.1.1.tar.gz")
set(DS_PATCH_DIR "${PROJECT_SOURCE_DIR}/Backends/patches/DarkSUSY/5.1.1")
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(_ld_prefix "-Wl,-all_load")
  set(_ld_suffix "")
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(_ld_prefix "-Wl,--whole-archive")
  set(_ld_suffix "-Wl,--no-whole-archive")
endif()
set(libs ${_ld_prefix} <SOURCE_DIR>/lib/libFH.a <SOURCE_DIR>/lib/libHB.a <SOURCE_DIR>/lib/libdarksusy.a <SOURCE_DIR>/lib/libisajet.a ${_ld_suffix})
ExternalProject_Add(darksusy_5_1_1
  URL http://www.fysik.su.se/~edsjo/darksusy/tars/${darksusy_dl}
  URL_MD5 ebeb0e1cfb4d834858e120190e423f62
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${darksusy_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  PATCH_COMMAND patch -b -p1 -d src < ${DS_PATCH_DIR}/patchDS.dif
        COMMAND patch -b -p1 -d contrib/isajet781-for-darksusy < ${DS_PATCH_DIR}/patchISA.dif
        #COMMAND patch -b -p2 -d src < ${DS_PATCH_DIR}/patchDS_OMP_src.dif
        #COMMAND patch -b -p2 -d include < ${DS_PATCH_DIR}/patchDS_OMP_include.dif
 # FIXME DarkSUSY segfaults with -O2 setting
 #CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${GAMBIT_Fortran_FLAGS} FFLAGS=${GAMBIT_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${GAMBIT_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${GAMBIT_CXX_FLAGS}
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${CMAKE_Fortran_FLAGS} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM}
        COMMAND ar d <SOURCE_DIR>/lib/libdarksusy.a ${remove_files_from_libdarksusy}
        COMMAND ar d <SOURCE_DIR>/lib/libisajet.a ${remove_files_from_libisajet}
  INSTALL_COMMAND ${CMAKE_Fortran_COMPILER} ${OpenMP_Fortran_FLAGS} -shared ${libs} -o <SOURCE_DIR>/lib/libdarksusy.so
)
add_extra_targets(darksusy_5_1_1 ${darksusy_dir} ${backend_download}/${darksusy_dl} distclean)

# SuperIso
set(superiso_dir "${PROJECT_SOURCE_DIR}/Backends/installed/SuperIso/3.4")
set(superiso_dl "superiso_v3.4.tgz")
ExternalProject_Add(superiso
  URL http://superiso.in2p3.fr/download/${superiso_dl}
  URL_MD5 ae4ecc45e7f608d9faf91ba8e5780053
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${superiso_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND sed ${dashi} "s#CC = gcc#CC = ${CMAKE_C_COMPILER}#g" <SOURCE_DIR>/Makefile
        COMMAND sed ${dashi} "s/CFLAGS= -O3 -pipe -fomit-frame-pointer/CFLAGS= -lm -fPIC ${GAMBIT_C_FLAGS}/g" <SOURCE_DIR>/Makefile
        COMMAND ${CMAKE_MAKE_PROGRAM}
        COMMAND ar x <SOURCE_DIR>/src/libisospin.a
        COMMAND echo "${CMAKE_C_COMPILER} -shared -o libsuperiso.so *.o -lm" > make_so.sh
        COMMAND chmod u+x make_so.sh
        COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets(superiso ${superiso_dir} ${backend_download}/${superiso_dl} distclean)

# DDCalc
set(ddcalc_location "${GAMBIT_INTERNAL}/DDCalc0")
set(ddcalc_dir "${PROJECT_SOURCE_DIR}/Backends/installed/DDCalc/0.0")
ExternalProject_Add(ddcalc
  DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --yellow --bold ${private_code_warning1}
           COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red --bold ${private_code_warning2}
           COMMAND ${CMAKE_COMMAND} -E copy_directory ${ddcalc_location} ${ddcalc_dir}
  SOURCE_DIR ${ddcalc_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} libDDCalc0.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${GAMBIT_Fortran_FLAGS} OUTPUT_PIPE=>/dev/null
  INSTALL_COMMAND ""
)
add_extra_targets(ddcalc ${ddcalc_dir} null cleanest)

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
set(gamlike_CXXFLAGS "${GAMBIT_CXX_FLAGS}")
if (NOT GSL_INCLUDE_DIRS STREQUAL "")
  set(gamlike_CXXFLAGS "${gamlike_CXXFLAGS} -I${GSL_INCLUDE_DIRS}")
endif()
set(gamlike_location "${GAMBIT_INTERNAL}/gamLike")
set(gamlike_dir "${PROJECT_SOURCE_DIR}/Backends/installed/gamLike/1.0.0")
set(gamlike_data_path "${gamlike_dir}/data/")
ExternalProject_Add(gamlike
  DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --yellow --bold ${private_code_warning1}
           COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red --bold ${private_code_warning2}
           COMMAND ${CMAKE_COMMAND} -E copy_directory ${gamlike_location} ${gamlike_dir}
  SOURCE_DIR ${gamlike_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${gamlike_CXXFLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} LDLIBS=${GAMLIKE_GSL_LIBS} GAMLIKE_DATA_PATH=${gamlike_data_path}
  INSTALL_COMMAND ""
)
add_extra_targets(gamlike ${gamlike_dir} null clean)

# MicrOmegas for MSSM
set(micromegas_dir "${PROJECT_SOURCE_DIR}/Backends/installed/micromegas/3.6.9.2/MSSM")
set(micromegas_patch_dir "${PROJECT_SOURCE_DIR}/Backends/patches/micromegas/3.6.9.2/MSSM")
set(micromegas_dl "micromegas_3.6.9.2.tgz")
ExternalProject_Add(micromegas
  DOWNLOAD_COMMAND ""
  SOURCE_DIR ${micromegas_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND cd ${micromegas_patch_dir} && ./install_micromegas.script FC=${CMAKE_Fortran_COMPILER}
  INSTALL_COMMAND ""
)
add_extra_targets(micromegas ${micromegas_dir} ${backend_download}/${micromegas_dl} clean)

# MicrOmegas for SingletDM
set(micromegasSingletDM_dir "${PROJECT_SOURCE_DIR}/Backends/installed/micromegas/3.6.9.2/SingletDM")
set(micromegasSingletDM_patch_dir "${PROJECT_SOURCE_DIR}/Backends/patches/micromegas/3.6.9.2/SingletDM")
set(micromegasSingletDM_dl "micromegas_3.6.9.2.tgz")
ExternalProject_Add(micromegasSingletDM
  DOWNLOAD_COMMAND ""
  SOURCE_DIR ${micromegasSingletDM_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND cd ${micromegasSingletDM_patch_dir} && ./install_micromegas.script FC=${CMAKE_Fortran_COMPILER}
  INSTALL_COMMAND ""
)
add_extra_targets(micromegasSingletDM ${micromegasSingletDM_dir} ${backend_download}/${micromegasSingletDM_dl} clean)

# Pythia
set(pythia_CXXFLAGS "${GAMBIT_CXX_FLAGS}")
# - Add additional compiler-specific optimisation flags and suppress warnings from -Wextra when building Pythia with gcc
if("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Intel")
  set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -fast -g")
elseif("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU")
  set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -Wno-extra -ffast-math")
endif()
# - Add "-undefined dynamic_lookup flat_namespace" to linker flags when OSX linker is used
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(pythia_CXX_SHARED_FLAGS "${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} -undefined dynamic_lookup flat_namespace")
else()
  set(pythia_CXX_SHARED_FLAGS "${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS}")
endif()
# - Set include directories
set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -I${Boost_INCLUDE_DIR} -I${PROJECT_SOURCE_DIR}/contrib/slhaea/include")
# - Set local paths
set(pythia_location "${GAMBIT_INTERNAL}/boss/bossed_pythia_source")
set(pythia_dir "${PROJECT_SOURCE_DIR}/Backends/installed/Pythia/8.212")
set(pythia_dl "pythia8212.tgz")
# - Actual configure and compile commands
ExternalProject_Add(pythia
  URL http://home.thep.lu.se/~torbjorn/pythia8/${pythia_dl}
  URL_MD5 0886d1b2827d8f0cd2ae69b925045f40
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${pythia_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ./configure --enable-shared --cxx="${CMAKE_CXX_COMPILER}" --cxx-common="${pythia_CXXFLAGS}" --cxx-shared="${pythia_CXX_SHARED_FLAGS}" --lib-suffix=".so"
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX="${CMAKE_CXX_COMPILER}"
  INSTALL_COMMAND ""
)
ExternalProject_Add_Step(pythia apply_hacks
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/Pythia.cc ${pythia_dir}/src/Pythia.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ParticleData.cc ${pythia_dir}/src/ParticleData.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/SusyLesHouches.cc ${pythia_dir}/src/SusyLesHouches.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ResonanceDecays.cc ${pythia_dir}/src/ResonanceDecays.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/Pythia.h ${pythia_dir}/include/Pythia8/Pythia.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ParticleData.h ${pythia_dir}/include/Pythia8/ParticleData.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/SusyLesHouches.h ${pythia_dir}/include/Pythia8/SusyLesHouches.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/Settings.h ${pythia_dir}/include/Pythia8/Settings.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/PartonDistributions.h ${pythia_dir}/include/Pythia8/PartonDistributions.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/PartonDistributions.cc ${pythia_dir}/src/PartonDistributions.cc
  DEPENDEES download
  DEPENDERS patch
)
BOSS_backend(pythia Pythia 8.212)
add_extra_targets(pythia ${pythia_dir} ${backend_download}/${pythia_dl} distclean)

# Fastsim
set(fastsim_location "${GAMBIT_INTERNAL}/fast_sim")
set(fastsim_dir "${PROJECT_SOURCE_DIR}/Backends/installed/fastsim/1.0")
ExternalProject_Add(fastsim
  DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --yellow --bold ${private_code_warning1}
           COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red --bold ${private_code_warning2}
           COMMAND ${CMAKE_COMMAND} -E copy_directory ${fastsim_location} ${fastsim_dir}
  SOURCE_DIR ${fastsim_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${GAMBIT_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} libfastsim.so
  INSTALL_COMMAND ""
)
add_extra_targets(fastsim ${fastsim_dir} null distclean)

# Nulike
set(nulike_ver "1.0.0")
set(nulike_location "http://www.hepforge.org/archive/nulike/nulike-${nulike_ver}.tar.gz")
set(nulike_lib "libnulike")
set(nulike_dir "${PROJECT_SOURCE_DIR}/Backends/installed/nulike/${nulike_ver}")
set(nulike_short_dir "./Backends/installed/nulike/${nulike_ver}")
set(nulikeFFLAGS "${GAMBIT_Fortran_FLAGS} -I${nulike_dir}/include")
ExternalProject_Add(nulike
  URL ${nulike_location}
  URL_MD5 c2a3abec8e9a20ec7e113d9600ef8118
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${nulike_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} ${nulike_lib}.so FF=${CMAKE_Fortran_COMPILER} FFLAGS=${nulikeFFLAGS} MODULE=${FMODULE}
  INSTALL_COMMAND ""
)
add_extra_targets(nulike ${nulike_dir} null distclean)

# SUSY-HIT
set(susyhit_ver "1\\.5")
set(susyhit_lib "libsusyhit")
set(susyhit_dir "${PROJECT_SOURCE_DIR}/Backends/installed/SUSY-HIT/1.5")
set(susyhit_short_dir "./Backends/installed/SUSY-HIT/1.5")
set(susyhit_dl "susyhit.tar.gz")
ExternalProject_Add(susyhit
  URL http://www.itp.kit.edu/~maggie/SUSY-HIT/${susyhit_dl}
  URL_MD5 493c7ba3a07e192918d3412875fb386a
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${susyhit_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND cp -n makefile makefile.orig  COMMAND cp -n sdecay.f sdecay.orig  COMMAND cp -n hdecay.f hdecay.orig
            COMMAND cp -n lightst3bod.f lightst3bod.f.orig COMMAND cp -n lightst4bod.f lightst4bod.f.orig
            COMMAND cp makefile.orig makefile.tmp COMMAND cp sdecay.orig sdecay.f.tmp COMMAND cp hdecay.orig hdecay.f.tmp
            COMMAND cp lightst3bod.f.orig lightst3bod.f.tmp COMMAND cp lightst4bod.f.orig lightst4bod.f.tmp
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
                                 -e "s#integer nx1t,ny1t,nnlo,imod(1:2)#logical qcdcorrstok(2),qcdcorrsbok(2),qcdcorrchok(2),qcdcorrglok!Added by GAMBIT${nl}      integer nx1t,ny1t,nnlo,imod(1:2)#g"
                                 -e "s#     \\.           qcdcharsupr(i)+qcdcharsdownl(i)+qcdcharsdownr(i))#     .           qcdcharsupr(i)+qcdcharsdownl(i)+qcdcharsdownr(i))${nl}c --- PS added: when QCD corrections are <-100%, use as 1/(1-correction) instead of 1+correction${nl}            qcdcorrchok(i) = chartot2nlo(i) .ge. 0.D0${nl}            if (.not.qcdcorrchok(i)) chartot2nlo(i) =${nl}     .       chartot2lo(i) / (2.D0 - chartot2nlo(i) / chartot2lo(i))#g"
                                 -e "s#     \\.            + gluitot2lo#     .            + gluitot2lo${nl}${nl}c --- PS added: when QCD corrections are <-100%, use as 1/(1-correction) instead of 1+correction${nl}      qcdcorrglok = gluitot2nlo .ge. 0.D0${nl}      if (.not.qcdcorrglok) gluitot2nlo =${nl}     . gluitot2lo / (2.D0 - gluitot2nlo / gluitot2lo)#g"
                                 -e "s#qcdsb2zbot+qcdsb2wst(1)+qcdsb2wst(2)#qcdsb2zbot+qcdsb2wst(1)+qcdsb2wst(2)${nl}${nl}c --- PS added: when QCD corrections are <-100%, use as 1/(1-correction) instead of 1+correction${nl}      do i = 1,2,1${nl}         qcdcorrsbok(i) = sbottot2nlo(i) .ge. 0.D0${nl}         if (.not.qcdcorrsbok(i)) sbottot2nlo(i) =${nl}     .    sbottot2lo(i) / (2.D0 - sbottot2nlo(i) / sbottot2lo(2))${nl}      enddo${nl}#g"
                                 -e "s#     \\.            qcdst2wsb(2)#     .            qcdst2wsb(2)${nl}${nl}c --- PS added: when QCD corrections are <-100%, use as 1/(1-correction) instead of 1+correction${nl}      do i = 1,2,1${nl}         qcdcorrstok(i) = stoptot2nlo(i) .ge. 0.D0${nl}         if (.not.qcdcorrstok(i)) stoptot2nlo(i) =${nl}     .    stoptot2lo(i) / (2.D0 - stoptot2nlo(i) / stoptot2lo(i))${nl}      enddo${nl}#g"
                                 -e "s#stoptot(1) = sigma4bodtot+stoptotrad(1)#stoptot(1) = stoptotrad(1)${nl}               if (sigma4bodtot.gt.0.D0) stoptot(1) = stoptot(1) + sigma4bodtot#g"
                                 -e "s#         brcharst1(i)    = charst1(i)/chartot(i)#         if(qcdcorrchok(i)) then                                     !Added by GAMBIT${nl}         brcharst1(i)    = charst1(i)/chartot(i)#g"
                                 -e "s#         brcharstau2(i)  = charstau2(i)/chartot(i)#         brcharstau2(i)  = charstau2(i)/chartot(i)${nl}         endif                                                       !Added by GAMBIT#g"
                                 -e "s#            brcharhcneut(i,j) = charhcneut(i,j)/chartot(i)#         if(qcdcorrchok(i)) then                                     !Added by GAMBIT${nl}            brcharhcneut(i,j) = charhcneut(i,j)/chartot(i)#g"
                                 -e "s#            brcharwneut(i,j)  = charwneut(i,j)/chartot(i)#            brcharwneut(i,j)  = charwneut(i,j)/chartot(i)${nl}         endif                                                       !Added by GAMBIT#g"
                                 -e "s#      brcharzchic  = char2zchic1/chartot(2)#      if(qcdcorrchok(2)) then                                        !Added by GAMBIT${nl}      brcharzchic  = char2zchic1/chartot(2)#g"
                                 -e "s#      brcharhachic = char2hachic1/chartot(2)#      brcharhachic = char2hachic1/chartot(2)${nl}      endif                                                          !Added by GAMBIT#g"
                                 -e "s#            brcharwgravitino(i)  = charwgravitino(i)/chartot(i)#         if(qcdcorrchok(i)) then                                     !Added by GAMBIT${nl}            brcharwgravitino(i)  = charwgravitino(i)/chartot(i)#g"
                                 -e "s#            brcharhcgravitino(i) = charhcgravitino(i)/chartot(i)#            brcharhcgravitino(i) = charhcgravitino(i)/chartot(i)${nl}         endif                                                       !Added by GAMBIT#g"
                                 -e "s#brgst1    = gst1/gluitot#if (qcdcorrglok) brgst1    = gst1/gluitot      !Modified by GAMBIT#g"
                                 -e "s#brgst2    = gst2/gluitot#if (qcdcorrglok) brgst2    = gst2/gluitot      !Modified by GAMBIT#g"
                                 -e "s#brgsb1    = gsb1/gluitot#if (qcdcorrglok) brgsb1    = gsb1/gluitot      !Modified by GAMBIT#g"
                                 -e "s#brgsb2    = gsb2/gluitot#if (qcdcorrglok) brgsb2    = gsb2/gluitot      !Modified by GAMBIT#g"
                                 -e "s#brgsupl   = gsupl/gluitot#if (qcdcorrglok) brgsupl   = gsupl/gluitot     !Modified by GAMBIT#g"
                                 -e "s#brgsupr   = gsupr/gluitot#if (qcdcorrglok) brgsupr   = gsupr/gluitot     !Modified by GAMBIT#g"
                                 -e "s#brgsdownl = gsdownl/gluitot#if (qcdcorrglok) brgsdownl = gsdownl/gluitot   !Modified by GAMBIT#g"
                                 -e "s#brgsdownr = gsdownr/gluitot#if (qcdcorrglok) brgsdownr = gsdownr/gluitot   !Modified by GAMBIT#g"
                                 -e "s#brsb1neutt(i)=sb1neutt(i)/sbottot2(1)#if(qcdcorrsbok(1)) brsb1neutt(i)=sb1neutt(i)/sbottot2(1)    !Modified by GAMBIT#g"
                                 -e "s#brsb2neutt(i)=sb2neutt(i)/sbottot2(2)#if(qcdcorrsbok(2)) brsb2neutt(i)=sb2neutt(i)/sbottot2(2)    !Modified by GAMBIT#g"
                                 -e "s#brsb1chart(i) = sb1chart(i)/sbottot2(1)#if(qcdcorrsbok(1)) brsb1chart(i) = sb1chart(i)/sbottot2(1)  !Modified by GAMBIT#g"
                                 -e "s#brsb2chart(i) = sb2chart(i)/sbottot2(2)#if(qcdcorrsbok(2)) brsb2chart(i) = sb2chart(i)/sbottot2(2)  !Modified by GAMBIT#g"
                                 -e "s#brsb1hcst(i)  = sb1hcst(i)/sbottot2(1)#if(qcdcorrsbok(1)) brsb1hcst(i)  = sb1hcst(i)/sbottot2(1)   !Modified by GAMBIT#g"
                                 -e "s#brsb2hcst(i)  = sb2hcst(i)/sbottot2(2)#if(qcdcorrsbok(2)) brsb2hcst(i)  = sb2hcst(i)/sbottot2(2)   !Modified by GAMBIT#g"
                                 -e "s#brsb1wst(i)   = sb1wst(i)/sbottot2(1)#if(qcdcorrsbok(1)) brsb1wst(i)   = sb1wst(i)/sbottot2(1)    !Modified by GAMBIT#g"
                                 -e "s#brsb2wst(i)   = sb2wst(i)/sbottot2(2)#if(qcdcorrsbok(2)) brsb2wst(i)   = sb2wst(i)/sbottot2(2)    !Modified by GAMBIT#g"
                                 -e "s#brsb1glui = sb1glui/sbottot2(1)#if(qcdcorrsbok(1)) brsb1glui = sb1glui/sbottot2(1)             !Modified by GAMBIT#g"
                                 -e "s#brsb2glui = sb2glui/sbottot2(2)#if(qcdcorrsbok(2)) brsb2glui = sb2glui/sbottot2(2)             !Modified by GAMBIT#g"
                                 -e "s#brsb2hl   = sb2hl/sbottot2(2)#if(qcdcorrsbok(2)) brsb2hl   = sb2hl/sbottot2(2)               !Modified by GAMBIT#g"
                                 -e "s#brsb2hh   = sb2hh/sbottot2(2)#if(qcdcorrsbok(2)) brsb2hh   = sb2hh/sbottot2(2)               !Modified by GAMBIT#g"
                                 -e "s#brsb2ha   = sb2ha/sbottot2(2)#if(qcdcorrsbok(2)) brsb2ha   = sb2ha/sbottot2(2)               !Modified by GAMBIT#g"
                                 -e "s#brsb2zbot = sb2zbot/sbottot2(2)#if(qcdcorrsbok(2)) brsb2zbot = sb2zbot/sbottot2(2)             !Modified by GAMBIT#g"
                                 -e "s#brst1neutt(i) = st1neutt(i)/stoptot(1)#if(qcdcorrstok(1)) brst1neutt(i) = st1neutt(i)/stoptot(1)   !Modified by GAMBIT#g"
                                 -e "s#brst2neutt(i) = st2neutt(i)/stoptot(2)#if(qcdcorrstok(2)) brst2neutt(i) = st2neutt(i)/stoptot(2)   !Modified by GAMBIT#g"
                                 -e "s#brst1charb(i) = st1charb(i)/stoptot(1)#if(qcdcorrstok(1)) brst1charb(i) = st1charb(i)/stoptot(1)   !Modified by GAMBIT#g"
                                 -e "s#brst1hcsb(i)  = st1hcsb(i)/stoptot(1)#if(qcdcorrstok(1)) brst1hcsb(i)  = st1hcsb(i)/stoptot(1)    !Modified by GAMBIT#g"
                                 -e "s#brst1wsb(i)   = st1wsb(i)/stoptot(1)#if(qcdcorrstok(1)) brst1wsb(i)   = st1wsb(i)/stoptot(1)     !Modified by GAMBIT#g"
                                 -e "s#brst2charb(i) = st2charb(i)/stoptot(2)#if(qcdcorrstok(2)) brst2charb(i) = st2charb(i)/stoptot(2)   !Modified by GAMBIT#g"
                                 -e "s#brst2hcsb(i)  = st2hcsb(i)/stoptot(2)#if(qcdcorrstok(2)) brst2hcsb(i)  = st2hcsb(i)/stoptot(2)    !Modified by GAMBIT#g"
                                 -e "s#brst2wsb(i)   = st2wsb(i)/stoptot(2)#if(qcdcorrstok(2)) brst2wsb(i)   = st2wsb(i)/stoptot(2)     !Modified by GAMBIT#g"
                                 -e "s#brst1glui = st1glui/stoptot(1)#if(qcdcorrstok(1)) brst1glui = st1glui/stoptot(1)              !Modified by GAMBIT#g"
                                 -e "s#brst2glui = st2glui/stoptot(2)#if(qcdcorrstok(2)) brst2glui = st2glui/stoptot(2)              !Modified by GAMBIT#g"
                                 -e "s#brst2hl   = st2hl/stoptot(2)#if(qcdcorrstok(2)) brst2hl   = st2hl/stoptot(2)                !Modified by GAMBIT#g"
                                 -e "s#brst2hh   = st2hh/stoptot(2)#if(qcdcorrstok(2)) brst2hh   = st2hh/stoptot(2)                !Modified by GAMBIT#g"
                                 -e "s#brst2ha   = st2ha/stoptot(2)#if(qcdcorrstok(2)) brst2ha   = st2ha/stoptot(2)                !Modified by GAMBIT#g"
                                 -e "s#brst2ztop = st2ztop/stoptot(2)#if(qcdcorrstok(2)) brst2ztop = st2ztop/stoptot(2)              !Modified by GAMBIT#g"
                                 -e "s#c -------------------- the chargino branching ratios ----------------- c#c -------------------- the chargino branching ratios ----------------- c${nl}${nl}c --- PS added: when QCD corrections are <-100%, get 2-body BFs at tree-level${nl}      do i=1,2,1${nl}         if(.not.qcdcorrchok(i)) then${nl}            brcharst1(i)    = charst1(i)/chartot2lo(i)${nl}            brcharst2(i)    = charst2(i)/chartot2lo(i)${nl}            brcharsb1(i)    = charsb1(i)/chartot2lo(i)${nl}            brcharsb2(i)    = charsb2(i)/chartot2lo(i)${nl}            brcharsupl(i)   = charsupl(i)/chartot2lo(i)${nl}            brcharsupr(i)   = charsupr(i)/chartot2lo(i)${nl}            brcharsdownl(i) = charsdownl(i)/chartot2lo(i)${nl}            brcharsdownr(i) = charsdownr(i)/chartot2lo(i)${nl}            brcharsnel(i)   = charsnel(i)/chartot2lo(i)${nl}            brcharsn1(i)    = charsn1(i)/chartot2lo(i)${nl}            brcharsn2(i)    = charsn2(i)/chartot2lo(i)${nl}            brcharsell(i)   = charsell(i)/chartot2lo(i)${nl}            brcharselr(i)   = charselr(i)/chartot2lo(i)${nl}            brcharstau1(i)  = charstau1(i)/chartot2lo(i)${nl}            brcharstau2(i)  = charstau2(i)/chartot2lo(i)${nl}            do j=1,4,1${nl}               brcharhcneut(i,j) = charhcneut(i,j)/chartot2lo(i)${nl}               brcharwneut(i,j)  = charwneut(i,j)/chartot2lo(i)${nl}            end do${nl}        endif${nl}      end do${nl}      if(.not.qcdcorrchok(2)) then${nl}         brcharzchic  = char2zchic1/chartot2lo(2)${nl}         brcharhlchic = char2hlchic1/chartot2lo(2)${nl}         brcharhhchic = char2hhchic1/chartot2lo(2)${nl}         brcharhachic = char2hachic1/chartot2lo(2)${nl}      endif${nl}${nl}      if(flagnlspgmsb.eq.1.D0) then${nl}         do i=1,2,1${nl}            if(.not.qcdcorrchok(i)) then${nl}               brcharwgravitino(i)  = charwgravitino(i)/chartot2lo(i)${nl}               brcharhcgravitino(i) = charhcgravitino(i)/chartot2lo(i)${nl}            endif${nl}         end do${nl}      endif#g"
                                 -e "s#c -------------------- the gluino branching ratios ------------------- c#c -------------------- the gluino branching ratios ------------------- c${nl}${nl}c --- PS added: when QCD corrections are <-100%, get 2-body BFs at tree-level${nl}      if(.not.qcdcorrglok) then${nl}        brgst1    = gst1/gluitot2lo${nl}        brgst2    = gst2/gluitot2lo${nl}        brgsb1    = gsb1/gluitot2lo${nl}        brgsb2    = gsb2/gluitot2lo${nl}        brgsupl   = gsupl/gluitot2lo${nl}        brgsupr   = gsupr/gluitot2lo${nl}        brgsdownl = gsdownl/gluitot2lo${nl}        brgsdownr = gsdownr/gluitot2lo${nl}      endif#g"
                                 -e "s#c ---------------------- the stop branching ratios ------------------- c#c ---------------------- the stop branching ratios ------------------- c${nl}${nl}c --- PS added: when QCD corrections are <-100%, get 2-body BFs at tree-level${nl}      if(.not.qcdcorrstok(1)) then${nl}${nl}        do i=1,4,1${nl}           brst1neutt(i) = st1neutt(i)/stoptot2lo(1)${nl}        end do${nl}        do i=1,2,1${nl}           brst1charb(i) = st1charb(i)/stoptot2lo(1)${nl}           brst1hcsb(i)  = st1hcsb(i)/stoptot2lo(1)${nl}           brst1wsb(i)   = st1wsb(i)/stoptot2lo(1)${nl}        end do${nl}        brst1glui = st1glui/stoptot2lo(1)${nl}${nl}      endif${nl}${nl}      if(.not.qcdcorrstok(2)) then${nl}${nl}        do i=1,4,1${nl}           brst2neutt(i) = st2neutt(i)/stoptot2lo(2)${nl}        end do${nl}        do i=1,2,1${nl}           brst2charb(i) = st2charb(i)/stoptot2lo(2)${nl}           brst2hcsb(i)  = st2hcsb(i)/stoptot2lo(2)${nl}           brst2wsb(i)   = st2wsb(i)/stoptot2lo(2)${nl}        end do${nl}        brst2glui = st2glui/stoptot2lo(2)${nl}        brst2hl   = st2hl/stoptot2lo(2)${nl}        brst2hh   = st2hh/stoptot2lo(2)${nl}        brst2ha   = st2ha/stoptot2lo(2)${nl}        brst2ztop = st2ztop/stoptot2lo(2)${nl}${nl}      endif#g"
                                 -e "s#c --------------------- the sbottom branching ratios ----------------- c#c --------------------- the sbottom branching ratios ----------------- c${nl}${nl}c --- PS added: when QCD corrections are <-100%, get 2-body BFs at tree-level${nl}      if(.not.qcdcorrsbok(1)) then${nl}${nl}        do i=1,4,1${nl}           brsb1neutt(i) = sb1neutt(i)/sbottot2lo(1)${nl}        end do${nl}        do i=1,2,1${nl}           brsb1chart(i) = sb1chart(i)/sbottot2lo(1)${nl}           brsb1hcst(i)  = sb1hcst(i)/sbottot2lo(1)${nl}           brsb1wst(i)   = sb1wst(i)/sbottot2lo(1)${nl}        end do${nl}        brsb1glui = sb1glui/sbottot2lo(1)${nl}${nl}      endif${nl}${nl}      if(.not.qcdcorrsbok(2)) then${nl}${nl}        do i=1,4,1${nl}           brsb2neutt(i) = sb2neutt(i)/sbottot2lo(2)${nl}        end do${nl}        do i=1,2,1${nl}           brsb2chart(i) = sb2chart(i)/sbottot2lo(2)${nl}           brsb2hcst(i)  = sb2hcst(i)/sbottot2lo(2)${nl}           brsb2wst(i)   = sb2wst(i)/sbottot2lo(2)${nl}        end do${nl}        brsb2glui = sb2glui/sbottot2lo(2)${nl}        brsb2hl   = sb2hl/sbottot2lo(2)${nl}        brsb2hh   = sb2hh/sbottot2lo(2)${nl}        brsb2ha   = sb2ha/sbottot2lo(2)${nl}        brsb2zbot = sb2zbot/sbottot2lo(2)${nl}${nl}      endif#g"
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
                                 -e "s#\\(^[[:space:]][[:space:]]*.*write.*H[[:space:]]*->[[:space:]]*sbot.*\\)$#c\\1 !Commented out by GAMBIT#g"
                                 -e "s#\\(^[[:space:]][[:space:]]*\\.[[:space:]]*WHHSB(I,J)/SUSY,WHHSB(I,J)\\)#c\\1                    !Commented out by GAMBIT#g"
                                 hdecay.f.tmp
            COMMAND sed ${dashi} -e "s#DcharL(3,6,2), EcharR(3,6,2),#DcharL(3,6,6), EcharR(3,6,6),         !Modified by GAMBIT#g" lightst3bod.f.tmp > lightst3bod.f
            COMMAND sed ${dashi} -e "s#DcharL(3,6,2), EcharR(3,6,2),#DcharL(3,6,6), EcharR(3,6,6),         !Modified by GAMBIT#g" lightst4bod.f.tmp > lightst4bod.f
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" makefile.tmp > makefile
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" sdecay.f.tmp > sdecay.f
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" hdecay.f.tmp > hdecay.f
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" lightst3bod.f.tmp > lightst3bod.f
            COMMAND awk "{gsub(/${nl}/,${true_nl})}{print}" lightst4bod.f.tmp > lightst4bod.f
            COMMAND ${CMAKE_COMMAND} -E remove makefile.tmp
            COMMAND ${CMAKE_COMMAND} -E remove sdecay.f.tmp
            COMMAND ${CMAKE_COMMAND} -E remove hdecay.f.tmp
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} ${susyhit_lib}.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${GAMBIT_Fortran_FLAGS}
  INSTALL_COMMAND ""
)
add_extra_targets(susyhit ${susyhit_dir} ${backend_download}/${susyhit_dl} clean)

# FeynHiggs
set(feynhiggs_dir "${PROJECT_SOURCE_DIR}/Backends/installed/FeynHiggs/2.11.3")
set(feynhiggs_dl "FeynHiggs-2.11.3.tar.gz")
#set(FH_Fortran_FLAGS "${GAMBIT_Fortran_FLAGS}")
#set(FH_C_FLAGS "${GAMBIT_C_FLAGS}")
#set(FH_CXX_FLAGS "${GAMBIT_CXX_FLAGS}")
#set(FH_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -Wall -fcheck=all ") #For debugging FH issues with gfortran
set(FH_Fortran_FLAGS "${CMAKE_Fortran_FLAGS}") #For skipping -O2, which seems to cause issues
set(FH_C_FLAGS "${CMAKE_C_FLAGS}")             #For skipping -O2, which seems to cause issues
set(FH_CXX_FLAGS "${CMAKE_CXX_FLAGS}")         #For skipping -O2, which seems to cause issues
ExternalProject_Add(feynhiggs
  URL http://wwwth.mpp.mpg.de/members/heinemey/feynhiggs/newversion/${feynhiggs_dl}
  URL_MD5 8912a4ba060e404ba206e47bfdf338d3
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${feynhiggs_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  # Fix bug preventing the use of array bounds checking.
  CONFIGURE_COMMAND sed ${dashi} -e "s#ComplexType spi_(2, 6:7, nvec, 1)#ComplexType spi_(2, 6:7, nvec, LEGS)#g" <SOURCE_DIR>/src/Decays/VecSet.F
            COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FFLAGS=${FH_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${FH_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${FH_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libFH.so build/*.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets(feynhiggs ${feynhiggs_dir} ${backend_download}/${feynhiggs_dl} clean)

# FeynHiggs 2.11.2
set(feynhiggs_dir "${PROJECT_SOURCE_DIR}/Backends/installed/FeynHiggs/2.11.2")
set(feynhiggs_dl "FeynHiggs-2.11.2.tar.gz")
#set(FH_Fortran_FLAGS "${GAMBIT_Fortran_FLAGS}")
#set(FH_C_FLAGS "${GAMBIT_C_FLAGS}")
#set(FH_CXX_FLAGS "${GAMBIT_CXX_FLAGS}")
#set(FH_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -Wall -fcheck=all ") #For debugging FH issues with gfortran
set(FH_Fortran_FLAGS "${CMAKE_Fortran_FLAGS}") #For skipping -O2, which seems to cause issues
set(FH_C_FLAGS "${CMAKE_C_FLAGS}")             #For skipping -O2, which seems to cause issues
set(FH_CXX_FLAGS "${CMAKE_CXX_FLAGS}")         #For skipping -O2, which seems to cause issues
ExternalProject_Add(feynhiggs_2_11_2
  URL http://wwwth.mpp.mpg.de/members/heinemey/feynhiggs/newversion/${feynhiggs_dl}
  URL_MD5 edb73eafa6dab291bd8827242c16ac0a
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${feynhiggs_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  # Fix bug preventing the use of array bounds checking.
  CONFIGURE_COMMAND sed ${dashi} -e "s#ComplexType spi_(2, 6:7, nvec, 1)#ComplexType spi_(2, 6:7, nvec, LEGS)#g" <SOURCE_DIR>/src/Decays/VecSet.F
            COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FFLAGS=${FH_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${FH_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${FH_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libFH.so build/*.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets(feynhiggs_2_11_2 ${feynhiggs_dir} ${backend_download}/${feynhiggs_dl} clean)

# HiggsBounds
set(higgsbounds_tables_loc "${PROJECT_SOURCE_DIR}/Backends/installed/")
set(higgsbounds_tables_dir "${higgsbounds_tables_loc}csboutput_trans_binary")
ExternalProject_Add(higgsbounds_tables
  URL http://www.hepforge.org/archive/higgsbounds/csboutput_trans_binary.tar.gz
  URL_MD5 004decca30335ddad95654a04dd034a6
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${higgsbounds_tables_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ""
  INSTALL_COMMAND ""
)
set(higgsbounds_dir "${PROJECT_SOURCE_DIR}/Backends/installed/HiggsBounds/4.2.1")
set(higgsbounds_dl "HiggsBounds-4.2.1.tar.gz")
ExternalProject_Add(higgsbounds
  DEPENDS higgsbounds_tables
  URL http://www.hepforge.org/archive/higgsbounds/${higgsbounds_dl}
  URL_MD5 47b93330d4e0fddcc23b381548db355b
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${higgsbounds_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND cp configure-with-chisq my_configure
            COMMAND sed ${dashi} -e "s|clsbtablesdir=.*|clsbtablesdir=\"${higgsbounds_tables_loc}\"|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90C =.*|F90C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F77C =.*|F77C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90FLAGS =.*|F90FLAGS = ${GAMBIT_Fortran_FLAGS}|" <SOURCE_DIR>/my_configure
            COMMAND <SOURCE_DIR>/my_configure
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libhiggsbounds.so *.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets(higgsbounds ${higgsbounds_dir} ${backend_download}/${higgsbounds_dl} hyperclean)

# HiggsSignals
set(higgssignals_dir "${PROJECT_SOURCE_DIR}/Backends/installed/HiggsSignals/1.4.0")
set(higgssignals_dl "HiggsSignals-1.4.0.tar.gz")
ExternalProject_Add(higgssignals
  DEPENDS higgsbounds
  URL http://www.hepforge.org/archive/higgsbounds/${higgssignals_dl}
  URL_MD5 00b8ac655e357c7cba9ca786f8f2ddee
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${higgssignals_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND cp configure my_configure
            COMMAND sed ${dashi} -e "s|HBLIBS =.*|HBLIBS =-L../../HiggsBounds/4.2.1|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|HBINCLUDE =.*|HBINCLUDE =-I../../HiggsBounds/4.2.1|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90C =.*|F90C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F77C =.*|F77C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90FLAGS =.*|F90FLAGS = ${GAMBIT_Fortran_FLAGS}|" <SOURCE_DIR>/my_configure
            COMMAND <SOURCE_DIR>/my_configure
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM}
        COMMAND mkdir -p lib
        COMMAND rm HiggsSignals.o
        COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/libhiggssignals.so ./*.o ../../HiggsBounds/4.2.1/*.o" > make_so.sh
        COMMAND chmod u+x make_so.sh
        COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets(higgssignals ${higgssignals_dir} ${backend_download}/${higgssignals_dl} hyperclean)


set_target_properties(darksusy
                      darksusy_5_1_1
                      micromegas
                      micromegasSingletDM
                      superiso
                      higgssignals
                      higgsbounds
                      higgsbounds_tables
                      feynhiggs
                      feynhiggs_2_11_2
                      susyhit
                      pythia
                      ddcalc
                      gamlike
                      nulike
                      fastsim
                      PROPERTIES EXCLUDE_FROM_ALL 1)

add_custom_target(backends
                  DEPENDS
                  darksusy
                  micromegas
                  micromegasSingletDM
                  superiso
                  higgssignals
                  higgsbounds
                  feynhiggs
                  susyhit
                  pythia
                 )

add_custom_target(backends-nonfree DEPENDS ddcalc gamlike) #fastsim

add_custom_target(clean-backends
                  DEPENDS
                  clean-darksusy
                  clean-darksusy_5_1_1
                  clean-micromegas
                  clean-micromegasSingletDM
                  clean-superiso
                  clean-higgssignals
                  clean-higgsbounds
                  clean-feynhiggs
                  clean-feynhiggs_2_11_2
                  clean-susyhit
                  clean-pythia
                  clean-ddcalc
                  clean-gamlike
                  clean-nulike
                  clean-delphes
                  clean-flexiblesusy
                 )
