# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  CMake configuration scripts for obtaining,
#  configuring, compiling and installing
#  backends.
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
#  \author Tomas Gonzalo
#          (t.e.gonzalo@fys.uio.no)
#  \date 2016 Apr
#
#************************************************


# DarkSUSY
set(name "darksusy")
set(ver "5.1.3")
set(dl "http://www.fysik.su.se/~edsjo/darksusy/tars/${name}-${ver}.tar.gz")
set(md5 "ca95ffa083941a469469710fab2f3c97")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(patch "${PROJECT_SOURCE_DIR}/Backends/patches/${name}/${ver}")
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  PATCH_COMMAND patch -p1 < ${patch}/patchDS_sharedlib_+_threadsafety.dif
        COMMAND patch -p1 -d src < ${patch}/patchDS.dif
        COMMAND patch -p1 -d contrib/isajet781-for-darksusy < ${patch}/patchISA.dif
        # FIXME parallel relic density routines don't work yet.  
        #COMMAND patch -b -p2 -d src < ${patch}/patchDS_OMP_src.dif
        #COMMAND patch -b -p2 -d include < ${patch}/patchDS_OMP_include.dif
 # FIXME DarkSUSY segfaults with -O2 setting
 #CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${GAMBIT_Fortran_FLAGS} FFLAGS=${GAMBIT_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${GAMBIT_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${GAMBIT_CXX_FLAGS}
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${CMAKE_Fortran_FLAGS} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} dslib_shared install_tables
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})

# DarkSUSY
set(name "darksusy")
set(ver "5.1.1")
set(dl "http://www.fysik.su.se/~edsjo/darksusy/tars/${name}-${ver}.tar.gz")
set(md5 "ebeb0e1cfb4d834858e120190e423f62")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(patch "${PROJECT_SOURCE_DIR}/Backends/patches/${name}/${ver}")
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
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  PATCH_COMMAND patch -p1 -d src < ${patch}/patchDS.dif
        COMMAND patch -p1 -d contrib/isajet781-for-darksusy < ${patch}/patchISA.dif
        #COMMAND patch -p2 -d src < ${patch}/patchDS_OMP_src.dif
        #COMMAND patch -p2 -d include < ${patch}/patchDS_OMP_include.dif
 # FIXME DarkSUSY segfaults with -O2 setting
 #CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${GAMBIT_Fortran_FLAGS} FFLAGS=${GAMBIT_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${GAMBIT_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${GAMBIT_CXX_FLAGS}
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${CMAKE_Fortran_FLAGS} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM}
        COMMAND ar d <SOURCE_DIR>/lib/libdarksusy.a ${remove_files_from_libdarksusy} || true
        COMMAND ar d <SOURCE_DIR>/lib/libisajet.a ${remove_files_from_libisajet} || true
  INSTALL_COMMAND ${CMAKE_Fortran_COMPILER} ${OpenMP_Fortran_FLAGS} -shared ${libs} -o <SOURCE_DIR>/lib/libdarksusy.so
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)


# SuperIso
set(name "superiso")
set(ver "3.4")
set(lib "libsuperiso")
set(dl "http://superiso.in2p3.fr/download/${name}_v${ver}.tgz")
set(md5 "ae4ecc45e7f608d9faf91ba8e5780053")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND sed ${dashi} "s#CC = gcc#CC = ${CMAKE_C_COMPILER}#g" <SOURCE_DIR>/Makefile
        COMMAND sed ${dashi} "s/CFLAGS= -O3 -pipe -fomit-frame-pointer/CFLAGS= -lm -fPIC ${GAMBIT_C_FLAGS}/g" <SOURCE_DIR>/Makefile
        COMMAND ${CMAKE_MAKE_PROGRAM}
        COMMAND ar x <SOURCE_DIR>/src/libisospin.a
        COMMAND echo "${CMAKE_C_COMPILER} -shared -o ${lib}.so *.o -lm" > make_so.sh
        COMMAND chmod u+x make_so.sh
        COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})


