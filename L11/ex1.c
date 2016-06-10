/*Lezione 11 - Esercizio 1*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void cleanString(char *);
int initString(double **);
int addDouble(double ***, char *, int);
void boubleSort(double *, int);

int main(void){
  double *pt = malloc(sizeof(double));
  int n=initString(&pt);

  boubleSort(pt,n);

  printf("\nL'array ordinato e' [");
  for(int i=0;i<n;i++)
    printf("%g,",pt[i]);

  printf("]\n\n");

  free(pt);
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
//Read a string, store in the array pointed by pt, and return the number of values in the array
int initString(double **pt){
  if(*pt==NULL){
    printf("Memoria non allocata.\n");
    return -1;
  }

  char string[BUFSIZ], aux[BUFSIZ];
  printf("Inserisci una serie di double:\n");
  fgets(string,BUFSIZ,stdin);
  cleanString(string);

  int l=0, larray=0;
  for(int i=0;string[i]!='\0';i++)
    if(string[i]==','){
      aux[l]='\0';
      larray = addDouble(&pt,aux,larray);
      l=0;
    }else{
      aux[l]=string[i];
      l++;
    }
  //  printf("read string = %ps\n",pt);
  return larray;
}

//Extend the array[n] by one and store the double of str in the last position,
//then return the new n.
int addDouble(double ***point, char *str, int n){

  n++;
  double *tmp = realloc(**point, sizeof(double)*n);
  if(tmp==NULL){
    printf("Errore nella allocazione di memoria.\n");
    return -1;
  }else
    **point=tmp;

  (**point)[n-1] = atof(str);
  return n;
}

//Format string as double,double ...
void cleanString(char *str){
  for(int i=0;str[i]!='\0';i++)
    if(!(str[i]=='.'||isdigit(str[i])||str[i]=='-'))
      str[i]='\n';

  int l=0;
  char tmp[BUFSIZ];
  for(int i=0;str[i]!='\0';i++){
    if(str[i]!='\n'){
      tmp[l]=str[i];
      l++;
    }else if(str[i-1]!='\n'){
      tmp[l]=',';
      l++;
    }
  }
  tmp[l]='\0';

  if(tmp[0]==','){
    for(l=0;tmp[l]!='\0';l++)
      tmp[l]=tmp[l+1];
    l++;
    tmp[l]='\0';
  }

  strcpy(str,tmp);
  return;
}
