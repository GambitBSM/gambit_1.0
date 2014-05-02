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

#ifndef BETAFUNCTION_H
#define BETAFUNCTION_H

#include "rk.hpp"

namespace flexiblesusy {

class Beta_function {
public:
   Beta_function();
   virtual ~Beta_function() {}

   void set_scale(double s) { scale = s; }
   void set_number_of_parameters(unsigned pars) { num_pars = pars; }
   void set_loops(unsigned l) { loops = l; }
   void set_thresholds(unsigned t) { thresholds = t; }

   double get_scale() const { return scale; }
   unsigned get_number_of_parameters() const { return num_pars; }
   unsigned get_loops() const { return loops; }
   unsigned get_thresholds() const { return thresholds; }

   virtual const Eigen::ArrayXd display() const = 0;
   virtual void set(const Eigen::ArrayXd&) = 0;
   virtual Eigen::ArrayXd beta() const = 0;

   virtual void run(double, double, double eps = -1.0);
   virtual void run_to(double, double eps = -1.0);

private:
   unsigned num_pars;    ///< Number of parameters
   unsigned loops;       ///< To what order does the RG evolution run
   unsigned thresholds;  ///< thresholds
   double scale;         ///< Renormalisation scale
   double tolerance;     ///< running tolerance
   double min_tolerance; ///< minimum tolerance allowed

   void call_rk(double, double, Eigen::ArrayXd&,
                runge_kutta::Derivs, double eps = -1.0);
   Eigen::ArrayXd derivatives(double, const Eigen::ArrayXd&);
   double get_tolerance(double eps);
};

}

#endif
