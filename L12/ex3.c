/*Lezione 12 - Esercizio 3*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXRIGHE 256
#define MAXCOL 256

void visualizza(int r, int c, char M[][c]);
void shift(int r, int c, char M[][c]);
int uguali(int r,int c, char A[][c], char B[][c]);
void rifletti(int n, char M[][n]);
int speculare(int n, char M[][n]);

int main(void){
  int r,c;
  printf("Inserisci il numero di righe : ");
  scanf("%d",&r);
  while(getchar()!='\n');
  printf("Inserisci il numero di colonne : ");
  scanf("%d",&c);
  while(getchar()!='\n');

  if(r<=0||c<=0||r>MAXRIGHE||c>MAXCOL){
    printf("Il numero di colonne o righe e' sbagliato controlla che sia nel range [1,256].\n");
    return -1;
  }

  char M[r][c];

  srand(time(NULL));

  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      if(rand()%2==0)
        M[i][j]='+';
      else
        M[i][j]='-';

  char msg[]={"\n\n 1.\tMostra Matrice.\n 2.\tShift.\n 3.\tRiflessione.\n 4.\tControlla se speculare.\n 5.\tEsci.\n>>"};
  int scelta='1';
  while(scelta!='5'){
    printf("%s",msg);
    scelta=getchar();
    while(getchar()!='\n');
    switch(scelta){
      case '1':
      visualizza(r,c,M);
      break;
      case '2':
      shift(r,c,M);
      printf("Shift eseguito!\n");
      break;
      case '3':
      if(r!=c) {
        printf("La matrice non e' quadrata!\n");
        break;
      }
      rifletti(r,M);
      printf("Riflessione eseguita!\n");
      break;
      case '4':
      if(r!=c){
        printf("La matrice non e' quadrata!\n");
        break;
      }
      if(speculare(r,M))
        printf("La matrice e' speculare!\n");
      else
        printf("La matrice non e' speculare!\n");
        break;
      case '5':
      printf("Arrivederci!\n");
      break;
      default:
      printf("Scelta inesistente!\n");
      break;
    }
    }

    return 0;
}

void shift(int r, int c, char M[][c]){
  char tmp[c][r];

  for(int i=0;i<r;i++)
    for(int j=1;j<c;j++)
    tmp[i][j]=M[i][j-1];

  for(int i=0;i<r;i++)
    tmp[i][0]=M[i][c-1];

  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      M[i][j]=tmp[i][j];

  return;
}

void visualizza(int r,int c, char M[][c]){
  printf("\n\n");
  for(int i=0;i<r;i++){
    printf("\t|");
    for(int j=0;j<c;j++)
      printf("%2c",M[i][j]);
    printf("|\n");
  }
  return;
}

int uguali(int r,int c, char A[][c], char B[][c]){
  int check = 1;

  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      if(A[i][j]!=B[i][j])
        check=0;

  return check;
}

void rifletti(int n, char M[][n]){
  char aux;

  for (int i=0; i<n; i++)
		for (int j=0; j<n-i; j++) {
			aux=M[i][j];
			M[i][j]=M[n-j-1][n-i-1];
			M[n-j-1][n-i-1]=aux;
		}

    return;
}

int speculare(int n, char M[][n]){
  char tmp[n][n];

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      tmp[i][j]=M[i][j];

  rifletti(n,tmp);
  return uguali(n,n,tmp,M);
}
