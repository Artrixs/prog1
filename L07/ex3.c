/*Lezione 7 - Esercizio 3*/
#include <stdio.h>

int main(void){
	int palindroma(char *s);

	char s[BUFSIZ];
	if(fgets(s,BUFSIZ,stdin)==NULL){
		printf("Errore di lettura!\n");
		return -1;
	}

	if(palindroma(s))
		printf("La stringa e' palindroma.\n");
	else
		printf("La stringa non e' palindroma.\n");
	return 0;

}

/* Controlla se s è palindroma
* ritorna 1 se palinroma, altrimenti 0*/
int palindroma(char *s){
	if(s==NULL){ //Controlla comunque
		printf("Errore nella lettura della stringa.\n");
		return 0;
	}

	int l;
	for(l=0;s[l]!='\n';l++); //s[l]=\n
	l--; // così s[l]= ultimo carattere effettivo

	int bool=1;
	for(int i=0;i<l;i++){
		if(s[i]!=s[l-i])
			bool=0;
	}

	return bool;
}
