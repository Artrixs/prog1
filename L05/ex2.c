/*Lezione 5 - Esercizio 2*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	int i,n;

	while((n=leggi_int("Di quanti valori vuoi calcolare la media:"))<=0)
		printf("Errore, deve essere un numero positivo\n");

	double num[n],somma=0;
	
	printf("Inserisci %d valori reali:\n",n);
	for(i=0;i<n;i++)		//Legge i dati
	{
		num[i]=leggi_double(">>");
		somma+=num[i];
	}
	somma=somma/n;
	printf("La media aritmetica e': %g\n", somma);
	
	return 0;
}