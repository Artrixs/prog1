/*Lezione 6 - Esercizio 12 */
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){
void traspose(int n, double (*A)[n], double (*R)[n]);
void visualize(int n, double (*A)[n]);
void sumMatrix(int n, double (*A)[n], double (*B)[n], double (*R)[n]);
void prodMatrix(int n, double (*A)[n], double (*B)[n], double (*R)[n]);
void prodScal(int n, double (*A)[n], double r, double (*R)[n]);

  //Dimensione matrici
  int n = leggi_int("Inserisci la dimensione desiderata: ");

  double A[n][n], B[n][n], C[n][n],r;
  // legge A
  printf("Inserisci i valori della prima matrice per righe\n");
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      A[i][j]=leggi_double(">");

  // legge B
  printf("Inserisci i valori della seconda matrice per righe\n");
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      B[i][j]=leggi_double(">");

  // legge C
    printf("Inserisci i valori della terza matrice per righe\n");
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        C[i][j]=leggi_double(">");

  r=leggi_double("scalare r = ");

  double Z[n][n], X[n][n], Y[n][n];
  //Identità 1 :A(B+C)= AB+AC
  printf("\n\n\n \t A(B+C)= AB+AC\n");
  printf("A(B+C):\n");
  sumMatrix(n,B,C,X);
  prodMatrix(n,A,X,Z);
  visualize(n,Z);

  printf("\n AB+AC:\n");
  prodMatrix(n,A,B,X);
  prodMatrix(n,A,C,Y);
  sumMatrix(n,X,Y,Z);
  visualize(n,Z);

  //Identità 2 : r(AB) = (rA)B
  printf("\n\n\n \t r(AB) = (rA)B");
  printf("r(AB):\n");
  prodMatrix(n,A,B,X);
  prodScal(n,X,r,Z);
  visualize(n,Z);

  printf("\n(rA)B:\n");
  prodScal(n,A,r,X);
  prodMatrix(n,X,B,Z);
  visualize(n,Z);

  //Identità 3: (AB)^t = (B^t)(A^t)
  printf("\n\n\n \t (AB)^t = (B^t)(A^t)\n");
  printf("(AB)^t:\n");
  prodMatrix(n,A,B,X);
  traspose(n,X,Z);
  visualize(n,Z);

  printf("\n(B^t)(A^t):\n");
  traspose(n,B,X);
  traspose(n,A,Y);
  prodMatrix(n,X,Y,Z);
  visualize(n,Z);

  printf("\n");
  return 0;
}

//Traspone la matrice in A e store result in R
void traspose(int n, double (*A)[n], double (*R)[n]){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      R[i][j]=A[j][i];
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

//Effettua la somma A+B e store in R
void sumMatrix(int n, double (*A)[n], double (*B)[n], double (*R)[n]){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      R[i][j]=A[i][j]+B[i][j];
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

//Effettua il prodotto scalare rA e store in R
void prodScal(int n, double (*A)[n], double r, double (*R)[n]){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      R[i][j]=r*A[i][j];
}
