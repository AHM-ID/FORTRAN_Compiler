#!/bin/bash

# Generate the parser
bison -d ../src/fortran.y -o ../src/fortran.tab.c

# Generate the lexer
flex -o ../src/lex.yy.c ../src/fortran.l

# Compile the parser and lexer
gcc -o ../fortran ../src/fortran.tab.c ../src/lex.yy.c
