// -*- C++ -*-
//
// This file is part of MCUtils -- https://bitbucket.org/andybuckley/mcutils
// Copyright (C) 2013-2014 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of MCUtils code in other projects is permitted provided this
// notice is retained and the MCUtils namespace and include path are changed.
//
#pragma once

/// @file Utility functions for querying PDG ID codes (many from HepPID)
/// @author Andy Buckley <andy.buckley@cern.ch>

#include "HEPUtils/MathUtils.h"
#include "MCUtils/PIDCodes.h"

namespace MCUtils {
  namespace PID {

    using HEPUtils::in_closed_range;
    using HEPUtils::in_range;


    /// @name Utility functions
    //@{

    /// Absolute value (just use abs()!)
    inline int abspid(int pid) {
      return abs(pid);
    }

    ///  PID digits (base 10) are: n nr nl nq1 nq2 nq3 nj
    ///  The Location enum provides a convenient index into the PID.
    enum Location { nj=1, nq3, nq2, nq1, nl, nr, n, n8, n9, n10 };

    /// Split the PID into constituent integers
    inline unsigned short digit(Location loc, int pid) {
      //  PID digits (base 10) are: n nr nl nq1 nq2 nq3 nj (cf. Location)
      int numerator = (int) std::pow(10.0, (loc-1));
      return (abspid(pid)/numerator) % 10;
    }

    /// Returns everything beyond the 7th digit (e.g. outside the numbering scheme)
    inline int extraBits(int pid) {
      return abspid(pid)/10000000;
    }

    /// @brief Return the first two digits if this is a "fundamental" particle
    /// @note ID = 100 is a special case (internal generator ID's are 81-100)
    inline int fundamentalID(int pid) {
      if (extraBits(pid) > 0) return 0;
      if (digit(nq2,pid) == 0 && digit(nq1,pid) == 0) {
        return abspid(pid) % 10000;
      } else if (abspid(pid) <= 100) {
        return abspid(pid);
      } else {
        return 0;
      }
    }

    //@}


    /// @name Nucleus/ion functions
    //@{

    /// @brief Is this a nucleus PID?
    ///
    /// This implements the 2006 Monte Carlo nuclear code scheme.
    /// Ion numbers are +/- 10LZZZAAAI.
    /// AAA is A - total baryon number
    /// ZZZ is Z - total charge
    /// L is the total number of strange quarks.
    /// I is the isomer number, with I=0 corresponding to the ground state.
    inline bool isNucleus(int pid) {
      // a proton can also be a Hydrogen nucleus
      if (abspid(pid) == 2212) { return true; }
      // new standard: +/- 10LZZZAAAI
      if ((digit(n10,pid) == 1) && (digit(n9,pid) == 0)) {
        // charge should always be less than or equal to baryon number
        // the following line is A >= Z
        if ((abspid(pid)/10)%1000 >= (abspid(pid)/10000)%1000) { return true; }
      }
      return false;
    }

    /// Get the atomic number (number of protons) in a nucleus/ion
    /// @note Ion numbers are +/- 10LZZZAAAI.
    inline int Z(int pid) {
      // A proton can also be a Hydrogen nucleus
      if (abspid(pid) == 2212) { return 1; }
      if (isNucleus(pid)) return (abspid(pid)/10000)%1000;
      return 0;
    }

    /// Get the atomic weight (number of nucleons) in a nucleus/ion
    /// @note Ion numbers are +/- 10LZZZAAAI.
    inline int A(int pid) {
      // a proton can also be a Hydrogen nucleus
      if (abspid(pid) == 2212) { return 1; }
      if (isNucleus(pid)) return (abspid(pid)/10)%1000;
      return 0;
    }

    /// If this is a nucleus (ion), get nLambda
    /// @note Ion numbers are +/- 10LZZZAAAI.
    inline int lambda(int pid) {
      // a proton can also be a Hydrogen nucleus
      if (abspid(pid) == 2212) { return 0; }
      if (isNucleus(pid)) return digit(n8,pid);
      return 0;
    }

    //@}


    /// @name Quark composite functions
    //@{

