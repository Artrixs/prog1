/* Lezione 3 - Esercizio 6*/

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
		if(n2==0)//Gestisce divisione 0
		{
			printf("Non so dividere per 0\n");
			return -1;
		}else
		n1=n1/n2;
	else
	{
		printf("Errore nell'inserimento dell'operazione\n");//Gestisce errori inserimento
		return -1;
	}
	printf("\nIl risultato e': %g\n", n1);
	return 0;
}