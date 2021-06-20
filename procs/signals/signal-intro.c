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
		//we wait for the child for 1 sec, other wise it 
		//will go on forever
		sleep(1); //sleep 1 sec
		kill(pid,SIGKILL);//send a kill signal
		wait(NULL); //wait for the child to terminate
		printf("Child is dead, lol\n");

	}




	return 0;
}
