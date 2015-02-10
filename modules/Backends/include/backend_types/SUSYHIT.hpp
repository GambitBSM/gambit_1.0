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
/// \date 2015 Jan,Feb
///
///  *********************************************

#include "util_types.hpp"

#ifndef __SUSYHIT_types_hpp__
#define __SUSYHIT_types_hpp__

namespace Gambit
{
    // CsB hand made >
    // struct top2body_CB_type
    // {
    //     double brtopbw;
    //     double brtopbh;
    //     Farray<double, 1,4, 1,2> brtopneutrstop;
    // };
    // CsB hand made <

    // CsB from Anders' CBGB script >
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
        Farray< Fdouble,1,2,1,2 > hhbrsc;
        Farray< Fdouble,1,4,1,4 > hhbrsn;
        Farray< Fdouble,1,2,1,2 > habrsc;
        Farray< Fdouble,1,4,1,4 > habrsn;
        Farray< Fdouble,1,2,1,4 > hcbrsu;
        Fdouble hlbrcht;
        Fdouble hhbrcht;
        Fdouble habrcht;
        Fdouble hlbrnet;
        Fdouble hhbrnet;
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
        Fdouble bhlst;
        Fdouble bhlsb;
        Fdouble bhlstau;
    };
    struct hd_golddec_type
    {
        Farray< Fdouble,1,4 > whlgd;
        Farray< Fdouble,1,4 > whhgd;
        Farray< Fdouble,1,4 > whagd;
        Farray< Fdouble,1,2 > whcgd;
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
        Fdouble brcharsdownr;
    };
    struct sd_char2bodygrav_type
    {
        Farray< Fdouble,1,2 > brcharwgravitino;
        Farray< Fdouble,1,2 > brcharhcgravitino;
    };
    struct sd_char3body_type
    {
        Farray< Fdouble,1,2,1,4 > brntaunut;
        Farray< Fdouble,1,2,1,4 > brnelnue;
        Farray< Fdouble,1,2,1,4 > brnmunumu;
        Farray< Fdouble,1,2,1,4 > brnupdb;
        Farray< Fdouble,1,2,1,4 > brnchsb;
        Farray< Fdouble,1,2,1,4 > brntopbb;
        Farray< Fdouble,1,2 > brglupdb;
        Farray< Fdouble,1,2 > brglchsb;
        Farray< Fdouble,1,2 > brgltopbb;
        Fdouble brchee;
        Fdouble brchmumu;
    };
    struct sd_charwidth_type
    {
        Farray< Fdouble,1,2 > chartot;
    };
    struct sd_neut2body_type
    {
        Farray< Fdouble,1,4 > brneutst1;
        Farray< Fdouble,1,4 > brneutst2;
        Farray< Fdouble,1,4 > brneutsb1;
        Farray< Fdouble,1,4 > brneutsb2;
        Farray< Fdouble,1,4 > brneutsupl;
        Farray< Fdouble,1,4 > brneutsupr;
        Farray< Fdouble,1,4 > brneutsdownl;
        Fdouble brneutsdownr;
    };
    struct sd_neut2bodygrav_type
    {
        Farray< Fdouble,1,4 > brneutgamgrav;
        Farray< Fdouble,1,4 > brneutzgrav;
        Farray< Fdouble,1,4 > brneuthlgrav;
        Farray< Fdouble,1,4 > brneuthhgrav;
        Farray< Fdouble,1,4 > brneuthagrav;
    };
    struct sd_neut3body_type
    {
        Farray< Fdouble,1,4,1,4 > brneutup;
        Farray< Fdouble,1,4,1,4 > brneutdow;
        Farray< Fdouble,1,4,1,4 > brneutch;
        Farray< Fdouble,1,4,1,4 > brneutst;
        Farray< Fdouble,1,4,1,4 > brneutbot;
        Farray< Fdouble,1,4,1,4 > brneuttop;
        Fdouble brneutel;
        Fdouble brneutmu;
        Fdouble brneuttau;
    };
    struct sd_neutloop_type
    {
        Farray< Fdouble,1,4,1,4 > brnraddec;
    };
    struct sd_neutwidth_type
    {
        Farray< Finteger,1,4 > neuttot;
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
        Farray< Fdouble,1,4 > brsuplnup;
        Farray< Fdouble,1,2 > brsuplcdow;
        Fdouble brsuplglui;
        Farray< Fdouble,1,4 > brsuprnup;
        Farray< Fdouble,1,2 > brsuprcdow;
        Fdouble brsuprglui;
    };
    struct sd_supwidth_type
    {
        Fdouble supltot2;
        Fdouble suprtot2;
    };
    struct sd_sdown2body_type
    {
        Farray< Fdouble,1,4 > brsdowlndow;
        Farray< Fdouble,1,2 > brsdowlchup;
        Fdouble brsdowlglui;
        Farray< Fdouble,1,4 > brsdowrndow;
        Farray< Fdouble,1,2 > brsdowrchup;
        Fdouble brsdowrglui;
    };
    struct sd_sdownwidth_type
    {
        Fdouble sdowltot2;
        Fdouble sdowrtot2;
    };
    struct sd_stop2body_type
    {
        Farray< Fdouble,1,4 > brst1neutt;
        Farray< Fdouble,1,4 > brst2neutt;
        Farray< Fdouble,1,2 > brst1charb;
        Farray< Fdouble,1,2 > brst1hcsb;
        Farray< Fdouble,1,2 > brst1wsb;
        Farray< Fdouble,1,2 > brst2charb;
        Farray< Fdouble,1,2 > brst2hcsb;
        Fdouble brst2wsb;
        Fdouble brst1glui;
    };
    struct sd_stop3body_type
    {
        Farray< Fdouble,1,2,1,4 > brstopw;
        Farray< Fdouble,1,2,1,4 > brstoph;
        Farray< Fdouble,1,2,1,2 > brststau;
        Farray< Fdouble,1,2,1,2 > brstsntau;
        Farray< Fdouble,1,2,1,2 > brstsel;
        Fdouble brstbsbst;
        Fdouble brstbbsbt;
        Fdouble brsttausbnu;
        Fdouble brstelsbnu;
        Fdouble brstupsbdow;
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
        Farray< Fdouble,1,4 > brsb1neutt;
        Farray< Fdouble,1,4 > brsb2neutt;
        Farray< Fdouble,1,2 > brsb1chart;
        Farray< Fdouble,1,2 > brsb2chart;
        Farray< Fdouble,1,2 > brsb1hcst;
        Farray< Fdouble,1,2 > brsb2hcst;
        Farray< Fdouble,1,2 > brsb1wst;
        Fdouble brsb2wst;
        Fdouble brsb1glui;
    };
    struct sd_sbot3body_type
    {
        Farray< Fdouble,1,2,1,2 > brsbstau;
        Farray< Fdouble,1,2,1,2 > brsbsntau;
        Farray< Fdouble,1,2,1,2 > brsbsel;
        Farray< Fdouble,1,2,1,2 > brsbtstsb;
        Farray< Fdouble,1,2,1,2 > brsbtbstb;
        Farray< Fdouble,1,2,1,2 > brsbtaustnu;
        Fdouble brsbelstnu;
        Fdouble brsbupstdow;
        Fdouble brsbsnel;
    };
    struct sd_sbotwidth_type
    {
        Fdouble sbottot;
    };
    struct sd_sel2body_type
    {
        Farray< Fdouble,1,4 > brsellneute;
        Farray< Fdouble,1,2 > brsellcharnue;
        Farray< Fdouble,1,4 > brselrneute;
        Farray< Fdouble,1,2 > brselrcharnue;
    };
    struct sd_selwidth_type
    {
        Fdouble selltot2;
        Fdouble selrtot2;
    };
    struct sd_snel2body_type
    {
        Farray< Fdouble,1,4 > brsnellneut;
        Farray< Fdouble,1,4 > brsnellchar;
    };
    struct sd_snelwidth_type
    {
        Fdouble sneltot2;
    };
    struct sd_stau2body_type
    {
        Farray< Fdouble,1,4 > brstau1neut;
        Farray< Fdouble,1,4 > brstau2neut;
        Farray< Fdouble,1,2 > brstau1char;
        Farray< Fdouble,1,2 > brstau1hcsn;
        Fdouble brstau1wsn;
        Farray< Fdouble,1,2 > brstau2char;
        Farray< Fdouble,1,2 > brstau2hcsn;
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
        Farray< Fdouble,1,4 > brsntauneut;
        Farray< Fdouble,1,2 > brsntauchar;
        Farray< Fdouble,1,2 > brsntau1wstau;
        Farray< Fdouble,1,2 > brsntau1hcstau;
    };
    struct sd_sntauwidth_type
    {
        Fdouble sntautot2;
    };
    struct sd_top2body_type
    {
        Fdouble brtopbw;
        Fdouble brtopbh;
        Farray< Fdouble,1,4,1,2 > brtopneutrstop;
    };
    struct sd_topwidth_type
    {
        Fdouble toptot2;
    };
    // CsB from Anders' CGBG script <
}

#endif // defined __SUSYHIT_types_hpp__
