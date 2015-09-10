#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


        static constexpr double sqrtsGeV = 205;
    /// @brief A class to contain the limit data from L3_PLB580_2004_37, figure 2a.
    class L3SelectronLimitAt205GeV : public BaseLimitContainer {
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
        L3SelectronLimitAt205GeV();
      //@}
    };


    /// @brief A class to contain the limit data from L3_PLB580_2004_37, figure 2b.
    class L3SmuonLimitAt205GeV : public BaseLimitContainer {
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
        L3SmuonLimitAt205GeV();
      //@}
    };


    /// @brief A class to contain the limit data from L3_PLB580_2004_37, figure 2c.
    class L3StauLimitAt205GeV : public BaseLimitContainer {
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
        L3StauLimitAt205GeV();
      //@}
    };


  }
}
