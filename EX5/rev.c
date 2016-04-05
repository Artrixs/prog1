/*Lezione 5 - rev.c*/
#include<stdio.h>
#include"..\lib\IO.h"

int main(void)
{
	char v[256];
	if((leggi_str("Scrivi qualche cosa: ",v))==0) //Memorizza v
	{
		printf("Errore I/O\n");
		return -1;
	}
	
	int l=0;
	
	for(l=0;v[l]!='\0';l++); //Conta quanto è lunga la stringa
	
	printf("La tua stringa e' composta da %d caratteri",l);
	
	int i;
	for(i=0;i<=l;i++)
		printf("%c",v[l-i]);
	
	printf("\n");
	return 0;
}