#include <stdexcept>
#include "gambit/ColliderBit/analyses/HEPUtilsAnalysisContainer.hpp"

namespace Gambit {
  namespace ColliderBit {

    // Fwd declarations
    DECLARE_ANALYSIS_FACTORY(Perf);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEP);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEP_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_1LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2bStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_3LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_3LEPEW_CONF_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_1LEPDMTOP_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_2LEPDMTOP_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_3LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_MONOJET_20invfb);

    // Factory definition
    HEPUtilsAnalysis* mkAnalysis(const std::string& name) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) return create_Analysis_ ## A()
      IF_X_RTN_CREATEX(ATLAS_0LEP);
      IF_X_RTN_CREATEX(ATLAS_0LEP_20invfb);
      IF_X_RTN_CREATEX(ATLAS_0LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_1LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2bStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2LEPEW_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_3LEPEW_20invfb);
      IF_X_RTN_CREATEX(ATLAS_3LEPEW_CONF_20invfb);
      IF_X_RTN_CREATEX(CMS_1LEPDMTOP_20invfb);
      IF_X_RTN_CREATEX(CMS_2LEPDMTOP_20invfb);
      IF_X_RTN_CREATEX(CMS_3LEPEW_20invfb);
      IF_X_RTN_CREATEX(CMS_MONOJET_20invfb);
      IF_X_RTN_CREATEX(Perf);
      throw std::runtime_error(name + " isn't a known collider analysis, you fool of a Took!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }


    /// @name HEPUtilsAnalysisContainer function definitions:
    //@{
    void HEPUtilsAnalysisContainer::clear() {
      if (analyses.size() != 0) {
        for (auto it = analyses.begin(); it != analyses.end(); ++it) {
          delete *it;
          *it = nullptr;
        }
        analyses.clear();
      }

      ready=false;
    }


    void HEPUtilsAnalysisContainer::init(const std::vector<std::string>& analysisNames) {
      assert(!analysisNames.empty());
      clear();

      /// @TODO: test thread safety.
      for (auto it = analysisNames.begin(); it != analysisNames.end(); ++it) {
        analyses.push_back(mkAnalysis(*it));
      }

      ready=true;
    }


    void HEPUtilsAnalysisContainer::analyze(const HEPUtils::Event& event) const {
      assert(!analyses.empty());
      assert(ready);
      for (auto it = analyses.begin(); it != analyses.end(); ++it)
        (*it)->analyze(event);
    }


    void HEPUtilsAnalysisContainer::add_xsec(double xs, double xserr) {
      assert(!analyses.empty());
      assert(ready);
      for (auto it = analyses.begin(); it != analyses.end(); ++it)
        (*it)->add_xsec(xs, xserr);
    }


    void HEPUtilsAnalysisContainer::add(const HEPUtilsAnalysisContainer& other) {
      assert(other.analyses.size() != 0);
      assert(analyses.size() == other.analyses.size());
      assert(ready);
      auto myIter = analyses.begin();
      auto otherIter = other.analyses.begin();
      add_xsec((*otherIter)->xsec(), (*otherIter)->xsec_err());
      while (myIter != analyses.end()) {
        // analyses is a vector of HEPUtilsAnalysis pointers...
        // Thus, dereferencing the iterator gets me a HEPUtilsAnalysis pointer.
        (*myIter++)->add(*otherIter++);
      }
    }


    void HEPUtilsAnalysisContainer::scale(double factor) {
      assert(!analyses.empty());
      assert(ready);
      auto myIter = analyses.begin();
      while (myIter != analyses.end()) {
        (*myIter++)->scale(factor);
      }
    }
    //@}

  }
}
