!
! Dummy-code used as an example of an external Fortran library
! that can be accessed in GAMBIT via a C++ backend
!
! Author: Anders Kvellestad
!

subroutine testMe()
  write(*,*) "This is testMe. Not much happens here." 
end subroutine testMe


subroutine runMe(f, i)
  external f
  real*8 f,f_res
  integer i

  write(*,*) "This is runMe. Calling externalRoutine with arguments:",i
  f_res = f(i)
  write(*,*) "This is runMe. Got result by reference:",f_res
  f_res = f(10)
  write(*,*) "This is runMe. Got literal result:",f_res
  
end subroutine runMe


subroutine externalRoutine(i)
  write(*,*) " This is externalRoutine called with arguments:",i
end subroutine externalRoutine


real*8 function externalFunction(i)
  write(*,*) " This is externalFunction called with arguments:",i
  externalFunction = i*3.14
  return
end function

real*8 function externalFunction2(i,j)
  integer i
  real*8 j
  write(*,*) " This is externalFunction2 called with arguments:",i,j
  externalFunction2 = i*3.14 + j
  return
end function


! Tests for Torsten

!... this is the backend library for libav.a
!...determine "average" of f (over interval [0,1])
real*8 function average(f,n)
    implicit none
    real*8 f
    external f
    integer i,n
    real*8 x

    average=0d0
    do i=1,n
    call random_number(x)
    average=average+f(x)
    enddo  
    average=average/(1.*n)  

    return
end function


!... These are some example functions that could of course also be
!... provided by either another backend or some c++ function internal to GAMBIT

real*8 function funcGauss(x)
    implicit none
    real*8 x

    funcGauss=exp(-x**2)/sqrt(3.141592654)

    return
end function

real*8 function funcBE(x)
    implicit none
    real*8 x

    funcBE=0d0
    if (x.le.0d0) return
    funcBE=1./(1.+exp(x))/log(2.)

    return
end function
