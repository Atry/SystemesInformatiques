/**************************************
 * fork-ophan.c
 * 
 * Programme d'exemple d'utilisation de 
 * fork avec fils orphelin
 *
 *************************************/
///AAA
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int main (int argc, char *argv[])  {
  pid_t pid;

  pid=fork();

  if (pid==-1) {
    // erreur � l'ex�cution de fork
    perror("fork");
    exit(EXIT_FAILURE);
  }
  // pas d'erreur
  if (pid==0) {
    printf("Processus : %d, p�re : %d\n",getpid(),getppid());
    fflush(stdout);
    sleep(3);
    printf("Processus : %d, p�re : %d\n",getpid(),getppid());
    return(EXIT_SUCCESS);
  }
  else {
    // processus p�re
    sleep(1);
    printf("Fin du processus p�re [%d]\n",getpid());
    return(EXIT_FAILURE);
  }
}
///BBB
