// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

#ifndef ELECTROWEAK_INPUT_H
#define ELECTROWEAK_INPUT_H

#include <cmath>

namespace flexiblesusy {

/**
 * @namespace Electroweak_constants
 *
 * Contains Standard Model parameters at the electroweak scale
 */
namespace Electroweak_constants {
   namespace {
      const double vev = 246.22;
      const double root2 = sqrt(2.0);
      const double mtoprun = 165;
      const double mbrun = 2.9;
      const double mtau = 1.77699;
      const double yt = mtoprun * root2 / vev;
      const double yb = mbrun * root2 / vev;
      const double ytau = mtau * root2 / vev;
      const double MZ = 91.1876;
      const double Error_MZ = 0.0021; ///< uncertainty on MZ from PDG
      const double MW = 80.404;
      const double MH = 125.9; ///< Higgs mass from PDG
      const double Error_MH = 0.4; ///< uncertainty on MH from PDG
      const double MUP = 2.4e-3; ///< default running quark mass from PDG
      const double MDOWN = 4.75e-3; ///< default running quark mass from PDG
      const double MSTRANGE = 0.104; ///< default running quark mass from PDG
      const double MCHARM = 1.27; ///< default running quark mass from PDG
      const double MBOTTOM = 4.20; ///< default running quark mass from PDG
      const double MTOP = 165.0; ///< default running quark mass from PDG
      const double MELECTRON = 5.10998902e-4; ///< default pole lepton mass from PDG
      const double MMUON = 1.05658357e-1; ///< default pole lepton mass from PDG
      const double MTAU = 1.77699; ///< default pole lepton mass from PDG
      const double PMTOP = 173.18; ///< default pole mass from CDF/D0 Run II 1207.1069
      const double PMBOTTOM = 4.9; ///< default pole mass from PDG
      const double aem = 1.0 / 127.916; // at MZ
      const double sinThetaW2 = 0.23122;
      const double sinThetaW = sqrt(sinThetaW2);
      const double cosThetaW2 = 1 - sinThetaW2;
      const double cosThetaW = sqrt(cosThetaW2);
      const double alpha1 = 5.0 * aem / (3.0 * (1.0 - sinThetaW2));
      const double alpha2 = aem / sinThetaW2;
      const double alpha3 = 0.1184; // at MZ
      const double e  = sqrt(4.0 * M_PI * aem);
      const double g1 = sqrt(4.0 * M_PI * alpha1);
      const double g2 = sqrt(4.0 * M_PI * alpha2);
      const double g3 = sqrt(4.0 * M_PI * alpha3);
      const double CKM_THETA12 = 0.229206; ///< From Vus/Vud in global CKM fit, PDG
      const double CKM_THETA13 = 0.003960; ///< From Vub in global CKM fit, PDG
      const double CKM_THETA23 = 0.042223; ///< From Vcb/Vtb in global CKM fit, PDG
      const double CKM_DELTA   = 0.;
      const double PMNS_THETA12 = 0.5 * asin(sqrt(0.846));
      const double PMNS_THETA13 = 0.5 * asin(sqrt(0.093));
      const double PMNS_THETA23 = 0.5 * asin(sqrt(0.999));
      const double PMNS_DELTA   = 0.;
      const double PMNS_ALPHA1  = 0.;
      const double PMNS_ALPHA2  = 0.;
      const double gfermi = 1.16637e-5; ///< Fermi constant G_F
   }
}

}

#endif
