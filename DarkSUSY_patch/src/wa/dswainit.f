*****************************************************************************
*** subroutine dswainit initializes and loads (from disk) the common
*** block variables needed by the WIMP annihilation yield routines.
*** Input: kind - 1 = integrated yields
***               2 = differential yields
***               3 = mixed yields (diff in energy, integrated in theta)
***        type - 1-26: type of yield
*** author: joakim edsjo  edsjo@physto.se
*** date: 96-10-23
*** Modified: 97-12-03, 08-04-02
*****************************************************************************

      subroutine dswainit(kind,type)
      implicit none
      include 'dswacom.h'
      include 'dsdirver.h'
      include 'dsio.h'

c------------------------ variables ------------------------------------

      integer i,j,k,l,m,flxkfile,fl,n,flvar,kind,type,yli,mm
      integer flxk,flt,ch,mfi
      real mwimp
      real tmpy
      character*200 filein
      character*255 scr
      character*10 scr2
      character*55 filepref
      character*2 filenr
      character*2 c2,wh,whc(2)
      character*10 filesuf
      data whc/'su','ea'/

c----------------------------------------- set-up common block variables

c...Check if already called for this kind and type
      if (yload(kind2ki(kind),type).ne.0) return

c...Set-up
      if (walast(kind2ki(kind)).lt.wamax) then ! still space in memeory
         walast(kind2ki(kind))=walast(kind2ki(kind))+1
         yload(kind2ki(kind),type)=walast(kind2ki(kind))
         yli=yload(kind2ki(kind),type) ! load index
         write(*,'(A,I2,A,I3)') 
     &      'Loading WIMP annihilation yield for kind = ',
     &      kind2ki(kind),' and type = ',type
      else
         write(*,*)
     &    'ERROR in dswainit. You have requested to load more WIMP'
         write(*,*)
     &    'annihilation yields than DarkSUSY is configured to handle.'
         write(*,*) 'Maximal number of simultaneous yields = ',wamax
         write(*,*) 
     &     'To come around this, increase wamax in include/wacom.h'
         write(*,*)
     &     'and recompile DarkSUSY.'
         write(*,*) 'Stopping.'
         stop
      endif

c...initialize thindex array where the thetas for the bins are stored
c...integrated yields (upper end of each bin)
      do i=-1,49
        thindex(i,1)=dble(i+1)*0.2d0
      enddo
      do i=50,90
        thindex(i,1)=dble(i-30+1)*0.5d0
      enddo

c...differential yields (center of each bin)
      do i=-1,49
        thindex(i,2)=dble(i)*0.2d0+0.1d0
        dth(i)=0.2d0
      enddo
      do i=50,90
        thindex(i,2)=dble(i-30)*0.5d0+0.25d0
        dth(i)=0.5d0
      enddo

c...initialize zindex array where the energies for the bins are stored
c...integrated yields (lower end of each bin)
      do i=-1,zn
        zindex(i,1)=dble(i)*0.02d0
      enddo

c...differential yields (center of each bin)
      do i=-1,zn
        zindex(i,2)=dble(i)*0.02d0+0.01d0
        dz(i)=0.02d0
      enddo

c------------------------------------------------------ load muon tables

c...generate file name
      if (waftype.eq.'a'.or.waftype.eq.'a') then
        write(*,*) 'DS ERROR in dswainit:'
        write(*,*) 
     &    'Loading of ascii yield tables not supported,',
     &    ' use binary instead.'
        stop
        filesuf='.dat'
      else
        filesuf='.bin'
      endif
      if (kind2ki(kind).eq.1) then   ! integrated
        filepref=wabase//'-fl21-f'
        write(filenr,'(i2)') type
      else                    ! differential
        filepref=wabase//'-fl22-f'
        write(filenr,'(i2)') type
      endif
      filein=dsinstall//'share/DarkSUSY/'//filepref//filenr//filesuf

c...delete spaces in file name
      fl=200
      do l=1,fl
 40     if (filein(l:l).eq.' ') then
          fl=fl-1
          do m=l,fl
            filein(m:m)=filein(m+1:m+1)
          enddo
          if (fl.eq.l) goto 50
          goto 40
        endif
      enddo
 50   continue


c...Integrated yields
      if (kind2ki(kind).eq.1) then

