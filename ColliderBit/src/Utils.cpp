#include "gambit/ColliderBit/Utils.hpp"
using namespace std;

namespace Gambit {
  namespace ColliderBit {


    bool random_bool(double eff) {
      /// @todo Handle out-of-range eff values
      return HEPUtils::rand01() < eff;
    }


    void filtereff(std::vector<HEPUtils::Particle*>& particles, double eff) {
      if(particles.empty()) return;
      auto keptParticlesEnd = std::remove_if(particles.begin(), particles.end(),
                                             [&](const HEPUtils::Particle*) {
                                               return !random_bool(eff); } );
      // vectors erase most efficiently from the end
      // no delete is necessary, because erase destroys the elements it removes
      while (keptParticlesEnd != particles.end())
        particles.erase(--particles.end());
    }


    /// Utility function for filtering a supplied particle vector by sampling wrt a binned 2D efficiency map in |eta| and pT
    void filtereff_etapt(std::vector<HEPUtils::Particle*>& particles, const HEPUtils::BinnedFn2D<double>& eff_etapt) {
      if(particles.empty()) return;
      auto keptParticlesEnd = std::remove_if(particles.begin(), particles.end(),
                                             [&](const HEPUtils::Particle* p) {
                                               return !random_bool(eff_etapt, p->abseta(), p->pT()); } );
      // vectors erase most efficiently from the end
      // no delete is necessary, because erase destroys the elements it removes
      while (keptParticlesEnd != particles.end())
        particles.erase(--particles.end());
    }


  }
}
