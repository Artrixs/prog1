/* Lezione 3 - Esercizio 10*/

#include<stdio.h>
#include<ctype.h>
#include"..\Prog1\IO.h"

int main(void)
{
	char c=1;
	while(1)
	{
	printf("Inserisci un carattere:");
	c=leggi_car();
	if(c==10)//Esce se premi invio
		return 0;
	if(isalpha(c))
		if(isupper(c))
			printf("Il carattere %c e' una lettera maiuscola\n",c);
		else
			printf("Il carattere %c e' una lettera minuscola\n",c);
	else
		printf("Il carattere %c non e' alfabetico\n",c);
	}
}