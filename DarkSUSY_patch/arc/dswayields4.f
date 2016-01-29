*****************************************************************************
*** function dswayields4 calculates the yield above threshold (kind=1) or the
*** differential yield (kind=2) from a given scalar
*** boson decaying in flight, the energy of the scalar boson should be given
*** in eh.
*** scalars hno = 1-4 are supported (S10, S20, S30 and S+/S-)
*** units: 1.0e-30 m**-2 (annihilation)**-1
*****************************************************************************

      real*8 function dswayields4(eh,emuth,thmax,hno,wh,
     &  kind,type,istat,waerror)
      implicit none
      include 'dswacom.h'
      include 'dsidtag.h'

c------------------------ variables ------------------------------------

      real*8 eh,emuth,thmax
      integer hno,istat,waerror,kind,type
      character*2 wh

      real*8 yield
      integer chi,ch

c------------------------ functions ------------------------------------

      real*8 dswayieldfth

c-----------------------------------------------------------------------


c...loop through different decay channels
      yield=0.0d0

c---------- neutral scalar bosons ----------
      if (hno.le.3) then

c..."fundamental" channels
        do 100 chi=1,14
          if (was0br(chi2ch(chi),hno).gt.0.0d0) then
            yield=yield+was0br(chi2ch(chi),hno)*2.0d0*
     &        dswayieldfth(eh,was0m(hno),map(chi),map(chi),emuth,thmax,
     &          chi,wh,kind,type,istat,waerror)
          endif
  100   continue


c---------- charged scalar bosons ----------
      else

        if (wascbr(1).gt.0.0d0) then ! u d-bar
           yield=yield+wascbr(1)*
     &    dswayieldfth(eh,wascm,map(1),map(2),emuth,thmax,
     &      1,wh,kind,type,istat,waerror)
          yield=yield+wascbr(1)*
     &    dswayieldfth(eh,wascm,map(2),map(1),emuth,thmax,
     &      2,wh,kind,type,istat,waerror)
        endif

        if (wascbr(2).gt.0.0d0) then ! u s-bar
           yield=yield+wascbr(2)*
     &    dswayieldfth(eh,wascm,map(3),map(2),emuth,thmax,
     &      3,wh,kind,type,istat,waerror)
          yield=yield+wascbr(2)*
     &    dswayieldfth(eh,wascm,map(2),map(3),emuth,thmax,
     &      2,wh,kind,type,istat,waerror)
        endif

        if (wascbr(3).gt.0.0d0) then ! u b-bar
          yield=yield+wascbr(3)*
     &    dswayieldfth(eh,wascm,map(5),map(2),emuth,thmax,
     &      5,wh,kind,type,istat,waerror)
          yield=yield+wascbr(3)*
     &    dswayieldfth(eh,wascm,map(2),map(5),emuth,thmax,
     &      2,wh,kind,type,istat,waerror)
        endif

        if (wascbr(4).gt.0.0d0) then ! c d-bar
          yield=yield+wascbr(4)*
     &    dswayieldfth(eh,wascm,map(4),map(1),emuth,thmax,
     &      4,wh,kind,type,istat,waerror)
          yield=yield+wascbr(4)*
     &    dswayieldfth(eh,wascm,map(1),map(4),emuth,thmax,
     &      1,wh,kind,type,istat,waerror)
        endif

        if (wascbr(5).gt.0.0d0) then ! c s-bar
          yield=yield+wascbr(5)*
     &    dswayieldfth(eh,wascm,map(4),map(3),emuth,thmax,
     &    4,wh,kind,type,istat,waerror)
          yield=yield+wascbr(5)*
     &    dswayieldfth(eh,wascm,map(3),map(4),emuth,thmax,
     &    3,wh,kind,type,istat,waerror)
        endif

        if (wascbr(6).gt.0.0d0) then ! c b-bar
          yield=yield+wascbr(6)*
     &    dswayieldfth(eh,wascm,map(4),map(5),emuth,thmax,
     &    4,wh,kind,type,istat,waerror)
          yield=yield+wascbr(6)*
     &    dswayieldfth(eh,wascm,map(5),map(4),emuth,thmax,
     &    5,wh,kind,type,istat,waerror)
        endif

        if (wascbr(7).gt.0.0d0) then ! t d-bar
          yield=yield+wascbr(7)*
     &    dswayieldfth(eh,wascm,map(6),map(1),emuth,thmax,
     &    6,wh,kind,type,istat,waerror)
          yield=yield+wascbr(7)*
     &    dswayieldfth(eh,wascm,map(1),map(6),emuth,thmax,
     &    1,wh,kind,type,istat,waerror)
        endif

        if (wascbr(8).gt.0.0d0) then ! t s-bar
          yield=yield+wascbr(8)*
     &    dswayieldfth(eh,wascm,map(6),map(3),emuth,thmax,
     &    6,wh,kind,type,istat,waerror)
          yield=yield+wascbr(8)*
     &    dswayieldfth(eh,wascm,map(3),map(6),emuth,thmax,
     &    3,wh,kind,type,istat,waerror)
        endif

        if (wascbr(9).gt.0.0d0) then ! t b-bar
          yield=yield+wascbr(9)*
     &    dswayieldfth(eh,wascm,map(6),map(5),emuth,thmax,
     &    6,wh,kind,type,istat,waerror)
          yield=yield+wascbr(9)*
     &    dswayieldfth(eh,wascm,map(5),map(6),emuth,thmax,
     &    5,wh,kind,type,istat,waerror)
        endif

        if (wascbr(12).gt.0.0d0) then ! tau nu_tau
          yield=yield+wascbr(12)*
     &    dswayieldfth(eh,wascm,map(11),map(14),emuth,thmax,
     &    11,wh,kind,type,istat,waerror)
          yield=yield+wascbr(12)*
     &    dswayieldfth(eh,wascm,map(14),map(11),emuth,thmax,
     &    14,wh,kind,type,istat,waerror)
        endif

      endif

      dswayields4 = yield

c...check for inconsistent declarations in hdw
      if (hno.le.3) then ! neutral scalars
        do ch=1,11
          if (was0br(ch,hno).gt.0.0d0) then
          write(6,*) 
     &      'DS ERROR in dswayields4: inconsistent decay widths',
     +      ' declared in was0br.'
          write(6,*) 'model: ',idtag
          endif
        enddo
      else               ! charged scalar
        do ch=13,15
          if (wascbr(ch).gt.0.0d0) then
          write(6,*) 'error in dswayields4: inconsistent decay widths',
     +      ' declared in wascbr.'
          write(6,*) 'model: ',idtag
          endif
        enddo
      endif

      end




