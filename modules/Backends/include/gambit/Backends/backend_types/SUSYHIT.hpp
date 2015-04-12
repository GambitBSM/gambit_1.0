//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of container classes
///  for the SUSYHIT 1.4 backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
/// \author Peter Athron
/// \author Csaba Balazs
/// \author Anders Kvellestad
/// \date 2015 Jan-Apr
///
///  *********************************************

#include "gambit/Utils/util_types.hpp"

#ifndef __SUSYHIT_types_hpp__
#define __SUSYHIT_types_hpp__

namespace Gambit
{
    struct widtha_hdec_type
    {
        Fdouble abrb;
        Fdouble abrl;
        Fdouble abrm;
        Fdouble abrs;
        Fdouble abrc;
        Fdouble abrt;
        Fdouble abrg;
        Fdouble abrga;
        Fdouble abrzga;
        Fdouble abrz;
        Fdouble awdth;
    };

    struct widthhl_hdec_type
    {
        Fdouble hlbrb;
        Fdouble hlbrl;
        Fdouble hlbrm;
        Fdouble hlbrs;
        Fdouble hlbrc;
        Fdouble hlbrt;
        Fdouble hlbrg;
        Fdouble hlbrga;
        Fdouble hlbrzga;
        Fdouble hlbrw;
        Fdouble hlbrz;
        Fdouble hlbra;
        Fdouble hlbraz;
        Fdouble hlbrhw;
        Fdouble hlwdth;
    };

    struct widthhh_hdec_type
    {
        Fdouble hhbrb;
        Fdouble hhbrl;
        Fdouble hhbrm;
        Fdouble hhbrs;
        Fdouble hhbrc;
        Fdouble hhbrt;
        Fdouble hhbrg;
        Fdouble hhbrga;
        Fdouble hhbrzga;
        Fdouble hhbrw;
        Fdouble hhbrz;
        Fdouble hhbrh;
        Fdouble hhbra;
        Fdouble hhbraz;
        Fdouble hhbrhw;
        Fdouble hhwdth;
    };

    struct widthhc_hdec_type
    {
        Fdouble hcbrb;
        Fdouble hcbrl;
        Fdouble hcbrm;
        Fdouble hcbrbu;
        Fdouble hcbrs;
        Fdouble hcbrc;
        Fdouble hcbrt;
        Fdouble hcbrw;
        Fdouble hcbra;
        Fdouble hcwdth;
    };

    struct wisusy_hdec_type
    {
        Farray< Fdouble,1,2,1,2 > hlbrsc;
        Farray< Fdouble,1,4,1,4 > hlbrsn;
        Fdouble hhbrsc;
        Fdouble hhbrsn;
        Fdouble habrsc;
        Fdouble habrsn;
        Fdouble hcbrsu;
        Fdouble hlbrcht;
        Fdouble hhbrcht;
        Fdouble habrcht;
        Fdouble hlbrnet;
        Fdouble hhbrnet;
        Fdouble habrnet;
        Fdouble hcbrcnt;
        Fdouble hlbrsl;
        Fdouble hhbrsl;
        Fdouble hcbrsl;
        Fdouble habrsl;
        Fdouble habrst;
        Fdouble habrsb;
        Fdouble hhbrsq;
        Fdouble hhbrst;
        Fdouble hhbrsb;
        Fdouble hhbrsqt;
        Fdouble hcbrsq;
        Fdouble hcbrstb;
        Fdouble hcbrsqt;
        Fdouble hlbrsq;
        Fdouble hlbrsqt;
    };

    struct wisfer_hdec_type
    {
        Fdouble bhlslnl;
        Fdouble bhlslel;
        Fdouble bhlsler;
        Fdouble bhlsqul;
        Fdouble bhlsqur;
        Fdouble bhlsqdl;
        Fdouble bhlsqdr;
        Farray< Fdouble,1,2,1,2 > bhlst;
        Farray< Fdouble,1,2,1,2 > bhlsb;
        Farray< Fdouble,1,2,1,2 > bhlstau;
        Fdouble bhhslnl;
        Fdouble bhhslel;
        Fdouble bhhsler;
        Fdouble bhhsqul;
        Fdouble bhhsqur;
        Fdouble bhhsqdl;
        Fdouble bhhsqdr;
        Farray< Fdouble,1,2,1,2 > bhhst;
        Farray< Fdouble,1,2,1,2 > bhhsb;
        Farray< Fdouble,1,2,1,2 > bhhstau;
        Fdouble bhastau;
        Fdouble bhasb;
        Fdouble bhast;
        Fdouble bhcsl00;
        Fdouble bhcsl11;
        Fdouble bhcsl21;
        Fdouble bhcsq;
        Farray< Fdouble,1,2,1,2 > bhcstb;
    };

