/*Lezione 11 - Esercizio 4*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int addDouble(double **, double, int);
void boubleSort(double *, int);

int main(int argc, char * argv[]){
  if(argc<3){
    printf("Inserisci il nome di due file, da dove scrivere e ricopiare.\n");
    return -1;
  }
  double *pt = malloc(sizeof(double));
  if(pt==NULL){
    printf("Allocazione della memoria fallita.\n");
    return -1;
  }

  int n=0;
  FILE *pfFROM, *pfTO;
  pfFROM = fopen(argv[1],"r");
  pfTO = fopen(argv[2],"a");
  if(pfFROM == NULL || pfTO == NULL){
    printf("Errore nell'apertura dei file.\n");
    return -1;
  }

  double tmp;
  while(fscanf(pfFROM,"%lf\n",&tmp) != EOF)//Lettura
    n=addDouble(&pt,tmp,n);

  boubleSort(pt,n);//Riordino

  for(int i=0; i<n;i++)//Riscrittura
    fprintf(pfTO,"%g\n",pt[i]);

  free(pt);
  fclose(pfTO);
  fclose(pfFROM);
  return 0;
}

//Reorder an array of double of lenght n
void boubleSort(double *pt, int n){
  if(n<2)
    return;

  int scambio = 1;
  double tmp;

  while(scambio){
    scambio = 0;
    for(int i=0;i<n-1;i++){
      if(pt[i]>pt[i+1]){
        scambio=1;
        tmp=pt[i];
        pt[i]=pt[i+1];
        pt[i+1]=tmp;
      }
    }
  }

  return;
}

//Extend the array[n] by one and store the double of str in the last position,
//then return the new n.
int addDouble(double **point, double d, int n){

  n++;
  double *tmp = realloc(*point, sizeof(double)*n);
  if(tmp==NULL){
    printf("Errore nella allocazione di memoria.\n");
    return -1;
  }else
    *point=tmp;

  (*point)[n-1] = d;
  return n;
}
