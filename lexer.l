%{
    #include "parser.tab.h" //σύνδεση με το bison για να ξέρει τα tokens
    #include <stdio.h>
%}

/*leme ston lexer na metraei automata tis grammes stin metavliti yylineno */
%option yylineno

/* orizoume thn katastash TAG */
%x TAG 

%%

"<MYHTML>"  {printf("%s", yytext); return MYHTML_OPEN; }  /*printf gia na ektipwsoume kathe grammi tou programmatos pou diavazetai */
"</MYHTML>" {printf("%s", yytext); return MYHTML_CLOSE; } 

"<head>"  {printf("%s", yytext); return HEAD_OPEN; }
"</head>" {printf("%s", yytext); return HEAD_CLOSE; }

"<title>"  {printf("%s", yytext); return TITLE_OPEN; }
"</title>" {printf("%s", yytext); return TITLE_CLOSE; }

"<body>" { printf("%s", yytext); return BODY_OPEN; } 
"</body>" { printf("%s", yytext); return BODY_CLOSE; } 

"<p" {printf("%s", yytext); BEGIN(TAG); return P_OPEN; } //me to begin tag ksekinaw thn katastash TAG
"</p>" {printf("%s", yytext); return P_CLOSE;}

"<div" {printf("%s", yytext); BEGIN(TAG); return DIV_OPEN; }
"</div>" {printf("%s", yytext); return DIV_CLOSE;}

"<a" {printf("%s", yytext); BEGIN(TAG); return A_OPEN; }
"</a>" {printf("%s", yytext); return A_CLOSE;}

"<form" {printf("%s", yytext); BEGIN(TAG); return FORM_OPEN; }
"</form>" {printf("%s", yytext); return FORM_CLOSE;}

"<label" {printf("%s", yytext); BEGIN(TAG); return LABEL_OPEN; }
"</label>" {printf("%s", yytext); return LABEL_CLOSE;}

"<meta" {printf("%s", yytext); BEGIN(TAG); return META;}
"<img" {printf("%s", yytext); BEGIN(TAG); return IMAGE;}
"<input" {printf("%s", yytext); BEGIN(TAG); return INPUT;} // TAG rules next

<TAG>">" {printf("%s", yytext); BEGIN INITIAL; return MEGALYTERO;} //vrikame > ara teleiwsa me ta attributes

<TAG>"id" {printf("%s", yytext); return ID;}
<TAG>"href" {printf("%s", yytext); return HREF;}
<TAG>"src" {printf("%s", yytext); return SRC;}
<TAG>"alt" {printf("%s", yytext); return ALT;}
<TAG>"style" {printf("%s", yytext); return STYLE;}
<TAG>"type" {printf("%s", yytext); return TYPE;}
<TAG>"value" {printf("%s", yytext); return VALUE;}
<TAG>"for" {printf("%s", yytext); return FOR;}
<TAG>"width" {printf("%s", yytext); return WIDTH;}
<TAG>"height" {printf("%s", yytext); return HEIGHT;}
<TAG>"name" {printf("%s", yytext); return NAME;}
<TAG>"content" {printf("%s", yytext); return CONTENT;}
<TAG>"charset" {printf("%s", yytext); return CHARSET;}

<TAG>"=" {printf("%s", yytext); return ISON;}

<TAG>\"[1-9][0-9]*\" { printf("%s", yytext); return INT; } //1 giati to 0 den einai akrivws thetiko

<TAG>\"[^\"]*\" {printf("%s", yytext); return STRING;} //anagnwrisi alpharithmitikwn

<TAG>[ \t\n]+  { printf("%s", yytext); } //agnwoume kena mesa sto tag

[^<>\n\t\r ]+ { printf("%s", yytext); return TEXT; }
[ \t\n\r]     { printf("%s", yytext); } 
.             { printf("%s", yytext); }


%%

int yywrap() { return 1; }