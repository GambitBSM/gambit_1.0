#pragma once
#include <string>
#include <vector>
#include <exception>

#include "gambit/Utils/shared_types.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief The base class for collider simulators within ColliderBit.
    template <typename EventT>
    class BaseCollider {
      /// @name Member variables and customization classes.
      //@{
      public:
        /// @brief Convenient typedef for short memories.
        typedef EventT EventType;
      protected:
        /// @brief Collider Specialization Functor - base class.
        class BaseColliderSpec {
          public:
            virtual void nextEventBySpec(EventT& event) const { nextEventDefault(event); }
            virtual void initBySpec() { }
        };

        /// @brief One specialization is marked as "active"
        BaseColliderSpec *_activeColliderSpec;
      //@}

      public:
        BaseCollider() : _activeColliderSpec(nullptr) { }
        virtual ~BaseCollider() { delete _activeColliderSpec; }

      /// @name (Re-)Initialization functions
      //@{
        /// @brief Specialization setter
        void setActiveSpecialization(const std::string& name) {};
        /// @brief Specialized init via ColliderSpec object
        void specialize() { if (activeColliderSpec) activeColliderSpec->initBySpec(); }
        /// @brief Settings parsing and initialization for each sub-class
        virtual void init(const std::vector<std::string>& settings) {};
      //@}

      /// @name Event generation functions - Required to be const by Gambit
      //@{
        /// @brief Fill in the next collider event by reference using a BaseColliderSpec.
        void nextEvent(EventT& event) const {
          if (activeColliderSpec) activeColliderSpec->nextEventBySpec(event);
          else nextEventDefault(event);
        }
        /// @brief Fill in the next collider event by reference without a specialization.
        virtual void nextEventDefault(EventT& event) const {}
      //@}
    };
  }
}
