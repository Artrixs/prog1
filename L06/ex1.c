/*Lezione 6 - Esercizio 1*/
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){
  double x,y;
  char sel;

  x=leggi_double("Inserisci i due operandi \n>");
  y=leggi_double(">");
  while(1){
  printf("\n 1. Addizione\n 2. Sottrazione\n 3. Moltiplicazione\n 4. Divisione\n 5. Esci\n>");
  sel = getchar();
  getchar();
  switch(sel){
    case '1':
    printf("%g\n",x+1);
    break;
    case '2':
    printf("%g\n",x-y);
    break;
    case '3':
    printf("%g\n",x*y);
    break;
    case '4':
    if(y==0)
    printf("Non puoi dividere per 0");
    else
    printf("%g",x/y);
    break;
    case '5':
    return 0;
    default:
    printf("Scelta inesistente");
    break;
  }
  }
  return 0;
}
