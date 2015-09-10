#include "gambit/ColliderBit/limits/BaseLimitContainer.hpp"

namespace Gambit {
  namespace ColliderBit {


    /// @brief A class to contain the limit data from L3PLB_472_2000_420, figure 2a.
    class L3CharginoAllChannelsLimitAt188pt6GeV : public BaseLimitContainer {
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
        L3CharginoAllChannelsLimitAt188pt6GeV();
      //@}
    };


    /// @brief A class to contain the limit data from L3PLB_472_2000_420, figure 2b.
    class L3CharginoLeptonicLimitAt188pt6GeV : public BaseLimitContainer {
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
        L3CharginoLeptonicLimitAt188pt6GeV();
      //@}
    };


    /// @brief A class to contain the limit data from L3PLB_472_2000_420, figure 3a.
    class L3NeutralinoAllChannelsLimitAt188pt6GeV : public BaseLimitContainer {
      /// @name Point interpolation, conversion, and region checks
      //@{
      public:
        /// @brief Convert a point from pixel units to axis units
        P2 convertPt(double x, double y);
        /// @brief Check to see if the point is within the exclusion region
        bool isWithinExclusionRegion(double x, double y);
        /// @brief Return the limit value outside of the exclusion region
        double specialLimit(double x, double y);
      //@}

      /// @name Construction, initializing with all necessary data from the plot
      //@{
      public:
        L3NeutralinoAllChannelsLimitAt188pt6GeV();
      //@}
    };


    /// @brief A class to contain the limit data from L3PLB_472_2000_420, figure 3b.
    class L3NeutralinoLeptonicLimitAt188pt6GeV : public BaseLimitContainer {
      /// @name Point interpolation, conversion, and region checks
      //@{
      public:
        /// @brief Convert a point from pixel units to axis units
        P2 convertPt(double x, double y);
        /// @brief Check to see if the point is within the exclusion region
        bool isWithinExclusionRegion(double x, double y);
        /// @brief Return the limit value outside of the exclusion region
        double specialLimit(double x, double y);
      //@}

      /// @name Construction, initializing with all necessary data from the plot
      //@{
      public:
        L3NeutralinoLeptonicLimitAt188pt6GeV();
      //@}
    };


  }
}
