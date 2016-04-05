/*Lezione 5 - Esercizio 5*/
#include<stdio.h>
#include"..\lib\IO.h"
#include<math.h>

int main(void)
{
	int i,n,bol=1;

	while((n=leggi_int("Quanti valori vuoi computare:"))<=0)
		printf("Errore, deve essere un numero positivo\n");

	double num[n],somma=0,media,aux;
	
	printf("Inserisci %d valori reali:\n",n);
	for(i=0;i<n;i++)		//Legge i dati
	{
		num[i]=leggi_double(">>");
		somma+=num[i];
	}
	media=somma/n;
	printf("La media aritmetica e': %g\n", media);
	
	//BoubleSort
	while(bol){
		bol=0;
		for(i=0;i<=n-2;i++)
			if(num[i]>num[i+1]){
				aux=num[i];
				num[i]=num[i+1];
				num[i+1]=aux;
				bol=1;
			}
	}
	
	//Mediana
	printf("La mediana:");
	if(n%2==0)
		printf("%g\n",(num[n/2]+num[(n/2)-1])/2);
	else
		printf("%g\n",num[(n-1)/2]);
	
	//Varianaìza e Scarto
	somma=0;
	for(i=0;i<n;i++)
		somma+=(media-num[i])*(media-num[i]);

	printf("La varianza e': %g\n",somma/n);
	printf("Lo scarto medio e': %g\n",sqrt(somma/n));
	
	return 0;
}