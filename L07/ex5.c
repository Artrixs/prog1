/*Lezione 7 - Esercizio 5*/
#include <stdio.h>

int main(void){
	void clean(char *s, char *t);
	char s[10241],t[1024];
	
	if(fgets(s,1024,stdin)==NULL){
		printf("Errore di input!\n");
		return -1;
	}
	
	clean(s,t);
	printf("%s",t);
	return 0;
}


void clean(char *s,char *t){
	
	int k=0;
	for(int i=0;s[i]!='\0';i++)
		if(s[i]!=' '){
			t[k]=s[i];
			k++;
		}
	
	t[k]='\0';
	return;
}