%{
    #include "parser.tab.h" //σύνδεση με το bison για να ξέρει τα tokens
    #include <stdio.h>
%}

/*leme ston lexer na metraei automata tis grammes stin metavliti yylineno */
%option yylineno

%%

"<MYHTML>" { printf("%s", yytext); return MYHTML_OPEN; }  /*printf gia na ektipwsoume kathe grammi tou programmatos pou diavazetai */
"</MYHTML>" { printf("%s", yytext); return MYHTML_CLOSE; } 

"<body>" { printf("%s", yytext); return BODY_OPEN; } 
"</body>" { printf("%s", yytext); return BODY_CLOSE; } 

[ \t\n]    { printf("%s", yytext); } /*typwnw allages grammis kai kena */
.           { printf("%s", yytext); } /*otan vriskw agnwsto xaraktira typwnw */

%%

int yywrap() { return 1; }