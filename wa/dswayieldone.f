*****************************************************************************
*** Function dswayieldone calculates the yield of neutrinos, leptons or
*** hadronic showers from WIMP annihilations in the Sun/Earth for a given
*** annihilation channel. Channels 1-xx are supported. Channel 10 (mu- mu+)
*** always gives zero (as muons are stopped in the Sun/Earth), but is
*** included to keep the channel numbering the same as for halo annihilation
*** routines.
*** Inputs:
***   mneu  - WIMP mass (GeV)
***   emu   - energy of neutrino, lepton or hadronic shower (GeV)
***   theta - angle from the Sun / centre of the Earth (degrees)
***   ch    - annihilation channel
*** The channel numbers should be the new channel numbers ch as listed below
*** S# is neutral scalar number #
*** S+ is charged scalar
***
*** Ch No
*** ch     Particles                 WS chi  Internal chii
*** -----  ---------                 ------  ------------
***  1     S1 S1                     -       -
***  2     S1 S2                     -       -
***  3     S2 S2                     -       -
***  4     S3 S3                     -       -
***  5     S1 S3                     -       -
***  6     S2 S3                     -       -
***  7     S- S+                     -       -
***  8     Z S1                      -       -
***  9     Z S2                      -       -
*** 10     Z S3	                     -       -
*** 11     W- S+ and W+ S-           -       - 
*** 12     Z0 Z0 	             9       9 
*** 13     W+ W-                     8       8
*** 14     nu_e nu_e-bar             12      11
*** 15     e+ e-                     -       -
*** 16     nu_mu nu_mu-bar           13      12
*** 17     mu+ mu-                   10      -
*** 18     nu_tau nu_tau-bar	     14      13 
*** 19     tau+ tau-	             11      10
*** 20     u u-bar                   2       2
*** 21     d d-bar                   1       1
*** 22     c c-bar                   4       4
*** 23     s s-bar                   3       3
*** 24     t t-bar                   6       6
*** 25     b b-bar                   5       5
*** 26     gluon gluon               7       7
*** 27     q q gluon (not implemented yet, put to zero)
*** 28     gamma gamma (1-loop)
*** 29     Z0 gamma (1-loop)
***
*** ch is the channel number (including complex channel numbers) that
*** are used as input to this routine. These are the same as in dssigmav
*** in case of SUSY. chi (1-14) are the channel numbers used by WimpSim
*** chii are the internal channel numbers used as array indices (differs
*** from chi as mu- mu+ channels are not stored (they give zero yield)).
***
***   wh    - 'su' for Sun, 'ea' for Earth
***   kind  - 1 = integrated
***           2 = differential
***           3 = mixed, integrated in theta, differential in energy
***   type  - Type of yield
***
***   type   Yield at detector
***   ----   -----------------
***   1      nu_e
***   2      nu_e-bar
***   3      nu_mu
***   4      nu_mu-bar
***   5      nu_tau
***   6      nu_tau-bar
***   7      e- at neutrino-nucleon vertex
***   8      e+ at neutrino-nucleon vertex
***   9      mu- at neutrino-nucleon vertex
***   10     mu+ at neutrino-nucleon vertex
***   11     tau- at neutrino-nucleon vertex
***   12     tau+ at neutrino-nucleon vertex
***   13     mu- at an imaginary plane in detector (i.e. after propagation)
***   14     mu+ at an imaginary plane in detector (i.e. after propagation)
***   15     hadronic shower from nu_e charged current (CC) interactions
***   16     hadronic shower from nu_e-bar charged current (CC) interactions
***   17     hadronic shower from nu_mu charged current (CC) interactions
***   18     hadronic shower from nu_mu-bar charged current (CC) interactions
***   19     hadronic shower from nu_tau charged current (CC) interactions
***   20     hadronic shower from nu_tau-bar charged current (CC) interactions
***   21     hadronic shower from nu_e neutral current (NC) interactions
***   22     hadronic shower from nu_e-bar neutral current (NC) interactions
***   23     hadronic shower from nu_mu neutral current (NC) interactions
***   24     hadronic shower from nu_mu-bar neutral current (NC) interactions
***   25     hadronic shower from nu_tau neutral current (NC) interactions
***   26     hadronic shower from nu_tau-bar neutral current (NC) interactions
***
*** Outputs:
***   yield in units of 
***      1e-30 m**-2 (annihilation)**-1 for types 1-6 and 13-14
***      1e-30 m**-3 (annihilation)**-1 for types 7-12, 15-26.
***      For the differential yields, the units are the same plus
***      GeV**-1 degree**-1 (kind 2) and GeV**-1 (kind 3)
***   istat - status flag (non-zero if something went wrong)
*** NOTE: Compared to previous versions of this routine, particles and
*** antiparticles are no longer summed, you thus need to call it for both
*** types and add them up.
*** Author: Joakim Edsjo (edsjo@physto.se)
*** Date: 1995
*** Modified: April 3, 2008
*** Modified: May 6, 2011 Pat Scott (patscott@physics.mcgill.ca)
*****************************************************************************

      real*8 function dswayieldone(mneu,e,theta,ch,wh,kind,type,istat)
      use omp_lib
      implicit none
      include 'dswacom.h'
      include 'dsidtag.h'

