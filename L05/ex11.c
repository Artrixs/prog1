/*Lezione 5 - Esercizio 11*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	char v[1024],c;
	int l=0;
	if((leggi_str("Inserisci una stringa: ",v))==0)
	{
		printf("Errore di I/O\n!");
		return -1;
	}//v è stato acquisito
	
	for(l=0;v[l]!='\0';l++); //Lunghezza di v
	
	while(1){
	printf("Inserisce un carattere: ");
	c=leggi_car();
	if(c==10)
		return 0;
	
	double tot=0;
	int i=0;
	for(i=0;i<=l;i++)
		if(v[i]==c)
			tot++;

	double freq=tot/l;
	printf("La frequenza con cui compare %c nella strings e' %g\n",c,freq);
	}
}