/*Lezione 5 - Esercizio 13*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	char v[1024],t[1024];
	int l=0,c=0;
	
	if((leggi_str("Inserisci una stringa: ",v))==0)
	{
		printf("Errore di I/O\n!");
		return -1;
	}//v è stato acquisito
	
	for(l=0;v[l]!='\0';l++); //Lunghezza di v
	
	if((leggi_str("Inserisci una sottostringa: ",t))==0)
	{
		printf("Errore di I/O\n!");
		return -1;
	}//c è stato acquisito
	

	int si=0; //Variabile booleana per il confronto
	
	int i=0;
	for(i=0;i<=l;i++) //Algoritmo trova la sottostrigna
		if(t[c]=='\0') //Verifica fine della sottostringa
			si=1;
		else if(v[i]==t[c]) //è uguale alla posizione di t
			c++;
		else
			c=0;	//Resetta
	
	if(si)
		printf("\nSI\n");
	else
		printf("\nNO\n");
	return 0;
}