/*Esercizio 8 -- Lezione 2*/
#include<stdio.h>
#include"../Prog1/IO.h"

int main(void)
{
	//Metodo senza assegnare variabili
	printf("\n%d", leggi_int("\nInserisci un intero: "));
	
	//Metodo assegnando una variabile
	double num=leggi_double("\nInserisci un numero reale: ");
	printf("\n%g oppure fix %f\n", num, num);
	
	//leggi_int accetta solo interi corretti, mentre leggi_doble in una forma 
	//1652J.S. Bach prende 1652
	
	return 0;
}