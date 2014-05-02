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

#ifndef CONVERSION_H
#define CONVERSION_H

#include "linalg.h"
#include <Eigen/Core>

namespace flexiblesusy {

Eigen::ArrayXd ToEigenArray(const DoubleVector&);
Eigen::ArrayXd ToEigenArray(double);
std::valarray<double> ToValarray(const DoubleVector&);
std::valarray<double> ToValarray(double);
Eigen::MatrixXd ToEigenMatrix(const DoubleMatrix&);

template<class Derived>
DoubleVector ToDoubleVector(const Eigen::ArrayBase<Derived>& a)
{
   DoubleVector v(a.rows());
   for (int i = 0; i < a.rows(); i++)
      v(i + 1) = a(i);
   return v;
}

template<class Derived>
ComplexMatrix ToComplexMatrix(const Eigen::MatrixBase<Derived>& m)
{
   const int r = m.rows();
   const int c = m.cols();
   ComplexMatrix result(r,c);

   for (int i = 0; i < r; i++)
      for (int k = 0; k < c; k++)
         result(i+1, k+1) = m(i,k);

   return result;
}

template<class Derived>
DoubleMatrix ToDoubleMatrix(const Eigen::MatrixBase<Derived>& m)
{
   const int r = m.rows();
   const int c = m.cols();
   DoubleMatrix result(r,c);

   for (int i = 0; i < r; i++)
      for (int k = 0; k < c; k++)
         result(i+1, k+1) = m(i,k);

   return result;
}

} // namespace flexiblesusy

#endif
