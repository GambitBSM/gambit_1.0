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

#ifndef ERROR_H
#define ERROR_H

#include <string>
#include <sstream>

namespace flexiblesusy {

class Error {
public:
   virtual ~Error() {}
   virtual std::string what() const = 0;
};

/**
 * @class SetupError
 * @brief Spectrum generator was not setup correctly
 */
class SetupError : public Error {
public:
   explicit SetupError(const std::string& message_) : message(message_) {}
   virtual ~SetupError() {}
   virtual std::string what() const { return message; }
private:
   std::string message;
};

/**
 * @class NoConvergenceError
 * @brief No convergence while solving the RGEs
 */
class NoConvergenceError : public Error {
public:
   explicit NoConvergenceError(unsigned number_of_iterations_)
      : number_of_iterations(number_of_iterations_) {}
   virtual ~NoConvergenceError() {}
   virtual std::string what() const {
      std::stringstream message;
      message << "RGFlow<Two_scale>::NoConvergenceError: no convergence"
              << " after " << number_of_iterations << " iterations";
      return message.str();
   }
   unsigned get_number_of_iterations() { return number_of_iterations; }
private:
   unsigned number_of_iterations;
};

/**
 * @class NonPerturbativeRunningError
 * @brief Non-perturbative RG running
 */
class NonPerturbativeRunningError : public Error {
public:
   explicit NonPerturbativeRunningError(double scale_)
      : scale(scale_)
      {}
   virtual ~NonPerturbativeRunningError() {}
   virtual std::string what() const {
      std::stringstream message;
      message << "NonPerturbativeRunningError: non-perturbative running"
         " to scale " << scale;
      return message.str();
   }
private:
   double scale;
};

/**
 * @class OutOfMemoryError
 * @brief Not enough memory
 */
class OutOfMemoryError : public Error {
public:
   explicit OutOfMemoryError(std::string msg_)
      : msg(msg_)
      {}
   virtual ~OutOfMemoryError() {}
   virtual std::string what() const {
      std::stringstream message;
      message << "OutOfMemoryError: Not enought memory: " << msg;
      return message.str();
   }
private:
   std::string msg;
};

}

#endif
