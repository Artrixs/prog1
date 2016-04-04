/* Lezione 3 - Esercizio 12*/

#include<stdio.h>
#include<ctype.h>
#include"..\lib\IO.h"

int main(void)
{
	char c;
	int sel;
	printf("Inserisci un carattere:");
	c=leggi_car();
	sel=leggi_int("\n Conversione in maiuscola o minuscola (1=maiuscola altro numero=minuscola)");
	if(sel==1)
	c=toupper(c);//Converte il carattere in maiuscola se può
	else
	c=tolower(c); //Converte in minuscola se può
	printf("\n La lettera dopo la conversione e': %c\n",c);
	return 0;
}