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
/// \date 2015 Jan
///
///  *********************************************

#include "backend_type_macros.hpp"

#ifndef __SUSYHIT_types_hpp__
#define __SUSYHIT_types_hpp__

// IMPORTANT: No commas between the FORTRAN_ARRAY and GENERAL_VAR macros
// CsB hand made >
//DECLARE_FORTRAN_COMMONBLOCK(top2body_CB_type, GENERAL_VAR(double,brtopbw)                      \
//                                              GENERAL_VAR(double,brtopbh)                      \
//                                              FORTRAN_ARRAY(double,brtopneutrstop,(1,4),(1,2)) )   
// CsB hand made <

// CsB from Anders' Python script >
DECLARE_FORTRAN_COMMONBLOCK(widtha_hdec_type,  \
                                             GENERAL_VAR(double,abrb) \
                                             GENERAL_VAR(double,abrl) \
                                             GENERAL_VAR(double,abrm) \
                                             GENERAL_VAR(double,abrs) \
                                             GENERAL_VAR(double,abrc) \
                                             GENERAL_VAR(double,abrt) \
                                             GENERAL_VAR(double,abrg) \
                                             GENERAL_VAR(double,abrga) \
                                             GENERAL_VAR(double,abrzga) \
                                             GENERAL_VAR(double,abrz) \
                                             GENERAL_VAR(double,awdth) )

DECLARE_FORTRAN_COMMONBLOCK(widthhl_hdec_type,  \
                                              GENERAL_VAR(double,hlbrb) \
                                              GENERAL_VAR(double,hlbrl) \
                                              GENERAL_VAR(double,hlbrm) \
                                              GENERAL_VAR(double,hlbrs) \
                                              GENERAL_VAR(double,hlbrc) \
                                              GENERAL_VAR(double,hlbrt) \
                                              GENERAL_VAR(double,hlbrg) \
                                              GENERAL_VAR(double,hlbrga) \
                                              GENERAL_VAR(double,hlbrzga) \
                                              GENERAL_VAR(double,hlbrw) \
                                              GENERAL_VAR(double,hlbrz) \
                                              GENERAL_VAR(double,hlbra) \
                                              GENERAL_VAR(double,hlbraz) \
                                              GENERAL_VAR(double,hlbrhw) \
                                              GENERAL_VAR(double,hlwdth) )

DECLARE_FORTRAN_COMMONBLOCK(widthhh_hdec_type,  \
                                              GENERAL_VAR(double,hhbrb) \
                                              GENERAL_VAR(double,hhbrl) \
                                              GENERAL_VAR(double,hhbrm) \
                                              GENERAL_VAR(double,hhbrs) \
                                              GENERAL_VAR(double,hhbrc) \
                                              GENERAL_VAR(double,hhbrt) \
                                              GENERAL_VAR(double,hhbrg) \
                                              GENERAL_VAR(double,hhbrga) \
                                              GENERAL_VAR(double,hhbrzga) \
                                              GENERAL_VAR(double,hhbrw) \
                                              GENERAL_VAR(double,hhbrz) \
                                              GENERAL_VAR(double,hhbrh) \
                                              GENERAL_VAR(double,hhbra) \
                                              GENERAL_VAR(double,hhbraz) \
                                              GENERAL_VAR(double,hhbrhw) \
                                              GENERAL_VAR(double,hhwdth) )

DECLARE_FORTRAN_COMMONBLOCK(widthhc_hdec_type,  \
                                              GENERAL_VAR(double,hcbrb) \
                                              GENERAL_VAR(double,hcbrl) \
                                              GENERAL_VAR(double,hcbrm) \
                                              GENERAL_VAR(double,hcbrbu) \
                                              GENERAL_VAR(double,hcbrs) \
                                              GENERAL_VAR(double,hcbrc) \
                                              GENERAL_VAR(double,hcbrt) \
                                              GENERAL_VAR(double,hcbrw) \
                                              GENERAL_VAR(double,hcbra) \
                                              GENERAL_VAR(double,hcwdth) )

