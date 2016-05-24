/*lezione 9 - Esercizio 6*/
#include <stdio.h>

int main(int argc, char *argv[]){
  void clean(char *s, char *t);
  if(argc!=3){//Controlla il numero di argomenti
    printf("Non hai inserito 2 stringhe\n");
    return -1;
  }

  clean(argv[1],argv[2]);
  printf("\n");
  return 0;
}

void clean(char *s,char *t){//pulisce la striga da tutti i caratteri in t
  for(int l=0;t[l]!='\0';t++){
    for(int k=0;s[k]!='\0';k++)
      if(s[k]==t[l])
        s[k]='\n';
  }

  for(int i=0;s[i]!='\0';i++)
    if(s[i]!='\n')
      putchar(s[i]);

  return;
}
