/**************************************
 * initvar.c
 * 
 * Programme d'exemple sur le segment
 * de donn�es
 *
 **************************************/

#include <stdio.h>
#include <stdlib.h>

///AAA
#define MSG_LEN 10
int g;   // initialis� par le compilateur
int g_init=1252;
const int un=1;
int tab[3]={1,2,3};
int array[10000];
char cours[]="SINF1252";
char msg[MSG_LEN]; // initialis� par le compilateur

int main(int argc, char *argv[]) {
  int i;
  printf("g est � l'adresse %p et initialis�e � %d\n",&g,g);
  printf("msg est � l'a dresse %p contient les caract�res :",msg);
  for(i=0;i<MSG_LEN;i++)
    printf("%x ",msg[i]);
  printf("\n");
  printf("Cours est � l'adresse %p et contient : %s \n",&cours,cours);
  return(EXIT_SUCCESS);
}
///BBB
