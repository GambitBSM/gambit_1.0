#include "gambit/ColliderBit/Utils.hpp"
#include <iostream>
using namespace std;

namespace Gambit {
  namespace ColliderBit {


    bool random_bool(double eff) {
      /// @todo Handle out-of-range eff values
      return HEPUtils::rand01() < eff;
    }

    // void filtereff(std::vector<HEPUtils::Particle*>& particles, double eff) 
    // {
    //   cerr << "DEBUG: " << endl;
    //   cerr << "DEBUG: new filterff call, with particles vector at " << &particles << endl;
    //   cerr << "DEBUG: " << endl;
    //   cerr << "DEBUG: particles vector contains:" << endl;
    //   for (HEPUtils::Particle* p : particles) 
    //   {
    //     cerr << "DEBUG: " << p << endl;
    //   }
    //   cerr << "DEBUG:" << endl;

    //   vector<HEPUtils::Particle*> todel;
    //   for (HEPUtils::Particle* p : particles) 
    //   {
    //     if (!random_bool(eff)) todel.push_back(p);
    //   }
    //   for (HEPUtils::Particle* p : todel) 
    //   {
    //     cerr << "DEBUG: will delete & erase " << p << endl;
    //     delete p;
    //     particles.erase(find(particles.begin(), particles.end(), p));
    //   }
    //   cerr << "DEBUG: " << endl;
    //   cerr << "DEBUG: return from filtereff" << endl;
    //   cerr << "DEBUG: " << endl;
    // }

    void filtereff(std::vector<HEPUtils::Particle*>& particles, double eff) {
      if(particles.empty()) return;
      cerr << "DEBUG: " << endl;
      cerr << "DEBUG: new filterff call, with particles vector at " << &particles << endl;
      cerr << "DEBUG: " << endl;
      cerr << "DEBUG: particles vector contains:" << endl;
      for (HEPUtils::Particle* p : particles) 
      {
        cerr << "DEBUG: " << p << endl;
      }
      cerr << "DEBUG:" << endl;
      auto keptParticlesEnd = particles.end();
      keptParticlesEnd = std::remove_if(particles.begin(), keptParticlesEnd,
                                        [&](HEPUtils::Particle* p) {
                                          if (!random_bool(eff)) { 
                                            // DEBUG
                                            cerr << "DEBUG: filtereff says..." << endl;
                                            cerr << "DEBUG: will delete " << p << endl;
                                            return true; 
                                          }
                                          return false; } );
      // vectors erase most efficiently from the end
      // no delete is necessary, because all analyses destroy their eventClone after analysis
      while (keptParticlesEnd != particles.end())
        particles.pop_back();
    }


    /// Utility function for filtering a supplied particle vector by sampling wrt a binned 2D efficiency map in |eta| and pT
    void filtereff_etapt(std::vector<HEPUtils::Particle*>& particles, const HEPUtils::BinnedFn2D<double>& eff_etapt) {
      if(particles.empty()) return;
      cerr << "DEBUG: " << endl;
      cerr << "DEBUG: new filterff call, with particles vector at " << &particles << endl;
      cerr << "DEBUG: " << endl;
      cerr << "DEBUG: particles vector contains:" << endl;
      for (HEPUtils::Particle* p : particles) 
      {
        cerr << "DEBUG: " << p << endl;
      }
      cerr << "DEBUG:" << endl;
      auto keptParticlesEnd = particles.end();
      keptParticlesEnd = std::remove_if(particles.begin(), keptParticlesEnd,
                                        [&](const HEPUtils::Particle* p) {
                                          if (!random_bool(eff_etapt, p->abseta(), p->pT())) { 
                                            // DEBUG
                                            cerr << "DEBUG: filtereff_etapt says..." << endl;
                                            cerr << "DEBUG: will delete " << p << endl;
                                            return true; 
                                          }
                                          return false; } );
      // vectors erase most efficiently from the end
      // no delete is necessary, because all analyses destroy their eventClone after analysis
      while (keptParticlesEnd != particles.end())
        particles.pop_back();
    }


  }
}
