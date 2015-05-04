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
    class HEPUtilsAnalysisContainer {
      /// @name Member variables
      //@{
      private:
        std::vector<HEPUtilsAnalysis*> _analyses;
      public:
        bool ready;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
      public:
        HEPUtilsAnalysisContainer() : ready(false) { }
        ~HEPUtilsAnalysisContainer() { clear(); }
        /// @brief Reset the analyses contained within this instance.
        void clear(); 
      //@}

      /// @name (Re-)Initialization functions
      //@{
      public:
        /// @brief Initialize analyses by their names.
        void init(const std::vector<std::string>& analysisNames);
      //@}

      /// @name Event analysis and analysis finalization functions
      //@{
      public:
        /// @brief Analyze an event.
        void analyze(const HEPUtils::Event&) const;
        /// @brief Set cross-sections and errors for each analysis.
        void add_xsec(double xs, double xserr);
        /// @brief Add the results of all analyses from this instance to the given one.
        void combine(HEPUtilsAnalysisContainer& combinedAnalyses); 
      //@}

      /// @name Analysis vector access
      //@{
      public:
        /// @brief Get the size of the analysis vector.
        size_t size() { return _analyses.size(); }
        /// @brief Get the iterator at the beginning of the analysis vector.
        std::vector<HEPUtilsAnalysis*>::iterator begin() { return _analyses.begin(); }
        /// @brief Get the iterator at the end of the analysis vector.
        std::vector<HEPUtilsAnalysis*>::iterator end() { return _analyses.end(); }
      //@}
    };

  }
}
