!
! Dummy Fortran file to test CBGB
!

module M1
  integer i1,i2(2),i3(3)
  character*8 str
  common /dummy_block/ i1,i2,i3,str
contains
   integer function one()
      one = 1
   end function one
end module M1


integer function two()
  two = 2
end function two


CHARACTER*8 function text()
  text = "ABCDEFGH"
end function text

module MA
contains
   CHARACTER*4 function text()
      text = "abcd"
   end function text
end module MA

module MB
contains
   CHARACTER*6 function text()
      text = "abcdef"
   end function text
end module MB




