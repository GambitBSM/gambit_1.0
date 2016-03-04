#include "gambit/ColliderBit/Utils.hpp"
using namespace std;

namespace Gambit {
  namespace ColliderBit {


    bool random_bool(double eff) {
      /// @todo Handle out-of-range eff values
      return HEPUtils::rand01() < eff;
    }


    void filtereff(std::vector<HEPUtils::Particle*>& particles, double eff) {
      particles.erase(std::remove_if(particles.begin(), particles.end(),
                                     [&](const HEPUtils::Particle* p) {
                                       const bool kill = !random_bool(eff);
                                       if (kill) delete p;
                                       return kill; } ),
                      particles.end());
      // vector<HEPUtils::Particle*> todel;
      // for (HEPUtils::Particle* p : particles) {
      //   if (!random_bool(eff)) todel.push_back(p);
      // }
      // for (HEPUtils::Particle* p : todel) {
      //   delete p;
      //   particles.erase(find(particles.begin(), particles.end(), p));
      // }
    }


        /// Utility function for filtering a supplied particle vector by sampling wrt a binned 2D efficiency map in |eta| and pT
    void filtereff_etapt(std::vector<HEPUtils::Particle*>& particles, const HEPUtils::BinnedFn2D<double>& eff_etapt) {
      particles.erase(std::remove_if(particles.begin(), particles.end(),
                                     [&](const HEPUtils::Particle* p) {
                                       const bool kill = !random_bool(eff_etapt, p->abseta(), p->pT());
                                       if (kill) delete p;
                                       return kill; } ),
                      particles.end());
      // vector<HEPUtils::Particle*> todel;
      // for (HEPUtils::Particle* p : particles) {
      //   if (!random_bool(eff_etapt, p->abseta(), p->pT())) todel.push_back(p);
      // }
      // for (HEPUtils::Particle* p : todel) {
      //   delete p;
      //   particles.erase(find(particles.begin(), particles.end(), p));
      // }
    }


  }
}
