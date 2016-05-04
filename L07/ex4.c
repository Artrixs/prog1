/*Lezione 7 - Esercizio 4*/
#include <stdio.h>

int main(void){
	int lex(char *s, char *t);
	char s[BUFSIZ],t[BUFSIZ];

	if(fgets(s,BUFSIZ,stdin)==NULL){
		printf("Errore di inserimento.\n");
		return -1;
	}

	if(fgets(t,BUFSIZ,stdin)==NULL){
		printf("Errore di inserimento.\n");
		return -1;
	}

	switch(lex(s,t)){
		case 1:
		printf("La prima stringa e' prima\n");
		break;
		case 0:
		printf("Le stringhe sono uguali\n");
		break;
		case -1:
		printf("La seconda stringa e' prima\n");
		break;
		default:
		printf("Errore di elaborazione \n");
		break;
	}

	return 0;
}

/*Effettua il confronto lessicografico fra s e t
* ritorna 0 se le stringhe sono uguali
+ ritorna 1 se s si trova prima nell'ordine
* ritorna -1 se t si trova seconda nell'ordine
* ritorna 2 se non effettua correttamente */
int lex(char *s,char *t){

	int l;
	for(l=0;s[l]==t[l]&&s[l]!='\0';l++); //s[l] è il primo carattere diveso oppure s[l]=='\0'

	if(s[l]==t[l]) //Vuol dire che anche t[l]=\0
		return 0;

	if(s[l]<t[l]) // il carattere viene prima nell'alfabeto
		return 1;

	if(s[l]>t[l])
		return -1;

	return 2; //Un qualsiasi altro valore se non effettua correttamente
}
