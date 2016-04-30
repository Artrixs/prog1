/*Lezione 6 - Esercizio 11*/
#include <stdio.h>
#include "..\lib\IO.h"

int main(void){
  void prodMatrix(int n, double (*A)[n],double (*B)[n],int iniz);
  void visualize(int n, double (*A)[n], double (*B)[n], double r, int inizA,int inizB,int inizr);
  void traspose(int n, double (*A)[n], int iniz);
  void scalProd(int n, double (*A)[n], double r, int iniz);
  void sumMatrix(int n, double (*A)[n],double (*B)[n],int iniz);
  void swapMatrix(int n, double (*A)[n],double (*B)[n],int iniz);
  void inizMatrix(int n, double (*A)[n]);
  char menu(void);


  //Chiede con che dimensione lavorare
  int n=leggi_int("Inserisci la dimensione delle matrici\n>");

  double A[n][n], B[n][n],r;
  int inizA=0, inizB=0,inizr=0;
  while(1){
  switch (menu()) {
    case '1':
    inizMatrix(n,A);
    inizA=1;
    break;
    case '2':
    inizMatrix(n,B);
    inizB=1;
    break;
    case '3':
    r=leggi_double("r=");
    inizr=1;
    break;
    case '4':
    visualize(n,A,B,r,inizA,inizB,inizr);
    break;
    case '5':
    traspose(n,A,inizA);
    break;
    case '6':
    scalProd(n,A,r,inizA*inizr);
    break;
    case '7':
    sumMatrix(n,A,B,inizA*inizB);
    break;
    case '8':
    prodMatrix(n,A,B,inizA*inizB);
    break;
    case '9':
    swapMatrix(n,A,B,inizA*inizB);
    break;
    case 'x': case 'X':
    return 0;
    default:
    printf("Selezione errata\n");
    break;
  }
  }

  return 0;
}

//Stampa il menu e ritorna il carrattere scelto
char menu(void){
  printf("\n\n");
  printf("1.\tInserisci operando A.\n2.\tInserisci operando B.\n3.\tInserisci operando scalare r.\n");
  printf("4.\tVisualizza A,B ed r.\n5.\tTrasposta di A.\n6.\trA.\n7.\tA+B\n8.\tAB.\n");
  printf("9.\tScambia A e B.\nX.\tEsci.\n>");
  char c=getchar();
  if(c=!'\n')
  getchar();
  return c;
}

//Calcola il prodotto tra A e B e lo stampa
void prodMatrix( int n, double (*a)[n], double (*b)[n], int iniz){
  if(iniz==0)
    printf("Non hai ancora inserito o A o B\n");
  else{
  double temp;

  printf(">>\n");
  for(int i=0;i<n;i++){
    printf("|");
    for(int j=0;j<n;j++){
      temp=0;
      for(int k=0;k<n;k++)
        temp+=a[i][k]*b[k][j];
      printf("%g\t",temp);
    }
    printf("|\n");
    }
  }
}

// Visualizza il i dati fino ad ora inseriti.
void visualize(int n, double (*A)[n], double (*B)[n], double r, int inizA,int inizB,int inizr){
  //Stampa la matrice A
  if(inizA==1){
  printf(">>La matrice A e':\n");
  for(int i=0;i<n;i++){
    printf("|");
    for(int j=0;j<n;j++)
      printf("%g\t",A[i][j]);
    printf("|\n");
  }
  }
  //Stampa la matrice B
  if(inizB==1){
  printf(">>La matrice B e':\n");
  for(int i=0;i<n;i++){
    printf("|");
    for(int j=0;j<n;j++)
      printf("%g\t",B[i][j]);
    printf("|\n");
  }
  }
  //Stampa lo scalare r
  if(inizr==1)
  printf(">>Lo scalare r = %g\n",r);

  if(inizA==0&&inizB==0&&inizr==0)
    printf("Non hai inserito nessuno tra A, B e r");
}

//Calcola la trasposta e stampa il risultato
void traspose(int n, double (*A)[n], int iniz){
  if(iniz==0)
    printf("Non hai ancora inserito A");
    else{
      printf(">>\n");
      for(int i=0;i<n;i++){
        printf("|");
        for(int j=0;j<n;j++)
          printf("%g\t",A[j][i]);
        printf("|\n");
      }
    }
}

//Moltiplica la matrice per uno scalare e stampa il risultato
void scalProd(int n, double (*A)[n], double r, int iniz){
  if(iniz==0)
    printf("Non hai ancora inserito o A o r");
  else{
    printf(">>\n");
    for(int i=0;i<n;i++){
      printf("|");
      for(int j=0;j<n;j++)
        printf("%g\t",r*A[i][j]);
      printf("|\n");
    }
  }
}

//Somma le matrici e stampa il risultato
void sumMatrix(int n, double (*A)[n],double (*B)[n],int iniz){
  if(iniz==0)
    printf("Non hai ancora inserito o A o B");
  else{
    printf(">>\n");
    for(int i=0;i<n;i++){
      printf("|");
      for(int j=0;j<n;j++)
        printf("%g\t",A[i][j]+B[i][j]);
      printf("|\n");
    }
  }
}

// Scambia fra loro le matrici
void swapMatrix(int n, double (*A)[n],double (*B)[n],int iniz){
  double temp;
  if(iniz==0)
    printf("Non hai ancora inserito o A o B");
  else{
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++){
      temp=A[i][j];
      A[i][j]=B[i][j];
      B[i][j]=temp;
    }
  }
}

//Inizializza una data matrice
void inizMatrix(int n, double (*A)[n]){
  printf("Inserisci i valori della matrice secondo le righe\n");
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      A[i][j]=leggi_double(">");
}
