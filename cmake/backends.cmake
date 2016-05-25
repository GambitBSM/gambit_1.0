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
set(darksusy_dir "${PROJECT_SOURCE_DIR}/Backends/installed/DarkSUSY/5.1.3")
set(darksusy_dl "darksusy-5.1.3.tar.gz")
set(darksusy_patch "${PROJECT_SOURCE_DIR}/Backends/patches/DarkSUSY/5.1.3")
ExternalProject_Add(darksusy
  URL http://www.fysik.su.se/~edsjo/darksusy/tars/${darksusy_dl}
  URL_MD5 ca95ffa083941a469469710fab2f3c97
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${darksusy_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  PATCH_COMMAND patch -p1 < ${darksusy_patch}/patchDS_sharedlib_+_threadsafety.dif
        COMMAND patch -p1 -d src < ${darksusy_patch}/patchDS.dif
        COMMAND patch -p1 -d contrib/isajet781-for-darksusy < ${darksusy_patch}/patchISA.dif
        #COMMAND patch -b -p2 -d src < ${darksusy_patch}/patchDS_OMP_src.dif
        #COMMAND patch -b -p2 -d include < ${darksusy_patch}/patchDS_OMP_include.dif
 # FIXME DarkSUSY segfaults with -O2 setting
 #CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${GAMBIT_Fortran_FLAGS} FFLAGS=${GAMBIT_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${GAMBIT_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${GAMBIT_CXX_FLAGS}
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${CMAKE_Fortran_FLAGS} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} dslib_shared install_tables
  INSTALL_COMMAND ""
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
  PATCH_COMMAND patch -p1 -d src < ${DS_PATCH_DIR}/patchDS.dif
        COMMAND patch -p1 -d contrib/isajet781-for-darksusy < ${DS_PATCH_DIR}/patchISA.dif
        #COMMAND patch -p2 -d src < ${DS_PATCH_DIR}/patchDS_OMP_src.dif
        #COMMAND patch -p2 -d include < ${DS_PATCH_DIR}/patchDS_OMP_include.dif
 # FIXME DarkSUSY segfaults with -O2 setting
 #CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${GAMBIT_Fortran_FLAGS} FFLAGS=${GAMBIT_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${GAMBIT_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${GAMBIT_CXX_FLAGS}
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${CMAKE_Fortran_FLAGS} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM}
        COMMAND ar d <SOURCE_DIR>/lib/libdarksusy.a ${remove_files_from_libdarksusy} || true
        COMMAND ar d <SOURCE_DIR>/lib/libisajet.a ${remove_files_from_libisajet} || true
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
set(ddcalc_location "${GAMBIT_INTERNAL}/DDCalc")
set(ddcalc_dir "${PROJECT_SOURCE_DIR}/Backends/installed/DDCalc/1.0.0")
ExternalProject_Add(ddcalc
  DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --yellow --bold ${private_code_warning1}
           COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red --bold ${private_code_warning2}
           COMMAND ${CMAKE_COMMAND} -E copy_directory ${ddcalc_location} ${ddcalc_dir}
  SOURCE_DIR ${ddcalc_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} libDDCalc.so FC=${CMAKE_Fortran_COMPILER} FOPT=${GAMBIT_Fortran_FLAGS} DDCALC_DIR=${ddcalc_dir} OUTPUT_PIPE=>/dev/null
  INSTALL_COMMAND ""
)
add_extra_targets(ddcalc ${ddcalc_dir} null distclean)

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
option(PYTHIA_OPT "For Pythia: Switch Intel's multi-file interprocedural optimization on/off" ON)
set(pythia_CXXFLAGS "${GAMBIT_CXX_FLAGS}")
# - Add additional compiler-specific optimisation flags and suppress some warnings from -Wextra
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
  set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -ipo -O3 -no-prec-div -fp-model fast=2 -xHost -diag-disable 654")
elseif("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU")
  set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -Wno-extra -fno-math-errno -funsafe-math-optimizations -fno-rounding-math -fno-signaling-nans -fcx-limited-range")
endif()
# - Add "-undefined dynamic_lookup flat_namespace" to linker flags when OSX linker is used
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(pythia_CXX_SHARED_FLAGS "${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} -undefined dynamic_lookup -flat_namespace")
else()
  set(pythia_CXX_SHARED_FLAGS "${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS}")
endif()
# - Switch off Intel's multi-file interprocedural optimization?
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel" AND NOT "${PYTHIA_OPT}")
  set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -no-ipo -ip")
endif()
# - Set include directories
set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -I${Boost_INCLUDE_DIR} -I${PROJECT_SOURCE_DIR}/contrib/slhaea/include")

