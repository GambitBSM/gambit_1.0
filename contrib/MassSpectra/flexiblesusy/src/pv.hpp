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

#ifndef pv_hpp
#define pv_hpp

#include <complex>
#include "cextensions.hpp"
#include "config.h"

// override macros defined in config.h when building test suite
#ifdef TEST_PV_FFLITE
#  undef  ENABLE_LOOPTOOLS
#  define ENABLE_FFLITE 1
#elif defined(TEST_PV_LOOPTOOLS)
#  undef  ENABLE_FFLITE
#  define ENABLE_LOOPTOOLS 1
#elif defined(TEST_PV_SOFTSUSY)
#  undef  ENABLE_FFLITE
#  undef  ENABLE_LOOPTOOLS
#endif

namespace flexiblesusy {

namespace passarino_veltman {

// functions in LoopTools depend on global variables (such as delta,
// mu, lambda, minmass as well as the internal cache) and therefore
// are not thread-safe
#ifdef ENABLE_LOOPTOOLS
#  define PVATTR ATTR(pure)
#else
#  define PVATTR ATTR(const)
#endif

#if defined(ENABLE_LOOPTOOLS) || defined(ENABLE_FFLITE)

std::complex<double> A0 (double m2, double scl2) PVATTR;
std::complex<double> B0 (double p2, double m2a, double m2b, double scl2)PVATTR;
std::complex<double> B1 (double p2, double m2a, double m2b, double scl2)PVATTR;
std::complex<double> B00(double p2, double m2a, double m2b, double scl2)PVATTR;

std::complex<double> A0 (std::complex<double> m2, double scl2) PVATTR;
std::complex<double> B0 (std::complex<double> p2, std::complex<double> m2a,
			 std::complex<double> m2b, double scl2) PVATTR;
std::complex<double> B1 (std::complex<double> p2, std::complex<double> m2a,
			 std::complex<double> m2b, double scl2) PVATTR;
std::complex<double> B00(std::complex<double> p2, std::complex<double> m2a,
			 std::complex<double> m2b, double scl2) PVATTR;

template<class T> std::complex<double> B22(T, T, T, double) PVATTR;
template<class T> std::complex<double> F0 (T, T, T, double) PVATTR;
template<class T> std::complex<double> G0 (T, T, T, double) PVATTR;
template<class T> std::complex<double> H0 (T, T, T, double) PVATTR;

// CHECK: are the following correct complexifications of B22, H0, F0, G0?

template<class T>
std::complex<double> B22(T p2, T m2a, T m2b, double scl2)
{
    return B00(p2, m2a, m2b, scl2) - A0(m2a, scl2)/4.0 - A0(m2b, scl2)/4.0;
}

template<class T>
std::complex<double> F0(T p2, T m2a, T m2b, double scl2)
{
    return A0(m2a, scl2) - 2.0*A0(m2b, scl2)
	   - (2.0*p2 + 2.0*m2a - m2b) * B0(p2, m2a, m2b, scl2);
}

template<class T>
std::complex<double> G0(T p2, T m2a, T m2b, double scl2)
{
    return (p2 - m2a - m2b) * B0(p2, m2a, m2b, scl2)
	   - A0(m2a, scl2) - A0(m2b, scl2);
}

template<class T>
std::complex<double> H0(T p2, T m2a, T m2b, double scl2)
{
    return 4.0*B00(p2, m2a, m2b, scl2) + G0(p2, m2a, m2b, scl2);
}

#endif

// the following are mainly for interfacing with loop function
// implementations from softsusy since they come only with double
// return type.  If LoopTools or FF is in use, they reduce simply to
// A0(m2, scl2).real(), etc.
double ReA0 (double m2, double scl2) PVATTR;
double ReB0 (double p2, double m2a, double m2b, double scl2) PVATTR;
double ReB1 (double p2, double m2a, double m2b, double scl2) PVATTR;
double ReB00(double p2, double m2a, double m2b, double scl2) PVATTR;
double ReB22(double p2, double m2a, double m2b, double scl2) PVATTR;
double ReH0 (double p2, double m2a, double m2b, double scl2) PVATTR;
double ReF0 (double p2, double m2a, double m2b, double scl2) PVATTR;
double ReG0 (double p2, double m2a, double m2b, double scl2) PVATTR;

} // namespace passarino_veltman

} // namespace flexiblesusy

#endif // pv_hpp
