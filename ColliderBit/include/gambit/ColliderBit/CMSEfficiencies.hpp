#pragma once

/// @file Functions that do super fast CMS detector simulation based on four vector smearing

#include "gambit/ColliderBit/Utils.hpp"

#include "HEPUtils/MathUtils.h"
#include "HEPUtils/BinnedFn.h"
#include "HEPUtils/Event.h"

#include <random>
#include <algorithm>

namespace Gambit {
  namespace ColliderBit {
    namespace CMS {


      /// @name CMS detector efficiency functions
      //@{


      /// @brief Randomly filter the supplied particle list by parameterised electron tracking efficiency
      inline void applyElectronTrackingEff(std::vector<HEPUtils::Particle*>& electrons) {
        static HEPUtils::BinnedFn2D<double> _elTrackEff2d({{0, 1.5, 2.5, 100.}}, //< |eta|
                                                          {{0, 0.1, 1.0, 100000}}, //< pT
                                                          {{0., 0.70, 0.95, // |eta| 0.1-1.5
                                                            0., 0.60, 0.85, // |eta| 1.5-2.5
                                                            0., 0.,   0.}}); // |eta| > 2.5
        filtereff_etapt(electrons, _elTrackEff2d);
      }


      /// @brief Randomly filter the supplied particle list by parameterised electron efficiency
      ///
      /// @note Should be applied after the electron energy smearing
      inline void applyElectronEff(std::vector<HEPUtils::Particle*>& electrons) {
        /// @note Eff values currently identical to those in ATLAS (AB, 2016-01-24)
        static HEPUtils::BinnedFn2D<double> _elEff2d({{0, 1.5, 2.5, 100.}}, //< |eta|
                                                     {{0, 10., 100000.}}, //< pT
                                                     {{0., 0.95, // |eta| 0.1-1.5
                                                       0., 0.85, // |eta| 1.5-2.5
                                                       0., 0.}}); // |eta| > 2.5
        filtereff_etapt(electrons, _elEff2d);
      }


      /// @brief Randomly filter the supplied particle list by parameterised muon tracking efficiency
      inline void applyMuonTrackEff(std::vector<HEPUtils::Particle*>& muons) {
        /// @note Eff values currently identical to those in ATLAS (AB, 2016-01-24)
        static HEPUtils::BinnedFn2D<double> _muTrackEff2d({{0, 1.5, 2.5, 100.}}, //< |eta|
                                                          {{0, 0.1, 1.0, 100000.}}, //< pT
                                                          {{0, 0.75, 0.99, // |eta| 0.1-1.5
                                                            0, 0.70, 0.98, // |eta| 1.5-2.5
                                                            0, 0,    0}}); // |eta| > 2.5
        filtereff_etapt(muons, _muTrackEff2d);
      }


      /// @brief Randomly filter the supplied particle list by parameterised muon efficiency
      inline void applyMuonEff(std::vector<HEPUtils::Particle*>& muons) {
        std::remove_if(muons.begin(), muons.end(),
                       [](const HEPUtils::Particle* p) {
                         if (p->abseta() > 2.4 || p->pT() < 10) { delete p; return true; }
                         const double eff = 0.95 * (p->abseta() < 1.5 ? 1 : exp(0.5 - 5e-4*p->pT()));
                         if (HEPUtils::rand01() > eff) { delete p; return true; }
                         return false;
                       } );
      }


      /// @brief Randomly filter the supplied particle list by parameterised tau efficiency
      inline void applyTauEfficiency(std::vector<HEPUtils::Particle*>& taus) {
        filtereff(taus, 0.6);
      }



      ///////////////////
      // AB SO FAR


      /// @brief Randomly smear the supplied electrons' momenta by parameterised resolutions
      inline void smearElectronEnergy(std::vector<HEPUtils::Particle*>& electrons) {
        // Function that mimics the DELPHES electron energy resolution
        // We need to smear E, then recalculate pT, then reset 4 vector

        std::random_device rd;
        std::mt19937 gen(rd());

        // Now loop over the electrons and smear the 4-vectors
        for (HEPUtils::Particle* e : electrons) {

          // Calculate resolution
          // for pT > 1, E resolution = |eta| < 0.5 -> sqrt(0.06^2 + pt^2*1.3e-3^2)
          //                            |eta| < 1.5 -> sqrt(0.10^2 + pt^2*1.7e-3^2)
          //                            |eta| < 0.5 -> sqrt(0.25^2 + pt^2*3.1e-3^2)
          double resolution = 0;
          if (e->pT() > 0.1 && abseta < 2.5) {
            const double abseta = e->abseta();
            if (abseta < 0.5) {
              resolution = add_quad(0.06, 1.3e-3 * e->pT());
            } else if (abseta < 1.5) {
              resolution = add_quad(0.10, 1.7e-3 * e->pT());
            } else { // still |eta| < 2.5
              resolution = add_quad(0.25, 3.1e-3 * e->pT());
            }
          }

          // Smear by a Gaussian centered on the current energy, with width given by the resolution
          if (resolution > 0) {
            std::normal_distribution<> d(e->E(), resolution);
            double smeared_E = d(gen);
            if (smeared_E < 0) smeared_E = 0;
            // double smeared_pt = smeared_E/cosh(e->eta()); ///< @todo Should be cosh(|eta|)?
            // std::cout << "BEFORE eta " << electron->eta() << std::endl;
            e->set_mom(HEPUtils::P4::mkEtaPhiME(e->eta(), e->phi(), e->mass(), smeared_E));
            // std::cout << "AFTER eta " << electron->eta() << std::endl;
          }
        }
      }


