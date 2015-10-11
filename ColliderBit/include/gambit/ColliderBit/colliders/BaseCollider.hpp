#pragma once
#include <string>
#include <vector>
#include <exception>

#include "gambit/Elements/shared_types.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief An abstract base class for collider simulators within ColliderBit.
    template <typename EventT>
    struct BaseCollider {
      /// @name Member variables
      //@{
        typedef EventT EventType;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BaseCollider() { }
        virtual ~BaseCollider() { }
        /// @brief Reset this instance for reuse, avoiding the need for "new" or "delete".
        virtual void clear() { }
      //@}

      /// @name Event generation and cross section functions
      //@{
        /// @brief Fill in the next collider event by reference.
        virtual void nextEvent(EventT& event) const = 0;
        /// @brief Report the cross section (in pb) at the end of the subprocess.
        virtual double xsec_pb() const = 0;
        /// @brief Report the cross section uncertainty (in pb) at the end of the subprocess.
        virtual double xsecErr_pb() const = 0;
      //@}

      /// @name (Re-)Initialization functions
      //@{
        /// @brief General init for any collider of this type.
        virtual void init(const std::vector<std::string>&) {};
        /// @brief General init for any collider of this type - no settings version.
        virtual void init() { };
      //@}
    };

  }
}
