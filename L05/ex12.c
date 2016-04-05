/*Lezione 5 - Esercizio 12*/
#include<stdio.h>
#include"..\lib\IO.h"
#include<ctype.h>

int main(void)
{
	char v[1024];
	int l=0;
	if((leggi_str("Inserisci una stringa: ",v))==0)
	{
		printf("Errore di I/O\n!");
		return -1;
	}//v è stato acquisito
	
	for(l=0;v[l]!='\0';l++) //Lunghezza di v e porta a maiuscole
		v[l]=toupper(v[l]);
	
	printf("\n%s\n",v);
	
	return 0;
}