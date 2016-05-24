/*Lezione 9 - Esercizio 4*/
#include <stdio.h>

int main(int argc, char *argv[]){
  if(argc==1){
    printf("Non hai inserito il nome del file.\n");
    return -1;
  }

  FILE *pf;
  if((pf=fopen(argv[1],"w"))==NULL){
    printf("Errore nell'apertura del file.\n");
    return -1;
  }

  int c;
  while((c=getchar())!=EOF)
    putc(c,pf);

  fclose(pf);
  return 0;
}
