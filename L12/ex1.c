/*Lezione 12 - Esercizio 1*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXRIGHE 256
#define MAXCOL 256

void visualizza(int r, int c, char M[][c]);
void shift(int r, int c, char M[][c]);

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

  visualizza(r,c, M);

  shift(r,c,M);
  visualizza(r,c,M);

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
