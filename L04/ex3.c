/*Lezione 4 - Esercizio 3*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	int num=0,somma;
	do{
	 num = leggi_int("Inserisci un numero intero:");
	 if(num<1)
		 printf("Errore non hai inserito un numero intero\n");
	}while(num<1);
	somma=0;
	printf("La somma dei primi %d numeri e':\n", num);
	for(int i=0;i<=num;i++)
		somma+=i*i*i;
	printf("Calcolata a mano %d\n",somma);
	printf("Nel modo inteligente %d\n",num*num*(num+1)*(num+1)/4); //Calcola somma cubi
	
	return 0;
}