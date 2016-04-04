/* Esercizio  -- Lezione 02*/
#include<stdio.h>
#include "../lib/IO.h"

int main(void)
{
	double n1,n2;
	//Richiedi l'immisione di due numeri (double.)
	n1=leggi_double("\nInserisci un numero : ");
	n2=leggi_double("\nInserisci un altro numero : ");
	
	//esegui tutte le operazioni
	printf("\n La somma e': %g",n1+n2);
	printf("\n La differenza e': %g",n1-n2);
	printf("\n Il prodotto e': %g",n1*n2);
	//Gestisce l'immisione dello 0(se no va in crash il programma)
	if(n2==0){
		printf("\n Non esiste la divisione per 0\n");
	}else{
		printf("\n La divisione e': %g\n",n1/n2);
	}
	return 0;
	
}