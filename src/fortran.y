%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Error function
void yyerror(const char *s);
int yylex(void);
extern int yylineno; // Line number from the lexer
extern char *yytext; // Current token from the lexer

// Memory cleanup for dynamically allocated strings
void free_string(char *str);
%}

%union {
    char *str;    // for storing identifiers
    int ival;     // for storing integer constants
    double rval;  // for storing real constants
}

%token PROGRAM END SUBROUTINE REAL INTEGER IF THEN ELSE ENDIF DO ENDDO CALL GOTO
%token IDENTIFIER INTEGER_CONST REAL_CONST
%token PLUS MINUS MUL DIV EQUALS COMMA SEMICOLON LPAREN RPAREN
%token DOUBLE_COLON
%token GT LT GE LE EQ NE // Add relational operator tokens

%type <str> IDENTIFIER
%type <ival> INTEGER_CONST
%type <rval> REAL_CONST

%%

program:
    PROGRAM IDENTIFIER statements END PROGRAM IDENTIFIER {
        printf("Parsed program: %s\n", $2);
        if (strcmp($2, $6) != 0) {
            yyerror("Program names do not match");
            YYABORT;
        }
        free_string($2);
        free_string($6);
    }
    ;

statements:
    /* empty */
    | statements statement {
        printf("Parsed statement\n");
    }
    ;

statement:
    variable_declaration {
        printf("Parsed variable declaration\n");
    }
    | assignment {
        printf("Parsed assignment\n");
    }
    | if_statement {
        printf("Parsed if statement\n");
    }
    | do_loop {
        printf("Parsed do loop\n");
    }
    | subroutine_call {
        printf("Parsed subroutine call\n");
    }
    ;

variable_declaration:
    REAL DOUBLE_COLON variables SEMICOLON {
        printf("Declared REAL variables\n");
    }
    | INTEGER DOUBLE_COLON variables SEMICOLON {
        printf("Declared INTEGER variables\n");
    }
    ;

variables:
    IDENTIFIER {
        printf("Parsed variable: %s\n", $1);
        free_string($1); // Free identifier after parsing
    }
    | variables COMMA IDENTIFIER {
        printf("Parsed variable: %s\n", $3);
        free_string($3); // Free each identifier in a list of variables
    }
    ;

assignment:
    IDENTIFIER EQUALS expression SEMICOLON {
        printf("Assigned value to variable: %s\n", $1);
        free_string($1); // Free identifier after assignment
    }
    ;

expression:
    term {
        printf("Parsed expression\n");
    }
    | expression PLUS term {
        printf("Parsed addition\n");
    }
    | expression MINUS term {
        printf("Parsed subtraction\n");
    }
    | expression GT term {
        printf("Parsed greater than\n");
    }
    | expression LT term {
        printf("Parsed less than\n");
    }
    | expression GE term {
        printf("Parsed greater than or equal\n");
    }
    | expression LE term {
        printf("Parsed less than or equal\n");
    }
    | expression EQ term {
        printf("Parsed equal\n");
    }
    | expression NE term {
        printf("Parsed not equal\n");
    }
    ;

term:
    factor {
        printf("Parsed term\n");
    }
    | term MUL factor {
        printf("Parsed multiplication\n");
    }
    | term DIV factor {
        printf("Parsed division\n");
    }
    ;

factor:
    IDENTIFIER {
        printf("Parsed identifier: %s\n", $1);
    }
    | INTEGER_CONST {
        printf("Parsed integer constant: %d\n", $1);
    }
    | REAL_CONST {
        printf("Parsed real constant: %f\n", $1);
    }
    | LPAREN expression RPAREN {
        printf("Parsed parenthesized expression\n");
    }
    ;

if_statement:
    IF expression THEN statements ENDIF {
        printf("Parsed IF statement\n");
    }
    | IF expression THEN statements ELSE statements ENDIF {
        printf("Parsed IF-ELSE statement\n");
    }
    ;

do_loop:
    DO statements ENDDO {
        printf("Parsed DO loop\n");
    }
    ;

subroutine_call:
    CALL IDENTIFIER LPAREN arguments RPAREN SEMICOLON {
        printf("Called subroutine: %s\n", $2);
        free_string($2); // Free subroutine name after call
    }
    ;

arguments:
    /* empty */
    | argument_list {
        printf("Parsed arguments\n");
    }
    ;

argument_list:
    expression {
        printf("Parsed argument\n");
    }
    | argument_list COMMA expression {
        printf("Parsed argument\n");
    }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, near '%s'\n", s, yylineno, yytext);
}

void free_string(char *str) {
    if (str) {
        free(str);
    }
}

int main(void) {
    return yyparse();
}