c...Zero data
        do i=1,2
          do j=1,13
            do k=1,wanm
              do l=0,zn
                do m=-1,thn
                  phiint(m,l,k,j,i,yli)=0.0
                enddo
              enddo
            enddo
          enddo
        enddo

        if (prtlevel.gt.1) write(*,*)
     &       'loading integrated muon yield tables from file ',filein
        if (waftype.eq.'a'.or.waftype.eq.'a') then
          open(unit=13,file=filein,status='old',form='formatted',
     &          err=100)
          read(13,500) scr2,flxkfile
          read(13,'(a)') scr
        else
          open(unit=13,file=filein,status='old',form='unformatted',
     &          err=100)
        endif
 500    format(1x,a10,1x,i3)

        do i=1,2
          if (i.eq.1) then
             if (prtlevel.gt.1) write(*,*) '   ...for the sun...'
          else
             if (prtlevel.gt.1) write(*,*) '   ...for the earth...'
          endif
          do j=1,13
             if (prtlevel.gt.1) write(*,*) '      channel number ',j
            do k=1,wanm
              if (k.ge.milow(j)) then
                read(13) c2,flxk,flt,wh,ch,mfi,mwimp
c                write(*,*) 'CF: ',flxk,21,flt,type,wh,i,ch,chi2ch(j),
c     &            k,mfi
                if (.not.(c2.eq.'NY'.and.flxk.eq.21.and.flt.eq.type
     &             .and.wh.eq.whc(i).and.ch.eq.chii2chi(j)
     &             .and.k.eq.mfi.and.abs(mwimp-mi(k)).lt.0.1)) then
                   write(*,*) 'DS ERROR in dswainit:'
                   write(*,*) 
     &  'The read WIMP annihilation file does not look as expected.'
                   write(*,*) 'Expected tag NY, found ',c2
                   write(*,*) 'Expected flux code 21, found ',flxk
                   write(*,*) 'Expected flux type',type,', found ',flt
                   write(*,*) 'Expected source ',whc(i),', found ',wh
                   write(*,*) 'Expected channel',chii2chi(j),
     &  ', found ',ch
                   write(*,*) 'Expected mass index',k,', found ',mfi
                   write(*,*) 'Expected mass ',mi(k),', found ',mwimp
                   write(*,*) 'Stopping.'
                   stop
                endif


                do l=0,zn-1
                  if (waftype.eq.'a'.or.waftype.eq.'a') then
                    read(13,2000) (phiint(m,l,k,j,i,yli),m=0,thn)
                  else
                    read(13) (phiint(m,l,k,j,i,yli),m=0,thn)
                  endif
                enddo
                do l=0,zn-1
                  phiint(-1,l,k,j,i,yli)=0.0
                enddo
              endif
            enddo
          enddo
        enddo
        close(13)

c...Differential yields
      else

        do i=1,2
          do j=1,13
            do k=1,wanm
              do l=-1,zn
                do m=-1,thn
                  phidiff(m,l,k,j,i,yli)=0.0
                  phimixed(m,l,k,j,i,yli)=0.0
                enddo
              enddo
            enddo
          enddo
        enddo

        if (prtlevel.gt.1) write(*,*)
     &       'loading differential muon yield tables from file ',filein
        if (waftype.eq.'a'.or.waftype.eq.'a') then
          open(unit=13,file=filein,status='old',form='formatted',
     &          err=100)
          read(13,500) scr2,flxkfile
          read(13,'(a)') scr
        else
          open(unit=13,file=filein,status='old',form='unformatted',
     &          err=100)
        endif

        do i=1,2
          if (i.eq.1) then
            if (prtlevel.gt.1) write(*,*) '   ...for the sun...'
          else
            if (prtlevel.gt.1) write(*,*) '   ...for the earth...'
          endif
          do j=1,13
            if (prtlevel.gt.1) write(*,*) '      channel number ',j
            do k=1,wanm
              if (k.ge.milow(j)) then
                read(13) c2,flxk,flt,wh,ch,mfi,mwimp
c                write(*,*) 'CF: ',flxk,21,flt,type,wh,i,ch,chi2ch(j),
c     &            k,mfi
                if (.not.(c2.eq.'NY'.and.flxk.eq.22.and.flt.eq.type
     &             .and.wh.eq.whc(i).and.ch.eq.chii2chi(j)
     &             .and.k.eq.mfi.and.abs(mwimp-mi(k)).lt.0.1)) then
                   write(*,*) 'DS ERROR in dswainit:'
                   write(*,*) 
     &  'The read WIMP annihilation file does not look as expected.'
                   write(*,*) 'Expected tag NY, found ',c2
                   write(*,*) 'Expected flux code 22, found ',flxk
                   write(*,*) 'Expected flux type',type,', found ',flxk
                   write(*,*) 'Expected source ',whc(i),', found ',wh
                   write(*,*) 'Expected channel',chii2chi(j),
     &  ', found ',flxk
                   write(*,*) 'Expected mass index',k,', found ',mfi
                   write(*,*) 'Expected mass ',mi(k),', found ',mwimp
                   write(*,*) 'Stopping.'
                   stop
                endif
                do l=0,zn-1
                  if (waftype.eq.'a'.or.waftype.eq.'a') then
                    read(13,2000) (phidiff(m,l,k,j,i,yli),m=0,thn)
                  else
                    read(13) (phidiff(m,l,k,j,i,yli),m=0,thn)
                  endif
                enddo

