#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<signal.h>
#include<sys/wait.h>

void handle_sigusr1(int sig){

	printf("Remeber to review math\n");

}
int main(int argc, char** argv){
	int pid = fork();
	if (pid==-1){
		return 1;
	}
	if(pid==0) {
		sleep(5);
		kill(getppid(),SIGUSR1);

	}else{
		struct sigaction sa = { 0 }; // this initilize all the members to 0 zero
		sa.sa_flags=SA_RESTART;
		sa.sa_handler = &handle_sigusr1;
		sigaction(SIGUSR1,&sa,NULL);

		int x, answer=15;
		printf("What is the answer? ");
		scanf("%d",&x);
		if(x==answer){
			printf("Right!\n");

		}else{
			printf("No\n");
		}
		wait(NULL);

	}



	return 0;
}
