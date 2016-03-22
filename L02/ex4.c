/*Esercizio 4 -- Lezione 2*/
#include<stdio.h>
#include<limits.h>

int main(void)
{
	//Stampa i valori massimi accettati dalle variabili
	printf("Il range max di char max e':%d\n", CHAR_MAX);
	printf("Il range min di char max e':%d\n", CHAR_MIN);
	printf("Il range max di int max e':%d\n", INT_MAX);
	printf("Il range min di int max e':%d\n", INT_MIN);
	
	//I bit di char sono 2^8 uno di segno
	//I bit di int sono 2^32 uno di segno
	
	return 0;
}