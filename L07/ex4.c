/*Lezione 7 - Esercizio 4*/
#include <stdio.h>

int main(void){
	int lex(char *s, char *t);
	char s[1024],t[1024];
	
	if(fgets(s,1024,stdin)==NULL){
		printf("Errore di inserimento.\n");
		return -1;
	}
	
	if(fgets(t,1024,stdin)==NULL){
		printf("Errore di inserimento.\n");
		return 0;
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


int lex(char *s,char *t){
	
	int l;
	for(l=0;s[l]==t[l]&&s[l]!='\0';l++); //l è il primo carattere diveso oppure s[t]=='\0'
	
	if(s[l]==t[l]&&s[l]=='\0')
		return 0;
	
	if(s[l]<t[l]) // il carattere viene prima nell'alfabeto
		return 1;
	
	if(s[l]>t[l])
		return -1;
}