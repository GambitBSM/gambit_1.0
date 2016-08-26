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

#include "physical_input.hpp"

#include <cassert>

namespace flexiblesusy {

/**
 * Default constructor
 *
 * Calls reset() to initialize all physical input parameters to their
 * default values.
 */
Physical_input::Physical_input()
{
   reset();
}

double Physical_input::get(Input o) const
{
   assert(o < NUMBER_OF_INPUT_PARAMETERS && "Input parameter index out of range");
   return values[o];
}

Eigen::ArrayXd Physical_input::get() const
{
   Eigen::ArrayXd vec(static_cast<unsigned>(NUMBER_OF_INPUT_PARAMETERS));

   for (std::size_t i = 0; i < NUMBER_OF_INPUT_PARAMETERS; i++)
      vec(i) = values[i];

   return vec;
}

std::vector<std::string> Physical_input::get_names()
{
   std::vector<std::string> names(NUMBER_OF_INPUT_PARAMETERS);
   names[0] = "alpha_em(0)";
   names[1] = "mh_pole";
   return names;
}

void Physical_input::set(Input o, double value)
{
   assert(o < NUMBER_OF_INPUT_PARAMETERS && "Input parameter index out of range");
   values[o] = value;
}

void Physical_input::set(const Eigen::ArrayXd& vec)
{
   assert(vec.rows() >= NUMBER_OF_INPUT_PARAMETERS && "Parameters array too small");

   for (std::size_t i = 0; i < NUMBER_OF_INPUT_PARAMETERS; i++)
      values[i] = vec(i);
}

/**
 * Resets all physical input parameters to their default values.
 *
 * | enum                             | possible values              | default value   |
 * |----------------------------------|------------------------------|-----------------|
 * | alpha_em_0                       | any positive double          | 1/137.035999074 |
 * | mh_pole                          | any positive double          | 125.09          |
 */
void Physical_input::reset()
{
   values[alpha_em_0] = 1./137.035999074;
   values[mh_pole] = 125.09;
}

} // namespace flexiblesusy
