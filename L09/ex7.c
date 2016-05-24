/*lezione 9 - Esercizio 7*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
  int indice(char *s);

  if(argc!=2){
    printf("Non hai inserito il giusto numero di argomenti.\n");
    return -1;
  }
  switch(indice(argv[1])){
    case 0:
    printf("Monday\n");
    break;
    case 1:
    printf("Tuesday\n");
    break;
    case 2:
    printf("Wednesday\n");
    break;
    case 3:
    printf("Thursday\n");
    break;
    case 4:
    printf("Friday\n");
    break;
    case 5:
    printf("Saturday\n");
    break;
    case 6:
    printf("Sunday\n");
    break;
    default:
    printf("Errore non hai inserito il nome di un giorno(non usare accenti)\n");
    break;
  }
  return 0;
}

int indice(char *s){
  char *giorni[] = {"lunedi","martedi","mercoledi","giovedi","venerdi","sabato","domenica"};
  for(int i=0;s[i]!='\0';i++)
    s[i]=tolower(s[i]); //Normalizza la stringa

  for(int i=0;i<=6;i++)
    if(strcmp(s,giorni[i])==0)
      return i;

  return -1;
}
