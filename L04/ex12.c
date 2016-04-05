/*Lezione 4 - Esercizio 12*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	int a,b,c;
	printf("Il signor Pignolino e' vecchio, aiutalo a decidere cosa fare oggi.\nRispondi conS\\N\n");
	
	//Brutto tempo?
	printf("Oggi piove o prevedono brutto tempo?\n>>");
	a=leggi_car();
	while((a!='S')&&(a!='N'))
	{
		printf("\nNon hai inserito S\\N. Reinserire\n>>");
		a=leggi_car();
	}
	
	//Giorno pari?
		printf("Oggi e' un giorno pari come il 20 aprile o maggio?\n>>");
	b=leggi_car();
	while((b!='S')&&(b!='N'))
	{
		printf("\nNon hai inserito S\\N. Reinserire\n>>");
		b=leggi_car();
	}
	
		//E' Domenica?
		printf("Oggi e' Domenica??\n>>");
	c=leggi_car();
	while((c!='S')&&(c!='N'))
	{
		printf("\nNon hai inserito S\\N. Reinserire\n>>");
		c=leggi_car();
	}
	
	//Stamnpa delle opzioni.
	printf("\nIl sigor Pignolino oggi");
	if(c=='S'){ // è domenica?
		printf(" e' uscito per recarsi dalla signora Precisina.");
		if(a=='S')// Brutto tempo?
			printf(" Ha portato con se' un ombrello.");
		else
			printf(" Ha portato con se' un parasole.");
	}else
		if(a=='S')//Brutto tempo?
			printf(" non e' uscito.");
		else{
			printf(" e' uscito per recarsi ai giardini pubblici.");
			if(b=='S')//Giorno pari?
			printf(" Ha portato con se' un libro");
			else
			printf(" Ha portato con se' il suo diario");
			}
	printf("\n");
	return 0;
}