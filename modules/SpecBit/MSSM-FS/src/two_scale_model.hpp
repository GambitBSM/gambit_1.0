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

#ifndef TWO_SCALE_MODEL_H
#define TWO_SCALE_MODEL_H

#include <string>
#include <ostream>

namespace flexiblesusy {

class Two_scale_model {
public:
   virtual ~Two_scale_model() {}
   virtual void calculate_spectrum() = 0;
   virtual std::string name() const { return "unnamed"; }
   virtual void run_to(double, double eps = -1.0) = 0;
   virtual void print(std::ostream& out) const { out << "Model: " << name(); }
   friend std::ostream& operator<<(std::ostream& out, const Two_scale_model& model) {
      model.print(out);
      return out;
   }
   virtual void set_precision(double) = 0;
};

}

#endif
