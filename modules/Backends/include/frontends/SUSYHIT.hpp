//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SUSY-HIT 1.4 backend
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

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME SUSYHIT
#endif
#define VERSION 0.1
#define SAFE_VERSION 0_1

LOAD_LIBRARY

// CsB hand made >
//BE_VARIABLE(FORTRAN_COMMONBLOCK(top2body_CB_type, top2body), "sd_top2body_", "top2body")
// CsB hand made <

// CsB from Anders' Python script >
BE_VARIABLE(FORTRAN_COMMONBLOCK(widtha_hdec_type, widtha_hdec), "widtha_hdec_", "susyhit_cb_widtha_hdec")

BE_VARIABLE(FORTRAN_COMMONBLOCK(widthhl_hdec_type, widthhl_hdec), "widthhl_hdec_", "susyhit_cb_widthhl_hdec")

BE_VARIABLE(FORTRAN_COMMONBLOCK(widthhh_hdec_type, widthhh_hdec), "widthhh_hdec_", "susyhit_cb_widthhh_hdec")

BE_VARIABLE(FORTRAN_COMMONBLOCK(widthhc_hdec_type, widthhc_hdec), "widthhc_hdec_", "susyhit_cb_widthhc_hdec")

BE_VARIABLE(FORTRAN_COMMONBLOCK(wisusy_hdec_type, wisusy_hdec), "wisusy_hdec_", "susyhit_cb_wisusy_hdec")

BE_VARIABLE(FORTRAN_COMMONBLOCK(wisfer_hdec_type, wisfer_hdec), "wisfer_hdec_", "susyhit_cb_wisfer_hdec")

BE_VARIABLE(FORTRAN_COMMONBLOCK(hd_golddec_type, hd_golddec), "hd_golddec_", "susyhit_cb_hd_golddec")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_char2body_type, sd_char2body), "sd_char2body_", "susyhit_cb_sd_char2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_char2bodygrav_type, sd_char2bodygrav), "sd_char2bodygrav_", "susyhit_cb_sd_char2bodygrav")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_char3body_type, sd_char3body), "sd_char3body_", "susyhit_cb_sd_char3body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_charwidth_type, sd_charwidth), "sd_charwidth_", "susyhit_cb_sd_charwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_neut2body_type, sd_neut2body), "sd_neut2body_", "susyhit_cb_sd_neut2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_neut2bodygrav_type, sd_neut2bodygrav), "sd_neut2bodygrav_", "susyhit_cb_sd_neut2bodygrav")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_neut3body_type, sd_neut3body), "sd_neut3body_", "susyhit_cb_sd_neut3body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_neutloop_type, sd_neutloop), "sd_neutloop_", "susyhit_cb_sd_neutloop")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_neutwidth_type, sd_neutwidth), "sd_neutwidth_", "susyhit_cb_sd_neutwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_glui2body_type, sd_glui2body), "sd_glui2body_", "susyhit_cb_sd_glui2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_glui3body_type, sd_glui3body), "sd_glui3body_", "susyhit_cb_sd_glui3body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_gluiloop_type, sd_gluiloop), "sd_gluiloop_", "susyhit_cb_sd_gluiloop")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_gluiwidth_type, sd_gluiwidth), "sd_gluiwidth_", "susyhit_cb_sd_gluiwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sup2body_type, sd_sup2body), "sd_sup2body_", "susyhit_cb_sd_sup2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_supwidth_type, sd_supwidth), "sd_supwidth_", "susyhit_cb_sd_supwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sdown2body_type, sd_sdown2body), "sd_sdown2body_", "susyhit_cb_sd_sdown2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sdownwidth_type, sd_sdownwidth), "sd_sdownwidth_", "susyhit_cb_sd_sdownwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_stop2body_type, sd_stop2body), "sd_stop2body_", "susyhit_cb_sd_stop2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_stop3body_type, sd_stop3body), "sd_stop3body_", "susyhit_cb_sd_stop3body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_stoploop_type, sd_stoploop), "sd_stoploop_", "susyhit_cb_sd_stoploop")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_stop4body_type, sd_stop4body), "sd_stop4body_", "susyhit_cb_sd_stop4body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_stopwidth_type, sd_stopwidth), "sd_stopwidth_", "susyhit_cb_sd_stopwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sbot2body_type, sd_sbot2body), "sd_sbot2body_", "susyhit_cb_sd_sbot2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sbot3body_type, sd_sbot3body), "sd_sbot3body_", "susyhit_cb_sd_sbot3body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sbotwidth_type, sd_sbotwidth), "sd_sbotwidth_", "susyhit_cb_sd_sbotwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sel2body_type, sd_sel2body), "sd_sel2body_", "susyhit_cb_sd_sel2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_selwidth_type, sd_selwidth), "sd_selwidth_", "susyhit_cb_sd_selwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_snel2body_type, sd_snel2body), "sd_snel2body_", "susyhit_cb_sd_snel2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_snelwidth_type, sd_snelwidth), "sd_snelwidth_", "susyhit_cb_sd_snelwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_stau2body_type, sd_stau2body), "sd_stau2body_", "susyhit_cb_sd_stau2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_stau2bodygrav_type, sd_stau2bodygrav), "sd_stau2bodygrav_", "susyhit_cb_sd_stau2bodygrav")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_stauwidth_type, sd_stauwidth), "sd_stauwidth_", "susyhit_cb_sd_stauwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sntau2body_type, sd_sntau2body), "sd_sntau2body_", "susyhit_cb_sd_sntau2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_sntauwidth_type, sd_sntauwidth), "sd_sntauwidth_", "susyhit_cb_sd_sntauwidth")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_top2body_type, sd_top2body), "sd_top2body_", "susyhit_cb_sd_top2body")

BE_VARIABLE(FORTRAN_COMMONBLOCK(sd_topwidth_type, sd_topwidth), "sd_topwidth_", "susyhit_cb_sd_topwidth")
// CsB from Anders' Python script <

/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 */
BE_FUNCTION(SUSYHIT_MAIN, void, (), "MAIN__", "SUSYHIT_MAIN")

/* 
BE_FUNCTION(printStuff, void, (), "printstuff_", "libFarrayTest_printStuff")

BE_FUNCTION(set_d, void, (), "set_d_", "libFarrayTest_set_d")

BE_FUNCTION(fptrRoutine, void, (   ARG_FARRAY(double,1), int&,                     \
                                        ARG_FARRAY_FPTR(double,(ARG_FARRAY(double,1)))  \
                                    ), "fptrroutine_", "libFarrayTest_fptrRoutine")

BE_FUNCTION(doubleFuncArray1, double, (ARG_FARRAY(double,1)), "doublefuncarray1_", "libFarrayTest_doubleFuncArray1", (), 1)

BE_FUNCTION(doubleFuncArray2, double, (ARG_FARRAY(double,1)), "doublefuncarray2_", "libFarrayTest_doubleFuncArray2", (), 1)

BE_FUNCTION(doubleFunc, double, (double&), "doublefunc_", "libFarrayTest_doubleFunc")

*/

namespace Gambit
{
  namespace Backends
  {
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
    {

      /* Convenience functions go here */

    } /* end namespace BACKENDNAME_SAFE_VERSION */                                          
  } /* end namespace Backends */                                                
} /* end namespace Gambit */                                                   


//BE_CONV_FUNCTION(awesomenessByAnders, double, "awesomeness")

BE_INI_FUNCTION{}
DONE

// Undefine macros to avoid conflict with other backends
#include "backend_undefs.hpp"

