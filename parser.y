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
%token BODY_OPEN BODY_CLOSE

%%

/* orismos grammatikis: arxh -> telos */
program:
    MYHTML_OPEN BODY_OPEN BODY_CLOSE MYHTML_CLOSE
    { 
        printf("\n\n> Επιτυχία: Βρέθηκε MYHTML με κενό BODY!\n"); 
    }
;

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