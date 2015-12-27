
#ifndef _SOFTSUSY_EXMAP_H
#define _SOFTSUSY_EXMAP_H
#include <ginac/ginac.h>
#include "two_loop_thresholds/mssmparam.hpp"
#include "softsusy.h"
#include "utils.h"


//using namespace softsusy;

//#include <softsusy.h>

namespace SoftSusy_helpers_ {


//using namespace GiNaC;

 /// Return GiNac exmap with MSSM (Yukawa Model) parameters
  GiNaC::exmap drBarPars_exmap(const softsusy::MssmSoftsusy & mssy_);

} // namespace SoftSusy_helpers_
#endif

// vi:ts=2:sw=2

