/*Esame del 15 Giugno 2015*/
#include <stdio.h>
#include <math.h> //per fabs
#include <stdlib.h>//per atoi

// Typedef delle variabili necessarie
typedef struct punto {
  double x;
  double y;
} P;

typedef struct triangolo {
  P a;
  P b;
  P c;
} T;

//Dichiarazione delle funzioni ausiliarie:
double area(T *pt);
double det(double M[3][3]);
void leggi_tr(T *t, FILE *f);
void visualizza_ar(int n, T *tr);
void visualizza(T *trian);
int affind(T *t);
double media(double *, int);
int max(double *,int );

int main(int argc, char *argv[]){
  if(argc<2){
    printf("Inserisci il nome del file di dati.\n");
    return -1;
  }

  FILE *pf;
  if((pf=fopen(argv[1],"r"))==NULL){
    printf("Errore nella apertura del file %s.\n",argv[1]);
    return -1;
  }

  char letta[BUFSIZ];//legge il numero di triangoli da scandire
  fgets(letta,BUFSIZ,pf);
  int n = atoi(letta);

  T trian[n];//Inizializza l'array dei triangoli

  for(int i=0;i<n;i++)// Legge i triangoli da file
    leggi_tr(&trian[i],pf);

  fclose(pf);

  visualizza_ar(n,trian);

  if(argc>=3)//Eventuali opzioni con -s -S
    if(argv[2][0]=='-'&&(argv[2][1]=='s'||argv[2][1]=='S')){

      double a[n];
      for(int i=0;i<n;i++){
        a[i]=area(&trian[i]);
      }

      printf("Aeree dei triangoli:\n");//aere dei triangoli validi
      for(int i=0;i<n;i++)
        if(a[i])
          printf("Triangolo %d: %g\n",i+1,a[i]);

      printf("Media delle aeree: %g\n",media(a,n));//Medie delle aere di tutti i triangoli.
      printf("Triangolo di aerea massimale : %d\n",max(a,n));//Aerea massimale
    }

  return 0;
}

//Calcola la media delle aeree
double media(double *t, int n){
  double tot=0;
  for(int i=0;i<n;i++)
    tot+=t[i];

  return tot/n;
}

//Calcola l'indice del triangolo di aerea massima.
int max(double *t, int n){
  int maxIndice=1;
  double maxAerea =0;

  for(int i=0;i<n;i++)
    if(t[i]>maxAerea){
      maxIndice=i+1;
      maxAerea=t[i];
    }

    return maxIndice;
}
//stampa l'array di triangoli puntato da tr
void visualizza_ar(int n, T *tr){
  for(int i=0;i<n;i++){
    printf("Triangolo %d:",i+1);
    if(!affind(&tr[i]))
      printf(" [*NOTA*: Non e' davvero un triangolo.]");
    printf("\n");
    visualizza(&tr[i]);
  }

  return;
}

//visualizza le coordinate del triangolo puntato da tr
void visualizza(T *tr){
  printf("(%g,%g) ",tr->a.x,tr->a.y);
  printf("(%g,%g) ",tr->b.x,tr->b.y);
  printf("(%g,%g)\n",tr->c.x,tr->c.y);

  return;
}

//affinemente indipendente
int affind(T *t){
  if(area(t)==0)
    return 0;
  else
    return 1;
}

//legge un triangolo e lo salva in *t
void leggi_tr(T *t, FILE *f){
  fscanf(f,"(%lf,%lf) (%lf,%lf) (%lf,%lf)\n",&(t->a.x),&(t->a.y),&(t->b.x),&(t->b.y),&(t->c.x),&(t->c.y));

  return;
}
//calcola l'area del triangolo puntato
double area(T *pt){
  double M[3][3];
  for(int i=0;i<3;i++)
    M[i][2]=1;

  M[0][0] = pt->a.x;
  M[0][1] = pt->a.y;
  M[1][0] = pt->b.x;
  M[1][1] = pt->b.y;
  M[2][0] = pt->c.x;
  M[2][1] = pt->c.y;

  return fabs(det(M))*0.5;
}

//Calcolo del determinante di matrici 3x3, secondo laplace
double det(double M[3][3]){
  double D1, D2 , D3, d1,d2, d3;
  D1= M[0][0]* M[1][1]* M[2][2];
  D2= M[0][1]* M[1][2]* M[2][0];
  D3= M[0][2]* M[1][0]* M[2][1];
  d1= M[2][0]* M[1][1]* M[0][2];
  d2= M[2][1]* M[1][2]* M[0][0];
  d3= M[2][2]* M[1][0]* M[0][1];
  return (D1 + D2 + D3) - (d1+d2+d3);
}
