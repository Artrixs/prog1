/*Lezione 6 - Esercizio 8*/
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){

  //Leggiamo le matrici:
  int n=leggi_int("Inserisci la dimensione delle matrici: ");
  printf("Ora inserisci i valori della prima matrice per riga\n");
  double M[n][n];

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      M[i][j]=leggi_double(">");

  printf("Ora inserisci i valori della seconda matrice per riga\n");
  double N[n][n];

    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        N[i][j]=leggi_double(">");

  //Eseguiamo la stampa e la somma
  printf("La somma di:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%g\t",M[i][j]);
    printf("\n");
  }

  printf("e :\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%g\t",N[i][j]);
    printf("\n");
  }

  printf("e' :\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%g\t",M[i][j]+N[i][j]); //Somma delle matrici
    printf("\n");
  }

  return 0;
}
