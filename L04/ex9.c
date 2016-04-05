/*Lezione 4 - Esercizio 9*/
#include "../lib//IO.h" 

 int main(void)
 {
	int n; //il programma calcola F(n)

do
	{
	n = leggi_int("Inserisci un intero positivo: ");
	} while ( (n<=0) ); 
	
	printf("F(%d)=",n);

	int i; //contatore del ciclo for
	int f_i=1,f_prec=1; //valori iniziali F(2)=F(1)=1.

 for (i=3;i<=n;i++) //il ciclo comincia da i=3; i=1=2
	{
	int aux=f_i; 
	f_i+=f_prec;
	f_prec=aux; 

	}
	printf("%d\n",f_i);

	return 0;
	}