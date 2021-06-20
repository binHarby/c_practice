#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>
#include <signal.h>
int main(int argc, char* argv[]) {
	int pid = fork();
	if(pid==-1) return 1;

	if(pid==0) {
		while(1) {
			printf("Some text goes here \n");
			usleep(500000); //sleep for 500000 micro secs


		}
	}else {
		kill(pid,SIGSTOP);
		int t;
		do {
			printf("\n run child for how many seconds ? ");
			scanf("%d",&t);

			if (t>0) {
				kill(pid,SIGCONT);
				sleep(t);
				kill(pid,SIGSTOP);

			}

		} while(t>0);
		kill(pid,SIGKILL);
		//had to kill the child, other wise it would've been waiting
		wait(NULL); //wait for the child to terminate
		printf("Child is killed \n");

		//NOTE: please visit signal man pages, and check all avaliable signals
		//

	}




	return 0;
}
