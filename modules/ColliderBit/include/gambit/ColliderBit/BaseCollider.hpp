#pragma once
#include <string>
#include <vector>
#include <exception>

#include "gambit/Utils/shared_types.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief An abstract base class for collider simulators within ColliderBit.
    template <typename EventT>
    class BaseCollider {
      /// @name Member variables
      //@{
      public:
        typedef EventT EventType;
      //@}

      /// @name Construction and Destruction
      //@{
      public:
        BaseCollider() { }
        virtual ~BaseCollider() { }
      //@}

      /// @name Event generation functions
      //@{
      public:
        /// @brief Fill in the next collider event by reference without a specialization.
        virtual void nextEventDefault(EventT& event) = 0;
      //@}

      /// @name (Re-)Initialization functions
      //@{
      protected:
        /// @brief General init for any collider of this type.
        virtual void init(const std::vector<std::string>& externalSettings) = 0;
      //@}
    };


    /// @brief A base class used to specialize collider simulators within ColliderBit.
    template <typename EventT>
    class BaseColliderSpec {
      protected:
        BaseCollider<EventT> *_colliderToSpec;
      public:
        BaseColliderSpec(BaseCollider<EventT> *colliderToSpec) :
            _colliderToSpec(colliderToSpec) { };
        virtual void nextEventBySpec(EventT& event) { _colliderToSpec->nextEventDefault(event); }
        virtual void initBySpec() { }
    };


    /// @brief An abstract base class for specializing BaseColliders.
    template <typename EventT>
    class SpecializationContainer {
      /// @name Custom exceptions
      //@{
        class NoColliderSpecError : public std::exception {
          virtual const char* what() const throw() {
            return "_activeColliderSpec within SpecializationContainer use before assignment.";
          }
        };
      //@}

      /// @name Collider Specialization Functors
      //@{
      protected:
        /// @brief One specialization is marked as "active"
        BaseColliderSpec<EventT> *_activeColliderSpec;
        void checkSpec() const { if (!_activeColliderSpec) throw NoColliderSpecError(); }
      //@}

      /// @name Construction and Destruction
      //@{
      public:
        SpecializationContainer() : _activeColliderSpec(nullptr) { }
        virtual ~SpecializationContainer() { delete _activeColliderSpec; }
        virtual void recycle(const std::string&, const std::vector<std::string>&) = 0;
      //@}

      /// @name (Re-)Initialization functions
      //@{
      protected:
        /// @brief Specialized init via ColliderSpec object
        void specialize() { checkSpec(); _activeColliderSpec->initBySpec(); }
        /// @brief Specialization setter
        virtual void setActiveSpecialization(const std::string&) = 0;
      //@}

      /// @name Event generation functions - Required to be const by Gambit
      //@{
      public:
        /// @brief Fill in the next collider event by reference using a BaseColliderSpec.
        void nextEvent(EventT& event) const {
          checkSpec(); _activeColliderSpec->nextEventBySpec(event);
        }
      //@}
    };

  }
}
