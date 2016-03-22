/*Esercizio 6 -- Lezione 02*/

#include<stdio.h>
#include<limits.h>

int main(void)
{
	int num=INT_MAX;
	//Gestione dell overflow con int
	printf("Il range max di int e':%d\n",num);
	printf("sommo a num 1:%d\n",num+1);
	//ritorna al min e riparte da li (gruppo finto)
	
	return 0;
}