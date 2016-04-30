/*Lezione 6 - Esercizio 3*/
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){
char leggiMenu(void);
double somma(double x, double y);
double diff(double x, double y);
double molti(double x, double y);
double divisi(double x, double y);

double x,y,result;
char sel;
int iniz=0;


  while(1){
    sel=leggiMenu();
    if(sel=='0')
      iniz=1;
    if(sel=='5')
      return 0;
    if(sel!='0'&& iniz==0)
      printf("Devi prima inserire gli operatori\n");
    else{
      switch (sel) {
        case '0':
        x=leggi_double(">");
        y=leggi_double(">");
        case '1':
        result=somma(x,y);
        break;
        case '2':
        result=diff(x,y);
        break;
        case '3':
        result=molti(x,y);
        break;
        case '4':
        if(y==0)
          printf("Non posso dividere per 0\n");
        else
          result=divisi(x,y);
        break;
        default:
        printf("Selezione non valida\n");
        break;
      }
      printf(">>%g\n",result);
    }
  }
  return 0;
}

char leggiMenu(){
  char sel;
  printf(" 0. Inserisci operatori\n 1. Addizione\n 2. Sottrazione\n 3. Moltiplicazione\n 4. Divisone\n 5. Esci\n>");
  sel=getchar();
  getchar();
  return sel;
}

double somma(double x, double y){
  return x+y;
}

double diff(double x,double y){
  return x-y;
}

double molti(double x, double y){
  return x*y;
}

double divisi(double x, double y){
  return x/y;
}
