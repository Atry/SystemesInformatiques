/**************************************
 * ptr.c
 * 
 * Programme d'exemple pour les pointeurs
 *
 **************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  
  for(char **ptr=argv;*ptr!=NULL;ptr++) {
    printf("Pointeur : %p, cha�ne:%s\n",ptr,*ptr);
  }

}




