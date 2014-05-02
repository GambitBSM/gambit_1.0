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

#include "diagonalization.hpp"
#include "wrappers.hpp"
#include "config.h"

namespace flexiblesusy {

DoubleVector AbsSqrt(const DoubleVector& x)
{
   return x.apply(AbsSqrt_d);
}

/**
 * diag = u m u^T
 *
 * @param m mass matrix
 * @param u mixing matrix
 * @param eigenvalues eigenvalues (sorted)
 */
void Diagonalize(const DoubleMatrix& m, DoubleMatrix& u,
                 DoubleVector& eigenvalues)
{
   const int c = m.displayCols();
#ifdef ENABLE_DEBUG
   if (m.displayRows() != c || eigenvalues.displayEnd() != c ||
       u.displayCols() != c || u.displayRows() !=c || c > 10) {
      ostringstream ii;
      ii << "Error: Trying to diagonalise matrix \n" << m;
      throw ii.str();
   }
#endif
   // Numerical recipes routine replaces argument, so make a copy of elements
   DoubleMatrix a(m);
   int nrot;
   diagonaliseJac(a, c, eigenvalues, u, &nrot);
   u.associateOrderAbs(eigenvalues);
   u = u.transpose();
}

/**
 * Returns a phase rotation matrix which will transform a mixing
 * matrix such that the corresponding eigenvalues are positive.
 *
 * @param v eigen values
 *
 * @return phase rotation matrix
 */
ComplexMatrix phase_rotation(const DoubleVector& v)
{
   const int len = v.size();
   ComplexMatrix rot(len, len);

   for (int i = 1; i <= len; i++) {
      if (v(i) < 0.0)
         rot(i, i) = Complex(0.0, -1.0);
      else
         rot(i, i) = Complex(1.0, 0.0);
   }

   return rot;
}

/**
 * diag = u^* m u^+
 *
 * @param m mass matrix
 * @param u mixing matrix
 * @param eigenvalues eigenvalues (sorted)
 */
void Diagonalize(const DoubleMatrix& m, ComplexMatrix& u, DoubleVector& eigenvalues)
{
   const int c = m.displayCols();
#ifdef ENABLE_DEBUG
   if (m.displayRows() != c || eigenvalues.displayEnd() != c ||
       u.displayCols() != c || u.displayRows() !=c || c > 10) {
      ostringstream ii;
      ii << "Error: Trying to diagonalise matrix \n" << m;
      throw ii.str();
   }
#endif
   // Numerical recipes routine replaces argument, so make a copy of elements
   DoubleMatrix a(m), k(c, c);
   int nrot;
   diagonaliseJac(a, c, eigenvalues, k, &nrot);

   // So Far, V is such that the eigenvalues are in some random order.
   // We must now re-order the rows of V to get the eigenvalues in the
   // correct order (taken to be increasing abs(eigenvalues)).
   k.associateOrderAbs(eigenvalues);

   // We want to change the PHASES of the neutralino mixing matrix in order to
   // produce POSITIVE neutralino masses, a la Matchev, Pierce and Zhang
   const ComplexMatrix trans(phase_rotation(eigenvalues));
   u = trans * k.transpose();
   eigenvalues = eigenvalues.apply(fabs);
}

void Diagonalize2by2(const DoubleMatrix& m, DoubleMatrix& u,
                     DoubleVector& eigenvalues)
{
   double theta;
   eigenvalues = m.sym2by2(theta);
   if (std::fabs(eigenvalues(1)) > std::fabs(eigenvalues(2))) {
      theta += 0.5 * M_PI;
      std::swap(eigenvalues(1), eigenvalues(2));
   }
   u = rot2d(theta);
}

void Diagonalize2by2(const DoubleMatrix& m, ComplexMatrix& u,
                     DoubleVector& eigenvalues)
{
   double theta;
   eigenvalues = m.sym2by2(theta);
   const ComplexMatrix a(phase_rotation(eigenvalues).complexConjugate());
   u = a * rot2d(theta);
   eigenvalues = eigenvalues.apply(fabs);
}

void AssociateOrderAbs(DoubleMatrix& u, DoubleMatrix& v, DoubleVector& w)
{
#ifdef ENABLE_DEBUG
   if ((u.displayRows() != w.displayEnd()) ||
       (u.displayCols() != w.displayEnd()) ||
       (w.displayStart() != 1)) {
      ostringstream ii;
      ii << "Associated ordering incompatibility\n";
      throw ii.str();
   }
#endif
   for (int i = w.displayStart(); i <= w.displayEnd(); ++i) {
      for (int j = i + 1; j <= w.displayEnd(); ++j) {
         if (abs(w.display(i)) > abs(w.display(j))) {
            w.swap(i, j);
            v.swapcols(i, j);
            u.swapcols(i, j);
         }
      }
   }
}

/**
 * diag = u m v^T
 *
 * @param m mass matrix
 * @param u mixing matrix
 * @param v mixing matrix
 * @param eigenvalues eigenvalues (sorted)
 */
void Diagonalize(const DoubleMatrix& m, DoubleMatrix& u,
                 DoubleMatrix& v, DoubleVector& eigenvalues)
{
#ifdef ENABLE_DEBUG
   const int c = m.displayCols();
   if (m.displayRows() != c || eigenvalues.displayEnd() != c ||
       v.displayCols() != c || v.displayRows() !=c ||
       u.displayCols() !=c || u.displayRows() !=c) {
      ostringstream ii;
      ii << "Error: Trying to diagonalise matrix \n" << m
         << "with u" << u << "v " << v << "eigenvalues " << eigenvalues;
      throw ii.str();
   }
#endif
   // Numerical routine replaces argument, so make a copy of elements
   u = m;
   diagonaliseSvd(u, eigenvalues, v);

   // Eigen::MatrixXd me(ToEigen(m)), ue(ToEigen(u)), ve(ToEigen(v));
   // Eigen::JacobiSVD<Eigen::MatrixXd> eigensolver(me, Eigen::ComputeThinU | 
   // u = ToSoftsusy(eigensolver.matrixU());
   // v = ToSoftsusy(eigensolver.matrixV());
   // eigenvalues = ToSoftsusy(eigensolver.singularValues());

   // Phase freedom - tends to give more familiar matrices
   u = -1.0 * u; v = -1.0 * v;

   AssociateOrderAbs(u, v, eigenvalues);

   v = v.transpose();
   u = u.transpose();
}

/**
 * diag = u^* m v^+
 *
 * @param m mass matrix
 * @param u mixing matrix
 * @param v mixing matrix
 * @param eigenvalues eigenvalues (sorted)
 */
void Diagonalize(const DoubleMatrix& m, ComplexMatrix& u,
                 ComplexMatrix& v, DoubleVector& eigenvalues)
{
#ifdef ENABLE_DEBUG
   const int c = m.displayCols();
   if (m.displayRows() != c || eigenvalues.displayEnd() != c ||
       v.displayCols() != c || v.displayRows() !=c || c > 10) {
      ostringstream ii;
      ii << "Error: Trying to diagonalise matrix \n" << m;
      throw ii.str();
   }
#endif
   DoubleMatrix realU(u.real()), realV(v.real());
   Diagonalize(m, realU, realV, eigenvalues);

   const ComplexMatrix trans(phase_rotation(eigenvalues));
   u = trans * realU;
   v = trans * realV;
   eigenvalues = eigenvalues.apply(fabs);
}

void Diagonalize2by2(const DoubleMatrix& m, ComplexMatrix& u,
                     ComplexMatrix& v, DoubleVector& eigenvalues)
{
   double thetaL, thetaR;
   eigenvalues = m.asy2by2(thetaL, thetaR);
   positivise(thetaL, thetaR, eigenvalues, u, v);
   eigenvalues = eigenvalues.apply(fabs);
}

double MaxRelDiff(const DoubleVector& a, const DoubleVector& b)
{
   return a.compare(b);
}

void Symmetrize(DoubleMatrix& m)
{
   const int r = m.displayRows();
   const int c = m.displayCols();
   for (int i = 1; i <= r; i++)
      for (int k = 1; k < i && k <= c; k++)
         m(i,k) = m(k,i);
}

DoubleVector ZeroSqrt(const DoubleVector& x)
{
   return x.apply(ZeroSqrt_d);
}

} // namespace flexiblesusy
