/**************************************
 * longjmp.c
 *
 * Programme d'exemple de longjmp
 *
 *************************************/
///AAA
#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf label;

void f() {

  printf("D�but fonction f\n");
  if(setjmp(label)==0) {
    printf("Ex�cution normale \n");
  }
  else {
    printf("Ex�cution apr�s longjmp \n");
  }
}

void g() {
  printf("D�but fonction g\n");
  longjmp(label,1);
  printf("Ne sera jamais affich�\n");
}

int main (int argc, char *argv[])  {
  f();
  g();
  return(EXIT_SUCCESS);
}
///BBB
