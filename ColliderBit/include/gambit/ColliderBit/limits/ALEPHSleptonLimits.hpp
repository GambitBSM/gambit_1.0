#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


    /// @brief A class to contain the limit data from ALEPH_PLB526_2002_206, figure 3a.
    class ALEPHSelectronLimitAt208GeV : public BaseLimitContainer {
      /// @name Point interpolation, conversion, and region checks
      //@{
      public:
        /// @brief Convert a point from pixel units to axis units
        P2 convertPt(double x, double y);
        /// @brief Check to see if the point is within the exclusion region
        bool isWithinExclusionRegion(double x, double y);
      //@}

      /// @name Construction, initializing with all necessary data from the plot
      //@{
      public:
        ALEPHSelectronLimitAt208GeV();
      //@}
    };


    /// @brief A class to contain the limit data from ALEPH_PLB526_2002_206, figure 3b.
    class ALEPHSmuonLimitAt208GeV : public BaseLimitContainer {
      /// @name Point interpolation, conversion, and region checks
      //@{
      public:
        /// @brief Convert a point from pixel units to axis units
        P2 convertPt(double x, double y);
        /// @brief Check to see if the point is within the exclusion region
        bool isWithinExclusionRegion(double x, double y);
      //@}

      /// @name Construction, initializing with all necessary data from the plot
      //@{
      public:
        ALEPHSmuonLimitAt208GeV();
      //@}
    };


    /// @brief A class to contain the limit data from ALEPH_PLB526_2002_206, figure 3a.
    class ALEPHStauLimitAt208GeV : public BaseLimitContainer {
      /// @name Point interpolation, conversion, and region checks
      //@{
      public:
        /// @brief Convert a point from pixel units to axis units
        P2 convertPt(double x, double y);
        /// @brief Check to see if the point is within the exclusion region
        bool isWithinExclusionRegion(double x, double y);
      //@}

      /// @name Construction, initializing with all necessary data from the plot
      //@{
      public:
        ALEPHStauLimitAt208GeV();
      //@}
    };


  }
}
