/*Lezione 7 - Esercizio 6*/
#include <stdio.h>

int main(void){
	void clean(char *s, char *t,char c);
	char s[10241],t[1024];
	
	
	printf("Inserisci una stringa:\n");
	if(fgets(s,1024,stdin)==NULL){
		printf("Errore di input!\n");
		return -1;
	}
	
	printf("Inserisci un carattere da eliminare: ");
	int c=getchar();
	while(getchar()!='\n');
	
	clean(s,t,c);
	printf("%s",t);
	return 0;
}


void clean(char *s,char *t, char c){
	
	int k=0;
	for(int i=0;s[i]!='\0';i++)
		if(s[i]!=c){
			t[k]=s[i];
			k++;
		}
	
	t[k]='\0';
	return;
}