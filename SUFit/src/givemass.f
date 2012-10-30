c     Reads mass from dark susy common block 'mass' 
c
c     also read DarkSUSY/include/dsmssm.h
c     for hints about what the particle id can be
c
      function givemass(particle)
      implicit none
      real*8 givemass
      integer particle
      include 'dssusy.h'
      givemass = mass(particle)
      return
      end
