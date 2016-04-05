/*Lezione 5 - Esercizio 5*/
#include<stdio.h>
#include"..\lib\IO.h"
#include<math.h>

int main(void)
{
	int i,n;

	while((n=leggi_int("Di quanti valori vuoi calcolare la media:"))<=0)
		printf("Errore, deve essere un numero positivo\n");

	double num[n],somma=0,media;
	
	printf("Inserisci %d valori reali:\n",n);
	for(i=0;i<n;i++)		//Legge i dati
	{
		num[i]=leggi_double(">>");
		somma+=num[i];
	}
	media=somma/n;
	printf("La media aritmetica e': %g\n", media);
	
	
	//Varianaìza e Scarto
	somma=0;
	for(i=0;i<n;i++)
		somma+=(media-num[i])*(media-num[i]);

	printf("La varianza e': %g\n",somma/n);
	printf("Lo scarto medio e': %g\n",sqrt(somma/n));
	
	return 0;
}