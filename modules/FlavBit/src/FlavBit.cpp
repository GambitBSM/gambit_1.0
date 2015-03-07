//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module FlavBit
///
///  Put your functions in files like this
///  if you wish to add observables or likelihoods
///  to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Nazila Mahmoudi
///  \date 2013 Oct
///  \date 2014
///  \date 2015 Feb
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
///  *********************************************

#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/FlavBit/FlavBit_rollcall.hpp"
#define Nobs_BKsll 21

namespace Gambit
{

  namespace FlavBit
  {
 
    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
 
    void FlavBit_fill(struct parameters &result) 
    {
      using namespace Pipes::FlavBit_fill;
      using namespace std;
	  	  
      char name[]="FlavBit/example.lha";

      eaSLHA spectrum;
      std::ifstream ifs(name);
      ifs >> spectrum;
      ifs.close();
      
      BEreq::Init_param(&result);

	  int ie,je;

	  if(!spectrum["MODSEL"].empty())
	  {
		if(spectrum["MODSEL"][1].is_data_line()) result.model=SLHAea::to<int>(spectrum["MODSEL"][1][1]);
		if(spectrum["MODSEL"][3].is_data_line()) result.NMSSM=SLHAea::to<int>(spectrum["MODSEL"][3][1]);
		if(spectrum["MODSEL"][4].is_data_line()) result.RV=SLHAea::to<int>(spectrum["MODSEL"][4][1]);
		if(spectrum["MODSEL"][5].is_data_line()) result.CPV=SLHAea::to<int>(spectrum["MODSEL"][5][1]);
		if(spectrum["MODSEL"][6].is_data_line()) result.FV=SLHAea::to<int>(spectrum["MODSEL"][6][1]);
		if(spectrum["MODSEL"][12].is_data_line()) result.Q=SLHAea::to<double>(spectrum["MODSEL"][12][1]);
	  }

	  if(result.NMSSM != 0) result.model=result.NMSSM; 
	  if(result.RV != 0) result.model=-2;
	  if(result.CPV != 0) result.model=-2;

	  if(!spectrum["SMINPUTS"].empty())
	  {
		if(spectrum["SMINPUTS"][1].is_data_line()) result.inv_alpha_em=SLHAea::to<double>(spectrum["SMINPUTS"][1][1]);
		if(spectrum["SMINPUTS"][2].is_data_line()) result.Gfermi=SLHAea::to<double>(spectrum["SMINPUTS"][2][1]);
		if(spectrum["SMINPUTS"][3].is_data_line()) result.alphas_MZ=SLHAea::to<double>(spectrum["SMINPUTS"][3][1]);
		if(spectrum["SMINPUTS"][4].is_data_line()) result.mass_Z=SLHAea::to<double>(spectrum["SMINPUTS"][4][1]);
		if(spectrum["SMINPUTS"][5].is_data_line()) result.mass_b=SLHAea::to<double>(spectrum["SMINPUTS"][5][1]);
		if(spectrum["SMINPUTS"][6].is_data_line()) result.mass_top_pole=SLHAea::to<double>(spectrum["SMINPUTS"][6][1]);
		if(spectrum["SMINPUTS"][7].is_data_line()) result.mass_tau=SLHAea::to<double>(spectrum["SMINPUTS"][7][1]);
		if(spectrum["SMINPUTS"][8].is_data_line()) result.mass_nutau2=SLHAea::to<double>(spectrum["SMINPUTS"][8][1]);
		if(spectrum["SMINPUTS"][11].is_data_line()) result.mass_e2=SLHAea::to<double>(spectrum["SMINPUTS"][11][1]);
		if(spectrum["SMINPUTS"][12].is_data_line()) result.mass_nue2=SLHAea::to<double>(spectrum["SMINPUTS"][12][1]);
		if(spectrum["SMINPUTS"][13].is_data_line()) result.mass_mu2=SLHAea::to<double>(spectrum["SMINPUTS"][13][1]);
		if(spectrum["SMINPUTS"][14].is_data_line()) result.mass_numu2=SLHAea::to<double>(spectrum["SMINPUTS"][14][1]);
		if(spectrum["SMINPUTS"][21].is_data_line()) result.mass_d2=SLHAea::to<double>(spectrum["SMINPUTS"][21][1]);
		if(spectrum["SMINPUTS"][22].is_data_line()) result.mass_u2=SLHAea::to<double>(spectrum["SMINPUTS"][22][1]);
		if(spectrum["SMINPUTS"][23].is_data_line()) result.mass_s2=SLHAea::to<double>(spectrum["SMINPUTS"][23][1]);
		if(spectrum["SMINPUTS"][24].is_data_line()) result.mass_c2=SLHAea::to<double>(spectrum["SMINPUTS"][24][1]);
	  }

	  if(!spectrum["VCKMIN"].empty())
	  {
		if(spectrum["VCKMIN"][1].is_data_line()) result.CKM_lambda=SLHAea::to<double>(spectrum["VCKMIN"][1][1]);
		if(spectrum["VCKMIN"][2].is_data_line()) result.CKM_A=SLHAea::to<double>(spectrum["VCKMIN"][2][1]);
		if(spectrum["VCKMIN"][3].is_data_line()) result.CKM_rhobar=SLHAea::to<double>(spectrum["VCKMIN"][3][1]);
		if(spectrum["VCKMIN"][4].is_data_line()) result.CKM_etabar=SLHAea::to<double>(spectrum["VCKMIN"][4][1]);
	  }

	  if(!spectrum["UPMNSIN"].empty())
	  {
		if(spectrum["UPMNSIN"][1].is_data_line()) result.PMNS_theta12=SLHAea::to<double>(spectrum["UPMNSIN"][1][1]);
		if(spectrum["UPMNSIN"][2].is_data_line()) result.PMNS_theta23=SLHAea::to<double>(spectrum["UPMNSIN"][2][1]);
		if(spectrum["UPMNSIN"][3].is_data_line()) result.PMNS_theta13=SLHAea::to<double>(spectrum["UPMNSIN"][3][1]);
		if(spectrum["UPMNSIN"][4].is_data_line()) result.PMNS_delta13=SLHAea::to<double>(spectrum["UPMNSIN"][4][1]);
		if(spectrum["UPMNSIN"][5].is_data_line()) result.PMNS_alpha1=SLHAea::to<double>(spectrum["UPMNSIN"][5][1]);
		if(spectrum["UPMNSIN"][6].is_data_line()) result.PMNS_alpha2=SLHAea::to<double>(spectrum["UPMNSIN"][6][1]);
	  }

	  if(!spectrum["MINPAR"].empty())
	  {
		switch(result.model)
		{
			case 1:
			{
				if(spectrum["MINPAR"][1].is_data_line()) result.m0=SLHAea::to<double>(spectrum["MINPAR"][1][1]);
				if(spectrum["MINPAR"][2].is_data_line()) result.m12=SLHAea::to<double>(spectrum["MINPAR"][2][1]);
				if(spectrum["MINPAR"][3].is_data_line()) result.tan_beta=SLHAea::to<double>(spectrum["MINPAR"][3][1]);
				if(spectrum["MINPAR"][4].is_data_line()) result.sign_mu=SLHAea::to<double>(spectrum["MINPAR"][4][1]);
				if(spectrum["MINPAR"][5].is_data_line()) result.A0=SLHAea::to<double>(spectrum["MINPAR"][5][1]);
			}
			case 2:
			{
				if(spectrum["MINPAR"][1].is_data_line()) result.Lambda=SLHAea::to<double>(spectrum["MINPAR"][1][1]);
				if(spectrum["MINPAR"][2].is_data_line()) result.Mmess=SLHAea::to<double>(spectrum["MINPAR"][2][1]);
				if(spectrum["MINPAR"][3].is_data_line()) result.tan_beta=SLHAea::to<double>(spectrum["MINPAR"][3][1]);
				if(spectrum["MINPAR"][4].is_data_line()) result.sign_mu=SLHAea::to<double>(spectrum["MINPAR"][4][1]);
				if(spectrum["MINPAR"][5].is_data_line()) result.N5=SLHAea::to<double>(spectrum["MINPAR"][5][1]);
				if(spectrum["MINPAR"][6].is_data_line()) result.cgrav=SLHAea::to<double>(spectrum["MINPAR"][6][1]);	
			}
			case 3:
			{
				if(spectrum["MINPAR"][1].is_data_line()) result.m32=SLHAea::to<double>(spectrum["MINPAR"][1][1]);
				if(spectrum["MINPAR"][2].is_data_line()) result.m0=SLHAea::to<double>(spectrum["MINPAR"][2][1]);
				if(spectrum["MINPAR"][3].is_data_line()) result.tan_beta=SLHAea::to<double>(spectrum["MINPAR"][3][1]);
				if(spectrum["MINPAR"][4].is_data_line()) result.sign_mu=SLHAea::to<double>(spectrum["MINPAR"][4][1]);
			}
			default:
			{
				if(spectrum["MINPAR"][3].is_data_line()) result.tan_beta=SLHAea::to<double>(spectrum["MINPAR"][3][1]);
			}
		}
	  }

	  if(!spectrum["EXTPAR"].empty())
	  {
		if(spectrum["EXTPAR"][0].is_data_line()) result.Min=SLHAea::to<double>(spectrum["EXTPAR"][0][1]);
		if(spectrum["EXTPAR"][1].is_data_line()) result.M1_Min=SLHAea::to<double>(spectrum["EXTPAR"][1][1]);
		if(spectrum["EXTPAR"][2].is_data_line()) result.M2_Min=SLHAea::to<double>(spectrum["EXTPAR"][2][1]);
		if(spectrum["EXTPAR"][3].is_data_line()) result.M3_Min=SLHAea::to<double>(spectrum["EXTPAR"][3][1]);
		if(spectrum["EXTPAR"][11].is_data_line()) result.At_Min=SLHAea::to<double>(spectrum["EXTPAR"][11][1]);
		if(spectrum["EXTPAR"][12].is_data_line()) result.Ab_Min=SLHAea::to<double>(spectrum["EXTPAR"][12][1]);
		if(spectrum["EXTPAR"][13].is_data_line()) result.Atau_Min=SLHAea::to<double>(spectrum["EXTPAR"][13][1]);
		if(spectrum["EXTPAR"][21].is_data_line()) result.M2H1_Min=SLHAea::to<double>(spectrum["EXTPAR"][21][1]);
		if(spectrum["EXTPAR"][22].is_data_line()) result.M2H2_Min=SLHAea::to<double>(spectrum["EXTPAR"][22][1]);
		if(spectrum["EXTPAR"][23].is_data_line()) result.mu_Min=SLHAea::to<double>(spectrum["EXTPAR"][23][1]);
		if(spectrum["EXTPAR"][24].is_data_line()) result.M2A_Min=SLHAea::to<double>(spectrum["EXTPAR"][24][1]);
		if(spectrum["EXTPAR"][25].is_data_line()) result.tb_Min=SLHAea::to<double>(spectrum["EXTPAR"][25][1]);
		if(spectrum["EXTPAR"][26].is_data_line()) result.mA_Min=SLHAea::to<double>(spectrum["EXTPAR"][26][1]);
		if(spectrum["EXTPAR"][31].is_data_line()) result.MeL_Min=SLHAea::to<double>(spectrum["EXTPAR"][31][1]);
		if(spectrum["EXTPAR"][32].is_data_line()) result.MmuL_Min=SLHAea::to<double>(spectrum["EXTPAR"][32][1]);
		if(spectrum["EXTPAR"][33].is_data_line()) result.MtauL_Min=SLHAea::to<double>(spectrum["EXTPAR"][33][1]);
		if(spectrum["EXTPAR"][34].is_data_line()) result.MeR_Min=SLHAea::to<double>(spectrum["EXTPAR"][34][1]);
		if(spectrum["EXTPAR"][35].is_data_line()) result.MmuR_Min=SLHAea::to<double>(spectrum["EXTPAR"][35][1]);
		if(spectrum["EXTPAR"][36].is_data_line()) result.MtauR_Min=SLHAea::to<double>(spectrum["EXTPAR"][36][1]);
		if(spectrum["EXTPAR"][41].is_data_line()) result.MqL1_Min=SLHAea::to<double>(spectrum["EXTPAR"][41][1]);
		if(spectrum["EXTPAR"][42].is_data_line()) result.MqL2_Min=SLHAea::to<double>(spectrum["EXTPAR"][42][1]);
		if(spectrum["EXTPAR"][43].is_data_line()) result.MqL3_Min=SLHAea::to<double>(spectrum["EXTPAR"][43][1]);
		if(spectrum["EXTPAR"][44].is_data_line()) result.MuR_Min=SLHAea::to<double>(spectrum["EXTPAR"][44][1]);
		if(spectrum["EXTPAR"][45].is_data_line()) result.McR_Min=SLHAea::to<double>(spectrum["EXTPAR"][45][1]);
		if(spectrum["EXTPAR"][46].is_data_line()) result.MtR_Min=SLHAea::to<double>(spectrum["EXTPAR"][46][1]);
		if(spectrum["EXTPAR"][47].is_data_line()) result.MdR_Min=SLHAea::to<double>(spectrum["EXTPAR"][47][1]);
		if(spectrum["EXTPAR"][48].is_data_line()) result.MsR_Min=SLHAea::to<double>(spectrum["EXTPAR"][48][1]);
		if(spectrum["EXTPAR"][49].is_data_line()) result.MbR_Min=SLHAea::to<double>(spectrum["EXTPAR"][49][1]);
		if(spectrum["EXTPAR"][51].is_data_line()) result.N51=SLHAea::to<double>(spectrum["EXTPAR"][51][1]);
		if(spectrum["EXTPAR"][52].is_data_line()) result.N52=SLHAea::to<double>(spectrum["EXTPAR"][52][1]);
		if(spectrum["EXTPAR"][53].is_data_line()) result.N53=SLHAea::to<double>(spectrum["EXTPAR"][53][1]);
		if(spectrum["EXTPAR"][61].is_data_line()) result.lambdaNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][61][1]);
		if(spectrum["EXTPAR"][62].is_data_line()) result.kappaNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][62][1]);
		if(spectrum["EXTPAR"][63].is_data_line()) result.AlambdaNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][63][1]);
		if(spectrum["EXTPAR"][64].is_data_line()) result.AkappaNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][64][1]);
		if(spectrum["EXTPAR"][65].is_data_line()) result.lambdaSNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][65][1]);
		if(spectrum["EXTPAR"][66].is_data_line()) result.xiFNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][66][1]);
		if(spectrum["EXTPAR"][67].is_data_line()) result.xiSNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][67][1]);
		if(spectrum["EXTPAR"][68].is_data_line()) result.mupNMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][68][1]);
		if(spectrum["EXTPAR"][69].is_data_line()) result.mSp2NMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][69][1]);
		if(spectrum["EXTPAR"][70].is_data_line()) result.mS2NMSSM_Min=SLHAea::to<double>(spectrum["EXTPAR"][70][1]);
	  }

	  if(!spectrum["MASS"].empty())
	  {
		if(spectrum["MASS"][1].is_data_line()) result.mass_d=SLHAea::to<double>(spectrum["MASS"][1][1]);
		if(spectrum["MASS"][2].is_data_line()) result.mass_u=SLHAea::to<double>(spectrum["MASS"][2][1]);
		if(spectrum["MASS"][3].is_data_line()) result.mass_s=SLHAea::to<double>(spectrum["MASS"][3][1]);
		if(spectrum["MASS"][4].is_data_line()) result.mass_c=SLHAea::to<double>(spectrum["MASS"][4][1]);
		if(spectrum["MASS"][6].is_data_line()) result.mass_top=SLHAea::to<double>(spectrum["MASS"][6][1]);
		if(spectrum["MASS"][11].is_data_line()) result.mass_e=SLHAea::to<double>(spectrum["MASS"][11][1]);
		if(spectrum["MASS"][12].is_data_line()) result.mass_nue=SLHAea::to<double>(spectrum["MASS"][12][1]);
		if(spectrum["MASS"][13].is_data_line()) result.mass_mu=SLHAea::to<double>(spectrum["MASS"][13][1]);
		if(spectrum["MASS"][14].is_data_line()) result.mass_num=SLHAea::to<double>(spectrum["MASS"][14][1]);
		if(spectrum["MASS"][15].is_data_line()) result.mass_tau=SLHAea::to<double>(spectrum["MASS"][15][1]);
		if(spectrum["MASS"][16].is_data_line()) result.mass_nut=SLHAea::to<double>(spectrum["MASS"][16][1]);
		if(spectrum["MASS"][21].is_data_line()) result.mass_gluon=SLHAea::to<double>(spectrum["MASS"][21][1]);
		if(spectrum["MASS"][22].is_data_line()) result.mass_photon=SLHAea::to<double>(spectrum["MASS"][22][1]);
		if(spectrum["MASS"][23].is_data_line()) result.mass_Z0=SLHAea::to<double>(spectrum["MASS"][23][1]);
		if(spectrum["MASS"][24].is_data_line()) result.mass_W=SLHAea::to<double>(spectrum["MASS"][24][1]);
		if(spectrum["MASS"][25].is_data_line()) result.mass_h0=SLHAea::to<double>(spectrum["MASS"][25][1]);
		if(spectrum["MASS"][35].is_data_line()) result.mass_H0=SLHAea::to<double>(spectrum["MASS"][35][1]);
		if(spectrum["MASS"][36].is_data_line()) result.mass_A0=SLHAea::to<double>(spectrum["MASS"][36][1]);
		if(spectrum["MASS"][37].is_data_line()) result.mass_H=SLHAea::to<double>(spectrum["MASS"][37][1]);
		if(spectrum["MASS"][39].is_data_line()) result.mass_graviton=SLHAea::to<double>(spectrum["MASS"][39][1]);
		if(spectrum["MASS"][45].is_data_line()) result.mass_H03=SLHAea::to<double>(spectrum["MASS"][45][1]);
		if(spectrum["MASS"][46].is_data_line()) result.mass_A02=SLHAea::to<double>(spectrum["MASS"][46][1]);
		if(spectrum["MASS"][1000001].is_data_line()) result.mass_dnl=SLHAea::to<double>(spectrum["MASS"][1000001][1]);
		if(spectrum["MASS"][1000002].is_data_line()) result.mass_upl=SLHAea::to<double>(spectrum["MASS"][1000002][1]);
		if(spectrum["MASS"][1000003].is_data_line()) result.mass_stl=SLHAea::to<double>(spectrum["MASS"][1000003][1]);
		if(spectrum["MASS"][1000004].is_data_line()) result.mass_chl=SLHAea::to<double>(spectrum["MASS"][1000004][1]);
		if(spectrum["MASS"][1000005].is_data_line()) result.mass_b1=SLHAea::to<double>(spectrum["MASS"][1000005][1]);
		if(spectrum["MASS"][1000006].is_data_line()) result.mass_t1=SLHAea::to<double>(spectrum["MASS"][1000006][1]);
		if(spectrum["MASS"][1000011].is_data_line()) result.mass_el=SLHAea::to<double>(spectrum["MASS"][1000011][1]);
		if(spectrum["MASS"][1000012].is_data_line()) result.mass_nuel=SLHAea::to<double>(spectrum["MASS"][1000012][1]);
		if(spectrum["MASS"][1000013].is_data_line()) result.mass_mul=SLHAea::to<double>(spectrum["MASS"][1000013][1]);
		if(spectrum["MASS"][1000014].is_data_line()) result.mass_numl=SLHAea::to<double>(spectrum["MASS"][1000014][1]);
		if(spectrum["MASS"][1000015].is_data_line()) result.mass_tau1=SLHAea::to<double>(spectrum["MASS"][1000015][1]);
		if(spectrum["MASS"][1000016].is_data_line()) result.mass_nutl=SLHAea::to<double>(spectrum["MASS"][1000016][1]);
		if(spectrum["MASS"][1000021].is_data_line()) result.mass_gluino=SLHAea::to<double>(spectrum["MASS"][1000021][1]);
		if(spectrum["MASS"][1000022].is_data_line()) result.mass_neut[1]=SLHAea::to<double>(spectrum["MASS"][1000022][1]);
		if(spectrum["MASS"][1000023].is_data_line()) result.mass_neut[2]=SLHAea::to<double>(spectrum["MASS"][1000023][1]);
		if(spectrum["MASS"][1000024].is_data_line()) result.mass_cha1=SLHAea::to<double>(spectrum["MASS"][1000024][1]);
		if(spectrum["MASS"][1000025].is_data_line()) result.mass_neut[3]=SLHAea::to<double>(spectrum["MASS"][1000025][1]);
		if(spectrum["MASS"][1000035].is_data_line()) result.mass_neut[4]=SLHAea::to<double>(spectrum["MASS"][1000035][1]);
		if(spectrum["MASS"][1000037].is_data_line()) result.mass_cha2=SLHAea::to<double>(spectrum["MASS"][1000037][1]);
		if(spectrum["MASS"][1000039].is_data_line()) result.mass_gravitino=SLHAea::to<double>(spectrum["MASS"][1000039][1]);
		if(spectrum["MASS"][1000045].is_data_line()) result.mass_neut[5]=SLHAea::to<double>(spectrum["MASS"][1000045][1]);
		if(spectrum["MASS"][2000001].is_data_line()) result.mass_dnr=SLHAea::to<double>(spectrum["MASS"][2000001][1]);
		if(spectrum["MASS"][2000002].is_data_line()) result.mass_upr=SLHAea::to<double>(spectrum["MASS"][2000002][1]);
		if(spectrum["MASS"][2000003].is_data_line()) result.mass_str=SLHAea::to<double>(spectrum["MASS"][2000003][1]);
		if(spectrum["MASS"][2000004].is_data_line()) result.mass_chr=SLHAea::to<double>(spectrum["MASS"][2000004][1]);
		if(spectrum["MASS"][2000005].is_data_line()) result.mass_b2=SLHAea::to<double>(spectrum["MASS"][2000005][1]);
		if(spectrum["MASS"][2000006].is_data_line()) result.mass_t2=SLHAea::to<double>(spectrum["MASS"][2000006][1]);
		if(spectrum["MASS"][2000011].is_data_line()) result.mass_er=SLHAea::to<double>(spectrum["MASS"][2000011][1]);
		if(spectrum["MASS"][2000012].is_data_line()) result.mass_nuer=SLHAea::to<double>(spectrum["MASS"][2000012][1]);
		if(spectrum["MASS"][2000013].is_data_line()) result.mass_mur=SLHAea::to<double>(spectrum["MASS"][2000013][1]);
		if(spectrum["MASS"][2000014].is_data_line()) result.mass_numr=SLHAea::to<double>(spectrum["MASS"][2000014][1]);
		if(spectrum["MASS"][2000015].is_data_line()) result.mass_tau2=SLHAea::to<double>(spectrum["MASS"][2000015][1]);
		if(spectrum["MASS"][2000016].is_data_line()) result.mass_nutr=SLHAea::to<double>(spectrum["MASS"][2000016][1]);
	  }

	  if(!spectrum["ALPHA"].empty()) if(spectrum["ALPHA"].back().is_data_line()) result.alpha=SLHAea::to<double>(spectrum["ALPHA"].back().at(0));

	  if(!spectrum["STOPMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++) 
           if(spectrum["STOPMIX"][max(ie,je)].is_data_line()) result.stop_mix[ie][je]=SLHAea::to<double>(spectrum["STOPMIX"].at(ie,je)[2]);
	  if(!spectrum["SBOTMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
           if(spectrum["SBOTMIX"][max(ie,je)].is_data_line()) result.sbot_mix[ie][je]=SLHAea::to<double>(spectrum["SBOTMIX"].at(ie,je)[2]);
	  if(!spectrum["STAUMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
           if(spectrum["STAUMIX"][max(ie,je)].is_data_line()) result.stau_mix[ie][je]=SLHAea::to<double>(spectrum["STAUMIX"].at(ie,je)[2]);
	  if(!spectrum["NMIX"].empty()) for(ie=1;ie<=4;ie++) for(je=1;je<=4;je++)
           if(spectrum["NMIX"][max(ie,je)].is_data_line()) result.neut_mix[ie][je]=SLHAea::to<double>(spectrum["NMIX"].at(ie,je)[2]);
	  if(!spectrum["NMNMIX"].empty()) for(ie=1;ie<=5;ie++) for(je=1;je<=5;je++)
           if(spectrum["NMNMIX"][max(ie,je)].is_data_line()) result.neut_mix[ie][je]=SLHAea::to<double>(spectrum["NMNMIX"].at(ie,je)[2]);
	  if(!spectrum["UMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
           if(spectrum["UMIX"][max(ie,je)].is_data_line()) result.charg_Umix[ie][je]=SLHAea::to<double>(spectrum["UMIX"].at(ie,je)[2]);
	  if(!spectrum["VMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
           if(spectrum["VMIX"][max(ie,je)].is_data_line()) result.charg_Vmix[ie][je]=SLHAea::to<double>(spectrum["VMIX"].at(ie,je)[2]);

	  if(!spectrum["GAUGE"].empty())
	  {
		if(spectrum["GAUGE"][1].is_data_line()) result.gp_Q=SLHAea::to<double>(spectrum["GAUGE"][1][1]);
		if(spectrum["GAUGE"][2].is_data_line()) result.g2_Q=SLHAea::to<double>(spectrum["GAUGE"][2][1]);
		if(spectrum["GAUGE"][3].is_data_line()) result.g3_Q=SLHAea::to<double>(spectrum["GAUGE"][3][1]);
	  }

	  if(!spectrum["YU"].empty()) for(ie=1;ie<=3;ie++) if(spectrum["YU"][ie].is_data_line()) result.yut[ie]=SLHAea::to<double>(spectrum["YU"].at(ie,ie)[2]);
	  if(!spectrum["YD"].empty()) for(ie=1;ie<=3;ie++) if(spectrum["YD"][ie].is_data_line()) result.yub[ie]=SLHAea::to<double>(spectrum["YD"].at(ie,ie)[2]);
	  if(!spectrum["YE"].empty()) for(ie=1;ie<=3;ie++) if(spectrum["YE"][ie].is_data_line()) result.yutau[ie]=SLHAea::to<double>(spectrum["YE"].at(ie,ie)[2]);
	  
	  if(!spectrum["HMIX"].empty())
	  {
		if(spectrum["HMIX"][1].is_data_line()) result.mu_Q=SLHAea::to<double>(spectrum["HMIX"][1][1]);
		if(spectrum["HMIX"][2].is_data_line()) result.tanb_GUT=SLHAea::to<double>(spectrum["HMIX"][2][1]);
		if(spectrum["HMIX"][3].is_data_line()) result.Higgs_VEV=SLHAea::to<double>(spectrum["HMIX"][3][1]);
		if(spectrum["HMIX"][4].is_data_line()) result.mA2_Q=SLHAea::to<double>(spectrum["HMIX"][4][1]);
	  }

	  if(!spectrum["NMHMIX"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["NMHMIX"][max(ie,je)].is_data_line()) result.H0_mix[ie][je]=SLHAea::to<double>(spectrum["NMHMIX"].at(ie,je)[2]);

	  if(!spectrum["NMAMIX"].empty()) for(ie=1;ie<=2;ie++) for(je=1;je<=2;je++)
           if(spectrum["NMAMIX"][max(ie,je)].is_data_line()) result.A0_mix[ie][je]=SLHAea::to<double>(spectrum["NMAMIX"].at(ie,je)[2]);

	  if(!spectrum["MSOFT"].empty())
	  {
		if(!spectrum["MSOFT"].front().empty()) result.MSOFT_Q=SLHAea::to<double>(spectrum["MSOFT"].front().at(3));
		if(spectrum["MSOFT"][1].is_data_line()) result.M1_Q=SLHAea::to<double>(spectrum["MSOFT"][1][1]);
		if(spectrum["MSOFT"][2].is_data_line()) result.M2_Q=SLHAea::to<double>(spectrum["MSOFT"][2][1]);
		if(spectrum["MSOFT"][3].is_data_line()) result.M3_Q=SLHAea::to<double>(spectrum["MSOFT"][3][1]);
		if(spectrum["MSOFT"][21].is_data_line()) result.M2H1_Q=SLHAea::to<double>(spectrum["MSOFT"][21][1]);
		if(spectrum["MSOFT"][22].is_data_line()) result.M2H2_Q=SLHAea::to<double>(spectrum["MSOFT"][22][1]);
		if(spectrum["MSOFT"][31].is_data_line()) result.MeL_Q=SLHAea::to<double>(spectrum["MSOFT"][31][1]);
		if(spectrum["MSOFT"][32].is_data_line()) result.MmuL_Q=SLHAea::to<double>(spectrum["MSOFT"][32][1]);
		if(spectrum["MSOFT"][33].is_data_line()) result.MtauL_Q=SLHAea::to<double>(spectrum["MSOFT"][33][1]);
		if(spectrum["MSOFT"][34].is_data_line()) result.MeR_Q=SLHAea::to<double>(spectrum["MSOFT"][34][1]);
		if(spectrum["MSOFT"][35].is_data_line()) result.MmuR_Q=SLHAea::to<double>(spectrum["MSOFT"][35][1]);
		if(spectrum["MSOFT"][36].is_data_line()) result.MtauR_Q=SLHAea::to<double>(spectrum["MSOFT"][36][1]);
		if(spectrum["MSOFT"][41].is_data_line()) result.MqL1_Q=SLHAea::to<double>(spectrum["MSOFT"][41][1]);
		if(spectrum["MSOFT"][42].is_data_line()) result.MqL2_Q=SLHAea::to<double>(spectrum["MSOFT"][42][1]);
		if(spectrum["MSOFT"][43].is_data_line()) result.MqL3_Q=SLHAea::to<double>(spectrum["MSOFT"][43][1]);
		if(spectrum["MSOFT"][44].is_data_line()) result.MuR_Q=SLHAea::to<double>(spectrum["MSOFT"][44][1]);
		if(spectrum["MSOFT"][45].is_data_line()) result.McR_Q=SLHAea::to<double>(spectrum["MSOFT"][45][1]);
		if(spectrum["MSOFT"][46].is_data_line()) result.MtR_Q=SLHAea::to<double>(spectrum["MSOFT"][46][1]);
		if(spectrum["MSOFT"][47].is_data_line()) result.MdR_Q=SLHAea::to<double>(spectrum["MSOFT"][47][1]);
		if(spectrum["MSOFT"][48].is_data_line()) result.MsR_Q=SLHAea::to<double>(spectrum["MSOFT"][48][1]);
		if(spectrum["MSOFT"][49].is_data_line()) result.MbR_Q=SLHAea::to<double>(spectrum["MSOFT"][49][1]);
	  }

	  if(!spectrum["AU"].empty())
	  {
		if(spectrum["AU"][1].is_data_line()) result.A_u=SLHAea::to<double>(spectrum["AU"].at(1,1)[2]);
		if(spectrum["AU"][2].is_data_line()) result.A_c=SLHAea::to<double>(spectrum["AU"].at(2,2)[2]);
		if(spectrum["AU"][3].is_data_line()) result.A_t=SLHAea::to<double>(spectrum["AU"].at(3,3)[2]);
	  }

	  if(!spectrum["AD"].empty())
	  {
		if(spectrum["AD"][1].is_data_line()) result.A_d=SLHAea::to<double>(spectrum["AD"].at(1,1)[2]);
		if(spectrum["AD"][2].is_data_line()) result.A_s=SLHAea::to<double>(spectrum["AD"].at(2,2)[2]);
		if(spectrum["AD"][3].is_data_line()) result.A_b=SLHAea::to<double>(spectrum["AD"].at(3,3)[2]);
	  }

	  if(!spectrum["AE"].empty())
	  {
		if(spectrum["AE"][1].is_data_line()) result.A_e=SLHAea::to<double>(spectrum["AE"].at(1,1)[2]);
		if(spectrum["AE"][2].is_data_line()) result.A_mu=SLHAea::to<double>(spectrum["AE"].at(2,2)[2]);
		if(spectrum["AE"][3].is_data_line()) result.A_tau=SLHAea::to<double>(spectrum["AE"].at(3,3)[2]);
	  }

	  if(!spectrum["NMSSMRUN"].empty())
	  {
		if(spectrum["NMSSMRUN"][1].is_data_line()) result.lambdaNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][1][1]);
		if(spectrum["NMSSMRUN"][2].is_data_line()) result.kappaNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][2][1]);
		if(spectrum["NMSSMRUN"][3].is_data_line()) result.AlambdaNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][3][1]);
		if(spectrum["NMSSMRUN"][4].is_data_line()) result.AkappaNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][4][1]);
		if(spectrum["NMSSMRUN"][5].is_data_line()) result.lambdaSNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][5][1]);
		if(spectrum["NMSSMRUN"][6].is_data_line()) result.xiFNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][6][1]);
		if(spectrum["NMSSMRUN"][7].is_data_line()) result.xiSNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][7][1]);
		if(spectrum["NMSSMRUN"][8].is_data_line()) result.mupNMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][8][1]);
		if(spectrum["NMSSMRUN"][9].is_data_line()) result.mSp2NMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][9][1]);
		if(spectrum["NMSSMRUN"][10].is_data_line()) result.mS2NMSSM=SLHAea::to<double>(spectrum["NMSSMRUN"][10][1]);
	  }
	  
	  if(!spectrum["USQMIX"].empty()) for(ie=1;ie<=6;ie++) for(je=1;je<=6;je++)
           if(spectrum["USQMIX"][max(ie,je)].is_data_line()) result.sU_mix[ie][je]=SLHAea::to<double>(spectrum["USQMIX"].at(ie,je)[2]);
	  if(!spectrum["DSQMIX"].empty()) for(ie=1;ie<=6;ie++) for(je=1;je<=6;je++)
           if(spectrum["DSQMIX"][max(ie,je)].is_data_line()) result.sD_mix[ie][je]=SLHAea::to<double>(spectrum["DSQMIX"].at(ie,je)[2]);
	  if(!spectrum["SELMIX"].empty()) for(ie=1;ie<=6;ie++) for(je=1;je<=6;je++)
           if(spectrum["SELMIX"][max(ie,je)].is_data_line()) result.sE_mix[ie][je]=SLHAea::to<double>(spectrum["SELMIX"].at(ie,je)[2]);
	  if(!spectrum["SNUMIX"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["SNUMIX"][max(ie,je)].is_data_line()) result.sNU_mix[ie][je]=SLHAea::to<double>(spectrum["SNUMIX"].at(ie,je)[2]);

	  if(!spectrum["MSQ2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["MSQ2"][max(ie,je)].is_data_line()) result.sCKM_msq2[ie][je]=SLHAea::to<double>(spectrum["MSQ2"].at(ie,je)[2]);
	  if(!spectrum["MSL2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["MSL2"][max(ie,je)].is_data_line()) result.sCKM_msl2[ie][je]=SLHAea::to<double>(spectrum["MSL2"].at(ie,je)[2]);
	  if(!spectrum["MSD2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["MSD2"][max(ie,je)].is_data_line()) result.sCKM_msd2[ie][je]=SLHAea::to<double>(spectrum["MSD2"].at(ie,je)[2]);
	  if(!spectrum["MSU2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["MSU2"][max(ie,je)].is_data_line()) result.sCKM_msu2[ie][je]=SLHAea::to<double>(spectrum["MSU2"].at(ie,je)[2]);
	  if(!spectrum["MSE2"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["MSE2"][max(ie,je)].is_data_line()) result.sCKM_mse2[ie][je]=SLHAea::to<double>(spectrum["MSE2"].at(ie,je)[2]);

	  if(!spectrum["IMVCKM"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["IMVCKM"][max(ie,je)].is_data_line()) result.IMCKM[ie][je]=SLHAea::to<double>(spectrum["IMVCKM"].at(ie,je)[2]);
	  if(!spectrum["IMVCKM"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["IMVCKM"][max(ie,je)].is_data_line()) result.IMCKM[ie][je]=SLHAea::to<double>(spectrum["IMVCKM"].at(ie,je)[2]);

	  if(!spectrum["UPMNS"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["UPMNS"][max(ie,je)].is_data_line()) result.PMNS_U[ie][je]=SLHAea::to<double>(spectrum["UPMNS"].at(ie,je)[2]);

	  if(!spectrum["TU"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["TU"][max(ie,je)].is_data_line()) result.TU[ie][je]=SLHAea::to<double>(spectrum["TU"].at(ie,je)[2]);
	  if(!spectrum["TD"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["TD"][max(ie,je)].is_data_line()) result.TD[ie][je]=SLHAea::to<double>(spectrum["TD"].at(ie,je)[2]);  
	  if(!spectrum["TE"].empty()) for(ie=1;ie<=3;ie++) for(je=1;je<=3;je++)
           if(spectrum["TE"][max(ie,je)].is_data_line()) result.TE[ie][je]=SLHAea::to<double>(spectrum["TE"].at(ie,je)[2]);


      BEreq::slha_adjust(&result);
    }

     /// *************************************************

    void bsgamma(double &result)          
    {
      using namespace Pipes::bsgamma;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_1S/2.;
		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
		std::complex<double> CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::bsgamma(byVal(C0b),byVal(C1b),byVal(C2b),byVal(Cpb),byVal(mu_b),byVal(mu_W),&param);
	  }
	  
      printf("BR(b->s gamma)=%.3e\n",result);
    }
     
     /// *************************************************
   
    void Bsmumu(double &result)          
    {
      using namespace Pipes::Bsmumu;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b;
		double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		
		result = BEreq::Bsmumu(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("BR(Bs->mumu)=%.3e\n",result);
    }

     /// *************************************************
   
    void Bsmumu_untag(double &result)          
    {
      using namespace Pipes::Bsmumu_untag;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b;
		double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);

		result = BEreq::Bsmumu_untag(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("BR(Bs->mumu)_untag=%.3e\n",result);
    }
    
     /// *************************************************
   
    void Bdmumu(double &result)          
    {
      using namespace Pipes::Bdmumu;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b;
		double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];
	    std::complex<double> CQ0b[3],CQ1b[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);

		result = BEreq::Bdmumu(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),&param,byVal(mu_b));
	  }
      
      printf("BR(Bd->mumu)=%.3e\n",result);
    }

      /// *************************************************
   
    void Btaunu(double &result)          
    {
      using namespace Pipes::Btaunu;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::Btaunu(&param);
      
      printf("BR(B->tau nu)=%.3e\n",result);
    }

      /// *************************************************
   
    void BDtaunu(double &result)          
    {
      using namespace Pipes::BDtaunu;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::BDtaunu(&param);
      
      printf("BR(B->D tau nu)=%.3e\n",result);
    }

      /// *************************************************
   
    void BDtaunu_BDenu(double &result)          
    {
      using namespace Pipes::BDtaunu_BDenu;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::BDtaunu_BDenu(&param);
      
      printf("BR(B->D tau nu)/BR(B->D e nu)=%.3e\n",result);
    }

      /// *************************************************
   
    void Kmunu_pimunu(double &result)          
    {
      using namespace Pipes::Kmunu_pimunu;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::Kmunu_pimunu(&param);
      
      printf("BR(K->mu nu)/BR(pi->mu nu)=%.3e\n",result);
    }

      /// *************************************************
   
    void Rmu23(double &result)          
    {
      using namespace Pipes::Rmu23;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::Rmu23(&param);
      
      printf("Rmu23=%.3e\n",result);
    }

      /// *************************************************
   
    void Dstaunu(double &result)          
    {
      using namespace Pipes::Dstaunu;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::Dstaunu(&param);
      
      printf("BR(Ds->tau nu)=%.3e\n",result);
    }

      /// *************************************************
   
    void Dsmunu(double &result)          
    {
      using namespace Pipes::Dsmunu;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::Dsmunu(&param);
      
      printf("BR(Ds->mu nu)=%.3e\n",result);
    }

      /// *************************************************
   
    void Dmunu(double &result)          
    {
      using namespace Pipes::Dmunu;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::Dmunu(&param);
      
      printf("BR(D->mu nu)=%.3e\n",result);
    }

      /// *************************************************
   
    void muon_gm2(double &result)          
    {
      using namespace Pipes::muon_gm2;

       struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else result = BEreq::muon_gm2(&param);
      
      printf("(g-2)_mu=%.3e\n",result);
    }

     /// *************************************************

    void delta0(double &result)          
    {
      using namespace Pipes::delta0;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_1S/2.;

		double lambda_h=0.5;
		double mu_spec=sqrt(lambda_h*param.mass_b);


		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C0spec[11],C1spec[11],Cpb[11];
		std::complex<double> CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(mu_b),&param);
		BEreq::C_calculator_base2(byVal(C0w),byVal(C1w),byVal(mu_W),byVal(C0spec),byVal(C1spec),byVal(mu_spec),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::delta0(byVal(C0b),byVal(C0spec),byVal(C1b),byVal(C1spec),byVal(Cpb),&param,byVal(mu_b),byVal(mu_spec),byVal(lambda_h));
	  }
      
      printf("Delta0(B->K* gamma)=%.3e\n",result);
    }

     /// *************************************************

    void BRBXsmumu_lowq2(double &result)          
    {
      using namespace Pipes::BRBXsmumu_lowq2;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=120.;
		double mu_b=5.;

		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::BRBXsmumu_lowq2(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("BR(B->Xs mu mu)_lowq2=%.3e\n",result);
    }

     /// *************************************************

    void BRBXsmumu_highq2(double &result)          
    {
      using namespace Pipes::BRBXsmumu_highq2;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=120.;
		double mu_b=5.;

		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::BRBXsmumu_highq2(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("BR(B->Xs mu mu)_highq2=%.3e\n",result);
    }

     /// *************************************************

    void A_BXsmumu_lowq2(double &result)          
    {
      using namespace Pipes::A_BXsmumu_lowq2;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=120.;
		double mu_b=5.;

		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::A_BXsmumu_lowq2(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("AFB(B->Xs mu mu)_lowq2=%.3e\n",result);
    }

     /// *************************************************

    void A_BXsmumu_highq2(double &result)          
    {
      using namespace Pipes::A_BXsmumu_highq2;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=120.;
		double mu_b=5.;

		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::A_BXsmumu_highq2(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("AFB(B->Xs mu mu)_highq2=%.3e\n",result);
    }
 
     /// *************************************************

    void A_BXsmumu_zero(double &result)          
    {
      using namespace Pipes::A_BXsmumu_zero;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=120.;
		double mu_b=5.;

		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::A_BXsmumu_zero(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("AFB(B->Xs mu mu)_zero=%.3e\n",result);
    }

     /// *************************************************

    void BRBXstautau_highq2(double &result)          
    {
      using namespace Pipes::BRBXstautau_highq2;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=120.;
		double mu_b=5.;

		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::BRBXstautau_highq2(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("BR(B->Xs tau tau)_highq2=%.3e\n",result);
    }

     /// *************************************************

    void A_BXstautau_highq2(double &result)          
    {
      using namespace Pipes::A_BXstautau_highq2;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double mu_W=120.;
		double mu_b=5.;

		double C0w[11],C1w[11],C2w[11],C0b[11],C1b[11],C2b[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::A_BXstautau_highq2(byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  }
      
      printf("AFB(B->Xs tau tau)_highq2=%.3e\n",result);
    }

     /// *************************************************

    void BRBKstarmumu(double &result)          
    {
      using namespace Pipes::BRBKstarmumu;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11],Cpb[11];
	    std::complex<double> CQ0b[3],CQ1b[3],CQpb[3];
		double obs[Nobs_BKsll+1];
	
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_pole;

		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		BEreq::CQ_calculator(byVal(CQ0b),byVal(CQ1b),byVal(mu_W),byVal(mu_b),&param);
		BEreq::Cprime_calculator(byVal(Cpb),byVal(CQpb),byVal(mu_W),byVal(mu_b),&param);
		result = BEreq::BRBKstarmumu(1.,6.,byVal(obs),byVal(C0b),byVal(C1b),byVal(C2b),byVal(CQ0b),byVal(CQ1b),byVal(Cpb),byVal(CQpb),&param,byVal(mu_b));
	  
	    printf("BR(B->K* mu mu)_lowq2=%.3e\n",result);
	    printf("AFB(B->K* mu mu)_zero=%.3e\n",obs[0]);
	    printf("AFB(B->K* mu mu)_lowq2=%.3e\n",obs[1]);
	    printf("FL(B->K* mu mu)_lowq2=%.3e\n",obs[2]);
	    printf("AT1(B->K* mu mu)_lowq2=%.3e\n",obs[4]);
	    printf("AT2(B->K* mu mu)_lowq2=%.3e\n",obs[5]);
	    printf("AT3(B->K* mu mu)_lowq2=%.3e\n",obs[6]);
	    printf("AT4(B->K* mu mu)_lowq2=%.3e\n",obs[7]);
	    printf("AT5(B->K* mu mu)_lowq2=%.3e\n",obs[8]);
	    printf("HT1(B->K* mu mu)_lowq2=%.3e\n",obs[9]);
	    printf("HT2(B->K* mu mu)_lowq2=%.3e\n",obs[10]);
	    printf("HT3(B->K* mu mu)_lowq2=%.3e\n",obs[11]);
	    printf("P2(B->K* mu mu)_lowq2=%.3e\n",obs[14]);
	    printf("P3(B->K* mu mu)_lowq2=%.3e\n",obs[15]);
	    printf("P6(B->K* mu mu)_lowq2=%.3e\n",obs[16]);
	    printf("P4prime(B->K* mu mu)_lowq2=%.3e\n",obs[17]);
	    printf("P5prime(B->K* mu mu)_lowq2=%.3e\n",obs[18]);
	    printf("P6prime(B->K* mu mu)_lowq2=%.3e\n",obs[19]);
	    printf("P8(B->K* mu mu)_lowq2=%.3e\n",obs[20]);
	    printf("P8prime(B->K* mu mu)_lowq2=%.3e\n",obs[21]);
	  }      
    }

     /// *************************************************

    void AI_BKstarmumu(double &result)          
    {
      using namespace Pipes::AI_BKstarmumu;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];
	
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_pole;
				
		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		result = BEreq::AI_BKstarmumu(1.,6.,byVal(C0b),byVal(C1b),byVal(C2b),&param,byVal(mu_b));
	  }
      
      printf("A_I(B->K* mu mu)_lowq2=%.3e\n",result);
    }

     /// *************************************************

    void AI_BKstarmumu_zero(double &result)          
    {
      using namespace Pipes::AI_BKstarmumu_zero;

      struct parameters param = *Dep::FlavBit_fill;

      if(param.model<0) result=0.;
      else
      {
		double C0b[11],C1b[11],C2b[11],C0w[11],C1w[11],C2w[11];
	
		double mu_W=2.*param.mass_W;
		double mu_b=param.mass_b_pole;
				
		BEreq::CW_calculator(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),&param);
		BEreq::C_calculator_base1(byVal(C0w),byVal(C1w),byVal(C2w),byVal(mu_W),byVal(C0b),byVal(C1b),byVal(C2b),byVal(mu_b),&param);
		result = BEreq::AI_BKstarmumu_zero(byVal(C0b),byVal(C1b),byVal(C2b),&param,byVal(mu_b));
	  }
      
      printf("A_I(B->K* mu mu)_zero=%.3e\n",result);
    }

  
  }

}

