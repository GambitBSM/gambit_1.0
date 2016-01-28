*****************************************************************************
*** function dswayieldf calculates the muon yield. The yields are of
*** different kinds:
*** kind = 1: integrated up to a given theta and above a given energy
***        2: differetial in energy and angle
***        3: differential in energy, but integrated in angle up to the
***           given angular cut
*** Note, the input channels chi are the WimpSim channnel numbers
*** However, as chi=10 corresponds to mu- mu+ that gives zero yield
*** that channel is not stored and hence internal channel numbers chii
*** are used as array indices.
*** The channels are
***
*** chi  Particles         Internal chii
*** ---  ---------         -------------
*** 1    d d-bar           1
*** 2    u u-bar           2
*** 3    s s-bar           3
*** 4    c c-bar           4
*** 5    b b-bar           5
*** 6    t t-bar           6
*** 7    gluon gluon       7
*** 8    W+ W-             8
*** 9    Z0 Z0             9
*** 10   mu- mu+           -
*** 11   tau- tau+         10
*** 12   nu_e nu_e-bar     11
*** 13   nu_mu nu_mu-bar   12
*** 14   nu_tau nu_tau_bar 13
***
*** The types are explained in the header of dswayield.f.
*** Fundamental channels chi = 1-14 are supported.
*** If this routine is called outside of the kinematical regions
*** where tables exist, the following is done:
***   - for lower energies, than the lowest simulted ones,
***     extrapolations are used
***   - for masses below the lowest simulated, extrapolations
***     are used
***   - for energies above the highest simulated, the results
***     for the highest energy simulated are used
*** units: 1.0e-30 m**-2 (annihilation)**-1  integrated (kind 1)
*** units: 1.0e-30 m**-2 gev**-1 (degree)**-1 (annihilation)**1 differential
***        (kind 2)
*** units: 1.0e-30 m**-2 gev**-1 (annihilation)**1 mixed (kind 3)
*** types 7-12, 15-26 have an additional unit of m**-1.
*** author: joakim edsjo, edsjo@physics.berkeley.edu
*** date: 1995
*** modified: dec 03, 1997, April 3, 2008
*** Modified 2011-05-08 to included mixed yields (kind=3). Corrected a bug
*** for integrated yields below 0.2 degrees.
*****************************************************************************

      real*8 function dswayieldf(mwimp,e,theta,chi,wh,kind,
     &  type,istat)
      use omp_lib
      implicit none
      include 'dswacom.h'
      include 'dsidtag.h'
      include 'dsio.h'


c------------------------ variables ------------------------------------

      real*8 mwimp,e,theta,phi1,phi2,mp1,mp2,zpl,thpl,mn,z,th,
     &  tmp,vals(4),vals2(4),slog
      integer chi,istat,zi,thi,m1i,m2i,whi,kind,type,yli,chii,ii
      character*2 wh
      logical wb
      external slog

c-----------------------------------------------------------------------

      yli=yload(kind2ki(kind),type)
      chii=chi2chii(chi)

c...Safecheck
      if (yli.eq.0) then
        if (omp_get_thread_num() .eq. 0) then
          call dswainit(kind,type)
        endif
!$omp barrier
        yli=yload(kind,type)
      endif

      dswayieldf=0.0d0
      if (chi.eq.10) return ! mu- mu+

      wb=.true.
      if (wh.eq.'su'.or.wh.eq.'SU') then
        whi=1
      else
        whi=2
      endif

      if (e.ge.mwimp) then
        dswayieldf=0.0d0
        return
      endif

      mn = mwimp
c...take care of the case where mwimp is between the mass of the annihilation
c...product and the lower bound of the simulations (there might be a small
c...gap of less than a gev) for tt-bar,ww and zz.
      if (mn.lt.lb(chi)) then
         if (mn.lt.0.97d0*lb(chi)) istat=(istat/2)*2+1
         mn=lb(chi)
      endif

