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

// File generated at Sat 27 Aug 2016 12:40:46

#ifndef SSM_SPECTRUM_GENERATOR_H
#define SSM_SPECTRUM_GENERATOR_H

#include "SSM_spectrum_generator_interface.hpp"
#include "SSM_two_scale_high_scale_constraint.hpp"
#include "SSM_two_scale_susy_scale_constraint.hpp"
#include "SSM_two_scale_low_scale_constraint.hpp"
#include "SSM_two_scale_convergence_tester.hpp"
#include "SSM_two_scale_initial_guesser.hpp"
#include "SSM_input_parameters.hpp"
#include "SSM_info.hpp"

#include "lowe.h"
#include "error.hpp"
#include "numerics2.hpp"
#include "two_scale_running_precision.hpp"
#include "two_scale_solver.hpp"

#include <limits>

namespace flexiblesusy {

template <class T>
class SSM_spectrum_generator
   : public SSM_spectrum_generator_interface<T> {
public:
   SSM_spectrum_generator()
      : SSM_spectrum_generator_interface<T>()
      , high_scale_constraint()
      , susy_scale_constraint()
      , low_scale_constraint()
      , high_scale(0.)
      , susy_scale(0.)
      , low_scale(0.)
   {}
   virtual ~SSM_spectrum_generator() {}

   double get_high_scale() const { return high_scale; }
   double get_susy_scale() const { return susy_scale; }
   double get_low_scale()  const { return low_scale;  }

   virtual void run(const softsusy::QedQcd&, const SSM_input_parameters&);
   void write_running_couplings(const std::string& filename = "SSM_rgflow.dat") const;

private:
   SSM_high_scale_constraint<T> high_scale_constraint;
   SSM_susy_scale_constraint<T> susy_scale_constraint;
   SSM_low_scale_constraint<T>  low_scale_constraint;
   double high_scale, susy_scale, low_scale;
};

/**
 * @brief Run's the RG solver with the given input parameters
 *
 * This function sets up the RG solver using a high-scale, susy-scale
 * and low-scale constraint.  Afterwards the solver is run until
 * convergence is reached or an error occours.  Finally the particle
 * spectrum (pole masses) is calculated.
 *
 * @param qedqcd Standard Model input parameters
 * @param input model input parameters
 */
template <class T>
void SSM_spectrum_generator<T>::run(const softsusy::QedQcd& qedqcd,
                                const SSM_input_parameters& input)
{
   SSM<T>& model = this->model;
   model.clear();
   model.set_input_parameters(input);
   model.do_calculate_sm_pole_masses(this->settings.get(Spectrum_generator_settings::calculate_sm_masses));
   model.do_force_output(this->settings.get(Spectrum_generator_settings::force_output));
   model.set_loops(this->settings.get(Spectrum_generator_settings::beta_loop_order));
   model.set_thresholds(this->settings.get(Spectrum_generator_settings::threshold_corrections_loop_order));
   model.set_zero_threshold(this->settings.get(Spectrum_generator_settings::beta_zero_threshold));

   high_scale_constraint.clear();
   susy_scale_constraint.clear();
   low_scale_constraint .clear();

   // needed for constraint::initialize()
   high_scale_constraint.set_model(&model);
   susy_scale_constraint.set_model(&model);
   low_scale_constraint .set_model(&model);

   susy_scale_constraint.set_sm_parameters(qedqcd);
   low_scale_constraint .set_sm_parameters(qedqcd);

   high_scale_constraint.initialize();
   susy_scale_constraint.initialize();
   low_scale_constraint .initialize();

   std::vector<Constraint<T>*> upward_constraints(2);
   upward_constraints[0] = &low_scale_constraint;
   upward_constraints[1] = &high_scale_constraint;

   std::vector<Constraint<T>*> downward_constraints(3);
   downward_constraints[0] = &high_scale_constraint;
   downward_constraints[1] = &susy_scale_constraint;
   downward_constraints[2] = &low_scale_constraint;

   SSM_convergence_tester<T> convergence_tester(
      &model, this->settings.get(Spectrum_generator_settings::precision));
   if (this->settings.get(Spectrum_generator_settings::max_iterations) > 0)
      convergence_tester.set_max_iterations(
         this->settings.get(Spectrum_generator_settings::max_iterations));

   SSM_initial_guesser<T> initial_guesser(&model, qedqcd,
                                                  low_scale_constraint,
                                                  susy_scale_constraint,
                                                  high_scale_constraint);

   Two_scale_increasing_precision precision(
      10.0, this->settings.get(Spectrum_generator_settings::precision));

   RGFlow<T> solver;
   solver.set_convergence_tester(&convergence_tester);
   solver.set_running_precision(&precision);
   solver.set_initial_guesser(&initial_guesser);
   solver.add_model(&model, upward_constraints, downward_constraints);

   high_scale = susy_scale = low_scale = 0.;
   this->reached_precision = std::numeric_limits<double>::infinity();

   try {
      solver.solve();
      high_scale = high_scale_constraint.get_scale();
      susy_scale = susy_scale_constraint.get_scale();
      low_scale  = low_scale_constraint.get_scale();
      this->reached_precision = convergence_tester.get_current_accuracy();

      const double mass_scale =
         this->settings.get(Spectrum_generator_settings::pole_mass_scale) != 0. ?
         this->settings.get(Spectrum_generator_settings::pole_mass_scale) : susy_scale;

      model.run_to(mass_scale);
      model.solve_ewsb();
      model.calculate_spectrum();

      // copy calculated W pole mass
      model.get_physical().MVWp
         = low_scale_constraint.get_sm_parameters().displayPoleMW();

      // run to output scale (if scale > 0)
      if (!is_zero(this->parameter_output_scale)) {
         model.run_to(this->parameter_output_scale);
      }
   } catch (const NoConvergenceError&) {
      model.get_problems().flag_no_convergence();
   } catch (const NonPerturbativeRunningError& error) {
      model.get_problems().flag_no_perturbative();
      const int parameter_index = error.get_parameter_index();
      const std::string parameter_name =
         parameter_index < 0 ? "Q" : SSM_info::parameter_names[parameter_index];
      const double parameter_value = error.get_parameter_value();
      const double scale = error.get_scale();
      model.get_problems().flag_non_perturbative_parameter(parameter_name, parameter_value, scale, -1);
   } catch (const NoRhoConvergenceError&) {
      model.get_problems().flag_no_rho_convergence();
   } catch (const Error& error) {
      model.get_problems().flag_thrown(error.what());
   } catch (const std::string& str) {
      model.get_problems().flag_thrown(str);
   } catch (const char* str) {
      model.get_problems().flag_thrown(str);
   } catch (const std::exception& error) {
      model.get_problems().flag_thrown(error.what());
   }
}

/**
 * Create a text file which contains the values of all model
 * parameters at all scales between the low-scale and the high-scale.
 *
 * @param filename name of output file
 */
template <class T>
void SSM_spectrum_generator<T>::write_running_couplings(
   const std::string& filename) const
{
   SSM_spectrum_generator_interface<T>::write_running_couplings(filename, low_scale, high_scale);
}

} // namespace flexiblesusy

#endif
