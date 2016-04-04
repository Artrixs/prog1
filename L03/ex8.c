/* Lezione 3 - Esercizio 8*/

#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	double n1,n2; 
	int ope;
	while(1)
	{
	n1=leggi_double("Inserisci un numero reale:");//Chiede l'inserimento dei due numeri
	n2=leggi_double("\nInseriscine un altro:");
	ope=leggi_int("Scegli l'operazione\n1.Somma\n2.Sottrazione\n3.Moltiplicazione\n4.Divisione\n5.Esci\n");//Operazione
	switch(ope)// Gestisce la selezione
	{
		case 1:
			n1=n1+n2;
			printf("Il risultato e': %g\n\n",n1);
			break;
		case 2:
			n1=n1-n2;
			printf("Il risultato e': %g\n\n",n1);
			break;
		case 3:
			n1=n1*n2;
			printf("Il risultato e': %g\n\n",n1);
			break;
		case 4:
			if(n2!=0)
			{
				n1=n1/n2;
				printf("Il risultato e': %g\n\n",n1);
			}
			else
				printf("Non riesco a dividere per 0\n\n");
			break;
		case 5:
			return 0; //Esce
		default: //Gestisce l'errore di selezione
			printf("Errore nell'inserimento dell'operazione\n\n");
	}
	}
}