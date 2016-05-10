/*Lezione 8 - Esercizio 5*/
#include <stdio.h>
#include <string.h> //per strchr

int main() {
  int catalan(int);
  int n=0;
  printf("Inserisci l'intero di cui vuoi calcolare il numero di catalan: ");
  scanf("%d",&n);
  while(n<0){
    printf("Il numero deve essere positivo! Reinserisci\n>");
    scanf("%d",&n);
  }

  printf("C(%d) = %d\n",n,catalan(n));
  return 0;
}

int catalan(int n){
  if(n==0)
    return 1;
  return (2*(2*n-1)*catalan(n-1))/(n+1);
}
