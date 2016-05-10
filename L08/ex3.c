/*Lezione 8 - Esercizio 3*/
#include <stdio.h>

int main() {
  char str[BUFSIZ];
  while(1){
  fgets(str,BUFSIZ,stdin);//Reads the string
  if(str[0]=='\n')
    return 0;
  printf("%s",str);
}
}
