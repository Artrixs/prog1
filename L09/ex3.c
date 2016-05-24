/*Lezione 9 - Esercizio 3*/
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]){
  if(argc<2){
    printf("Non hai inserito entrambi i nomi dei file.\n");
    return -1;
  }

  FILE *pf, *pt;
  if((pf=fopen(argv[1],"r"))==NULL){
    printf("Errore nell'aprire: %s\n",argv[1]);
    return -1;
  }

  if((pt=fopen(argv[2],"r"))!=NULL){
    printf("Il file %s e' gia' esistente vuoi sovrascriverlo? (S/N)?\n",argv[2]);
    int sel;
    sel=getchar();
    while(getchar()!='\n');
    sel=tolower(sel);
    if(sel=='n')
      return 0;
  }

  fclose(pt);
  if((pt=fopen(argv[2],"w"))==NULL){
    printf("Il file %s non esiste.\n",argv[2]);
    return -1;
  }
  char c;
  while((c=getc(pf))!=EOF)//stampa tutto il file
    putc(c,pt);

  fclose(pf);
  fclose(pt);
  return 0;
}
