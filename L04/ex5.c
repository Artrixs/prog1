/*Lezione 4 - Esercizio 5*/
#include<stdio.h>
#include"../lib/IO.h"

int main(void)
{
	int a,b,aux;
	a=100;
	b=46;
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