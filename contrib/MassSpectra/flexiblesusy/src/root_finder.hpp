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

#ifndef ROOT_FINDER_H
#define ROOT_FINDER_H

#include <iostream>
#include <cassert>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_multiroots.h>

#include "logger.hpp"
#include "error.hpp"
#include "ewsb_solver.hpp"

namespace flexiblesusy {

/**
 * @class Root_finder
 * @brief Function root finder
 *
 * The user has to provide the function (of which the root should be
 * found) of the type Function_t.  This function gets as arguments a
 * GSL vector of lenght `dimension', a pointer to the parameters (of
 * type void*) and a GSL vector where the function values must be
 * stored.
 *
 * Example:
 * @code
 * struct Parabola {
 *    static int func(const gsl_vector* x, void*, gsl_vector* f) {
 *       const double y = gsl_vector_get(x, 0);
 *       const double z = gsl_vector_get(x, 1);
 *       gsl_vector_set(f, 0, y*(y - 5.0));
 *       gsl_vector_set(f, 1, z*(z - 1.0));
 *       return GSL_SUCCESS;
 *    }
 * };
 *
 * Root_finder<2> root_finder(Parabola::func, NULL, 100, 1.0e-5);
 * const double start[2] = { 10, 10 };
 * const int status = root_finder.find_root(start);
 * @endcode
 */
template <std::size_t dimension>
class Root_finder : public EWSB_solver {
public:
   /// pointer to function to find root of
   typedef int (*Function_t)(const gsl_vector*, void*, gsl_vector*);

   Root_finder();
   Root_finder(Function_t, void*, std::size_t, double, const gsl_multiroot_fsolver_type* solver_type_ = gsl_multiroot_fsolver_hybrid);
   Root_finder(const Root_finder&);
   virtual ~Root_finder();

   double get_root(std::size_t) const;
   void set_function(Function_t f) { function = f; }
   void set_parameters(void* m) { parameters = m; }
   void set_precision(double p) { precision = p; }
   void set_max_iterations(std::size_t n) { max_iterations = n; }
   void set_solver_type(const gsl_multiroot_fsolver_type* t) { solver_type = t; }
   int find_root(const double[dimension]);

   // EWSB_solver interface methods
   virtual int solve(const double[dimension]);
   virtual double get_solution(unsigned);

private:
   std::size_t max_iterations; ///< maximum number of iterations
   double precision;           ///< precision goal
   gsl_vector* root;           ///< GSL vector of root
   void* parameters;           ///< pointer to parameters
   Function_t function;        ///< function to minimize
   const gsl_multiroot_fsolver_type* solver_type; ///< GSL solver type

   void print_state(const gsl_multiroot_fsolver*, std::size_t) const;
};

/**
 * Default constructor
 */
template <std::size_t dimension>
Root_finder<dimension>::Root_finder()
   : max_iterations(100)
   , precision(1.0e-2)
   , parameters(NULL)
   , function(NULL)
   , solver_type(gsl_multiroot_fsolver_hybrid)
{
   root = gsl_vector_alloc(dimension);

   if (!root)
      throw OutOfMemoryError("GSL vector allocation failed in Root_finder()");
}

/**
 * Constructor
 *
 * @param function_ pointer to the function to minimize
 * @param parameters_ pointer to the parameters (for example the model)
 * @param max_iterations_ maximum number of iterations
 * @param precision_ precision goal
 * @param solver_type_ GSL multiroot solver type
 */
template <std::size_t dimension>
Root_finder<dimension>::Root_finder(
   Function_t function_,
   void* parameters_,
   std::size_t max_iterations_,
   double precision_,
   const gsl_multiroot_fsolver_type* solver_type_
)
   : max_iterations(max_iterations_)
   , precision(precision_)
   , parameters(parameters_)
   , function(function_)
   , solver_type(solver_type_)
{
   root = gsl_vector_alloc(dimension);

   if (!root)
      throw OutOfMemoryError("GSL vector allocation failed in Root_finder("
                             "Function_t, void*, size_t, double)");
}

template <std::size_t dimension>
Root_finder<dimension>::Root_finder(const Root_finder& other)
   : max_iterations(other.max_iterations)
   , precision(other.precision)
   , parameters(other.parameters)
   , function(other.function)
   , solver_type(other.solver_type)
{
   root = gsl_vector_alloc(dimension);
   gsl_vector_memcpy(root, other.root);
}

template <std::size_t dimension>
Root_finder<dimension>::~Root_finder()
{
   gsl_vector_free(root);
}

/**
 * Start the minimization
 *
 * @param start starting point
 *
 * @return GSL error code (GSL_SUCCESS if minimum found)
 */
template <std::size_t dimension>
int Root_finder<dimension>::find_root(const double start[dimension])
{
   assert(function && "Root_finder<dimension>::minimize: function pointer"
          " must not be zero!");

   int status;
   std::size_t iter = 0;
   gsl_multiroot_function f = {function, dimension, parameters};

   gsl_multiroot_fsolver* solver
      = gsl_multiroot_fsolver_alloc(solver_type, dimension);

   if (!solver) {
      throw OutOfMemoryError(std::string("Cannot allocate gsl_multiroot_fsolver ") +
                             gsl_multiroot_fsolver_name(solver));
   }

#ifndef ENABLE_DEBUG
   gsl_set_error_handler_off();
#endif

   for (std::size_t i = 0; i < dimension; ++i)
      gsl_vector_set(root, i, start[i]);

   gsl_multiroot_fsolver_set(solver, &f, root);

#ifdef ENABLE_VERBOSE
   print_state(solver, iter);
#endif

   do {
      iter++;
      status = gsl_multiroot_fsolver_iterate(solver);

#ifdef ENABLE_VERBOSE
      print_state(solver, iter);
#endif

      if (status)   // check if solver is stuck
         break;

      status = gsl_multiroot_test_residual(solver->f, precision);
   } while (status == GSL_CONTINUE && iter < max_iterations);

#ifdef ENABLE_VERBOSE
   std::cout << "\tRoot_finder status = " << gsl_strerror(status) << '\n';
#endif

   gsl_vector_memcpy(root, solver->x);
   gsl_multiroot_fsolver_free(solver);

   return status;
}

/**
 * Print state of the root finder
 *
 * @param solver solver
 * @param iteration iteration number
 */
template <std::size_t dimension>
void Root_finder<dimension>::print_state(const gsl_multiroot_fsolver* solver,
                                         std::size_t iteration) const
{
   std::cout << "\tIteration " << iteration << ": x =";
   for (std::size_t i = 0; i < dimension; ++i)
      std::cout << ' ' << gsl_vector_get(solver->x, i);
   std::cout << ", f(x) =";
   for (std::size_t i = 0; i < dimension; ++i)
      std::cout << ' ' << gsl_vector_get(solver->f, i);
   std::cout << '\n';
}

template <std::size_t dimension>
double Root_finder<dimension>::get_root(std::size_t i) const
{
   assert(i < dimension && "Root_finder<>::get_root: index out"
          " of bounds");
   return gsl_vector_get(root, i);
}

template <std::size_t dimension>
int Root_finder<dimension>::solve(const double start[dimension])
{
   return (find_root(start) == GSL_SUCCESS ?
           EWSB_solver::SUCCESS : EWSB_solver::FAIL);
}

template <std::size_t dimension>
double Root_finder<dimension>::get_solution(unsigned i)
{
   return get_root(i);
}

} // namespace flexiblesusy

#endif
