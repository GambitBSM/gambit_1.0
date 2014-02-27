module testmodule
  implicit none

  double precision, dimension(-2:0) :: a = (/-2.2, -1.1, 0.0/)
  double precision, dimension(3) :: b = (/1.1,2.2,3.3/)   
  integer :: c = 1
  integer, dimension(1:3,0:1,-1:0) :: d = (reshape((/ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &
  0, 0/), [3,2,2]))  
  common /commonBlock/ a,b,c,d

contains

  subroutine printStuff()
    implicit none
    write(*,*) "a:    ", a 
    write(*,*) "b:    ", b
    write(*,*) "c:    ", c   
    write(*,*) "d:    ", d          
    write(*,*) "d(3,1,0):    ", d(3,1,0)    
  end subroutine printStuff

  subroutine set_d()
    implicit none 
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
  end subroutine set_d

  subroutine fptrRoutine(i,j,func)
    double precision, dimension(3), intent(inout) :: i
    integer, intent(in) :: j
    interface AFunc
      function func (y)
        double precision :: func
        double precision, dimension(3), intent(in) :: y
      end function func
    end interface AFunc
    write(*,*) " This is fptrRoutine called with arguments:",i,j,"and a function pointer."
    i(3) = func(i)+i(j)
  end subroutine fptrRoutine

  double precision function doubleFuncArray1(i)
    double precision, dimension(3), intent(in) :: i
    write(*,*) " This is doubleFuncArray1 called with arguments:",i
    doubleFuncArray1 = i(1)
    return
  end function

  double precision function doubleFuncArray2(i)
    double precision, dimension(3), intent(in) :: i
    write(*,*) " This is doubleFuncArray2 called with arguments:",i
    doubleFuncArray2 = i(2)
    return
  end function

  double precision function doubleFunc(i)
    double precision, intent(in) :: i
    write(*,*) " This is doubleFunc called with arguments:",i
    doubleFunc = i*3.14
    return
  end function

end module testmodule