      /// @brief Randomly smear the supplied muons' momenta by parameterised resolutions
      inline void smearMuonMomentum(std::vector<HEPUtils::Particle*>& muons) {
        // Function that mimics the DELPHES muon momentum resolution
        // We need to smear pT, then recalculate E, then reset 4 vector

        std::random_device rd;
        std::mt19937 gen(rd());

        static HEPUtils::BinnedFn2D<double> _muEff({{0,1.5,2.5}}, {{0,0.1,1.,10.,200.,10000.}},
                                                   {{0.,0.03,0.02,0.03,0.05,
                                                         0.,0.04,0.03,0.04,0.05}});

        // Now loop over the muons and smear the 4-vectors
        for (HEPUtils::Particle* mu : muons) {
          // Look up resolution
          const double resolution = _muEff.get_at(mu->abseta(), mu->pT());

          // Smear by a Gaussian centered on the current energy, with width given by the resolution
          std::normal_distribution<> d(mu->pT(), resolution*mu->pT());
          double smeared_pt = d(gen);
          if (smeared_pt < 0) smeared_pt = 0;
          // const double smeared_E = smeared_pt*cosh(mu->eta()); ///< @todo Should be cosh(|eta|)?
          // std::cout << "Muon pt " << mu_pt << " smeared " << smeared_pt << endl;
          mu->set_mom(HEPUtils::P4::mkEtaPhiMPt(mu->eta(), mu->phi(), mu->mass(), smeared_pt));
        }
      }


      /// @brief Randomly smear the supplied jets' momenta by parameterised resolutions
      inline void smearJets(std::vector<HEPUtils::Jet*>& jets) {
        // Function that mimics the DELPHES jet momentum resolution
        // We need to smear pT, then recalculate E, then reset 4 vector

        std::random_device rd;
        std::mt19937 gen(rd());

        static HEPUtils::BinnedFn2D<double> _jetRes({{0,10.}}, {{0,10000.}}, {{0.03}});

        // Now loop over the jets and smear the 4-vectors
        for (HEPUtils::Jet* jet : jets) {
          // Look up resolution
          double resolution = _jetRes.get_at(jet->abseta(), jet->pT());

          // Smear by a Gaussian centered on 1 with width given by the (fractional) resolution
          std::normal_distribution<> d(1.,resolution);
          double smear_factor = d(gen);
          /// @todo Is this the best way to smear? Should we preserve the mean jet energy, or pT, or direction?
          jet->set_mom(HEPUtils::P4::mkXYZM(jet->mom().px()*smear_factor, jet->mom().py()*smear_factor, jet->mom().pz()*smear_factor, jet->mass()));
        }
      }


      /// @brief Randomly smear the supplied taus' momenta by parameterised resolutions
      inline void smearTaus(std::vector<HEPUtils::Particle*>& taus) {
        // Function that applies jet energy scale to hadronic taus
        // We need to smear pT, then recalculate E, then reset 4 vector
        // Basically the same function as above, except it takes a vector of particles

        std::random_device rd;
        std::mt19937 gen(rd());

        static HEPUtils::BinnedFn2D<double> _jetRes({{0,10.}}, {{0,10000.}}, {{0.03}});

        // Now loop over the taus and smear the 4-vectors
        for (HEPUtils::Particle* tau : taus) {
          // Look up resolution
          double resolution = _jetRes.get_at(tau->abseta(), tau->pT());

          // Smear by a Gaussian centered on 1 with width given by the (fractional) resolution
          std::normal_distribution<> d(1.,resolution);
          double smear_factor = d(gen);
          tau->set_mom(HEPUtils::P4::mkXYZM(tau->mom().px()*smear_factor, tau->mom().py()*smear_factor, tau->mom().pz()*smear_factor, tau->mass()));
        }
      }


      //@}


    }
  }
}
