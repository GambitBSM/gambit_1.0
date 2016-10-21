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

#ifndef PHYSICAL_INPUT_H
#define PHYSICAL_INPUT_H

#include <string>
#include <vector>
#include <Eigen/Core>

namespace flexiblesusy {

/**
 * @class Physical_input
 * @brief stores physical input parameters
 *
 * This class stores physical input parameters, which are not defined
 * in the SLHA input block SMINPUTS.
 */
class Physical_input {
public:
   /// available physical input parameters
   enum Input : unsigned {
      alpha_em_0,                ///< [0] alpha_em(0), thompson limit
      mh_pole,                   ///< [1] SM Higgs pole mass
      NUMBER_OF_INPUT_PARAMETERS ///< number of possible input parameters
   };

   Physical_input();
   ~Physical_input() {}

   double get(Input) const;    ///< get value of input parameter
   Eigen::ArrayXd get() const; ///< get all input parameter values
   static std::vector<std::string> get_names(); ///< get names of input parameters
   void set(Input, double);   ///< set value of input parameter
   void set(const Eigen::ArrayXd&); ///< set all input parameter values
   void reset();              ///< resets all input parameters to their defaults

private:
   double values[NUMBER_OF_INPUT_PARAMETERS]; ///< input parameter values
};

} // namespace flexiblesusy

#endif
