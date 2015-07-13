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

#ifndef FIXED_POINT_ITERATOR_H
#define FIXED_POINT_ITERATOR_H

#include <iostream>
#include <cassert>
#include <limits>
#include <gsl/gsl_sys.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_multiroots.h>

#include "wrappers.hpp"
#include "error.hpp"
#include "ewsb_solver.hpp"

namespace flexiblesusy {

namespace fixed_point_iterator {

class Convergence_tester_absolute {
public:
   Convergence_tester_absolute(double precision_ = 1.0e-2)
      : precision(precision_)
   {}

   /**
    * Test whether the absolute value of the residual, defined by
    * \f$|a-b| = \sqrt{\sum_i (a_i - b_i)^2}\f$,
    * is less than the set precision.
    *
    * @param a GSL vector
    * @param b GSL vector
    * @return GSL error code (GSL_SUCCESS or GSL_CONTINUE)
    */
   int operator()(const gsl_vector* a, const gsl_vector* b) const {
      assert(a->size == b->size && "Error: vectors have different size.");

      const std::size_t dimension = a->size;
      double residual = 0.;

      if (precision < 0.)
         GSL_ERROR("absolute tolerance is negative", GSL_EBADTOL);

      for (std::size_t i = 0; i < dimension; ++i)
         residual += Sqr(gsl_vector_get(a, i) - gsl_vector_get(b, i));

      residual = Sqrt(residual);

      return (residual < precision ? GSL_SUCCESS : GSL_CONTINUE);
   }

private:
   double precision;                 ///< precision goal
};

class Convergence_tester_relative {
public:
   Convergence_tester_relative(double precision_ = 1.0e-2)
      : precision(precision_)
   {}

   /**
    * Test whether the relative difference is less than the set
    * precision. The relative difference test used here is carried out
    * by applying \a MaxRelDiff to each element of the vector.
    *
    * @param a GSL vector
    * @param b GSL vector
    * @return GSL error code (GSL_SUCCESS or GSL_CONTINUE)
    */
   int operator()(const gsl_vector* a, const gsl_vector* b) const {
      assert(a->size == b->size && "Error: vectors have different size.");

      const std::size_t dimension = a->size;
      double rel_diff = 0.;

      if (precision < 0.)
         GSL_ERROR("relative tolerance is negative", GSL_EBADTOL);

      for (std::size_t i = 0; i < dimension; ++i) {
         rel_diff = MaxRelDiff(gsl_vector_get(a, i), gsl_vector_get(b, i));

         if (rel_diff > precision)
            return GSL_CONTINUE;
      }

      return GSL_SUCCESS;
   }

private:
   double precision;                 ///< precision goal
};

class Convergence_tester_tadpole {
public:
   /// pointer to tadpole function
   typedef int (*Tadpole_function_t)(const gsl_vector*, void*, gsl_vector*);

   Convergence_tester_tadpole(double precision_,
                              Tadpole_function_t tadpole_function_,
                              void* parameters_)
      : precision(precision_)
      , tadpole_function(tadpole_function_)
      , parameters(parameters_)
   {
      assert(tadpole_function_);
   }

   /**
    * Test whether the relative difference is less than the set
    * precision. The relative difference test used here is carried out
    * by applying \a MaxRelDiff to each element of the vector. If the
    * relative difference is below the precision, it is tested whether
    * the tadpoles are below the precision. If the tadpoles are larger
    * than the precision, GSL_CONTINUE is returned.
    *
    * @param a GSL vector
    * @param b GSL vector
    * @return GSL error code (GSL_SUCCESS or GSL_CONTINUE)
    */
   int operator()(const gsl_vector* a, const gsl_vector* b) const {
      assert(a->size == b->size && "Error: vectors have different size.");

      const std::size_t dimension = a->size;
      double rel_diff = 0.;

      if (precision < 0.)
         GSL_ERROR("relative tolerance is negative", GSL_EBADTOL);

      for (std::size_t i = 0; i < dimension; ++i) {
         rel_diff = MaxRelDiff(gsl_vector_get(a, i), gsl_vector_get(b, i));

         if (rel_diff > precision)
            return GSL_CONTINUE;

         if (rel_diff < std::numeric_limits<double>::epsilon())
            return GSL_SUCCESS;
      }

      const int status = check_tadpoles(a, parameters);

      return status;
   }

private:
   double precision;                 ///< precision goal
   const Tadpole_function_t tadpole_function; ///< function to calculate tadpole
   void* parameters;                 ///< tadpole function parameters

