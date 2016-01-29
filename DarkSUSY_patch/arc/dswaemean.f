******************************************************************************
*** function dswaemean is used to calculate the mean energy of a decay product
*** when a moving particle decays. e0 and m0 are the energy and mass of
*** the moving particle and m1 and m2 are the masses of the decay products.
*** it is the mean energy of m1 that is returned. all energies and masses
*** should be given in gev.
******************************************************************************

      real*8 function dswaemean(e0,m0,m1,m2)
      implicit none

c------------------------ variables ------------------------------------

      real*8 e0,m0,m1,m2,m00,e00,m1t,m2t
      real*8 e1cm

c-----------------------------------------------------------------------

      m00=m0
      e00=e0

c...Set masses temporarily. If we have virtual decay products, we will
c...temporarily set them to have lower masses
      m1t=m1
      m2t=m2

      if (m00.lt.(m1+m2)) then
         m1t=m1*m00/(m1+m2)*0.9999d0
         m2t=m2*m00/(m1+m2)*0.9999d0
      endif

c...take care of slight numerical inaccuracy problems
c...Obsolte, now we extrapolate
c      if (m00.lt.(m1+m2)) then
c        if (m00.gt.0.99*(m1+m2)) then
c          m00=(m1+m2)*1.0001
c          if (e0.lt.m00) e00=m00
c        else
c          write(*,*) 'error in dswaemean: a particle with mass ',m0
c          write(*,*) 'is let to decay to two particles with mass ',
c     &      m1,' and ',m2
c          write(*,*) 'which is not energetically allowed.'
c          write(*,*) 'model: ',idtag
c          write(*,*) 'program is stopped.'
c          stop
c        endif
c      endif

      e1cm=(m00**2+m1t**2-m2t**2)/(2.0d0*m00)
      dswaemean=e00/m00*e1cm           ! mean energy
c      dswaemean=e0/m0*sqrt(e1cm**2+(e0**2-m0**2)/e0**2*
c     +  (e1cm**2-m1**2)/3.0)      ! mean root square energy

      end

