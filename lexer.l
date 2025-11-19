%{
    #include "parser.tab.h" //σύνδεση με το bison για να ξέρει τα tokens
    #include <stdio.h>
%}

/*leme ston lexer na metraei automata tis grammes stin metavliti yylineno */
%option yylineno

%%

"<MYHTML>"  {printf("%s", yytext); return MYHTML_OPEN; }  /*printf gia na ektipwsoume kathe grammi tou programmatos pou diavazetai */
"</MYHTML>" {printf("%s", yytext); return MYHTML_CLOSE; } 

"<head>"  {printf("%s", yytext); return HEAD_OPEN; }
"</head>" {printf("%s", yytext); return HEAD_CLOSE; }

"<title>"  {printf("%s", yytext); return TITLE_OPEN; }
"</title>" {printf("%s", yytext); return TITLE_CLOSE; }

"<meta>" {printf("%s", yytext); return META;}

"<body>" { printf("%s", yytext); return BODY_OPEN; } 
"</body>" { printf("%s", yytext); return BODY_CLOSE; } 

"<p>" {printf("%s", yytext); return P_OPEN; }
"</p>" {printf("%s", yytext); return P_CLOSE;}

"<div>" {printf("%s", yytext); return DIV_OPEN; }
"</div>" {printf("%s", yytext); return DIV_CLOSE;}

"<a>" {printf("%s", yytext); return A_OPEN; }
"</a>" {printf("%s", yytext); return A_CLOSE;}

"<img>" {printf("%s", yytext); return IMAGE;}

"<form>" {printf("%s", yytext); return FORM_OPEN; }
"</form>" {printf("%s", yytext); return FORM_CLOSE;}

"<label>" {printf("%s", yytext); return LABEL_OPEN; }
"</label>" {printf("%s", yytext); return LABEL_CLOSE;}

"<input>" {printf("%s", yytext); return INPUT;}

[a-zA-Z0-9_:;,.!? ]+ { printf("%s", yytext); return STRING; }

[ \t\n]    { printf("%s", yytext); } /*typwnw allages grammis kai kena */
.           { printf("%s", yytext); } /*otan vriskw agnwsto xaraktira typwnw */

%%

int yywrap() { return 1; }