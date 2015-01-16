// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

#include "build_info.hpp"
#include "config.h"

#include <boost/version.hpp>
#include <Eigen/Core>

#include <iostream>

namespace flexiblesusy {

void print_all_info(std::ostream& ostr)
{
   ostr <<
      "Version information\n"
      "===================\n";
   print_version_info(ostr);

   ostr <<
      "\n"
      "System information\n"
      "==================\n";
   print_system_info(ostr);

   ostr <<
      "\n"
      "Build information\n"
      "=================\n";
   print_build_info(ostr);
}

void print_flexiblesusy_version(std::ostream& ostr)
{
   ostr << FLEXIBLESUSY_VERSION;
}

void print_version_info(std::ostream& ostr)
{
   const int boost_major = BOOST_VERSION / 100000;
   const int boost_minor = (BOOST_VERSION / 100) % 1000;
   const int boost_patch = BOOST_VERSION % 100;

   ostr <<
      "FlexibleSUSY version:            " FLEXIBLESUSY_VERSION "\n"
      "FlexibleSUSY git commit:         " GIT_COMMIT "\n"
      "SARAH version:                   " SARAH_VERSION "\n"
      "Mathematica version:             " << MATHEMATICA_VERSION << "\n"
      "Boost version:                   " << boost_major << '.' << boost_minor
        << '.' << boost_patch << "\n"
      "Eigen version:                   " << EIGEN_WORLD_VERSION
        << '.' << EIGEN_MAJOR_VERSION << '.' << EIGEN_MINOR_VERSION << "\n"
      ;
}

void print_build_info(std::ostream& ostr)
{
   ostr <<
      "C++ compiler (CXX):              " CXX "\n"
      "C++ compiler flags (CXXFLAGS):   " CXXFLAGS "\n"
      "Fortran compiler (FC):           " FC "\n"
      "Fortran compiler flags (FFLAGS): " FFLAGS "\n"
      "Fortran libraries (FLIBS):       " FLIBS "\n"
      "Blas library (BLASLIBS):         " BLASLIBS "\n"
      "Boost flags (BOOSTFLAGS):        " BOOSTFLAGS "\n"
      "Boost libraries:                 " BOOSTTESTLIBS " " BOOSTTHREADLIBS "\n"
      "Eigen flags (EIGENFLAGS):        " EIGENFLAGS "\n"
      "GSL flags (GSLFLAGS):            " GSLFLAGS "\n"
      "GSL libraries (GSLLIBS):         " GSLLIBS "\n"
      "Lapack library (LAPACKLIBS):     " LAPACKLIBS "\n"
      "Thread libraries (THREADLIBS):   " THREADLIBS "\n"
      "\n"
      "Multi-threading:                 "
#ifdef ENABLE_THREADS
      "enabled"
#else
      "disabled"
#endif
      "\n"
      "Use LoopTools:                   "
#ifdef ENABLE_LOOPTOOLS
      "yes"
#else
      "no"
#endif
      "\n"
      "Use fflite:                      "
#ifdef ENABLE_FFLITE
      "yes"
#else
      "no"
#endif
      "\n"
      "Eigenvalue error check:          "
#ifdef CHECK_EIGENVALUE_ERROR
      "yes"
#else
      "no"
#endif
      "\n"
      ;
}

void print_system_info(std::ostream& ostr)
{
   ostr <<
      "Operating system (uname -s):     " OPERATING_SYSTEM "\n"
      "Kernel version (uname -r):       " KERNEL_VERSION "\n"
      ;
}

} // namespace flexiblesusy
