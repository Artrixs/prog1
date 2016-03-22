/* Esercizio 5 -- Lezione 02*/
#include<stdio.h>
#include<float.h>

int main(void)
{
	//Stampa i range di dobule e float, sia con %g sia con %f
	printf("Il max di float e':%g o %f:\n", FLT_MAX, FLT_MAX);
	printf("Il min di float e':%g o %f:\n", FLT_MIN, FLT_MIN);
	printf("Il max di double e':%g o %f:\n", DBL_MAX, DBL_MAX);
	printf("Il min di double e':%g o %f:\n", DBL_MIN, DBL_MIN);
	
	return 0;
}