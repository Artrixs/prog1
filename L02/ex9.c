/* Esercizio 9 -- Lezione 02*/
#include<stdio.h>
#include "../lib/IO.h"

int main(void)
{
	int n1,n2;
	//Richiedi l'immisione di due numeri (int)
	n1=leggi_int("\nInserisci un numero:");
	n2=leggi_int("\nInserisci un altro numero:");

	//esegui tutte le operazioni
	printf("\n La somma e': %d",n1+n2);
	printf("\n La differenza e': %d",n1-n2);
	printf("\n Il prodotto e': %d",n1*n2);
	//Gestisce l'immisione dello 0(se no va in crash il programma)
	if(n2==0){
		printf("\n Non esiste la divisione per 0, ne il modulo\n");
	}else{
		printf("\n La divisione intera e': %d",n1/n2);
		printf("\n Il modulo e': %d\n",n1%n2);
	}
	return 0;
	
}