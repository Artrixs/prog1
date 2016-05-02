/*Lezione 6 - Esercizio 9*/
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){

  //Leggiamo la matrice:
  int n;
  while((n=leggi_int("Inserisci la dimensione della matrice: "))<=0)
    printf("La dimensione deve essere maggiore di 0\n");

  printf("Ora inserisci i valori della  matrice per riga\n");
  double M[n][n];

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      M[i][j]=leggi_double(">");

double c=leggi_double("Inserisci il valore c: ");

  //Eseguiamo la stampa della matrice prodotto scalare
  printf("il prodotto della matrice per %g e':\n",c);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%g\t",c*M[i][j]);//Eseguiamo il prodotto
    printf("\n");
  }

  return 0;
}
