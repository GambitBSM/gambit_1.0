#include "two_loop_thresholds/softsusy_exmap.hpp"

namespace SoftSusy_helpers_ {

  //using namespace softsusy;
using namespace GiNaC;
 /// Return GiNac exmap with MSSM (Yukawa Model) parameters
GiNaC::exmap drBarPars_exmap(const MssmSoftsusy & mssy_) {
	exmap  mass_n_coupls;
	softsusy::drBarPars drb_params(mssy_.displayDrBarPars());
	mass_n_coupls[MSSM::mt] = drb_params.mt;	
	mass_n_coupls[MSSM::mb] = drb_params.mb;	
	mass_n_coupls[MSSM::MZ] = drb_params.mz;	
	mass_n_coupls[MSSM::MW] = drb_params.mw;

		// -------------- physical higgses masses ------------ //

	mass_n_coupls[MSSM::mh0] = drb_params.mh0(1);
	mass_n_coupls[MSSM::mA0] = drb_params.mA0(1);
	mass_n_coupls[MSSM::mH0] = drb_params.mh0(2);
	mass_n_coupls[MSSM::mHp] = drb_params.mHpm;
	
		// -------------- higgses mixing --------------------- //

		{
	ex tb_num(mssy_.displayTanb());
	ex cb_num = pow(pow(tb_num, 2) +1, numeric(-1,2)).evalf();
	ex sb_num = (tb_num*cb_num).evalf();
	ex alhpa_num(drb_params.thetaH);
	ex ca_num = cos(alhpa_num).evalf();
	ex sa_num = sin(alhpa_num).evalf();
	mass_n_coupls[MSSM::TB] = tb_num;
	mass_n_coupls[MSSM::SB] = sb_num;
	mass_n_coupls[MSSM::CB] = cb_num;
	mass_n_coupls[MSSM::CA] = ca_num;
	mass_n_coupls[MSSM::SA] = sa_num;

		// ------------------- gluino mass ------------------- //


	if ((close(drb_params.mGluino, drb_params.md(1,2),0.003)) ||
      (close(drb_params.mGluino, drb_params.md(2,2),0.003))) 
			{ 
				mass_n_coupls[MSSM::mgl] = drb_params.mGluino*0.995;
				cerr << "gluino mass has been changed by 0.5 % to avoid instability" << endl;
			}
	 	else
			mass_n_coupls[MSSM::mgl] = drb_params.mGluino;
			
	 

		// -------------- sfermion mixings --------------------- //

	mass_n_coupls[MSSM::csb] = cos(numeric(drb_params.thetab).evalf());
	mass_n_coupls[MSSM::snb] = sin(numeric(drb_params.thetab).evalf());
	mass_n_coupls[MSSM::cst] = cos(numeric(drb_params.thetat).evalf());
	mass_n_coupls[MSSM::snt] = sin(numeric(drb_params.thetat).evalf());
	mass_n_coupls[MSSM::csl] = cos(numeric(drb_params.thetatau).evalf());
	mass_n_coupls[MSSM::snl] = sin(numeric(drb_params.thetatau).evalf());

		// -------------- sfermion masses --------------------- //

	mass_n_coupls[MSSM::mst1] = numeric(drb_params.mu(1, 3));
	mass_n_coupls[MSSM::mst2] = numeric(drb_params.mu(2, 3));
	mass_n_coupls[MSSM::msb1] = numeric(drb_params.md(1,3));
	mass_n_coupls[MSSM::msb2] = numeric(drb_params.md(2,3));
	mass_n_coupls[MSSM::mstau1] = numeric(drb_params.me(1,3));
	mass_n_coupls[MSSM::mstau2] = numeric(drb_params.me(2,3));
	mass_n_coupls[MSSM::msd1] = numeric(drb_params.md(1,2)); // second generation squarks
	mass_n_coupls[MSSM::msd2] = numeric(drb_params.md(2,2));

		// squarks of generations 1,2 do not mix

		// -------------- coupling constants ---------------- //

		mass_n_coupls[MSSM::GS] = mssy_.displayGaugeCoupling(3);
		mass_n_coupls[MSSM::YT] = drb_params.ht;
		mass_n_coupls[MSSM::YB] = drb_params.hb;
		mass_n_coupls[MSSM::YL] = drb_params.htau;

		// -------------- soft couplings ------------------- //

		mass_n_coupls[MSSM::MUE] = mssy_.displaySusyMu();
		mass_n_coupls[MSSM::At] = mssy_.displaySoftA(UA,3,3);
		mass_n_coupls[MSSM::Ab] = mssy_.displaySoftA(DA,3,3);
		mass_n_coupls[MSSM::Al] = mssy_.displaySoftA(EA,3,3);

		mass_n_coupls[MSSM::ab] = mssy_.displaySoftA(UA,3,3) - mssy_.displaySusyMu()*tb_num;
		mass_n_coupls[MSSM::at] = mssy_.displaySoftA(DA,3,3) - mssy_.displaySusyMu()/tb_num; ;
		// --------------- (Scale MZ) --------------//
		mass_n_coupls[MSSM::scale] = mssy_.displayMu(); //drb_params.mz;

		// -------------- msusy common scale --------------- //
		
		mass_n_coupls[MSSM::msusy] = drb_params.mu(1,1);
		//sqrt(drb_params.mu(1,3)*drb_params.mu(2,3));

		// -------------- tau sneutrino mass --------------- //
		//
		mass_n_coupls[MSSM::msntau] = drb_params.msnu(3);

		// FIXME: need to do msq == mgl
		return mass_n_coupls;
		}

	}


} // namespace SoftSusy_helpers_

// vi:ts=2:sw=2

