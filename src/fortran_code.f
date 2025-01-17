PROGRAM test_program

  ! Variable declarations
  INTEGER :: i, j, k
  REAL :: x, y, z
  CHARACTER(len=20) :: message
  LOGICAL :: is_valid

  ! Variable initializations
  i = 10
  j = 5
  k = 0
  x = 3.14
  y = 2.718
  z = 0.0
  message = "Hello, Fortran!"
  is_valid = .TRUE.

  ! Simple arithmetic operations
  z = x * y
  PRINT *, "Product of x and y: ", z

  ! Conditional statement
  IF (i > j) THEN
    PRINT *, "i is greater than j"
  ELSE
    PRINT *, "i is not greater than j"
  ENDIF

  ! Loop with step
  DO k = 1, 10, 2
    PRINT *, "Loop iteration (step 2): ", k
  ENDDO

  ! Nested loop
  DO i = 1, 3
    DO j = 1, 3
      PRINT *, "Nested loop: i = ", i, ", j = ", j
    ENDDO
  ENDDO

  ! Complex conditional and arithmetic
  IF (z > 5.0 .AND. is_valid) THEN
    PRINT *, "z is greater than 5.0 and is_valid is TRUE"
  ELSE
    PRINT *, "Condition not met"
  ENDIF

  ! Subroutine call
  CALL print_message(message)

  ! Final output
  PRINT *, "End of program"

END PROGRAM test_program