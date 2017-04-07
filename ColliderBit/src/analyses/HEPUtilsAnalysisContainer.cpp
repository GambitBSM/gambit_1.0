#include <stdexcept>
#include "gambit/ColliderBit/ColliderBit_macros.hpp"
#include "gambit/ColliderBit/analyses/HEPUtilsAnalysisContainer.hpp"

namespace Gambit
{
  namespace ColliderBit
  {

    /// Forward declarations using #DECLARE_ANALYSIS_FACTORY(ANAME)
    /// @{
    DECLARE_ANALYSIS_FACTORY(Minimum);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEP_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_13TeV_0LEP_13invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_1LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2bStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_3LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_13TeV_0LEP_13invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_1LEPDMTOP_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_2LEPDMTOP_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_3LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_MONOJET_20invfb);
    DECLARE_ANALYSIS_FACTORY(Perf);
    /// @}

    // Factory definition
    HEPUtilsAnalysis* mkAnalysis(const std::string& name)
    {
      IF_X_RTN_CREATE_ANA_X(Minimum);
      IF_X_RTN_CREATE_ANA_X(ATLAS_0LEP_20invfb);
      IF_X_RTN_CREATE_ANA_X(ATLAS_13TeV_0LEP_13invfb);
      IF_X_RTN_CREATE_ANA_X(ATLAS_0LEPStop_20invfb);
      IF_X_RTN_CREATE_ANA_X(ATLAS_1LEPStop_20invfb);
      IF_X_RTN_CREATE_ANA_X(ATLAS_2bStop_20invfb);
      IF_X_RTN_CREATE_ANA_X(ATLAS_2LEPEW_20invfb);
      IF_X_RTN_CREATE_ANA_X(ATLAS_2LEPStop_20invfb);
      IF_X_RTN_CREATE_ANA_X(ATLAS_3LEPEW_20invfb);
      IF_X_RTN_CREATE_ANA_X(CMS_13TeV_0LEP_13invfb);
      IF_X_RTN_CREATE_ANA_X(CMS_1LEPDMTOP_20invfb);
      IF_X_RTN_CREATE_ANA_X(CMS_2LEPDMTOP_20invfb);
      IF_X_RTN_CREATE_ANA_X(CMS_3LEPEW_20invfb);
      IF_X_RTN_CREATE_ANA_X(CMS_MONOJET_20invfb);
      IF_X_RTN_CREATE_ANA_X(Perf);
      throw std::runtime_error(name + " isn't a known collider analysis!");
      return nullptr;
    }


    void HEPUtilsAnalysisContainer::clear()
    {
      if (analyses.size() != 0)
      {
        for (auto it = analyses.begin(); it != analyses.end(); ++it)
        {
          delete *it;
          *it = nullptr;
        }
        analyses.clear();
      }

      ready=false;
    }


    void HEPUtilsAnalysisContainer::init(const std::vector<std::string>& analysisNames)
    {
      assert(!analysisNames.empty());
      clear();

      for (auto it = analysisNames.begin(); it != analysisNames.end(); ++it)
      {
        analyses.push_back(mkAnalysis(*it));
      }

      ready=true;
    }


    void HEPUtilsAnalysisContainer::analyze(const HEPUtils::Event& event) const
    {
      assert(!analyses.empty());
      assert(ready);
      for (auto it = analyses.begin(); it != analyses.end(); ++it)
        (*it)->analyze(event);
    }


    void HEPUtilsAnalysisContainer::add_xsec(double xs, double xserr)
    {
      assert(!analyses.empty());
      assert(ready);
      for (auto it = analyses.begin(); it != analyses.end(); ++it)
        (*it)->add_xsec(xs, xserr);
    }


    void HEPUtilsAnalysisContainer::add_xsec(const HEPUtilsAnalysisContainer* other)
    {
      assert(other->analyses.size() != 0);
      assert(ready);
      auto otherIter = other->analyses.begin();
      add_xsec((*otherIter)->xsec(), (*otherIter)->xsec_err());
    }


    void HEPUtilsAnalysisContainer::improve_xsec(double xs, double xserr)
    {
      assert(!analyses.empty());
      assert(ready);
      for (auto it = analyses.begin(); it != analyses.end(); ++it)
        (*it)->improve_xsec(xs, xserr);
    }


    void HEPUtilsAnalysisContainer::improve_xsec(const HEPUtilsAnalysisContainer* other)
    {
      assert(other->analyses.size() != 0);
      assert(ready);
      auto otherIter = other->analyses.begin();
      improve_xsec((*otherIter)->xsec(), (*otherIter)->xsec_err());
    }


    void HEPUtilsAnalysisContainer::add(const HEPUtilsAnalysisContainer* other)
    {
      assert(other->analyses.size() != 0);
      assert(analyses.size() == other->analyses.size());
      assert(ready);
      auto myIter = analyses.begin();
      auto otherIter = other->analyses.begin();
      while (myIter != analyses.end())
      {
        (*myIter++)->add(*otherIter++);
      }
    }


    void HEPUtilsAnalysisContainer::scale(double factor)
    {
      assert(!analyses.empty());
      assert(ready);
      auto myIter = analyses.begin();
      while (myIter != analyses.end())
      {
        (*myIter++)->scale(factor);
      }
    }

  }
}
