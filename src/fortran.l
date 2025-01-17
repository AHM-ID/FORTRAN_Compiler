%{
#include "fortran.tab.h"
#include <stdlib.h>
#include <string.h>
%}

%option noyywrap

DIGIT       [0-9]
LETTER      [a-zA-Z]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT}|_)*
INTEGER     {DIGIT}+
REAL        {DIGIT}+"."{DIGIT}*([eE][+-]?{DIGIT}+)?
CHARACTER   "CHARACTER"
LOGICAL     "LOGICAL"
STRING      \"[^\"]*\"
TRUE        "\.TRUE\."
FALSE       "\.FALSE\."
AND         "\.AND\."
OR          "\.OR\."
NOT         "\.NOT\."

%%

"PROGRAM"           { printf("Token: PROGRAM\n"); return PROGRAM; }
"END"               { printf("Token: END\n"); return END; }
"SUBROUTINE"        { printf("Token: SUBROUTINE\n"); return SUBROUTINE; }
"REAL"              { printf("Token: REAL\n"); return REAL; }
"INTEGER"           { printf("Token: INTEGER\n"); return INTEGER; }
"IF"                { printf("Token: IF\n"); return IF; }
"THEN"              { printf("Token: THEN\n"); return THEN; }
"ELSE"              { printf("Token: ELSE\n"); return ELSE; }
"ENDIF"             { printf("Token: ENDIF\n"); return ENDIF; }
"DO"                { printf("Token: DO\n"); return DO; }
"ENDDO"             { printf("Token: ENDDO\n"); return ENDDO; }
"CALL"              { printf("Token: CALL\n"); return CALL; }
"GOTO"              { printf("Token: GOTO\n"); return GOTO; }
"CHARACTER"         { printf("Token: CHARACTER\n"); return CHARACTER; }
"LOGICAL"           { printf("Token: LOGICAL\n"); return LOGICAL; }
"PRINT"             { printf("Token: PRINT\n"); return PRINT; }
"*,"                { printf("Token: ASTERISKCOMMA\n"); return ASTERISKCOMMA; }
{AND}               { printf("Token: AND\n"); return AND; }
{OR}                { printf("Token: OR\n"); return OR; }
{NOT}               { printf("Token: NOT\n"); return NOT; }

">"                 { printf("Token: GT\n"); return GT; }
"<"                 { printf("Token: LT\n"); return LT; }
">="                { printf("Token: GE\n"); return GE; }
"<="                { printf("Token: LE\n"); return LE; }
"=="                { printf("Token: EQ\n"); return EQ; }
"!="                { printf("Token: NE\n"); return NE; }

{TRUE}              { printf("Token: TRUE\n"); return TRUE; }
{FALSE}             { printf("Token: FALSE\n"); return FALSE; }
{STRING}            { printf("Token: STRING (%s)\n", yytext); yylval.str = strdup(yytext); return STRING; }
{IDENTIFIER}        { printf("Token: IDENTIFIER (%s)\n", yytext); yylval.str = strdup(yytext); return IDENTIFIER; }
{INTEGER}           { printf("Token: INTEGER_CONST (%s)\n", yytext); yylval.ival = atoi(yytext); return INTEGER_CONST; }
{REAL}              { printf("Token: REAL_CONST (%s)\n", yytext); yylval.rval = atof(yytext); return REAL_CONST; }

"+"                 { printf("Token: PLUS\n"); return PLUS; }
"-"                 { printf("Token: MINUS\n"); return MINUS; }
"*"                 { printf("Token: MUL\n"); return MUL; }
"/"                 { printf("Token: DIV\n"); return DIV; }
"="                 { printf("Token: EQUALS\n"); return EQUALS; }
","                 { printf("Token: COMMA\n"); return COMMA; }
";"                 { printf("Token: SEMICOLON\n");}
"("                 { printf("Token: LPAREN\n"); return LPAREN; }
")"                 { printf("Token: RPAREN\n"); return RPAREN; }

"::" { printf("Token: DOUBLE_COLON\n"); return DOUBLE_COLON; }

[ \t\n\r]+          { /* Ignore whitespace */ }
"!"[^\n]*           { /* Ignore comments */ }

.                   { printf("Unexpected character: %s\n", yytext); }
%%
