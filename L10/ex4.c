/*Lezione 10 - Esercizio 4*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct punto{
  double x;
  double y;
} Vett;



int linind(Vett, Vett);
int affind(Vett,Vett,Vett);

int main(int argc, char * argv[]){
  if(argc!=7){
    printf("Non hai inserito il giusto numero di coordinate.\n");
    return -1;
  }

  Vett a,b,c;
  a.x=atof(argv[1]);
  a.y=atof(argv[2]);
  b.x=atof(argv[3]);
  b.y=atof(argv[4]);
  c.x=atof(argv[5]);
  c.y=atof(argv[6]);

  if(affind(a,b,c)==1)
    printf("Affinemente indipendenti.\n");
  else
    printf("Affinemente dipendenti.\n");

  return 0;
}

int affind(Vett u, Vett v, Vett z){
  return linind(u,v)*linind(u,z);
}

int linind(Vett s, Vett t){
  if((s.x*t.y-t.x*s.y)==0)
    return 0;
  else
    return 1;
}
