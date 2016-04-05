/*Lezione 4 - Esercizio 4*/
#include<stdio.h>
#include<math.h>
#include"..\lib\IO.h"

int main(void)
{
	double a,b,c,s1,s2,delta;
	printf("Questo programma calcola le radici dell'equazione a cofficenti reali ax^2+bx+c=0\n");
	do{
	 a = leggi_double("Inserisci il coefficente a:");
	 if(a==0)
		 printf("Se a=0 non e' un equazioine di secondo grado!\n");
	}while(a==0);
	b=leggi_double("Inserisci il coefficente b:");
	c=leggi_double("Inserisci il coefficente c:");//Memorizza i valori
	delta=b*b-4*a*c;//Calcola delta
	printf("Il delta dell'equazione %gx^2+%gx+%g=0 e' : %g\n",a,b,c,delta);
	if(delta>=0)
	{
		s1=(-b-sqrt(delta))/2*a;//Calcola le soluzione
		s2=(-b+sqrt(delta))/2*a;
		printf("Le soluzioni di questa equazione sono: x1=%g e x2=%g\n",s1,s2);
	}else
		printf("L'equazione quindi non ha soluzioni reali\n");
	
	return 0;
}