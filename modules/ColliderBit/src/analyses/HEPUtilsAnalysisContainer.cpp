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
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_3LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_3LEPEW_20invfb);

    // Factory definition
    HEPUtilsAnalysis* mkAnalysis(const std::string& name) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) return create_Analysis_ ## A()
      IF_X_RTN_CREATEX(ATLAS_0LEP);
      IF_X_RTN_CREATEX(ATLAS_0LEP_20invfb);
      IF_X_RTN_CREATEX(ATLAS_0LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_1LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2bStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_3LEPEW_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2LEPEW_20invfb);
      IF_X_RTN_CREATEX(CMS_3LEPEW_20invfb);
      IF_X_RTN_CREATEX(Perf);
      throw std::runtime_error(name + " isn't a known collider analysis, you fool of a Took!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }

    // Weird, but necessary, static member initialization:
    std::vector<HEPUtilsAnalysis*> HEPUtilsAnalysisContainer::_combinedAnalyses;

    /// @name HEPUtilsAnalysisContainer function definitions:
    //@{
    void HEPUtilsAnalysisContainer::clear(bool clearStatic) {
      ready=false;
      _combined=false;
      if (!_analyses.empty())
        for (size_t i = 0; i < _analyses.size(); ++i)
          delete _analyses[i];
      _analyses.clear();

      if (!clearStatic) return;
      #pragma omp critical (staticAnalysisAccess)
      {
        if (!HEPUtilsAnalysisContainer::_combinedAnalyses.empty())
          for (size_t i = 0; i < HEPUtilsAnalysisContainer::_combinedAnalyses.size(); ++i)
            delete HEPUtilsAnalysisContainer::_combinedAnalyses[i];
        HEPUtilsAnalysisContainer::_combinedAnalyses.clear();
      }
    }

    void HEPUtilsAnalysisContainer::init(const std::vector<std::string>& analysisNames) {
      assert(!analysisNames.empty());

      /// @TODO: test thread safety.
      #pragma omp critical (access_combinedAnalyses)
      {
        if(HEPUtilsAnalysisContainer::_combinedAnalyses.empty()) {
          for (size_t i = 0; i < analysisNames.size(); ++i) {
            HEPUtilsAnalysisContainer::_combinedAnalyses.push_back(mkAnalysis(analysisNames[i]));
            _analyses.push_back(mkAnalysis(analysisNames[i]));
          }
        } else {
          for (size_t i = 0; i < analysisNames.size(); ++i) {
            _analyses.push_back(mkAnalysis(analysisNames[i]));
          }
        }
      }
      ready=true;
      _combined=false;
    }

    void HEPUtilsAnalysisContainer::analyze(const HEPUtils::Event& event) const {
      assert(!_analyses.empty());
      assert(ready);
      for (size_t i = 0; i < _analyses.size(); ++i) { _analyses[i]->analyze(event); }
    }

    void HEPUtilsAnalysisContainer::add_xsec(double xs, double xserr) {
      assert(!_analyses.empty());
      assert(ready);
      for (size_t i = 0; i < _analyses.size(); ++i) { _analyses[i]->add_xsec(xs, xserr); }
    }

    void HEPUtilsAnalysisContainer::combineAnalyses() {
      assert(!_analyses.empty());
      assert(!HEPUtilsAnalysisContainer::_combinedAnalyses.empty());
      assert(_analyses.size() == HEPUtilsAnalysisContainer::_combinedAnalyses.size());
      assert(ready);
      if(!_combined) {
        #pragma omp critical (access_combinedAnalyses)
        {
          for (size_t i = 0; i < _analyses.size(); ++i) {
            HEPUtilsAnalysisContainer::_combinedAnalyses[i]->add_xsec(_analyses[i]->xsec(),
                                                                      _analyses[i]->xsec_err());
            HEPUtilsAnalysisContainer::_combinedAnalyses[i]->add(_analyses[i]);
          }
        }
        _combined=true;
      }
    }
    //@}
  }
}
