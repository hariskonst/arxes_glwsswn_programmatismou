%{
    #include <stdio.h>
    #include <stdlib.h>

    void yyerror(const char *s);
    int yylex();
    extern FILE *yyin;
    extern int yylineno; //pairnw ton metrhth grammwn apo to flex
%}

/*dhlwnoume ta tokens pou mas stelnei o lexer */
%token MYHTML_OPEN MYHTML_CLOSE
%token HEAD_OPEN HEAD_CLOSE
%token TITLE_OPEN TITLE_CLOSE
%token META
%token BODY_OPEN BODY_CLOSE
%token P_OPEN P_CLOSE
%token DIV_OPEN DIV_CLOSE
%token A_OPEN A_CLOSE
%token IMAGE
%token FORM_OPEN FORM_CLOSE
%token LABEL_OPEN LABEL_CLOSE
%token INPUT
%token STRING

%%

/* BNF GRAMMAR */
program:
    MYHTML_OPEN head_opt BODY_OPEN body_opt BODY_CLOSE MYHTML_CLOSE
    { 
        printf("\n\n> Επιτυχία!\n"); 
    }
;

head_opt:
    head_block
    |
;

head_block:
    HEAD_OPEN TITLE_OPEN STRING TITLE_CLOSE meta_list HEAD_CLOSE
;

meta_list:
    meta_list META
    |
;

body_opt:
    body_opt body_elements
    |
;

body_elements:
    p_block
    |div_block
    |a_block
    |form_block
    |IMAGE
;

p_block:
    P_OPEN p_content P_CLOSE
;

p_content:
    STRING | ;

div_block:
    DIV_OPEN div_opt DIV_CLOSE;

div_opt:
    div_opt | div_elements
;

div_elements:
    p_block
    |a_block
    |form_block
    |IMAGE
;

a_block:
    A_OPEN a_opt A_CLOSE;

a_opt:
    STRING 
    | IMAGE 
    | STRING IMAGE 
    |  
;

form_block:
    FORM_OPEN form_opt FORM_CLOSE;

form_opt:
    form_opt form_elements
    | form_elements
;

form_elements:
    INPUT
    | label_block
;

label_block:
    LABEL_OPEN STRING LABEL_CLOSE;


%%

int main(int argc, char **argv){

    //elegxos an dothike arxeio ws orisma
    if(argc>1){
        //anoigma tou arxeiou pou dwsame
        if(!(yyin = fopen(argv[1], "r"))){
            perror("Error opening file");
            return 1;
        }
    }

    /* to yyparse tha diavasei apo to yyin (to arxeio eisodou)*/
    yyparse();
    return 0;
}

void yyerror(const char *s){
    /*αδειαζουμε τον μπαφερ της πριντφ για να εμφανιστουν ολα τα ταγκς που βρηκαμε μεχρι τωρα σωστα*/
    fflush(stdout);

    /*τυπωνουμε το σφαλμα και τη γραμμη */
    fprintf(stderr,"\n\n***Σφαλμα στην γραμμη %d:%s ***\n", yylineno, s );

    /*διακόπτουμε την αναλυση οπως μας ζηταει η εκφωνηση */
    exit(1);
}