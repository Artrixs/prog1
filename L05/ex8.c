/*Lezione 5 - Esercizio 8*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	char v[1024];
	int l=0,count=0, somma=0;
	do{
	while((leggi_str("Inserisci una stringa: ",v))==0)
	{
		printf("Errore di I/O\n!");
		return -1;
	}//v è stato acquisito
	
	for(l=0;v[l]!='\0';l++); //Lunghezza di v
	somma+=l;
	count++;
	}while(l!=0);
	
	//Lunghezza media
	double media=somma/(count-1);
	printf("La lunghezza medie delle stringhe e': %g\n",media);

	return 0;
}