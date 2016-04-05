/*Lezione 4 - Esercizio 7*/
#include<stdio.h>
#include"../lib/IO.h"

int main(void)
{
	int a,b,aux;
	printf("Inserisci due interi per calcolarne l'mcd, attenzione a>=b>0\n");
	a=leggi_int("a:");
	b=leggi_int("b:");
	if((a<b)||(b<=0))
	{
		printf("Non hai inserito i numeri secondo le specifiche\n");
		return -1;
	}
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