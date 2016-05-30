#include "gambit/ColliderBit/Utils.hpp"
#include <iostream>
using namespace std;

namespace Gambit {
  namespace ColliderBit {


    bool random_bool(double eff) {
      /// @todo Handle out-of-range eff values
      return HEPUtils::rand01() < eff;
    }


    void filtereff(std::vector<HEPUtils::Particle*>& particles, double eff, bool do_delete) {
      if (particles.empty()) return;
      auto keptParticlesEnd = std::remove_if(particles.begin(), particles.end(),
                                             [&](HEPUtils::Particle* p) {
                                               const bool rm = !random_bool(eff);
                                               if (do_delete && rm) delete p;
                                               return rm;
                                             } );
      particles.erase(keptParticlesEnd, particles.end());
    }


    /// Utility function for filtering a supplied particle vector by sampling wrt a binned 2D efficiency map in |eta| and pT
    void filtereff_etapt(std::vector<HEPUtils::Particle*>& particles, const HEPUtils::BinnedFn2D<double>& eff_etapt, bool do_delete) {
      if (particles.empty()) return;
      auto keptParticlesEnd = std::remove_if(particles.begin(), particles.end(),
                                             [&](const HEPUtils::Particle* p) {
                                               const bool rm = !random_bool(eff_etapt, p->abseta(), p->pT());
                                               if (do_delete && rm) delete p;
                                               return rm;
                                             } );
      particles.erase(keptParticlesEnd, particles.end());
    }


  }
}
