/* Lezione 3 - Esercizio 11*/

#include<stdio.h>
#include<ctype.h>
#include"..\Prog1\IO.h"

int main(void)
{
	char c;
	printf("Inserisci un carattere:");
	c=leggi_car();
	c=toupper(c);//Converte il carattere in maiuscola se può
	printf("\n La lettera corrispondente al carattrere(se alfabetico) e': %c\n",c);
	return 0;
}