c      if (chi.eq.6.or.chi.eq.8.or.chi.eq.9) then
c        if (mn.lt.lb(chi).and.mn.gt.(0.97*lb(chi))) then
c          mn=lb(chi)
c        endif
c      endif

c...check if mwimp within correct bounds
c...This part is obsolete, we extrapolate instead
c      if (mn.lt.lb(chi).and.e.lt.lb(chi)) then
c        if (prtlevel.gt.0) then
c          write(6,*)
c          write(6,5000) 
c     &      'WARNING in dswayieldf: a neutralino mass of ',mn,
c     +      ' gev wants to be used,'
c          write(6,5010) 'while the lower bound for channel ',chi,
c     +      ' is ',lb(chi),' GeV.'
c          write(6,*) 'the yield is put to 0.0 for these too low masses.'
c          write(6,*) 'the results can thus only be trusted as a',
c     +      ' lower bound.'
c          write(6,*) 'model: ',idtag
c        endif
c        wb=.false.
c        dswayieldf=0.0d0
c        istat=(istat/2)*2+1
c      endif

      if (mn.gt.ub(chi)) then
        if (prtlevel.gt.0) then
          write(6,*)
          write(6,5000) 
     &      'WARNING in dswayieldf: a neutralino mass of ',mn,
     +      ' gev wants to be used,'
          write(6,5010) 'while the upper bound for channel ',chi,
     +      ' is ',ub(chi),' GeV.'
          write(6,5020) 'a neutralino mass of ',ub(chi),' GeV is used',
     +      ' instead for these too high masses.'
          write(6,*) 'the results can thus only be trusted as a',
     +      ' lower bound.'
          write(6,*) 'model: ',idtag
        endif
        istat=(istat/2)*2+1
      endif


c---------------------------------------------------- integrated yields
      if (wb.and.kind.eq.1) then
c...determine which entries in dswayieldfnt to use and how

        z=e/mn
        call dswaifind(z,zindex(0,1),zpl,zi,0,zn-1)

        if (zi.eq.-5.or.zi.ge.zn) then
          dswayieldf=0.0d0
          return
        endif

        th=theta
        call dswaifind(th,thindex(-1,1),thpl,thi,-1,thn-1)

        if (theta.gt.30.0d0) then
          thi=thn-1
          thpl=1.0d0
        endif
        if (thi.eq.-5) then
          dswayieldf=0.0d0
          return
        endif

        call dswaifind(mn,mi(1),tmp,m1i,1,wanm-1)
        mp1=mi(m1i)
        m2i=m1i+1
        mp2=mi(m2i)

        if (mn.ge.mi(wanm)) then
          m1i=wanm
          m2i=wanm
          mp1=mi(wanm)
          mp2=mp1

          dswayieldf = (1.0-thpl)*((1.0-zpl)*
     &      dble(phiint(thi,zi,m1i,chii,whi,yli))+
     &      zpl*dble(phiint(thi,zi+1,m1i,chii,whi,yli)))+
     &      thpl*((1.0-zpl)*dble(phiint(thi+1,zi,m1i,chii,whi,yli))+
     &      zpl*dble(phiint(thi+1,zi+1,m1i,chii,whi,yli)))
        else
          phi1 = (1.0-thpl)*((1.0-zpl)*
     &      dble(phiint(thi,zi,m1i,chii,whi,yli))+
     &      zpl*dble(phiint(thi,zi+1,m1i,chii,whi,yli)))+
     &      thpl*((1.0-zpl)*dble(phiint(thi+1,zi,m1i,chii,whi,yli))+
     &      zpl*dble(phiint(thi+1,zi+1,m1i,chii,whi,yli)))
          phi2 = (1.0-thpl)*((1.0-zpl)*
     &      dble(phiint(thi,zi,m2i,chii,whi,yli))+
     &      zpl*dble(phiint(thi,zi+1,m2i,chii,whi,yli)))+
     &      thpl*((1.0-zpl)*dble(phiint(thi+1,zi,m2i,chii,whi,yli))+
     &      zpl*dble(phiint(thi+1,zi+1,m2i,chii,whi,yli)))
