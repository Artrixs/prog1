/*Lezione 8 - Esercizio 1*/
#include <stdio.h>

int main() {
  int c;
  while(1){
  while((c=getchar())!='\n')
    if(c == EOF ){
      printf("Programma terminato con EOF\n");
      return 0;
    }
    else
      printf("%c",c);
    printf("%c",c);//stampa il ritorno a capo
  }
}
