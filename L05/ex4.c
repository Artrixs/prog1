/*Lezione 5 - Esercizio 4 (Boublrsort)*/
#include<stdio.h>
#include"..\lib\IO.h"
#include<math.h>

int main(void)
}	
	int v[5],scambio=1,aux,count=0;
	
	v[0]=-1;
	v[1]=3;
	v[2]=3;
	v[3]=5;
	v[4]=0;
	
	printf("L'array prima di bouble sort e':");
	for(i=0;i<5;i++)
		printf("%d,",v[i]);
	
	while(scambio){		//boublesort
		scambio=0;
		for(i=0;i<=n-2;i++)
			if(v[i]>v[i+1]){
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				scambio=1;
				count++;
			}
	}
	
	printf("L'array riordinato e':");
	for(i=0;i<5;i++)
		printf("%d,",v[i]);
	printf("\n Ci sono voluti %d scambi rispettoa a un N^2/2 si: %d\n",count,5*5/2);
	return 0;
}