   int check_tadpoles(const gsl_vector* x, void* parameters) const {
      gsl_vector* t = gsl_vector_alloc(x->size);
      tadpole_function(x, parameters, t);
      const int status = gsl_multiroot_test_residual(t, precision);
      gsl_vector_free(t);

      return status;
   }
};

} // namespace fixed_point_iterator

/**
 * @class Fixed_point_iterator
 * @brief Does fixed point iteration
 * @author Dylan Harries, Alexander Voigt
 * @tparam dimension dimension of function
 * @tparam Convergence_tester function for relative comparison
 *    of subsequent iteration steps
 *
 * The user has to provide the function (of which a fixed point
 * should be found) of the type \a Function_t. This function gets as
 * arguments a GSL vector of length \a dimension, a pointer to the
 * parameters (of type \a void*) and a GSL vector where the next
 * point must be stored.
 *
 * @note The standard relative convergence criterion
 * \f$\text{MaxRelDiff}(x_{n+1}, x_{n}) < \text{precision}\f$ is not
 * very good: The iteration might converge slowly.  This means, that
 * subsequent steps are very close to each other, but \f$x_n\f$ might
 * not be close to the true fixed point.
 *
 * @todo implement check for no progress towards solution
 */
template <std::size_t dimension, class Convergence_tester = fixed_point_iterator::Convergence_tester_relative>
class Fixed_point_iterator : public EWSB_solver {
public:
   typedef int (*Function_t)(const gsl_vector*, void*, gsl_vector*);

   Fixed_point_iterator();
   Fixed_point_iterator(Function_t, void*, std::size_t, const Convergence_tester&);
   Fixed_point_iterator(const Fixed_point_iterator&);
   virtual ~Fixed_point_iterator();

   double get_fixed_point(std::size_t) const;
   void set_function(Function_t f) { function = f; }
   void set_parameters(void* m) { parameters = m; }
   void set_max_iterations(std::size_t n) { max_iterations = n; }
   int find_fixed_point(const double[dimension]);

   // EWSB_solver interface methods
   virtual int solve(const double[dimension]);
   virtual double get_solution(unsigned);

private:
   std::size_t max_iterations;       ///< maximum number of iterations
   gsl_vector* xn;                   ///< current iteration point
   gsl_vector* fixed_point;          ///< vector of fixed point estimate
   void* parameters;                 ///< pointer to parameters
   Function_t function;              ///< function defining fixed point
   Convergence_tester convergence_tester; ///< convergence tester

