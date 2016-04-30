/*Lezione 6 - Esercizio 7*/
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){

  //Leggiamo la matrice:
  int n=leggi_int("Inserisci la dimensione della matrice: ");
  printf("Ora inserisci i valori della matrice per riga\n");
  double M[n][n];

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      M[i][j]=leggi_double(">");

  printf("La matrice inserita è:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%g\t",M[i][j]);
    printf("\n");
  }

  printf("La matrice trasposta è:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%g\t",M[j][i]); //Scambiando gli indici matrice trasposta
    printf("\n");
  }

  return 0;
}
