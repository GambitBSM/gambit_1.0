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

// File generated at Sat 27 Aug 2016 12:40:38

#ifndef HSSUSY_TWO_SCALE_SUSY_SCALE_CONSTRAINT_H
#define HSSUSY_TWO_SCALE_SUSY_SCALE_CONSTRAINT_H

#include "HSSUSY_susy_scale_constraint.hpp"
#include "HSSUSY_input_parameters.hpp"
#include "two_scale_constraint.hpp"
#include "lowe.h"

namespace flexiblesusy {

template <class T>
class HSSUSY;

class Two_scale;

template<>
class HSSUSY_susy_scale_constraint<Two_scale> : public Constraint<Two_scale> {
public:
   HSSUSY_susy_scale_constraint();
   HSSUSY_susy_scale_constraint(HSSUSY<Two_scale>*, const softsusy::QedQcd&);
   virtual ~HSSUSY_susy_scale_constraint();
   virtual void apply();
   virtual double get_scale() const;
   virtual void set_model(Two_scale_model*);

   void clear();
   double get_initial_scale_guess() const;
   const HSSUSY_input_parameters& get_input_parameters() const;
   HSSUSY<Two_scale>* get_model() const;
   void initialize();
   const softsusy::QedQcd& get_sm_parameters() const;
   void set_sm_parameters(const softsusy::QedQcd&);

protected:
   void update_scale();

private:
   double scale;
   double initial_scale_guess;
   HSSUSY<Two_scale>* model;
   softsusy::QedQcd qedqcd;
};

} // namespace flexiblesusy

#endif
