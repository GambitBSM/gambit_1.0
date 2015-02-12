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
/// \date 2015 Jan,Feb
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

/* Syntax for BE_VARIABLE:
 * BE_VARIABLE([type], "[exact symbol name]", "[choose capability name]")  
 * */

// CsB hand made with old BE_VAIABLE syntax >
// BE_VARIABLE(FORTRAN_COMMONBLOCK(top2body_CB_type, top2body), "sd_top2body_", "top2body")
// CsB <

// CsB from Anders' CBGB script >
BE_VARIABLE(widtha_hdec_type, widtha_hdec, "widtha_hdec_", "cb_widtha_hdec")
BE_VARIABLE(widthhl_hdec_type, widthhl_hdec, "widthhl_hdec_", "cb_widthhl_hdec")
BE_VARIABLE(widthhh_hdec_type, widthhh_hdec, "widthhh_hdec_", "cb_widthhh_hdec")
BE_VARIABLE(widthhc_hdec_type, widthhc_hdec, "widthhc_hdec_", "cb_widthhc_hdec")
BE_VARIABLE(wisusy_hdec_type, wisusy_hdec, "wisusy_hdec_", "cb_wisusy_hdec")
BE_VARIABLE(wisfer_hdec_type, wisfer_hdec, "wisfer_hdec_", "cb_wisfer_hdec")
BE_VARIABLE(hd_golddec_type, hd_golddec, "hd_golddec_", "cb_hd_golddec")
BE_VARIABLE(sd_char2body_type, sd_char2body, "sd_char2body_", "cb_sd_char2body")
BE_VARIABLE(sd_char2bodygrav_type, sd_char2bodygrav, "sd_char2bodygrav_", "cb_sd_char2bodygrav")
BE_VARIABLE(sd_char3body_type, sd_char3body, "sd_char3body_", "cb_sd_char3body")
BE_VARIABLE(sd_charwidth_type, sd_charwidth, "sd_charwidth_", "cb_sd_charwidth")
BE_VARIABLE(sd_neut2body_type, sd_neut2body, "sd_neut2body_", "cb_sd_neut2body")
BE_VARIABLE(sd_neut2bodygrav_type, sd_neut2bodygrav, "sd_neut2bodygrav_", "cb_sd_neut2bodygrav")
BE_VARIABLE(sd_neut3body_type, sd_neut3body, "sd_neut3body_", "cb_sd_neut3body")
BE_VARIABLE(sd_neutloop_type, sd_neutloop, "sd_neutloop_", "cb_sd_neutloop")
BE_VARIABLE(sd_neutwidth_type, sd_neutwidth, "sd_neutwidth_", "cb_sd_neutwidth")
BE_VARIABLE(sd_glui2body_type, sd_glui2body, "sd_glui2body_", "cb_sd_glui2body")
BE_VARIABLE(sd_glui3body_type, sd_glui3body, "sd_glui3body_", "cb_sd_glui3body")
BE_VARIABLE(sd_gluiloop_type, sd_gluiloop, "sd_gluiloop_", "cb_sd_gluiloop")
BE_VARIABLE(sd_gluiwidth_type, sd_gluiwidth, "sd_gluiwidth_", "cb_sd_gluiwidth")
BE_VARIABLE(sd_sup2body_type, sd_sup2body, "sd_sup2body_", "cb_sd_sup2body")
BE_VARIABLE(sd_supwidth_type, sd_supwidth, "sd_supwidth_", "cb_sd_supwidth")
BE_VARIABLE(sd_sdown2body_type, sd_sdown2body, "sd_sdown2body_", "cb_sd_sdown2body")
BE_VARIABLE(sd_sdownwidth_type, sd_sdownwidth, "sd_sdownwidth_", "cb_sd_sdownwidth")
BE_VARIABLE(sd_stop2body_type, sd_stop2body, "sd_stop2body_", "cb_sd_stop2body")
BE_VARIABLE(sd_stop3body_type, sd_stop3body, "sd_stop3body_", "cb_sd_stop3body")
BE_VARIABLE(sd_stoploop_type, sd_stoploop, "sd_stoploop_", "cb_sd_stoploop")
BE_VARIABLE(sd_stop4body_type, sd_stop4body, "sd_stop4body_", "cb_sd_stop4body")
BE_VARIABLE(sd_stopwidth_type, sd_stopwidth, "sd_stopwidth_", "cb_sd_stopwidth")
BE_VARIABLE(sd_sbot2body_type, sd_sbot2body, "sd_sbot2body_", "cb_sd_sbot2body")
BE_VARIABLE(sd_sbot3body_type, sd_sbot3body, "sd_sbot3body_", "cb_sd_sbot3body")
BE_VARIABLE(sd_sbotwidth_type, sd_sbotwidth, "sd_sbotwidth_", "cb_sd_sbotwidth")
BE_VARIABLE(sd_sel2body_type, sd_sel2body, "sd_sel2body_", "cb_sd_sel2body")
BE_VARIABLE(sd_selwidth_type, sd_selwidth, "sd_selwidth_", "cb_sd_selwidth")
BE_VARIABLE(sd_snel2body_type, sd_snel2body, "sd_snel2body_", "cb_sd_snel2body")
BE_VARIABLE(sd_snelwidth_type, sd_snelwidth, "sd_snelwidth_", "cb_sd_snelwidth")
BE_VARIABLE(sd_stau2body_type, sd_stau2body, "sd_stau2body_", "cb_sd_stau2body")
BE_VARIABLE(sd_stau2bodygrav_type, sd_stau2bodygrav, "sd_stau2bodygrav_", "cb_sd_stau2bodygrav")
BE_VARIABLE(sd_stauwidth_type, sd_stauwidth, "sd_stauwidth_", "cb_sd_stauwidth")
BE_VARIABLE(sd_sntau2body_type, sd_sntau2body, "sd_sntau2body_", "cb_sd_sntau2body")
BE_VARIABLE(sd_sntauwidth_type, sd_sntauwidth, "sd_sntauwidth_", "cb_sd_sntauwidth")
BE_VARIABLE(sd_top2body_type, sd_top2body, "sd_top2body_", "cb_sd_top2body")
BE_VARIABLE(sd_topwidth_type, sd_topwidth, "sd_topwidth_", "cb_sd_topwidth")
// CsB from Anders' CBGB script <

/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 */
// CsB we cannot call the main program of a Fortran code >
// BE_FUNCTION(SUSYHIT_MAIN, void, (), "MAIN__", "SUSYHIT_MAIN")
// CsB <
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
#include "gambit/Backends/backend_undefs.hpp"