# DDCalc
set(name "ddcalc")
set(ver "1.0.0")
set(lib "libDDCalc")
#set(dl "http://www.hepforge.org/archive/${name}/${name}-${ver}.tar.gz")
set(dl "null")
set(md5 "FIXME")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(loc "${GAMBIT_INTERNAL}/DDCalc") #FIXME can be deleted when public
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --yellow --bold ${private_code_warning1}
           COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red --bold ${private_code_warning2}
           COMMAND ${CMAKE_COMMAND} -E copy_directory ${loc} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} ${lib}.so FC=${CMAKE_Fortran_COMPILER} FOPT=${GAMBIT_Fortran_FLAGS} DDCALC_DIR=${dir} OUTPUT_PIPE=>/dev/null
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})


# Gamlike
set(name "gamlike")
set(ver "1.0.0")
#set(dl "http://www.hepforge.org/archive/${name}/${name}-${ver}.tar.gz")
set(dl "null")
set(md5 "FIXME")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(loc "${GAMBIT_INTERNAL}/gamLike") #FIXME can be deleted when public
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
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --yellow --bold ${private_code_warning1}
           COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --red --bold ${private_code_warning2}
           COMMAND ${CMAKE_COMMAND} -E copy_directory ${loc} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${gamlike_CXXFLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} LDLIBS=${GAMLIKE_GSL_LIBS} GAMLIKE_DATA_PATH=${dir}/data
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})


# MicrOmegas base (for all models)
set(name "micromegas")
set(ver "3.6.9.2")
set(dl "http://lapth.cnrs.fr/micromegas/downloadarea/code/${name}_${ver}.tgz")
set(md5 "72807f6d0ef80737554d8702b6b212c1")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(patch "${PROJECT_SOURCE_DIR}/Backends/patches/${name}/${ver}/patch_${name}_${ver}")
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  PATCH_COMMAND patch -p1 < ${patch}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make flags
        COMMAND sed ${dashi} -e "s|FC =.*|FC = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/CalcHEP_src/FlagsForMake
        COMMAND sed ${dashi} -e "s|CC =.*|CC = ${CMAKE_C_COMPILER}|" <SOURCE_DIR>/CalcHEP_src/FlagsForMake
        COMMAND sed ${dashi} -e "s|CXX =.*|CXX = ${CMAKE_CXX_COMPILER}|" <SOURCE_DIR>/CalcHEP_src/FlagsForMake
        COMMAND sed ${dashi} -e "s|FFLAGS =.*|FFLAGS = ${CMAKE_Fortran_FLAGS}|" <SOURCE_DIR>/CalcHEP_src/FlagsForMake
        COMMAND sed ${dashi} -e "s|CFLAGS =.*|CFLAGS = ${CMAKE_C_FLAGS}|" <SOURCE_DIR>/CalcHEP_src/FlagsForMake
        COMMAND sed ${dashi} -e "s|CXXFLAGS =.*|CXXFLAGS = ${CMAKE_CXX_FLAGS}|" <SOURCE_DIR>/CalcHEP_src/FlagsForMake
        COMMAND sed ${dashi} -e "s|FC=.*|FC=\"${CMAKE_Fortran_COMPILER}\"|" <SOURCE_DIR>/CalcHEP_src/FlagsForSh
        COMMAND sed ${dashi} -e "s|CC=.*|CC=\"${CMAKE_C_COMPILER}\"|" <SOURCE_DIR>/CalcHEP_src/FlagsForSh
        COMMAND sed ${dashi} -e "s|CXX=.*|CXX=\"${CMAKE_CXX_COMPILER}\"|" <SOURCE_DIR>/CalcHEP_src/FlagsForSh
        COMMAND sed ${dashi} -e "s|FFLAGS=.*|FFLAGS=\"${CMAKE_Fortran_FLAGS}\"|" <SOURCE_DIR>/CalcHEP_src/FlagsForSh
        COMMAND sed ${dashi} -e "s|CFLAGS=.*|CFLAGS=\"${CMAKE_C_FLAGS}\"|" <SOURCE_DIR>/CalcHEP_src/FlagsForSh
        COMMAND sed ${dashi} -e "s|CXXFLAGS=.*|CXXFLAGS=\"${CMAKE_CXX_FLAGS}\"|" <SOURCE_DIR>/CalcHEP_src/FlagsForSh
        COMMAND sed ${dashi} -e "s|lFort=.*|lFort=|" <SOURCE_DIR>/CalcHEP_src/FlagsForSh
        COMMAND make
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})

