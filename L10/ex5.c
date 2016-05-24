/*Lezione 10 - Esercizio 5*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct punto{
  double x;
  double y;
} Vett;

typedef struct triangolo{
  Vett v1;
  Vett v2;
  Vett v3;
} Tri;

int linind(Vett, Vett);
int affind(Vett,Vett,Vett);
int degenere(Tri *);

int main(void){
  Tri T1;
  printf("Inserite i vertici del triangolo (formato x;y):\n\tv1: ");
  scanf("%lf;%lf",&T1.v1.x,&T1.v1.y);
  printf("\tv2: ");
  scanf("%lf;%lf",&T1.v2.x,&T1.v2.y);
  printf("\tv3: ");
  scanf("%lf;%lf",&T1.v3.x,&T1.v3.y);

  Tri *pt = &T1;

  if(degenere(pt)==1)
    printf("Il triangolo e' degenere.\n");
  else
    printf("Il triangolo non e' degenere.\n");

  return 0;
}

int degenere(Tri * pt){
  if(affind(pt->v1,pt->v2,pt->v3)==1)
    return 0;
  else
    return 1;
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
