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

#ifndef THRESHOLD_LOOP_FUNCTIONS_H
#define THRESHOLD_LOOP_FUNCTIONS_H

#define TCF(n) threshold_loop_functions::F ## n
#define TCf(n) threshold_loop_functions::f ## n
#define TCf0 threshold_loop_functions::f
#define TCg0 threshold_loop_functions::g
#define TCIabc threshold_loop_functions::Iabc
#define TCB0 threshold_loop_functions::B0
#define TCDB0 threshold_loop_functions::DB0
#define TCC0 threshold_loop_functions::C0
#define TCD0 threshold_loop_functions::D0
#define TCD2t threshold_loop_functions::D2t
#define TCD4t threshold_loop_functions::D4t
#define TCW threshold_loop_functions::W

namespace flexiblesusy {
namespace threshold_loop_functions {

// loop functions from arXiv:1407.4081

double F1(double);
double F2(double);
double F3(double);
double F4(double);
double F5(double);
double F6(double);
double F7(double);
double F8(double, double);
double F9(double, double);

double f(double);
double g(double);

double f1(double);
double f2(double);
double f3(double);
double f4(double);
double f5(double, double);
double f6(double, double);
double f7(double, double);
double f8(double, double);

/// \f$I_{abc}(a,b,c)\f$ (arguments are interpreted as unsquared)
double Iabc(double, double, double);

/// \f$B_0(p=0,m_1,m_2,Q)\f$ (arguments are interpreted as unsquared)
double B0(double, double, double);

/// \f$B_0'(p=0,m_1,m_2)\f$ (arguments are interpreted as unsquared)
double DB0(double, double);

/// \f$C_0(p=0,m_1,m_2,m_3)\f$ (arguments are interpreted as unsquared)
double C0(double, double, double);

/// \f$D_0(p=0,m_1,m_2,m_3,m_4)\f$ (arguments are interpreted as unsquared)
double D0(double, double, double, double);

/// \f$\tilde{D}_2(m_1,m_2,m_3,m_4)\f$ (arguments are interpreted as unsquared)
double D2t(double, double, double, double);

/// \f$\tilde{D}_4(m_1,m_2,m_3,m_4,Q)\f$ (arguments are interpreted as unsquared)
double D4t(double, double, double, double, double);

/// \f$Q(m_1,m_2,Q)\f$ (arguments are interpreted as unsquared)
double W(double, double, double);

} // namespace threshold_loop_functions
} // namespace flexiblesusy

#endif
