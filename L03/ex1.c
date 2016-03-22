/* Lezione 3 - Esercizio 1*/

#include<stdio.h>

int main(void)
{
	int a=214, b=138; 
	printf("Il m.c.d. di %d e %d e':",a,b); //Calcola il mcd fra due numeri
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	printf("%d\n",a);
	return 0;
	/*Il programma esegue lo stesso corettamente anche se b>a,
	pero se a,b <= 0 va in loop(come dovrebbe essere)*/
}