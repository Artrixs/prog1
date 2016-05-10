/*Lezione 8 - Esercizio 9*/
#include <stdio.h>
#include <string.h> //per strchr

int maschio(int);
int femmina(int);

int main() {
  int n=0;
  printf("Inserisci il numero di cui vuoi calcolare hofstader: ");
  scanf("%d",&n);
  while(n<0){
    printf("Il numero deve essere positivo! Reinserisci\n>");
    scanf("%d",&n);
  }

  printf("n\tF(n)\tM(n)\n");
  for(int i=0;i<=n;i++)
  printf("%d\t%d\t%d\n",i,femmina(i),maschio(i));
  return 0;
}

int femmina(int n){
  if(n==0)
    return 1;
  return n-maschio(femmina(n-1));
}

int maschio(int n){
  if(n==0)
    return 0;
  return n-femmina(maschio(n-1));
}
