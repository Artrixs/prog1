/*Lezione 7 - Esercizio 5*/
#include <stdio.h>

int main(void){
	char * clean(char *s, char *t);
	char s[BUFSIZ],t[BUFSIZ];

	if(fgets(s,BUFSIZ,stdin)==NULL){
		printf("Errore di input!\n");
		return -1;
	}

	printf("%s",clean(s,t));
	return 0;
}

/*Elimina da s tutti i caratteri spazio, e salva il risultato in t
*ritorna il puntatore a t*/
char * clean(char *s,char *t){
	int k=0;
	for(int i=0;s[i]!='\0';i++)
		if(s[i]!=' '){
			t[k]=s[i];
			k++;
		}

	t[k]='\0';
	return t;
}
