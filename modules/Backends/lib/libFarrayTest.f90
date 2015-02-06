module testmodule
  implicit none

  double precision, dimension(-2:0) :: a = (/-2.2, -1.1, 0.0/)
  double precision, dimension(3) :: b = (/1.1,2.2,3.3/)   
  integer :: c = 1
  integer, dimension(1:3,0:1,-1:0) :: d = (reshape((/ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &
  0, 0/), [3,2,2]))  
  common /commonBlock/ a,b,c,d
  
! 5-letter sting 
  character*5 :: chara = 'abc'
! 3-element 1-dimensional array of 5-letter strings
  character*5 charb(3)
! 2x2-element 2-dimensional array of 6-letter strings
  character*6 charc(2,-1:0)
  integer :: e = 6
  common /commonBlock2/ chara, charb, charc, e

! complex and double complex types  
  complex :: cpa = (1,2)
  complex*16  :: cpb = (3,4)
  integer :: f = 91
  common /commonBlock3/ cpa, cpb, f

end module testmodule

  subroutine printStuff()
    implicit none
    double precision, dimension(-2:0) :: a
    double precision, dimension(3) :: b   
    integer :: c
    integer, dimension(1:3,0:1,-1:0) :: d
    common /commonBlock/ a,b,c,d
    character*5 :: chara
    character*5 charb(3)
    character*6 charc(2,-1:0)
    integer :: e
    common /commonBlock2/ chara, charb, charc, e
    write(*,*) "commonBlock contents:"     
    write(*,*) "a:    ", a 
    write(*,*) "b:    ", b
    write(*,*) "c:    ", c   
    write(*,*) "d:    ", d       
    write(*,*) "commonBlock2 contents:"   
    write(*,*) "chara:           ", chara 
    write(*,*) "charb([1,2,3]):  ", charb(1),"   ",charb(2),"   ",charb(3)
    write(*,*) "charc(1,[-1,0]): ", charc(1,-1),"   ",charc(1,0)   
    write(*,*) "charc(2,[-1,0]): ", charc(2,-1),"   ",charc(2,0)       
    write(*,*) "e:    ", e
  end subroutine printStuff

  subroutine fillArrays()
    implicit none 
    double precision, dimension(-2:0) :: a
    double precision, dimension(3) :: b   
    integer :: c
    integer, dimension(1:3,0:1,-1:0) :: d
    common /commonBlock/ a,b,c,d
    character*5 :: chara
    character*5 charb(3)
    character*6 charc(2,-1:0)
    integer :: e
    common /commonBlock2/ chara, charb, charc, e  
    a = (/-2.2, -1.1, 0.0/)  
    b = (/1.1,2.2,3.3/)  
    d(1,0,-1) = -101
    d(1,0,0) = 100    
    d(1,1,-1) = -111
    d(1,1,0) = 110     
    d(2,0,-1) = -201
    d(2,0,0) = 200    
    d(2,1,-1) = -211
    d(2,1,0) = 210      
    d(3,0,-1) = -301
    d(3,0,0) = 300    
    d(3,1,-1) = -311
    d(3,1,0) = 310        
    chara = 'abc'
    charb(1) = "12345"
    charb(2) = "abcde"
    charb(3) = "..."   
    charc(1,-1) = "1,-1"
    charc(1,0)  = "1,0"
    charc(2,-1) = "2,-1"
    charc(2,0)  = "2,0"
  end subroutine fillArrays

  subroutine fptrRoutine(i,j,func)
    implicit none
    double precision, dimension(3), intent(inout) :: i
    integer, intent(in) :: j
    interface AFunc
      function func (y)
        double precision :: func
        double precision, dimension(3), intent(in) :: y
      end function func
    end interface AFunc
    write(*,*) " This is fptrRoutine called with arguments i,j=",i,j,"and a function pointer, func."
    write(*,*) " Setting i(j)=func(i)" 
    i(j) = func(i)
  end subroutine fptrRoutine

  double precision function doubleFuncArray(i)
    implicit none
    double precision, dimension(3), intent(in) :: i
    write(*,*) " This is doubleFuncArray called with arguments:",i
    write(*,*) " Returning element 2 of the supplied array."   
    doubleFuncArray = i(2)
    return
  end function

  double precision function doubleFuncArray2(i)
    implicit none
    double precision, dimension(3), intent(in) :: i
    write(*,*) " This is doubleFuncArray2 called with arguments:",i
    write(*,*) " Returning element 2 of the supplied array."   
    doubleFuncArray2 = i(2)
    return
  end function
  
  double precision function doubleFuncArray3(i)
    implicit none
    double precision, dimension(1:2,2:3), intent(in) :: i
    write(*,*) " This is doubleFuncArray3 called with argument:"
    write(*,*) " i(1,2) = ", i(1,2), " i(1,3) = ", i(1,3) 
    write(*,*) " i(2,2) = ", i(2,2), " i(2,3) = ", i(2,3)     
    doubleFuncArray3 = i(1,3)
    return
  end function


