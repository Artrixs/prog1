/*Lezione 6 - Esercizio 6*/
#include <stdio.h>

int main(void){
  int ai[]={0,1},*pi;
  double ad[]={0.1,0.2},*pd;
  char ac[]="pippo",*pc;

  //Assegno i puntatori
  pi=ai;
  pd=ad;
  pc=ac;

  printf("pi=%d, pd=%g, pc=%c\n",*pi,*pd,*pc);
  //Stampo i valori dei puntatori:
  printf("pi=%p, pd=%p, pc=%p\n",pi,pd,pc);
  //Incremento i puntatori di uno;
  pi+=2;
  pd+=2;
  pc+=2;
  printf("pi=%d, pd=%g, pc=%c\n",*pi,*pd,*pc);
  printf("pi=%p, pd=%p, pc=%p\n",pi,pd,pc);

  /*Sull array dei char è sufficente una cella di memorai di 8 bit per memorizzare
  *il tipo char quindi aumenta di 1 anche pc, invece i tipo int e double per ogni
  *elementeo dell'array devono essere allocate più celle di memoria (numero bit maggiore),
  *quindi si avra che per gli int ci sarà un aumento di 4 esadecimale dell'indirizzo
  *mentre per i double di 8 esadecimale dell'indirizzo*/

  return 0;
}
