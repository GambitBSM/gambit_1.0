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



