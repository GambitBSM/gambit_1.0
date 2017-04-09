#pragma once
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions that do super fast CMS detector simulation based on four vector smearing.

#include "gambit/ColliderBit/Utils.hpp"

#include "HEPUtils/MathUtils.h"
#include "HEPUtils/BinnedFn.h"
#include "HEPUtils/Event.h"

#include <random>
#include <algorithm>

namespace Gambit {
  namespace ColliderBit {


    /// CMS-specific efficiency and smearing functions for super fast detector simulation
    /// @note See also BuckFastSmearCMS
    namespace CMS {

      /// @name CMS detector efficiency functions
      //@{

      /// Randomly filter the supplied particle list by parameterised electron tracking efficiency
      inline void applyElectronTrackingEff(std::vector<HEPUtils::Particle*>& electrons) {
        static HEPUtils::BinnedFn2D<double> _elTrackEff2d({{0, 1.5, 2.5, DBL_MAX}}, //< |eta|
                                                          {{0, 0.1, 1.0, DBL_MAX}}, //< pT
                                                          {{0., 0.70, 0.95, // |eta| 0.1-1.5
                                                            0., 0.60, 0.85, // |eta| 1.5-2.5
                                                            0., 0.,   0.}}); // |eta| > 2.5
        filtereff_etapt(electrons, _elTrackEff2d);
      }


      /// Randomly filter the supplied particle list by parameterised electron efficiency
      /// @note Should be applied after the electron energy smearing
      /// @note Eff values currently identical to those in ATLAS (AB, 2016-01-24)
      inline void applyElectronEff(std::vector<HEPUtils::Particle*>& electrons) {
        static HEPUtils::BinnedFn2D<double> _elEff2d({{0, 1.5, 2.5, DBL_MAX}}, //< |eta|
                                                     {{0, 10., DBL_MAX}}, //< pT
                                                     {{0., 0.95, // |eta| 0.1-1.5
                                                       0., 0.85, // |eta| 1.5-2.5
                                                       0., 0.}}); // |eta| > 2.5
        filtereff_etapt(electrons, _elEff2d);
      }


      /// Randomly filter the supplied particle list by parameterised muon tracking efficiency
      /// @note Eff values currently identical to those in ATLAS (AB, 2016-01-24)
      inline void applyMuonTrackEff(std::vector<HEPUtils::Particle*>& muons) {
        static HEPUtils::BinnedFn2D<double> _muTrackEff2d({{0, 1.5, 2.5, DBL_MAX}}, //< |eta|
                                                          {{0, 0.1, 1.0, DBL_MAX}}, //< pT
                                                          {{0, 0.75, 0.99, // |eta| 0.1-1.5
                                                            0, 0.70, 0.98, // |eta| 1.5-2.5
                                                            0, 0,    0}}); // |eta| > 2.5
        filtereff_etapt(muons, _muTrackEff2d);
      }


      /// Randomly filter the supplied particle list by parameterised muon efficiency
      inline void applyMuonEff(std::vector<HEPUtils::Particle*>& muons) {
        if(muons.empty()) return;
        auto keptMuonsEnd = std::remove_if(muons.begin(), muons.end(),
                                           [](const HEPUtils::Particle* p) {
                                             bool rm(p->abseta() > 2.4 || p->pT() < 10);
                                             if (!rm)
                                             {
                                               const double eff = 0.95 * (p->abseta() < 1.5 ? 1 : exp(0.5 - 5e-4*p->pT()));
                                               rm = (HEPUtils::rand01() > eff);
                                             } 
                                             if (rm) delete p;
                                             return rm;
                                           } );       
        muons.erase(keptMuonsEnd, muons.end());
      }


      /// @brief Randomly filter the supplied particle list by parameterised tau efficiency
      /// @note No delete, because this should only ever be applied to copies of the Event Particle* vectors in Analysis routines
      inline void applyTauEfficiency(std::vector<HEPUtils::Particle*>& taus) {
        filtereff(taus, 0.6, false);
      }


      /// @brief Randomly smear the supplied electrons' momenta by parameterised resolutions
      ///
      /// Function that mimics the DELPHES electron energy resolution.
      /// We need to smear E, then recalculate pT, then reset the 4-vector.
      inline void smearElectronEnergy(std::vector<HEPUtils::Particle*>& electrons) {

        std::random_device rd;
        std::mt19937 gen(rd());

        // Now loop over the electrons and smear the 4-vectors
        for (HEPUtils::Particle* e : electrons) {

          // Calculate resolution
          // for pT > 0.1 GeV, E resolution = |eta| < 0.5 -> sqrt(0.06^2 + pt^2 * 1.3e-3^2)
          //                                  |eta| < 1.5 -> sqrt(0.10^2 + pt^2 * 1.7e-3^2)
          //                                  |eta| < 2.5 -> sqrt(0.25^2 + pt^2 * 3.1e-3^2)
          double resolution = 0;
          const double abseta = e->abseta();
          if (e->pT() > 0.1 && abseta < 2.5) {
            if (abseta < 0.5) {
              resolution = HEPUtils::add_quad(0.06, 1.3e-3 * e->pT());
            } else if (abseta < 1.5) {
              resolution = HEPUtils::add_quad(0.10, 1.7e-3 * e->pT());
            } else { // still |eta| < 2.5
              resolution = HEPUtils::add_quad(0.25, 3.1e-3 * e->pT());
            }
          }

          // Smear by a Gaussian centered on the current energy, with width given by the resolution
          if (resolution > 0) {
            std::normal_distribution<> d(e->E(), resolution);
            double smeared_E = d(gen);
            if (smeared_E < 0) smeared_E = 0;
            // double smeared_pt = smeared_E/cosh(e->eta()); ///< @todo Should be cosh(|eta|)?
            // std::cout << "BEFORE eta " << electron->eta() << std::std::endl;
            e->set_mom(HEPUtils::P4::mkEtaPhiME(e->eta(), e->phi(), e->mass(), smeared_E));
            // std::cout << "AFTER eta " << electron->eta() << std::std::endl;
          }
        }
      }


