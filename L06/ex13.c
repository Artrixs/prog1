/*Lezione 6 - Esercizio 13 */
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){

void visualize(int n, double (*A)[n]);
void prodMatrix(int n, double (*A)[n], double (*B)[n], double (*R)[n]);
void copyMatrix(int n, double (*A)[n], double (*B)[n]);

  //Dimensione matrici
  int n;
  while((n=leggi_int("Questo programma calcola A^m, inserisci la dimA : "))<=0)
    printf("La dimensione deve essere maggiore di 0\n");

  double A[n][n], Z[n][n], Y[n][n];
  int m;
  // legge A
  printf("Inserisci i valori della  matrice per righe\n");
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      A[i][j]=leggi_double(">");// inizializza la matrice A
      if(i==j) //Inizializza Z come matrice identica
        Z[i][j]=1;
      else
        Z[i][j]=0;
      }


  while((m=leggi_int("Inserisci l'esponente: "))<0)
    printf("Attenzione le potenze possono essere solo positive o 0");

  //Calcola A^m
  for(int i=0;i<m;i++){
    prodMatrix(n,Z,A,Y);
    copyMatrix(n,Y,Z);
  }

  printf("\n\n \t A^(%d):\n",m);
  visualize(n,Z);


  printf("\n");
  return 0;
}

//Stampa la  matrice in ingresso
void visualize(int n, double (*A)[n]){
  for (int i=0;i<n;i++){
    printf("|");
    for(int j=0;j<n;j++)
      printf("%g\t",A[i][j]);
    printf("|\n");
  }
}

//Copia i valori di una matrice nell'altra
void copyMatrix(int n, double (*A)[n], double (*B)[n]){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      B[i][j]=A[i][j];
}

//Effetua il prodotto tra matrici e store in R
void prodMatrix(int n, double (*A)[n], double (*B)[n], double (*R)[n]){
  double temp;

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      temp=0;
      for(int k=0;k<n;k++)
        temp+=A[i][k]*B[k][j];
      R[i][j]=temp;
    }
}
