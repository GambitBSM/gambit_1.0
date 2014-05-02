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

#ifndef DIAGONALIZATION_H
#define DIAGONALIZATION_H

#include "linalg.h"

namespace flexiblesusy {

DoubleVector AbsSqrt(const DoubleVector&);

void Diagonalize(const DoubleMatrix&, DoubleMatrix& , DoubleVector&);
void Diagonalize(const DoubleMatrix&, ComplexMatrix&, DoubleVector&);
void Diagonalize2by2(const DoubleMatrix&, DoubleMatrix& , DoubleVector&);
void Diagonalize2by2(const DoubleMatrix&, ComplexMatrix&, DoubleVector&);

// SVD
void Diagonalize(const DoubleMatrix&, DoubleMatrix& , DoubleMatrix& , DoubleVector&);
void Diagonalize(const DoubleMatrix&, ComplexMatrix&, ComplexMatrix&, DoubleVector&);
void Diagonalize2by2(const DoubleMatrix&, ComplexMatrix&, ComplexMatrix&, DoubleVector&);

double MaxRelDiff(const DoubleVector&, const DoubleVector&);

void Symmetrize(DoubleMatrix&);

inline DoubleMatrix Re(const DoubleMatrix& m)
{
   return m;
}

inline DoubleMatrix Re(const ComplexMatrix& m)
{
   return m.real();
}

inline ComplexMatrix Transpose(const ComplexMatrix& m)
{
   return m.transpose();
}

inline DoubleMatrix Transpose(const DoubleMatrix& m)
{
   return m.transpose();
}

DoubleVector ZeroSqrt(const DoubleVector&);

} // namespace flexiblesusy

#endif