      /// @brief Randomly smear the supplied muons' momenta by parameterised resolutions
      ///
      /// Function that mimics the DELPHES muon momentum resolution.
      /// We need to smear pT, then recalculate E, then reset the 4-vector.
      inline void smearMuonMomentum(std::vector<HEPUtils::Particle*>& muons) {

        std::random_device rd;
        std::mt19937 gen(rd());

        // Now loop over the muons and smear the 4-vectors
        for (HEPUtils::Particle* p : muons) {

          // Calculate resolution
          // for pT > 0.1 GeV, mom resolution = |eta| < 0.5 -> sqrt(0.01^2 + pt^2 * 2.0e-4^2)
          //                                    |eta| < 1.5 -> sqrt(0.02^2 + pt^2 * 3.0e-4^2)
          //                                    |eta| < 2.5 -> sqrt(0.05^2 + pt^2 * 2.6e-4^2)
          double resolution = 0;
          const double abseta = p->abseta();
          if (p->pT() > 0.1 && abseta < 2.5) {
            if (abseta < 0.5) {
              resolution = HEPUtils::add_quad(0.01, 2.0e-4 * p->pT());
            } else if (abseta < 1.5) {
              resolution = HEPUtils::add_quad(0.02, 3.0e-4 * p->pT());
            } else { // still |eta| < 2.5... but isn't CMS' mu acceptance < 2.4?
              resolution = HEPUtils::add_quad(0.05, 2.6e-4 * p->pT());
            }
          }

          // Smear by a Gaussian centered on the current pT, with width given by the resolution
          std::normal_distribution<> d(p->pT(), resolution*p->pT());
          double smeared_pt = d(gen);
          if (smeared_pt < 0) smeared_pt = 0;
          // const double smeared_E = smeared_pt*cosh(mu->eta()); ///< @todo Should be cosh(|eta|)?
          // std::cout << "Muon pt " << mu_pt << " smeared " << smeared_pt << std::endl;
          p->set_mom(HEPUtils::P4::mkEtaPhiMPt(p->eta(), p->phi(), p->mass(), smeared_pt));
        }
      }


      /// @brief Randomly smear the supplied jets' momenta by parameterised resolutions
      ///
      /// Function that mimics the DELPHES jet momentum resolution.
      /// We need to smear pT, then recalculate E, then reset the 4-vector
      inline void smearJets(std::vector<HEPUtils::Jet*>& jets) {

        // Const resolution for now
        /// @todo This is the ATLAS number... I can't find values for the CMS parameterisation, cf.
        ///   https://cds.cern.ch/record/1339945/files/JME-10-014-pas.pdf
        ///   https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuideJetResolution
        ///   https://github.com/adrager/cmssw/blob/CMSSW_7_2_X/CondFormats/JetMETObjects/test/TestCorrections.C
        const double resolution = 0.03;

        // Now loop over the jets and smear the 4-vectors
        std::random_device rd;
        std::mt19937 gen(rd());
        std::normal_distribution<> d(1., resolution);
        for (HEPUtils::Jet* jet : jets) {
          // Smear by a Gaussian centered on 1 with width given by the (fractional) resolution
          double smear_factor = d(gen);
          /// @todo Is this the best way to smear? Should we preserve the mean jet energy, or pT, or direction?
          jet->set_mom(HEPUtils::P4::mkXYZM(jet->mom().px()*smear_factor, jet->mom().py()*smear_factor, jet->mom().pz()*smear_factor, jet->mass()));
        }
      }


      /// @brief Randomly smear the supplied hadronic taus' momenta by parameterised resolutions
      ///
      /// We need to smear pT, then recalculate E, then reset the 4-vector.
      /// Same as for jets, but on a vector of particles. (?)
      inline void smearTaus(std::vector<HEPUtils::Particle*>& taus) {

        // Const resolution for now
        const double resolution = 0.03;

        // Now loop over the jets and smear the 4-vectors
        std::random_device rd;
        std::mt19937 gen(rd());
        std::normal_distribution<> d(1., resolution);
        for (HEPUtils::Particle* p : taus) {
          // Smear by a Gaussian centered on 1 with width given by the (fractional) resolution
          double smear_factor = d(gen);
          /// @todo Is this the best way to smear? Should we preserve the mean jet energy, or pT, or direction?
          p->set_mom(HEPUtils::P4::mkXYZM(p->mom().px()*smear_factor, p->mom().py()*smear_factor, p->mom().pz()*smear_factor, p->mass()));
        }
      }


      //@}


    }
  }
}
