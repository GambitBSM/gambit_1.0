#ifndef __wrapper_MSSMNoFV_onshell_physical_def_gm2calc_1_0_0_hpp__
#define __wrapper_MSSMNoFV_onshell_physical_def_gm2calc_1_0_0_hpp__

#include <ostream>
#include <Eigen/Core>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   namespace gm2calc
   {
      
      // Member functions: 
      inline void MSSMNoFV_onshell_physical::clear()
      {
         wrapperbase::BEptr->clear();
      }
      
      inline void MSSMNoFV_onshell_physical::convert_to_hk()
      {
         wrapperbase::BEptr->convert_to_hk();
      }
      
      inline void MSSMNoFV_onshell_physical::convert_to_slha()
      {
         wrapperbase::BEptr->convert_to_slha();
      }
      
      inline void MSSMNoFV_onshell_physical::print(::std::basic_ostream<char, std::char_traits<char> >& arg_1) const
      {
         wrapperbase::BEptr->print(arg_1);
      }
      
      
      // Wrappers for original constructors: 
      inline gm2calc::MSSMNoFV_onshell_physical::MSSMNoFV_onshell_physical() :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_physical>(__factory0()),
         MVG(wrapperbase::BEptr->MVG_ref__BOSS()),
         MGlu(wrapperbase::BEptr->MGlu_ref__BOSS()),
         MVP(wrapperbase::BEptr->MVP_ref__BOSS()),
         MVZ(wrapperbase::BEptr->MVZ_ref__BOSS()),
         MFd(wrapperbase::BEptr->MFd_ref__BOSS()),
         MFs(wrapperbase::BEptr->MFs_ref__BOSS()),
         MFb(wrapperbase::BEptr->MFb_ref__BOSS()),
         MFu(wrapperbase::BEptr->MFu_ref__BOSS()),
         MFc(wrapperbase::BEptr->MFc_ref__BOSS()),
         MFt(wrapperbase::BEptr->MFt_ref__BOSS()),
         MFve(wrapperbase::BEptr->MFve_ref__BOSS()),
         MFvm(wrapperbase::BEptr->MFvm_ref__BOSS()),
         MFvt(wrapperbase::BEptr->MFvt_ref__BOSS()),
         MFe(wrapperbase::BEptr->MFe_ref__BOSS()),
         MFm(wrapperbase::BEptr->MFm_ref__BOSS()),
         MFtau(wrapperbase::BEptr->MFtau_ref__BOSS()),
         MSveL(wrapperbase::BEptr->MSveL_ref__BOSS()),
         MSvmL(wrapperbase::BEptr->MSvmL_ref__BOSS()),
         MSvtL(wrapperbase::BEptr->MSvtL_ref__BOSS()),
         MSd(wrapperbase::BEptr->MSd_ref__BOSS()),
         MSu(wrapperbase::BEptr->MSu_ref__BOSS()),
         MSe(wrapperbase::BEptr->MSe_ref__BOSS()),
         MSm(wrapperbase::BEptr->MSm_ref__BOSS()),
         MStau(wrapperbase::BEptr->MStau_ref__BOSS()),
         MSs(wrapperbase::BEptr->MSs_ref__BOSS()),
         MSc(wrapperbase::BEptr->MSc_ref__BOSS()),
         MSb(wrapperbase::BEptr->MSb_ref__BOSS()),
         MSt(wrapperbase::BEptr->MSt_ref__BOSS()),
         Mhh(wrapperbase::BEptr->Mhh_ref__BOSS()),
         MAh(wrapperbase::BEptr->MAh_ref__BOSS()),
         MHpm(wrapperbase::BEptr->MHpm_ref__BOSS()),
         MChi(wrapperbase::BEptr->MChi_ref__BOSS()),
         MCha(wrapperbase::BEptr->MCha_ref__BOSS()),
         MVWm(wrapperbase::BEptr->MVWm_ref__BOSS()),
         ZD(wrapperbase::BEptr->ZD_ref__BOSS()),
         ZU(wrapperbase::BEptr->ZU_ref__BOSS()),
         ZE(wrapperbase::BEptr->ZE_ref__BOSS()),
         ZM(wrapperbase::BEptr->ZM_ref__BOSS()),
         ZTau(wrapperbase::BEptr->ZTau_ref__BOSS()),
         ZS(wrapperbase::BEptr->ZS_ref__BOSS()),
         ZC(wrapperbase::BEptr->ZC_ref__BOSS()),
         ZB(wrapperbase::BEptr->ZB_ref__BOSS()),
         ZT(wrapperbase::BEptr->ZT_ref__BOSS()),
         ZH(wrapperbase::BEptr->ZH_ref__BOSS()),
         ZA(wrapperbase::BEptr->ZA_ref__BOSS()),
         ZP(wrapperbase::BEptr->ZP_ref__BOSS()),
         ZN(wrapperbase::BEptr->ZN_ref__BOSS()),
         UM(wrapperbase::BEptr->UM_ref__BOSS()),
         UP(wrapperbase::BEptr->UP_ref__BOSS())
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Special pointer-based constructor: 
      inline gm2calc::MSSMNoFV_onshell_physical::MSSMNoFV_onshell_physical(gm2calc::Abstract_MSSMNoFV_onshell_physical* in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_physical>(in),
         MVG(wrapperbase::BEptr->MVG_ref__BOSS()),
         MGlu(wrapperbase::BEptr->MGlu_ref__BOSS()),
         MVP(wrapperbase::BEptr->MVP_ref__BOSS()),
         MVZ(wrapperbase::BEptr->MVZ_ref__BOSS()),
         MFd(wrapperbase::BEptr->MFd_ref__BOSS()),
         MFs(wrapperbase::BEptr->MFs_ref__BOSS()),
         MFb(wrapperbase::BEptr->MFb_ref__BOSS()),
         MFu(wrapperbase::BEptr->MFu_ref__BOSS()),
         MFc(wrapperbase::BEptr->MFc_ref__BOSS()),
         MFt(wrapperbase::BEptr->MFt_ref__BOSS()),
         MFve(wrapperbase::BEptr->MFve_ref__BOSS()),
         MFvm(wrapperbase::BEptr->MFvm_ref__BOSS()),
         MFvt(wrapperbase::BEptr->MFvt_ref__BOSS()),
         MFe(wrapperbase::BEptr->MFe_ref__BOSS()),
         MFm(wrapperbase::BEptr->MFm_ref__BOSS()),
         MFtau(wrapperbase::BEptr->MFtau_ref__BOSS()),
         MSveL(wrapperbase::BEptr->MSveL_ref__BOSS()),
         MSvmL(wrapperbase::BEptr->MSvmL_ref__BOSS()),
         MSvtL(wrapperbase::BEptr->MSvtL_ref__BOSS()),
         MSd(wrapperbase::BEptr->MSd_ref__BOSS()),
         MSu(wrapperbase::BEptr->MSu_ref__BOSS()),
         MSe(wrapperbase::BEptr->MSe_ref__BOSS()),
         MSm(wrapperbase::BEptr->MSm_ref__BOSS()),
         MStau(wrapperbase::BEptr->MStau_ref__BOSS()),
         MSs(wrapperbase::BEptr->MSs_ref__BOSS()),
         MSc(wrapperbase::BEptr->MSc_ref__BOSS()),
         MSb(wrapperbase::BEptr->MSb_ref__BOSS()),
         MSt(wrapperbase::BEptr->MSt_ref__BOSS()),
         Mhh(wrapperbase::BEptr->Mhh_ref__BOSS()),
         MAh(wrapperbase::BEptr->MAh_ref__BOSS()),
         MHpm(wrapperbase::BEptr->MHpm_ref__BOSS()),
         MChi(wrapperbase::BEptr->MChi_ref__BOSS()),
         MCha(wrapperbase::BEptr->MCha_ref__BOSS()),
         MVWm(wrapperbase::BEptr->MVWm_ref__BOSS()),
         ZD(wrapperbase::BEptr->ZD_ref__BOSS()),
         ZU(wrapperbase::BEptr->ZU_ref__BOSS()),
         ZE(wrapperbase::BEptr->ZE_ref__BOSS()),
         ZM(wrapperbase::BEptr->ZM_ref__BOSS()),
         ZTau(wrapperbase::BEptr->ZTau_ref__BOSS()),
         ZS(wrapperbase::BEptr->ZS_ref__BOSS()),
         ZC(wrapperbase::BEptr->ZC_ref__BOSS()),
         ZB(wrapperbase::BEptr->ZB_ref__BOSS()),
         ZT(wrapperbase::BEptr->ZT_ref__BOSS()),
         ZH(wrapperbase::BEptr->ZH_ref__BOSS()),
         ZA(wrapperbase::BEptr->ZA_ref__BOSS()),
         ZP(wrapperbase::BEptr->ZP_ref__BOSS()),
         ZN(wrapperbase::BEptr->ZN_ref__BOSS()),
         UM(wrapperbase::BEptr->UM_ref__BOSS()),
         UP(wrapperbase::BEptr->UP_ref__BOSS())
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell_physical::MSSMNoFV_onshell_physical(gm2calc::Abstract_MSSMNoFV_onshell_physical* const & in, bool) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_physical>(in, true),
         MVG(wrapperbase::BEptr->MVG_ref__BOSS()),
         MGlu(wrapperbase::BEptr->MGlu_ref__BOSS()),
         MVP(wrapperbase::BEptr->MVP_ref__BOSS()),
         MVZ(wrapperbase::BEptr->MVZ_ref__BOSS()),
         MFd(wrapperbase::BEptr->MFd_ref__BOSS()),
         MFs(wrapperbase::BEptr->MFs_ref__BOSS()),
         MFb(wrapperbase::BEptr->MFb_ref__BOSS()),
         MFu(wrapperbase::BEptr->MFu_ref__BOSS()),
         MFc(wrapperbase::BEptr->MFc_ref__BOSS()),
         MFt(wrapperbase::BEptr->MFt_ref__BOSS()),
         MFve(wrapperbase::BEptr->MFve_ref__BOSS()),
         MFvm(wrapperbase::BEptr->MFvm_ref__BOSS()),
         MFvt(wrapperbase::BEptr->MFvt_ref__BOSS()),
         MFe(wrapperbase::BEptr->MFe_ref__BOSS()),
         MFm(wrapperbase::BEptr->MFm_ref__BOSS()),
         MFtau(wrapperbase::BEptr->MFtau_ref__BOSS()),
         MSveL(wrapperbase::BEptr->MSveL_ref__BOSS()),
         MSvmL(wrapperbase::BEptr->MSvmL_ref__BOSS()),
         MSvtL(wrapperbase::BEptr->MSvtL_ref__BOSS()),
         MSd(wrapperbase::BEptr->MSd_ref__BOSS()),
         MSu(wrapperbase::BEptr->MSu_ref__BOSS()),
         MSe(wrapperbase::BEptr->MSe_ref__BOSS()),
         MSm(wrapperbase::BEptr->MSm_ref__BOSS()),
         MStau(wrapperbase::BEptr->MStau_ref__BOSS()),
         MSs(wrapperbase::BEptr->MSs_ref__BOSS()),
         MSc(wrapperbase::BEptr->MSc_ref__BOSS()),
         MSb(wrapperbase::BEptr->MSb_ref__BOSS()),
         MSt(wrapperbase::BEptr->MSt_ref__BOSS()),
         Mhh(wrapperbase::BEptr->Mhh_ref__BOSS()),
         MAh(wrapperbase::BEptr->MAh_ref__BOSS()),
         MHpm(wrapperbase::BEptr->MHpm_ref__BOSS()),
         MChi(wrapperbase::BEptr->MChi_ref__BOSS()),
         MCha(wrapperbase::BEptr->MCha_ref__BOSS()),
         MVWm(wrapperbase::BEptr->MVWm_ref__BOSS()),
         ZD(wrapperbase::BEptr->ZD_ref__BOSS()),
         ZU(wrapperbase::BEptr->ZU_ref__BOSS()),
         ZE(wrapperbase::BEptr->ZE_ref__BOSS()),
         ZM(wrapperbase::BEptr->ZM_ref__BOSS()),
         ZTau(wrapperbase::BEptr->ZTau_ref__BOSS()),
         ZS(wrapperbase::BEptr->ZS_ref__BOSS()),
         ZC(wrapperbase::BEptr->ZC_ref__BOSS()),
         ZB(wrapperbase::BEptr->ZB_ref__BOSS()),
         ZT(wrapperbase::BEptr->ZT_ref__BOSS()),
         ZH(wrapperbase::BEptr->ZH_ref__BOSS()),
         ZA(wrapperbase::BEptr->ZA_ref__BOSS()),
         ZP(wrapperbase::BEptr->ZP_ref__BOSS()),
         ZN(wrapperbase::BEptr->ZN_ref__BOSS()),
         UM(wrapperbase::BEptr->UM_ref__BOSS()),
         UP(wrapperbase::BEptr->UP_ref__BOSS())
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Copy constructor: 
      inline gm2calc::MSSMNoFV_onshell_physical::MSSMNoFV_onshell_physical(const MSSMNoFV_onshell_physical& in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_physical>(in),
         MVG(wrapperbase::BEptr->MVG_ref__BOSS()),
         MGlu(wrapperbase::BEptr->MGlu_ref__BOSS()),
         MVP(wrapperbase::BEptr->MVP_ref__BOSS()),
         MVZ(wrapperbase::BEptr->MVZ_ref__BOSS()),
         MFd(wrapperbase::BEptr->MFd_ref__BOSS()),
         MFs(wrapperbase::BEptr->MFs_ref__BOSS()),
         MFb(wrapperbase::BEptr->MFb_ref__BOSS()),
         MFu(wrapperbase::BEptr->MFu_ref__BOSS()),
         MFc(wrapperbase::BEptr->MFc_ref__BOSS()),
         MFt(wrapperbase::BEptr->MFt_ref__BOSS()),
         MFve(wrapperbase::BEptr->MFve_ref__BOSS()),
         MFvm(wrapperbase::BEptr->MFvm_ref__BOSS()),
         MFvt(wrapperbase::BEptr->MFvt_ref__BOSS()),
         MFe(wrapperbase::BEptr->MFe_ref__BOSS()),
         MFm(wrapperbase::BEptr->MFm_ref__BOSS()),
         MFtau(wrapperbase::BEptr->MFtau_ref__BOSS()),
         MSveL(wrapperbase::BEptr->MSveL_ref__BOSS()),
         MSvmL(wrapperbase::BEptr->MSvmL_ref__BOSS()),
         MSvtL(wrapperbase::BEptr->MSvtL_ref__BOSS()),
         MSd(wrapperbase::BEptr->MSd_ref__BOSS()),
         MSu(wrapperbase::BEptr->MSu_ref__BOSS()),
         MSe(wrapperbase::BEptr->MSe_ref__BOSS()),
         MSm(wrapperbase::BEptr->MSm_ref__BOSS()),
         MStau(wrapperbase::BEptr->MStau_ref__BOSS()),
         MSs(wrapperbase::BEptr->MSs_ref__BOSS()),
         MSc(wrapperbase::BEptr->MSc_ref__BOSS()),
         MSb(wrapperbase::BEptr->MSb_ref__BOSS()),
         MSt(wrapperbase::BEptr->MSt_ref__BOSS()),
         Mhh(wrapperbase::BEptr->Mhh_ref__BOSS()),
         MAh(wrapperbase::BEptr->MAh_ref__BOSS()),
         MHpm(wrapperbase::BEptr->MHpm_ref__BOSS()),
         MChi(wrapperbase::BEptr->MChi_ref__BOSS()),
         MCha(wrapperbase::BEptr->MCha_ref__BOSS()),
         MVWm(wrapperbase::BEptr->MVWm_ref__BOSS()),
         ZD(wrapperbase::BEptr->ZD_ref__BOSS()),
         ZU(wrapperbase::BEptr->ZU_ref__BOSS()),
         ZE(wrapperbase::BEptr->ZE_ref__BOSS()),
         ZM(wrapperbase::BEptr->ZM_ref__BOSS()),
         ZTau(wrapperbase::BEptr->ZTau_ref__BOSS()),
         ZS(wrapperbase::BEptr->ZS_ref__BOSS()),
         ZC(wrapperbase::BEptr->ZC_ref__BOSS()),
         ZB(wrapperbase::BEptr->ZB_ref__BOSS()),
         ZT(wrapperbase::BEptr->ZT_ref__BOSS()),
         ZH(wrapperbase::BEptr->ZH_ref__BOSS()),
         ZA(wrapperbase::BEptr->ZA_ref__BOSS()),
         ZP(wrapperbase::BEptr->ZP_ref__BOSS()),
         ZN(wrapperbase::BEptr->ZN_ref__BOSS()),
         UM(wrapperbase::BEptr->UM_ref__BOSS()),
         UP(wrapperbase::BEptr->UP_ref__BOSS())
      {
         wrapperbase::BEptr->can_delete_me(true);
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Assignment operator: 
      inline gm2calc::MSSMNoFV_onshell_physical& MSSMNoFV_onshell_physical::operator=(const MSSMNoFV_onshell_physical& in)
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_physical>::operator=(in);
         return *this;
      }
      
      
      // Destructor: 
      inline gm2calc::MSSMNoFV_onshell_physical::~MSSMNoFV_onshell_physical()
      {
      }
      
      
      // Member variable initialiser: 
      inline void gm2calc::MSSMNoFV_onshell_physical::_memberVariablesInit()
      {
      }
      
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_MSSMNoFV_onshell_physical_def_gm2calc_1_0_0_hpp__ */
