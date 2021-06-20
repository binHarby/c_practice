#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>

int main(int argc, char* argv[]) {
	int pid = fork();
	if(pid==-1) return 1;

	if(pid==0) {
		while(1) {
			printf("Some text goes here \n");
			usleep(500000); //sleep for 500000 micro secs


		}
	}else {
		wait(NULL);

	}




	return 0;
}
