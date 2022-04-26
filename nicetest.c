#include <kernel/types.h>
#include <kernel/stat.h>
#include <user/user.h>
#include <kernel/fcntl.h>

int main(int argc, char *argv[]) {
  int pid;
  int k;
  int x, z;

  int cprocesses;
  if(argc < 2)
	cprocesses = 1;
  else
	cprocesses = atoi(argv[1]);
  if (cprocesses < 0 ||cprocesses > 20)
	cprocesses = 2;
  x = 0;
  pid = 0;

  printf(1, "The number of child processes spawining is %d!\n", cprocesses);

  for ( k = 0; k < cprocesses; k++ ) {
    pid = fork ();
    if ( pid < 0 ) {
      printf(1, "%d failed to fork!\n", getpid());
    } else if (pid > 0) {
      // parent
      printf(1, "The parent process %d is creating the child process %d\n",getpid(), pid);
      wait();
      }else{
	printf(1,"Child %d created\n",getpid());
    long long j = 4000000000;

	//fork();

    int iCounter = 0;

    for(z = 0; z < j; z+=1)
        if (z % 400000000 == 0){
            printf(1, "Process %d has made %d points of progress\n",getpid(), iCounter);
            iCounter += 1;
        }
	    x = x + 12.76 * 53.25;
	break;
      }
  }
  exit();
}
