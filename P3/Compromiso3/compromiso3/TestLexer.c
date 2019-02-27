/**
* Driver code for a simple lexer
*
**/


#include "Tokens.h"
#include <stdio.h>

#ifdef EOF
#undef EOF
#endif

#define EOF 0

/**
* Prototipos de funcion
**/
int yylex (void);
extern char* yytext;
extern tokenCount;

char* getTokenLabel(int tokenCode);


int main(int argc, char* argv[])
{
	int tokenCode = yylex();
	char* tokenName = getTokenLabel(tokenCode);

	while(tokenCode != EOF)
	{

		printf("El lexema detectado '%s' pertence al token %s\n", yytext, tokenName);
		tokenCode = yylex();
		tokenName = getTokenLabel(tokenCode);
	}

	printf("El analizador ha detectado un total de %d lexemas", tokenCount);

	return 0;

}

char* getTokenLabel(int tokenCode)
{
	switch(tokenCode)
	{
		case STUD_ID:
			return "STUD_ID";
			break;

		case PHONE:
			return "PHONE";
			break;

		case EMAIL:
			return "EMAIL";
			break;

		case URL:
			return "URL";
			break;

		default:
			return "UNKW";
			break;
	}



}
