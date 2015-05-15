#pragma once
#include <string>
#include <vector>
#include <exception>
#include <memory>

#include "gambit/Elements/shared_types.hpp"
#include "gambit/ColliderBit/Py8Utils.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"

#include "HEPUtils/Event.h"
#include "HEPUtils/Particle.h"
#include "HEPUtils/Jet.h"
#include "MCUtils/PIDCodes.h"

namespace Gambit {
  namespace ColliderBit {


    /// @note Abstract base class BaseDetector
    template <typename EventIn, typename EventOut>
    class BaseDetector {
    public:

      typedef EventIn EventInType;
      typedef EventOut EventOutType;
      BaseDetector() {}
      virtual ~BaseDetector() {}

      /// @name Initialization functions
      //@{
      /// @brief Default settings for each sub-class.
      virtual void defaults() = 0;
      /// @brief Settings parsing and initialization for each sub-class.
      virtual void init(const std::vector<std::string>& settings) = 0;
      //@}

      /// @name Event detection simulation. Pure virtual; must override.
      //@{
      virtual void processEvent(const EventIn&, EventOut&) = 0;
      //@}

    };


  }
}
