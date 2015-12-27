#pragma once
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/BinnedFn.h"
#include "HEPUtils/Event.h"

namespace Gambit {
  namespace ColliderBit {


    /// Return a random true/false at a success rate given by a 1D efficiency map
    inline bool random_bool(const HEPUtils::BinnedFn1D<double>& effmap, double x) {
      const double eff = effmap.get_at(x);
      /// @todo Handle out-of-range x and eff values
      return HEPUtils::rand01() < eff;
    }


    /// Return a random true/false at a success rate given by a 2D efficiency map
    inline bool random_bool(const HEPUtils::BinnedFn2D<double>& effmap, double x, double y) {
      const double eff = effmap.get_at(x, y);
      /// @todo Handle out-of-range x,y and eff values
      return HEPUtils::rand01() < eff;
    }


    /// Randomly get a tag result (can be anything) from a 2D |eta|-pT efficiency map
    /// @todo Also need 1D? Sampling in what variable?
    inline bool has_tag(const HEPUtils::BinnedFn2D<double>& effmap, double eta, double pt) {
      try {
        return random_bool(effmap, fabs(eta), pt);
      } catch (...) {
        return false; // No tag if outside lookup range... be careful!
      }
    }


    /// Make a vector of central bin values from a vector of bin edge values using linear interpolation
    inline std::vector<double> makeBinValues(const std::vector<double>& binEdgeValues) {
      std::vector<double> results;
      results.reserve(binEdgeValues.size()-1);
      for (size_t i = 0; i < binEdgeValues.size()-1; ++i)
        results.push_back( (binEdgeValues[i] + binEdgeValues[i+1])/2.0 );
      return results;
    }


    /// Check if there's a physics object above ptmin in an annulus rmin..rmax around the given four-momentum p4
    inline bool object_in_cone(const HEPUtils::Event& e, const HEPUtils::P4& p4, double ptmin, double rmax, double rmin=0.05) {
      for (const HEPUtils::Particle* p : e.visible_particles())
        if (p->pT() > ptmin && HEPUtils::in_range(HEPUtils::deltaR_eta(p4, *p), rmin, rmax)) return true;
      for (const HEPUtils::Jet* j : e.jets())
        if (j->pT() > ptmin && HEPUtils::in_range(HEPUtils::deltaR_eta(p4, *j), rmin, rmax)) return true;
      return false;
    }


  }
}
