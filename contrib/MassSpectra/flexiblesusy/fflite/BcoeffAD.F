* BcoeffAD.F
* the two-point tensor coefficients from Ansgar Denner's bcanew.f,
* adapted to the conventions of LoopTools
* this file is part of LoopTools
* last modified 4 Mar 14 th

#include "externals.h"
#include "types.h"

#define npoint 2
#include "defs.h"


	ComplexType function fpv(n, x, y)
	implicit none
	integer n
	ComplexType x, y

#include "lt.h"

	ComplexType xm
	integer m

	if( abs(x) .lt. 5 ) then
	  if( n .eq. 0 ) then
	    fpv = -log(-y/x)
	  else if( abs(x) .lt. acc ) then
	    fpv = -1D0/n
	  else
	    xm = -log(-y/x)
	    do m = 1, n
	      xm = x*xm - 1D0/m
	    enddo
	    fpv = xm
	  endif
	else
	  fpv = 0
	  xm = 1
	  do m = 1, 50
	    xm = xm/x
	    fpv = fpv + xm/(m + n)
	    if( abs(xm) .lt. precx*abs(fpv) ) return
	  enddo
	endif
	end

************************************************************************

	ComplexType function yfpv(n, x, y)
	implicit none
	integer n
	ComplexType x, y

	ComplexType fpv
	external fpv

	if( abs(y) .eq. 0 ) then
	  yfpv = 0
	else
	  yfpv = y*fpv(n, x, y)
	endif
	end

************************************************************************

	ComplexType function fth(n, x, y)
	implicit none
	integer n
	ComplexType x, y

#include "lt.h"

	ComplexType fpv
	external fpv

	ComplexType xm
	integer m

	if( abs(x) .gt. 1D4 ) then
	  xm = 1
	  fth = 0
	  do m = n, 30 + n
	    xm = xm/x
	    fth = fth - xm/(m*(m + 1))
	    if( abs(xm) .lt. precx*abs(fth) ) return
	  enddo
	else
	  fth = fpv(1, y, x)
	  do m = 1, n - 1
	    fth = x*fth + 1D0/(m*(m + 1))
	  enddo
	endif
	end

************************************************************************

C       wrapped to a subroutine since gfortran (by default) and ifort
C       follow different calling conventions when compiling a
C       complex-valued function; likewise for the other subroutines
C       below

	subroutine sub_fpv(res, n, x, y)
	implicit none
	ComplexType res
	integer n
	ComplexType x, y

	ComplexType fpv
	res = fpv(n, x, y)
	end

************************************************************************

	subroutine sub_yfpv(res, n, x, y)
	implicit none
	ComplexType res
	integer n
	ComplexType x, y

	ComplexType yfpv
	res = yfpv(n, x, y)
	end

************************************************************************

	subroutine sub_fth(res, n, x, y)
	implicit none
	ComplexType res
	integer n
	ComplexType x, y

	ComplexType fth
	res = fth(n, x, y)
	end
