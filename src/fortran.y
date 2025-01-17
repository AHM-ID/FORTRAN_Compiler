%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
extern int yylineno;
extern char *yytext;
void free_string(char *str);
%}

%union {
    char *str;
    int ival;
    double rval;
}

%token PROGRAM END SUBROUTINE REAL INTEGER IF THEN ELSE ENDIF DO ENDDO CALL GOTO
%token IDENTIFIER INTEGER_CONST REAL_CONST CHARACTER LOGICAL STRING TRUE FALSE
%token PLUS MINUS MUL DIV EQUALS COMMA LPAREN RPAREN
%token DOUBLE_COLON ASTERISKCOMMA
%token GT LT GE LE EQ NE
%token AND OR NOT
%token PRINT

%type <str> IDENTIFIER
%type <ival> INTEGER_CONST
%type <rval> REAL_CONST
%type <str> STRING
%type <ival> expression
%type <ival> term
%type <ival> factor

%left OR
%left AND
%right NOT
%left PLUS MINUS
%left MUL DIV
%left GT LT GE LE EQ NE
%right ASSIGN

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
    | print_statement {
        printf("Parsed print statement\n");
    }
    ;

variable_declaration:
    REAL DOUBLE_COLON variables {
        printf("Declared REAL variables\n");
    }
    | INTEGER DOUBLE_COLON variables {
        printf("Declared INTEGER variables\n");
    }
    | CHARACTER DOUBLE_COLON variables {
        printf("Declared CHARACTER variables\n");
    }
    | CHARACTER LPAREN INTEGER_CONST RPAREN DOUBLE_COLON variables {
        printf("Declared CHARACTER variables with length %d\n", $3);
    }
    | CHARACTER LPAREN IDENTIFIER EQUALS INTEGER_CONST RPAREN DOUBLE_COLON variables {
        printf("Declared CHARACTER variables with length %d\n", $5);
    }
    | LOGICAL DOUBLE_COLON variables {
        printf("Declared LOGICAL variables\n");
    }
    ;

variables:
    IDENTIFIER {
        printf("Parsed variable: %s\n", $1);
        free_string($1);
    }
    | variables COMMA IDENTIFIER {
        printf("Parsed variable: %3s\n", $3);
        free_string($3);
    }
    ;

assignment:
    IDENTIFIER EQUALS expression {
        printf("Assigned value to variable: %s\n", $1);
        free_string($1);
    }
    | IDENTIFIER EQUALS STRING {
        printf("Assigned string to variable: %s\n", $1);
        free_string($1);
        free_string($3);
    }
    ;

print_statement:
    PRINT ASTERISKCOMMA print_list {
        printf("Print statement with string\n");
    }
    ;

print_list:
    print_item {
        printf("Parsed print item\n");
    }
    | print_list COMMA print_item {
        printf("Parsed print item list\n");
    }
    ;

print_item:
    expression {
        printf("Parsed expression in print statement\n");
    }
    | STRING {
        printf("Parsed string in print statement\n");
        free_string($1);
    }
    ;

expression:
    term { 
        printf("Parsed expression: term\n");
        $$ = $1; // Pass term result
    }
    | expression PLUS term { 
        printf("Parsed addition\n");
        $$ = $1 + $3; // Addition operation
    }
    | expression MINUS term { 
        printf("Parsed subtraction\n");
        $$ = $1 - $3; // Subtraction operation
    }
    | expression GT term { 
        printf("Parsed greater than\n");
        $$ = $1 > $3; // Greater than operation
    }
    | expression LT term { 
        printf("Parsed less than\n");
        $$ = $1 < $3; // Less than operation
    }
    | expression GE term { 
        printf("Parsed greater than or equal\n");
        $$ = $1 >= $3; // Greater than or equal operation
    }
    | expression LE term { 
        printf("Parsed less than or equal\n");
        $$ = $1 <= $3; // Less than or equal operation
    }
    | expression EQ term { 
        printf("Parsed equal\n");
        $$ = $1 == $3; // Equal operation
    }
    | expression NE term { 
        printf("Parsed not equal\n");
        $$ = $1 != $3; // Not equal operation
    }
    | expression AND term { 
        printf("Parsed logical AND\n");
        $$ = $1 && $3; // Logical AND operation
    }
    | expression OR term { 
        printf("Parsed logical OR\n");
        $$ = $1 || $3; // Logical OR operation
    }
    | NOT term { 
        printf("Parsed logical NOT\n");
        $$ = !$2; // Logical NOT operation
    }
    | LPAREN expression RPAREN { 
        printf("Parsed parenthesized expression\n");
        $$ = $2; // Return the value of the expression inside parentheses
    }
    ;

term:
    factor { 
        printf("Parsed term: factor\n");
        $$ = $1; // Pass factor result
    }
    | term MUL factor { 
        printf("Parsed multiplication\n");
        $$ = $1 * $3; // Multiplication operation
    }
    | term DIV factor { 
        printf("Parsed division\n");
        $$ = $1 / $3; // Division operation
    }
    ;

factor:
    IDENTIFIER { 
        printf("Parsed identifier: %s\n", $1);
        $$ = 1; // Placeholder for identifier value (to be defined further)
    }
    | INTEGER_CONST { 
        printf("Parsed integer constant: %d\n", $1);
        $$ = $1; // Assign integer constant value
    }
    | REAL_CONST { 
        printf("Parsed real constant: %f\n", $1);
        $$ = $1; // Assign real constant value
    }
    | TRUE { 
        printf("Parsed TRUE\n");
        $$ = 1; // TRUE is represented as 1
    }
    | FALSE { 
        printf("Parsed FALSE\n");
        $$ = 0; // FALSE is represented as 0
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
    DO IDENTIFIER EQUALS expression COMMA expression COMMA expression statements ENDDO {
        printf("Parsed DO loop with step: %s = %d, %d, %d\n", $2, $4, $6, $8);
    }
    | DO IDENTIFIER EQUALS expression COMMA expression statements ENDDO {
        printf("Parsed DO loop without step: %s = %d, %d\n", $2, $4, $6);
    }
    ;

subroutine_call:
    CALL IDENTIFIER LPAREN arguments RPAREN {
        printf("Called subroutine: %s\n", $2);
        free_string($2);
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