DECLARE_FORTRAN_COMMONBLOCK(wisusy_hdec_type,  \
                                             FORTRAN_ARRAY(double,hlbrsc,(1, 2),(1, 2)) \
                                             FORTRAN_ARRAY(double,hlbrsn,(1, 4),(1, 4)) \
                                             FORTRAN_ARRAY(double,hhbrsc,(1, 2),(1, 2)) \
                                             FORTRAN_ARRAY(double,hhbrsn,(1, 4),(1, 4)) \
                                             FORTRAN_ARRAY(double,habrsc,(1, 2),(1, 2)) \
                                             FORTRAN_ARRAY(double,habrsn,(1, 4),(1, 4)) \
                                             FORTRAN_ARRAY(double,hcbrsu,(1, 2),(1, 4)) \
                                             GENERAL_VAR(double,hlbrcht) \
                                             GENERAL_VAR(double,hhbrcht) \
                                             GENERAL_VAR(double,habrcht) \
                                             GENERAL_VAR(double,hlbrnet) \
                                             GENERAL_VAR(double,hhbrnet) \
                                             GENERAL_VAR(double,habrnet) \
                                             GENERAL_VAR(double,hcbrcnt) \
                                             GENERAL_VAR(double,hlbrsl) \
                                             GENERAL_VAR(double,hhbrsl) \
                                             GENERAL_VAR(double,hcbrsl) \
                                             GENERAL_VAR(double,habrsl) \
                                             GENERAL_VAR(double,habrst) \
                                             GENERAL_VAR(double,habrsb) \
                                             GENERAL_VAR(double,hhbrsq) \
                                             FORTRAN_ARRAY(double,hhbrst,(1, 2),(1, 2)) \
                                             FORTRAN_ARRAY(double,hhbrsb,(1, 2),(1, 2)) \
                                             GENERAL_VAR(double,hhbrsqt) \
                                             GENERAL_VAR(double,hcbrsq) \
                                             FORTRAN_ARRAY(double,hcbrstb,(1, 2),(1, 2)) \
                                             GENERAL_VAR(double,hcbrsqt) \
                                             GENERAL_VAR(double,hlbrsq) \
                                             GENERAL_VAR(double,hlbrsqt) )

DECLARE_FORTRAN_COMMONBLOCK(wisfer_hdec_type,  \
                                             GENERAL_VAR(double,bhlslnl) \
                                             GENERAL_VAR(double,bhlslel) \
                                             GENERAL_VAR(double,bhlsler) \
                                             GENERAL_VAR(double,bhlsqul) \
                                             GENERAL_VAR(double,bhlsqur) \
                                             GENERAL_VAR(double,bhlsqdl) \
                                             GENERAL_VAR(double,bhlsqdr) \
                                             GENERAL_VAR(double,bhlst) \
                                             GENERAL_VAR(double,bhlsb) \
                                             GENERAL_VAR(double,bhlstau) \
                                             GENERAL_VAR(double,bhhslnl) \
                                             GENERAL_VAR(double,bhhslel) \
                                             GENERAL_VAR(double,bhhsler) \
                                             GENERAL_VAR(double,bhhsqul) \
                                             GENERAL_VAR(double,bhhsqur) \
                                             GENERAL_VAR(double,bhhsqdl) \
                                             GENERAL_VAR(double,bhhsqdr) \
                                             GENERAL_VAR(double,bhhst) \
                                             GENERAL_VAR(double,bhhsb) \
                                             GENERAL_VAR(double,bhhstau) \
                                             GENERAL_VAR(double,bhastau) \
                                             GENERAL_VAR(double,bhasb) \
                                             GENERAL_VAR(double,bhast) \
                                             GENERAL_VAR(double,bhcsl00) \
                                             GENERAL_VAR(double,bhcsl11) \
                                             GENERAL_VAR(double,bhcsl21) \
                                             GENERAL_VAR(double,bhcsq) \
                                             GENERAL_VAR(double,bhcstb) )

