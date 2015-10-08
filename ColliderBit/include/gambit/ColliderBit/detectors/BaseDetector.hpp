#pragma once
#include <string>
#include <vector>
#include <exception>
#include <memory>

#include "gambit/Elements/shared_types.hpp"
#include "gambit/ColliderBit/Py8Utils.hpp"

#include "HEPUtils/Event.h"
#include "HEPUtils/Particle.h"
#include "HEPUtils/Jet.h"
#include "MCUtils/PIDCodes.h"

namespace Gambit {
  namespace ColliderBit {


    /// @note Abstract base class BaseDetector
    template <typename EventIn, typename EventOut>
    struct BaseDetector {
      /// @name Member variables
      //@{
        typedef EventIn EventInType;
        typedef EventOut EventOutType;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BaseDetector() {}
        virtual ~BaseDetector() {}
        /// @brief Reset this instance for reuse, avoiding the need for "new" or "delete".
        virtual void clear() { }
      //@}

      /// @name Event detection simulation
      //@{
        virtual void processEvent(const EventIn&, EventOut&) const = 0;
      //@}

      /// @name (Re-)Initialization functions
      //@{
        /// @brief Settings parsing and initialization for each sub-class.
        virtual void init(const std::vector<std::string>&) {};
        /// @brief General init for any collider of this type - no settings version.
        virtual void init() { };
      //@}

    };


  }
}
