#pragma once
#include <string>
#include <stdexcept>
#include <vector>
#include "gambit/ColliderBit/analyses/BaseAnalysis.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief Create a new analysis based on a name string
    ///
    /// The caller is responsible for deleting the returned analysis object.
    HEPUtilsAnalysis* mkAnalysis(const std::string& name);

    /// @brief More sophisticated than just std::vector<HEPUtilsAnalysis*>
    struct HEPUtilsAnalysisContainer {
      /// @name Member variables
      //@{
        std::vector<HEPUtilsAnalysis*> analyses;
        bool ready;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        HEPUtilsAnalysisContainer() : ready(false) { }
        ~HEPUtilsAnalysisContainer() { clear(); }
        /// @brief Reset the analyses contained within this instance.
        void clear(); 
      //@}

      /// @name (Re-)Initialization functions
      //@{
        /// @brief Initialize analyses by their names.
        void init(const std::vector<std::string>& analysisNames);
      //@}

      /// @name Event analysis and analysis finalization functions
      //@{
        /// @brief Analyze an event.
        void analyze(const HEPUtils::Event&) const;
        /// @brief Add cross-sections and errors for two different process types
        void add_xsec(double, double);
        void add_xsec(const HEPUtilsAnalysisContainer& e) { add_xsec(&e); }
        void add_xsec(const HEPUtilsAnalysisContainer*);
        /// @brief Combine cross-sections and errors for the same process type
        void improve_xsec(double, double);
        void improve_xsec(const HEPUtilsAnalysisContainer& e) { improve_xsec(&e); }
        void improve_xsec(const HEPUtilsAnalysisContainer*);
        /// @brief Add the results of all analyses from this instance to the given one.
        void add(const HEPUtilsAnalysisContainer& e) { add(&e); }
        void add(const HEPUtilsAnalysisContainer*); 
        /// @brief Set cross-sections and errors for each analysis.
        /// @note If factor is negative (the default), each analysis uses its own nEvents, xsec, and luminosity to scale
        void scale(double factor=-1);
      //@}
    };

  }
}
