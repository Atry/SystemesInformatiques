/***********************************************
 * octal
 * 
 * Exemple d'erreur avec les nombres en octal
 *
 ***********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  ///AAA

  int i,j;
  i=65;   // d�cimal
  j=065;  // octal !!!
  if(i==j)
    printf("%d et %d sont �gaux \n",i,j);
  else
    printf("%d et %d sont diff�rents \n",i,j);

   ///BBB
   return(EXIT_SUCCESS);
}
