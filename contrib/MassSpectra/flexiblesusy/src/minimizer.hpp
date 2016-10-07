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

#ifndef MINIMIZER_H
#define MINIMIZER_H

#include <iostream>
#include <cassert>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_multimin.h>

#include "logger.hpp"
#include "ewsb_solver.hpp"

namespace flexiblesusy {

/**
 * @class Minimizer
 * @brief Function minimizer
 *
 * The user has to provide the function to be minimized of the type
 * Function_t.  This function gets as arguments a GSL vector of lenght
 * `dimension' and a pointer to the parameters (of type void*).
 *
 * Example:
 * @code
 * struct Parabola {
 *    static double func(const gsl_vector* x, void*) {
 *       const double y = gsl_vector_get(x, 0);
 *       const double z = gsl_vector_get(x, 1);
 *       return (y - 5.0)*(y - 5.0) + (z - 1.0)*(z - 1.0);
 *    }
 * };
 *
 * Minimizer<2> minimizer(Parabola::func, NULL, 100, 1.0e-5);
 * const double start[2] = { 10, 10 };
 * const int status = minimizer.minimize(start);
 * @endcode
 */
template <std::size_t dimension>
class Minimizer : public EWSB_solver {
public:
   /// pointer to function to minimize
   typedef double (*Function_t)(const gsl_vector*, void*);

   Minimizer();
   Minimizer(Function_t, void*, std::size_t, double, const gsl_multimin_fminimizer_type* solver_type_ = gsl_multimin_fminimizer_nmsimplex2);
   Minimizer(const Minimizer&);
   virtual ~Minimizer();

   double get_minimum_value() const { return minimum_value; }
   double get_minimum_point(std::size_t) const;
   void set_function(Function_t f) { function = f; }
   void set_parameters(void* m) { parameters = m; }
   void set_precision(double p) { precision = p; }
   void set_max_iterations(std::size_t n) { max_iterations = n; }
   void set_solver_type(const gsl_multimin_fminimizer_type* t) { solver_type = t; }
   int minimize(const double[dimension]);

   // EWSB_solver interface methods
   virtual int solve(const double[dimension]);
   virtual double get_solution(unsigned);

private:
   std::size_t max_iterations; ///< maximum number of iterations
   double precision;           ///< precision goal
   double initial_step_size;   ///< initial step size
   double minimum_value;       ///< minimum function value found
   gsl_vector* minimum_point;  ///< GSL vector of minimum point
   gsl_vector* step_size;      ///< GSL vector of initial step size
   void* parameters;           ///< pointer to parameters
   Function_t function;        ///< function to minimize
   const gsl_multimin_fminimizer_type* solver_type; ///< GSL minimizer type

