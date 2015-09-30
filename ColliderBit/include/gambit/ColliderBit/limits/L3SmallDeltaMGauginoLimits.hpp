#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


    /// @brief A class to contain the limit data from L3PLB_482_2000_31, figure 5a.
    class L3ChargedGauginoSmallDeltaMWithHeavySneutrinoLimitAt188pt6GeV : public BaseLimitContainer {
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
        L3ChargedGauginoSmallDeltaMWithHeavySneutrinoLimitAt188pt6GeV();
      //@}
    };


    /// @brief A class to contain the limit data from L3PLB_482_2000_31, figure 5b.
    class L3ChargedGauginoSmallDeltaMAnySneutrinoLimitAt188pt6GeV : public BaseLimitContainer {
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
        L3ChargedGauginoSmallDeltaMAnySneutrinoLimitAt188pt6GeV();
      //@}
    };


    /// @brief A class to contain the limit data from L3PLB_482_2000_31, figure 5c.
    class L3ChargedHiggsinoSmallDeltaMLimitAt188pt6GeV : public BaseLimitContainer {
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
        L3ChargedHiggsinoSmallDeltaMLimitAt188pt6GeV();
      //@}
    };


  }
}