c          dswayieldf = phi1 + (phi2-phi1)*(mn-mp1)*(mn+mp1)/
c     &      ((mp2-mp1)*(mp2+mp1)) ! old interpolation
          dswayieldf = phi1*(mp2-mn)/(mp2-mp1)
     &      +phi2*(mn-mp1)/(mp2-mp1) ! linear interpolation is better
c          write(*,*) 'mx=',mwimp,'  e=',e,'  zi=',zi,'  zpl=',zpl
c          write(*,*) 'phi1=',phi1
c          write(*,*) 'phi2=',phi2
c          write(*,*) 'phi1 parts:',
c     &      phiint(thi,zi,m1i,chii,whi,yli),
c     &      phiint(thi,zi+1,m1i,chii,whi,yli),
c     &      phiint(thi+1,zi,m1i,chii,whi,yli),
c     &      phiint(thi+1,zi+1,m1i,chii,whi,yli)
c          write(*,*) 'phi2 parts:',
c     &      phiint(thi,zi,m2i,chii,whi,yli),
c     &      phiint(thi,zi+1,m2i,chii,whi,yli),
c     &      phiint(thi+1,zi,m2i,chii,whi,yli),
c     &      phiint(thi+1,zi+1,m2i,chii,whi,yli)



        endif
        if (mn.ne.mwimp) then
          dswayieldf=mwimp**2/mn**2*dswayieldf
        endif
      endif

c-------------------------------------------------- differential yields
      if (wb.and.kind.eq.2) then
c...determine which entries in phidiff to use and how
        z=e/mn
        call dswaifind(z,zindex(-1,2),zpl,zi,-1,zn-1)

        if (zi.eq.-5.or.zi.ge.zn) then
          dswayieldf=0.0d0
          return
        endif

        if ((e.gt.mn).or.(e.le.0.0).or.zi.eq.-5) then
          dswayieldf=0.0d0
          return
        endif

        th=theta
        call dswaifind(th,thindex(-1,2),thpl,thi,-1,thn-1)

c...The following is to make sure that we get the last bin correct
c...It contains all the events with theta>30 degrees. We want it to
c...integrate correctly to the correct number of events so we place
c...it between 30.0 and 30.5 to make sure that happens.
c...We are also careful with how we interpolate the last bin before
c...that to avoid problems
        if (theta.gt.30.0d0.and.theta.lt.30.5d0) then
           thi=thn
           thpl=0.0d0
        endif

        if (theta.gt.29.75.and.theta.lt.30.0d0) then
           thpl=0.d0 ! do not include last theta>30 bin
        endif
           
        if (theta.gt.30.5d0.or.thi.eq.-5) then
          dswayieldf=0.0d0
          return
        endif

        call dswaifind(mn,mi(1),tmp,m1i,1,wanm-1)
        mp1=mi(m1i)
        m2i=m1i+1
        mp2=mi(m2i)

        if (mn.ge.mi(wanm)) then
          m1i=wanm
          m2i=wanm
          mp1=mi(wanm)
          mp2=mp1
          dswayieldf = (1.0-thpl)*((1.0-zpl)*
     &      dble(phidiff(thi,zi,m1i,chii,whi,yli))+
     &      zpl*dble(phidiff(thi,zi+1,m1i,chii,whi,yli)))+
     &      thpl*((1.0-zpl)*dble(phidiff(thi+1,zi,m1i,chii,whi,yli))+
     &      zpl*dble(phidiff(thi+1,zi+1,m1i,chii,whi,yli)))
        else
          phi1 = (1.0-thpl)*((1.0-zpl)*
     &      dble(phidiff(thi,zi,m1i,chii,whi,yli))+
     &      zpl*dble(phidiff(thi,zi+1,m1i,chii,whi,yli)))+
     &      thpl*((1.0-zpl)*dble(phidiff(thi+1,zi,m1i,chii,whi,yli))+
     &      zpl*dble(phidiff(thi+1,zi+1,m1i,chii,whi,yli)))
          phi2 = (1.0-thpl)*((1.0-zpl)*
     &      dble(phidiff(thi,zi,m2i,chii,whi,yli))+
     &      zpl*dble(phidiff(thi,zi+1,m2i,chii,whi,yli)))+
     &      thpl*((1.0-zpl)*dble(phidiff(thi+1,zi,m2i,chii,whi,yli))+
     &      zpl*dble(phidiff(thi+1,zi+1,m2i,chii,whi,yli)))
          dswayieldf = phi1 + (phi2-phi1)*(mn-mp1)*(mn+mp1)/
     &      ((mp2-mp1)*(mp2+mp1))
        endif
        if (mn.ne.mwimp) then
          dswayieldf=mwimp**2/mn**2*dswayieldf
        endif
