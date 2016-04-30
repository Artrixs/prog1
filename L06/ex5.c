/*Lezione 6 - Esercizio 5*/

#include <stdio.h>

int main(void){
  char s[]="Ciao Galileo", t[]= "Sono Galileo";
  char *ps=s,*pt=t,*paux;

  printf("%s \t %s\n", ps,pt);
  paux=ps;
  ps=pt;
  pt=paux;
  printf("%s \t %s\n", ps,pt);

  return 0;
}
