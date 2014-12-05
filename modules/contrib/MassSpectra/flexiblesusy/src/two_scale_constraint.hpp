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

#ifndef TWO_SCALE_CONSTRAINT_H
#define TWO_SCALE_CONSTRAINT_H

#include "constraint.hpp"
#include "logger.hpp"
#include <typeinfo>

namespace flexiblesusy {

class Two_scale;
class Two_scale_model;

template<>
class Constraint<Two_scale> {
public:
   virtual ~Constraint() {}
   virtual void apply() = 0;                    ///< apply constraint
   virtual double get_scale() const = 0;        ///< get scale where to apply
   virtual void set_model(Two_scale_model*) = 0; ///< set model where to apply the constraint
};

template <class TargetModel, class TwoScaleModel>
TargetModel cast_model(TwoScaleModel abstract_model)
{
#ifdef ENABLE_DEBUG
   TargetModel tmp = dynamic_cast<TargetModel>(abstract_model);
   if (!tmp) {
      FATAL("model " << abstract_model << " is not of type "
            << typeid(TargetModel).name());
   }
   return tmp;
#else
   return static_cast<TargetModel>(abstract_model);
#endif
}

} // namespace flexiblesusy

#endif
