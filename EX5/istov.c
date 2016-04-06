/*Lezione 5 - */
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	printf("Questo programma produce un istogramma verticale.\n");
	
	int n,max=0;
	while((n=leggi_int("Inserisci il numero di barre: "))<=0)
		printf("Errore deve essere un valore positivo.\n");
	
	int v[n];// inizializza l'array
	printf("Inserisci i valori\n");
	for(int i=0;i<n;i++)
	{
		while((v[i]=leggi_int(">>"))<0)
			printf("Errore deve essere un valore positivo");
		if(v[i]>max)
			max=v[i]; //Massimo dei valori dell'array
	}

	for(int i=max;i>0;i--)
	{
		for(int j=0;j<n;j++) 	//Scandisce l'array e valuta se la colonna è alta 
			if(v[j]>=i)			//a sufficenza
					printf("*  ");
				else
					printf("   ");
		printf("\n");
	}
	
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%2d ",v[i]);  //intestazione sottostante
 
	printf("\n");
	return 0;
}