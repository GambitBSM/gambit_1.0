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

// File generated at Wed 3 Dec 2014 11:46:06

#ifndef MSSMNoFVatMGUT_TWO_SCALE_SUSY_SCALE_CONSTRAINT_H
#define MSSMNoFVatMGUT_TWO_SCALE_SUSY_SCALE_CONSTRAINT_H

#include "MSSMNoFVatMGUT_susy_scale_constraint.hpp"
#include "MSSMNoFVatMGUT_input_parameters.hpp"
#include "two_scale_constraint.hpp"

namespace flexiblesusy {

template <class T>
class MSSMNoFVatMGUT;

class Two_scale;

template<>
class MSSMNoFVatMGUT_susy_scale_constraint<Two_scale> : public Constraint<Two_scale> {
public:
   MSSMNoFVatMGUT_susy_scale_constraint();
   MSSMNoFVatMGUT_susy_scale_constraint(MSSMNoFVatMGUT<Two_scale>*, const MSSMNoFVatMGUT_input_parameters&);
   virtual ~MSSMNoFVatMGUT_susy_scale_constraint();
   virtual void apply();
   virtual double get_scale() const;
   virtual void set_model(Two_scale_model*);

   void clear();
   double get_initial_scale_guess() const;
   void initialize();
   void set_input_parameters(const MSSMNoFVatMGUT_input_parameters&);

private:
   double scale;
   double initial_scale_guess;
   MSSMNoFVatMGUT<Two_scale>* model;
   MSSMNoFVatMGUT_input_parameters inputPars;

   void update_scale();
};

} // namespace flexiblesusy

#endif
