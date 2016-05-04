/*Lezione 7 - Esercizio 6*/
#include <stdio.h>

int main(void){
	char * clean(char *s, char *t,char c);
	char s[BUFSIZ],t[BUFSIZ];


	printf("Inserisci una stringa:\n");
	if(fgets(s,BUFSIZ,stdin)==NULL){
		printf("Errore di input!\n");
		return -1;
	}

	printf("Inserisci un carattere da eliminare: ");
	int c=getchar();
	while(getchar()!='\n');

	printf("%s",clean(s,t,c));
	return 0;
}

/*Elimina da s tutti i caratteri di tipo c, e salva il risultato in c
*ritorna il puntatore a t*/
char * clean(char *s,char *t, char c){
	int k=0;
	for(int i=0;s[i]!='\0';i++)
		if(s[i]!=c){
			t[k]=s[i];
			k++;
		}

	t[k]='\0';
	return t;
}
