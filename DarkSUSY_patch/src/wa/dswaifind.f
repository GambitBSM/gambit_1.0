***********************************************
*** routine to find the index of an entry   ***
*** the closest lowest hit is given          ***
***********************************************

      subroutine dswaifind(value,array,ipl,ii,imin,imax)
      implicit none

      include 'dsidtag.h'

      integer imin,imax,i,inew,imint,imaxt,iold,ii
      real*8 ipl,value,array(imin+10:imax+11)    ! +10 to avoid sign problems

      imint=imin+10
      imaxt=imax+10

      if (value.lt.array(imint).or.value.ge.array(imaxt+1)) then
        ii=-5
c        write(*,*) 'error in dswaifind: request out of bounds'
        return
      endif

      iold=0
      inew=0
      i=(imaxt+imint)/2

 10   if (value.ge.array(i).and.value.lt.array(i+1)) then
        ii=i-10
        ipl=(value-array(i))/(array(i+1)-array(i))
        return
      endif

      if (value.gt.array(i)) then
        inew=(i+1+imaxt)/2
        imint=i
      else
        inew=(imint+i)/2
        imaxt=i
      endif

      i=inew
      if (iold.eq.inew) then
        write(*,*) 'error in dswaifind: couldn''t find the index'
        write(*,*) '  the index array must be incorrect.'
        write(*,*) '  model: ',idtag
        write(*,*) '  value = ',value
        write(*,*) '  array-min = ',array(imin+10)
        write(*,*) '  array-max = ',array(imax+11)
        stop
      endif
      iold=inew

      goto 10

      end










