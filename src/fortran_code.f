PROGRAM fortran
    REAL :: x, y;
    INTEGER :: i;

    x = 3.14;
    y = x + 2.71;
    i = 10;

    IF (i > 0) THEN
        CALL printval(x);
    ELSE
        CALL printval(y);
    ENDIF

    DO
        i = i - 1;
    ENDDO

END PROGRAM fortran