c------------------------ variables ------------------------------------

      real*8 mneu,e,theta,flx
      real*8 mp1,mp2,e1,e2
      integer ch,chi,istat,waerror,i,kind,type
      character*2 wh

      logical chok

      logical first,firstwar
      data first /.true./
      data firstwar /.true./
      save first,firstwar


c------------------------ functions ------------------------------------

      real*8 dswayieldf,dswayields

c-----------------------------------------------------------------------

c      write(*,*) 'dswayieldone called with ',kind,type

      istat=0
      waerror=0
      mp1=0.d0
      mp2=0.d0

      chi=ch2chi(ch) ! from full channel number to WS channel number

c--------------------------------------- if first call, load yield tables

      if (first) then
        write(*,*) 'First! I am thread number ',omp_get_thread_num()
        if (omp_get_thread_num() .eq. 0) then
          write(*,*) 'Initialising! I am thread number ',omp_get_thread_num()
          do i=1,26
             yload(1,i)=0
             yload(2,i)=0
          enddo
          walast(1)=0 ! last index for integrated yields stored in memory
          walast(2)=0 ! last index for differential yields stored in memory
          first=.false.
        endif
        write(*,*) 'Waiting! I am thread number ',omp_get_thread_num()
!$omp barrier
      endif

      if (yload(kind2ki(kind),type).eq.0) then
        if (omp_get_thread_num() .eq. 0) then
          write(*,*) 'Initialising again! I am thread number ',omp_get_thread_num()
          call dswainit(kind,type)
        endif
        write(*,*) 'Waiting again! I am thread number ',omp_get_thread_num()
!$omp barrier
      endif

c-----------------------------------------------------------------------
      if (chi.gt.0) then              ! "fundamental" channel
        chok = .false.
        if (mneu.ge.map(chi)) chok = .true.
c...Check if t t-bar, W+ W- or Z0 Z0        
        if ((chi.eq.6.or.chi.eq.8.or.chi.eq.9).and.
     &     mneu.gt.(0.95*map(chi))) chok = .true.   !PS changed 0.99->0.95 to deal with low top mass
        if (chok) then
          dswayieldone=dswayieldf(mneu,e,theta,chi,wh,
     &      kind,type,istat)
        else
          dswayieldone=0.0
          istat=mod(istat,2)+2
            write(6,5000) 'error in dswayieldone: channel ',chi,
     &        ' is not energetically allowed.'
            write(6,*) 'model: ',idtag
        endif

      else                           ! "complex" channel

c...determine masses of the annihilation particles
        if (ch.eq.1) then
          mp1=was0m(1)         ! S10 mass
          mp2=was0m(1)         ! S10 mass
        elseif (ch.eq.2) then
          mp1=was0m(1)         ! S10 mass
          mp2=was0m(2)         ! S20 mass
        elseif (ch.eq.3) then
          mp1=was0m(2)         ! S20 mass
          mp2=was0m(2)         ! S20 mass
        elseif (ch.eq.4) then
          mp1=was0m(3)         ! S30 mass
          mp2=was0m(3)         ! S30 mass
        elseif (ch.eq.5) then
          mp1=was0m(1)         ! S10 mass
          mp2=was0m(3)         ! S30 mass
        elseif (ch.eq.6) then
          mp1=was0m(2)         ! S20 mass
          mp2=was0m(3)         ! S30 mass
        elseif (ch.eq.7) then
          mp1=wascm            ! S+ mass
          mp2=wascm            ! S- mass
        elseif (ch.eq.8) then
          mp1=map(9)           ! z0 mass
          mp2=was0m(1)         ! h20 mass
        elseif (ch.eq.9) then
          mp1=map(9)           ! z0 mass
          mp2=was0m(2)         ! S20 mass
        elseif (ch.eq.10) then
          mp1=map(9)           ! z0 mass
          mp2=was0m(3)         ! S30 mass
        elseif (ch.eq.11) then
          mp1=map(8)           ! w+- mass
          mp2=wascm            ! S+- mass
        elseif (ch.eq.29) then
          mp1=map(9)           ! z0 mass
          mp2=0.0d0            ! gamma mass
        else                   ! not a supported channel
          dswayieldone=0.0d0
          return
        endif

