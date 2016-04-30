/*Lezione 6 - Esercizio 2*/
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){
char leggiMenu(void);

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
        result=x+y;
        break;
        case '2':
        result=x-y;
        break;
        case '3':
        result=x*y;
        break;
        case '4':
        if(y==0)
          printf("Non posso dividere per 0\n");
        else
          result=x/y;
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
