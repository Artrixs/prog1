/*Lezione 7 - Esercizio 2*/
#include <stdio.h>

int main(void){
	int equals(char *s, char *t);

	char s[BUFSIZ] , t[BUFSIZ];

	if(fgets(s,BUFSIZ,stdin)==NULL){
		printf("Errore nell'input.\n");
		return -1;
	}

	if(fgets(t,BUFSIZ,stdin)==NULL){
		printf("Errore nell'input.\n");
    return -1;
	}

	if(equals(s,t))
		printf("Le stringhe sono uguali\n");
	else
		printf("Le stringhe sono diverse\n");

	return 0;
}

/*Controlla se s e t sono stringhe uguali (Casesensitive)
* ritorna 1 se è vero, 0 altrimenti */
int equals(char *s, char *t){
	if(s==NULL||t==NULL){  //Effetua comunque il controllo anche se è già avvnuto
		printf("Non entrambe le stringhe sono state inizializzate.\n");
		return 0;
	}

	int i;
	for(i=0;s[i]==t[i]&&s[i]!='\0';i++);

	return (s[i]=='\0'&& t[i]=='\0');
}
