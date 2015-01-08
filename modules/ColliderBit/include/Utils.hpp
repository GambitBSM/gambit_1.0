#pragma once
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/BinnedFn.h"
//using namespace HEPUtils;

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


    inline std::vector<double> makeBinValues(std::vector<double> binEdgeValues){
      //Make a vector of central bin values from a vector of bin edge values using linear interpolation
      std::vector<double> results;
      for(unsigned int bin=0;bin<binEdgeValues.size()-1;bin++){
        results.push_back(binEdgeValues[bin]+(0.5*(binEdgeValues[bin+1]-binEdgeValues[bin])));
      }
      return results;
    }


  }
}
