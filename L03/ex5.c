/* Lezione 3 - Esercizio 5*/

#include<stdio.h>
#include"..\Prog1\IO.h"

int main(void)
{
	double n1,n2; 
	int ope;
	n1=leggi_double("Inserisci un numero reale:");//Chiede l'inserimento dei due numeri
	n2=leggi_double("\nInseriscine un altro:");
	ope=leggi_int("Scegli l'operazione\n1.Somma\n2.Sottrazione\n3.Moltiplicazione\n4.Divisione\n");//Operazione
	if(ope==1)
		n1=n1+n2;
	else if(ope==2)
		n1=n1-n2;
	else if(ope==3)
		n1=n1*n2;
	else if(ope==4)
		n1=n1/n2;
	
	printf("\nIl risultato e': %g\n", n1);
	return 0;
}