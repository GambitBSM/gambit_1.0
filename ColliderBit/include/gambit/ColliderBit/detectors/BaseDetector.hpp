#pragma once
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  The BaseDetector class.

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

    /// An abstract base class for detector simulators within ColliderBit.
    template <typename EventIn, typename EventOut>
    struct BaseDetector {
      typedef EventIn EventInType;
      typedef EventOut EventOutType;

      /// @name Construction, Destruction, and Recycling
      //@{
        BaseDetector() {}
        virtual ~BaseDetector() {}
        /// Reset this instance for reuse, avoiding the need for "new" or "delete".
        virtual void clear() { }
      //@}

      /// @name Event detection simulation
      //@{
        /// Perform the detector simulation on the next collider event by reference.
        virtual void processEvent(const EventIn&, EventOut&) const = 0;
      //@}

      /// @name (Re-)Initialization functions
      //@{
        /// Settings parsing and initialization for each sub-class.
        virtual void init(const std::vector<std::string>&) {};
        /// General init for any collider of this type - no settings version.
        virtual void init() { };
      //@}
    };

  }
}