c... convert from dyield / dz dtheta to dyield / de dtheta
        dswayieldf=dswayieldf/mwimp
      endif

c-------------------------------------------------- mixed yields
      if (wb.and.kind.eq.3) then
c...determine which entries in phidiff to use and how
        z=e/mn
        call dswaifind(z,zindex(-1,2),zpl,zi,-1,zn-1)

        if (zi.eq.-5.or.zi.ge.zn) then
          dswayieldf=0.0d0
          return
        endif

        if ((e.gt.mn).or.(e.le.0.0).or.zi.eq.-5) then
          dswayieldf=0.0d0
          return
        endif

        th=theta
        call dswaifind(th,thindex(-1,1),thpl,thi,-1,thn-1)

        if (theta.gt.30.0d0) then
          thi=thn-1
          thpl=1.0d0
        endif
        if (thi.eq.-5) then
          dswayieldf=0.0d0
          return
        endif

        call dswaifind(mn,mi(1),tmp,m1i,1,wanm-1)
        mp1=mi(m1i)
        m2i=m1i+1
        mp2=mi(m2i)

        if (mn.ge.mi(wanm)) then
          m1i=wanm
          m2i=wanm
          mp1=mi(wanm)
          mp2=mp1
          !PS switched to logarithmic integration because linear produces spurious features between nodes
          !dswayieldf = (1.0-thpl)*((1.0-zpl)*
     &    !  dble(phimixed(thi,zi,m1i,chii,whi,yli))+
     &    !  zpl*dble(phimixed(thi,zi+1,m1i,chii,whi,yli)))+
     &    !  thpl*((1.0-zpl)*dble(phimixed(thi+1,zi,m1i,chii,whi,yli))+
     &    !  zpl*dble(phimixed(thi+1,zi+1,m1i,chii,whi,yli)))
          vals(1) = dble(phimixed(thi,zi,m1i,chii,whi,yli))
          vals(2) = dble(phimixed(thi,zi+1,m1i,chii,whi,yli))           
          vals(3) = dble(phimixed(thi+1,zi,m1i,chii,whi,yli))
          vals(4) = dble(phimixed(thi+1,zi+1,m1i,chii,whi,yli))
          if (any(vals .le. epsilon(1.d0))) then
            dswayieldf = (1.0-thpl)*((1.0-zpl)*vals(1)+zpl*vals(2))+
     &        thpl*((1.0-zpl)*vals(3)+zpl*vals(4))
          else
            dswayieldf = exp((1.0-thpl)*((1.0-zpl)*log(vals(1))+zpl*
     &       log(vals(2)))+thpl*((1.0-zpl)*log(vals(3))+zpl*
     &       log(vals(4))))
          endif
        else
          !PS switched to logarithmic integration because linear produces spurious features between nodes
          !phi1 = (1.0-thpl)*((1.0-zpl)*
     &    !  dble(phimixed(thi,zi,m1i,chii,whi,yli))+
     &    !  zpl*dble(phimixed(thi,zi+1,m1i,chii,whi,yli)))+
     &    !  thpl*((1.0-zpl)*dble(phimixed(thi+1,zi,m1i,chii,whi,yli))+
     &    !  zpl*dble(phimixed(thi+1,zi+1,m1i,chii,whi,yli)))
          !phi2 = (1.0-thpl)*((1.0-zpl)*
     &    !  dble(phimixed(thi,zi,m2i,chii,whi,yli))+
     &    !  zpl*dble(phimixed(thi,zi+1,m2i,chii,whi,yli)))+
     &    !  thpl*((1.0-zpl)*dble(phimixed(thi+1,zi,m2i,chii,whi,yli))+
     &    !  zpl*dble(phimixed(thi+1,zi+1,m2i,chii,whi,yli)))
          !dswayieldf = phi1 + (phi2-phi1)*(mn-mp1)*(mn+mp1)/
     &    !  ((mp2-mp1)*(mp2+mp1))
          vals(1) = dble(phimixed(thi,zi,m1i,chii,whi,yli))
          vals(2) = dble(phimixed(thi,zi+1,m1i,chii,whi,yli))
          vals(3) = dble(phimixed(thi+1,zi,m1i,chii,whi,yli))
          vals(4) = dble(phimixed(thi+1,zi+1,m1i,chii,whi,yli))
          vals2(1) = dble(phimixed(thi,zi,m2i,chii,whi,yli))
          vals2(2) = dble(phimixed(thi,zi+1,m2i,chii,whi,yli))
          vals2(3) = dble(phimixed(thi+1,zi,m2i,chii,whi,yli))
          vals2(4) = dble(phimixed(thi+1,zi+1,m2i,chii,whi,yli))
          if (any(vals .le. epsilon(1.d0)) .or.
     &        any(vals2 .le. epsilon(1.d0))) then
            phi1 = (1.0-thpl)*((1.0-zpl)*vals(1)+zpl*vals(2))+
     &        thpl*((1.0-zpl)*vals(3)+zpl*vals(4))
            phi2 = (1.0-thpl)*((1.0-zpl)*vals2(1)+zpl*vals2(2))+
     &        thpl*((1.0-zpl)*vals2(3)+zpl*vals2(4))
            dswayieldf = phi1 + (phi2-phi1)*(mn-mp1)*(mn+mp1)/
     &        ((mp2-mp1)*(mp2+mp1))
          else
            phi1 = (1.0-thpl)*((1.0-zpl)*log(vals(1))+zpl*log(vals(2)))+
     &        thpl*((1.0-zpl)*log(vals(3))+zpl*log(vals(4)))
            phi2 = (1.0-thpl)*((1.0-zpl)*log(vals2(1))+zpl*
     &        log(vals2(2)))+thpl*((1.0-zpl)*log(vals2(3))+zpl*
     &        log(vals2(4)))
            dswayieldf = exp(phi1 + (phi2-phi1)*(mn-mp1)*(mn+mp1)/
     &        ((mp2-mp1)*(mp2+mp1)))
          endif
        endif
        if (mn.ne.mwimp) then
          dswayieldf=mwimp**2/mn**2*dswayieldf
        endif
c... convert from dyield / dz to dyield / de
        dswayieldf=dswayieldf/mwimp
      endif


 5000 format(' ',a,f8.2,a)
 5010 format(' ',a,i2,a,f8.2,a)
 5020 format(' ',a,f8.2,a,a)

      return

      end

      real*8 function slog(x)
      real*8 x
      if (x .le. epsilon(0.d0)) then
        slog = -1000.d0
      else
        slog = log(x)
      endif
      end function slog