    struct hd_golddec_type
    {
        Fdouble whlgd;
        Fdouble whhgd;
        Fdouble whagd;
        Fdouble whcgd;
    };

    struct sd_char2body_type
    {
        Farray< Fdouble,1,2 > brcharst1;
        Farray< Fdouble,1,2 > brcharst2;
        Farray< Fdouble,1,2 > brcharsb1;
        Farray< Fdouble,1,2 > brcharsb2;
        Farray< Fdouble,1,2 > brcharsupl;
        Farray< Fdouble,1,2 > brcharsupr;
        Farray< Fdouble,1,2 > brcharsdownl;
        Farray< Fdouble,1,2 > brcharsdownr;
        Farray< Fdouble,1,2 > brcharsnel;
        Farray< Fdouble,1,2 > brcharsn1;
        Farray< Fdouble,1,2 > brcharsn2;
        Farray< Fdouble,1,2 > brcharsell;
        Farray< Fdouble,1,2 > brcharselr;
        Farray< Fdouble,1,2 > brcharstau1;
        Farray< Fdouble,1,2 > brcharstau2;
        Farray< Fdouble,1,2,1,4 > brcharhcneut;
        Farray< Fdouble,1,2,1,4 > brcharwneut;
        Fdouble brcharzchic;
        Fdouble brcharhlchic;
        Fdouble brcharhhchic;
        Fdouble brcharhachic;
    };

    struct sd_char2bodygrav_type
    {
        Farray< Fdouble,1,2 > brcharwgravitino;
        Farray< Fdouble,1,2 > brcharhcgravitino;
    };

    struct sd_char3body_type
    {
        Fdouble brntaunut;
        Farray< Fdouble,1,2,1,4 > brnelnue;
        Fdouble brnmunumu;
        Fdouble brnupdb;
        Farray< Fdouble,1,2,1,4 > brnchsb;
        Fdouble brntopbb;
        Farray< Fdouble,1,2 > brglupdb;
        Farray< Fdouble,1,2 > brglchsb;
        Farray< Fdouble,1,2 > brgltopbb;
        Fdouble brchee;
        Fdouble brchmumu;
        Fdouble brchtautau;
        Fdouble brchnene;
        Fdouble brchnmunmu;
        Fdouble brchntauntau;
        Fdouble brchupup;
        Fdouble brchdodo;
        Fdouble brchchch;
        Fdouble brchstst;
        Fdouble brchtoptop;
        Fdouble brchbotbot;
    };

    struct sd_charwidth_type
    {
        Fdouble chartot;
    };

    struct sd_neut2body_type
    {
        Fdouble brneutst1;
        Fdouble brneutst2;
        Farray< Fdouble,1,4 > brneutsb1;
        Farray< Fdouble,1,4 > brneutsb2;
        Fdouble brneutsupl;
        Fdouble brneutsupr;
        Farray< Fdouble,1,4 > brneutsdownl;
        Farray< Fdouble,1,4 > brneutsdownr;
        Farray< Fdouble,1,4 > brneutsnel;
        Farray< Fdouble,1,4 > brneutsn1;
        Farray< Fdouble,1,4 > brneutsn2;
        Farray< Fdouble,1,4 > brneutsell;
        Farray< Fdouble,1,4 > brneutselr;
        Fdouble brneutstau1;
        Fdouble brneutstau2;
        Fdouble brneutwchar;
        Farray< Fdouble,1,4,1,2 > brneuthcchar;
        Fdouble brneutzneut;
        Farray< Fdouble,1,4,1,4 > brneuthlneut;
        Farray< Fdouble,1,4,1,4 > brneuthhneut;
        Farray< Fdouble,1,4,1,4 > brneuthaneut;
    };

