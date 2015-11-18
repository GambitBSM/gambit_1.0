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

} // namespace threshold_loop_functions
} // namespace flexiblesusy

#endif
