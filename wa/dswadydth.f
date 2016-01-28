*****************************************************************************
*** function dswadydth is the differential yield dyield/dcostheta which
*** should be integrated (by the routine gadap e.g.).
*** cth is cos(theta).
*** units: 1.0e-15 m**-2 (annihilation)**-1
*****************************************************************************

      real*8 function dswadydth(cth, phim0,phim1,phim2,phie0,phieth,phithm,
     & phichi,phiwh,phifk,phifv)
      implicit none

c------------------------ variables ------------------------------------

      real*8 cth
      real*8 e1cm,e1
      real*8 phim0,phim1,phim2,phie0,phieth,phithm
      integer phichi,phiwh,phifk,phifv   ! phiwh=1 - sun, 2 - earth
      integer istat
      character*2 wh

c------------------------ functions ------------------------------------
      real*8 dswayieldf
c-----------------------------------------------------------------------

      if (phiwh.eq.1) then
        wh='su'
      else
        wh='ea'
      endif

c...calculate the energy of particle 1 in the lab system

      e1cm=(phim0**2+phim1**2-phim2**2)/(2.0*phim0)
      e1=phie0/phim0*(e1cm + sqrt(phie0**2-phim0**2)/phie0*
     +  sqrt(e1cm**2-phim1**2)*cth)
      dswadydth=1.0d15*1.0d0/4.0d0*
     &  dswayieldf(e1,phieth,phithm,phichi,wh,phifk,phifv,istat) 

      end