    struct sd_neut2bodygrav_type
    {
        Farray< Fdouble,1,4 > brneutgamgrav;
        Fdouble brneutzgrav;
        Farray< Fdouble,1,4 > brneuthlgrav;
        Farray< Fdouble,1,4 > brneuthhgrav;
        Farray< Fdouble,1,4 > brneuthagrav;
    };

    struct sd_neut3body_type
    {
        Fdouble brneutup;
        Farray< Fdouble,1,4,1,4 > brneutdow;
        Farray< Fdouble,1,4,1,4 > brneutch;
        Farray< Fdouble,1,4 > brneutst1;
        Farray< Fdouble,1,4,1,4 > brneutbot;
        Fdouble brneuttop;
        Farray< Fdouble,1,4,1,4 > brneutel;
        Farray< Fdouble,1,4,1,4 > brneutmu;
        Fdouble brneuttau;
        Farray< Fdouble,1,4,1,4 > brneutnue;
        Farray< Fdouble,1,4,1,4 > brneutnumu;
        Farray< Fdouble,1,4,1,4 > brneutnutau;
        Farray< Fdouble,1,4,1,2 > brchubd;
        Farray< Fdouble,1,4,1,2 > brchcbs;
        Farray< Fdouble,1,4,1,2 > brchtbb;
        Farray< Fdouble,1,4,1,2 > brchelne;
        Farray< Fdouble,1,4,1,2 > brchmunmu;
        Farray< Fdouble,1,4,1,2 > brchtauntau;
        Farray< Fdouble,1,4 > brglup;
        Farray< Fdouble,1,4 > brgldo;
        Farray< Fdouble,1,4 > brglch;
        Farray< Fdouble,1,4 > brglst;
        Farray< Fdouble,1,4 > brgltop;
        Farray< Fdouble,1,4 > brglbot;
    };

    struct sd_neutloop_type
    {
        Fdouble brnraddec;
    };

    struct sd_neutwidth_type
    {
        Fdouble neuttot;
    };

    struct sd_glui2body_type
    {
        Fdouble brgst1;
        Fdouble brgst2;
        Fdouble brgsb1;
        Fdouble brgsb2;
        Fdouble brgsupl;
        Fdouble brgsupr;
        Fdouble brgsdownl;
        Fdouble brgsdownr;
    };

    struct sd_glui3body_type
    {
        Farray< Fdouble,1,4 > brgoup;
        Farray< Fdouble,1,4 > brgoch;
        Farray< Fdouble,1,4 > brgodn;
        Farray< Fdouble,1,4 > brgost;
        Farray< Fdouble,1,4 > brgotp;
        Farray< Fdouble,1,4 > brgobt;
        Farray< Fdouble,1,2 > brgoud;
        Farray< Fdouble,1,2 > brgocs;
        Farray< Fdouble,1,2 > brgotb;
        Fdouble brhcst1b;
        Fdouble brwst1b;
    };

    struct sd_gluiloop_type
    {
        Farray< Fdouble,1,4 > brglnjgluon;
    };

    struct sd_gluiwidth_type
    {
        Fdouble gluitot;
    };

    struct sd_sup2body_type
    {
        Fdouble brsuplnup;
        Fdouble brsuplcdow;
        Fdouble brsuplglui;
        Fdouble brsuprnup;
        Fdouble brsuprcdow;
        Fdouble brsuprglui;
    };

    struct sd_supwidth_type
    {
        Fdouble supltot2;
        Fdouble suprtot2;
    };

    struct sd_sdown2body_type
    {
        Fdouble brsdowlndow;
        Fdouble brsdowlchup;
        Fdouble brsdowlglui;
        Fdouble brsdowrndow;
        Fdouble brsdowrchup;
        Fdouble brsdowrglui;
    };

    struct sd_sdownwidth_type
    {
        Fdouble sdowltot2;
        Fdouble sdowrtot2;
    };

    struct sd_stop2body_type
    {
        Fdouble brst1neutt;
        Fdouble brst2neutt;
        Fdouble brst1charb;
        Fdouble brst1hcsb;
        Fdouble brst1wsb;
        Fdouble brst2charb;
        Fdouble brst2hcsb;
        Fdouble brst2wsb;
        Fdouble brst1glui;
        Fdouble brst2glui;
        Fdouble brst2hl;
        Fdouble brst2hh;
        Fdouble brst2ha;
        Fdouble brst2ztop;
    };

