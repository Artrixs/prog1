/*Lezione 7 - Esercizio 2*/
#include <stdio.h>

int main(void){
	void reverse(char *s, char *t);

	char s[BUFSIZ], t[BUFSIZ];

	if(fgets(s,BUFSIZ,stdin)==NULL){
		printf("Errore in input.\n");
		return -1;
	}

	reverse(s,t);

	printf("La stringa al contrario e':\n%s",t);

	return 0;
}

//Inverte la stringa e passa il salva il risultato in t.
void reverse(char *s, char *t){
	int l;
	for(l=0;s[l]!='\0';l++); // quindi s[l]=\0 e s[l-1]=\n

	for(int i=0;i<l;i++){
		t[i]=s[l-i-2];
	}
	t[l-1]='\n'; //Termina la stringa in con a capo e termiantore standard;
	t[l]='\0';
	return;
}
