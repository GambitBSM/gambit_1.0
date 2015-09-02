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

#ifndef TWO_SCALE_CONVERGENCE_TESTER_DRBAR_H
#define TWO_SCALE_CONVERGENCE_TESTER_DRBAR_H

#include "two_scale_convergence_tester.hpp"
#include "convergence_tester_drbar.hpp"
#include "logger.hpp"

#include <cmath>
#include <limits>

namespace flexiblesusy {

template <template<class Method> class Model>
class Convergence_tester_DRbar<Model<Two_scale> > :
	public Convergence_tester<Two_scale> {
public:
   Convergence_tester_DRbar(Model<Two_scale>*, double);
   virtual ~Convergence_tester_DRbar();

   virtual bool accuracy_goal_reached();
   virtual double get_accuracy_goal() const;
   virtual unsigned int max_iterations() const;
   double get_current_accuracy() const;
   void set_max_iterations(unsigned);           ///< set maximum number of iterations

protected:
   unsigned get_iteration() const;              ///< get current iteration number
   const Model<Two_scale>& get_model() const;                ///< get model
   const Model<Two_scale>& get_last_iteration_model() const; ///< get model state during last iteration
   virtual double max_rel_diff() const = 0;     ///< maximum relative difference to last iteration
   virtual double rel_scale_difference() const; ///< relative scale difference
   virtual double scale_difference() const;     ///< absolute scale difference
   virtual bool scale_has_changed() const;      ///< returns true if scale has changed

private:
   Model<Two_scale>* model;               ///< pointer to model
   Model<Two_scale> last_iteration_model; ///< model state at last iteration
   unsigned int it_count;  ///< iteration
   unsigned int max_it;    ///< maximum number of iterations
   double accuracy_goal;   ///< accuracy goal
   double current_accuracy; ///< current accuracy
};

template <template<class Method> class Model>
Convergence_tester_DRbar<Model<Two_scale> >::Convergence_tester_DRbar
(Model<Two_scale>* model_, double accuracy_goal_)
   : Convergence_tester<Two_scale>()
   , model(model_)
   , last_iteration_model()
   , it_count(0)
   , max_it(static_cast<int>(-log(accuracy_goal_) / log(10.0) * 10))
   , accuracy_goal(accuracy_goal_)
   , current_accuracy(std::numeric_limits<double>::infinity())
{
   assert(model && "Error: Convergence_tester_DRbar<Model<Two_scale>>: "
          "model pointer must not be zero!");
}

template <template<class Method> class Model>
Convergence_tester_DRbar<Model<Two_scale> >::~Convergence_tester_DRbar()
{
}

template <template<class Method> class Model>
bool Convergence_tester_DRbar<Model<Two_scale> >::accuracy_goal_reached()
{
   bool precision_reached;
   if (it_count == 0) {
      // this is the first run => no comparison possible => assume
      // that accuracy goal has not been reached
      precision_reached = false;
   } else {
      const double scale_accuracy_goal = accuracy_goal * 16*M_PI*M_PI;
      if (rel_scale_difference() < scale_accuracy_goal) {
	 current_accuracy = max_rel_diff();
	 precision_reached = current_accuracy < accuracy_goal;
	 VERBOSE_MSG("Convergence_tester_DRbar: current accuracy = "
		     << current_accuracy
		     << ", accuracy goal = " << accuracy_goal);
      } else {
	 precision_reached = false;
         VERBOSE_MSG("scale has changed by " << scale_difference()
		     << " GeV (" << rel_scale_difference()
		     << "), skipping parameter comparison");
      }
   }

   // save old model parameters
   last_iteration_model = *model;
   ++it_count;

   return precision_reached;
}

template <template<class Method> class Model>
double Convergence_tester_DRbar<Model<Two_scale> >::get_accuracy_goal() const
{
   return accuracy_goal;
}

template <template<class Method> class Model>
double Convergence_tester_DRbar<Model<Two_scale> >::get_current_accuracy() const
{
   return current_accuracy;
}

template <template<class Method> class Model>
unsigned Convergence_tester_DRbar<Model<Two_scale> >::get_iteration() const
{
   return it_count;
}

template <template<class Method> class Model>
const Model<Two_scale>&
Convergence_tester_DRbar<Model<Two_scale> >::get_model() const
{
   return *model;
}

template <template<class Method> class Model>
const Model<Two_scale>&
Convergence_tester_DRbar<Model<Two_scale> >::get_last_iteration_model() const
{
   return last_iteration_model;
}

template <template<class Method> class Model>
void Convergence_tester_DRbar<Model<Two_scale> >::set_max_iterations
(unsigned max_it_)
{
   max_it = max_it_;
}

template <template<class Method> class Model>
unsigned int Convergence_tester_DRbar<Model<Two_scale> >::max_iterations()
   const
{
   return max_it;
}

template <template<class Method> class Model>
bool Convergence_tester_DRbar<Model<Two_scale> >::scale_has_changed() const
{
   return !is_zero(scale_difference());
}

template <template<class Method> class Model>
double Convergence_tester_DRbar<Model<Two_scale> >::scale_difference() const
{
   return model->get_scale() - last_iteration_model.get_scale();
}

template <template<class Method> class Model>
double Convergence_tester_DRbar<Model<Two_scale> >::rel_scale_difference()
   const
{
   const double diff = scale_difference();
   const double last_scale = last_iteration_model.get_scale();
   if (!is_zero(last_scale))
      return diff / last_scale;
   return std::numeric_limits<double>::infinity();
}

} // namespace flexiblesusy

#endif
