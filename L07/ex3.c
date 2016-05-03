/*Lezione 7 - Esercizio 3*/
#include <stdio.h>

int main(void){
	int palindroma(char *s);
	
	char s[1024];
	if(fgets(s,1024,stdin)==NULL){
		printf("Errore di lettura!\n");
		return -1;
	}
	
	if(palindroma(s))
		printf("La stringa e' palindroma.\n");
	else
		printf("La stringa non e' palindroma.\n");
	return 0;
	
}


int palindroma(char *s){
	if(s==NULL){
		printf("Errore nella lettura della stringa\n");
		return 0;
	}
	
	int l;
	for(l=0;s[l]!='\0';l++);
	//Lunghezza effettiva della stringa (esclude il \n)
	if(s[l-1]=='\n')
		l--;
	printf("%d\n",l);
	l--;

	int bool=1;
	for(int i=0;i<l;i++){
		if(s[i]!=s[l-i])
			bool=0;
	}
	
	return bool;
}