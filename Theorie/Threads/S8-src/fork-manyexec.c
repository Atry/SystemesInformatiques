/**************************************
 * fork-manyexec.c
 * 
 * Programme d'exemple d'utilisation de 
 * fork et execve
 *
 *************************************/
///AAA
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <libgen.h>

extern char **environ;

int main (int argc, char *argv[])  {
  int status;
  pid_t pid;

  for(int i=1;i<argc;i++) {
    // cr�ation du fils
    pid=fork();
    if (pid==-1) {
      perror("fork");
      exit(EXIT_FAILURE);
    }
    if (pid==0) {
      // fils
      printf ("Ex�cution de la commande %s [pid=%d]\n",argv[i],getpid());
      fflush(stdout);  
      char *arguments[2];
      arguments[0]=basename(argv[i]);
      arguments[1]=NULL;
      int err=execve(argv[i], arguments, environ);
      if(err!=0) 
	return(127);
    } // fils
    else {
      // processus p�re
      int fils=waitpid(pid,&status,0);
      if(fils==-1) {
	perror("wait");
	exit(EXIT_FAILURE);
      }
      if(WIFEXITED(status)) {
	if(WEXITSTATUS(status)==0)
	  printf("La commande %s [%d] s'est termin�e correctement\n",argv[i],fils);
	else
	  if (WEXITSTATUS(status)==127)
	    printf("La commande %s n'a pu �tre ex�cut�e\n",argv[i]);
	  else
	    printf("La commande %s [%d] a retourn� %d\n",argv[i],fils,WEXITSTATUS(status));
      }
      else {
	if( WIFSIGNALED(status)) 
	  printf("La commande %s [%d] ne s'est pas termin�e correctement\n",argv[i],fils);
      }
      fflush(stdout);
    } // p�re
  } // for loop
  return(EXIT_SUCCESS);
}