# - Set local paths
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
  COMMAND echo DEBUG: CONFIGURE COMMAND = ./configure --enable-shared --cxx="${CMAKE_CXX_COMPILER}" --cxx-common="${pythia_CXXFLAGS}" --cxx-shared="${pythia_CXX_SHARED_FLAGS}" --lib-suffix=".so"
  CONFIGURE_COMMAND ./configure --enable-shared --cxx="${CMAKE_CXX_COMPILER}" --cxx-common="${pythia_CXXFLAGS}" --cxx-shared="${pythia_CXX_SHARED_FLAGS}" --lib-suffix=".so"
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX="${CMAKE_CXX_COMPILER}" lib/libpythia8.so
  INSTALL_COMMAND ""
)
ExternalProject_Add_Step(pythia apply_hacks
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/Pythia.cc ${pythia_dir}/src/Pythia.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ParticleData.cc ${pythia_dir}/src/ParticleData.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ProcessLevel.cc ${pythia_dir}/src/ProcessLevel.cc
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


# Pythia with external model (pythiaEM)
set(pythiaEM_dir "${PROJECT_SOURCE_DIR}/Backends/installed/Pythia/8.212.EM/")
set(pythiaEM_dl "pythia8212.tgz")
# - Actual configure and compile commands
ExternalProject_Add(pythiaEM
  URL http://home.thep.lu.se/~torbjorn/pythia8/${pythia_dl}
  URL_MD5 0886d1b2827d8f0cd2ae69b925045f40
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${pythiaEM_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  CONFIGURE_COMMAND ./configure --enable-shared --cxx="${CMAKE_CXX_COMPILER}" --cxx-common="${pythia_CXXFLAGS}" --cxx-shared="${pythia_CXX_SHARED_FLAGS}" --lib-suffix=".so"
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX="${CMAKE_CXX_COMPILER}" lib/libpythia8.so
  INSTALL_COMMAND ""
)
ExternalProject_Add_Step(pythiaEM apply_hacks
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/Pythia.cc ${pythiaEM_dir}/src/Pythia.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ParticleData.cc ${pythiaEM_dir}/src/ParticleData.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ProcessLevel.cc ${pythiaEM_dir}/src/ProcessLevel.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/SusyLesHouches.cc ${pythiaEM_dir}/src/SusyLesHouches.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ResonanceDecays.cc ${pythiaEM_dir}/src/ResonanceDecays.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/Pythia.h ${pythiaEM_dir}/include/Pythia8/Pythia.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ParticleData.h ${pythiaEM_dir}/include/Pythia8/ParticleData.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/SusyLesHouches.h ${pythiaEM_dir}/include/Pythia8/SusyLesHouches.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/Settings.h ${pythiaEM_dir}/include/Pythia8/Settings.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/PartonDistributions.h ${pythiaEM_dir}/include/Pythia8/PartonDistributions.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/PartonDistributions.cc ${pythiaEM_dir}/src/PartonDistributions.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/HelAmps_GambitDemo_UFO.h ${pythiaEM_dir}/include/HelAmps_GambitDemo_UFO.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Parameters_GambitDemo_UFO.h ${pythiaEM_dir}/include/Parameters_GambitDemo_UFO.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_ccx_uvuvx.h ${pythiaEM_dir}/include/Sigma_GambitDemo_UFO_ccx_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_ddx_uvuvx.h ${pythiaEM_dir}/include/Sigma_GambitDemo_UFO_ddx_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_gg_uvuvx.h ${pythiaEM_dir}/include/Sigma_GambitDemo_UFO_gg_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_ssx_uvuvx.h ${pythiaEM_dir}/include/Sigma_GambitDemo_UFO_ssx_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_uux_uvuvx.h ${pythiaEM_dir}/include/Sigma_GambitDemo_UFO_uux_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/HelAmps_GambitDemo_UFO.cc ${pythiaEM_dir}/src/HelAmps_GambitDemo_UFO.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Parameters_GambitDemo_UFO.cc ${pythiaEM_dir}/src/Parameters_GambitDemo_UFO.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_ccx_uvuvx.cc ${pythiaEM_dir}/src/Sigma_GambitDemo_UFO_ccx_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_ddx_uvuvx.cc ${pythiaEM_dir}/src/Sigma_GambitDemo_UFO_ddx_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_gg_uvuvx.cc ${pythiaEM_dir}/src/Sigma_GambitDemo_UFO_gg_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_ssx_uvuvx.cc ${pythiaEM_dir}/src/Sigma_GambitDemo_UFO_ssx_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Sigma_GambitDemo_UFO_uux_uvuvx.cc ${pythiaEM_dir}/src/Sigma_GambitDemo_UFO_uux_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/ProcessContainer.cc ${pythiaEM_dir}/src/ProcessContainer.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/Index.xml  ${pythiaEM_dir}/share/Pythia8/xmldoc/Index.xml
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks/ExternalModel/UserModel.xml ${pythiaEM_dir}/share/Pythia8/xmldoc/UserModel.xml
  DEPENDEES download
  DEPENDERS patch
)
BOSS_backend(pythiaEM Pythia 8.212.EM)
add_extra_targets(pythiaEM ${pythiaEM_dir} ${backend_download}/${pythia_dl} distclean)

# Nulike
set(nulike_ver "1.0.3")
set(nulike_location "http://www.hepforge.org/archive/nulike/nulike-${nulike_ver}.tar.gz")
set(nulike_lib "libnulike")
set(nulike_dir "${PROJECT_SOURCE_DIR}/Backends/installed/nulike/${nulike_ver}")
set(nulike_short_dir "./Backends/installed/nulike/${nulike_ver}")
set(nulikeFFLAGS "${GAMBIT_Fortran_FLAGS} -I${nulike_dir}/include")
ExternalProject_Add(nulike
  URL ${nulike_location}
  URL_MD5 2e77fe4b18891e4838f8af8d861c341b
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
set(susyhit_patch "${PROJECT_SOURCE_DIR}/Backends/patches/SUSY-HIT/1.5")
set(susyhit_dl "susyhit.tar.gz")
ExternalProject_Add(susyhit
  URL http://www.itp.kit.edu/~maggie/SUSY-HIT/${susyhit_dl}
  URL_MD5 493c7ba3a07e192918d3412875fb386a
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${susyhit_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  PATCH_COMMAND patch -p1 < ${susyhit_patch}/patch_SUSYHIT_1_5.dif
  CONFIGURE_COMMAND ""
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
  URL_MD5 49f5ea1838cb233baffd85bbc1b0d87d
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


# gm2calc (C++ interface)
set(EIGEN3_DIR "${PROJECT_SOURCE_DIR}/contrib/eigen3")
set(gm2calc_dir "${PROJECT_SOURCE_DIR}/Backends/installed/gm2calc/1.0.0")
set(gm2calc_patch "${PROJECT_SOURCE_DIR}/Backends/patches/gm2calc/1.0.0")
set(gm2calc_dl "gm2calc-1.0.0.tar.gz")
ExternalProject_Add(gm2calc
  URL http://www.hepforge.org/archive/gm2calc/${gm2calc_dl}
  URL_MD5 309e38ac04c933884b7b950fae920412
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${gm2calc_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  PATCH_COMMAND patch -p1 < ${gm2calc_patch}/check-negative-soft-mass.patch
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} EIGENFLAGS=-I${EIGEN3_DIR} sharedlib
  INSTALL_COMMAND ""
)
ExternalProject_Add_Step(gm2calc apply_hacks
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/PrecisionBit/gm2calcHacks/Makefile ${gm2calc_dir}/Makefile
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/PrecisionBit/gm2calcHacks/module.mk ${gm2calc_dir}/src/module.mk
  DEPENDEES download
  DEPENDERS patch
)
BOSS_backend(gm2calc gm2calc 1.0.0)
add_extra_targets(gm2calc ${gm2calc_dir} ${backend_download}/${gm2calc_dl} clean)


# gm2calc_c (C interface)
set(gm2calc_dir "${PROJECT_SOURCE_DIR}/Backends/installed/gm2calc_c/1.1.0")
set(gm2calc_dl "gm2calc-1.1.0.tar.gz")
ExternalProject_Add(gm2calc_c
  URL http://www.hepforge.org/archive/gm2calc/${gm2calc_dl}
  URL_MD5 8470a1a1b77be56c5915825667160e39
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${gm2calc_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  PATCH_COMMAND patch -p1 < ${gm2calc_patch}/check-negative-soft-mass.patch
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} EIGENFLAGS=-I${EIGEN3_DIR} BOOSTFLAGS=-I${Boost_INCLUDE_DIR} sharedlib
  INSTALL_COMMAND ""
)
ExternalProject_Add_Step(gm2calc_c apply_hacks
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/PrecisionBit/gm2calc_cHacks/Makefile ${gm2calc_dir}/Makefile
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/PrecisionBit/gm2calc_cHacks/module.mk ${gm2calc_dir}/src/module.mk
  DEPENDEES download
  DEPENDERS patch
)
add_extra_targets(gm2calc_c ${gm2calc_dir} ${backend_download}/${gm2calc_dl} clean)


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
                      pythiaEM
                      ddcalc
                      gamlike
                      nulike
                      gm2calc
                      gm2calc_c
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
                  nulike
                  gm2calc
                  gm2calc_c
                 )

add_custom_target(backends-nonfree DEPENDS ddcalc gamlike)

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
                  clean-pythiaEM
                  clean-ddcalc
                  clean-gamlike
                  clean-nulike
                  clean-delphes
                  clean-flexiblesusy
                  clean-gm2calc
                  clean-gm2calc_c
                 )
