/*Lezione 8 - Esercizio 2*/
#include <stdio.h>

int main() {
  char car;
  int i;
  double dou;
  float flo;
  while(1){
    printf("\n1. Leggi char\n2. Leggi int\n3.Leggi float\n4. Leggi Double\n5. Esci\n>");
    int c=getchar();
    while(getchar()!='\n'); //Elimina caratteri non standard
    switch(c){
      case '5':
      return 0;
      case '1':
      scanf("%c%*c", &car);
      printf(">>%c\n", car);
      break;
      case '2':
      scanf("%d%*c",&i);
      printf(">>%d\n",i);
      break;
      case '3':
      scanf("%f%*c",&flo);
      printf(">>%g\n",flo);
      break;
      case '4':
      scanf("%lf%*c",&dou);
      printf(">>%g\n",dou);
      break;
      default:
      break;
    }
  }
}
