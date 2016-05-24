/*Lezione 9 - Esercizio 2*/
#include <stdio.h>

int main(int argc, char *argv[]){
  if(argc==1){
    printf("Non hai inserito il nome di un file.\n");
    return -1;
  }

  FILE *pf;
  if((pf=fopen(argv[1],"r"))==NULL){
    printf("Errore nell'aprire il file.\n");
    return -1;
  }

  char c;
  while((c=getc(pf))!=EOF)//stampa tutto il file
    putchar(c);

  fclose(pf);
  return 0;
}
