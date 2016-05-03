/*Lezione 7 - Esercizio 2*/
#include <stdio.h>

int main(void){
	int equals(char *s, char *t);
	
	char s[1024] , t[1024];
	
	if(fgets(s,1024,stdin)==NULL){
	}
	fgets(t,1024,stdin);
	
	if(equals(s,t))
		printf("Le stringhe sono uguali\n");
	else
		printf("Le stringhe sono diverse\n");
	
	return 0;
}
int equals(char *s, char *t){
	if(s==NULL||t==NULL){
		printf("Non entrambe le stringhe sono state inizializzate");
		return 0;
	}
	
	int i;
	for(i=0;s[i]==t[i]&&s[i]!='\0';i++);
	
	return (s[i]=='\0'&& t[i]=='\0');
}