    /// Check to see if this is a valid meson
    inline bool isMeson(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (abspid(pid) <= 100) { return false; }
      if (fundamentalID(pid) <= 100 && fundamentalID(pid) > 0) { return false; }
      int aid = abspid(pid);
      if (aid == 130 || aid == 310 || aid == 210) { return true; }
      // EvtGen uses some odd numbers
      if (aid == 150 || aid == 350 || aid == 510 || aid == 530) { return true; }
      // pomeron, etc.
      if (pid == 110 || pid == 990 || pid == 9990) { return true; }
      if (digit(nj,pid) > 0 && digit(nq3,pid) > 0 && digit(nq2,pid) > 0 && digit(nq1,pid) == 0) {
        // check for illegal antiparticles
        if (digit(nq3,pid) == digit(nq2,pid) && pid < 0) {
          return false;
        } else {
          return true;
        }
      }
      return false;
    }

    /// Check to see if this is a valid baryon
    inline bool isBaryon(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (abspid(pid) <= 100) { return false; }
      if (fundamentalID(pid) <= 100 && fundamentalID(pid) > 0) { return false; }
      if (abspid(pid) == 2110 || abspid(pid) == 2210) { return true; }
      if (digit(nj,pid) > 0  && digit(nq3,pid) > 0 && digit(nq2,pid) > 0 && digit(nq1,pid) > 0) { return true; }
      return false;
    }

    // Check to see if this is a valid diquark
    inline bool isDiquark(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (abspid(pid) <= 100) { return false; }
      if (fundamentalID(pid) <= 100 && fundamentalID(pid) > 0) { return false; }
      if (digit(nj,pid) > 0  && digit(nq3,pid) == 0 && digit(nq2,pid) > 0 && digit(nq1,pid) > 0) {  // diquark signature
        // EvtGen uses the diquarks for quark pairs, so, for instance,
        //   5501 is a valid "diquark" for EvtGen
        //if (digit(nj) == 1 && digit(nq2) == digit(nq1)) {    // illegal
        //   return false;
        //} else {
        return true;
        //}
      }
      return false;
    }
    inline bool isDiQuark(int pid) { return isDiquark(pid); }

    /// Check to see if this is a valid pentaquark
    inline bool isPentaquark(int pid) {
      // a pentaquark is of the form 9abcdej,
      // where j is the spin and a, b, c, d, and e are quarks
      if (extraBits(pid) > 0) { return false; }
      if (digit(n,pid) != 9)  { return false; }
      if (digit(nr,pid) == 9 || digit(nr,pid) == 0)  { return false; }
      if (digit(nj,pid) == 9 || digit(nl,pid) == 0)  { return false; }
      if (digit(nq1,pid) == 0)  { return false; }
      if (digit(nq2,pid) == 0)  { return false; }
      if (digit(nq3,pid) == 0)  { return false; }
      if (digit(nj,pid) == 0)  { return false; }
      // check ordering
      if (digit(nq2,pid) > digit(nq1,pid))  { return false; }
      if (digit(nq1,pid) > digit(nl,pid))  { return false; }
      if (digit(nl,pid) > digit(nr,pid))  { return false; }
      return true;
    }

    /// Is this a valid hadron ID?
    inline bool isHadron(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (isMeson(pid))   { return true; }
      if (isBaryon(pid))  { return true; }
      if (isPentaquark(pid)) { return true; }
      return false;
    }

    //@}


    /// @name More general particle class identification functions
    //@{

    /// Is this a valid lepton ID?
    inline bool isLepton(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (fundamentalID(pid) >= 11 && fundamentalID(pid) <= 18) { return true; }
      return false;
    }

    /// Is this a fundamental SUSY particle?
    inline bool isSUSY(int pid) {
      // fundamental SUSY particles have n = 1 or 2
      if (extraBits(pid) > 0) { return false; }
      if (digit(n,pid) != 1 && digit(n,pid) != 2)  { return false; }
      if (digit(nr,pid) != 0)  { return false; }
      // check fundamental part
      if (fundamentalID(pid) == 0)  { return false; }
      return true;
    }

    /// Is this an R-hadron?
    inline bool isRhadron(int pid) {
      // an R-hadron is of the form 10abcdj,
      // where j is the spin and a, b, c, and d are quarks or gluons
      if (extraBits(pid) > 0) { return false; }
      if (digit(n,pid) != 1)  { return false; }
      if (digit(nr,pid) != 0)  { return false; }
      // make sure this isn't a SUSY particle
      if (isSUSY(pid)) { return false; }
      // All R-hadrons have at least 3 core digits
      if (digit(nq2,pid) == 0)  { return false; }
      if (digit(nq3,pid) == 0)  { return false; }
      if (digit(nj,pid) == 0)  { return false; }
      return true;
    }
    inline bool isRHadron(int pid) { return isRhadron(pid); }

