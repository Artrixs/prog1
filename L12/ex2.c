/*Lezione 12 - Esercizio 2*/
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
    printf("Il numero di colonne o righe è sbagliato controlla che sia nel range [1,256].\n");
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

  visualizza(r,c,M);

  rifletti(c,M);
  visualizza(r,c,M);
  printf("%d\n",speculare(c,M));

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
