#pragma once
#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


    /// @brief A class to contain the limit data from OPAL_EPJC35_2004_1, figure 5b.
    class OPALCharginoHadronicLimitAt208GeV : public BaseLimitContainer {
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
        OPALCharginoHadronicLimitAt208GeV();
      //@}
    };


    /// @brief A class to contain the limit data from OPAL_EPJC35_2004_1, figure 6b.
    class OPALCharginoSemiLeptonicLimitAt208GeV : public BaseLimitContainer {
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
        OPALCharginoSemiLeptonicLimitAt208GeV();
      //@}
    };


    /// @brief A class to contain the limit data from OPAL_EPJC35_2004_1, figure 7b.
    class OPALCharginoLeptonicLimitAt208GeV : public BaseLimitContainer {
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
        OPALCharginoLeptonicLimitAt208GeV();
      //@}
    };


    /// @brief A class to contain the limit data from OPAL_EPJC35_2004_1, figure 8b.
    class OPALCharginoAllChannelsLimitAt208GeV : public BaseLimitContainer {
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
        OPALCharginoAllChannelsLimitAt208GeV();
      //@}
    };


    /// @brief A class to contain the limit data from OPAL_EPJC35_2004_1, figure 9b.
    class OPALNeutralinoHadronicLimitAt208GeV : public BaseLimitContainer {
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
        OPALNeutralinoHadronicLimitAt208GeV();
      //@}
    };


    /// @brief A class to contain the limit data from OPAL_EPJC35_2004_1, figure 9b.
    class OPALNeutralinoHadronicViaZLimitAt208GeV : public BaseLimitContainer {
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
        OPALNeutralinoHadronicViaZLimitAt208GeV();
      //@}
    };


  }
}