    struct sd_stop3body_type
    {
        Fdouble brstopw;
        Fdouble brstoph;
        Fdouble brststau;
        Fdouble brstsntau;
        Fdouble brstsel;
        Fdouble brstbsbst;
        Fdouble brstbbsbt;
        Fdouble brsttausbnu;
        Fdouble brstelsbnu;
        Fdouble brstupsbdow;
        Fdouble brstsnel;
        Fdouble brst2st1tt;
        Fdouble brst2st1startt;
        Fdouble brst2st1bb;
        Fdouble brst2st1uu;
        Fdouble brst2st1dd;
        Fdouble brst2st1ee;
        Fdouble brst2st1nunu;
        Fdouble brst2st1tautau;
    };

    struct sd_stoploop_type
    {
        Fdouble brgamma;
        Fdouble brgammaup;
        Fdouble brgammagluino;
    };

    struct sd_stop4body_type
    {
        Fdouble brgamma4bod;
        Fdouble brgammaup4bod;
        Fdouble brgammagluino4bod;
        Fdouble br4bodoffshelltau;
    };

    struct sd_stopwidth_type
    {
        Fdouble stoptot4;
    };

    struct sd_sbot2body_type
    {
        Fdouble brsb1neutt;
        Fdouble brsb2neutt;
        Fdouble brsb1chart;
        Fdouble brsb2chart;
        Fdouble brsb1hcst;
        Fdouble brsb2hcst;
        Fdouble brsb1wst;
        Fdouble brsb2wst;
        Fdouble brsb1glui;
        Fdouble brsb2glui;
        Fdouble brsb2hl;
        Fdouble brsb2hh;
        Fdouble brsb2ha;
        Fdouble brsb2zbot;
    };

    struct sd_sbot3body_type
    {
        Fdouble brsbstau;
        Fdouble brsbsntau;
        Fdouble brsbsel;
        Fdouble brsbtstsb;
        Fdouble brsbtbstb;
        Fdouble brsbtaustnu;
        Fdouble brsbelstnu;
        Fdouble brsbupstdow;
        Fdouble brsbsnel;
        Fdouble brsb2sb1bb;
        Fdouble brsb2sb1starbb;
        Fdouble brsb2sb1tt;
        Fdouble brsb2sb1uu;
        Fdouble brsb2sb1dd;
        Fdouble brsb2sb1ee;
        Fdouble brsb2sb1nunu;
        Fdouble brsb2sb1tautau;
    };

    struct sd_sbotwidth_type
    {
        Fdouble sbottot;
    };

    struct sd_sel2body_type
    {
        Fdouble brsellneute;
        Fdouble brsellcharnue;
        Fdouble brselrneute;
        Fdouble brselrcharnue;
    };

    struct sd_selwidth_type
    {
        Fdouble selltot2;
        Fdouble selrtot2;
    };

    struct sd_snel2body_type
    {
        Fdouble brsnellneut;
        Fdouble brsnellchar;
    };

    struct sd_snelwidth_type
    {
        Fdouble sneltot2;
    };

    struct sd_stau2body_type
    {
        Fdouble brstau1neut;
        Fdouble brstau2neut;
        Fdouble brstau1char;
        Fdouble brstau1hcsn;
        Fdouble brstau1wsn;
        Fdouble brstau2char;
        Fdouble brstau2hcsn;
        Fdouble brstau2wsn;
        Fdouble brstau2hl;
        Fdouble brstau2hh;
        Fdouble brstau2ha;
        Fdouble brstau2ztau;
    };

    struct sd_stau2bodygrav_type
    {
        Fdouble brstautaugrav;
    };

    struct sd_stauwidth_type
    {
        Fdouble stau1tot2;
        Fdouble stau2tot2;
    };

    struct sd_sntau2body_type
    {
        Fdouble brsntauneut;
        Fdouble brsntauchar;
        Fdouble brsntau1wstau;
        Fdouble brsntau1hcstau;
    };

    struct sd_sntauwidth_type
    {
        Fdouble sntautot2;
    };

    struct sd_top2body_type
    {
        Fdouble brtopbw;
        Fdouble brtopbh;
        Fdouble brtopneutrstop;
    };

    struct sd_topwidth_type
    {
        Fdouble toptot2;
    };
}

#endif // defined __SUSYHIT_types_hpp__
