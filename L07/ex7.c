/*Lezione 7 - Esercizio 6*/
#include <stdio.h>

int main(void){
	void clean(char *s, char *t,char *u);
	char s[10241],t[1024],u[1024];
	
	
	printf("Inserisci una stringa:\n");
	if(fgets(s,1024,stdin)==NULL){
		printf("Errore di input!\n");
		return -1;
	}
	
	printf("Inserisci la stringa dei caratteri che vuoi eliminare:\n");
	if(fgets(u,1024,stdin)==NULL){
		printf("Errore di input.\n");
		return -1;
	}
	
	clean(s,t,u);
	printf("%s",t);
	return 0;
}


void clean(char *s,char *t, char *u){
	
	int k=0;
	for(k=0;s[k]!='\0';k++)
		t[k]=s[k];
	t[k]='\0';

	for(int j=0;u[j]!='\n';j++){
	k=0;
	for(int i=0;s[i]!='\0';i++)
		if(t[i]!=u[j]){
			t[k]=t[i];
			k++;
		}
	t[k]='\0';
	}

	return;
}