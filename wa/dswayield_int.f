      real*8 function dswayield_int(f,a,b,phichi,phiwh,phim0,phim1,phim2,
     & phie0,phieth,phithm,phifk,phifv,waerror)        

c_______________________________________________________________________
c  integrate function f between a and b
c  input
c    integration limits a and b
c  called by dswayieldfth
c  author: joakim edsjo (edsjo@physto.se) 96-05-16
c  based on paolo gondolos wxint.f routine.
c=======================================================================
      implicit none
      real*8 f,a,b,tot,eps,st,os,ost,del,sum,x
      real*8 phim0,phim1,phim2,phie0,phieth,phithm
      integer phichi,phiwh,phifk,phifv   ! phiwh=1 - sun, 2 - earth
      integer jmax,it,l,j,nfcn,jdid,waerror
      external f
c      parameter (a=-1.0,b=1.0,eps=1.0d-4,jmax=20)
      parameter (eps=1.0d-2,jmax=30)  ! je change in eps ps change in jmax
      dswayield_int=0.d0
      del=b-a
      ost=0.5*del*(f(a,phim0,phim1,phim2,phie0,phieth,phithm,phichi,phiwh,phifk,phifv)+
     & f(b,phim0,phim1,phim2,phie0,phieth,phithm,phichi,phiwh,phifk,phifv))
      x=0.5*(b+a)
      st=0.5*(ost+del*f(x,phim0,phim1,phim2,phie0,phieth,phithm,phichi,phiwh,phifk,phifv))
      os=(4.0*st-ost)/3.0
      ost=st
      it=1
      nfcn=3
      do j=3,jmax
        it=2*it
        del=0.5*del
        x=a+0.5*del
        sum=0.0
        do l=1,it
          sum=sum+f(x,phim0,phim1,phim2,phie0,phieth,phithm,phichi,phiwh,phifk,phifv)
          nfcn=nfcn+1
          x=x+del
        enddo
        st=0.5*(st+del*sum)
        tot=(4.0*st-ost)/3.0
        jdid=j
        if (abs(tot-os).le.eps*abs(os)) then
           dswayield_int=tot
           return
        endif
      os=tot
        ost=st
c        type *,'jdid',jdid,' os',os, 'ost',ost
      enddo

      write(*,*) 'DS WARNING: too many steps in dswayield_int.'
      waerror=1
      dswayield_int=0.0d0

      end






