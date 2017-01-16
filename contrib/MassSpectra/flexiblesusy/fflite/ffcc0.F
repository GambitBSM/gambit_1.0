#include "externals.h"
#include "types.h"


*	$Id: ffcc0.f,v 1.2 1996/06/30 19:03:55 gj Exp $
*###[ ffthre:
	subroutine ffthre(ithres,cqi,cqiqj,ns,i1,i2,ip)
***#[*comment:***********************************************************
*									*
*	look for threshold effects.					*
*	ithres = 1: 3 heavy masses					*
*	ithres = 2: 2 masses almost equal and 1 zero			*
*									*
*	Input:	cqi(ns)		(complex)	usual masses,p^2	*
*		cqiqj(ns,ns)	(complex)	cqi(i)-cqi(j)		*
*		ns		(integer)	size			*
*		i1,i2		(integer)	position to be tested	*
*		ip		(integer)	(i1,i2) index		*
*									*
*	Output:	ithres		(integer)	see above, 0 if nothing	*
*									*
***#]*comment:***********************************************************
*  #[ declarations:
	implicit none
*
*	arguments
*
	integer ithres,ns,i1,i2,ip
	ComplexType cqi(ns),cqiqj(ns,ns)
*
*	local variables
*
	integer ier0
	ComplexType c
	RealType absc,xq1,xq2,xq3,dq1q2,dq1q3,dq2q3,xlam,d1,d2,
     +		sprecx
*
*	common blocks
*
#include "ff.h"
*
*	statement function
*
	absc(c) = abs(Re(c)) + abs(Im(c))
*
*  #] declarations:
*  #[ work:
	ithres = 0
	if ( Im(cqi(i1)).eq.0 .and. Im(cqi(i2)).eq.0 .or.
     +		nschem.le.4 ) return
	if ( Re(cqi(i1)).lt.-Im(cqi(i2)) .and.
     +		abs(Re(cqiqj(ip,i2))).lt.-nwidth*Im(cqi(i2))
     +	.or. Re(cqi(i2)).lt.-Im(cqi(i1)) .and.
     +		abs(Re(cqiqj(ip,i1))).lt.-nwidth*Im(cqi(i1)) ) then
	    ithres = 2
	elseif ( nschem.ge.6 .and. Re(cqi(i1)).ne.0 .and.
     +		Re(cqi(i2)).ne.0 ) then
	    ier0 = 0
	    xq1 = Re(cqi(i1))
	    xq2 = Re(cqi(i2))
	    xq3 = Re(cqi(ip))
	    dq1q2 = Re(cqiqj(i1,i2))
	    dq1q3 = Re(cqiqj(i1,ip))
	    dq2q3 = Re(cqiqj(i2,ip))
	    sprecx = precx
	    precx = precc
	    call ffxlmb(xlam,xq1,xq2,xq3, dq1q2,dq1q3,dq2q3)
	    precx = sprecx
	    d1 = absc(cqiqj(i1,ip) - cqi(i2))
	    d2 = absc(cqiqj(i2,ip) - cqi(i1))
*	    if ( d1 .lt. -nwidth*Im(cqi(i1)) .or.
**     +		 d2 .lt. -nwidth*Im(cqi(i2)) )
**     +		call ffwarn(182,ier0,x1,x1)
	    if ( abs(xlam) .lt. -nwidth*(Re(d1)*
     +		    Im(cqi(i1)) + d2*Im(cqi(i2))) ) then
		ithres = 1
	    endif
	endif
*  #] work:
*###] ffthre:
	end