# MicrOmegas MSSM model
set(model "MSSM")
set(patch "${PROJECT_SOURCE_DIR}/Backends/patches/${name}/${ver}/patch_${name}_${ver}_${model}")
ExternalProject_Add(${name}_${model}_${ver}
  DOWNLOAD_COMMAND ""
  SOURCE_DIR ${dir}
  PATCH_COMMAND patch -p1 < ${patch}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND cd ${model} && make sharedlib main=main.c
  INSTALL_COMMAND ""
)
add_extra_targets("backend model" ${name} ${ver} ${dir}/${model} ${model} clean)
set_as_default_version("backend model" ${name}_${model} ${ver})

# MicrOmegas SingletDM model
set(model "SingletDM")
set(patch "${PROJECT_SOURCE_DIR}/Backends/patches/${name}/${ver}/patch_${name}_${ver}_${model}")
ExternalProject_Add(${name}_${model}_${ver}
  DOWNLOAD_COMMAND ""
  SOURCE_DIR ${dir}
  PATCH_COMMAND ./newProject ${model} && patch -p1 < ${patch}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND cd ${model} && make sharedlib main=main.c
  INSTALL_COMMAND ""
)
add_extra_targets("backend model" ${name} ${ver} ${dir}/${model} ${model} clean)
set_as_default_version("backend model" ${name}_${model} ${ver})


# Pythia
set(name "pythia")
set(ver "8.212")
set(lib "libpythia8")
set(dl "http://home.thep.lu.se/~torbjorn/pythia8/pythia8212.tgz")
set(md5 "0886d1b2827d8f0cd2ae69b925045f40")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(patch "${PROJECT_SOURCE_DIR}/ColliderBit/PythiaHacks")

# - Add additional compiler-specific optimisation flags and suppress some warnings from -Wextra
set(pythia_CXXFLAGS "${GAMBIT_CXX_FLAGS}")
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
  set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -fast")
elseif("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU")
  set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -Wno-extra -ffast-math")
endif()

# - Add "-undefined dynamic_lookup flat_namespace" to linker flags when OSX linker is used
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(pythia_CXX_SHARED_FLAGS "${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} -undefined dynamic_lookup -flat_namespace")
else()
  set(pythia_CXX_SHARED_FLAGS "${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS}")
endif()

# - Add option to turn of intel IPO if insufficient memory exists to use it.
option(PYTHIA_OPT "For Pythia: Switch Intel's multi-file interprocedural optimization on/off" ON)
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel" AND NOT "${PYTHIA_OPT}")
  set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -no-ipo -ip")
endif()

# - Set include directories
set(pythia_CXXFLAGS "${pythia_CXXFLAGS} -I${Boost_INCLUDE_DIR} -I${PROJECT_SOURCE_DIR}/contrib/slhaea/include")

# - Actual configure and compile commands
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ./configure --enable-shared --cxx="${CMAKE_CXX_COMPILER}" --cxx-common="${pythia_CXXFLAGS}" --cxx-shared="${pythia_CXX_SHARED_FLAGS}" --lib-suffix=".so"
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX="${CMAKE_CXX_COMPILER}" lib/${lib}.so
  INSTALL_COMMAND ""
)
ExternalProject_Add_Step(${name}_${ver} apply_hacks
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/Pythia.cc ${dir}/src/Pythia.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ParticleData.cc ${dir}/src/ParticleData.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ProcessLevel.cc ${dir}/src/ProcessLevel.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/SusyLesHouches.cc ${dir}/src/SusyLesHouches.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ResonanceDecays.cc ${dir}/src/ResonanceDecays.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/Pythia.h ${dir}/include/Pythia8/Pythia.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ParticleData.h ${dir}/include/Pythia8/ParticleData.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/SusyLesHouches.h ${dir}/include/Pythia8/SusyLesHouches.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/Settings.h ${dir}/include/Pythia8/Settings.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/PartonDistributions.h ${dir}/include/Pythia8/PartonDistributions.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/PartonDistributions.cc ${dir}/src/PartonDistributions.cc
  DEPENDEES download
  DEPENDERS patch
)
BOSS_backend(${name} ${ver})
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} distclean)
set_as_default_version("backend" ${name} ${ver})

