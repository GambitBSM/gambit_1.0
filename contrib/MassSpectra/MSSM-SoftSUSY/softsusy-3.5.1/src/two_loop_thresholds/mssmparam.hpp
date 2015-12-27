
/*  legalistic nonsense:
 *
 * stolen from A. Sheplyakov
mssmparam is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  mssmparam is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/** \file mssmparam.hpp Declaration of MSSM parameters */
#ifndef _MSSM_MODEL_H
#define _MSSM_MODEL_H
#include <cassert>
#include <stdexcept>
#include <ginac/ginac.h>

namespace MSSM {

/*! \brief helper class to initialize symbols */
class mssm_init {
				static int count;
	public:
				mssm_init();
				~mssm_init();
};

static mssm_init my_initializer;


extern const GiNaC::symbol *_msusy_p;
extern const GiNaC::symbol &_msusy;
/*! SUSY mass scale */
extern const GiNaC::symbol msusy;


extern const GiNaC::symbol *_V_p;
extern const GiNaC::symbol &_V;
/*! Higgs field V.E.V */
extern const GiNaC::symbol V;


extern const GiNaC::symbol *_mt_p;
extern const GiNaC::symbol &_mt;
/*! top quark mass */
extern const GiNaC::symbol mt;


extern const GiNaC::symbol *_mb_p;
extern const GiNaC::symbol &_mb;
/*! bottom quark mass */
extern const GiNaC::symbol mb;


extern const GiNaC::symbol *_mtau_p;
extern const GiNaC::symbol &_mtau;
/*! tau lepton mass */
extern const GiNaC::symbol mtau;


extern const GiNaC::symbol *_mcha1_p;
extern const GiNaC::symbol &_mcha1;
/*! First chargino mass */
extern const GiNaC::symbol mcha1;


extern const GiNaC::symbol *_mcha2_p;
extern const GiNaC::symbol &_mcha2;
/*! Second chargino mass */
extern const GiNaC::symbol mcha2;


extern const GiNaC::symbol *_mgl_p;
extern const GiNaC::symbol &_mgl;
/*! Gluino mass */
extern const GiNaC::symbol mgl;


extern const GiNaC::symbol *_mh0_p;
extern const GiNaC::symbol &_mh0;
/*! SM Higgs boson mass */
extern const GiNaC::symbol mh0;


extern const GiNaC::symbol *_mA0_p;
extern const GiNaC::symbol &_mA0;
/*! Neutral CP=-1 Higgs boson mass */
extern const GiNaC::symbol mA0;


extern const GiNaC::symbol *_mH0_p;
extern const GiNaC::symbol &_mH0;
/*! Neutral CP=1 Higgs boson mass */
extern const GiNaC::symbol mH0;


extern const GiNaC::symbol *_mG0_p;
extern const GiNaC::symbol &_mG0;
/*! Neutral Goldstone mass */
extern const GiNaC::symbol mG0;


extern const GiNaC::symbol *_mGp_p;
extern const GiNaC::symbol &_mGp;
/*! Charged Goldstone mass */
extern const GiNaC::symbol mGp;


extern const GiNaC::symbol *_mHp_p;
extern const GiNaC::symbol &_mHp;
/*! Charged Higgs boson mass */
extern const GiNaC::symbol mHp;


extern const GiNaC::symbol *_MW_p;
extern const GiNaC::symbol &_MW;
/*! W boson mass */
extern const GiNaC::symbol MW;


extern const GiNaC::symbol *_MZ_p;
extern const GiNaC::symbol &_MZ;
/*! Z boson mass */
extern const GiNaC::symbol MZ;


extern const GiNaC::symbol *_mst1_p;
extern const GiNaC::symbol &_mst1;
/*! First stop mass */
extern const GiNaC::symbol mst1;


extern const GiNaC::symbol *_mst2_p;
extern const GiNaC::symbol &_mst2;
/*! Second stop mass */
extern const GiNaC::symbol mst2;


extern const GiNaC::symbol *_msb1_p;
extern const GiNaC::symbol &_msb1;
/*! First sbottom mass */
extern const GiNaC::symbol msb1;


extern const GiNaC::symbol *_msb2_p;
extern const GiNaC::symbol &_msb2;
/*! Second sbottom mass */
extern const GiNaC::symbol msb2;


extern const GiNaC::symbol *_msd1_p;
extern const GiNaC::symbol &_msd1;
/*! First sdown mass */
extern const GiNaC::symbol msd1;


extern const GiNaC::symbol *_msd2_p;
extern const GiNaC::symbol &_msd2;
/*! Second sdown mass */
extern const GiNaC::symbol msd2;


extern const GiNaC::symbol *_msu1_p;
extern const GiNaC::symbol &_msu1;
/*! First sup mass */
extern const GiNaC::symbol msu1;


extern const GiNaC::symbol *_msu2_p;
extern const GiNaC::symbol &_msu2;
/*! Second sup mass */
extern const GiNaC::symbol msu2;


extern const GiNaC::symbol *_msc1_p;
extern const GiNaC::symbol &_msc1;
/*! First scharmed mass */
extern const GiNaC::symbol msc1;


extern const GiNaC::symbol *_msc2_p;
extern const GiNaC::symbol &_msc2;
/*! Second scharmed mass */
extern const GiNaC::symbol msc2;


extern const GiNaC::symbol *_mss1_p;
extern const GiNaC::symbol &_mss1;
/*! First sstrange mass */
extern const GiNaC::symbol mss1;


extern const GiNaC::symbol *_mss2_p;
extern const GiNaC::symbol &_mss2;
/*! Second sstrange mass */
extern const GiNaC::symbol mss2;


extern const GiNaC::symbol *_msq1_p;
extern const GiNaC::symbol &_msq1;
/*! First scalar quark mass */
extern const GiNaC::symbol msq1;


extern const GiNaC::symbol *_msq2_p;
extern const GiNaC::symbol &_msq2;
/*! Second scalar quark mass */
extern const GiNaC::symbol msq2;


extern const GiNaC::symbol *_mstau1_p;
extern const GiNaC::symbol &_mstau1;
/*! First stau mass */
extern const GiNaC::symbol mstau1;


extern const GiNaC::symbol *_mstau2_p;
extern const GiNaC::symbol &_mstau2;
/*! Second stau mass */
extern const GiNaC::symbol mstau2;


extern const GiNaC::symbol *_msntau_p;
extern const GiNaC::symbol &_msntau;
/*! Tau snetrino  mass */
extern const GiNaC::symbol msntau;


extern const GiNaC::symbol *_mneu1_p;
extern const GiNaC::symbol &_mneu1;
/*! Neutralino 1 mass */
extern const GiNaC::symbol mneu1;


extern const GiNaC::symbol *_mneu2_p;
extern const GiNaC::symbol &_mneu2;
/*! Neutralino 2 mass */
extern const GiNaC::symbol mneu2;


extern const GiNaC::symbol *_mneu3_p;
extern const GiNaC::symbol &_mneu3;
/*! Neutralino 3 mass */
extern const GiNaC::symbol mneu3;


extern const GiNaC::symbol *_mneu4_p;
extern const GiNaC::symbol &_mneu4;
/*! Neutralino 4 mass */
extern const GiNaC::symbol mneu4;


extern const GiNaC::symbol *_MUE_p;
extern const GiNaC::symbol &_MUE;
/*! Higgs mixing parameter */
extern const GiNaC::symbol MUE;


extern const GiNaC::symbol *_dmb_p;
extern const GiNaC::symbol &_dmb;
/*! one-loop counter-term for b-quark mass */
extern const GiNaC::symbol dmb;


extern const GiNaC::symbol *_dmt_p;
extern const GiNaC::symbol &_dmt;
/*! one-loop counter-term for t-quark mass */
extern const GiNaC::symbol dmt;


extern const GiNaC::symbol *_dMUE_p;
extern const GiNaC::symbol &_dMUE;
/*! one-loop counter-term for Higgs mixing parameter */
extern const GiNaC::symbol dMUE;


extern const GiNaC::symbol *_dmst1_p;
extern const GiNaC::symbol &_dmst1;
/*! one-loop counter-term for stop1 mass squared */
extern const GiNaC::symbol dmst1;


extern const GiNaC::symbol *_dmst2_p;
extern const GiNaC::symbol &_dmst2;
/*! one-loop counter-term for stop2 mass squared */
extern const GiNaC::symbol dmst2;


extern const GiNaC::symbol *_dmst12_p;
extern const GiNaC::symbol &_dmst12;
/*! one-loop non-diagonal counter-term for stop mass matrix */
extern const GiNaC::symbol dmst12;


extern const GiNaC::symbol *_dmsb1_p;
extern const GiNaC::symbol &_dmsb1;
/*! one-loop counter-term for sbottom1 mass squared */
extern const GiNaC::symbol dmsb1;


extern const GiNaC::symbol *_dmsb2_p;
extern const GiNaC::symbol &_dmsb2;
/*! one-loop counter-term for sbottom2 mass squared */
extern const GiNaC::symbol dmsb2;


extern const GiNaC::symbol *_dmsb12_p;
extern const GiNaC::symbol &_dmsb12;
/*! one-loop non-diagonal counter-term for sbottom mass matrix */
extern const GiNaC::symbol dmsb12;


extern const GiNaC::symbol *_dmA0_p;
extern const GiNaC::symbol &_dmA0;
/*! one-loop counter-term for neutral CP-odd Higgs */
extern const GiNaC::symbol dmA0;


extern const GiNaC::symbol *_dmH0_p;
extern const GiNaC::symbol &_dmH0;
/*! one-loop counter-term for neutral CP-even Higgs */
extern const GiNaC::symbol dmH0;


extern const GiNaC::symbol *_dmh0_p;
extern const GiNaC::symbol &_dmh0;
/*! one-loop counter-term for SM Higgs */
extern const GiNaC::symbol dmh0;


extern const GiNaC::symbol *_dmHp_p;
extern const GiNaC::symbol &_dmHp;
/*! one-loop counter-term for charged Higgs */
extern const GiNaC::symbol dmHp;


extern const GiNaC::symbol *_dmGp_p;
extern const GiNaC::symbol &_dmGp;
/*! one-loop counter-term for charged Goldstone */
extern const GiNaC::symbol dmGp;


extern const GiNaC::symbol *_dmG0_p;
extern const GiNaC::symbol &_dmG0;
/*! one-loop counter-term for neutral Goldstone */
extern const GiNaC::symbol dmG0;


extern const GiNaC::symbol *_dmH0h0_p;
extern const GiNaC::symbol &_dmH0h0;
/*! one-loop non-diagonal counter-term for neutral CP-even Higgs mass matrix  */
extern const GiNaC::symbol dmH0h0;


extern const GiNaC::symbol *_dmA0G0_p;
extern const GiNaC::symbol &_dmA0G0;
/*! one-loop non-diagonal counter-term for neutral CP-odd Higgs mass matrix  */
extern const GiNaC::symbol dmA0G0;


extern const GiNaC::symbol *_dmHpGp_p;
extern const GiNaC::symbol &_dmHpGp;
/*! one-loop non-diagonal counter-term for charged Higgs mass matrix  */
extern const GiNaC::symbol dmHpGp;




extern const GiNaC::symbol *_GS_p;
extern const GiNaC::symbol &_GS;
/*! SU(3) gauge coupling */
extern const GiNaC::symbol GS;


extern const GiNaC::symbol *_YT_p;
extern const GiNaC::symbol &_YT;
/*! Yukawa (top) coupling constant */
extern const GiNaC::symbol YT;


extern const GiNaC::symbol *_dYT_p;
extern const GiNaC::symbol &_dYT;
/*! one-loop renormalization of YT */
extern const GiNaC::symbol dYT;


extern const GiNaC::symbol *_YB_p;
extern const GiNaC::symbol &_YB;
/*! Yukawa (bottom) coupling constant */
extern const GiNaC::symbol YB;


extern const GiNaC::symbol *_dYB_p;
extern const GiNaC::symbol &_dYB;
/*! one-loop renormalization of YB */
extern const GiNaC::symbol dYB;


extern const GiNaC::symbol *_YL_p;
extern const GiNaC::symbol &_YL;
/*! Yukawa (tau) coupling constant */
extern const GiNaC::symbol YL;


extern const GiNaC::symbol *_snb_p;
extern const GiNaC::symbol &_snb;
/*! sine of sbottom mixing angle */
extern const GiNaC::symbol snb;


extern const GiNaC::symbol *_csb_p;
extern const GiNaC::symbol &_csb;
/*! cosine of sbottom mixing angle */
extern const GiNaC::symbol csb;


extern const GiNaC::symbol *_snl_p;
extern const GiNaC::symbol &_snl;
/*! sine of stau mixing angle */
extern const GiNaC::symbol snl;


extern const GiNaC::symbol *_csl_p;
extern const GiNaC::symbol &_csl;
/*! cosine of stau mixing angle */
extern const GiNaC::symbol csl;


extern const GiNaC::symbol *_snt_p;
extern const GiNaC::symbol &_snt;
/*! sine of stop mixing angle */
extern const GiNaC::symbol snt;


extern const GiNaC::symbol *_cst_p;
extern const GiNaC::symbol &_cst;
/*! cosine of stop mixing angle */
extern const GiNaC::symbol cst;


extern const GiNaC::symbol *_sn2b_p;
extern const GiNaC::symbol &_sn2b;
/*! sine of doubled sbottom mixing angle */
extern const GiNaC::symbol sn2b;


extern const GiNaC::symbol *_cs2b_p;
extern const GiNaC::symbol &_cs2b;
/*! cosine of doubled sbottom mixing angle */
extern const GiNaC::symbol cs2b;


extern const GiNaC::symbol *_sn2t_p;
extern const GiNaC::symbol &_sn2t;
/*! sine of doubled stop mixing angle */
extern const GiNaC::symbol sn2t;


extern const GiNaC::symbol *_cs2t_p;
extern const GiNaC::symbol &_cs2t;
/*! cosine of doubled stop mixing angle */
extern const GiNaC::symbol cs2t;


extern const GiNaC::symbol *_Gw_p;
extern const GiNaC::symbol &_Gw;
/*! Electroweak coupling constant */
extern const GiNaC::symbol Gw;


extern const GiNaC::symbol *_Gprime_p;
extern const GiNaC::symbol &_Gprime;
/*! Hypercharge coupling constant */
extern const GiNaC::symbol Gprime;


extern const GiNaC::symbol *_SW_p;
extern const GiNaC::symbol &_SW;
/*! sine of Weinberg angle */
extern const GiNaC::symbol SW;


extern const GiNaC::symbol *_EL_p;
extern const GiNaC::symbol &_EL;
/*! charge of electron */
extern const GiNaC::symbol EL;


extern const GiNaC::symbol *_CW_p;
extern const GiNaC::symbol &_CW;
/*! cosine of Weinberg angle */
extern const GiNaC::symbol CW;


extern const GiNaC::symbol *_CB_p;
extern const GiNaC::symbol &_CB;
/*! \f$\cos(\beta)\f$ */
extern const GiNaC::symbol CB;


extern const GiNaC::symbol *_SB_p;
extern const GiNaC::symbol &_SB;
/*! \f$\sin(\beta)\f$ */
extern const GiNaC::symbol SB;


extern const GiNaC::symbol *_C2B_p;
extern const GiNaC::symbol &_C2B;
/*! \f$\cos(2\beta)\f$ */
extern const GiNaC::symbol C2B;


extern const GiNaC::symbol *_S2B_p;
extern const GiNaC::symbol &_S2B;
/*! \f$\sin(2\beta)\f$ */
extern const GiNaC::symbol S2B;


extern const GiNaC::symbol *_TB_p;
extern const GiNaC::symbol &_TB;
/*! \f$\tan(\beta)\f$ */
extern const GiNaC::symbol TB;


extern const GiNaC::symbol *_CA_p;
extern const GiNaC::symbol &_CA;
/*! Neutral CP=1 Higgs bosons mixing angle cosine */
extern const GiNaC::symbol CA;


extern const GiNaC::symbol *_SA_p;
extern const GiNaC::symbol &_SA;
/*! Neutral CP=1 Higgs bosons mixing angle sine */
extern const GiNaC::symbol SA;


extern const GiNaC::symbol *_C2A_p;
extern const GiNaC::symbol &_C2A;
/*! \f$\cos(2\alpha)\f$ */
extern const GiNaC::symbol C2A;


extern const GiNaC::symbol *_S2A_p;
extern const GiNaC::symbol &_S2A;
/*! \f$\sin(2\alpha)\f$ */
extern const GiNaC::symbol S2A;


extern const GiNaC::symbol *_CAB_p;
extern const GiNaC::symbol &_CAB;
/*! \f$\cos(\alpha+\beta)\f$ */
extern const GiNaC::symbol CAB;


extern const GiNaC::symbol *_SAB_p;
extern const GiNaC::symbol &_SAB;
/*! \f$\sin(\alpha+\beta)\f$ */
extern const GiNaC::symbol SAB;


extern const GiNaC::symbol *_CBA_p;
extern const GiNaC::symbol &_CBA;
/*! \f$\cos(\beta-\alpha)\f$ */
extern const GiNaC::symbol CBA;


extern const GiNaC::symbol *_SBA_p;
extern const GiNaC::symbol &_SBA;
/*! \f$\sin(\beta-\alpha)\f$ */
extern const GiNaC::symbol SBA;


extern const GiNaC::symbol *_Ab_p;
extern const GiNaC::symbol &_Ab;
/*! Scalar soft-breaking (bottom) parameters */
extern const GiNaC::symbol Ab;


extern const GiNaC::symbol *_At_p;
extern const GiNaC::symbol &_At;
/*! Scalar soft-breaking (top) parameters */
extern const GiNaC::symbol At;


extern const GiNaC::symbol *_Al_p;
extern const GiNaC::symbol &_Al;
/*! Scalar soft-breaking (tau) parameters */
extern const GiNaC::symbol Al;


extern const GiNaC::symbol *_ab_p;
extern const GiNaC::symbol &_ab;
/*! Ab - mu TB */
extern const GiNaC::symbol ab;


extern const GiNaC::symbol *_al_p;
extern const GiNaC::symbol &_al;
/*! Al - mu TB */
extern const GiNaC::symbol al;


extern const GiNaC::symbol *_at_p;
extern const GiNaC::symbol &_at;
/*! At - mu / TB */
extern const GiNaC::symbol at;


extern const GiNaC::symbol *_m12_p;
extern const GiNaC::symbol &_m12;
/*! Universal fermion mass */
extern const GiNaC::symbol m12;


extern const GiNaC::symbol *_m0_p;
extern const GiNaC::symbol &_m0;
/*! Universal scalar mass */
extern const GiNaC::symbol m0;


extern const GiNaC::symbol *_a0_p;
extern const GiNaC::symbol &_a0;
/*! Universal trilinear coupling */
extern const GiNaC::symbol a0;


extern const GiNaC::symbol *_scale_p;
extern const GiNaC::symbol &_scale;
/*! Low-energy scale (usually MZ) */
extern const GiNaC::symbol scale;


extern const GiNaC::symbol *_colorCF_p;
extern const GiNaC::symbol &_colorCF;
/*! SU(3) C_F invariant */
extern const GiNaC::symbol colorCF;


extern const GiNaC::symbol *_colorCA_p;
extern const GiNaC::symbol &_colorCA;
/*! SU(3) C_A invariant */
extern const GiNaC::symbol colorCA;


extern const GiNaC::symbol *_Tf_p;
extern const GiNaC::symbol &_Tf;
/*! SU(3) T_f invariant */
extern const GiNaC::symbol Tf;


class io_helper
{
	static int count;
	static GiNaC::lst allsyms;
	static GiNaC::lst allmasses;
		public:
			io_helper();
			inline const GiNaC::lst getall() const { return allsyms; }
			inline const GiNaC::lst get_all_masses() const { return allmasses; }
};

} // namespace MSSM


#endif



// hey, :vi:ft=cpp



