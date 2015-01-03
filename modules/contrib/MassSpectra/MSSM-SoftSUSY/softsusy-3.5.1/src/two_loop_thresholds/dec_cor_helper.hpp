#ifndef DEC_COR_H
#define DEC_COR_H
/** \file dec_cor_helper.h
 *  \brief  Header file with a definitions of a structure that stores all the decoupling
 *          corrections both one and two-loop
 */ 
#include <softsusy.h>
namespace SoftSusy_helpers_ {
	struct loop_corrections_t {
		double one_loop;
		double two_loop;
		bool   two_loop_needs_recalc;
		/// Fill struct with zeros
		loop_corrections_t () : one_loop(0.0), two_loop(0.0), two_loop_needs_recalc(true) {}
		
	};
	struct decoupling_corrections_t {
		loop_corrections_t das; // alpha_s
		loop_corrections_t dmb; // bottom-quark mass
		loop_corrections_t dmt; // top-quark mass
		loop_corrections_t dmtau; // tau-lepton mass
	};
} //SoftSusy_helpers_ 
#endif //DEC_COR_H
