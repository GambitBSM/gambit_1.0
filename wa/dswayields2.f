*****************************************************************************
*** function dswayields2 calculates the yield above threshold (kind=1) or the
*** differential yield (kind=2) from a given scalar
*** boson decaying in flight, the energy of the scalar boson should be given
*** in eh.
*** scalars hno = 1-4 are supported (S10, S20, S30 and S+/S-)
*** units: 1.0e-30 m**-2 (annihilation)**-1
*****************************************************************************

      real*8 function dswayields2(eh,emuth,thmax,hno,wh,kind,
     &  type,istat,waerror)
      implicit none
      include 'dswacom.h'

c------------------------ variables ------------------------------------

      real*8 eh,emuth,thmax
      integer hno,istat,waerror,kind,type,chi
      character*2 wh

      real*8 e1,e2,yield
      integer dch

c------------------------ functions ------------------------------------

      real*8 dswayields3,dswaemean,dswayieldfth

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

c..."complex" channels
        if (was0br(1,hno).gt.0.0d0) then    ! S10 S10 channel
          e1=dswaemean(eh,was0m(hno),was0m(1),was0m(1))
          yield=yield+2.0*was0br(1,hno)*dswayields3(e1,emuth,thmax,
     &      1,wh,kind,type,istat,waerror)
        endif

        if (was0br(2,hno).gt.0.0d0) then    ! S10 S20 channel
          e1=dswaemean(eh,was0m(hno),was0m(1),was0m(2))
          yield=yield+was0br(2,hno)*dswayields3(e1,emuth,thmax,
     &      1,wh,kind,type,istat,waerror)
          e2=dswaemean(eh,was0m(hno),was0m(2),was0m(1))
          yield=yield+was0br(2,hno)*dswayields3(e2,emuth,thmax,
     &      2,wh,kind,type,istat,waerror)
        endif

        if (was0br(3,hno).gt.0.0d0) then    ! S20 S20 channel
          e1=dswaemean(eh,was0m(hno),was0m(2),was0m(2))
          yield=yield+2.0*was0br(3,hno)*dswayields3(e1,emuth,thmax,
     &      2,wh,kind,type,istat,waerror)
        endif

        if (was0br(4,hno).gt.0.0d0) then    ! S30 S30 channel
          e1=dswaemean(eh,was0m(hno),was0m(3),was0m(3))
          yield=yield+2.0*was0br(4,hno)*dswayields3(e1,emuth,thmax,
     &      3,wh,kind,type,istat,waerror)
        endif

        if (was0br(5,hno).gt.0.0d0) then    ! S10 S30 channel
          e1=dswaemean(eh,was0m(hno),was0m(1),was0m(3))
          yield=yield+was0br(5,hno)*dswayields3(e1,emuth,thmax,
     &      1,wh,kind,type,istat,waerror)
          e2=dswaemean(eh,was0m(hno),was0m(3),was0m(1))
          yield=yield+was0br(5,hno)*dswayields3(e2,emuth,thmax,
     &      3,wh,kind,type,istat,waerror)
        endif

        if (was0br(6,hno).gt.0.0d0) then    ! S20 S30 channel
          e1=dswaemean(eh,was0m(hno),was0m(2),was0m(3))
          yield=yield+was0br(6,hno)*dswayields3(e1,emuth,thmax,
     &      2,wh,kind,type,istat,waerror)
          e2=dswaemean(eh,was0m(hno),was0m(3),was0m(2))
          yield=yield+was0br(6,hno)*dswayields3(e2,emuth,thmax,
     &      3,wh,kind,type,istat,waerror)
        endif

        if (was0br(7,hno).gt.0.0d0) then    ! S+ S- channel
          e1=dswaemean(eh,was0m(hno),wascm,wascm)
          yield=yield+2.0*
     &      was0br(7,hno)*dswayields3(e1,emuth,thmax,4,wh,
     &        kind,type,istat,waerror)
        endif

        if (was0br(8,hno).gt.0.0d0) then    ! z0 S10 channel
          e2=dswaemean(eh,was0m(hno),was0m(1),map(9))
          yield=yield+was0br(8,hno)*
     +    dswayieldfth(eh,was0m(hno),map(9),was0m(1),emuth,thmax,
     &      9,wh,kind,type,istat,waerror)
          yield=yield+was0br(8,hno)*dswayields3(e2,emuth,thmax,
     &      1,wh,kind,type,istat,waerror)
        endif

        if (was0br(9,hno).gt.0.0d0) then    ! z0 S20 channel
          e2=dswaemean(eh,was0m(hno),was0m(2),map(9))
          yield=yield+was0br(9,hno)*
     +    dswayieldfth(eh,was0m(hno),map(9),was0m(2),emuth,thmax,
     &      9,wh,kind,type,istat,waerror)
          yield=yield+was0br(9,hno)*dswayields3(e2,emuth,thmax,
     &      2,wh,kind,type,istat,waerror)
        endif

        if (was0br(10,hno).gt.0.0d0) then    ! z0 S30 channel
          e2=dswaemean(eh,was0m(hno),was0m(3),map(9))
          yield=yield+was0br(10,hno)*
     +    dswayieldfth(eh,was0m(hno),map(9),was0m(3),emuth,thmax,
     &      9,wh,kind,type,istat,waerror)
          yield=yield+was0br(10,hno)*dswayields3(e2,emuth,thmax,
     &      3,wh,kind,type,istat,waerror)
        endif

        if (was0br(11,hno).gt.0.0d0) then    ! w-S+ w+S- channel
          e2=dswaemean(eh,was0m(hno),wascm,map(8))
          yield=yield+was0br(11,hno)*
     +    dswayieldfth(eh,was0m(hno),map(8),wascm,emuth,thmax,
     &      8,wh,kind,type,istat,waerror)
          yield=yield+was0br(11,hno)*dswayields3(e2,emuth,thmax,
     &      4,wh,kind,type,istat,waerror)
        endif

        if (was0br(29,hno).gt.0.0d0) then    ! Z0 gamma
          yield=yield+was0br(29,hno)*
     +    dswayieldfth(eh,was0m(hno),map(9),0.0d0,emuth,thmax,
     &      9,wh,kind,type,istat,waerror)
        endif

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

        if (wascbr(13).gt.0.0d0) then ! w+ h1
          yield=yield+wascbr(13)*
     &    dswayieldfth(eh,wascm,map(8),was0m(1),emuth,thmax,
     &    8,wh,kind,type,istat,waerror)
          e2=dswaemean(eh,wascm,was0m(1),map(8))
          yield=yield+wascbr(13)*
     &      dswayields3(e2,emuth,thmax,1,wh,kind,type,istat,waerror)
        endif

        if (wascbr(14).gt.0.0d0) then ! w+ h2
          yield=yield+wascbr(14)*
     &    dswayieldfth(eh,wascm,map(8),was0m(2),emuth,thmax,
     &    8,wh,kind,type,istat,waerror)
          e2=dswaemean(eh,wascm,was0m(2),map(8))
          yield=yield+wascbr(14)*
     &      dswayields3(e2,emuth,thmax,2,wh,kind,type,istat,waerror)
        endif

        if (wascbr(15).gt.0.0d0) then ! w+ h3
          yield=yield+wascbr(15)*
     &    dswayieldfth(eh,wascm,map(8),was0m(3),emuth,thmax,
     &    8,wh,kind,type,istat,waerror)
          e2=dswaemean(eh,wascm,was0m(3),map(8))
          yield=yield+wascbr(15)*
     &      dswayields3(e2,emuth,thmax,3,wh,kind,type,istat,waerror)
        endif

      endif

      dswayields2 = yield

      end




