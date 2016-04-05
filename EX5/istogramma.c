/*Lezione 5 - Istogramma*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	int isto[10];
	int i,n;
	printf("Inserisci 10 numeri interi\n");
	for(i=0;i<10;i++)
		while((isto[i]=leggi_int(">>"))<0)
			printf("Non puoi inserire valori negativi");
	
	printf("Ora stampo l'istogramma dell'input\n");
	
	for(i=0;i<10;i++){
		for(n=0;n<isto[i];n++)
			printf("*");
		printf("\n");
	}
	return 0;
}