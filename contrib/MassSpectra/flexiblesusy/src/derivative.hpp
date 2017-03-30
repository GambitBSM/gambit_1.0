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

/**
 * @file derivative.hpp
 * @brief contains functions to calculate derivatives numerically
 */

#ifndef DERIVATIVE_H
#define DERIVATIVE_H

#include <cmath>
#include <limits>
#include <vector>

namespace flexiblesusy {

/**
 * Calculates the forward derivative of \f$f(x)\f$ as \f[f'(x) =
 * \frac{f(x+h)-f(x)}{h} + O(h)\f].  This function calls \f$f\f$ once
 * at \f$(x+h)\f$.  The value of \f$f(x)\f$ has to be provided by the
 * caller.  The step size \f$h\f$ is calculated to be \f$h =
 * \sqrt{\epsilon} x\f$ for \f$x\neq 0\f$.  For \f$x=0\f$, the step
 * size is set to \f$h = \epsilon\f$.
 *
 * @param f function
 * @param x point at which derivative is to be calculated
 * @param fx value of \f$f(x)\f$
 * @param eps \f$\epsilon\f$
 *
 * @return derivative
 */
template <class F, class A>
auto derivative_forward_fx(F&& f, A x, decltype(f(x)) fx, A eps = std::numeric_limits<A>::epsilon())
   -> decltype(f(x))
{
   const A h = std::fabs(x) < eps ? eps : std::sqrt(eps) * x;
   volatile const A xph = x + h; // avoid away optimization
   const A dx = xph - x;
   return (f(xph) - fx) / dx;
}

/**
 * Calculates the backward derivative of \f$f(x)\f$ as \f[f'(x) =
 * \frac{f(x)-f(x-h)}{h} + O(h)\f].  This function calls \f$f\f$ once
 * at \f$(x+h)\f$.  The value of \f$f(x)\f$ has to be provided by the
 * caller.  The step size \f$h\f$ is calculated to be \f$h =
 * \sqrt{\epsilon} x\f$ for \f$x\neq 0\f$.  For \f$x=0\f$, the step
 * size is set to \f$h = \epsilon\f$.
 *
 * @param f function
 * @param x point at which derivative is to be calculated
 * @param fx value of \f$f(x)\f$
 * @param eps \f$\epsilon\f$
 *
 * @return derivative
 */
template <class F, class A>
auto derivative_backward_fx(F&& f, A x, decltype(f(x)) fx, A eps = std::numeric_limits<A>::epsilon())
   -> decltype(f(x))
{
   const A h = std::fabs(x) < eps ? eps : std::sqrt(eps) * x;
   volatile const A xph = x - h; // avoid away optimization
   const A dx = x - xph;
   return (fx - f(xph)) / dx;
}

/**
 * Calculates the 1st derivative of \f$f(x)\f$ up to order \a Order
 * using the forward finite difference.  This function calls
 * \f$f(x)\f$ (Order + 2) times.
 *
 * @param f function
 * @param x point at which derivative is to be calculated
 * @param eps measure for step size \f$h\f$
 * @tparam Order order of accuracy (0, 1, 2, 3, 4, 5)
 *
 * @return derivative
 */
template <int Order, class F, class A>
auto derivative_forward(F&& f, A x, A eps = std::numeric_limits<A>::epsilon()) -> decltype(f(x))
{
   static_assert(Order <= 5, "1st forward derivative with order > 5 not implemented");

   typedef decltype(f(x)) return_type;

   // coefficients from Math. Comp. 51 (1988), 699-706
   // DOI: http://dx.doi.org/10.1090/S0025-5718-1988-0935077-0
   static const std::vector<std::vector<double> > coeffs = {
      {-1., 1.},
      {-3./2., 2., -1./2.},
      {-11./6., 3., -3./2., 1./3.},
      {-25./12., 4., -3., 4./3., -1./4.},
      {-137./60., 5., -5., 10./3., -5./4., 1./5.},
      {-49./20., 6., -15./2., 20./3., -15./4., 6./5., -1./6.}
   };

   const A h = std::fabs(x) < eps ? eps : std::sqrt(eps) * x;
   return_type result = 0;

   for (unsigned i = 0; i < Order + 2; i++) {
      const double coeff = -coeffs[Order][i];
      result += coeff * f(x - i*h);
   }

   return result / h;
}

/**
 * Calculates the 1st derivative of \f$f(x)\f$ up to order \a Order
 * using the backward finite difference.  This function calls
 * \f$f(x)\f$ (Order + 2) times.
 *
 * @param f function
 * @param x point at which derivative is to be calculated
 * @param eps measure for step size \f$h\f$
 * @tparam Order order of accuracy (0, 1, 2, 3, 4, 5)
 *
 * @return derivative
 */
template <int Order, class F, class A>
auto derivative_backward(F&& f, A x, A eps = std::numeric_limits<A>::epsilon()) -> decltype(f(x))
{
   static_assert(Order <= 5, "1st backward derivative with order > 5 not implemented");

   typedef decltype(f(x)) return_type;

   // coefficients from Math. Comp. 51 (1988), 699-706
   // DOI: http://dx.doi.org/10.1090/S0025-5718-1988-0935077-0
   static const std::vector<std::vector<double> > coeffs = {
      {-1., 1.},
      {-3./2., 2., -1./2.},
      {-11./6., 3., -3./2., 1./3.},
      {-25./12., 4., -3., 4./3., -1./4.},
      {-137./60., 5., -5., 10./3., -5./4., 1./5.},
      {-49./20., 6., -15./2., 20./3., -15./4., 6./5., -1./6.}
   };

   const A h = std::fabs(x) < eps ? eps : std::sqrt(eps) * x;
   return_type result = 0;

   for (unsigned i = 0; i < Order + 2; i++) {
      const double coeff = coeffs[Order][i];
      result += coeff * f(x + i*h);
   }

   return result / h;
}

/**
 * Calculates the 1st derivative of \f$f(x)\f$ up to order \a Order
 * using the central finite difference.  This function calls \f$f\f$
 * (Order + 2) times.
 *
 * @param f function
 * @param x point at which derivative is to be calculated
 * @param eps measure for step size \f$h\f$
 * @tparam Order order of accuracy (0, 1, 2, 3)
 *
 * @return derivative
 */
template <int Order, class F, class A>
auto derivative_central(F&& f, A x, A eps = std::numeric_limits<A>::epsilon())
   -> decltype(f(x))
{
   static_assert(Order <= 3, "1st central derivative with order > 3 not implemented");

   typedef decltype(f(x)) return_type;

   // coefficients from Math. Comp. 51 (1988), 699-706
   // DOI: http://dx.doi.org/10.1090/S0025-5718-1988-0935077-0
   static const std::vector<std::vector<double> > coeffs = {
      {0.5},
      {2./3., -1./12.},
      {3./4., -3./20., 1./60.},
      {4./5., -1./5., 4./105., -1./280.}
   };

   const A h = std::fabs(x) < eps ? eps : std::sqrt(eps) * x;
   return_type result = 0;

   for (unsigned i = 0; i < Order + 1; i++) {
      const double coeff = coeffs[Order][i];
      const A step = (i + 1) * h;
      result += coeff * (f(x + step) - f(x - step));
   }

   return result / h;
}

} // namespace flexiblesusy

#endif
