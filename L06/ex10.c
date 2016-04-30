/*Lezione 6 - Esercizio 10*/
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){
  void prodMatrici(int n, double (*A)[n],double (*B)[n],double (*C)[n]);

  //Leggiamo la matrice:
  int n=leggi_int("Inserisci la dimensione della matrice: ");
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

  double R[n][n];
  prodMatrici(n,M,N,R);

  printf("Il risultato del prodotto e':\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%g\t",R[i][j]);
    printf("\n");
    }

  return 0;
}

//Calcola il prodotto tra A e B e lo stampa in C
void prodMatrici( int n, double (*a)[n], double (*b)[n], double (*c)[n]){
  double temp;

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      temp=0;
      for(int k=0;k<n;k++)
        temp+=a[i][k]*b[k][j];
      c[i][j]=temp;
    }
}