DECLARE_FORTRAN_COMMONBLOCK(hd_golddec_type,  \
                                            FORTRAN_ARRAY(double,whlgd,(1, 4)) \
                                            FORTRAN_ARRAY(double,whhgd,(1, 4)) \
                                            FORTRAN_ARRAY(double,whagd,(1, 4)) \
                                            FORTRAN_ARRAY(double,whcgd,(1, 2)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_char2body_type,  \
                                              FORTRAN_ARRAY(double,brcharst1,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharst2,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsb1,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsb2,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsupl,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsupr,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsdownl,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsdownr,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsnel,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsn1,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsn2,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharsell,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharselr,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharstau1,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharstau2,(1, 2)) \
                                              FORTRAN_ARRAY(double,brcharhcneut,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brcharwneut,(1, 2),(1, 4)) \
                                              GENERAL_VAR(double,brcharzchic) \
                                              GENERAL_VAR(double,brcharhlchic) \
                                              GENERAL_VAR(double,brcharhhchic) \
                                              GENERAL_VAR(double,brcharhachic) )

DECLARE_FORTRAN_COMMONBLOCK(sd_char2bodygrav_type,  \
                                                  FORTRAN_ARRAY(double,brcharwgravitino,(1, 2)) \
                                                  FORTRAN_ARRAY(double,brcharhcgravitino,(1, 2)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_char3body_type,  \
                                              FORTRAN_ARRAY(double,brntaunut,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brnelnue,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brnmunumu,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brnupdb,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brnchsb,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brntopbb,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brglupdb,(1, 2)) \
                                              FORTRAN_ARRAY(double,brglchsb,(1, 2)) \
                                              FORTRAN_ARRAY(double,brgltopbb,(1, 2)) \
                                              GENERAL_VAR(double,brchee) \
                                              GENERAL_VAR(double,brchmumu) \
                                              GENERAL_VAR(double,brchtautau) \
                                              GENERAL_VAR(double,brchnene) \
                                              GENERAL_VAR(double,brchnmunmu) \
                                              GENERAL_VAR(double,brchntauntau) \
                                              GENERAL_VAR(double,brchupup) \
                                              GENERAL_VAR(double,brchdodo) \
                                              GENERAL_VAR(double,brchchch) \
                                              GENERAL_VAR(double,brchstst) \
                                              GENERAL_VAR(double,brchtoptop) \
                                              GENERAL_VAR(double,brchbotbot) )

DECLARE_FORTRAN_COMMONBLOCK(sd_charwidth_type,  \
                                              FORTRAN_ARRAY(double,chartot,(1, 2)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_neut2body_type,  \
                                              FORTRAN_ARRAY(double,brneutst1,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutst2,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsb1,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsb2,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsupl,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsupr,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsdownl,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsdownr,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsnel,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsn1,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsn2,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutsell,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutselr,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutstau1,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutstau2,(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutwchar,(1, 4),(1, 2)) \
                                              FORTRAN_ARRAY(double,brneuthcchar,(1, 4),(1, 2)) \
                                              FORTRAN_ARRAY(double,brneutzneut,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneuthlneut,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneuthhneut,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneuthaneut,(1, 4),(1, 4)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_neut2bodygrav_type,  \
                                                  FORTRAN_ARRAY(double,brneutgamgrav,(1, 4)) \
                                                  FORTRAN_ARRAY(double,brneutzgrav,(1, 4)) \
                                                  FORTRAN_ARRAY(double,brneuthlgrav,(1, 4)) \
                                                  FORTRAN_ARRAY(double,brneuthhgrav,(1, 4)) \
                                                  FORTRAN_ARRAY(double,brneuthagrav,(1, 4)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_neut3body_type,  \
                                              FORTRAN_ARRAY(double,brneutup,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutdow,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutch,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutst,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutbot,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneuttop,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutel,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutmu,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneuttau,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutnue,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutnumu,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brneutnutau,(1, 4),(1, 4)) \
                                              FORTRAN_ARRAY(double,brchubd,(1, 4),(1, 2)) \
                                              FORTRAN_ARRAY(double,brchcbs,(1, 4),(1, 2)) \
                                              FORTRAN_ARRAY(double,brchtbb,(1, 4),(1, 2)) \
                                              FORTRAN_ARRAY(double,brchelne,(1, 4),(1, 2)) \
                                              FORTRAN_ARRAY(double,brchmunmu,(1, 4),(1, 2)) \
                                              FORTRAN_ARRAY(double,brchtauntau,(1, 4),(1, 2)) \
                                              FORTRAN_ARRAY(double,brglup,(1, 4)) \
                                              FORTRAN_ARRAY(double,brgldo,(1, 4)) \
                                              FORTRAN_ARRAY(double,brglch,(1, 4)) \
                                              FORTRAN_ARRAY(double,brglst,(1, 4)) \
                                              FORTRAN_ARRAY(double,brgltop,(1, 4)) \
                                              FORTRAN_ARRAY(double,brglbot,(1, 4)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_neutloop_type,  \
                                             FORTRAN_ARRAY(double,brnraddec,(1, 4),(1, 4)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_neutwidth_type,  \
                                              FORTRAN_ARRAY(double,neuttot,(1, 4)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_glui2body_type,  \
                                              GENERAL_VAR(double,brgst1) \
                                              GENERAL_VAR(double,brgst2) \
                                              GENERAL_VAR(double,brgsb1) \
                                              GENERAL_VAR(double,brgsb2) \
                                              GENERAL_VAR(double,brgsupl) \
                                              GENERAL_VAR(double,brgsupr) \
                                              GENERAL_VAR(double,brgsdownl) \
                                              GENERAL_VAR(double,brgsdownr) )

DECLARE_FORTRAN_COMMONBLOCK(sd_glui3body_type,  \
                                              FORTRAN_ARRAY(double,brgoup,(1, 4)) \
                                              FORTRAN_ARRAY(double,brgoch,(1, 4)) \
                                              FORTRAN_ARRAY(double,brgodn,(1, 4)) \
                                              FORTRAN_ARRAY(double,brgost,(1, 4)) \
                                              FORTRAN_ARRAY(double,brgotp,(1, 4)) \
                                              FORTRAN_ARRAY(double,brgobt,(1, 4)) \
                                              FORTRAN_ARRAY(double,brgoud,(1, 2)) \
                                              FORTRAN_ARRAY(double,brgocs,(1, 2)) \
                                              FORTRAN_ARRAY(double,brgotb,(1, 2)) \
                                              GENERAL_VAR(double,brhcst1b) \
                                              GENERAL_VAR(double,brwst1b) )

DECLARE_FORTRAN_COMMONBLOCK(sd_gluiloop_type,  \
                                             FORTRAN_ARRAY(double,brglnjgluon,(1, 4)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_gluiwidth_type,  \
                                              GENERAL_VAR(double,gluitot) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sup2body_type,  \
                                             FORTRAN_ARRAY(double,brsuplnup,(1, 4)) \
                                             FORTRAN_ARRAY(double,brsuplcdow,(1, 2)) \
                                             GENERAL_VAR(double,brsuplglui) \
                                             FORTRAN_ARRAY(double,brsuprnup,(1, 4)) \
                                             FORTRAN_ARRAY(double,brsuprcdow,(1, 2)) \
                                             GENERAL_VAR(double,brsuprglui) )

DECLARE_FORTRAN_COMMONBLOCK(sd_supwidth_type,  \
                                             GENERAL_VAR(double,supltot2) \
                                             GENERAL_VAR(double,suprtot2) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sdown2body_type,  \
                                               FORTRAN_ARRAY(double,brsdowlndow,(1, 4)) \
                                               FORTRAN_ARRAY(double,brsdowlchup,(1, 2)) \
                                               GENERAL_VAR(double,brsdowlglui) \
                                               FORTRAN_ARRAY(double,brsdowrndow,(1, 4)) \
                                               FORTRAN_ARRAY(double,brsdowrchup,(1, 2)) \
                                               GENERAL_VAR(double,brsdowrglui) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sdownwidth_type,  \
                                               GENERAL_VAR(double,sdowltot2) \
                                               GENERAL_VAR(double,sdowrtot2) )

DECLARE_FORTRAN_COMMONBLOCK(sd_stop2body_type,  \
                                              FORTRAN_ARRAY(double,brst1neutt,(1, 4)) \
                                              FORTRAN_ARRAY(double,brst2neutt,(1, 4)) \
                                              FORTRAN_ARRAY(double,brst1charb,(1, 2)) \
                                              FORTRAN_ARRAY(double,brst1hcsb,(1, 2)) \
                                              FORTRAN_ARRAY(double,brst1wsb,(1, 2)) \
                                              FORTRAN_ARRAY(double,brst2charb,(1, 2)) \
                                              FORTRAN_ARRAY(double,brst2hcsb,(1, 2)) \
                                              FORTRAN_ARRAY(double,brst2wsb,(1, 2)) \
                                              GENERAL_VAR(double,brst1glui) \
                                              GENERAL_VAR(double,brst2glui) \
                                              GENERAL_VAR(double,brst2hl) \
                                              GENERAL_VAR(double,brst2hh) \
                                              GENERAL_VAR(double,brst2ha) \
                                              GENERAL_VAR(double,brst2ztop) )

DECLARE_FORTRAN_COMMONBLOCK(sd_stop3body_type,  \
                                              FORTRAN_ARRAY(double,brstopw,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brstoph,(1, 2),(1, 4)) \
                                              FORTRAN_ARRAY(double,brststau,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brstsntau,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brstsel,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brstbsbst,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brstbbsbt,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsttausbnu,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brstelsbnu,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brstupsbdow,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brstsnel,(1, 2)) \
                                              GENERAL_VAR(double,brst2st1tt) \
                                              GENERAL_VAR(double,brst2st1startt) \
                                              GENERAL_VAR(double,brst2st1bb) \
                                              GENERAL_VAR(double,brst2st1uu) \
                                              GENERAL_VAR(double,brst2st1dd) \
                                              GENERAL_VAR(double,brst2st1ee) \
                                              GENERAL_VAR(double,brst2st1nunu) \
                                              GENERAL_VAR(double,brst2st1tautau) )

DECLARE_FORTRAN_COMMONBLOCK(sd_stoploop_type,  \
                                             GENERAL_VAR(double,brgamma) \
                                             GENERAL_VAR(double,brgammaup) \
                                             GENERAL_VAR(double,brgammagluino) )

DECLARE_FORTRAN_COMMONBLOCK(sd_stop4body_type,  \
                                              GENERAL_VAR(double,brgamma4bod) \
                                              GENERAL_VAR(double,brgammaup4bod) \
                                              GENERAL_VAR(double,brgammagluino4bod) \
                                              GENERAL_VAR(double,br4bodoffshelltau) )

DECLARE_FORTRAN_COMMONBLOCK(sd_stopwidth_type,  \
                                              GENERAL_VAR(double,stoptot4) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sbot2body_type,  \
                                              FORTRAN_ARRAY(double,brsb1neutt,(1, 4)) \
                                              FORTRAN_ARRAY(double,brsb2neutt,(1, 4)) \
                                              FORTRAN_ARRAY(double,brsb1chart,(1, 2)) \
                                              FORTRAN_ARRAY(double,brsb2chart,(1, 2)) \
                                              FORTRAN_ARRAY(double,brsb1hcst,(1, 2)) \
                                              FORTRAN_ARRAY(double,brsb2hcst,(1, 2)) \
                                              FORTRAN_ARRAY(double,brsb1wst,(1, 2)) \
                                              FORTRAN_ARRAY(double,brsb2wst,(1, 2)) \
                                              GENERAL_VAR(double,brsb1glui) \
                                              GENERAL_VAR(double,brsb2glui) \
                                              GENERAL_VAR(double,brsb2hl) \
                                              GENERAL_VAR(double,brsb2hh) \
                                              GENERAL_VAR(double,brsb2ha) \
                                              GENERAL_VAR(double,brsb2zbot) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sbot3body_type,  \
                                              FORTRAN_ARRAY(double,brsbstau,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsbsntau,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsbsel,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsbtstsb,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsbtbstb,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsbtaustnu,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsbelstnu,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsbupstdow,(1, 2),(1, 2)) \
                                              FORTRAN_ARRAY(double,brsbsnel,(1, 2)) \
                                              GENERAL_VAR(double,brsb2sb1bb) \
                                              GENERAL_VAR(double,brsb2sb1starbb) \
                                              GENERAL_VAR(double,brsb2sb1tt) \
                                              GENERAL_VAR(double,brsb2sb1uu) \
                                              GENERAL_VAR(double,brsb2sb1dd) \
                                              GENERAL_VAR(double,brsb2sb1ee) \
                                              GENERAL_VAR(double,brsb2sb1nunu) \
                                              GENERAL_VAR(double,brsb2sb1tautau) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sbotwidth_type,  \
                                              FORTRAN_ARRAY(double,sbottot,(1, 2)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sel2body_type,  \
                                             FORTRAN_ARRAY(double,brsellneute,(1, 4)) \
                                             FORTRAN_ARRAY(double,brsellcharnue,(1, 2)) \
                                             FORTRAN_ARRAY(double,brselrneute,(1, 4)) \
                                             FORTRAN_ARRAY(double,brselrcharnue,(1, 2)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_selwidth_type,  \
                                             GENERAL_VAR(double,selltot2) \
                                             GENERAL_VAR(double,selrtot2) )

DECLARE_FORTRAN_COMMONBLOCK(sd_snel2body_type,  \
                                              FORTRAN_ARRAY(double,brsnellneut,(1, 4)) \
                                              FORTRAN_ARRAY(double,brsnellchar,(1, 4)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_snelwidth_type,  \
                                              GENERAL_VAR(double,sneltot2) )

DECLARE_FORTRAN_COMMONBLOCK(sd_stau2body_type,  \
                                              FORTRAN_ARRAY(double,brstau1neut,(1, 4)) \
                                              FORTRAN_ARRAY(double,brstau2neut,(1, 4)) \
                                              FORTRAN_ARRAY(double,brstau1char,(1, 2)) \
                                              FORTRAN_ARRAY(double,brstau1hcsn,(1, 2)) \
                                              FORTRAN_ARRAY(double,brstau1wsn,(1, 2)) \
                                              FORTRAN_ARRAY(double,brstau2char,(1, 2)) \
                                              FORTRAN_ARRAY(double,brstau2hcsn,(1, 2)) \
                                              FORTRAN_ARRAY(double,brstau2wsn,(1, 2)) \
                                              GENERAL_VAR(double,brstau2hl) \
                                              GENERAL_VAR(double,brstau2hh) \
                                              GENERAL_VAR(double,brstau2ha) \
                                              GENERAL_VAR(double,brstau2ztau) )

DECLARE_FORTRAN_COMMONBLOCK(sd_stau2bodygrav_type,  \
                                                  GENERAL_VAR(double,brstautaugrav) )

DECLARE_FORTRAN_COMMONBLOCK(sd_stauwidth_type,  \
                                              GENERAL_VAR(double,stau1tot2) \
                                              GENERAL_VAR(double,stau2tot2) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sntau2body_type,  \
                                               FORTRAN_ARRAY(double,brsntauneut,(1, 4)) \
                                               FORTRAN_ARRAY(double,brsntauchar,(1, 2)) \
                                               FORTRAN_ARRAY(double,brsntau1wstau,(1, 2)) \
                                               FORTRAN_ARRAY(double,brsntau1hcstau,(1, 2)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_sntauwidth_type,  \
                                               GENERAL_VAR(double,sntautot2) )

DECLARE_FORTRAN_COMMONBLOCK(sd_top2body_type,  \
                                             GENERAL_VAR(double,brtopbw) \
                                             GENERAL_VAR(double,brtopbh) \
                                             FORTRAN_ARRAY(double,brtopneutrstop,(1, 4),(1, 2)) )

DECLARE_FORTRAN_COMMONBLOCK(sd_topwidth_type,  \
                                             GENERAL_VAR(double,toptot2) )
// CsB from Anders' Python script <

#endif // defined __SUSYHIT_types_hpp__
