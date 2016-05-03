/*Lezione 7 - Esercizio 2*/
#include <stdio.h>

int main(void){
	void reverse(char *s, char *t);
	
	char s[1024], t[1024];
	
	if(fgets(s,1024,stdin)==NULL){
		printf("Errore in lettura\n");
		return -1;
	}	
	
	reverse(s,t);
	
	printf("La stringa al contrario e':\n%s",t);
}

void reverse(char *s, char *t){
	int l;
	for(l=0;s[l]!='\0';l++);
	
	for(int i=0;i<l;i++){
		t[i]=s[l-i-2];
	}
	t[l-1]='\n'; //Termina la stringa in con a capo e termiantore standard;
	t[l]='\0';
	return;
}