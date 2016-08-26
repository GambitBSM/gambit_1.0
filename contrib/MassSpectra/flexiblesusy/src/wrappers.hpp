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

#include <algorithm>
#include <cmath>
#include <complex>
#include <functional>
#include <limits>
#include <numeric>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>
#include <Eigen/Core>
#include <boost/lexical_cast.hpp>

#include "dilog.hpp"
#include "eigen_tensor.hpp"

namespace flexiblesusy {

static const double Pi = M_PI;
static const double oneOver16PiSqr = 1./(16. * M_PI * M_PI);
static const double twoLoop = oneOver16PiSqr * oneOver16PiSqr;
static const double threeLoop = oneOver16PiSqr * oneOver16PiSqr * oneOver16PiSqr;
static const bool True = true;

template <typename T>
T Abs(T a)
{
   return std::abs(a);
}

template <typename T>
T Abs(const std::complex<T>& z)
{
   return std::abs(z);
}

template <typename Scalar, int M, int N>
Eigen::Array<Scalar, M, N> Abs(const Eigen::Array<Scalar, M, N>& a)
{
   return a.cwiseAbs();
}

template <class T>
std::vector<T> Abs(std::vector<T> v)
{
   for (typename std::vector<T>::iterator it = v.begin(),
           end = v.end(); it != end; ++it)
      *it = Abs(*it);
   return v;
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
 * Calculates the mass of a Majoran fermion singlet from a (possibly
 * complex) numerical value by taking the magnitude of the value.
 *
 * The phase is set to exp(i theta/2), where theta is the phase angle
 * of the complex value.  If the value is pure real, then the phase
 * will be set to 1.  If the value is purely imaginary, then the phase
 * will be set to \f$e^{i \pi/2}\f$.
 *
 * @param value numerical value
 * @param[out] phase phase
 * @return mass
 */
template <typename T>
double calculate_majorana_singlet_mass(T value, std::complex<double>& phase)
{
   phase = std::polar(1., 0.5 * std::arg(std::complex<double>(value)));
   return std::abs(value);
}

/**
 * Calculates the mass of a Dirac fermion singlet from a (possibly
 * complex) numerical value by taking the magnitude of the value.
 *
 * The phase is set to exp(i theta), where theta is the phase angle of
 * the complex value.  If the value is pure real, then the phase will
 * be set to 1.  If the value is purely imaginary, then the phase will
 * be set to \f$e^{i \pi}\f$.
 *
 * @param value numerical value
 * @param[out] phase phase
 * @return mass
 */
template <typename T>
double calculate_dirac_singlet_mass(T value, std::complex<double>& phase)
{
   phase = std::polar(1., std::arg(std::complex<double>(value)));
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

template <class T>
T Conjugate(T a)
{
   return Conj(a);
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

template <typename T>
T If(bool c, T a, T b) { return c ? a : b; }

template <typename T>
T If(bool c, int a, T b) { return c ? T(a) : b; }

template <typename T>
T If(bool c, T a, int b) { return c ? a : T(b); }

inline bool IsClose(double a, double b,
                    double eps = std::numeric_limits<double>::epsilon())
{
   return std::abs(a - b) < eps;
}

inline bool IsCloseRel(double a, double b,
                       double eps = std::numeric_limits<double>::epsilon())
{
   if (IsClose(a, b, std::numeric_limits<double>::epsilon()))
      return true;

   if (std::abs(a) < std::numeric_limits<double>::epsilon())
      return IsClose(a, b, eps);

   return std::abs((a - b)/a) < eps;
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
   return (std::isfinite(a) && a > std::numeric_limits<double>::epsilon())
      ? std::log(a) : 0;
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
   typename Eigen::MatrixBase<Derived>::PlainObject sumTol(a.rows());

   assert(a.rows() == b.rows());

   for (int i = 0; i < a.rows(); i++)
      sumTol(i) = MaxRelDiff(a(i), b(i));

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

template <typename T>
T PolyLog(int n, T z) {
   if (n == 2)
      return gm2calc::dilog(z);
   assert(false && "PolyLog(n!=2) not implemented");
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

template<int M, int N>
Eigen::Matrix<double,M,N> Im(const Eigen::Matrix<double,M,N>& x)
{
   return Eigen::Matrix<double,M,N>::Zero();
}

template<class Derived>
typename Eigen::Matrix<
   double,
   Eigen::MatrixBase<Derived>::RowsAtCompileTime,
   Eigen::MatrixBase<Derived>::ColsAtCompileTime>
Im(const Eigen::MatrixBase<Derived>& x)
{
   return x.imag();
}

namespace {
   struct CompareAbs_d {
      bool operator() (double a, double b) { return std::abs(a) < std::abs(b); }
   };
}

template <typename T>
T RelDiff(T a, T b, T eps = std::numeric_limits<T>::epsilon())
{
   const T max = std::max(a, b);

   if (std::abs(max) < eps)
      return T();

   return (a - b) / max;
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

namespace {
   inline double SignedAbsSqrt_d(double a)
   {
      return SignedAbsSqrt(a);
   }
}

template <typename Derived>
Derived SignedAbsSqrt(const Eigen::ArrayBase<Derived>& m)
{
   return m.unaryExpr(std::ptr_fun(SignedAbsSqrt_d));
}

template <class T, typename = typename std::enable_if<std::is_floating_point<T>::value,T>::type>
T Sqrt(T a)
{
   return std::sqrt(a);
}

template <class T, typename = typename std::enable_if<std::is_integral<T>::value,T>::type>
double Sqrt(T a)
{
   return std::sqrt(static_cast<double>(a));
}

template <typename Scalar, int M, int N>
Eigen::Array<Scalar, M, N> Sqrt(const Eigen::Array<Scalar, M, N>& m)
{
   return m.unaryExpr(std::ptr_fun(Sqrt<Scalar>));
}

template <class T>
std::vector<T> Sqrt(std::vector<T> v)
{
   for (typename std::vector<T>::iterator it = v.begin(),
           end = v.end(); it != end; ++it)
      *it = Sqrt(*it);
   return v;
}

template <typename T>
T Sqr(T a)
{
   return a * a;
}

template <typename Scalar, int M, int N>
Eigen::Array<Scalar, M, N> Sqr(const Eigen::Array<Scalar, M, N>& a)
{
   return a.unaryExpr(std::ptr_fun(Sqr<Scalar>));
}

template <class T>
std::vector<T> Sqr(std::vector<T> v)
{
   for (typename std::vector<T>::iterator it = v.begin(),
           end = v.end(); it != end; ++it)
      *it = Sqr(*it);
   return v;
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
#define ZEROTENSOR3(d1,d2,d3)        ZeroTensor3<double,d1,d2,d3>()
#define ZEROTENSOR4(d1,d2,d3,d4)     ZeroTensor4<double,d1,d2,d3,d4>()
#define ZEROVECTOR(rows)             Eigen::Matrix<double,rows,1>::Zero()
#define ZEROARRAY(rows)              Eigen::Array<double,rows,1>::Zero()
#define UNITMATRIXCOMPLEX(rows)      Eigen::Matrix<std::complex<double>,rows,rows>::Identity()
#define ZEROMATRIXCOMPLEX(rows,cols) Eigen::Matrix<std::complex<double>,rows,cols>::Zero()
#define ZEROVECTORCOMPLEX(rows)      Eigen::Matrix<std::complex<double>,rows,1>::Zero()
#define ZEROTENSOR3COMPLEX(d1,d2,d3) ZeroTensor3<std::complex<double>,d1,d2,d3>()
#define ZEROTENSOR4COMPLEX(d1,d2,d3,d4) ZeroTensor4<std::complex<double>,d1,d2,d3,d4>()
#define ZEROARRAYCOMPLEX(rows)       Eigen::Array<std::complex<double>,rows,1>::Zero()

// MxN matrix projection operator, which projects on the (X,Y)
// component
#define PROJECTOR Proj
#define DEFINE_PROJECTOR(M,N,X,Y)                                       \
   Eigen::Matrix<double,M,N> Proj(Eigen::Matrix<double,M,N>::Zero());   \
   Proj(X-1,Y-1) = 1;

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

template <class T>
T Total(const std::vector<T>& v)
{
   return std::accumulate(v.begin(), v.end(), T(0));
}

template <typename Scalar, int M, int N>
Scalar Total(const Eigen::Array<Scalar, M, N>& a)
{
   return a.sum();
}

template <class Scalar, int M, int N>
Eigen::Array<Scalar,M,N> Total(const std::vector<Eigen::Array<Scalar,M,N> >& v)
{
   if (v.empty()) {
      Eigen::Array<Scalar,M,N> result(0,0);
      result.setZero();
      return result;
   }

   Eigen::Array<Scalar,M,N> result(v[0].rows(), v[0].cols());
   result.setZero();

   for (std::size_t i = 0; i < v.size(); i++)
      result += v[i];

   return result;
}

/// step function (0 for x < 0, 1 otherwise)
template <typename T>
unsigned UnitStep(T x)
{
   return x < T() ? 0 : 1;
}

template <typename T>
T Which(bool cond, T value)
{
   return cond ? value : T(0);
}

template<typename T, typename ... Trest>
T Which(bool cond, T value, Trest... rest)
{
   return cond ? value : Which(rest...);
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
