/* Lezione 3 - Esercizio 4*/

#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	int a,b,inc=0; 
	a=leggi_int("Inserisci un intero:");//Chiede l'inserimento dei due numeri
	b=leggi_int("\nInseriscine un altro:");
	if(((a<=b)||(b<=0))) //Controlla la coerenza dei dati a>=b>0
	{
		printf("\n Non hai inserito due interi (Controlla che a>=b>0)\n");
		return -1;
	}
	printf("Il m.c.d fra %d e %d e':",a,b); 
	while(a!=b)  //Calcola il mcd
	{
		if(a>b)
				a=a-b;
			else
				b=b-a;
		inc++; //Calcola il numero di cicli necessari
	}
	printf("%d\n",a);
	printf("Calcolo completato in %d cicli\n",inc);
	return 0;
}