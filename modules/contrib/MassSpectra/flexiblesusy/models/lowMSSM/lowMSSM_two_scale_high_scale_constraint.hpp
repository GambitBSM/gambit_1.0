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

// File generated at Mon 1 Jun 2015 13:17:25

#ifndef lowMSSM_TWO_SCALE_HIGH_SCALE_CONSTRAINT_H
#define lowMSSM_TWO_SCALE_HIGH_SCALE_CONSTRAINT_H

#include "lowMSSM_high_scale_constraint.hpp"
#include "lowMSSM_input_parameters.hpp"
#include "two_scale_constraint.hpp"

namespace flexiblesusy {

template <class T>
class lowMSSM;

class Two_scale;

template<>
class lowMSSM_high_scale_constraint<Two_scale> : public Constraint<Two_scale> {
public:
   lowMSSM_high_scale_constraint();
   lowMSSM_high_scale_constraint(lowMSSM<Two_scale>*);
   virtual ~lowMSSM_high_scale_constraint();
   virtual void apply();
   virtual double get_scale() const;
   virtual void set_model(Two_scale_model*);

   void clear();
   double get_initial_scale_guess() const;
   const lowMSSM_input_parameters& get_input_parameters() const;
   lowMSSM<Two_scale>* get_model() const;
   void initialize();
   void set_scale(double); ///< fix unification scale (0 = unfixed)

protected:
   void update_scale();

private:
   double scale;
   double initial_scale_guess;
   lowMSSM<Two_scale>* model;
};

} // namespace flexiblesusy

#endif
