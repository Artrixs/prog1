/*Lezione 10 - Esercizio 7*/
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
void rot(Vett *, double);
void rotT(Tri *, double);

int main(void){
  Tri T1;
  double a;
  printf("Inserite i vertici del triangolo (formato x;y):\n\tv1: ");
  scanf("%lf;%lf",&T1.v1.x,&T1.v1.y);
  printf("\tv2: ");
  scanf("%lf;%lf",&T1.v2.x,&T1.v2.y);
  printf("\tv3: ");
  scanf("%lf;%lf",&T1.v3.x,&T1.v3.y);

  Tri *pt = &T1;

  printf("L'Area del triangolo di vertici (%g;%g), (%g;%g) e (%g;%g)",T1.v1.x,T1.v1.y,T1.v2.x,T1.v2.y,T1.v3.x,T1.v3.y);
  printf(" e' : %g\n\n",area(pt));
  printf("Inserisci un angolo in radianti per la rotazione: ");
  scanf("%lf",&a);

  rotT(pt,a);

  printf("L'Area del triangolo ruotato di vertici (%g;%g), (%g;%g) e (%g;%g)",T1.v1.x,T1.v1.y,T1.v2.x,T1.v2.y,T1.v3.x,T1.v3.y);
  printf(" e' : %g\n\n",area(pt));

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

void rot(Vett *pv, double a){
  double x,y;
  x = pv->x*cos(a)-pv->y*sin(a);
  y = pv->x*sin(a)+pv->y*cos(a);
  pv->x = x;
  pv->y = y;
  return;
}

void rotT(Tri *pt, double a){
  rot(&(pt->v1),a);
  rot(&(pt->v2),a);
  rot(&(pt->v3),a);
  return;
}
