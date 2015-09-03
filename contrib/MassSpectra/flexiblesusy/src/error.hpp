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
   unsigned get_number_of_iterations() const { return number_of_iterations; }
private:
   unsigned number_of_iterations;
};

/**
 * @class NoRhoConvergenceError
 * @brief No convergence while calculating the rho-hat parameter
 */
class NoRhoConvergenceError : public Error {
public:
   explicit NoRhoConvergenceError(unsigned number_of_iterations_,
                                  double sin_theta_, double rho_hat_)
      : number_of_iterations(number_of_iterations_)
      , sin_theta(sin_theta_)
      , rho_hat(rho_hat_)
      {}
   virtual ~NoRhoConvergenceError() {}
   virtual std::string what() const {
      std::stringstream message;
      message << "RGFlow<Two_scale>::NoRhoConvergenceError: no convergence"
              << " after " << number_of_iterations << " iterations "
              << " (sin(theta)=" << sin_theta << ", rho-hat=" << rho_hat
              << ")";
      return message.str();
   }
   unsigned get_number_of_iterations() const { return number_of_iterations; }
   double get_sin_theta() const { return sin_theta; }
   double get_rho_hat() const { return rho_hat; }
private:
   unsigned number_of_iterations;
   double sin_theta, rho_hat;
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

/**
 * @class FailedDiagonalizationError
 * @brief Failed diagonalization of a matrix
 */
class FailedDiagonalizationError : public Error {
public:
   explicit FailedDiagonalizationError()
      {}
   virtual ~FailedDiagonalizationError() {}
   virtual std::string what() const {
      return std::string("FailedDiagonalizationError:"
                         " Mass matrix diagonalization failed");
   }
};

}

#endif
