/*  legalistic nonsense:
 *
 *  This file is part of pmb2ltad.
 *
 *  stolen pmb2ltad is free software.
 *  
 *  You may redistribute it and/or modify it under the terms of the
 *  GNU General Public License, as published by the Free Software
 *  Foundation; either version 2, or (at your option) any later version.
 *  
 *  mb2l is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with mb2l.  See the file "COPYING".  If not,
 *  write to:  The Free Software Foundation, Inc.,
 *             59 Temple Place - Suite 330,
 *             Boston,  MA  02111-1307, USA.
 */

/** \file pmb2ltad.hpp Declaration of functions */
#ifndef _GS_CORRECTIONS_H
#define _GS_CORRECTIONS_H
//#include "config.h"
#include <ginac/ginac.h>
#include "mssmparam.hpp"



namespace gs_corrections {
	using namespace MSSM;

	GiNaC::ex eval_gs_twoloop_strong(const GiNaC::exmap &params);


}

#endif

// vi:ts=2:sw=2

