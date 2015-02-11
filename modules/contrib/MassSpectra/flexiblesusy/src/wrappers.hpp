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

#ifndef WRAPPERS_H
#define WRAPPERS_H

#include <complex>
#include <cmath>
#include <functional>
#include <sstream>
#include <string>
#include <Eigen/Core>
#include <boost/lexical_cast.hpp>
#include "compare.hpp"

namespace flexiblesusy {

static const double Pi = M_PI;
static const double oneOver16PiSqr = 1./(16. * M_PI * M_PI);
static const double twoLoop = oneOver16PiSqr * oneOver16PiSqr;

inline double Abs(double z)
{
   return std::fabs(z);
}

inline double Abs(const std::complex<double>& z)
{
   return std::abs(z);
}

inline double AbsSqr(double z)
{
   return z * z;
}

inline double AbsSqr(const std::complex<double>& z)
{
   return std::norm(z);
}

inline double AbsSqrt(double x)
{
   return std::sqrt(std::fabs(x));
}

template <typename Derived>
Derived AbsSqrt(const Eigen::MatrixBase<Derived>& m)
{
   return m.cwiseAbs().cwiseSqrt();
}

template <typename Derived>
Derived AbsSqrt(const Eigen::ArrayBase<Derived>& m)
{
   return m.cwiseAbs().cwiseSqrt();
}

inline double ArcTan(double a)
{
   return std::atan(a);
}

inline double ArcSin(double a)
{
   return std::asin(a);
}

inline double ArcCos(double a)
{
   return std::acos(a);
}

template <typename Derived>
unsigned closest_index(double mass, Eigen::ArrayBase<Derived>& v)
{
   unsigned pos;
   typename Derived::PlainObject tmp;
   tmp.setConstant(mass);

   (v - tmp).abs().minCoeff(&pos);

   return pos;
}

inline double Conj(double a)
{
   return a;
}

inline std::complex<double> Conj(const std::complex<double>& a)
{
   return std::conj(a);
}

inline double Tan(double a)
{
   return std::tan(a);
}

inline double Cos(double x)
{
   return std::cos(x);
}

inline double Sin(double x)
{
   return std::sin(x);
}

inline double Sec(double x)
{
   return 1./Cos(x);
}

inline double Csc(double x)
{
   return 1./Sin(x);
}

inline int Delta(int i, int j)
{
   return i == j;
}

inline int KroneckerDelta(int i, int j)
{
   return i == j;
}

template <class Derived>
typename Eigen::MatrixBase<Derived>::PlainObject Diag(const Eigen::MatrixBase<Derived>& m)
{
   static_assert(Eigen::MatrixBase<Derived>::RowsAtCompileTime ==
                 Eigen::MatrixBase<Derived>::ColsAtCompileTime,
                 "Diag is only defined for squared matrices");

   typename Eigen::MatrixBase<Derived>::PlainObject diag(m);

   for (int i = 0; i < Eigen::MatrixBase<Derived>::RowsAtCompileTime; ++i)
      for (int k = i + 1; k < Eigen::MatrixBase<Derived>::ColsAtCompileTime; ++k)
         diag(i,k) = 0.0;

   for (int i = 0; i < Eigen::MatrixBase<Derived>::RowsAtCompileTime; ++i)
      for (int k = 0; k < i; ++k)
         diag(i,k) = 0.0;

   return diag;
}

inline double FiniteLog(double a)
{
   return a > std::numeric_limits<double>::epsilon() ? std::log(a) : 0;
}

inline double Log(double a)
{
   return std::log(a);
}

double MaxRelDiff(double, double);

template <class Derived>
double MaxRelDiff(const Eigen::MatrixBase<Derived>& a,
                  const Eigen::MatrixBase<Derived>& b)
{
   typename Eigen::MatrixBase<Derived>::PlainObject sumTol;

   for (int i = 0; i < Eigen::MatrixBase<Derived>::RowsAtCompileTime; i++) {
      const double max = maximum(a(i), b(i));
      if (std::fabs(max) > std::numeric_limits<double>::epsilon())
         sumTol(i) = fabs(1.0 - minimum(a(i), b(i)) / max);
      else
         sumTol(i) = 0.;
   }

   return sumTol.maxCoeff();
}

template <class Derived>
double MaxRelDiff(const Eigen::ArrayBase<Derived>& a,
                  const Eigen::ArrayBase<Derived>& b)
{
   return MaxRelDiff(a.matrix(), b.matrix());
}

inline double MaxAbsValue(double x)
{
   return Abs(x);
}

template <class Derived>
double MaxAbsValue(const Eigen::MatrixBase<Derived>& x)
{
   return x.cwiseAbs().maxCoeff();
}

inline int Sign(double x)
{
   return (x >= 0.0 ? 1 : -1);
}

inline int Sign(int x)
{
   return (x >= 0 ? 1 : -1);
}

/**
 * The element of v, which is closest to mass, is moved to the
 * position idx.
 *
 * @param idx new index of the mass eigenvalue
 * @param mass mass to compare against
 * @param v vector of masses
 * @param z corresponding mixing matrix
 */

template <typename DerivedArray, typename DerivedMatrix>
void move_goldstone_to(int idx, double mass, Eigen::ArrayBase<DerivedArray>& v,
                       Eigen::MatrixBase<DerivedMatrix>& z)
{
   int pos = closest_index(mass, v);
   if (pos == idx)
      return;

   const int sign = Sign(idx - pos);
   int steps = std::abs(idx - pos);

   // now we shuffle the states
   while (steps--) {
      const int new_pos = pos + sign;
      v.row(new_pos).swap(v.row(pos));
      z.row(new_pos).swap(z.row(pos));
      pos = new_pos;
   }

}

template <typename Base, typename Exponent>
double Power(Base base, Exponent exp)
{
   return std::pow(base, exp);
}


inline double Re(double x)
{
   return x;
}

inline double Re(const std::complex<double>& x)
{
   return std::real(x);
}

/**
 * @brief reorders vector v according to ordering in vector v2
 * @param v vector with elementes to be reordered
 * @param v2 vector with reference ordering
 */
template<class Real, int N>
void reorder_vector(
   Eigen::Array<Real,N,1>& v,
   const Eigen::Array<Real,N,1>& v2)
{
   Eigen::PermutationMatrix<N> p;
   p.setIdentity();
   std::sort(p.indices().data(), p.indices().data() + p.indices().size(),
             CompareAbs<Real, N>(v2));

#if EIGEN_VERSION_AT_LEAST(3,1,4)
   v.matrix().transpose() *= p.inverse();
#else
   Eigen::Map<Eigen::Matrix<Real,N,1> >(v.data()).transpose() *= p.inverse();
#endif
}

/**
 * @brief reorders vector v according to ordering of diagonal elements in mass_matrix
 * @param v vector with elementes to be reordered
 * @param matrix matrix with diagonal elements with reference ordering
 */
template<class Derived>
void reorder_vector(
   Eigen::Array<double,Eigen::MatrixBase<Derived>::RowsAtCompileTime,1>& v,
   const Eigen::MatrixBase<Derived>& matrix)
{
   reorder_vector(v, matrix.diagonal().array().eval());
}

inline double Im(double x)
{
   return x;
}

inline double Im(const std::complex<double>& x)
{
   return std::imag(x);
}

namespace {
   struct CompareAbs_d {
      bool operator() (double a, double b) { return std::abs(a) < std::abs(b); }
   };
}

template<int N>
void Sort(Eigen::Array<double, N, 1>& v)
{
   std::sort(v.data(), v.data() + v.size(), CompareAbs_d());
}

inline double Sqrt(double a)
{
   return std::sqrt(a);
}

template <typename T>
T Sqr(T a)
{
   return a * a;
}

template <typename Derived>
void Symmetrize(Eigen::MatrixBase<Derived>& m)
{
   static_assert(Eigen::MatrixBase<Derived>::RowsAtCompileTime ==
                 Eigen::MatrixBase<Derived>::ColsAtCompileTime,
                 "Symmetrize is only defined for squared matrices");

   for (int i = 0; i < Eigen::MatrixBase<Derived>::RowsAtCompileTime; i++)
      for (int k = 0; k < i; k++)
         m(i,k) = m(k,i);
}

#define UNITMATRIX(rows) Eigen::Matrix<double,rows,rows>::Identity()
#define ZEROMATRIX(rows,cols) Eigen::Matrix<double,rows,cols>::Zero()
#define ZEROVECTOR(rows) Eigen::Matrix<double,rows,1>::Zero()
#define ZEROARRAY(rows) Eigen::Array<double,rows,1>::Zero()

template <typename T>
std::string ToString(T a)
{
   return boost::lexical_cast<std::string>(a);
}

inline double ZeroSqrt(double x)
{
   return (x > 0.0 ? std::sqrt(x) : 0.0);
}

namespace {
  inline double ZeroSqrt_d(double x)
  {
    return ZeroSqrt(x);
  }
}

template <typename Derived>
Derived ZeroSqrt(const Eigen::ArrayBase<Derived>& m)
{
   return m.unaryExpr(std::ptr_fun(ZeroSqrt_d));
}

}

#endif
