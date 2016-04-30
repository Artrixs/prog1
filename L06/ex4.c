/*Lezione 6 - Esercizio 4*/
#include <stdio.h>

int main(void){
  int x,y,*px=&x,*py=&y,*paux;

  *px=1;
  *py=0;
  printf("x=%d, y=%d\n",*px,*py);
  paux=px;
  px=py;
  py=paux;
  printf("x=%d, y=%d\n",*px,*py);
  return 0;
}
