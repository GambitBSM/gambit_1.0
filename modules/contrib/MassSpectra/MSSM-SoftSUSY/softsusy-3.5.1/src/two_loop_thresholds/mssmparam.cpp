
/*  legalistic nonsense:
 *
 *  This file is part of mb2l.
 *
mb2l is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  mb2l is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/** \file mssmparam.cpp Initialization of symbols */

#include "mssmparam.hpp"
using namespace std;
using namespace GiNaC;

namespace MSSM {


const symbol *_msusy_p;
const symbol &_msusy=*_msusy_p;
const symbol msusy=_msusy; 


const symbol *_V_p;
const symbol &_V=*_V_p;
const symbol V=_V; 


const symbol *_mt_p;
const symbol &_mt=*_mt_p;
const symbol mt=_mt; 


const symbol *_mb_p;
const symbol &_mb=*_mb_p;
const symbol mb=_mb; 


const symbol *_mtau_p;
const symbol &_mtau=*_mtau_p;
const symbol mtau=_mtau; 


const symbol *_mcha1_p;
const symbol &_mcha1=*_mcha1_p;
const symbol mcha1=_mcha1; 


const symbol *_mcha2_p;
const symbol &_mcha2=*_mcha2_p;
const symbol mcha2=_mcha2; 


const symbol *_mgl_p;
const symbol &_mgl=*_mgl_p;
const symbol mgl=_mgl; 


const symbol *_mh0_p;
const symbol &_mh0=*_mh0_p;
const symbol mh0=_mh0; 


const symbol *_mA0_p;
const symbol &_mA0=*_mA0_p;
const symbol mA0=_mA0; 


const symbol *_mH0_p;
const symbol &_mH0=*_mH0_p;
const symbol mH0=_mH0; 


const symbol *_mG0_p;
const symbol &_mG0=*_mG0_p;
const symbol mG0=_mG0; 


const symbol *_mGp_p;
const symbol &_mGp=*_mGp_p;
const symbol mGp=_mGp; 


const symbol *_mHp_p;
const symbol &_mHp=*_mHp_p;
const symbol mHp=_mHp; 


const symbol *_MW_p;
const symbol &_MW=*_MW_p;
const symbol MW=_MW; 


const symbol *_MZ_p;
const symbol &_MZ=*_MZ_p;
const symbol MZ=_MZ; 


const symbol *_mst1_p;
const symbol &_mst1=*_mst1_p;
const symbol mst1=_mst1; 


const symbol *_mst2_p;
const symbol &_mst2=*_mst2_p;
const symbol mst2=_mst2; 


const symbol *_msb1_p;
const symbol &_msb1=*_msb1_p;
const symbol msb1=_msb1; 


const symbol *_msb2_p;
const symbol &_msb2=*_msb2_p;
const symbol msb2=_msb2; 


const symbol *_msd1_p;
const symbol &_msd1=*_msd1_p;
const symbol msd1=_msd1; 


const symbol *_msd2_p;
const symbol &_msd2=*_msd2_p;
const symbol msd2=_msd2; 


const symbol *_msu1_p;
const symbol &_msu1=*_msu1_p;
const symbol msu1=_msu1; 


const symbol *_msu2_p;
const symbol &_msu2=*_msu2_p;
const symbol msu2=_msu2; 


const symbol *_msc1_p;
const symbol &_msc1=*_msc1_p;
const symbol msc1=_msc1; 


const symbol *_msc2_p;
const symbol &_msc2=*_msc2_p;
const symbol msc2=_msc2; 


const symbol *_mss1_p;
const symbol &_mss1=*_mss1_p;
const symbol mss1=_mss1; 


const symbol *_mss2_p;
const symbol &_mss2=*_mss2_p;
const symbol mss2=_mss2; 


const symbol *_msq1_p;
const symbol &_msq1=*_msq1_p;
const symbol msq1=_msq1; 


const symbol *_msq2_p;
const symbol &_msq2=*_msq2_p;
const symbol msq2=_msq2; 


const symbol *_mstau1_p;
const symbol &_mstau1=*_mstau1_p;
const symbol mstau1=_mstau1; 


const symbol *_mstau2_p;
const symbol &_mstau2=*_mstau2_p;
const symbol mstau2=_mstau2; 


const symbol *_msntau_p;
const symbol &_msntau=*_msntau_p;
const symbol msntau=_msntau; 


const symbol *_mneu1_p;
const symbol &_mneu1=*_mneu1_p;
const symbol mneu1=_mneu1; 


const symbol *_mneu2_p;
const symbol &_mneu2=*_mneu2_p;
const symbol mneu2=_mneu2; 


const symbol *_mneu3_p;
const symbol &_mneu3=*_mneu3_p;
const symbol mneu3=_mneu3; 


const symbol *_mneu4_p;
const symbol &_mneu4=*_mneu4_p;
const symbol mneu4=_mneu4; 


const symbol *_MUE_p;
const symbol &_MUE=*_MUE_p;
const symbol MUE=_MUE; 


const symbol *_dmb_p;
const symbol &_dmb=*_dmb_p;
const symbol dmb=_dmb; 


const symbol *_dmt_p;
const symbol &_dmt=*_dmt_p;
const symbol dmt=_dmt; 


const symbol *_dMUE_p;
const symbol &_dMUE=*_dMUE_p;
const symbol dMUE=_dMUE; 


const symbol *_dmst1_p;
const symbol &_dmst1=*_dmst1_p;
const symbol dmst1=_dmst1; 


const symbol *_dmst2_p;
const symbol &_dmst2=*_dmst2_p;
const symbol dmst2=_dmst2; 


const symbol *_dmst12_p;
const symbol &_dmst12=*_dmst12_p;
const symbol dmst12=_dmst12; 


const symbol *_dmsb1_p;
const symbol &_dmsb1=*_dmsb1_p;
const symbol dmsb1=_dmsb1; 


const symbol *_dmsb2_p;
const symbol &_dmsb2=*_dmsb2_p;
const symbol dmsb2=_dmsb2; 


const symbol *_dmsb12_p;
const symbol &_dmsb12=*_dmsb12_p;
const symbol dmsb12=_dmsb12; 


const symbol *_dmA0_p;
const symbol &_dmA0=*_dmA0_p;
const symbol dmA0=_dmA0; 


const symbol *_dmH0_p;
const symbol &_dmH0=*_dmH0_p;
const symbol dmH0=_dmH0; 


const symbol *_dmh0_p;
const symbol &_dmh0=*_dmh0_p;
const symbol dmh0=_dmh0; 


const symbol *_dmHp_p;
const symbol &_dmHp=*_dmHp_p;
const symbol dmHp=_dmHp; 


const symbol *_dmGp_p;
const symbol &_dmGp=*_dmGp_p;
const symbol dmGp=_dmGp; 


const symbol *_dmG0_p;
const symbol &_dmG0=*_dmG0_p;
const symbol dmG0=_dmG0; 


const symbol *_dmH0h0_p;
const symbol &_dmH0h0=*_dmH0h0_p;
const symbol dmH0h0=_dmH0h0; 


const symbol *_dmA0G0_p;
const symbol &_dmA0G0=*_dmA0G0_p;
const symbol dmA0G0=_dmA0G0; 


const symbol *_dmHpGp_p;
const symbol &_dmHpGp=*_dmHpGp_p;
const symbol dmHpGp=_dmHpGp; 

// total: 56 masses



const symbol *_GS_p;
const symbol &_GS=*_GS_p;
const symbol GS=_GS; 


const symbol *_YT_p;
const symbol &_YT=*_YT_p;
const symbol YT=_YT; 


const symbol *_dYT_p;
const symbol &_dYT=*_dYT_p;
const symbol dYT=_dYT; 


const symbol *_YB_p;
const symbol &_YB=*_YB_p;
const symbol YB=_YB; 


const symbol *_dYB_p;
const symbol &_dYB=*_dYB_p;
const symbol dYB=_dYB; 


const symbol *_YL_p;
const symbol &_YL=*_YL_p;
const symbol YL=_YL; 


const symbol *_snb_p;
const symbol &_snb=*_snb_p;
const symbol snb=_snb; 


const symbol *_csb_p;
const symbol &_csb=*_csb_p;
const symbol csb=_csb; 


const symbol *_snl_p;
const symbol &_snl=*_snl_p;
const symbol snl=_snl; 


const symbol *_csl_p;
const symbol &_csl=*_csl_p;
const symbol csl=_csl; 


const symbol *_snt_p;
const symbol &_snt=*_snt_p;
const symbol snt=_snt; 


const symbol *_cst_p;
const symbol &_cst=*_cst_p;
const symbol cst=_cst; 


const symbol *_sn2b_p;
const symbol &_sn2b=*_sn2b_p;
const symbol sn2b=_sn2b; 


const symbol *_cs2b_p;
const symbol &_cs2b=*_cs2b_p;
const symbol cs2b=_cs2b; 


const symbol *_sn2t_p;
const symbol &_sn2t=*_sn2t_p;
const symbol sn2t=_sn2t; 


const symbol *_cs2t_p;
const symbol &_cs2t=*_cs2t_p;
const symbol cs2t=_cs2t; 


const symbol *_Gw_p;
const symbol &_Gw=*_Gw_p;
const symbol Gw=_Gw; 


const symbol *_Gprime_p;
const symbol &_Gprime=*_Gprime_p;
const symbol Gprime=_Gprime; 


const symbol *_SW_p;
const symbol &_SW=*_SW_p;
const symbol SW=_SW; 


const symbol *_EL_p;
const symbol &_EL=*_EL_p;
const symbol EL=_EL; 


const symbol *_CW_p;
const symbol &_CW=*_CW_p;
const symbol CW=_CW; 


const symbol *_CB_p;
const symbol &_CB=*_CB_p;
const symbol CB=_CB; 


const symbol *_SB_p;
const symbol &_SB=*_SB_p;
const symbol SB=_SB; 


const symbol *_C2B_p;
const symbol &_C2B=*_C2B_p;
const symbol C2B=_C2B; 


const symbol *_S2B_p;
const symbol &_S2B=*_S2B_p;
const symbol S2B=_S2B; 


const symbol *_TB_p;
const symbol &_TB=*_TB_p;
const symbol TB=_TB; 


const symbol *_CA_p;
const symbol &_CA=*_CA_p;
const symbol CA=_CA; 


const symbol *_SA_p;
const symbol &_SA=*_SA_p;
const symbol SA=_SA; 


const symbol *_C2A_p;
const symbol &_C2A=*_C2A_p;
const symbol C2A=_C2A; 


const symbol *_S2A_p;
const symbol &_S2A=*_S2A_p;
const symbol S2A=_S2A; 


const symbol *_CAB_p;
const symbol &_CAB=*_CAB_p;
const symbol CAB=_CAB; 


const symbol *_SAB_p;
const symbol &_SAB=*_SAB_p;
const symbol SAB=_SAB; 


const symbol *_CBA_p;
const symbol &_CBA=*_CBA_p;
const symbol CBA=_CBA; 


const symbol *_SBA_p;
const symbol &_SBA=*_SBA_p;
const symbol SBA=_SBA; 


const symbol *_Ab_p;
const symbol &_Ab=*_Ab_p;
const symbol Ab=_Ab; 


const symbol *_At_p;
const symbol &_At=*_At_p;
const symbol At=_At; 


const symbol *_Al_p;
const symbol &_Al=*_Al_p;
const symbol Al=_Al; 


const symbol *_ab_p;
const symbol &_ab=*_ab_p;
const symbol ab=_ab; 


const symbol *_al_p;
const symbol &_al=*_al_p;
const symbol al=_al; 


const symbol *_at_p;
const symbol &_at=*_at_p;
const symbol at=_at; 


const symbol *_m12_p;
const symbol &_m12=*_m12_p;
const symbol m12=_m12; 


const symbol *_m0_p;
const symbol &_m0=*_m0_p;
const symbol m0=_m0; 


const symbol *_a0_p;
const symbol &_a0=*_a0_p;
const symbol a0=_a0; 


const symbol *_scale_p;
const symbol &_scale=*_scale_p;
const symbol scale=_scale; 


const symbol *_colorCF_p;
const symbol &_colorCF=*_colorCF_p;
const symbol colorCF=_colorCF; 


const symbol *_colorCA_p;
const symbol &_colorCA=*_colorCA_p;
const symbol colorCA=_colorCA; 


const symbol *_Tf_p;
const symbol &_Tf=*_Tf_p;
const symbol Tf=_Tf; 


int mssm_init::count=int(0);

mssm_init::mssm_init() {
				if (count++==0) {
	// initialize masses

		_msusy_p = reinterpret_cast<const symbol*>(&((new symbol("msusy"))->setflag(status_flags::dynallocated)));


		_V_p = reinterpret_cast<const symbol*>(&((new symbol("V"))->setflag(status_flags::dynallocated)));


		_mt_p = reinterpret_cast<const symbol*>(&((new symbol("mt"))->setflag(status_flags::dynallocated)));


		_mb_p = reinterpret_cast<const symbol*>(&((new symbol("mb"))->setflag(status_flags::dynallocated)));


		_mtau_p = reinterpret_cast<const symbol*>(&((new symbol("mtau"))->setflag(status_flags::dynallocated)));


		_mcha1_p = reinterpret_cast<const symbol*>(&((new symbol("mcha1"))->setflag(status_flags::dynallocated)));


		_mcha2_p = reinterpret_cast<const symbol*>(&((new symbol("mcha2"))->setflag(status_flags::dynallocated)));


		_mgl_p = reinterpret_cast<const symbol*>(&((new symbol("mgl"))->setflag(status_flags::dynallocated)));


		_mh0_p = reinterpret_cast<const symbol*>(&((new symbol("mh0"))->setflag(status_flags::dynallocated)));


		_mA0_p = reinterpret_cast<const symbol*>(&((new symbol("mA0"))->setflag(status_flags::dynallocated)));


		_mH0_p = reinterpret_cast<const symbol*>(&((new symbol("mH0"))->setflag(status_flags::dynallocated)));


		_mG0_p = reinterpret_cast<const symbol*>(&((new symbol("mG0"))->setflag(status_flags::dynallocated)));


		_mGp_p = reinterpret_cast<const symbol*>(&((new symbol("mGp"))->setflag(status_flags::dynallocated)));


		_mHp_p = reinterpret_cast<const symbol*>(&((new symbol("mHp"))->setflag(status_flags::dynallocated)));


		_MW_p = reinterpret_cast<const symbol*>(&((new symbol("MW"))->setflag(status_flags::dynallocated)));


		_MZ_p = reinterpret_cast<const symbol*>(&((new symbol("MZ"))->setflag(status_flags::dynallocated)));


		_mst1_p = reinterpret_cast<const symbol*>(&((new symbol("mst1"))->setflag(status_flags::dynallocated)));


		_mst2_p = reinterpret_cast<const symbol*>(&((new symbol("mst2"))->setflag(status_flags::dynallocated)));


		_msb1_p = reinterpret_cast<const symbol*>(&((new symbol("msb1"))->setflag(status_flags::dynallocated)));


		_msb2_p = reinterpret_cast<const symbol*>(&((new symbol("msb2"))->setflag(status_flags::dynallocated)));


		_msd1_p = reinterpret_cast<const symbol*>(&((new symbol("msd1"))->setflag(status_flags::dynallocated)));


		_msd2_p = reinterpret_cast<const symbol*>(&((new symbol("msd2"))->setflag(status_flags::dynallocated)));


		_msu1_p = reinterpret_cast<const symbol*>(&((new symbol("msu1"))->setflag(status_flags::dynallocated)));


		_msu2_p = reinterpret_cast<const symbol*>(&((new symbol("msu2"))->setflag(status_flags::dynallocated)));


		_msc1_p = reinterpret_cast<const symbol*>(&((new symbol("msc1"))->setflag(status_flags::dynallocated)));


		_msc2_p = reinterpret_cast<const symbol*>(&((new symbol("msc2"))->setflag(status_flags::dynallocated)));


		_mss1_p = reinterpret_cast<const symbol*>(&((new symbol("mss1"))->setflag(status_flags::dynallocated)));


		_mss2_p = reinterpret_cast<const symbol*>(&((new symbol("mss2"))->setflag(status_flags::dynallocated)));


		_msq1_p = reinterpret_cast<const symbol*>(&((new symbol("msq1"))->setflag(status_flags::dynallocated)));


		_msq2_p = reinterpret_cast<const symbol*>(&((new symbol("msq2"))->setflag(status_flags::dynallocated)));


		_mstau1_p = reinterpret_cast<const symbol*>(&((new symbol("mstau1"))->setflag(status_flags::dynallocated)));


		_mstau2_p = reinterpret_cast<const symbol*>(&((new symbol("mstau2"))->setflag(status_flags::dynallocated)));


		_msntau_p = reinterpret_cast<const symbol*>(&((new symbol("msntau"))->setflag(status_flags::dynallocated)));


		_mneu1_p = reinterpret_cast<const symbol*>(&((new symbol("mneu1"))->setflag(status_flags::dynallocated)));


		_mneu2_p = reinterpret_cast<const symbol*>(&((new symbol("mneu2"))->setflag(status_flags::dynallocated)));


		_mneu3_p = reinterpret_cast<const symbol*>(&((new symbol("mneu3"))->setflag(status_flags::dynallocated)));


		_mneu4_p = reinterpret_cast<const symbol*>(&((new symbol("mneu4"))->setflag(status_flags::dynallocated)));


		_MUE_p = reinterpret_cast<const symbol*>(&((new symbol("MUE"))->setflag(status_flags::dynallocated)));


		_dmb_p = reinterpret_cast<const symbol*>(&((new symbol("dmb"))->setflag(status_flags::dynallocated)));


		_dmt_p = reinterpret_cast<const symbol*>(&((new symbol("dmt"))->setflag(status_flags::dynallocated)));


		_dMUE_p = reinterpret_cast<const symbol*>(&((new symbol("dMUE"))->setflag(status_flags::dynallocated)));


		_dmst1_p = reinterpret_cast<const symbol*>(&((new symbol("dmst1"))->setflag(status_flags::dynallocated)));


		_dmst2_p = reinterpret_cast<const symbol*>(&((new symbol("dmst2"))->setflag(status_flags::dynallocated)));


		_dmst12_p = reinterpret_cast<const symbol*>(&((new symbol("dmst12"))->setflag(status_flags::dynallocated)));


		_dmsb1_p = reinterpret_cast<const symbol*>(&((new symbol("dmsb1"))->setflag(status_flags::dynallocated)));


		_dmsb2_p = reinterpret_cast<const symbol*>(&((new symbol("dmsb2"))->setflag(status_flags::dynallocated)));


		_dmsb12_p = reinterpret_cast<const symbol*>(&((new symbol("dmsb12"))->setflag(status_flags::dynallocated)));


		_dmA0_p = reinterpret_cast<const symbol*>(&((new symbol("dmA0"))->setflag(status_flags::dynallocated)));


		_dmH0_p = reinterpret_cast<const symbol*>(&((new symbol("dmH0"))->setflag(status_flags::dynallocated)));


		_dmh0_p = reinterpret_cast<const symbol*>(&((new symbol("dmh0"))->setflag(status_flags::dynallocated)));


		_dmHp_p = reinterpret_cast<const symbol*>(&((new symbol("dmHp"))->setflag(status_flags::dynallocated)));


		_dmGp_p = reinterpret_cast<const symbol*>(&((new symbol("dmGp"))->setflag(status_flags::dynallocated)));


		_dmG0_p = reinterpret_cast<const symbol*>(&((new symbol("dmG0"))->setflag(status_flags::dynallocated)));


		_dmH0h0_p = reinterpret_cast<const symbol*>(&((new symbol("dmH0h0"))->setflag(status_flags::dynallocated)));


		_dmA0G0_p = reinterpret_cast<const symbol*>(&((new symbol("dmA0G0"))->setflag(status_flags::dynallocated)));


		_dmHpGp_p = reinterpret_cast<const symbol*>(&((new symbol("dmHpGp"))->setflag(status_flags::dynallocated)));


	// initialize params

		_GS_p = reinterpret_cast<const symbol*>(&((new symbol("GS"))->setflag(status_flags::dynallocated)));


		_YT_p = reinterpret_cast<const symbol*>(&((new symbol("YT"))->setflag(status_flags::dynallocated)));


		_dYT_p = reinterpret_cast<const symbol*>(&((new symbol("dYT"))->setflag(status_flags::dynallocated)));


		_YB_p = reinterpret_cast<const symbol*>(&((new symbol("YB"))->setflag(status_flags::dynallocated)));


		_dYB_p = reinterpret_cast<const symbol*>(&((new symbol("dYB"))->setflag(status_flags::dynallocated)));


		_YL_p = reinterpret_cast<const symbol*>(&((new symbol("YL"))->setflag(status_flags::dynallocated)));


		_snb_p = reinterpret_cast<const symbol*>(&((new symbol("snb"))->setflag(status_flags::dynallocated)));


		_csb_p = reinterpret_cast<const symbol*>(&((new symbol("csb"))->setflag(status_flags::dynallocated)));


		_snl_p = reinterpret_cast<const symbol*>(&((new symbol("snl"))->setflag(status_flags::dynallocated)));


		_csl_p = reinterpret_cast<const symbol*>(&((new symbol("csl"))->setflag(status_flags::dynallocated)));


		_snt_p = reinterpret_cast<const symbol*>(&((new symbol("snt"))->setflag(status_flags::dynallocated)));


		_cst_p = reinterpret_cast<const symbol*>(&((new symbol("cst"))->setflag(status_flags::dynallocated)));


		_sn2b_p = reinterpret_cast<const symbol*>(&((new symbol("sn2b"))->setflag(status_flags::dynallocated)));


		_cs2b_p = reinterpret_cast<const symbol*>(&((new symbol("cs2b"))->setflag(status_flags::dynallocated)));


		_sn2t_p = reinterpret_cast<const symbol*>(&((new symbol("sn2t"))->setflag(status_flags::dynallocated)));


		_cs2t_p = reinterpret_cast<const symbol*>(&((new symbol("cs2t"))->setflag(status_flags::dynallocated)));


		_Gw_p = reinterpret_cast<const symbol*>(&((new symbol("Gw"))->setflag(status_flags::dynallocated)));


		_Gprime_p = reinterpret_cast<const symbol*>(&((new symbol("Gprime"))->setflag(status_flags::dynallocated)));


		_SW_p = reinterpret_cast<const symbol*>(&((new symbol("SW"))->setflag(status_flags::dynallocated)));


		_EL_p = reinterpret_cast<const symbol*>(&((new symbol("EL"))->setflag(status_flags::dynallocated)));


		_CW_p = reinterpret_cast<const symbol*>(&((new symbol("CW"))->setflag(status_flags::dynallocated)));


		_CB_p = reinterpret_cast<const symbol*>(&((new symbol("CB"))->setflag(status_flags::dynallocated)));


		_SB_p = reinterpret_cast<const symbol*>(&((new symbol("SB"))->setflag(status_flags::dynallocated)));


		_C2B_p = reinterpret_cast<const symbol*>(&((new symbol("C2B"))->setflag(status_flags::dynallocated)));


		_S2B_p = reinterpret_cast<const symbol*>(&((new symbol("S2B"))->setflag(status_flags::dynallocated)));


		_TB_p = reinterpret_cast<const symbol*>(&((new symbol("TB"))->setflag(status_flags::dynallocated)));


		_CA_p = reinterpret_cast<const symbol*>(&((new symbol("CA"))->setflag(status_flags::dynallocated)));


		_SA_p = reinterpret_cast<const symbol*>(&((new symbol("SA"))->setflag(status_flags::dynallocated)));


		_C2A_p = reinterpret_cast<const symbol*>(&((new symbol("C2A"))->setflag(status_flags::dynallocated)));


		_S2A_p = reinterpret_cast<const symbol*>(&((new symbol("S2A"))->setflag(status_flags::dynallocated)));


		_CAB_p = reinterpret_cast<const symbol*>(&((new symbol("CAB"))->setflag(status_flags::dynallocated)));


		_SAB_p = reinterpret_cast<const symbol*>(&((new symbol("SAB"))->setflag(status_flags::dynallocated)));


		_CBA_p = reinterpret_cast<const symbol*>(&((new symbol("CBA"))->setflag(status_flags::dynallocated)));


		_SBA_p = reinterpret_cast<const symbol*>(&((new symbol("SBA"))->setflag(status_flags::dynallocated)));


		_Ab_p = reinterpret_cast<const symbol*>(&((new symbol("Ab"))->setflag(status_flags::dynallocated)));


		_At_p = reinterpret_cast<const symbol*>(&((new symbol("At"))->setflag(status_flags::dynallocated)));


		_Al_p = reinterpret_cast<const symbol*>(&((new symbol("Al"))->setflag(status_flags::dynallocated)));


		_ab_p = reinterpret_cast<const symbol*>(&((new symbol("ab"))->setflag(status_flags::dynallocated)));


		_al_p = reinterpret_cast<const symbol*>(&((new symbol("al"))->setflag(status_flags::dynallocated)));


		_at_p = reinterpret_cast<const symbol*>(&((new symbol("at"))->setflag(status_flags::dynallocated)));


		_m12_p = reinterpret_cast<const symbol*>(&((new symbol("m12"))->setflag(status_flags::dynallocated)));


		_m0_p = reinterpret_cast<const symbol*>(&((new symbol("m0"))->setflag(status_flags::dynallocated)));


		_a0_p = reinterpret_cast<const symbol*>(&((new symbol("a0"))->setflag(status_flags::dynallocated)));


		_scale_p = reinterpret_cast<const symbol*>(&((new symbol("scale"))->setflag(status_flags::dynallocated)));


		_colorCF_p = reinterpret_cast<const symbol*>(&((new symbol("colorCF"))->setflag(status_flags::dynallocated)));


		_colorCA_p = reinterpret_cast<const symbol*>(&((new symbol("colorCA"))->setflag(status_flags::dynallocated)));


		_Tf_p = reinterpret_cast<const symbol*>(&((new symbol("Tf"))->setflag(status_flags::dynallocated)));


				}
}

mssm_init::~mssm_init() {
	if (--count==0) {
		//XXX: maybe, need to do some cleanup?
		}
	}

int io_helper::count = int(0);
lst io_helper::allsyms = lst();
lst io_helper::allmasses = lst();

io_helper::io_helper() {
	if (count++==0) {

	allsyms.append(GS); 


	allsyms.append(YT); 


	allsyms.append(dYT); 


	allsyms.append(YB); 


	allsyms.append(dYB); 


	allsyms.append(YL); 


	allsyms.append(snb); 


	allsyms.append(csb); 


	allsyms.append(snl); 


	allsyms.append(csl); 


	allsyms.append(snt); 


	allsyms.append(cst); 


	allsyms.append(sn2b); 


	allsyms.append(cs2b); 


	allsyms.append(sn2t); 


	allsyms.append(cs2t); 


	allsyms.append(Gw); 


	allsyms.append(Gprime); 


	allsyms.append(SW); 


	allsyms.append(EL); 


	allsyms.append(CW); 


	allsyms.append(CB); 


	allsyms.append(SB); 


	allsyms.append(C2B); 


	allsyms.append(S2B); 


	allsyms.append(TB); 


	allsyms.append(CA); 


	allsyms.append(SA); 


	allsyms.append(C2A); 


	allsyms.append(S2A); 


	allsyms.append(CAB); 


	allsyms.append(SAB); 


	allsyms.append(CBA); 


	allsyms.append(SBA); 


	allsyms.append(Ab); 


	allsyms.append(At); 


	allsyms.append(Al); 


	allsyms.append(ab); 


	allsyms.append(al); 


	allsyms.append(at); 


	allsyms.append(m12); 


	allsyms.append(m0); 


	allsyms.append(a0); 


	allsyms.append(scale); 


	allsyms.append(colorCF); 


	allsyms.append(colorCA); 


	allsyms.append(Tf); 


	allsyms.append(msusy); 
	allmasses.append(msusy);


	allsyms.append(V); 
	allmasses.append(V);


	allsyms.append(mt); 
	allmasses.append(mt);


	allsyms.append(mb); 
	allmasses.append(mb);


	allsyms.append(mtau); 
	allmasses.append(mtau);


	allsyms.append(mcha1); 
	allmasses.append(mcha1);


	allsyms.append(mcha2); 
	allmasses.append(mcha2);


	allsyms.append(mgl); 
	allmasses.append(mgl);


	allsyms.append(mh0); 
	allmasses.append(mh0);


	allsyms.append(mA0); 
	allmasses.append(mA0);


	allsyms.append(mH0); 
	allmasses.append(mH0);


	allsyms.append(mG0); 
	allmasses.append(mG0);


	allsyms.append(mGp); 
	allmasses.append(mGp);


	allsyms.append(mHp); 
	allmasses.append(mHp);


	allsyms.append(MW); 
	allmasses.append(MW);


	allsyms.append(MZ); 
	allmasses.append(MZ);


	allsyms.append(mst1); 
	allmasses.append(mst1);


	allsyms.append(mst2); 
	allmasses.append(mst2);


	allsyms.append(msb1); 
	allmasses.append(msb1);


	allsyms.append(msb2); 
	allmasses.append(msb2);


	allsyms.append(msd1); 
	allmasses.append(msd1);


	allsyms.append(msd2); 
	allmasses.append(msd2);


	allsyms.append(msu1); 
	allmasses.append(msu1);


	allsyms.append(msu2); 
	allmasses.append(msu2);


	allsyms.append(msc1); 
	allmasses.append(msc1);


	allsyms.append(msc2); 
	allmasses.append(msc2);


	allsyms.append(mss1); 
	allmasses.append(mss1);


	allsyms.append(mss2); 
	allmasses.append(mss2);


	allsyms.append(msq1); 
	allmasses.append(msq1);


	allsyms.append(msq2); 
	allmasses.append(msq2);


	allsyms.append(mstau1); 
	allmasses.append(mstau1);


	allsyms.append(mstau2); 
	allmasses.append(mstau2);


	allsyms.append(msntau); 
	allmasses.append(msntau);


	allsyms.append(mneu1); 
	allmasses.append(mneu1);


	allsyms.append(mneu2); 
	allmasses.append(mneu2);


	allsyms.append(mneu3); 
	allmasses.append(mneu3);


	allsyms.append(mneu4); 
	allmasses.append(mneu4);


	allsyms.append(MUE); 
	allmasses.append(MUE);


	allsyms.append(dmb); 
	allmasses.append(dmb);


	allsyms.append(dmt); 
	allmasses.append(dmt);


	allsyms.append(dMUE); 
	allmasses.append(dMUE);


	allsyms.append(dmst1); 
	allmasses.append(dmst1);


	allsyms.append(dmst2); 
	allmasses.append(dmst2);


	allsyms.append(dmst12); 
	allmasses.append(dmst12);


	allsyms.append(dmsb1); 
	allmasses.append(dmsb1);


	allsyms.append(dmsb2); 
	allmasses.append(dmsb2);


	allsyms.append(dmsb12); 
	allmasses.append(dmsb12);


	allsyms.append(dmA0); 
	allmasses.append(dmA0);


	allsyms.append(dmH0); 
	allmasses.append(dmH0);


	allsyms.append(dmh0); 
	allmasses.append(dmh0);


	allsyms.append(dmHp); 
	allmasses.append(dmHp);


	allsyms.append(dmGp); 
	allmasses.append(dmGp);


	allsyms.append(dmG0); 
	allmasses.append(dmG0);


	allsyms.append(dmH0h0); 
	allmasses.append(dmH0h0);


	allsyms.append(dmA0G0); 
	allmasses.append(dmA0G0);


	allsyms.append(dmHpGp); 
	allmasses.append(dmHpGp);


	}
}

} // namespace MSSM



// hey, :vi:ft=cpp



