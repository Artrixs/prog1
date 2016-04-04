/* Lezione 3 - Esercizio 9*/

#include<stdio.h>
#include<ctype.h>
#include"..\lib\IO.h"

int main(void)
{
	char c=1;
	printf("Inserisci un carattere:");
	c=leggi_car();
	if(isalpha(c))
		if(isupper(c))
			printf("Il carattere %c e' una lettera maiuscola\n",c);
		else
			printf("Il carattere %c e' una lettera minuscola\n",c);
	else
		printf("Il carattere %c non e' alfabetico\n",c);
}