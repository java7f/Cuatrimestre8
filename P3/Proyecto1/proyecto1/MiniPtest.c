
#include "Tokens.h"
#include <stdio.h>

/**
* Prototipos de función
**/
extern char* yytext;
int yyparse(void);
extern int yydebug;


int main(int argc, char* argv[])
{
    yydebug = 1;
	int isValid = yyparse();

	if(isValid == 0)
    {
	    printf("Programa aceptado\n");
    }
	else
    {
	    printf("Programa rechazado");
    }
	return 0;

}