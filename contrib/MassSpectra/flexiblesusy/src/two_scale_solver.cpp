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

#include "two_scale_solver.hpp"
#include "two_scale_constraint.hpp"
#include "two_scale_convergence_tester.hpp"
#include "two_scale_initial_guesser.hpp"
#include "two_scale_matching.hpp"
#include "two_scale_model.hpp"
#include "two_scale_running_precision.hpp"
#include "logger.hpp"
#include "error.hpp"
#include "functors.hpp"

#include <cmath>
#include <algorithm>
#include <iterator>
#include <limits>
#include <cassert>
#include <sstream>

/**
 * @file two_scale_solver.cpp
 * @brief contains the implementation of the RGFlow<Two_scale> class members
 */

namespace flexiblesusy {

/**
 * Create empty two scale solver.
 * The RG running precision is set to the default value 0.001.
 */
RGFlow<Two_scale>::RGFlow()
   : models()
   , iteration(0)
   , convergence_tester(NULL)
   , initial_guesser(NULL)
   , running_precision_calculator(NULL)
   , running_precision(1.0e-3)
   , model_at_this_scale(NULL)
{
}

RGFlow<Two_scale>::~RGFlow()
{
   delete_models();
}

/**
 * @brief Solves the boundary value problem.
 *
 * At first the initial_guess() is called.  Afterwards, the function
 * iteratively runs the tower up and down and imposes the boundary
 * conditions.  The iteration stops if either the maximum number of
 * iterations is reached or the precision goal is achieved (defined by
 * the convergence_tester).
 */
void RGFlow<Two_scale>::solve()
{
   check_setup();

   const unsigned max_iterations = get_max_iterations();
   if (models.empty() || max_iterations == 0)
      return;

   initial_guess();

   iteration = 0;
   bool accuracy_reached = false;
   while (iteration < max_iterations && !accuracy_reached) {
      update_running_precision();
      clear_problems();
      run_up();
      run_down();
      accuracy_reached = accuracy_goal_reached();
      ++iteration;
   }

   apply_lowest_constraint();

   if (!accuracy_reached)
      throw NoConvergenceError(max_iterations);

   VERBOSE_MSG("convergence reached after " << iteration << " iterations");
}

/**
 * Sanity checks the models and boundary condtitions.
 */
void RGFlow<Two_scale>::check_setup() const
{
   for (size_t m = 0; m < models.size(); ++m) {
      const TModel* model = models[m];
      if (!model->model) {
         std::stringstream message;
         message << "RGFlow<Two_scale>::Error: model pointer ["
                 << m << "] is NULL";
         throw SetupError(message.str());
      }

      // check wether last model has a non-zero matching condition
      if (m + 1 == models.size()) {
         if (model->matching_condition)
            WARNING("the matching condition of the " << model->model->name()
                    << " is non-zero but will not be used");
      } else {
         if (model->matching_condition == NULL) {
            std::stringstream message;
            message << "RGFlow<Two_scale>::Error: matching condition "
                    << "of the " << model->model->name() << " to the "
                    << models[m + 1]->model->name() << " is NULL";
            throw SetupError(message.str());
         }
      }
   }

   if (!convergence_tester) {
      throw SetupError("RGFlow<Two_scale>::Error: convergence tester must "
                       "not be NULL");
   }
}

void RGFlow<Two_scale>::clear_problems()
{
   VERBOSE_MSG("> clearing problems ...");

   const size_t number_of_models = models.size();
   for (size_t m = 0; m < number_of_models; ++m) {
      TModel* model = models[m];
      model->model->clear_problems();
   }
}

void RGFlow<Two_scale>::delete_models()
{
   for_each(models.begin(), models.end(), Delete_object());
}

/**
 * Does the initial guess by calling the guess() method of the initial
 * guesser (if given).
 */
void RGFlow<Two_scale>::initial_guess()
{
   if (initial_guesser)
      initial_guesser->guess();
}

/**
 * Run the model tower to the highest scale.  Thereby all upwards
 * constraints are imposed (by calling the apply() functions) and the
 * matching conditions are applied (by calling
 * match_low_to_high_scale_model() functions).
 */
void RGFlow<Two_scale>::run_up()
{
   VERBOSE_MSG("> running tower up (iteration " << iteration << ") ...");
   const size_t number_of_models = models.size();
   for (size_t m = 0; m < number_of_models; ++m) {
      TModel* model = models[m];
      model->model->set_precision(get_precision());
      VERBOSE_MSG("> \tselecting model " << model->model->name());
      // apply all constraints
      const size_t n_upwards_constraints = model->upwards_constraints.size();
      for (size_t c = 0; c < n_upwards_constraints; ++c) {
         Constraint<Two_scale>* constraint = model->upwards_constraints[c];
         const double scale = constraint->get_scale();
         VERBOSE_MSG("> \t\tselecting constraint " << c << " at scale " << scale);
         VERBOSE_MSG("> \t\t\trunning model to scale " << scale);
         model->model->run_to(scale);
         VERBOSE_MSG("> \t\t\tapplying constraint");
         constraint->apply();
      }
      // apply matching condition if this is not the last model
      if (m != number_of_models - 1) {
         VERBOSE_MSG("> \tmatching to model " << models[m + 1]->model->name());
         Matching<Two_scale>* mc = model->matching_condition;
         const double scale = mc->get_scale();
         VERBOSE_MSG("> \t\t\trunning model to scale " << scale);
         model->model->run_to(scale);
         VERBOSE_MSG("> \t\t\tapplying matching condition");
         mc->match_low_to_high_scale_model();
      }
   }
   VERBOSE_MSG("> running up finished");
}

/**
 * Run the model tower to the lowest scale.  Thereby all downwards
 * constraints are imposed (by calling the apply() functions) and the
 * matching conditions are applied (by calling
 * match_high_to_low_scale_model() functions).
 */
void RGFlow<Two_scale>::run_down()
{
   assert(models.size() > 0 && "model size must not be zero");
   VERBOSE_MSG("< running tower down ...");
   const size_t number_of_models = models.size();
   for (long m = number_of_models - 1; m >= 0; --m) {
      TModel* model = models[m];
      VERBOSE_MSG("< \tselecting model " << model->model->name());
      // apply all constraints:
      // If m is the last model, do not apply the highest constraint,
      // because it was already appied when we ran up.
      const size_t c_begin = (m + 1 == (long)number_of_models ? 1 : 0);
      const size_t c_end = model->downwards_constraints.size();
      for (size_t c = c_begin; c < c_end; ++c) {
         Constraint<Two_scale>* constraint = model->downwards_constraints[c];
         const double scale = constraint->get_scale();
         VERBOSE_MSG("< \t\tselecting constraint " << c << " at scale " << scale);
         VERBOSE_MSG("< \t\t\trunning model to scale " << scale);
         model->model->run_to(scale);
         // If m is the lowest energy model, do not apply the lowest
         // constraint, because it will be applied when we run up next
         // time.
         if (m != 0 || c + 1 != c_end) {
            VERBOSE_MSG("< \t\t\tapplying constraint");
            constraint->apply();
         }
      }
      // apply matching condition if this is not the first model
      if (m > 0) {
         Matching<Two_scale>* mc = models[m - 1]->matching_condition;
         VERBOSE_MSG("< \tmatching to model " << models[m - 1]->model->name());
         const double scale = mc->get_scale();
         VERBOSE_MSG("< \t\t\trunning model to scale " << scale);
         model->model->run_to(scale);
         VERBOSE_MSG("> \t\t\tapplying matching condition");
         mc->match_high_to_low_scale_model();
      }
   }
   VERBOSE_MSG("< running down finished");
}

/**
 * Impose the constraint at the lowest energy scale (by calling the
 * apply() function).
 */
void RGFlow<Two_scale>::apply_lowest_constraint()
{
   if (models.empty())
      return;

   TModel* model = models[0];
   model_at_this_scale = model->model;

   if (model->downwards_constraints.empty())
      return;

   Constraint<Two_scale>* constraint = model->downwards_constraints.back();
   const double scale = constraint->get_scale();
   VERBOSE_MSG("| selecting constraint 0 at scale " << scale);
   VERBOSE_MSG("| \trunning model " << model->model->name() << " to scale " << scale);
   model->model->run_to(scale);
   VERBOSE_MSG("| \tapplying constraint");
   constraint->apply();
}

/**
 * Returns the precision of the RG running.
 *
 * @return RG running precision
 */
double RGFlow<Two_scale>::get_precision()
{
   return running_precision;
}

/**
 * Recalculates the precision of the RG running using the user defined
 * Two_scale_running_precision_calculator class.
 */
void RGFlow<Two_scale>::update_running_precision()
{
   if (running_precision_calculator)
      running_precision = running_precision_calculator->get_precision(iteration);
}

/**
 * Add a model and the corresponding model constraints.  Note that the
 * order of the model registration is important: Models that are added
 * later are assumed to be valid at a higher scale.  The same is true
 * for the constraints: they are assumed to be ordered from low to
 * high energies.
 *
 * @param model model
 * @param constraints vector of model constraints
 */
void RGFlow<Two_scale>::add_model(Two_scale_model* model,
                                  const std::vector<Constraint<Two_scale>*>& constraints)
{
   add_model(model, NULL, constraints);
}

/**
 * Add a model and the corresponding model constraints.  With this
 * function the user can use different contraints for the up and down
 * running of the model tower.
 *
 * @param model model
 * @param upwards_constraints model constraints for running up
 * @param downwards_constraints model constraints for running down
 */
void RGFlow<Two_scale>::add_model(Two_scale_model* model,
                                  const std::vector<Constraint<Two_scale>*>& upwards_constraints,
                                  const std::vector<Constraint<Two_scale>*>& downwards_constraints)
{
   add_model(model, NULL, upwards_constraints, downwards_constraints);
}

/**
 * Add a model, the corresponding model constraints and the matching
 * condition to the next model.
 *
 * @param model model
 * @param mc matching condition to the next higher model
 * @param constraints vector of model constraints
 */
void RGFlow<Two_scale>::add_model(Two_scale_model* model,
                                  Matching<Two_scale>* mc,
                                  const std::vector<Constraint<Two_scale>*>& constraints)
{
   // create vector of downward constraints
   std::vector<Constraint<Two_scale>*> downward_constraints;
   std::reverse_copy(constraints.begin(), constraints.end(),
                     std::back_inserter(downward_constraints));

   add_model(model, mc, constraints, downward_constraints);
}

/**
 * Add a model, the corresponding model constraints and the matching
 * condition to the next higher model.  With this function the user
 * can use different contraints for the up and down running of the
 * model tower.
 *
 * @param model model
 * @param mc matching condition to the next higher model
 * @param upwards_constraints model constraints for running up
 * @param downwards_constraints model constraints for running down
 */
void RGFlow<Two_scale>::add_model(Two_scale_model* model,
                                  Matching<Two_scale>* mc,
                                  const std::vector<Constraint<Two_scale>*>& upwards_constraints,
                                  const std::vector<Constraint<Two_scale>*>& downwards_constraints)
{
   TModel* new_model = new TModel(model, upwards_constraints, downwards_constraints, mc);

   for (Constraint_container::iterator it = new_model->upwards_constraints.begin(),
           end = new_model->upwards_constraints.end(); it != end; ++it)
      (*it)->set_model(model);

   for (Constraint_container::iterator it = new_model->downwards_constraints.begin(),
           end = new_model->downwards_constraints.end(); it != end; ++it)
      (*it)->set_model(model);

   if (!models.empty())
      models.back()->matching_condition->set_models(models.back()->model,
                                                    model);

   models.push_back(new_model);
}

/**
 * Returns the value returned by the accuracy_goal_reached() method of
 * the convergence tester.
 */
bool RGFlow<Two_scale>::accuracy_goal_reached() const
{
   return convergence_tester->accuracy_goal_reached();
}

/**
 * Set the convergence tester to be used during the iteration.
 *
 * @param convergence_tester_ the convergence tester to be used
 */
void RGFlow<Two_scale>::set_convergence_tester(Convergence_tester<Two_scale>* convergence_tester_)
{
   convergence_tester = convergence_tester_;
}

void RGFlow<Two_scale>::set_initial_guesser(Initial_guesser<Two_scale>* ig)
{
   initial_guesser = ig;
}

/**
 * Set RG running precision calculator.
 *
 * @param rp running precision calculator
 */
void RGFlow<Two_scale>::set_running_precision(Two_scale_running_precision* rp)
{
   running_precision_calculator = rp;
}

/**
 * Returns the number of performed iterations
 * @return number of performed iterations
 */
unsigned int RGFlow<Two_scale>::number_of_iterations_done() const
{
   return iteration;
}

/**
 * Returns the maximum number of iterations set in the convergence
 * tester.
 */
unsigned int RGFlow<Two_scale>::get_max_iterations() const
{
   return convergence_tester->max_iterations();
}

/**
 * @brief resets the solver to the initial condition
 *
 * The pointers to the models, matching conditions, convergence
 * tester, initial guesser, and running precision calculator are set
 * to zero.  The runnin precision is set to the default value 0.001.
 */
void RGFlow<Two_scale>::reset()
{
   delete_models();
   models.clear();

   iteration = 0;
   convergence_tester = NULL;
   initial_guesser = NULL;
   running_precision_calculator = NULL;
   running_precision = 1.0e-3;
   model_at_this_scale = NULL;
}

/**
 * Run the model tower to the given scale.
 *
 * @param scale scale to run to
 */
void RGFlow<Two_scale>::run_to(double scale)
{
   // find model which is defined at `scale'
   model_at_this_scale = NULL;
   const size_t number_of_models = models.size();

   for (size_t m = 0; m < models.size(); ++m) {
      const TModel* model = models[m];
      double highest_scale, lowest_scale;

      if (!model) {
         std::ostringstream msg;
         msg << "RGFlow<Two_scale>::run_to: pointer to model " << m
             << " is zero";
         throw SetupError(msg.str());
      }

      if (m != number_of_models - 1) {
         // if this is not the last model, the matching condition is
         // the highest scale
         const Matching<Two_scale>* mc = model->matching_condition;
         if (!mc) {
            std::ostringstream msg;
            msg << "RGFlow<Two_scale>::run_to: pointer to matching condition"
                  " of model " << m << " is zero";
            throw SetupError(msg.str());
         }
         highest_scale = mc->get_scale();
      } else {
         // otherwise the last constraint is at the highest scale
         if (model->upwards_constraints.empty())
            highest_scale = std::numeric_limits<double>::max();
         else
            highest_scale = model->upwards_constraints.back()->get_scale();
      }

      if (m > 0) {
         // if this is not the first model, the previous matching
         // condition is the lowest scale
         lowest_scale = models[m-1]->matching_condition->get_scale();
      } else {
         // otherwise the first constraint is at the lowest scale
         if (model->upwards_constraints.empty())
            lowest_scale = 0.;
         else
            lowest_scale = model->upwards_constraints[0]->get_scale();
      }

      if (lowest_scale <= scale && scale <= highest_scale) {
         model_at_this_scale = model->model;
         break;
      }
   }

   if (model_at_this_scale)
      model_at_this_scale->run_to(scale);
   else {
      std::ostringstream msg;
      msg << "No model at scale " << scale << " found!";
      throw SetupError(msg.str());
   }
}

/**
 * Returns the pointer to the model at the current scale.
 */
Two_scale_model* RGFlow<Two_scale>::get_model() const
{
   return model_at_this_scale;
}

} // namespace flexiblesusy