   int fixed_point_iterator_iterate();
   void print_state(std::size_t) const;
};

/**
 * Default constructor
 */
template <std::size_t dimension, class Convergence_tester>
Fixed_point_iterator<dimension,Convergence_tester>::Fixed_point_iterator()
   : max_iterations(100)
   , parameters(NULL)
   , function(NULL)
   , convergence_tester(Convergence_tester())
{
   xn = gsl_vector_alloc(dimension);
   fixed_point = gsl_vector_alloc(dimension);

   if (!xn || !fixed_point)
      throw OutOfMemoryError("GSL vector allocation failed in"
                             " Fixed_point_iterator()");
}

/**
 * Constructor
 *
 * @param function_ pointer to the function to find fixed point for
 * @param parameters_ pointer to the parameters (for example the model)
 * @param max_iterations_ maximum number of iterations
 * @param convergence_tester_ convergence tester
 */
template <std::size_t dimension, class Convergence_tester>
Fixed_point_iterator<dimension,Convergence_tester>::Fixed_point_iterator(
   Function_t function_,
   void* parameters_,
   std::size_t max_iterations_,
   const Convergence_tester& convergence_tester_
)
   : max_iterations(max_iterations_)
   , parameters(parameters_)
   , function(function_)
   , convergence_tester(convergence_tester_)
{
   xn = gsl_vector_alloc(dimension);
   fixed_point = gsl_vector_alloc(dimension);

   if (!xn || !fixed_point)
      throw OutOfMemoryError("GSL vector allocation failed in"
                             " Fixed_point_iterator(Function_t, void*,"
                             " size_t, double, bool)");
}

template <std::size_t dimension, class Convergence_tester>
Fixed_point_iterator<dimension,Convergence_tester>::Fixed_point_iterator(
   const Fixed_point_iterator& other
)
   : max_iterations(other.max_iterations)
   , parameters(other.parameters)
   , function(other.function)
   , convergence_tester(other.convergence_tester)
{
   xn = gsl_vector_alloc(dimension);
   gsl_vector_memcpy(xn, other.xn);

   fixed_point = gsl_vector_alloc(dimension);
   gsl_vector_memcpy(fixed_point, other.fixed_point);
}

template <std::size_t dimension, class Convergence_tester>
Fixed_point_iterator<dimension,Convergence_tester>::~Fixed_point_iterator()
{
   gsl_vector_free(xn);
   gsl_vector_free(fixed_point);
}

/**
 * Start the iteration
 *
 * @param start starting point
 *
 * @return GSL error code (GSL_SUCCESS if fixed point found)
 */
template <std::size_t dimension, class Convergence_tester>
int Fixed_point_iterator<dimension,Convergence_tester>::find_fixed_point(
   const double start[dimension]
)
{
   assert(function && "Fixed_point_iterator<dimension,Convergence_tester>"
          "::find_fixed_point: function pointer must not be zero!");

   int status;
   std::size_t iter = 0;

#ifndef ENABLE_DEBUG
   gsl_set_error_handler_off();
#endif

   for (std::size_t i = 0; i < dimension; ++i) {
      gsl_vector_set(xn, i, start[i]);
      gsl_vector_set(fixed_point, i, start[i]);
   }

#ifdef ENABLE_VERBOSE
   print_state(iter);
#endif

   do {
      iter++;
      status = fixed_point_iterator_iterate();

#ifdef ENABLE_VERBOSE
      print_state(iter);
#endif

      if (status)   // check if iterator has problems
         break;

      status = convergence_tester(fixed_point, xn);

   } while (status == GSL_CONTINUE && iter < max_iterations);

#ifdef ENABLE_VERBOSE
   std::cout << "\tFixed_point_iterator status = "
             << gsl_strerror(status) << '\n';
#endif

   return status;
}

/**
 * Perform a single step of the fixed point iteration
 *
 * @return GSL error code
 */
template <std::size_t dimension, class Convergence_tester>
int Fixed_point_iterator<dimension,Convergence_tester>::fixed_point_iterator_iterate()
{
   gsl_vector_memcpy(xn, fixed_point);

   int status = function(xn, parameters, fixed_point);

   if (status != GSL_SUCCESS)
      return GSL_EBADFUNC;

   // For safety, include a check for nans or infs here (which
   // should be sufficient for now)
   for (std::size_t i = 0; i < dimension; ++i) {
      if (!gsl_finite(gsl_vector_get(fixed_point, i)))
         GSL_ERROR("update point is not finite", GSL_EBADFUNC);
   }

   return GSL_SUCCESS;
}

/**
 * Print state of the fixed point iterator
 *
 * @param iteration iteration number
 */
template <std::size_t dimension, class Convergence_tester>
void Fixed_point_iterator<dimension,Convergence_tester>::print_state(std::size_t iteration) const
{
   std::cout << "\tIteration n = " << iteration << ": x_{n} =";
   for (std::size_t i = 0; i < dimension; ++i) {
      std::cout << ' ' << gsl_vector_get(xn, i);
   }
   std::cout << ", x_{n+1} =";
   for (std::size_t i = 0; i < dimension; ++i) {
      std::cout << ' ' << gsl_vector_get(fixed_point, i);
   }
   std::cout << '\n';
}

template <std::size_t dimension, class Convergence_tester>
double Fixed_point_iterator<dimension,Convergence_tester>::get_fixed_point(std::size_t i) const
{
   assert(i < dimension && "Fixed_point_iterator<>::get_fixed_point: index out"
          " of bounds");
   return gsl_vector_get(fixed_point, i);
}

template <std::size_t dimension, class Convergence_tester>
int Fixed_point_iterator<dimension,Convergence_tester>::solve(const double start[dimension])
{
   return (find_fixed_point(start) == GSL_SUCCESS ?
           EWSB_solver::SUCCESS : EWSB_solver::FAIL);
}

template <std::size_t dimension, class Convergence_tester>
double Fixed_point_iterator<dimension,Convergence_tester>::get_solution(unsigned i)
{
   return get_fixed_point(i);
}

} // namespace flexiblesusy

#endif
