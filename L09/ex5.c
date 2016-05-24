/*lezione 9 - Esercizio 5*/
#include <stdio.h>

int main(int argc, char *argv[]){
  void reverse(char *s);
  if(argc==1){//Controlla il numero di argomenti
    printf("Non hai inserito la stringa da invertire.\n");
    return -1;
  }

  reverse(argv[1]);
  printf("\n");
  return 0;
}

void reverse(char *s){//Effetua l'inversione della stringa
  int l;
  for(l=0; s[l]!='\0';l++); //Calcola la lunghezza
  for(int i=l-1;i>=0;i--)
    printf("%c",s[i]);
    return;
}
