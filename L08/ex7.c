/*Lezione 8 - Esercizio 7*/
#include <stdio.h>
#include <string.h> //per strchr

int main() {
  int delanoy(int, int);
  int n=0, m=0;
  printf("Inserisci il numero di righe e colonne (m n): ");
  scanf("%d %d",&m,&n);
  while(n<0){
    printf("Il numero deve essere positivo! Reinserisci\n>");
    scanf("%d %d",&m,&n);
  }

  printf("%d\n",delanoy(m,n));
  return 0;
}

int delanoy(int m, int n){
  if(n==0||m==0)
    return 1;
  return delanoy(m-1,n) +delanoy(m,n-1) + delanoy(m-1,n-1);
}
