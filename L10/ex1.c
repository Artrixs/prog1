/*Lezione 10 - Esercizio 1*/
#include <stdio.h>
#include <math.h>

struct punto{
  double x;
  double y;
};

typedef struct punto Vett;

int main(void){
  Vett a,b;

  double dist(Vett,Vett);
  printf("Inserisci il primo vettore nel formato: x;y : ");
  scanf("%lf;%lf",&a.x,&a.y);
  printf("Inserisci il secondo vettore nel formato: x;y : ");
  scanf("%lf;%lf",&b.x,&b.y);
  printf("La distanza euclidea fra (%g;%g) e (%g;%g) e': %g\n",a.x,a.y,b.x,b.y,dist(a,b));
}

double dist(Vett a,Vett b){
  return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
