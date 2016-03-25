/*Calcola la distanza nel piano Euclideo tra 2 punti p,q*/
#include <stdio.h>
#include "../lib/IO.h"
#include <math.h>

int main(void)
{
	double px,py,qx,qy,res;
	char sel;
	do
	{
	px=leggi_double("Inserisci l'ascissa del primo punto:");
	py=leggi_double("Inserisci l'ordinata del primo punto:");
	qx=leggi_double("Inerisci l'ascissa del secondo punto:");
	qy=leggi_double("Inserisci l'ordinat del secondo punto:");

	res=sqrt( (px-qx)*(px-qx) + (py-qy)*(py-qy) );

	printf("La distanza fra (%g,%g) e (%g,%g) è :%g\n\n",px,py,qx,qy,res);
	printf("Vuoi continuare (Y/N)\n");
	sel=leggi_car();//Ciclo di uscita
	}while((sel!='N')&&(sel!='n'));

	return 0;
}
