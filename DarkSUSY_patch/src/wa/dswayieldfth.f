*****************************************************************************
*** function phiith integrates dswadydth over the angle theta.
*** it is the yield from particle 1 (which decays from m0)
*** that is calculated. particle one corresponds to WS channel chi
*** units: 1.0e-30 m**-2 (annihilation)**-1
*****************************************************************************

      real*8 function dswayieldfth(e0,m0,mp1,mp2,emuthr,thmax,chi,wh,
     &  kind,type,istat,waerror)
      implicit none
      include 'dswacom.h'
      include 'dsidtag.h'
      include 'dsio.h'

c------------------------ variables ------------------------------------

      real*8 e0,m0,mp1,mp2,emuthr,thmax,m00,e00,thu
      real*8 mp1t,mp2t
      integer chi,istat,kind,type,waerror
      character*2 wh

      real*8 sum,emax,emin,e1cm,pi
      parameter (pi=3.141592653589793238d0)
      logical wb,chok

c------------------------ functions ------------------------------------

      external dswadydth
      real*8 dswadydth,dswayield_int

c-----------------------------------------------------------------------

      dswayieldfth=0.0
      wb=.true.
      m00=m0
      e00=e0

c...Fix mass for virtual particles
      if (e00.lt.m00) then
         m00=e00*0.9999d0
      endif

c...Set masses temporarily. If we have virtual decay products, we will
c...temporarily set them to have lower masses
      mp1t=mp1
      mp2t=mp2

      if (m00.lt.(mp1+mp2)) then
         mp1t=mp1*m00/(mp1+mp2)*0.9999d0
         mp2t=mp2*m00/(mp1+mp2)*0.9999d0
      endif

c...take care of slight numerical inaccuracy problems
c...Obsolete, now we extrapolate instead
c      if (m00.lt.(mp1+mp2)) then
c        if (m00.gt.0.99*(mp1+mp2)) then
c          m00=(mp1+mp2)*1.0001
c          if(e0.lt.m00) e00=m00
c        else
c          write(*,*) 'error in dswayieldfth: a particle with mass ',m0
c          write(*,*) 'is let to decay to two particles with mass ',
c     &      mp1,' and ',mp2
c          write(*,*) 'which is not energetically allowed.'
c          write(*,*) 'particle 1 has code ',chi
c          write(*,*) 'the yield from this decay is put to 0.0'
c          write(*,*) 'model: ',idtag
c          dswayieldfth=0.0
c          return
c        endif
c      endif

c...calculate maximum and minimum energy of particle 1.
      e1cm=(m00**2+mp1t**2-mp2t**2)/(2.0*m00)
      emin=e00/m00*(e1cm - sqrt(e00**2-m00**2)/e00*
     +  sqrt(e1cm**2-mp1t**2))
      emax=e00/m00*(e1cm + sqrt(e00**2-m00**2)/e00*
     +  sqrt(e1cm**2-mp1t**2))

      if (emax.gt.emuthr.and.emin.lt.emuthr) then
        thu = acos((emuthr*m00/e00-e1cm)/(sqrt(e00**2-m00**2)
     &  /e00*sqrt(e1cm**2-mp1t**2)))
        thu=min(thu,pi) ! to avoid round-off errors
      else
        thu = pi
      endif
c...check if mneu within correct bounds
      chok = .true.
      if ((chi.le.5.or.chi.eq.7.or.chi.ge.10)
     &  .and.emax.lt.(0.97*lb(chi)).and.
     &  emuthr.lt.(0.97*lb(chi)).and.emax.gt.emuthr) chok=.false.
      if ((chi.eq.6.or.chi.eq.8.or.chi.eq.9).and.emax.lt.(0.97*lb(chi))
     &  .and.emuthr.lt.(0.97*lb(chi)).and.emax.gt.emuthr) chok=.false.

      if (.not.chok) then
c        if (prtlevel.gt.0) then
c          write(6,*)
c          write(6,5000)
c     +     'DS WARNING in dswayieldfth: WIMP masses of less than ',
c     +      emax,' gev wants to be used,'
c          write(6,5010) 'while the lower bound for channel ',chi,
c     +      ' is ',lb(chi),' gev.'
c          write(6,*) 'the yield is put to 0.0 for these too low masses.'
c          write(6,*) 'the results can thus only be trusted as a',
c     +      ' lower bound.'
c        endif
c        wb=.false.
c        dswayieldfth=0.0d0
        istat=(istat/2)*2+1
      endif

      chok = .true.
      if ((chi.le.5.or.chi.eq.7.or.chi.ge.10)
     &  .and.emin.lt.(0.97*lb(chi)).and.
     &  emax.ge.lb(chi).and.emuthr.lt.lb(chi).and.
     &  emax.gt.emuthr) chok=.false.
      if ((chi.eq.6.or.chi.eq.8.or.chi.eq.9).and.emin.lt.(0.97*lb(chi))
     &  .and.emax.ge.(0.97*lb(chi)).and.emuthr.lt.(0.97*lb(chi)).and.
     &  emax.gt.emuthr) chok=.false.
      if (.not.chok) then
c        if (prtlevel.gt.0) then
c          write(6,*)
c          write(6,5000)
c     &      'DS WARNING in dswayieldfth: a neutralino mass down to ',
c     +      emin,' gev wants to be used,'
c          write(6,5010) 'while the lower bound for channel ',chi,
c     +      ' is ',lb(chi),' GeV.'
c          write(6,*) 'the yield is put to 0.0 for these too low masses.'
c          write(6,*) 'the results can thus only be trusted as a',
c     +      ' lower bound.'
c          endif
        istat=(istat/2)*2+1
      endif

      if (emax.gt.ub(chi)) then
        if (prtlevel.gt.0) then
          write(6,*)
          write(6,5000) 
     &      'DS WARNING in dswayieldfth: a neutralino mass up to ',
     +      emax,' gev wants to be used,'
          write(6,5010) 'while the upper bound for channel ',chi,
     +      ' is ',ub(chi),' gev.'
          write(6,5020) 'a neutralino mass of ',ub(chi),' gev is used',
     +      ' instead for these too high masses.'
          write(6,*) 'the results can thus only be trusted as a',
     +      ' lower bound.'
          endif
        istat=(istat/2)*2+1
      endif

      if (wb) then
        if (wh.eq.'su'.or.wh.eq.'SU') then
          sum=dswayield_int(dswadydth,cos(thu),1.0d0,chi,1,m00,mp1t,mp2t,e00,emuthr,thmax,kind,type,waerror)
        else
          sum=dswayield_int(dswadydth,cos(thu),1.0d0,chi,2,m00,mp1t,mp2t,e00,emuthr,thmax,kind,type,waerror)
        endif
        dswayieldfth=sum*1.0d-15
      endif

 5000 format(' ',a,f8.2,a)
 5010 format(' ',a,i2,a,f8.2,a)
 5020 format(' ',a,f8.2,a,a)

      end
