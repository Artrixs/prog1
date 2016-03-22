/* Lezione 3 - Esercizio 2*/

#include<stdio.h>
#include"..\Prog1\IO.h"

int main(void)
{
	int a,b; 
	a=leggi_int("Inserisci un intero:");//Chiede l'inserimento dei due numeri
	b=leggi_int("\nInseriscine un altro:");
	printf("Il m.c.d fra %d e %d e':",a,b); 
	while(a!=b)  //Calcola il mcd
		if(a>b)
			a=a-b;
		else
			b=b-a;
	printf("%d\n",a);
	return 0;
}