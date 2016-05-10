/*Lezione 8 - Esercizio 6*/
#include <stdio.h>
#include <string.h> //per strchr

int main() {
  int catalan(int);
  int n=0;
  printf("Inserisci l'intero fino a cui vuoi calcolare C(n): ");
  scanf("%d",&n);
  while(n<0){
    printf("Il numero deve essere positivo! Reinserisci\n>");
    scanf("%d",&n);
  }

  for(int i=0;i<n;i++)
  printf("%d,",catalan(i));
  printf("%d.\n",catalan(n));
  return 0;
}

int catalan(int n){
  if(n==0)
    return 1;
  return (2*(2*n-1)*catalan(n-1))/(n+1);
}
