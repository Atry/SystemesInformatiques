/**************************************
 * strtol.c
 *
 * Programme d'exemple d'utilisation de strtol
 *
 **************************************/
///AAA
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  char *p, *s;
  long li;
  s = "1252";
  li = strtol(s,&p,10);
  if(*p != '\0') {
    printf("Caract�re erronn� : %c\n",*p);
      // p pointe vers le caract�re en erreur
  }
  printf("Valeur convertie : %s -> %ld\n",s,li);

  s = "12m52";
  li = strtol(s,&p,10);
  if(*p != '\0') {
    printf("Caract�re erronn� : %c\n",*p);
  }
  printf("Valeur convertie : %s -> %ld\n",s,li);

  return(EXIT_SUCCESS);
}



