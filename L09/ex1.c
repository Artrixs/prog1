/*Lezione 9 - Esercizio 1*/
#include <stdio.h>

int main(void){
  FILE *pf;
  if((pf=fopen("ex1.c","r"))==NULL){
    printf("Errore nell'aprire il file.\n");
    return -1;
  }

  char c;
  while((c=getc(pf))!=EOF)//stampa tutto il file
    putchar(c);

  fclose(pf);
  return 0;
}
