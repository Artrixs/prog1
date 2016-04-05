/*Lezione 5 - Esercizio 4 (Boublrsort)*/
#include<stdio.h>
#include"..\lib\IO.h"
#include<math.h>

int main(void)
{
	int n,aux,i,scambio=1,count=0;

	while((n=leggi_int("Quanti numeri devi riordinare:"))<=0)
		printf("Errore, valore negativo. Reinserire");
	
	printf("Inserisci i numeri:\n");
	
	int v[n];
	
	for(i=0;i<n;i++)
		v[i]=leggi_double(">>");
	
	printf("L'array prima di bouble sort e':");
	for(i=0;i<n;i++)
		printf("%d,",v[i]);
	
	while(scambio){		//boublesort
		scambio=0;
		for(i=0;i<=n-2;i++)
			if(v[i]>v[i+1]){
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				scambio=1;
				count++;
			}
	}
	
	printf("L'array riordinato e':");
	for(i=0;i<n;i++)
		printf("%d,",v[i]);
	printf("\n Ci sono voluti %d scambi rispettoa a un N^2/2 si: %d\n",count,n*n/2);
	return 0;
}