    /// Is this a technicolor particle?
    inline bool isTechnicolor(int pid) {
      if (extraBits(pid) > 0) { return false; }
      return digit(n,pid) == 3;
    }

    /// Is this an excited (composite) quark or lepton?
    inline bool isExcited(int pid) {
      if (extraBits(pid) > 0) { return false; }
      return digit(n,pid) == 4;
    }

    /// Is this a Kaluza-Klein excitation?
    inline bool isKK(int pid) {
      if (extraBits(pid) > 0) { return false; }
      const int ndigit = digit(n,pid);
      return ndigit == 5 || ndigit == 6;
    }

    /// Is this a graviton?
    inline bool isGraviton(int pid) {
      return pid == 39;
    }

    /// Is this a BSM particle (including graviton)?
    inline bool isBSM(int pid) {
      return isSUSY(pid) || isRhadron(pid) || isTechnicolor(pid) ||
        isExcited(pid) || isKK(pid) || isGraviton(pid);
    }

    /// Is this a pomeron, odderon, or generic reggeon?
    inline bool isReggeon(int pid) {
      return pid == 110 || pid == 990 || pid == 9990;
    }

    /// Check to see if this is a valid PID (i.e. matches any known scheme)
    inline bool isValid(int pid) {
      if (extraBits(pid) > 0) {
        if (isNucleus(pid)) return true;
        return false;
      }
      if (isBSM(pid)) return true;
      if (isHadron(pid)) return true;
      if (isDiquark(pid)) return true;
      if (fundamentalID(pid) > 0) {
        return true;
        // AB - disabled this to remove need for PID -> name lookup.
        // if (pid > 0) return true; else return hasFundamentalAnti(pid);
      }
      // Don't recognize this number
      return false;
    }

    //@}


    /// @name Parton content functions
    //@{

    /// Does this particle contain an up quark?
    inline bool hasUp(const int & pid) {
      if (extraBits(pid) > 0) { return false; }
      if (fundamentalID(pid) > 0) { return false; }
      if (digit(nq3,pid) == 2 || digit(nq2,pid) == 2 || digit(nq1,pid) == 2) return true;
      return false;
    }
    /// Does this particle contain a down quark?
    inline bool hasDown(const int & pid) {
      if (extraBits(pid) > 0) { return false; }
      if (fundamentalID(pid) > 0) { return false; }
      if (digit(nq3,pid) == 1 || digit(nq2,pid) == 1 || digit(nq1,pid) == 1) return true;
      return false;
    }
    /// Does this particle contain a strange quark?
    inline bool hasStrange(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (fundamentalID(pid) > 0) { return false; }
      if (digit(nq3,pid) == 3 || digit(nq2,pid) == 3 || digit(nq1,pid) == 3) return true;
      return false;
    }
    /// Does this particle contain a charm quark?
    inline bool hasCharm(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (fundamentalID(pid) > 0) { return false; }
      if (digit(nq3,pid) == 4 || digit(nq2,pid) == 4 || digit(nq1,pid) == 4) return true;
      return false;
    }
    /// Does this particle contain a bottom quark?
    inline bool hasBottom(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (fundamentalID(pid) > 0) { return false; }
      if (digit(nq3,pid) == 5 || digit(nq2,pid) == 5 || digit(nq1,pid) == 5) return true;
      return false;
    }
    /// Does this particle contain a top quark?
    inline bool hasTop(int pid) {
      if (extraBits(pid) > 0) { return false; }
      if (fundamentalID(pid) > 0) { return false; }
      if (digit(nq3,pid) == 6 || digit(nq2,pid) == 6 || digit(nq1,pid) == 6) return true;
      return false;
    }

    //@}


    /// @name Angular momentum functions
    //@{

    /// jSpin returns 2J+1, where J is the total spin
    inline int jSpin(int pid) {
      if (fundamentalID(pid) > 0) {
        // some of these are known
        int fund = fundamentalID(pid);
        if (fund > 0 && fund < 7) return 2;
        if (fund == 9) return 3;
        if (fund > 10 && fund < 17) return 2;
        if (fund > 20 && fund < 25) return 3;
        return 0;
      } else if (extraBits(pid) > 0) {
        return 0;
      }
      return abspid(pid)%10;
    }

