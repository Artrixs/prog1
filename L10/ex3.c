/*Lezione 10 - Esercizio 3*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct punto{
  double x;
  double y;
} Vett;

int linind(Vett, Vett);

int main(int argc, char + argv[]){
  if(argc!=5){
    printf("Non hai inserito il giusto numero di coordinate.\n");
    return -1;
  }

  Vett a,b;
  a.x=atof(argv[1]);
  a.y=atof(argv[2]);
  b.x=atof(argv[3]);
  b.y=atof(argv[4]);

  if(linind(a,b)==1)
    printf("Linearmente indipendenti.\n");
  else
    printf("Linearmente dipendenti.\n");

  return 0;
}

int linind(Vett s, Vett t){
  if((s.x*t.y-t.x*s.y)==0)
    return 0;
  else
    return 1;
}
