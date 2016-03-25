/*Piccolo programma che gestisce le ordinazioni*/
#include"../lib/IO.h"

int main(void)
{
	char sel;
	double tot=0;
	do
	{
	printf("\n1.Primo - 8.5 euro\n2.Secondo - 10 euro\n3.Contorno - 4 euro");
	printf("\n4.Frutta - 3.5 euro\n5.Conto\n>");
	sel=leggi_car();
	switch(sel)//Selezione del menu
		{
		case '1':
			tot+=8.5;
			printf("\nPrimo servito");
		break;
		case '2':
			tot+=10;
			printf("\nSecondo servito");
		break;
		case '3':
			tot+=4;
			printf("\nContorno servito");
		break;
		case '4':
			tot+=3.5;
			printf("\nFrutta servita");
		break;
		case '5':
			printf("\nIl conto è di %g euro, Grazie!\n",tot);
			return 0;//Esce
		default:
			printf("\nSelezione sbagliata, riprova");
		break;
		}
	}while(1);
}