# Pythia external model (EM)
set(model "EM")
set(ver "8.212.${model}")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ./configure --enable-shared --cxx="${CMAKE_CXX_COMPILER}" --cxx-common="${pythia_CXXFLAGS}" --cxx-shared="${pythia_CXX_SHARED_FLAGS}" --lib-suffix=".so"
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX="${CMAKE_CXX_COMPILER}" lib/${lib}.so
  INSTALL_COMMAND ""
)
ExternalProject_Add_Step(${name}_${ver} apply_hacks
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/Pythia.cc ${dir}/src/Pythia.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ParticleData.cc ${dir}/src/ParticleData.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ProcessLevel.cc ${dir}/src/ProcessLevel.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/SusyLesHouches.cc ${dir}/src/SusyLesHouches.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ResonanceDecays.cc ${dir}/src/ResonanceDecays.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/Pythia.h ${dir}/include/Pythia8/Pythia.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ParticleData.h ${dir}/include/Pythia8/ParticleData.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/SusyLesHouches.h ${dir}/include/Pythia8/SusyLesHouches.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/Settings.h ${dir}/include/Pythia8/Settings.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/PartonDistributions.h ${dir}/include/Pythia8/PartonDistributions.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/PartonDistributions.cc ${dir}/src/PartonDistributions.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/HelAmps_GambitDemo_UFO.h ${dir}/include/HelAmps_GambitDemo_UFO.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Parameters_GambitDemo_UFO.h ${dir}/include/Parameters_GambitDemo_UFO.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_ccx_uvuvx.h ${dir}/include/Sigma_GambitDemo_UFO_ccx_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_ddx_uvuvx.h ${dir}/include/Sigma_GambitDemo_UFO_ddx_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_gg_uvuvx.h ${dir}/include/Sigma_GambitDemo_UFO_gg_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_ssx_uvuvx.h ${dir}/include/Sigma_GambitDemo_UFO_ssx_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_uux_uvuvx.h ${dir}/include/Sigma_GambitDemo_UFO_uux_uvuvx.h
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/HelAmps_GambitDemo_UFO.cc ${dir}/src/HelAmps_GambitDemo_UFO.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Parameters_GambitDemo_UFO.cc ${dir}/src/Parameters_GambitDemo_UFO.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_ccx_uvuvx.cc ${dir}/src/Sigma_GambitDemo_UFO_ccx_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_ddx_uvuvx.cc ${dir}/src/Sigma_GambitDemo_UFO_ddx_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_gg_uvuvx.cc ${dir}/src/Sigma_GambitDemo_UFO_gg_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_ssx_uvuvx.cc ${dir}/src/Sigma_GambitDemo_UFO_ssx_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Sigma_GambitDemo_UFO_uux_uvuvx.cc ${dir}/src/Sigma_GambitDemo_UFO_uux_uvuvx.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/ProcessContainer.cc ${dir}/src/ProcessContainer.cc
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/Index.xml  ${dir}/share/Pythia8/xmldoc/Index.xml
  COMMAND ${CMAKE_COMMAND} -E copy ${patch}/ExternalModel/UserModel.xml ${dir}/share/Pythia8/xmldoc/UserModel.xml
  DEPENDEES download
  DEPENDERS patch
)
BOSS_backend(${name} ${ver})
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} distclean)


# Nulike
set(name "nulike")
set(ver "1.0.3")
set(lib "libnulike")
set(dl "http://www.hepforge.org/archive/${name}/${name}-${ver}.tar.gz")
set(md5 "2e77fe4b18891e4838f8af8d861c341b")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(patch "${PROJECT_SOURCE_DIR}/Backends/patches/${name}/${ver}/patch_${name}_${ver}.dif")
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  PATCH_COMMAND patch -p1 < ${patch}
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} ${lib}.so FF=${CMAKE_Fortran_COMPILER} FOPT=${GAMBIT_Fortran_FLAGS} MODULE=${FMODULE}
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} distclean)
set_as_default_version("backend" ${name} ${ver})


# SUSY-HIT
set(name "susyhit")
set(ver "1.5")
set(lib "libsusyhit")
set(dl "http://www.itp.kit.edu/~maggie/SUSY-HIT/susyhit.tar.gz")
set(md5 "493c7ba3a07e192918d3412875fb386a")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(patch "${PROJECT_SOURCE_DIR}/Backends/patches/${name}/${ver}/patch_${name}_${ver}.dif")
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  PATCH_COMMAND patch -p1 < ${patch}
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} ${lib}.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${GAMBIT_Fortran_FLAGS}
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})


