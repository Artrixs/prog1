/*Lezione 5 - Esercizio 1*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	double num[5],somma=0;
	int i;
	
	printf("Inserisci 5 valori reali:\n");
	for(i=0;i<5;i++)		//Legge i dati
	{
		num[i]=leggi_double(">>");
		somma+=num[i];
	}
	somma=somma/5;
	printf("La media aritmetica e': %g\n", somma);
	
	return 0;
}