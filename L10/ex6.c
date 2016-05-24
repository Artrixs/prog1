/*Lezione 10 - Esercizio 6*/
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

double lenght(Vett,Vett);
double area(Tri *);

int main(void){
  Tri T1;
  printf("Inserite i vertici del triangolo (formato x;y):\n\tv1: ");
  scanf("%lf;%lf",&T1.v1.x,&T1.v1.y);
  printf("\tv2: ");
  scanf("%lf;%lf",&T1.v2.x,&T1.v2.y);
  printf("\tv3: ");
  scanf("%lf;%lf",&T1.v3.x,&T1.v3.y);

  Tri *pt = &T1;

  printf("L'Area del triangolo di e': %g\n",area(pt));

  return 0;
}

double lenght(Vett u, Vett v){
  return sqrt((u.x-v.x)*(u.x-v.x)+(u.y-v.y)*(u.y-v.y));
}

double area(Tri *pt){
  double semiPi;
  semiPi=lenght(pt->v1,pt->v2)+lenght(pt->v2,pt->v3)+lenght(pt->v3,pt->v1);
  semiPi=semiPi/2;
  return sqrt(semiPi*(semiPi-lenght(pt->v1,pt->v2))*(semiPi-lenght(pt->v2,pt->v3))*(semiPi-lenght(pt->v3,pt->v1)));
}
