/*Lezione 10 - Esercizio 2*/
#include <stdio.h>
#include <math.h>

typedef struct punto{
  double x;
  double y;
} Vett;

Vett somma(Vett,Vett);
Vett invAdd(Vett);
Vett sott(Vett,Vett);
Vett pscal(Vett,double);
double pint(Vett,Vett);

int main(void){
  Vett a,b;
  double scal;

  printf("Iserisci un vettore nel formato x;y: ");
  scanf("%lf;%lf",&a.x,&a.y);
  printf("Inserisci un altro vettore nel formato x;y: ");
  scanf("%lf;%lf",&b.x,&b.y);
  printf("Inserisci uno scalare: ");
  scanf("%lf",&scal);

  printf("\n\tLa somma dei due vettori e' (%g ; %g)\n",somma(a,b).x,somma(a,b).y);
  printf("\tL'inverso additivo del primo vettore e' (%g ; %g)\n",invAdd(a).x,invAdd(a).y);
  printf("\tLa differenza dei due vettori e' (%g ; %g)\n",sott(a,b).x,sott(a,b).y);
  printf("\tIl prodotto scalare del primo vettore con %g e' (%g ; %g)\n", scal,pscal(a,scal).x,pscal(a,scal).y);
  printf("\tIl prodotto interno dei due vettori e': %g \n\n",pint(a,b));

  return 0;
}

Vett somma(Vett s, Vett t){
  Vett res;
  res.x=s.x+t.x;
  res.y=s.y+t.y;
  return res;
}

Vett invAdd(Vett s){
  Vett res;
  res.x=-s.x;
  res.y=-s.y;
  return res;
}

Vett sott(Vett s, Vett t){
  Vett res;
  res.x=s.x+invAdd(t).x;
  res.y=s.y+invAdd(t).y;
  return res;
}

Vett pscal(Vett s, double t){
  Vett res;
  res.x = s.x*t;
  res.y = s.y*t;
  return res;
}

double pint(Vett s, Vett t){
  return (s.x*t.x)+(s.y*t.y);
}
