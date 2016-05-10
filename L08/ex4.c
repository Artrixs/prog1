/*Lezione 8 - Esercizio 5*/
#include <stdio.h>
#include <string.h> //per strchr

int main() {
  int leggi_stringa(char *msg, char *letta);
  char str[1024];
  while(1){
    leggi_stringa(">", str);
    if(str[0]=='\0')
    return 0;
    printf("%s\n",str);
  }
}

int leggi_stringa (char *msg, char *letta){

  printf("%s",msg);

  char *p;

  if(fgets(letta,1024,stdin) != NULL){
    if((p=strchr(letta, '\n'))!=NULL)
      *p = '\0'; //Elimina il ritorno a capo finale
    return 1;
  }
  return 0;
}
