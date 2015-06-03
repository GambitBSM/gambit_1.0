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

/**
 * Calculates the mass of a singlet from a (possibly complex)
 * numerical value by taking the magnitude of the value.
 *
 * @param value numerical value
 * @return mass
 */
template <typename T>
double calculate_singlet_mass(T value)
{
   return std::abs(value);
}

/**
 * Calculates the mass of a singlet from a (possibly complex)
 * numerical value by taking the magnitude of the value.  The phase is
 * set to exp(i theta/2), where theta is the phase angle of the
 * complex value.
 *
 * @param value numerical value
 * @param[out] phase phase
 * @return mass
 */
template <typename T>
double calculate_singlet_mass(T value, std::complex<double>& phase)
{
   phase = std::polar(1., 0.5 * std::arg(std::complex<double>(value)));
   return std::abs(value);
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

inline double Arg(const std::complex<double>& z)
{
   return std::arg(z);
}

inline double Conj(double a)
{
   return a;
}

inline std::complex<double> Conj(const std::complex<double>& a)
{
   return std::conj(a);
}

template <typename T>
T Exp(T z)
{
   return std::exp(z);
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

inline bool IsFinite(double x)
{
   return std::isfinite(x);
}

inline bool IsFinite(const std::complex<double>& x)
{
   return std::isfinite(x.real()) && std::isfinite(x.imag());
}

template <class Derived>
bool IsFinite(const Eigen::DenseBase<Derived>& m)
{
   return m.allFinite();
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

/**
 * Fills lower triangle of hermitian matrix from values
 * in upper triangle.
 *
 * @param m matrix
 */
template <typename Derived>
void Hermitianize(Eigen::MatrixBase<Derived>& m)
{
   static_assert(Eigen::MatrixBase<Derived>::RowsAtCompileTime ==
                 Eigen::MatrixBase<Derived>::ColsAtCompileTime,
                 "Hermitianize is only defined for squared matrices");

   for (int i = 0; i < Eigen::MatrixBase<Derived>::RowsAtCompileTime; i++)
      for (int k = 0; k < i; k++)
         m(i,k) = Conj(m(k,i));
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

inline double MaxAbsValue(const std::complex<double>& x)
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

template <typename Base, typename Exponent>
Base Power(Base base, Exponent exp)
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

template<int M, int N>
Eigen::Matrix<double,M,N> Re(const Eigen::Matrix<double,M,N>& x)
{
   return x;
}

template<class Derived>
typename Eigen::Matrix<
   double,
   Eigen::MatrixBase<Derived>::RowsAtCompileTime,
   Eigen::MatrixBase<Derived>::ColsAtCompileTime>
Re(const Eigen::MatrixBase<Derived>& x)
{
   return x.real();
}

inline double Im(double)
{
   return 0.;
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

inline int Round(double a)
{
   return static_cast<int>(a >= 0. ? a + 0.5 : a - 0.5);
}

template<int N>
void Sort(Eigen::Array<double, N, 1>& v)
{
   std::sort(v.data(), v.data() + v.size(), CompareAbs_d());
}

inline double SignedAbsSqrt(double a)
{
   return Sign(a) * AbsSqrt(a);
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

#define DEFINE_COMMUTATIVE_OPERATOR_COMPLEX_INT(op)                     \
   template <typename T>                                                \
   std::complex<T> operator op(const std::complex<T>& lhs, int rhs)     \
   {                                                                    \
      return lhs op static_cast<T>(rhs);                                \
   }                                                                    \
                                                                        \
   template <typename T>                                                \
   std::complex<T> operator op(int lhs, const std::complex<T>& rhs)     \
   {                                                                    \
      return static_cast<T>(lhs) op rhs;                                \
   }

DEFINE_COMMUTATIVE_OPERATOR_COMPLEX_INT(*)
DEFINE_COMMUTATIVE_OPERATOR_COMPLEX_INT(/)
DEFINE_COMMUTATIVE_OPERATOR_COMPLEX_INT(+)
DEFINE_COMMUTATIVE_OPERATOR_COMPLEX_INT(-)

/**
 * Fills lower triangle of symmetric matrix from values in upper
 * triangle.
 *
 * @param m matrix
 */
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

#define UNITMATRIX(rows)             Eigen::Matrix<double,rows,rows>::Identity()
#define ZEROMATRIX(rows,cols)        Eigen::Matrix<double,rows,cols>::Zero()
#define ZEROVECTOR(rows)             Eigen::Matrix<double,rows,1>::Zero()
#define ZEROARRAY(rows)              Eigen::Array<double,rows,1>::Zero()
#define UNITMATRIXCOMPLEX(rows)      Eigen::Matrix<std::complex<double>,rows,rows>::Identity()
#define ZEROMATRIXCOMPLEX(rows,cols) Eigen::Matrix<std::complex<double>,rows,cols>::Zero()
#define ZEROVECTORCOMPLEX(rows)      Eigen::Matrix<std::complex<double>,rows,1>::Zero()
#define ZEROARRAYCOMPLEX(rows)       Eigen::Array<std::complex<double>,rows,1>::Zero()

template<class Scalar, int M>
Eigen::Matrix<Scalar,M,M> ToMatrix(const Eigen::Array<Scalar,M,1>& a)
{
   return Eigen::Matrix<Scalar,M,M>(a.matrix().asDiagonal());
}

template<class Scalar, int M, int N>
Eigen::Matrix<Scalar,M,N> ToMatrix(const Eigen::Matrix<Scalar,M,N>& a)
{
   return a;
}

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
