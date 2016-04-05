/*Lezione 4 - Esercizio 11*/
#include "../lib//IO.h" 
#include<stdio.h>

 int main(void)
{
	printf("Il signor Pingolino sta invecchiando questo programma lo aiuta a decidere cosa fare oggi. Rispondi alle domande con S\\N\n");
	//Poniamo le domande
	int a,b,c; //Tengono traccia delle risposte
	printf("Oggi piove o prevedono tempo brutto?\n>>");
	a=leggi_car();
	printf("\nOggi e' un giorno pari come per esempio il 20 di aprile o maggio?\n>>");
	b=leggi_car();
	printf("\nOggi e' Domenica?\n>>");
	c=leggi_car();
	if(((a=='S')||(a=='N'))&&((b=='S')||(b=='N'))&&((c=='S')||(c=='N')))
		printf("Il Signor Pignolino oggi");
	else{
		printf("Un inserimento non era corretto\n");
		return -1;
	}
	
	//Diversi tipi di opzione
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