c...if energetically allowed channel, go on...
        if (mneu.ge.0.995d0*((mp1+mp2)/2.0d0)) then

c...calculate the energy of the annihilation particles
          e1=((2.0d0*mneu)**2-mp2**2+mp1**2)/(4.0d0*mneu)
          e2=2.0d0*mneu-e1
          e1=max(e1,mp1+0.001d0)
          e2=max(e2,mp2+0.001d0)

c...check different annihilation channels
          flx=0.0d0

c---------- S10 S10 channel ----------
          if (ch.eq.1) then
            flx=flx+2.d0*dswayields(e1,e,theta,1,wh,kind,type,istat,waerror)

c---------- S10 S20 channel ----------
          elseif (ch.eq.2) then
            flx=flx+dswayields(e1,e,theta,1,wh,kind,type,istat,waerror)
            flx=flx+dswayields(e2,e,theta,2,wh,kind,type,istat,waerror)

c---------- S20 S20 channel ----------
          elseif (ch.eq.3) then
            flx=flx+2.d0*dswayields(e1,e,theta,2,wh,kind,type,istat,waerror)

c---------- S30 S30 channel ----------
          elseif (ch.eq.4) then
            flx=flx+2.d0*dswayields(e1,e,theta,3,wh,kind,type,istat,waerror)

c---------- S10 S30 channel ----------
          elseif (ch.eq.5) then
            flx=flx+dswayields(e1,e,theta,1,wh,kind,type,istat,waerror)
            flx=flx+dswayields(e2,e,theta,3,wh,kind,type,istat,waerror)

c---------- S20 S30 channel ----------
          elseif (ch.eq.6) then
            flx=flx+dswayields(e1,e,theta,2,wh,kind,type,istat,waerror)
            flx=flx+dswayields(e2,e,theta,3,wh,kind,type,istat,waerror)

c---------- S+ S- channel ----------
          elseif (ch.eq.7) then
            flx=flx+2.d0*dswayields(e1,e,theta,4,wh,kind,type,istat,waerror)

c---------- Z0 S10 channel ----------
          elseif (ch.eq.8) then
            flx=flx+0.5d0*dswayieldf(e1,e,theta,9,wh,
     &        kind,type,istat)
            flx=flx+dswayields(e2,e,theta,1,wh,kind,type,istat,waerror)

c---------- Z0 S20 channel ----------
          elseif (ch.eq.9) then
            flx=flx+0.5d0*dswayieldf(e1,e,theta,9,wh,
     &        kind,type,istat)
            flx=flx+dswayields(e2,e,theta,2,wh,kind,type,istat,waerror)

c---------- Z0 S30 channel ----------
          elseif (ch.eq.10) then
            flx=flx+0.5d0*dswayieldf(e1,e,theta,9,wh,
     &        kind,type,istat)
            flx=flx+dswayields(e2,e,theta,3,wh,kind,type,istat,waerror)

c---------- w+h- w-h+ channel ----------
c...this calculation gives a mean of the two channels w+h- & w-h+
          elseif (ch.eq.11) then
            flx=flx+0.5d0*dswayieldf(e1,e,theta,8,wh,
     &        kind,type,istat)
            flx=flx+dswayields(e2,e,theta,4,wh,kind,type,istat,waerror)

c---------- z0 gamma channel ----------
          elseif (ch.eq.29) then
            flx=flx+0.5d0*dswayieldf(e1,e,theta,9,wh,
     &        kind,type,istat)
          endif

          dswayieldone=flx

        else   ! not energetically allowed channel
          dswayieldone=0.0d0
          istat=mod(istat,2)+2
c          if (prtlevel.gt.0) then
            write(6,5000) 'error in dswayieldone: channel ',ch,
     &        ' is not energetically allowed.'
            write(6,*) 'model: ',idtag
c          endif
        endif

      endif

      if (waerror.gt.0) then
        write(*,*) 'DS WARNING in dswayieldone for model ',idtag,
     &    ', yield type ',type,' and channel ',ch
        write(*,*) '  the integration over scalar decay angles ran',
     &    ' into numerical problems.'
        write(*,*) '  The results can only be trusted as a lower',
     &    'bound.'
        istat=ibset(istat,2)
      endif

 5000 format(' ',a,i2,a,a,a)

      end