    /// sSpin returns 2S+1, where S is the spin
    inline int  sSpin(int pid) {
      if (!isMeson(pid)) { return 0; }
      int inl = digit(nl,pid);
      //int tent = digit(n,pid);
      int js = digit(nj,pid);
      if (digit(n,pid) == 9) { return 0; } // tentative ID
      //if (tent == 9) { return 0; }   // tentative assignment
      if (inl == 0 && js >= 3) {
        return 1;
      } else if (inl == 0  && js == 1) {
        return 0;
      } else if (inl == 1  && js >= 3) {
        return 0;
      } else if (inl == 2  && js >= 3) {
        return 1;
      } else if (inl == 1  && js == 1) {
        return 1;
      } else if (inl == 3  && js >= 3) {
        return 1;
      }
      // Default to zero
      return 0;
    }

    /// lSpin returns 2L+1, where L is the orbital angular momentum
    inline int lSpin(int pid) {
      if (!isMeson(pid)) { return 0; }
      int inl = digit(nl,pid);
      //int tent = digit(n,pid);
      int js = digit(nj,pid);
      if (digit(n,pid) == 9) { return 0; } // tentative ID
      if (inl == 0 && js == 3) {
        return 0;
      } else if (inl == 0 && js == 5) {
        return 1;
      } else if (inl == 0 && js == 7) {
        return 2;
      } else if (inl == 0 && js == 9) {
        return 3;
      } else if (inl == 0  && js == 1) {
        return 0;
      } else if (inl == 1  && js == 3) {
        return 1;
      } else if (inl == 1  && js == 5) {
        return 2;
      } else if (inl == 1  && js == 7) {
        return 3;
      } else if (inl == 1  && js == 9) {
        return 4;
      } else if (inl == 2  && js == 3) {
        return 1;
      } else if (inl == 2  && js == 5) {
        return 2;
      } else if (inl == 2  && js == 7) {
        return 3;
      } else if (inl == 2  && js == 9) {
        return 4;
      } else if (inl == 1  && js == 1) {
        return 1;
      } else if (inl == 3  && js == 3) {
        return 2;
      } else if (inl == 3  && js == 5) {
        return 3;
      } else if (inl == 3  && js == 7) {
        return 4;
      } else if (inl == 3  && js == 9) {
        return 5;
      }
      // Default to zero
      return 0;
    }

    //@}


    /// @name Charge functions
    //@{

