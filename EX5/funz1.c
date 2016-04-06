#include<stdio.h>
#include"..\lib\IO.h"


int main(void)
{
	int v[5];
	v[0]=1;
	v[1]=6;
	v[2]=0;
	v[3]=-2;
	v[4]=3;
	
	void boublesort(int v[]);
	boublesort(v);
	
	printf("L'array rioridnato e': ");
	for(int i=0;i<5;i++)
		printf("%d,",v[i]);
	printf("\n");
	return 0;
}

void boublesort(int v[])
{
	int bol=1,aux;
	
	while(bol){
		bol=0;
		for(int i=0;i<=3;i++)
			if(v[i]>v[i+1]){
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				bol=1;
			}
	}
	return;
}