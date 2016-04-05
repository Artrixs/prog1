/*Lezione 5 - Esercizio 9*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	char v[1024];
	int l=0,max=0;
	do{
	if((leggi_str("Inserisci una stringa: ",v))==0)
	{
		printf("Errore di I/O\n!");
		return -1;
	}//v è stato acquisito
	
	for(l=0;v[l]!='\0';l++); //Lunghezza di v
	
	if(l>max) //Store max
		max=l;
	}while(l!=0);
	
	printf("La lunghezza massima delle stringhe e': %d\n",max);

	return 0;
}