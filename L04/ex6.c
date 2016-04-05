/*Lezione 4 - Esercizio 6*/
#include<stdio.h>
#include"../lib/IO.h"

int main(void)
{
	int a,b,aux;
	a=leggi_int("Inserisci un intero:");
	b=leggi_int("Inseriscine un altro:");
	printf("Il m.c.d. tra %d e %d e': ",a,b);
	while(b!=0)//Calcolo MCD
	{
		aux=b;
		b=a%b;
		a=aux;
	}
	printf("%d\n",a);
	
	return 0;
}