   void print_state(gsl_multimin_fminimizer*, std::size_t) const;
};

/**
 * Default constructor
 */
template <std::size_t dimension>
Minimizer<dimension>::Minimizer()
   : max_iterations(100)
   , precision(1.0e-2)
   , initial_step_size(1.0)
   , minimum_value(0.0)
   , parameters(NULL)
   , function(NULL)
   , solver_type(gsl_multimin_fminimizer_nmsimplex2)
{
   minimum_point = gsl_vector_alloc(dimension);
   step_size = gsl_vector_alloc(dimension);
}

/**
 * Constructor
 *
 * @param function_ pointer to the function to minimize
 * @param parameters_ pointer to the parameters (for example the model)
 * @param max_iterations_ maximum number of iterations
 * @param precision_ precision goal
 * @param solver_type_ GSL multimin minimizer type
 */
template <std::size_t dimension>
Minimizer<dimension>::Minimizer(
   Function_t function_,
   void* parameters_,
   std::size_t max_iterations_,
   double precision_,
   const gsl_multimin_fminimizer_type* solver_type_
)
   : max_iterations(max_iterations_)
   , precision(precision_)
   , initial_step_size(1.0)
   , minimum_value(0.0)
   , parameters(parameters_)
   , function(function_)
   , solver_type(solver_type_)
{
   minimum_point = gsl_vector_alloc(dimension);
   step_size = gsl_vector_alloc(dimension);
}

template <std::size_t dimension>
Minimizer<dimension>::Minimizer(const Minimizer& other)
   : max_iterations(other.max_iterations)
   , precision(other.precision)
   , initial_step_size(other.initial_step_size)
   , minimum_value(other.minimum_value)
   , parameters(other.parameters)
   , function(other.function)
   , solver_type(other.solver_type)
{
   minimum_point = gsl_vector_alloc(dimension);
   step_size = gsl_vector_alloc(dimension);
   // copy vectors
   gsl_vector_memcpy(minimum_point, other.minimum_point);
   gsl_vector_memcpy(step_size, other.step_size);
}

template <std::size_t dimension>
Minimizer<dimension>::~Minimizer()
{
   gsl_vector_free(minimum_point);
   gsl_vector_free(step_size);
}

/**
 * Start the minimization
 *
 * @param start starting point
 *
 * @return GSL error code (GSL_SUCCESS if minimum found)
 */
template <std::size_t dimension>
int Minimizer<dimension>::minimize(const double start[dimension])
{
   assert(function && "Minimizer<dimension>::minimize: function pointer"
          " must not be zero!");

   gsl_multimin_fminimizer *minimizer;
   gsl_multimin_function minex_func;

   // Set starting point
   for (std::size_t i = 0; i < dimension; i++)
      gsl_vector_set(minimum_point, i, start[i]);

   // Set initial step sizes
   gsl_vector_set_all(step_size, initial_step_size);

   // Initialize method and iterate
   minex_func.n = dimension;
   minex_func.f = function;
   minex_func.params = parameters;

   minimizer = gsl_multimin_fminimizer_alloc(solver_type, dimension);
   gsl_multimin_fminimizer_set(minimizer, &minex_func, minimum_point, step_size);

   size_t iter = 0;
   int status;

   do {
      iter++;
      status = gsl_multimin_fminimizer_iterate(minimizer);

      if (status)
         break;

      const double size = gsl_multimin_fminimizer_size(minimizer);
      status = gsl_multimin_test_size(size, precision);

#ifdef ENABLE_VERBOSE
      print_state(minimizer, iter);
#endif
   } while (status == GSL_CONTINUE && iter < max_iterations);

#ifdef ENABLE_VERBOSE
   std::cout << "\tMinimization status = " << gsl_strerror(status) << '\n';
#endif

   // save minimum point and function value
   gsl_vector_memcpy(minimum_point, minimizer->x);
   minimum_value = minimizer->fval;

   gsl_multimin_fminimizer_free(minimizer);

   return status;
}

/**
 * Print state of the minimizer
 *
 * @param minimizer minimizer
 * @param iteration iteration number
 */
template <std::size_t dimension>
void Minimizer<dimension>::print_state(gsl_multimin_fminimizer* minimizer,
                                               std::size_t iteration) const
{
   std::cout << "\tIteration " << iteration << ": x =";
   for (std::size_t i = 0; i < dimension; ++i)
      std::cout << ' ' << gsl_vector_get(minimizer->x, i);
   std::cout << ", f(x) = " << minimizer->fval << '\n';
}

template <std::size_t dimension>
double Minimizer<dimension>::get_minimum_point(std::size_t i) const
{
   assert(i < dimension && "Minimizer<>::get_minimum_point: index out"
          " of bounds");
   return gsl_vector_get(minimum_point, i);
}

template <std::size_t dimension>
int Minimizer<dimension>::solve(const double start[dimension])
{
   return (minimize(start) == GSL_SUCCESS ?
           EWSB_solver::SUCCESS : EWSB_solver::FAIL);
}

template <std::size_t dimension>
double Minimizer<dimension>::get_solution(unsigned i)
{
   return get_minimum_point(i);
}

} // namespace flexiblesusy

#endif
