#pragma once

#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

#ifndef EXCLUDE_DELPHES

namespace Gambit {
  namespace ColliderBit {


    /// Forward declaration of a struct to hide Delphes-type member variables
    class DelphesVanillaImpl;


    /// A class for Delphes detector simulations within ColliderBit.
    class DelphesVanilla : public BaseDetector<Pythia8::Event, HEPUtils::Event> 
    {
      protected:

        DelphesVanillaImpl* _impl; ///< Member variable abstraction via a forward-declared type.

      public:

        /// @name Construction, destruction, and recycling
        //@{
        DelphesVanilla() : _impl(nullptr) { }

        ~DelphesVanilla() { clear(); }

        /// Reset this instance
        void clear();
        //@}

      /// @name Initialization functions
      //@{
      public:
        /// @brief Settings parsing and initialization for each sub-class.
        void init(const std::vector<std::string>&);
      //@}

      /// @name Event detection simulation.
      //@{
      public:
        /// @brief Convert the input event to a format Delphes can use.
        void convertInput(const Pythia8::Event&) const;
        /// @brief Convert the output event to the standard type used in Gambit.
        void convertOutput(HEPUtils::Event&) const;
        /// @brief Process the event with the detector simulation.
        void processEvent(const Pythia8::Event& eventIn, HEPUtils::Event& eventOut) const;
      //@}


      /// @name Custom exceptions:
      ///@{
      public:
        /// An exception for when Delphes fails to initialize.
        class InitializationError : public std::exception
        {
          virtual const char* what() const throw()
          {
            return "Failed to initialize Delphes.";
          }
        };
        /// An exception for when Delphes fails to process events.
        class ProcessEventError : public std::exception
        {
          virtual const char* what() const throw()
          {
            return "Failed to process event with Delphes.";
          }
        };
      ///@}


    };

  }
}
#endif // not defined EXCLUDE_DELPHES
