// -*- C++ -*-
//
// This file is part of MCUtils -- https://bitbucket.org/andybuckley/mcutils
// Copyright (C) 2013-2015 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of MCUtils code in other projects is permitted provided this
// notice is retained and the MCUtils namespace and include path are changed.
//
#pragma once

/// @file Convenience names for PDG ID codes, for cleaner code
/// @author Andy Buckley <andy.buckley@cern.ch>

namespace MCUtils {
  namespace PID {


    /// @name Leptons
    //@{
    static const int ELECTRON = 11;
    static const int POSITRON = -ELECTRON;
    static const int EMINUS = ELECTRON;
    static const int EPLUS = POSITRON;
    static const int MUON = 13;
    static const int ANTIMUON = -MUON;
    static const int TAU = 15;
    static const int ANTITAU = -TAU;
    //@}

    /// @name Neutrinos
    //@{
    static const int NU_E = 12;
    static const int NU_EBAR = -NU_E;
    static const int NU_MU = 14;
    static const int NU_MUBAR = -NU_MU;
    static const int NU_TAU = 16;
    static const int NU_TAUBAR = -NU_TAU;
    //@}

    /// @name Bosons
    //@{
    static const int PHOTON = 22;
    static const int GAMMA = PHOTON;
    static const int GLUON = 21;
    static const int WPLUSBOSON = 24;
    static const int WMINUSBOSON = -WPLUSBOSON;
    static const int WPLUS = WPLUSBOSON;
    static const int WMINUS = WMINUSBOSON;
    static const int Z0BOSON = 23;
    static const int ZBOSON = Z0BOSON;
    static const int Z0 = Z0BOSON;
    static const int HIGGSBOSON = 25;
    static const int HIGGS = HIGGSBOSON;
    //@}

    /// @name Quarks
    //@{
    static const int DQUARK = 1;
    static const int UQUARK = 2;
    static const int SQUARK = 3;
    static const int CQUARK = 4;
    static const int BQUARK = 5;
    static const int TQUARK = 6;
    //@}

    /// @name Nucleons
    //@{
    static const int PROTON = 2212;
    static const int ANTIPROTON = -PROTON;
    static const int PBAR = ANTIPROTON;
    static const int NEUTRON = 2112;
    static const int ANTINEUTRON = -NEUTRON;
    //@}

    /// @name Light mesons
    //@{
    static const int PI0 = 111;
    static const int PIPLUS = 211;
    static const int PIMINUS = -PIPLUS;
    static const int K0L = 130;
    static const int K0S = 310;
    static const int KPLUS = 321;
    static const int KMINUS = -KPLUS;
    static const int ETA = 221;
    static const int ETAPRIME = 331;
    static const int PHI = 333;
    static const int OMEGA = 223;
    //@}

    /// @name Charmonia
    //@{
    static const int ETAC = 441;
    static const int JPSI = 443;
    static const int PSI2S = 100443;
    //@}

    /// @name Charm mesons
    //@{
    static const int D0 = 421;
    static const int DPLUS = 411;
    static const int DMINUS = -DPLUS;
    static const int DSPLUS = 431;
    static const int DSMINUS = -DSPLUS;
    //@}

    /// @name Bottomonia
    //@{
    static const int ETAB = 551;
    static const int UPSILON1S = 553;
    static const int UPSILON2S = 100553;
    static const int UPSILON3S = 200553;
    static const int UPSILON4S = 300553;
    //@}

    /// @name b mesons
    //@{
    static const int B0 = 511;
    static const int BPLUS = 521;
    static const int BMINUS = -BPLUS;
    static const int B0S = 531;
    static const int BCPLUS = 541;
    static const int BCMINUS = -BCPLUS;
    //@}

    /// @name Baryons
    //@{
    static const int LAMBDA = 3122;
    static const int SIGMA0 = 3212;
    static const int SIGMAPLUS = 3222;
    static const int SIGMAMINUS = 3112;
    static const int LAMBDACPLUS = 4122;
    static const int LAMBDACMINUS = 4122;
    static const int LAMBDAB = 5122;
    static const int XI0 = 3322;
    static const int XIMINUS = 3312;
    static const int XIPLUS = -XIMINUS;
    static const int OMEGAMINUS = 3334;
    static const int OMEGAPLUS = -OMEGAMINUS;
    //@}

    /// @name Exotic/weird stuff
    //@{
    static const int REGGEON = 110;
    static const int POMERON = 990;
    static const int ODDERON = 9990;
    static const int GRAVITON = 39;
    static const int NEUTRALINO1 = 1000022;
    static const int GRAVITINO = 1000039;
    static const int GLUINO = 1000021;
    /// @todo Add axion, black hole remnant, etc. on demand
    //@}


  }
}