# FeynHiggs
set(name "feynhiggs")
set(ver "2.11.3")
set(lib "libFH")
set(dl "http://wwwth.mpp.mpg.de/members/heinemey/feynhiggs/newversion/FeynHiggs-${ver}.tar.gz")
set(md5 "49f5ea1838cb233baffd85bbc1b0d87d")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
#set(FH_Fortran_FLAGS "${GAMBIT_Fortran_FLAGS}")
#set(FH_C_FLAGS "${GAMBIT_C_FLAGS}")
#set(FH_CXX_FLAGS "${GAMBIT_CXX_FLAGS}")
set(FH_Fortran_FLAGS "${CMAKE_Fortran_FLAGS}") #For skipping -O2, which seems to cause issues
set(FH_C_FLAGS "${CMAKE_C_FLAGS}")             #For skipping -O2, which seems to cause issues
set(FH_CXX_FLAGS "${CMAKE_CXX_FLAGS}")         #For skipping -O2, which seems to cause issues
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  # Fix bug preventing the use of array bounds checking.
  CONFIGURE_COMMAND sed ${dashi} -e "s#ComplexType spi_(2, 6:7, nvec, 1)#ComplexType spi_(2, 6:7, nvec, LEGS)#g" <SOURCE_DIR>/src/Decays/VecSet.F
            COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FFLAGS=${FH_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${FH_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${FH_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/${lib}.so build/*.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})

# FeynHiggs
set(name "feynhiggs")
set(ver "2.11.2")
set(lib "libFH")
set(dl "http://wwwth.mpp.mpg.de/members/heinemey/feynhiggs/newversion/FeynHiggs-${ver}.tar.gz")
set(md5 "edb73eafa6dab291bd8827242c16ac0a")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
#set(FH_Fortran_FLAGS "${GAMBIT_Fortran_FLAGS}")
#set(FH_C_FLAGS "${GAMBIT_C_FLAGS}")
#set(FH_CXX_FLAGS "${GAMBIT_CXX_FLAGS}")
set(FH_Fortran_FLAGS "${CMAKE_Fortran_FLAGS}") #For skipping -O2, which seems to cause issues
set(FH_C_FLAGS "${CMAKE_C_FLAGS}")             #For skipping -O2, which seems to cause issues
set(FH_CXX_FLAGS "${CMAKE_CXX_FLAGS}")         #For skipping -O2, which seems to cause issues
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  # Fix bug preventing the use of array bounds checking.
  CONFIGURE_COMMAND sed ${dashi} -e "s#ComplexType spi_(2, 6:7, nvec, 1)#ComplexType spi_(2, 6:7, nvec, LEGS)#g" <SOURCE_DIR>/src/Decays/VecSet.F
            COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FFLAGS=${FH_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${FH_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${FH_CXX_FLAGS}
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/${lib}.so build/*.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)


# HiggsBounds tables
set(name "higgsbounds_tables")
set(ver "0.0")
set(dl "http://www.hepforge.org/archive/higgsbounds/csboutput_trans_binary.tar.gz")
set(md5 "004decca30335ddad95654a04dd034a6")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir} "retain container folder"
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ""
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})


# HiggsBounds
set(name "higgsbounds")
set(ver "4.2.1")
set(lib "libhiggsbounds")
set(dl "http://www.hepforge.org/archive/higgsbounds/HiggsBounds-${ver}.tar.gz")
set(md5 "47b93330d4e0fddcc23b381548db355b")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(hb_tab_name "higgsbounds_tables")
set(hb_tab_ver "0.0")
set(hb_tab_dir "${PROJECT_SOURCE_DIR}/Backends/installed/${hb_tab_name}/${hb_tab_ver}")
ExternalProject_Add(${name}_${ver}
  DEPENDS ${hb_tab_name}_${hb_tab_ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND cp configure-with-chisq my_configure
            COMMAND sed ${dashi} -e "s|clsbtablesdir=.*|clsbtablesdir=\"${hb_tab_dir}/\"|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90C =.*|F90C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F77C =.*|F77C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90FLAGS =.*|F90FLAGS = ${GAMBIT_Fortran_FLAGS}|" <SOURCE_DIR>/my_configure
            COMMAND <SOURCE_DIR>/my_configure
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} COMMAND mkdir -p lib COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/${lib}.so *.o" > make_so.sh COMMAND chmod u+x make_so.sh COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})


# HiggsSignals
set(name "higgssignals")
set(ver "1.4.0")
set(lib "libhiggssignals")
set(dl "http://www.hepforge.org/archive/higgsbounds/HiggsSignals-${ver}.tar.gz")
set(md5 "00b8ac655e357c7cba9ca786f8f2ddee")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(hb_name "higgsbounds")
set(hb_ver "4.2.1")
ExternalProject_Add(${name}_${ver}
  DEPENDS higgsbounds_${hb_ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND cp configure my_configure
            COMMAND sed ${dashi} -e "s|HBLIBS =.*|HBLIBS =-L../../${hb_name}/${hb_ver}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|HBINCLUDE =.*|HBINCLUDE =-I../../${hb_name}/${hb_ver}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90C =.*|F90C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F77C =.*|F77C = ${CMAKE_Fortran_COMPILER}|" <SOURCE_DIR>/my_configure
            COMMAND sed ${dashi} -e "s|F90FLAGS =.*|F90FLAGS = ${GAMBIT_Fortran_FLAGS}|" <SOURCE_DIR>/my_configure
            COMMAND <SOURCE_DIR>/my_configure
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM}
        COMMAND mkdir -p lib
        COMMAND rm HiggsSignals.o
        COMMAND echo "${CMAKE_Fortran_COMPILER} -shared -o lib/${lib}.so ./*.o ../../${hb_name}/${hb_ver}/*.o" > make_so.sh
        COMMAND chmod u+x make_so.sh
        COMMAND ./make_so.sh
  INSTALL_COMMAND ""
)
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})

# SPheno
set(spheno_ver "3.3.8")
set(spheno_lib "lib/libSPheno.so")
set(spheno_dir "${PROJECT_SOURCE_DIR}/Backends/installed/SPheno/3.3.8")
set(spheno_short_dir "./Backends/installed/SPheno/3.3.8")
set(spheno_patch "${PROJECT_SOURCE_DIR}/Backends/patches/SPheno/3.3.8")
set(spheno_dl "SPheno-3.3.8.tar.gz")
ExternalProject_Add(spheno
  URL http://www.hepforge.org/archive/spheno/${spheno_dl}
  URL_MD5 4307cb4b736cebca5e57ca6c5e0b5836
  DOWNLOAD_DIR ${backend_download}
  SOURCE_DIR ${spheno_dir}
  BUILD_IN_SOURCE 1
  DOWNLOAD_ALWAYS 0
  PATCH_COMMAND patch -bp0 --ignore-whitespace < ${spheno_patch}/patch_SPheno_3_3_8.dif
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} $F90=${CMAKE_Fortran_COMPILER} FFLAGS=${GAMBIT_Fortran_FLAGS} ${spheno_lib}  
  INSTALL_COMMAND ""
)
add_extra_targets(spheno ${spheno_dir} ${backend_download}/${spheno_dl} clean)


# gm2calc
set(name "gm2calc")
set(ver "1.2.0")
set(dl "http://www.hepforge.org/archive/${name}/${name}-${ver}.tar.gz")
set(md5 "07d55bbbd648b8ef9b2d69ad1dfd8326")
set(dir "${PROJECT_SOURCE_DIR}/Backends/installed/${name}/${ver}")
set(patch "${PROJECT_SOURCE_DIR}/Backends/patches/${name}/${ver}/patch_${name}")
set(EIGEN3_DIR "${PROJECT_SOURCE_DIR}/contrib/eigen3")
# - Silence the deprecated-declarations warnings comming from Eigen3
set(GM2CALC_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  set(GM2CALC_CXX_FLAGS "${GM2CALC_CXX_FLAGS} -Wno-deprecated-declarations")
endif()
ExternalProject_Add(${name}_${ver}
  DOWNLOAD_COMMAND ${DL_BACKEND} ${dl} ${md5} ${dir}
  SOURCE_DIR ${dir}
  BUILD_IN_SOURCE 1
  PATCH_COMMAND patch -p1 < ${patch}_makefile.dif
        COMMAND patch -p1 < ${patch}_module.dif
        COMMAND patch -p1 < ${patch}_error.dif
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${GM2CALC_CXX_FLAGS} EIGENFLAGS=-I${EIGEN3_DIR} sharedlib
  INSTALL_COMMAND ""
)
BOSS_backend(${name} ${ver})
add_extra_targets("backend" ${name} ${ver} ${dir} ${dl} clean)
set_as_default_version("backend" ${name} ${ver})