c...Create mixed tables, differential in energy, integrated in theta
                do l=0,zn-1
                  tmpy=0.d0
                  do m=0,thn
                     tmpy=tmpy+phidiff(m,l,k,j,i,yli)*dth(m)
                     phimixed(m,l,k,j,i,yli)=tmpy
                  enddo
                enddo

                phidiff(-1,-1,k,j,i,yli)=0.0
                phimixed(-1,-1,k,j,i,yli)=0.0
                do l=-1,zn
c                  phidiff(-1,l,k,j,i,flvar)=phidiff(0,l,k,j,i,flvar)
                  phidiff(-1,l,k,j,i,yli)=
     &              -4.0/3.0*phidiff(0,l,k,j,i,yli) ! je 961023
                  phidiff(0,l,k,j,i,yli)=
     &              4.0/3.0*phidiff(0,l,k,j,i,yli)   ! je 961023
                  phimixed(-1,l,k,j,i,yli)=0.0
                enddo
                do m=-1,thn
                  phidiff(m,-1,k,j,i,yli)=phidiff(m,0,k,j,i,yli)
                  phidiff(m,zn,k,j,i,yli)=phidiff(m,zn-1,k,j,i,yli)
                  phimixed(m,-1,k,j,i,yli)=phimixed(m,0,k,j,i,yli)
                  phimixed(m,zn,k,j,i,yli)=phimixed(m,zn-1,k,j,i,yli)
                enddo
              endif
            enddo
          enddo
        enddo
        close(13)

      endif

c      if (prtlevel.gt.1) write(*,*) 
c     &    'loading of WIMP annihilation yield tables finished.'
      write(*,*) '   ...done'

 2000 format(91(1x,e12.6))

      return

 100  continue
      write(*,*) 'ERROR in wainit: while opening file ',filein
      write(*,*) 'program stopped.'

      stop
      end


      block data dswacom
      implicit none
      include 'dswacom.h'

c...Masses for internal channel numbers chi 1-14
      data map/0.010d0,0.005d0,0.2d0,1.5d0,4.8d0,175.d0,
     &   0.0d0,80.25d0,91.2d0,0.106d0,1.777d0,0.0d0,0.0d0,0.0d0/
c...Lower and upper mass bounds for channels
c      data lb/5*10.d0,176.d0,
c     &   10.0d0,80.3d0,91.2d0,5*10.d0/
      data lb/4*3.d0,6.0d0,176.d0,
     &   3.0d0,80.3d0,91.2d0,5*3.d0/
      data ub/14*10000.0d0/
      data thn,zn/90,50/
      data mi/3.0d0,4.d0,5.d0,6.0d0,8.d0,10.0d0,15.0d0,20.0d0,
     &  25.0d0,35.0d0,50.0d0,80.3d0,91.2d0,100.0d0,150.0d0,
     &  176.0d0,200.0d0,250.0d0,350.0d0,500.0d0,750.0d0,1000.0d0,
     &  1500.0d0,2000.0d0,3000.0d0,5000.0d0,7500.0d0,10000.0d0/
c...Lowest mass index for the 14 channels chi
      data milow/1,1,1,1,4,16,1,12,13,1,1,1,1,1/
      data waftype/'b'/
c      data wabase/'we-res-b-full'/
c      data wabase/'we-res-may2012'/
      data wabase/'we-res-jan2013'/

      data kind2ki/1,2,2/ ! convert kind to kind table

c...Start-up value
      data dswasetupcalled/.false./

c...To convert between internal channels chi and 
c...global channel numbers ch
      data chii2chi/1,2,3,4,5,6,7,8,9,11,12,13,14/
      data chi2chii/1,2,3,4,5,6,7,8,9,0,10,11,12,13/
      data ch2chi/11*0,9,8,12,0,13,10,14,11,2,1,4,3,6,5,7,3*0/
      data chi2ch/21,20,23,22,25,24,26,13,12,17,19,14,16,18/


      end





