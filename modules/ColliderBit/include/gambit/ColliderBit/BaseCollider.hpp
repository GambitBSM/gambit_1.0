#pragma once
#include <string>
#include <vector>
#include <exception>

#include "gambit/Utils/shared_types.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief The abstract base class for collider simulators within ColliderBit.
    template <typename EventT>
    class BaseCollider {
      /// @name Member variables and custom exceptions
      //@{
      public:
        typedef EventT EventType;
      protected:
        class UnknownTagError : public std::exception {
          virtual const char* what() const throw() {
            return "Unknown Tag used in template specialization.";
          }
        };
      //@}

      public:
        BaseCollider() { }
        virtual ~BaseCollider() { }

      /// @name (Re-)Initialization functions
      //@{
        /// @brief Settings parsing and initialization for each sub-class
        virtual void init(const std::vector<std::string>& settings) = 0;
        /// @brief Special, hard-coded init. Template specializations go in cpp file.
        template <typename Tag>
        void specialize() { throw UnknownTagError(); }
      //@}

      /// @name Event generation functions - Required to be const by Gambit
      //@{
        /// @brief Fill in the next collider event by reference according to a tag.
        template <typename Tag>
        void nextEventByTag(EventT& event) const { throw UnknownTagError(); }
        /// @brief Fill in the next collider event by reference without a tag.
        virtual void nextEvent(EventT& event) const = 0;
      //@}
    };

  }
}
