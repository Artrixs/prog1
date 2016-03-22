/*Esercizio 7 -- Lezione 02*/
#include<stdio.h>
#include<float.h>

int main(void)
{
	//La gestione del float con il printf non li assegna un numero di bit finiti
	float num=FLT_MIN;
	printf("Il range minimo di float e':%g\n",num);
	printf("Diviso per 1E20:%g\n",num/1e20);
	//Assegna precisamente bit
	num=num/1e20;
	printf("Diviso per 1E20:%g\n",num);
	
	return 0;
}