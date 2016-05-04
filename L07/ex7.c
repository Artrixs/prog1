/*Lezione 7 - Esercizio 6*/
#include <stdio.h>

int main(void){
	char * clean(char *s, char *t,char *u);
	char s[BUFSIZ],t[BUFSIZ],u[BUFSIZ];


	printf("Inserisci una stringa:\n");
	if(fgets(s,BUFSIZ,stdin)==NULL){
		printf("Errore di input!\n");
		return -1;
	}

	printf("Inserisci la stringa dei caratteri che vuoi eliminare:\n");
	if(fgets(u,BUFSIZ,stdin)==NULL){
		printf("Errore di input.\n");
		return -1;
	}

	printf("%s",clean(s,t,u));
	return 0;
}

/*Elimina dalla stringa s tutti i caratteri che sono presenti in u,
*salva il risultato in t, ritorna un puntatore a t*/
char * clean(char *s,char *t, char *u){
	int k=0;
	for(k=0;s[k]!='\0';k++)//Effettua una copia di si su t (non posso effettuare la computazione su s)
		t[k]=s[k];
	t[k]='\0';

	for(int j=0;u[j]!='\n';j++){
	k=0;
	for(int i=0;t[i]!='\0';i++)
		if(t[i]!=u[j]){
			t[k]=t[i];
			k++;
		}
	t[k]='\0';
	}

	return t;
}
