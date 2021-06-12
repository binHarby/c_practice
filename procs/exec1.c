#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <time.h>


int main (int argc, char* argv[]){
	//when an execution command is called
	//it  takes over an entire processes
	//and acts like a 'return' statment
	int pid = fork();
	if(pid==-1) return 1;
	if(pid==0){
		
		execlp("ls","ls","-ahl",NULL,NULL,NULL);
	}else {
		wait(NULL);

		printf("Success!\n");	

	}

	return 0;
}