    /// Three times the charge (as integer)
    inline int threeCharge(int pid) {
      int charge=0;
      int ida, sid;
      unsigned short q1, q2, q3;
      static int ch100[100] = { -1, 2,-1, 2,-1, 2,-1, 2, 0, 0,
                                -3, 0,-3, 0,-3, 0,-3, 0, 0, 0,
                                0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 3, 0, 0, 3, 0, 0, 0,
                                0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
                                0, 6, 3, 6, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
      q1 = digit(nq1,pid);
      q2 = digit(nq2,pid);
      q3 = digit(nq3,pid);
      ida = abspid(pid);
      sid = fundamentalID(pid);
      if (ida == 0 || extraBits(pid) > 0) {      // ion or illegal
        return 0;
      } else if (sid > 0 && sid <= 100) {  // use table
        charge = ch100[sid-1];
        if(ida==1000017 || ida==1000018) { charge = 0; }
        if(ida==1000034 || ida==1000052) { charge = 0; }
        if(ida==1000053 || ida==1000054) { charge = 0; }
        if(ida==5100061 || ida==5100062) { charge = 6; }
      } else if (digit(nj,pid) == 0) {         // KL, Ks, or undefined
        return 0;
      } else if (isMeson(pid)) {           // mesons
        if (q2 == 3 || q2 == 5) {
          charge = ch100[q3-1] - ch100[q2-1];
        } else {
          charge = ch100[q2-1] - ch100[q3-1];
        }
      } else if (isDiQuark(pid)) {         // diquarks
        charge = ch100[q2-1] + ch100[q1-1];
      } else if (isBaryon(pid)) {          // baryons
        charge = ch100[q3-1] + ch100[q2-1] + ch100[q1-1];
      } else {      // unknown
        return 0;
      }
      if (charge == 0) {
        return 0;
      } else if (pid < 0) {
        charge = -charge;
      }
      return charge;
    }


    /// Return the charge (as floating point)
    inline double charge(int pid) { return threeCharge(pid)/3.0; }

    //@}


    /// @name General PID-based classifier functions
    //@{

    /// Determine if the particle is electrically charged
    inline bool isCharged(int pid) {
      return threeCharge(pid) != 0;
    }

    /// Determine if the particle is electrically neutral
    inline bool isNeutral(int pid) {
      return threeCharge(pid) == 0;
    }

    //@}


    /// @name Fundamental particles
    //@{

    /// Determine if the PID is that of a quark
    inline bool isQuark(int pid) {
      return in_closed_range(abs(pid), 1, 6);
    }

    /// Determine if the PID is that of a gluon
    inline bool isGluon(int pid) {
      return pid == GLUON;
    }

    /// Determine if the PID is that of a parton (quark or gluon)
    inline bool isParton(int pid) {
      return isGluon(pid) || isQuark(pid);
    }

    /// Determine if the PID is that of a photon
    inline bool isPhoton(int pid) {
      return pid == PHOTON;
    }

    /// Determine if the PID is that of an electron or positron
    inline bool isElectron(int pid) {
      return abs(pid) == ELECTRON;
    }

    /// Determine if the PID is that of an muon or antimuon
    inline bool isMuon(int pid) {
      return abs(pid) == MUON;
    }

    /// Determine if the PID is that of an tau or antitau
    inline bool isTau(int pid) {
      return abs(pid) == TAU;
    }

    /// Determine if the PID is that of a charged lepton
    inline bool isChLepton(int pid) {
      const long apid = abs(pid);
      return apid == 11 || apid == 13 || apid == 15;
    }

    /// Determine if the PID is that of a neutrino
    inline bool isNeutrino(int pid) {
      const long apid = abs(pid);
      return apid == 12 || apid == 14 || apid == 16;
    }



    /// @todo Add isElectron, Muon, Tau (and +- specific versions?)... and is(Anti)Proton?

    /// Determine if the PID is that of a W+
    inline bool isWplus(int pid) {
      return pid == WPLUSBOSON;
    }

    /// Determine if the PID is that of a W-
    inline bool isWminus(int pid) {
      return pid == WMINUSBOSON;
    }

    /// Determine if the PID is that of a W+-
    inline bool isW(int pid) {
      return abs(pid) == WPLUSBOSON;
    }

    /// Determine if the PID is that of a Z0
    inline bool isZ(int pid) {
      return pid == Z0BOSON;
    }

    /// Determine if the PID is that of an SM/lightest SUSY Higgs
    inline bool isHiggs(int pid) {
      return pid == HIGGSBOSON || pid == 26; //< @todo Check on 26 still needed? (used in HERWIG SUSY, for example)
    }

    /// @todo isSUSYHiggs?

    /// Determine if the PID is that of a t/tbar
    inline bool isTop(int pid) {
      return abs(pid) == 6;
    }

    //@}


    /// @name Hadron and parton flavour classification
    //@{

    /// Determine if the particle is a heavy flavour hadron or parton
    inline bool isHeavyFlavour(int pid) {
      return hasCharm(pid) || hasBottom(pid) || hasTop(pid);
    }

    // /// Determine if the particle is a light-flavour flavour hadron or parton
    // inline bool isLightFlavour(int pid) {
    //   return !isHeavyFlavour();
    // }

    /// Determine if the PID is that of a heavy parton (c,b,t)
    inline bool isHeavyParton(int pid) {
      return isParton(pid) && isHeavyFlavour(pid);
    }

    /// Determine if the PID is that of a light parton (u,d,s)
    inline bool isLightParton(int pid) {
      return isParton(pid) && !isHeavyFlavour(pid);
    }


    /// Determine if the PID is that of a heavy flavour (b or c) meson
    inline bool isHeavyMeson(int pid) {
      return isMeson(pid) && isHeavyFlavour(pid);
    }

    /// Determine if the PID is that of a heavy flavour (b or c) baryon
    inline bool isHeavyBaryon(int pid) {
      return isBaryon(pid) && isHeavyFlavour(pid);
    }

    /// Determine if the PID is that of a heavy flavour (b or c) hadron
    inline bool isHeavyHadron(int pid) {
      return isHadron(pid) && isHeavyFlavour(pid);
    }

    /// Determine if the PID is that of a light flavour (not b or c) meson
    inline bool isLightMeson(int pid) {
      return isMeson(pid) && !isHeavyFlavour(pid);
    }

    /// Determine if the PID is that of a light flavour (not b or c) baryon
    inline bool isLightBaryon(int pid) {
      return isBaryon(pid) && !isHeavyFlavour(pid);
    }

    /// Determine if the PID is that of a light flavour (not b or c) hadron
    inline bool isLightHadron(int pid) {
      return isHadron(pid) && !isHeavyFlavour(pid);
    }


    /// Determine if the PID is that of a b-meson.
    inline bool isBottomMeson(int pid) {
      return hasBottom(pid) && isMeson(pid);
    }

    /// Determine if the PID is that of a b-baryon.
    inline bool isBottomBaryon(int pid) {
      return hasBottom(pid) && isBaryon(pid);
    }

    /// Determine if the PID is that of a b-hadron.
    inline bool isBottomHadron(int pid) {
      return hasBottom(pid) && isHadron(pid);
    }


    /// @brief Determine if the PID is that of a c-meson.
    ///
    /// @note Specifically, the _heaviest_ quark is a c: a B_c is a b-meson and NOT a c-meson.
    /// Charmonia (closed charm) are counted as c-mesons here.
    inline bool isCharmMeson(int pid) {
      return isMeson(pid) && hasCharm(pid) &&
        !hasBottom(pid);
    }

    /// @brief Determine if the PID is that of a c-baryon.
    ///
    /// @note Specifically, the _heaviest_ quark is a c: a baryon containing a b & c
    /// is a b-baryon and NOT a c-baryon. To test for the simpler case, just use
    /// a combination of hasCharm() and isBaryon().
    inline bool isCharmBaryon(int pid) {
      return isBaryon(pid) && hasCharm(pid) &&
        !hasBottom(pid);
    }

    /// Determine if the PID is that of a c-hadron.
    ///
    /// @note Specifically, the _heaviest_ quark is a c: a baryon containing a b & c
    /// is a b-baryon and NOT a c-baryon. To test for the simpler case, just use
    /// a combination of hasCharm() and isBaryon().
    inline bool isCharmHadron(int pid) {
      return isHadron(pid) && hasCharm(pid) &&
        !hasBottom(pid);
    }


    /// Determine if the PID is that of a strange meson
    ///
    /// @note Specifically, the _heaviest_ quark is an s: if it also contains
    /// either charm or bottom, it is not considered to be a strange hadron.
    inline bool isStrangeMeson(int pid) {
      return isMeson(pid) && hasStrange(pid) &&
        !(hasBottom(pid) || hasCharm(pid));
    }

    /// Determine if the PID is that of a strange baryon
    ///
    /// @note Specifically, the _heaviest_ quark is an s: if it also contains
    /// either charm or bottom, it is not considered to be a strange hadron.
    inline bool isStrangeBaryon(int pid) {
      return isBaryon(pid) && hasStrange(pid) &&
        !(hasBottom(pid) || hasCharm(pid));
    }

    /// Determine if the PID is that of a strange hadron
    ///
    /// @note Specifically, the _heaviest_ quark is an s: if it also contains
    /// either charm or bottom, it is not considered to be a strange hadron.
    inline bool isStrangeHadron(int pid) {
      return isHadron(pid) && hasStrange(pid) &&
        !(hasBottom(pid) || hasCharm(pid));
    }

    //@}


    /// @name Interaction classifiers
    //@{

    /// Determine if the PID is that of a strongly interacting particle
    inline bool isStrongInteracting(int pid) {
      return isParton(pid) || isHadron(pid);
    }

    /// Determine if the PID is that of a electromagnetically interacting particle
    inline bool isEMInteracting(int pid) {
      return isCharged(pid) || isPhoton(pid);
    }

    /// Determine if the PID is that of a weakly interacting particle
    ///
    /// @note Photons are considered weak-interacting, as are all hadrons and
    /// leptons (we can't distinguish between L and R fermions at physical particle level).
    inline bool isWeakInteracting(int pid) {
      return !isGluon(pid) && !isGraviton(pid);
    }

    //@}


    /// @name Other classifiers
    //@{

    /// Determine if the PID is in the generator-specific range
    inline bool isGenSpecific(int pid) {
      return in_range(pid, 80, 101);
    }

    /// Determine if the PID is that of an EW scale resonance
    ///
    /// @todo Also include SUSY, technicolor, etc. etc.? Maybe via a isStandardModel(pid) function, but there are stable BSM particles (in principle)
    inline bool isResonance(int pid) {
      return isW(pid) || isZ(pid) || isHiggs(pid) || isTop(pid);
    }

    /// Check the PID for usability in transport codes like Geant4
    ///
    /// @todo Should exclude neutrinos/LSP, since the ATLAS G4 interface deletes them immediately?
    inline bool isTransportable(int pid) {
      // return !isResonance(pid) && !isParton(pid) && !isGenSpecific(pid);
      return isPhoton(pid) || isHadron(pid) || isLepton(pid);
    }

    //@}


  }
}
