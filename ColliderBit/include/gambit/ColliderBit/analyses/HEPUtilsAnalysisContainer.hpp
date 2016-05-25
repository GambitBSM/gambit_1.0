#pragma once
#include <string>
#include <stdexcept>
#include <vector>
#include "gambit/ColliderBit/analyses/BaseAnalysis.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// Create a new analysis based on a name string
    /// @note The caller is responsible for deleting the returned analysis object.
    HEPUtilsAnalysis* mkAnalysis(const std::string& name);

    /// More sophisticated than just std::vector<HEPUtilsAnalysis*>
    struct HEPUtilsAnalysisContainer {
        std::vector<HEPUtilsAnalysis*> analyses;
        bool ready;

      /// @name Construction, Destruction, and Recycling:
      //@{
        HEPUtilsAnalysisContainer() : ready(false) { }
        ~HEPUtilsAnalysisContainer() { clear(); }
        /// Reset the analyses contained within this instance.
        void clear(); 
      //@}

      /// @name (Re-)Initialization functions:
      //@{
        /// Initialize analyses by their names.
        void init(const std::vector<std::string>& analysisNames);
      //@}

      /// @name Event analysis and analysis finalization functions:
      //@{
        /// Analyze an event.
        void analyze(const HEPUtils::Event&) const;
        /// Add cross-sections and errors for two different process types
        void add_xsec(double, double);
        /// Add cross-sections and errors for two different process types
        void add_xsec(const HEPUtilsAnalysisContainer& e) { add_xsec(&e); }
        /// Add cross-sections and errors for two different process types
        void add_xsec(const HEPUtilsAnalysisContainer*);
        /// Combine cross-sections and errors for the same process type
        void improve_xsec(double, double);
        /// Combine cross-sections and errors for the same process type
        void improve_xsec(const HEPUtilsAnalysisContainer& e) { improve_xsec(&e); }
        /// Combine cross-sections and errors for the same process type
        void improve_xsec(const HEPUtilsAnalysisContainer*);
        /// Add the results of all analyses from this instance to the given one.
        void add(const HEPUtilsAnalysisContainer& e) { add(&e); }
        /// Add the results of all analyses from this instance to the given one.
        void add(const HEPUtilsAnalysisContainer*); 
        /// Set cross-sections and errors for each analysis.
        /// @note If factor is negative (the default), each analysis uses its own nEvents, xsec, and luminosity to scale
        void scale(double factor=-1);
      //@}
    };

  }
}
